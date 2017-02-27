#include <iostream>
#include <string>

#include <algorithm>
#include <barrett/units.h>
#include <barrett/systems.h>
#include <barrett/products/product_manager.h>
#include <barrett/detail/stl_utils.h>
#include <barrett/systems/abstract/single_io.h>
#include <barrett/standard_main_function.h>
#include <math.h>
using namespace barrett;

template <size_t DOF>
class JpTraj : public systems::SingleIO<double, typename units::JointPositions<DOF>::type>
{
  BARRETT_UNITS_TEMPLATE_TYPEDEFS(DOF);

public:

// Constructor
JpTraj(double * j1, double * j2, double * j3, double * j4, double * j5, double * j6, double * j7, double * ts, int vsize, float freq, const std::string& sysName = "JpTrajectory") :
		systems::SingleIO<double, jp_type>(sysName), j1_ptr(j1), j2_ptr(j2), j3_ptr(j3), j4_ptr(j4), j5_ptr(j5), j6_ptr(j6), j7_ptr(j7), ts_ptr(ts), vec_size(vsize), dt(1/freq), completed(false) {}

bool trajectoryIsComplete(void)
{
  if (completed == true) { return true;}
  else return false;

}

// Destructor
virtual ~JpTraj() { this->mandatoryCleanUp(); }

protected:
double cur_t;
jp_type jp;
double * j1_ptr;
double * j2_ptr;
double * j3_ptr;
double * j4_ptr;
double * j5_ptr;
double * j6_ptr;
double * j7_ptr;
double * ts_ptr;
int vec_size;
double dt;
bool completed;

	virtual void operate()
	{
    cur_t = this->input.getValue(); // current input from ramp
    if( cur_t > *(ts_ptr + vec_size-1) ) completed = true;
    else
    {
      //if( fmod(cur_t, dt) > 0) // check if linear interpolation is required
      //{
        uint index1 = (int) (cur_t/dt); // truncate to get the quotient
        uint index2 = index1 + 1;
        float rem = fmod(cur_t, dt);
        jp[0] = *(j1_ptr + index1) + ( ( *(j1_ptr + index2) - *(j1_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[1] = *(j2_ptr + index1) + ( ( *(j2_ptr + index2) - *(j2_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[2] = *(j3_ptr + index1) + ( ( *(j3_ptr + index2) - *(j3_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[3] = *(j4_ptr + index1) + ( ( *(j4_ptr + index2) - *(j4_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[4] = *(j5_ptr + index1) + ( ( *(j5_ptr + index2) - *(j5_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[5] = *(j6_ptr + index1) + ( ( *(j6_ptr + index2) - *(j6_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
        jp[6] = *(j7_ptr + index1) + ( ( *(j7_ptr + index2) - *(j7_ptr + index1) ) / ( *(ts_ptr + index2) - *(ts_ptr + index1) ) ) * rem;
      //}
      // else
      // {
      //   uint index = cur_t/dt;
      //   jp[0] = *(j1_ptr + index);
      //   jp[1] = *(j1_ptr + index);
      //   jp[2] = *(j1_ptr + index);
      //   jp[3] = *(j1_ptr + index);
      //   jp[4] = *(j1_ptr + index);
      //   jp[5] = *(j1_ptr + index);
      //   jp[6] = *(j1_ptr + index);
      // }

    }

    this->outputValue->setData(&jp); // send joint position command
	}

private:
	DISALLOW_COPY_AND_ASSIGN(JpTraj);
};
