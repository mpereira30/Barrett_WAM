# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from wam_msgs/RTCartVel.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class RTCartVel(genpy.Message):
  _md5sum = "bde6e49ce1902bc915138d25af0e9ef1"
  _type = "wam_msgs/RTCartVel"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32[3] direction
float32    magnitude
"""
  __slots__ = ['direction','magnitude']
  _slot_types = ['float32[3]','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       direction,magnitude

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RTCartVel, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.direction is None:
        self.direction = [0.,0.,0.]
      if self.magnitude is None:
        self.magnitude = 0.
    else:
      self.direction = [0.,0.,0.]
      self.magnitude = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_struct_3f.pack(*self.direction))
      buff.write(_struct_f.pack(self.magnitude))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 12
      self.direction = _struct_3f.unpack(str[start:end])
      start = end
      end += 4
      (self.magnitude,) = _struct_f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(self.direction.tostring())
      buff.write(_struct_f.pack(self.magnitude))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 12
      self.direction = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 4
      (self.magnitude,) = _struct_f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3f = struct.Struct("<3f")
_struct_f = struct.Struct("<f")
