# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from yolov8_msgs/BoundingBox2D.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import yolov8_msgs.msg

class BoundingBox2D(genpy.Message):
  _md5sum = "7a678d71f8998ae4690f9ad4663f405f"
  _type = "yolov8_msgs/BoundingBox2D"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# 2D position and orientation of the bounding box center
yolov8_msgs/Pose2D center

# total size of the bounding box, in pixels, surrounding the object's center
yolov8_msgs/Vector2 size

# id of the keypoint
int32 id

================================================================================
MSG: yolov8_msgs/Pose2D
# 2D position in pixel coordinates

yolov8_msgs/Point2D position
float64 theta
================================================================================
MSG: yolov8_msgs/Point2D
# 2D point in pixel coordinates

float64 x
float64 y
================================================================================
MSG: yolov8_msgs/Vector2
# 2D size in pixel

float64 x
float64 y"""
  __slots__ = ['center','size','id']
  _slot_types = ['yolov8_msgs/Pose2D','yolov8_msgs/Vector2','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       center,size,id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BoundingBox2D, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.center is None:
        self.center = yolov8_msgs.msg.Pose2D()
      if self.size is None:
        self.size = yolov8_msgs.msg.Vector2()
      if self.id is None:
        self.id = 0
    else:
      self.center = yolov8_msgs.msg.Pose2D()
      self.size = yolov8_msgs.msg.Vector2()
      self.id = 0

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
      buff.write(_get_struct_5di().pack(_x.center.position.x, _x.center.position.y, _x.center.theta, _x.size.x, _x.size.y, _x.id))
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
      if self.center is None:
        self.center = yolov8_msgs.msg.Pose2D()
      if self.size is None:
        self.size = yolov8_msgs.msg.Vector2()
      end = 0
      _x = self
      start = end
      end += 44
      (_x.center.position.x, _x.center.position.y, _x.center.theta, _x.size.x, _x.size.y, _x.id,) = _get_struct_5di().unpack(str[start:end])
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
      buff.write(_get_struct_5di().pack(_x.center.position.x, _x.center.position.y, _x.center.theta, _x.size.x, _x.size.y, _x.id))
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
      if self.center is None:
        self.center = yolov8_msgs.msg.Pose2D()
      if self.size is None:
        self.size = yolov8_msgs.msg.Vector2()
      end = 0
      _x = self
      start = end
      end += 44
      (_x.center.position.x, _x.center.position.y, _x.center.theta, _x.size.x, _x.size.y, _x.id,) = _get_struct_5di().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5di = None
def _get_struct_5di():
    global _struct_5di
    if _struct_5di is None:
        _struct_5di = struct.Struct("<5di")
    return _struct_5di
