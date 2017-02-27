# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/Data.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Data(genpy.Message):
  _md5sum = "beae478f52d7795f673d8edc9e4295a2"
  _type = "robotnik_msgs/Data"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string interface
float32 bytes_sent
float32 bytes_received
string units_sent
string units_received
int32 packages_sent
int32 packages_received

"""
  __slots__ = ['interface','bytes_sent','bytes_received','units_sent','units_received','packages_sent','packages_received']
  _slot_types = ['string','float32','float32','string','string','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       interface,bytes_sent,bytes_received,units_sent,units_received,packages_sent,packages_received

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Data, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.interface is None:
        self.interface = ''
      if self.bytes_sent is None:
        self.bytes_sent = 0.
      if self.bytes_received is None:
        self.bytes_received = 0.
      if self.units_sent is None:
        self.units_sent = ''
      if self.units_received is None:
        self.units_received = ''
      if self.packages_sent is None:
        self.packages_sent = 0
      if self.packages_received is None:
        self.packages_received = 0
    else:
      self.interface = ''
      self.bytes_sent = 0.
      self.bytes_received = 0.
      self.units_sent = ''
      self.units_received = ''
      self.packages_sent = 0
      self.packages_received = 0

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
      _x = self.interface
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2f.pack(_x.bytes_sent, _x.bytes_received))
      _x = self.units_sent
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.units_received
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2i.pack(_x.packages_sent, _x.packages_received))
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
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.interface = str[start:end].decode('utf-8')
      else:
        self.interface = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.bytes_sent, _x.bytes_received,) = _struct_2f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.units_sent = str[start:end].decode('utf-8')
      else:
        self.units_sent = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.units_received = str[start:end].decode('utf-8')
      else:
        self.units_received = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.packages_sent, _x.packages_received,) = _struct_2i.unpack(str[start:end])
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
      _x = self.interface
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2f.pack(_x.bytes_sent, _x.bytes_received))
      _x = self.units_sent
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.units_received
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
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
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.interface = str[start:end].decode('utf-8')
      else:
        self.interface = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.bytes_sent, _x.bytes_received,) = _struct_2f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.units_sent = str[start:end].decode('utf-8')
      else:
        self.units_sent = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.units_received = str[start:end].decode('utf-8')
      else:
        self.units_received = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.packages_sent, _x.packages_received,) = _struct_2i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2f = struct.Struct("<2f")
_struct_2i = struct.Struct("<2i")
