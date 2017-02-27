# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/Interfaces.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import robotnik_msgs.msg

class Interfaces(genpy.Message):
  _md5sum = "2cae798f4cdadfdb2326b84ac55dc3ea"
  _type = "robotnik_msgs/Interfaces"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Contains the total number of bytes and pkts
Data total
# Contains information of every interface
Data[] interfaces


================================================================================
MSG: robotnik_msgs/Data
string interface
float32 bytes_sent
float32 bytes_received
string units_sent
string units_received
int32 packages_sent
int32 packages_received

"""
  __slots__ = ['total','interfaces']
  _slot_types = ['robotnik_msgs/Data','robotnik_msgs/Data[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       total,interfaces

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Interfaces, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.total is None:
        self.total = robotnik_msgs.msg.Data()
      if self.interfaces is None:
        self.interfaces = []
    else:
      self.total = robotnik_msgs.msg.Data()
      self.interfaces = []

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
      _x = self.total.interface
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2f.pack(_x.total.bytes_sent, _x.total.bytes_received))
      _x = self.total.units_sent
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.total.units_received
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2i.pack(_x.total.packages_sent, _x.total.packages_received))
      length = len(self.interfaces)
      buff.write(_struct_I.pack(length))
      for val1 in self.interfaces:
        _x = val1.interface
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2f.pack(_x.bytes_sent, _x.bytes_received))
        _x = val1.units_sent
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.units_received
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2i.pack(_x.packages_sent, _x.packages_received))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.total is None:
        self.total = robotnik_msgs.msg.Data()
      if self.interfaces is None:
        self.interfaces = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.interface = str[start:end].decode('utf-8')
      else:
        self.total.interface = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.total.bytes_sent, _x.total.bytes_received,) = _struct_2f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.units_sent = str[start:end].decode('utf-8')
      else:
        self.total.units_sent = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.units_received = str[start:end].decode('utf-8')
      else:
        self.total.units_received = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.total.packages_sent, _x.total.packages_received,) = _struct_2i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.interfaces = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.Data()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.interface = str[start:end].decode('utf-8')
        else:
          val1.interface = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.bytes_sent, _x.bytes_received,) = _struct_2f.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.units_sent = str[start:end].decode('utf-8')
        else:
          val1.units_sent = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.units_received = str[start:end].decode('utf-8')
        else:
          val1.units_received = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.packages_sent, _x.packages_received,) = _struct_2i.unpack(str[start:end])
        self.interfaces.append(val1)
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
      _x = self.total.interface
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2f.pack(_x.total.bytes_sent, _x.total.bytes_received))
      _x = self.total.units_sent
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.total.units_received
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2i.pack(_x.total.packages_sent, _x.total.packages_received))
      length = len(self.interfaces)
      buff.write(_struct_I.pack(length))
      for val1 in self.interfaces:
        _x = val1.interface
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2f.pack(_x.bytes_sent, _x.bytes_received))
        _x = val1.units_sent
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.units_received
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_struct_2i.pack(_x.packages_sent, _x.packages_received))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.total is None:
        self.total = robotnik_msgs.msg.Data()
      if self.interfaces is None:
        self.interfaces = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.interface = str[start:end].decode('utf-8')
      else:
        self.total.interface = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.total.bytes_sent, _x.total.bytes_received,) = _struct_2f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.units_sent = str[start:end].decode('utf-8')
      else:
        self.total.units_sent = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.total.units_received = str[start:end].decode('utf-8')
      else:
        self.total.units_received = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.total.packages_sent, _x.total.packages_received,) = _struct_2i.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.interfaces = []
      for i in range(0, length):
        val1 = robotnik_msgs.msg.Data()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.interface = str[start:end].decode('utf-8')
        else:
          val1.interface = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.bytes_sent, _x.bytes_received,) = _struct_2f.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.units_sent = str[start:end].decode('utf-8')
        else:
          val1.units_sent = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.units_received = str[start:end].decode('utf-8')
        else:
          val1.units_received = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.packages_sent, _x.packages_received,) = _struct_2i.unpack(str[start:end])
        self.interfaces.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2f = struct.Struct("<2f")
_struct_2i = struct.Struct("<2i")
