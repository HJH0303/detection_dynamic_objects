# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from map_manager/RandomSampleRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class RandomSampleRequest(genpy.Message):
  _md5sum = "e7efa50c43bd88b2bcce1b7386a5336b"
  _type = "map_manager/RandomSampleRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64 xsize
float64 ysize
float64 zsize
bool ignore_unknown
"""
  __slots__ = ['xsize','ysize','zsize','ignore_unknown']
  _slot_types = ['float64','float64','float64','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       xsize,ysize,zsize,ignore_unknown

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RandomSampleRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.xsize is None:
        self.xsize = 0.
      if self.ysize is None:
        self.ysize = 0.
      if self.zsize is None:
        self.zsize = 0.
      if self.ignore_unknown is None:
        self.ignore_unknown = False
    else:
      self.xsize = 0.
      self.ysize = 0.
      self.zsize = 0.
      self.ignore_unknown = False

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
      _x = self
      buff.write(_get_struct_3dB().pack(_x.xsize, _x.ysize, _x.zsize, _x.ignore_unknown))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 25
      (_x.xsize, _x.ysize, _x.zsize, _x.ignore_unknown,) = _get_struct_3dB().unpack(str[start:end])
      self.ignore_unknown = bool(self.ignore_unknown)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3dB().pack(_x.xsize, _x.ysize, _x.zsize, _x.ignore_unknown))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 25
      (_x.xsize, _x.ysize, _x.zsize, _x.ignore_unknown,) = _get_struct_3dB().unpack(str[start:end])
      self.ignore_unknown = bool(self.ignore_unknown)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3dB = None
def _get_struct_3dB():
    global _struct_3dB
    if _struct_3dB is None:
        _struct_3dB = struct.Struct("<3dB")
    return _struct_3dB
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from map_manager/RandomSampleResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class RandomSampleResponse(genpy.Message):
  _md5sum = "52d0ade995d52d04cae303675aa442a7"
  _type = "map_manager/RandomSampleResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64 x
float64 y
float64 z
float64 yaw
"""
  __slots__ = ['x','y','z','yaw']
  _slot_types = ['float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x,y,z,yaw

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RandomSampleResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.x is None:
        self.x = 0.
      if self.y is None:
        self.y = 0.
      if self.z is None:
        self.z = 0.
      if self.yaw is None:
        self.yaw = 0.
    else:
      self.x = 0.
      self.y = 0.
      self.z = 0.
      self.yaw = 0.

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
      _x = self
      buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.yaw))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x, _x.y, _x.z, _x.yaw,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.yaw))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 32
      (_x.x, _x.y, _x.z, _x.yaw,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
class RandomSample(object):
  _type          = 'map_manager/RandomSample'
  _md5sum = '498b6ea7d13c53a4744bbed23ba7fed1'
  _request_class  = RandomSampleRequest
  _response_class = RandomSampleResponse
