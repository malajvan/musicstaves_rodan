
        
    
  #include "gameramodule.hpp"
  #include "knnmodule.hpp"

        #include "stable_path.hpp"
  
    #include <string>
  #include <stdexcept>
  #include "Python.h"
  #include <list>

  using namespace Gamera;
  
        
    #ifndef _MSC_VER
  extern "C" {
    void init_stable_path(void);
  }
#endif

                static PyObject* call_stablePathDetection(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      int with_trimming_arg;
                      int with_deletion_arg;
                      int with_staff_fixing_arg;
                      int enable_strong_staff_pixels_arg;
                      int staffline_height_arg;
                      int staffspace_height_arg;
      
                                      if (PyArg_ParseTuple(args,  "Oiiiiii:stablePathDetection"
                        ,
             &self_pyarg                        ,
             &with_trimming_arg                        ,
             &with_deletion_arg                        ,
             &with_staff_fixing_arg                        ,
             &enable_strong_staff_pixels_arg                        ,
             &staffline_height_arg                        ,
             &staffspace_height_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                                                                                                  
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = stablePathDetection(*((OneBitImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case CC:
return_arg = stablePathDetection(*((Cc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = stablePathDetection(*((OneBitRleImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case RLECC:
return_arg = stablePathDetection(*((RleCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case MLCC:
return_arg = stablePathDetection(*((MlCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'stablePathDetection' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                                                                                                                        if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_drawAllGraphPaths(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "O:drawAllGraphPaths"
                        ,
             &self_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = drawAllGraphPaths(*((OneBitImageView*)self_arg));
break;
case CC:
return_arg = drawAllGraphPaths(*((Cc*)self_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = drawAllGraphPaths(*((OneBitRleImageView*)self_arg));
break;
case RLECC:
return_arg = drawAllGraphPaths(*((RleCc*)self_arg));
break;
case MLCC:
return_arg = drawAllGraphPaths(*((MlCc*)self_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'drawAllGraphPaths' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_overlayStaves(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      Image* Primary_Image_arg;
PyObject* Primary_Image_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "OO:overlayStaves"
                        ,
             &self_pyarg                        ,
             &Primary_Image_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                      if (!is_ImageObject(Primary_Image_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'Primary Image' must be an image");
          return 0;
        }
        Primary_Image_arg = ((Image*)((RectObject*)Primary_Image_pyarg)->m_x);
        image_get_fv(Primary_Image_pyarg, &Primary_Image_arg->features, &Primary_Image_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case RGBIMAGEVIEW:
switch(get_image_combination(Primary_Image_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = overlayStaves(*((RGBImageView*)self_arg), *((OneBitImageView*)Primary_Image_arg));
break;
case CC:
return_arg = overlayStaves(*((RGBImageView*)self_arg), *((Cc*)Primary_Image_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = overlayStaves(*((RGBImageView*)self_arg), *((OneBitRleImageView*)Primary_Image_arg));
break;
case RLECC:
return_arg = overlayStaves(*((RGBImageView*)self_arg), *((RleCc*)Primary_Image_arg));
break;
case MLCC:
return_arg = overlayStaves(*((RGBImageView*)self_arg), *((MlCc*)Primary_Image_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'Primary Image' argument of 'overlayStaves' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(Primary_Image_pyarg));
return 0;
}
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'overlayStaves' can not have pixel type '%s'. Acceptable value is RGB.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                              if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_subimageStablePathDetection(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      Point topLeft_arg;
PyObject* topLeft_pyarg;
                      Point bottomRight_arg;
PyObject* bottomRight_pyarg;
                      int with_trimming_arg;
                      int with_deletion_arg;
                      int with_staff_fixing_arg;
                      int enable_strong_staff_pixels_arg;
                      int staffline_height_arg;
                      int staffspace_height_arg;
      
                                      if (PyArg_ParseTuple(args,  "OOOiiiiii:subimageStablePathDetection"
                        ,
             &self_pyarg                        ,
             &topLeft_pyarg                        ,
             &bottomRight_pyarg                        ,
             &with_trimming_arg                        ,
             &with_deletion_arg                        ,
             &with_staff_fixing_arg                        ,
             &enable_strong_staff_pixels_arg                        ,
             &staffline_height_arg                        ,
             &staffspace_height_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                      
      try {
         topLeft_arg = coerce_Point(topLeft_pyarg);
      } catch (const std::invalid_argument& e) {
         PyErr_SetString(PyExc_TypeError, "Argument 'topLeft' must be a Point, or convertible to a Point");
         return 0;
      }
                    
      try {
         bottomRight_arg = coerce_Point(bottomRight_pyarg);
      } catch (const std::invalid_argument& e) {
         PyErr_SetString(PyExc_TypeError, "Argument 'bottomRight' must be a Point, or convertible to a Point");
         return 0;
      }
                                                                                                
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = subimageStablePathDetection(*((OneBitImageView*)self_arg), topLeft_arg, bottomRight_arg, with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case CC:
return_arg = subimageStablePathDetection(*((Cc*)self_arg), topLeft_arg, bottomRight_arg, with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = subimageStablePathDetection(*((OneBitRleImageView*)self_arg), topLeft_arg, bottomRight_arg, with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case RLECC:
return_arg = subimageStablePathDetection(*((RleCc*)self_arg), topLeft_arg, bottomRight_arg, with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case MLCC:
return_arg = subimageStablePathDetection(*((MlCc*)self_arg), topLeft_arg, bottomRight_arg, with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'subimageStablePathDetection' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                                                                                                                                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_setOfStablePathPoints(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                PyObject* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      int with_trimming_arg;
                      int with_deletion_arg;
                      int with_staff_fixing_arg;
                      int enable_strong_staff_pixels_arg;
                      int staffline_height_arg;
                      int staffspace_height_arg;
      
                                      if (PyArg_ParseTuple(args,  "Oiiiiii:setOfStablePathPoints"
                        ,
             &self_pyarg                        ,
             &with_trimming_arg                        ,
             &with_deletion_arg                        ,
             &with_staff_fixing_arg                        ,
             &enable_strong_staff_pixels_arg                        ,
             &staffline_height_arg                        ,
             &staffspace_height_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                                                                                                  
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = setOfStablePathPoints(*((OneBitImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case CC:
return_arg = setOfStablePathPoints(*((Cc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = setOfStablePathPoints(*((OneBitRleImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case RLECC:
return_arg = setOfStablePathPoints(*((RleCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case MLCC:
return_arg = setOfStablePathPoints(*((MlCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'setOfStablePathPoints' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                                                                                                                        if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = return_arg;              return return_pyarg;
            }
                              }
                static PyObject* call_deleteStablePaths(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "O:deleteStablePaths"
                        ,
             &self_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = deleteStablePaths(*((OneBitImageView*)self_arg));
break;
case CC:
return_arg = deleteStablePaths(*((Cc*)self_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = deleteStablePaths(*((OneBitRleImageView*)self_arg));
break;
case RLECC:
return_arg = deleteStablePaths(*((RleCc*)self_arg));
break;
case MLCC:
return_arg = deleteStablePaths(*((MlCc*)self_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'deleteStablePaths' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_findStablePaths(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "O:findStablePaths"
                        ,
             &self_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = findStablePaths(*((OneBitImageView*)self_arg));
break;
case CC:
return_arg = findStablePaths(*((Cc*)self_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = findStablePaths(*((OneBitRleImageView*)self_arg));
break;
case RLECC:
return_arg = findStablePaths(*((RleCc*)self_arg));
break;
case MLCC:
return_arg = findStablePaths(*((MlCc*)self_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'findStablePaths' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_removeStaves(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      int staffline_height_arg;
                      int staffspace_height_arg;
      
                                      if (PyArg_ParseTuple(args,  "Oii:removeStaves"
                        ,
             &self_pyarg                        ,
             &staffline_height_arg                        ,
             &staffspace_height_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                                          
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = removeStaves(*((OneBitImageView*)self_arg), staffline_height_arg, staffspace_height_arg);
break;
case CC:
return_arg = removeStaves(*((Cc*)self_arg), staffline_height_arg, staffspace_height_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = removeStaves(*((OneBitRleImageView*)self_arg), staffline_height_arg, staffspace_height_arg);
break;
case RLECC:
return_arg = removeStaves(*((RleCc*)self_arg), staffline_height_arg, staffspace_height_arg);
break;
case MLCC:
return_arg = removeStaves(*((MlCc*)self_arg), staffline_height_arg, staffspace_height_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'removeStaves' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                                                if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_displayWeights(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "O:displayWeights"
                        ,
             &self_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = displayWeights(*((OneBitImageView*)self_arg));
break;
case CC:
return_arg = displayWeights(*((Cc*)self_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = displayWeights(*((OneBitRleImageView*)self_arg));
break;
case RLECC:
return_arg = displayWeights(*((RleCc*)self_arg));
break;
case MLCC:
return_arg = displayWeights(*((MlCc*)self_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'displayWeights' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_drawAllStablePaths(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
      
                                      if (PyArg_ParseTuple(args,  "O:drawAllStablePaths"
                        ,
             &self_pyarg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
              
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = drawAllStablePaths(*((OneBitImageView*)self_arg));
break;
case CC:
return_arg = drawAllStablePaths(*((Cc*)self_arg));
break;
case ONEBITRLEIMAGEVIEW:
return_arg = drawAllStablePaths(*((OneBitRleImageView*)self_arg));
break;
case RLECC:
return_arg = drawAllStablePaths(*((RleCc*)self_arg));
break;
case MLCC:
return_arg = drawAllStablePaths(*((MlCc*)self_arg));
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'drawAllStablePaths' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                            if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = create_ImageObject(return_arg);              return return_pyarg;
            }
                              }
                static PyObject* call_get_stable_path_staff_skeletons(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                PyObject* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      int with_trimming_arg;
                      int with_deletion_arg;
                      int with_staff_fixing_arg;
                      int enable_strong_staff_pixels_arg;
                      int staffline_height_arg;
                      int staffspace_height_arg;
      
                                      if (PyArg_ParseTuple(args,  "Oiiiiii:get_stable_path_staff_skeletons"
                        ,
             &self_pyarg                        ,
             &with_trimming_arg                        ,
             &with_deletion_arg                        ,
             &with_staff_fixing_arg                        ,
             &enable_strong_staff_pixels_arg                        ,
             &staffline_height_arg                        ,
             &staffspace_height_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                                                                                                  
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = get_stable_path_staff_skeletons(*((OneBitImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case CC:
return_arg = get_stable_path_staff_skeletons(*((Cc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = get_stable_path_staff_skeletons(*((OneBitRleImageView*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case RLECC:
return_arg = get_stable_path_staff_skeletons(*((RleCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
case MLCC:
return_arg = get_stable_path_staff_skeletons(*((MlCc*)self_arg), with_trimming_arg, with_deletion_arg, with_staff_fixing_arg, enable_strong_staff_pixels_arg, staffline_height_arg, staffspace_height_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'get_stable_path_staff_skeletons' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
return 0;
}
                  } catch (std::exception& e) {
          PyErr_SetString(PyExc_RuntimeError, e.what());
          return 0;
        }
      
                                                                                                                                                        if (return_arg== nullptr) {
              if (PyErr_Occurred() == nullptr) {
                Py_XINCREF(Py_None);
                return Py_None;
               } else
                return nullptr;
            } else {
              return_pyarg = return_arg;              return return_pyarg;
            }
                              }
            
          static PyMethodDef _stable_path_methods[] = {
                  {  "stablePathDetection",
          call_stablePathDetection, METH_VARARGS,
           "**stablePathDetection** (``bool`` *with_trimming* = True, ``bool`` *with_deletion* = False, ``bool`` *with_staff_fixing* = False, ``bool`` *enable_strong_staff_pixels* = False, int *staffline_height* = 0, int *staffspace_height* = 0)\n\nDetects and displays the stafflines.\n        with_trimming:\n            Trims staff sets where white space or ornamentations are found.\n        with_deletion:\n            If checked, the image will be processed once, keeping what it finds to be the staves and then the code is run again. More accurate for images with a lot of lyrics or ornamentation.\n        with_staff_fixing:\n            Uses the slopes of staff sets to fix staff lines that differ wildly from the slope at specific intervals\n        enable_strong_staff_pixels:\n            Experimental method that reduces the weights of vertical runs that are the exact width of staffline_height and are exactly staffspace_height away from the closest black pixel\n        staffline_height and staffspace_height:\n            If left as 0 they will be found by the plugin"        },
                        {  "drawAllGraphPaths",
          call_drawAllGraphPaths, METH_VARARGS,
           "**drawAllGraphPaths** ()\n\nExperimental and used for testing. Displays all the graph paths found going from right to left on the first iteration of the code. "        },
                        {  "overlayStaves",
          call_overlayStaves, METH_VARARGS,
           "**overlayStaves** (``Image`` [OneBit] *Primary Image*)\n\nOverlays the found staves from one image onto another image"        },
                        {  "subimageStablePathDetection",
          call_subimageStablePathDetection, METH_VARARGS,
           "**subimageStablePathDetection** (``Point`` *topLeft*, ``Point`` *bottomRight*, ``bool`` *with_trimming* = True, ``bool`` *with_deletion* = False, ``bool`` *with_staff_fixing* = False, ``bool`` *enable_strong_staff_pixels* = False, int *staffline_height* = 0, int *staffspace_height* = 0)\n\nDisplays the trimmed stable paths for a subset of the image\n        with_trimming:\n            Trims staff sets where white space or ornamentations are found.\n        with_deletion:\n            If checked, the image will be processed once, keeping what it finds to be the staves and then the code is run again. More accurate for images with a lot of lyrics or ornamentation.\n        with_staff_fixing:\n            Uses the slopes of staff sets to fix staff lines that differ wildly from the slope at specific intervals\n        enable_strong_staff_pixels:\n            Experimental method that reduces the weights of vertical runs that are the exact width of staffline_height and are exactly staffspace_height away from the closest black pixel\n        staffline_height and staffspace_height:\n            If left as 0 they will be found by the plugin"        },
                        {  "setOfStablePathPoints",
          call_setOfStablePathPoints, METH_VARARGS,
           "**setOfStablePathPoints** (``bool`` *with_trimming* = True, ``bool`` *with_deletion* = False, ``bool`` *with_staff_fixing* = False, ``bool`` *enable_strong_staff_pixels* = False, int *staffline_height* = 0, int *staffspace_height* = 0)\n\nReturns point values from sets of stable paths in the form of a 3D array\n        Format of staffSets:\n            staffSets[x] returns set x.\n            staffSets[x][l] returns staffline l of set x.\n            staffSets[x][l][p] returns point p of staffline l of set x.\n        \n        with_trimming:\n            Trims staff sets where white space or ornamentations are found.\n        with_deletion:\n            If checked, the image will be processed once, keeping what it finds to be the staves and then the code is run again. More accurate for images with a lot of lyrics or ornamentation.\n        with_staff_fixing:\n            Uses the slopes of staff sets to fix staff lines that differ wildly from the slope at specific intervals\n        enable_strong_staff_pixels:\n            Experimental method that reduces the weights of vertical runs that are the exact width of staffline_height and are exactly staffspace_height away from the closest black pixel\n        staffline_height and staffspace_height:\n            If left as 0 they will be found by the plugin"        },
                        {  "deleteStablePaths",
          call_deleteStablePaths, METH_VARARGS,
           "**deleteStablePaths** ()\n\nExperimental and used for testing. Deletes one iteration of stable paths."        },
                        {  "findStablePaths",
          call_findStablePaths, METH_VARARGS,
           "**findStablePaths** ()\n\nExperimental and used for testing. Draws the stable paths found in one iteration of the loop that finds stable paths."        },
                        {  "removeStaves",
          call_removeStaves, METH_VARARGS,
           "**removeStaves** (int *staffline_height* = 0, int *staffspace_height* = 0)\n\nFinds and removes all found staves. Unless you have already computed *staffline_height* and *staffspace_height*, leave them as 0. If left as 0 they will be computed automatically."        },
                        {  "displayWeights",
          call_displayWeights, METH_VARARGS,
           "**displayWeights** ()\n\nExperimental and used for testing. Displays the image in greyscale to demonstrate weights"        },
                        {  "drawAllStablePaths",
          call_drawAllStablePaths, METH_VARARGS,
           "**drawAllStablePaths** ()\n\nExperimental and used for testing. Draws all stable paths found, including those from before being post processed."        },
                        {  "get_stable_path_staff_skeletons",
          call_get_stable_path_staff_skeletons, METH_VARARGS,
           "**get_stable_path_staff_skeletons** (``bool`` *with_trimming* = True, ``bool`` *with_deletion* = False, ``bool`` *with_staff_fixing* = False, ``bool`` *enable_strong_staff_pixels* = False, int *staffline_height* = 0, int *staffspace_height* = 0)\n\nReturns the staffline skeletons found by the stable path algorithm, as described in\n        Cardoso, J., A. Capela, A. Rebelo, C. Guedes, and I. Porto (2008): A connected path approach\n        for staff detection on a music score. 15th IEEE International Conference on Image Processing,\n        pp. 1005-8.\n        \n        Arguments:\n        \n        *with_trimming*:\n        Trims staff sets where white space or ornamentations are found.\n        \n        *with_deletion*:\n        If checked, the image will be processed once and will create an image comprised of only found staves and then the code is run again. More accurate for images with a lot of lyrics or ornamentation.\n        \n        *with_staff_fixing*:\n        Uses the slopes of staff sets to fix staff lines that differ wildly from the slope at specific intervals.\n        \n        *enable_strong_staff_pixels*:\n        Experimental method that reduces the weights of vertical runs that are the exact width of staffline_height and are exactly staffspace_height away from the closest black pixel.\n        \n        *staffline_height* and *staffspace_height*:\n        If left as 0 they will be automatically determined.\n        \n        \n        Return value:\n        \n        *skeleton_list*:\n        A nested list, where each sublist represents a staffline candidate\n        skeleton as an array of two elements: the first element is the leftmost\n        x position, the second element is a list of subsequent y-values.\n        \n        The returned skeleton list is sorted from top to bottom and from left\n        to right.\n        "        },
                        { nullptr }
  };
  
  static struct PyModuleDef module_stable_pathDef = {
        PyModuleDef_HEAD_INIT,
        "_stable_path",
        nullptr,
        -1,
        _stable_path_methods,
        nullptr,
        nullptr,
        nullptr,
        nullptr
  };


  PyMODINIT_FUNC PyInit__stable_path(void) {
    return PyModule_Create(&module_stable_pathDef);
  }
  

