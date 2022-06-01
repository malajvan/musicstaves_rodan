
        
    
  #include "gameramodule.hpp"
  #include "knnmodule.hpp"

        #include "staffdeformation.hpp"
  
    #include <string>
  #include <stdexcept>
  #include "Python.h"
  #include <list>

  using namespace Gamera;
  
        
    #ifndef _MSC_VER
  extern "C" {
    void init_staffdeformation(void);
  }
#endif

                      static PyObject* call_degrade_kanungo_single_image(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                Image* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      double eta_arg;
                      double a0_arg;
                      double a_arg;
                      double b0_arg;
                      double b_arg;
                      int k_arg;
                      int random_seed_arg;
      
                                      if (PyArg_ParseTuple(args,  "Odddddii:degrade_kanungo_single_image"
                        ,
             &self_pyarg                        ,
             &eta_arg                        ,
             &a0_arg                        ,
             &a_arg                        ,
             &b0_arg                        ,
             &b_arg                        ,
             &k_arg                        ,
             &random_seed_arg                      ) <= 0)
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
return_arg = degrade_kanungo_single_image(*((OneBitImageView*)self_arg), eta_arg, a0_arg, a_arg, b0_arg, b_arg, k_arg, random_seed_arg);
break;
case CC:
return_arg = degrade_kanungo_single_image(*((Cc*)self_arg), eta_arg, a0_arg, a_arg, b0_arg, b_arg, k_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = degrade_kanungo_single_image(*((OneBitRleImageView*)self_arg), eta_arg, a0_arg, a_arg, b0_arg, b_arg, k_arg, random_seed_arg);
break;
case RLECC:
return_arg = degrade_kanungo_single_image(*((RleCc*)self_arg), eta_arg, a0_arg, a_arg, b0_arg, b_arg, k_arg, random_seed_arg);
break;
case MLCC:
return_arg = degrade_kanungo_single_image(*((MlCc*)self_arg), eta_arg, a0_arg, a_arg, b0_arg, b_arg, k_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'degrade_kanungo_single_image' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
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
                      static PyObject* call_white_speckles_parallel_noskel(PyObject* self, PyObject* args) {
            
      PyErr_Clear();
                                                                                std::list<Image*>* return_arg;
PyObject* return_pyarg;
                                          Image* self_arg;
PyObject* self_pyarg;
                      Image* im_staffonly_arg;
PyObject* im_staffonly_pyarg;
                      double p_arg;
                      int n_arg;
                      int k_arg;
                      int connectivity_arg;
                      int random_seed_arg;
      
                                      if (PyArg_ParseTuple(args,  "OOdiiii:white_speckles_parallel_noskel"
                        ,
             &self_pyarg                        ,
             &im_staffonly_pyarg                        ,
             &p_arg                        ,
             &n_arg                        ,
             &k_arg                        ,
             &connectivity_arg                        ,
             &random_seed_arg                      ) <= 0)
           return 0;
               
              if (!is_ImageObject(self_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'self' must be an image");
          return 0;
        }
        self_arg = ((Image*)((RectObject*)self_pyarg)->m_x);
        image_get_fv(self_pyarg, &self_arg->features, &self_arg->features_len);
                      if (!is_ImageObject(im_staffonly_pyarg)) {
          PyErr_SetString(PyExc_TypeError, "Argument 'im_staffonly' must be an image");
          return 0;
        }
        im_staffonly_arg = ((Image*)((RectObject*)im_staffonly_pyarg)->m_x);
        image_get_fv(im_staffonly_pyarg, &im_staffonly_arg->features, &im_staffonly_arg->features_len);
                                                                                    
              try {
                      switch(get_image_combination(self_pyarg)) {
case ONEBITIMAGEVIEW:
switch(get_image_combination(im_staffonly_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((OneBitImageView*)self_arg), *((OneBitImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case CC:
return_arg = white_speckles_parallel_noskel(*((OneBitImageView*)self_arg), *((Cc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((OneBitImageView*)self_arg), *((OneBitRleImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case RLECC:
return_arg = white_speckles_parallel_noskel(*((OneBitImageView*)self_arg), *((RleCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case MLCC:
return_arg = white_speckles_parallel_noskel(*((OneBitImageView*)self_arg), *((MlCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'im_staffonly' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(im_staffonly_pyarg));
return 0;
}
break;
case CC:
switch(get_image_combination(im_staffonly_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((Cc*)self_arg), *((OneBitImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case CC:
return_arg = white_speckles_parallel_noskel(*((Cc*)self_arg), *((Cc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((Cc*)self_arg), *((OneBitRleImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case RLECC:
return_arg = white_speckles_parallel_noskel(*((Cc*)self_arg), *((RleCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case MLCC:
return_arg = white_speckles_parallel_noskel(*((Cc*)self_arg), *((MlCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'im_staffonly' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(im_staffonly_pyarg));
return 0;
}
break;
case ONEBITRLEIMAGEVIEW:
switch(get_image_combination(im_staffonly_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((OneBitRleImageView*)self_arg), *((OneBitImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case CC:
return_arg = white_speckles_parallel_noskel(*((OneBitRleImageView*)self_arg), *((Cc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((OneBitRleImageView*)self_arg), *((OneBitRleImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case RLECC:
return_arg = white_speckles_parallel_noskel(*((OneBitRleImageView*)self_arg), *((RleCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case MLCC:
return_arg = white_speckles_parallel_noskel(*((OneBitRleImageView*)self_arg), *((MlCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'im_staffonly' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(im_staffonly_pyarg));
return 0;
}
break;
case RLECC:
switch(get_image_combination(im_staffonly_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((RleCc*)self_arg), *((OneBitImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case CC:
return_arg = white_speckles_parallel_noskel(*((RleCc*)self_arg), *((Cc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((RleCc*)self_arg), *((OneBitRleImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case RLECC:
return_arg = white_speckles_parallel_noskel(*((RleCc*)self_arg), *((RleCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case MLCC:
return_arg = white_speckles_parallel_noskel(*((RleCc*)self_arg), *((MlCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'im_staffonly' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(im_staffonly_pyarg));
return 0;
}
break;
case MLCC:
switch(get_image_combination(im_staffonly_pyarg)) {
case ONEBITIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((MlCc*)self_arg), *((OneBitImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case CC:
return_arg = white_speckles_parallel_noskel(*((MlCc*)self_arg), *((Cc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case ONEBITRLEIMAGEVIEW:
return_arg = white_speckles_parallel_noskel(*((MlCc*)self_arg), *((OneBitRleImageView*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case RLECC:
return_arg = white_speckles_parallel_noskel(*((MlCc*)self_arg), *((RleCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
case MLCC:
return_arg = white_speckles_parallel_noskel(*((MlCc*)self_arg), *((MlCc*)im_staffonly_arg), p_arg, n_arg, k_arg, connectivity_arg, random_seed_arg);
break;
default:
PyErr_Format(PyExc_TypeError,"The 'im_staffonly' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(im_staffonly_pyarg));
return 0;
}
break;
default:
PyErr_Format(PyExc_TypeError,"The 'self' argument of 'white_speckles_parallel_noskel' can not have pixel type '%s'. Acceptable values are ONEBIT, ONEBIT, ONEBIT, ONEBIT, and ONEBIT.", get_pixel_type_name(self_pyarg));
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
              
      return_pyarg = ImageList_to_python(return_arg);
      delete return_arg;
                    return return_pyarg;
            }
                              }
                                                      
          static PyMethodDef _staffdeformation_methods[] = {
                            {  "degrade_kanungo_single_image",
          call_degrade_kanungo_single_image, METH_VARARGS,
           "**degrade_kanungo_single_image** (float(0.00, 1.00) *eta*, float(0.00, 1.00) *a0*, float *a*, float(0.00, 1.00) *b0*, float *b*, int *k* = 2, int *random_seed* = 0)\n\nC++ part of degrade_kanungo for deforming a single image.\n"        },
                                  {  "white_speckles_parallel_noskel",
          call_white_speckles_parallel_noskel, METH_VARARGS,
           "**white_speckles_parallel_noskel** (``Image`` [OneBit] *im_staffonly*, float(0.00, 1.00) *p*, int *n*, int *k* = 2, ``Choice`` [rook|bishop|king] *connectivity* = king, int *random_seed* = 0)\n\nC++ part of add_white_speckles.\n"        },
                                                                                              { nullptr }
  };
  
  static struct PyModuleDef module_staffdeformationDef = {
        PyModuleDef_HEAD_INIT,
        "_staffdeformation",
        nullptr,
        -1,
        _staffdeformation_methods,
        nullptr,
        nullptr,
        nullptr,
        nullptr
  };


  PyMODINIT_FUNC PyInit__staffdeformation(void) {
    return PyModule_Create(&module_staffdeformationDef);
  }
  

