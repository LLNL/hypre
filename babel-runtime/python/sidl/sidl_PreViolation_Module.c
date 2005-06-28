/*
 * File:          sidl_PreViolation_Module.c
 * Symbol:        sidl.PreViolation-v0.9.3
 * Symbol Type:   class
 * Babel Version: 0.10.4
 * Release:       $Name$
 * Revision:      @(#) $Id$
 * Description:   implement a C extension type for a sidl extendable
 * 
 * Copyright (c) 2000-2002, The Regents of the University of California.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by the Components Team <components@llnl.gov>
 * All rights reserved.
 * 
 * This file is part of Babel. For more information, see
 * http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
 * for Our Notice and the LICENSE file for the GNU Lesser General Public
 * License.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License (as published by
 * the Free Software Foundation) version 2.1 dated February 1999.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
 * conditions of the GNU Lesser General Public License for more details.
 * 
 * You should have recieved a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.4
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * This file contains the implementation of a Python C
 * extension type (i.e. a Python type implemented in C).
 * This extension type provides Python interface to the
 * sidl type sidl.PreViolation.
 */


/**
 * Symbol "sidl.PreViolation" (version 0.9.3)
 * 
 * <code>PreViolation</code> provides the basic marker for 
 * a pre-condition exception.
 */
#define sidl_PreViolation_INTERNAL 1
#include "sidl_PreViolation_Module.h"
#ifndef included_sidl_PreViolation_IOR_h
#include "sidl_PreViolation_IOR.h"
#endif
#include "sidlObjA.h"
#include "sidlPyArrays.h"
#include "Numeric/arrayobject.h"
#ifndef included_sidl_Loader_h
#include "sidl_Loader.h"
#endif
#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_sidl_interface_IOR_h
#include "sidl_interface_IOR.h"
#endif
#include "sidl_SIDLException_Module.h"
#include "sidl_ClassInfo_Module.h"
#include "sidl_BaseInterface_Module.h"
#include "sidl_BaseException_Module.h"
#include "sidl_BaseClass_Module.h"
#include <stdlib.h>
#include <string.h>

staticforward PyTypeObject _sidl_PreViolationType;

static const struct sidl_PreViolation__external *_implEPV = NULL;

static int
sidl_PreViolation_createCast(PyObject *self, PyObject *args, PyObject *kwds) {
  struct sidl_PreViolation__object *optarg = NULL;
  static char *_kwlist[] = { "sobj", NULL };
  int _okay = PyArg_ParseTupleAndKeywords(args, kwds, "|O&", _kwlist,         \
    (void *)sidl_PreViolation__convert, &optarg);
  if (_okay) {
    if (!optarg) {
      optarg = (*(_implEPV->createObject))();
    }
    return sidl_Object_Init(
      (SPObject *)self,
      (struct sidl_BaseInterface__object *)optarg,
      sidl_PyStealRef);
  }
  return -1;
}

static PyMethodDef _PreViolationModuleMethods[] = {
  { NULL, NULL }
};

static PyMethodDef _PreViolationObjectMethods[] = {
  { NULL, NULL }
};

static PyTypeObject _sidl_PreViolationType = {
  PyObject_HEAD_INIT(NULL)
  0,      /* ob_size */
  "sidl.PreViolation.PreViolation", /* tp_name */
  0,      /* tp_basicsize */
  0,      /* tp_itemsize */
  0,      /* tp_dealloc */
  0,      /* tp_print */
  0,      /* tp_getattr */
  0,      /* tp_setattr */
  0,      /* tp_compare */
  0,      /* tp_repr */
  0,      /* tp_as_number */
  0,      /* tp_as_sequence */
  0,      /* tp_as_mapping */
  0,      /* tp_hash  */
  0,      /* tp_call */
  0,      /* tp_str */
  0,      /* tp_getattro */
  0,      /* tp_setattro */
  0,      /* tp_as_buffer */
  Py_TPFLAGS_DEFAULT, /* tp_flags */
  "\
\
<code>PreViolation</code> provides the basic marker for \n\
a pre-condition exception.", /* tp_doc */
  0,      /* tp_traverse */
  0,       /* tp_clear */
  0,       /* tp_richcompare */
  0,       /* tp_weaklistoffset */
  0,       /* tp_iter */
  0,       /* tp_iternext */
  _PreViolationObjectMethods, /* tp_methods */
  0,       /* tp_members */
  0,       /* tp_getset */
  0,       /* tp_base */
  0,       /* tp_dict */
  0,       /* tp_descr_get */
  0,       /* tp_descr_set */
  0,       /* tp_dictoffset */
  sidl_PreViolation_createCast,   /* tp_init */
  0,       /* tp_alloc */
  0,       /* tp_new */
};

sidl_PreViolation__wrap_RETURN
sidl_PreViolation__wrap sidl_PreViolation__wrap_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_PreViolationType.tp_new(&_sidl_PreViolationType, NULL,     \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj),
        sidl_PyStealRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_PreViolation__weakRef_RETURN
sidl_PreViolation__weakRef sidl_PreViolation__weakRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_PreViolationType.tp_new(&_sidl_PreViolationType, NULL,     \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj),
        sidl_PyWeakRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_PreViolation_deref_RETURN
sidl_PreViolation_deref sidl_PreViolation_deref_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_deleteRef))(sidlobj);
  }
}

sidl_PreViolation__newRef_RETURN
sidl_PreViolation__newRef sidl_PreViolation__newRef_PROTO {
  PyObject *result;
  if (sidlobj) {
    result = _sidl_PreViolationType.tp_new(&_sidl_PreViolationType, NULL,     \
      NULL);
    if (result) {
      if (sidl_Object_Init(
        (SPObject *)result,
        (struct sidl_BaseInterface__object *)(sidlobj),
        sidl_PyNewRef))
      {
        Py_DECREF(result);
        result = NULL;
      }
    }
  }
  else {
    result = Py_None;
    Py_INCREF(result);
  }
  return result;
}

sidl_PreViolation__addRef_RETURN
sidl_PreViolation__addRef sidl_PreViolation__addRef_PROTO {
  if (sidlobj) {
    (*(sidlobj->d_epv->f_addRef))(sidlobj);
  }
}

sidl_PreViolation_PyType_RETURN
sidl_PreViolation_PyType sidl_PreViolation_PyType_PROTO {
  Py_INCREF(&_sidl_PreViolationType);
  return &_sidl_PreViolationType;
}

sidl_PreViolation__convert_RETURN
sidl_PreViolation__convert sidl_PreViolation__convert_PROTO {
  *sidlobj = sidl_Cast(obj, "sidl.PreViolation");
  if (*sidlobj) {
    (*((*sidlobj)->d_epv->f_addRef))(*sidlobj);
  }
  else if (obj != Py_None) {
    PyErr_SetString(PyExc_TypeError, 
      "argument is not a(n) sidl.PreViolation");
    return 0;
  }
  return 1;
}

static int
_convertPython(void *sidlarray, const int *ind, PyObject *pyobj)
{
  struct sidl_PreViolation__object *sidlobj;
  if (sidl_PreViolation__convert(pyobj, &sidlobj)) {
    sidl_interface__array_set((struct sidl_interface__array *)sidlarray,
    ind, (struct sidl_BaseInterface__object *)sidlobj);
    if (sidlobj) {
      sidl_BaseInterface_deleteRef((struct sidl_BaseInterface__object         \
        *)sidlobj);
    }
    return FALSE;
  }
  return TRUE;
}

sidl_PreViolation__convert_python_array_RETURN
sidl_PreViolation__convert_python_array                                       \
  sidl_PreViolation__convert_python_array_PROTO {
  int result = 0;
  *sidlarray = NULL;
  if (obj == Py_None) {
    result = TRUE;
  }
  else {
    PyObject *pya = PyArray_FromObject(obj, PyArray_OBJECT, 0, 0);
    if (pya) {
      if (PyArray_OBJECT == ((PyArrayObject *)pya)->descr->type_num) {
        int dimen, lower[SIDL_MAX_ARRAY_DIMENSION],
          upper[SIDL_MAX_ARRAY_DIMENSION],
          stride[SIDL_MAX_ARRAY_DIMENSION];
        if (sidl_array__extract_python_info
          (pya, &dimen, lower, upper, stride))
        {
            *sidlarray = (struct                                              \
              sidl_PreViolation__array*)sidl_interface__array_createRow
            (dimen, lower, upper);
          result = sidl_array__convert_python
            (pya, dimen, *sidlarray, _convertPython);
          if (*sidlarray && !result) {
            sidl_interface__array_deleteRef(
              (struct  sidl_interface__array *)*sidlarray);
            *sidlarray = NULL;
          }
        }
      }
      Py_DECREF(pya);
    }
  }
  return result;
}

static int
_convertSIDL(void *sidlarray, const int *ind, PyObject **dest)
{
  struct sidl_PreViolation__object *sidlobj = (struct                         \
    sidl_PreViolation__object*)
  sidl_interface__array_get((struct sidl_interface__array *)
    sidlarray, ind);
  *dest = sidl_PreViolation__wrap(sidlobj);
  return (*dest == NULL);
}

sidl_PreViolation__convert_sidl_array_RETURN
sidl_PreViolation__convert_sidl_array                                         \
  sidl_PreViolation__convert_sidl_array_PROTO {
  PyObject *pya = NULL;
  if (sidlarray) {
    const int dimen = sidlArrayDim(sidlarray);
    int i;
    int *lower = (int *)malloc(sizeof(int) * dimen);
    int *upper = (int *)malloc(sizeof(int) * dimen);
    int *numelem = (int *)malloc(sizeof(int) * dimen);
    for(i = 0; i < dimen; ++i) {
      lower[i] = sidlLower(sidlarray, i);
      upper[i] = sidlUpper(sidlarray, i);
      numelem[i] = 1 + upper[i] - lower[i];
    }
    pya = PyArray_FromDims(dimen, numelem, PyArray_OBJECT);
    if (pya) {
      if (!sidl_array__convert_sidl(pya, dimen, lower, upper,
        numelem, sidlarray, _convertSIDL))
      {
        Py_DECREF(pya);
        pya = NULL;
      }
    }
    free(numelem);
    free(upper);
    free(lower);
  }
  else {
    Py_INCREF(Py_None);
    pya = Py_None;
  }
  return pya;
}

void
initPreViolation(void) {
  PyObject *module, *dict, *c_api;
  PyObject *_exceptionBases, *_exceptionDict, *_exceptionName;
  static void *ExternalAPI[sidl_PreViolation__API_NUM];
  module = Py_InitModule3("PreViolation", _PreViolationModuleMethods, "\
\
<code>PreViolation</code> provides the basic marker for \n\
a pre-condition exception."
  );
  dict = PyModule_GetDict(module);
  ExternalAPI[sidl_PreViolation__wrap_NUM] = (void*)sidl_PreViolation__wrap;
  ExternalAPI[sidl_PreViolation__convert_NUM] =                               \
    (void*)sidl_PreViolation__convert;
  ExternalAPI[sidl_PreViolation__convert_python_array_NUM] =                  \
    (void*)sidl_PreViolation__convert_python_array;
  ExternalAPI[sidl_PreViolation__convert_sidl_array_NUM] =                    \
    (void*)sidl_PreViolation__convert_sidl_array;
  ExternalAPI[sidl_PreViolation__weakRef_NUM] =                               \
    (void*)sidl_PreViolation__weakRef;
  ExternalAPI[sidl_PreViolation_deref_NUM] = (void*)sidl_PreViolation_deref;
  ExternalAPI[sidl_PreViolation__newRef_NUM] =                                \
    (void*)sidl_PreViolation__newRef;
  ExternalAPI[sidl_PreViolation__addRef_NUM] =                                \
    (void*)sidl_PreViolation__addRef;
  ExternalAPI[sidl_PreViolation_PyType_NUM] = (void*)sidl_PreViolation_PyType;
  import_SIDLObjA();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlObjA module.");
  }
  /* Initialize to temporary value. */
  Py_INCREF(Py_None);
  ExternalAPI[sidl_PreViolation__type_NUM] = Py_None;
  c_api = PyCObject_FromVoidPtr((void *)ExternalAPI, NULL);
  PyDict_SetItemString(dict, "_C_API", c_api);
  Py_XDECREF(c_api);
  import_SIDLPyArrays();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing sidlPyArrays module.");
  }
  import_array();
  if (PyErr_Occurred()) {
    Py_FatalError("Error importing Numeric Python module.");
  }
  sidl_SIDLException__import();
  _sidl_PreViolationType.tp_base = sidl_SIDLException_PyType();
  _sidl_PreViolationType.tp_bases = PyTuple_New(1);
  PyTuple_SetItem(_sidl_PreViolationType.tp_bases,0,                          \
    (PyObject *)sidl_SIDLException_PyType());
  if (PyType_Ready(&_sidl_PreViolationType) < 0) {
    PyErr_Print();
    fprintf(stderr, "PyType_Ready on sidl.PreViolation failed.\n");
    return;
  }
  Py_INCREF(&_sidl_PreViolationType);
  PyDict_SetItemString(dict, "PreViolation",                                  \
    (PyObject *)&_sidl_PreViolationType);
  sidl_ClassInfo__import();
  sidl_BaseException__import();
  sidl_BaseClass__import();
  sidl_BaseInterface__import();
  _exceptionBases = PyTuple_New(1);
  Py_INCREF(sidl_SIDLException__type);
  PyTuple_SetItem(_exceptionBases, 0, sidl_SIDLException__type);
  _exceptionDict = PyDict_New();
  PyDict_SetItemString(_exceptionDict, "__module__",
    PyString_InternFromString("sidl.PreViolation"));
  _exceptionName = PyString_InternFromString("_Exception");
  sidl_PreViolation__type = PyClass_New(_exceptionBases, _exceptionDict,      \
    _exceptionName);
  Py_XDECREF(_exceptionBases);
  Py_XDECREF(_exceptionDict);
  Py_XDECREF(_exceptionName);
  Py_XINCREF(sidl_PreViolation__type);
  PyDict_SetItemString(dict, "_Exception", sidl_PreViolation__type);
  ExternalAPI[sidl_PreViolation__type_NUM] = sidl_PreViolation__type;
  /*
   * If it's safe, add "Exception" for backward compatibility
   * with Babel 0.10.2 (and previous).
   */

  if (!PyDict_GetItemString(dict, "Exception")) {
    Py_XINCREF(sidl_PreViolation__type);
    PyDict_SetItemString(dict, "Exception", sidl_PreViolation__type);
  }
  _implEPV = sidl_PreViolation__externals();
  if (!_implEPV) {
    Py_FatalError("Cannot load implementation for sidl class                  \
      sidl.PreViolation");
  }
}
