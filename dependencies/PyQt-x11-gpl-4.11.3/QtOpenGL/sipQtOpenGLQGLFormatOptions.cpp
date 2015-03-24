/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * If you are unsure which license is appropriate for your use, please
 * contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtOpenGL.h"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"


extern "C" {static int slot_QGL_FormatOptions___bool__(PyObject *);}
static int slot_QGL_FormatOptions___bool__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGL::FormatOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGL::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGL_FormatOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGL::FormatOptions::Int() != a0->operator QGL::FormatOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"
            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGL_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGL::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGL_FormatOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGL::FormatOptions::Int() == a0->operator QGL::FormatOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"
            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGL_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___invert__(PyObject *);}
static PyObject *slot_QGL_FormatOptions___invert__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QGL::FormatOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGL_FormatOptions, &a0, &a0State, &a1))
        {
            QGL::FormatOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOptions* a0;
        int a0State = 0;
        QGL::FormatOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGL_FormatOptions, &a0, &a0State, sipType_QGL_FormatOptions, &a1, &a1State))
        {
            QGL::FormatOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QGL_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    {
        QGL::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGL_FormatOptions, &a0, &a0State, &a1))
        {
            QGL::FormatOptions*sipRes = 0;

#line 346 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QGL::FormatOptions(*a0 ^ a1);
#line 243 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOptions* a0;
        int a0State = 0;
        QGL::FormatOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGL_FormatOptions, &a0, &a0State, sipType_QGL_FormatOptions, &a1, &a1State))
        {
            QGL::FormatOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGL::FormatOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QGL_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    {
        QGL::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGL_FormatOptions, &a0, &a0State, &a1))
        {
            QGL::FormatOptions*sipRes = 0;

#line 341 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QGL::FormatOptions(*a0 | a1);
#line 295 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGL_FormatOptions___int__(PyObject *);}
static PyObject *slot_QGL_FormatOptions___int__(PyObject *sipSelf)
{
    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGL_FormatOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGL_FormatOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGL_FormatOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QGL_FormatOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGL_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGL::FormatOptions *sipCpp = reinterpret_cast<QGL::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGL_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGL::FormatOptions::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGL_FormatOptions(void *, const sipTypeDef *);}
static void *cast_QGL_FormatOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGL_FormatOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGL_FormatOptions(void *, int);}
static void release_QGL_FormatOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGL::FormatOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGL_FormatOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QGL_FormatOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGL::FormatOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGL::FormatOptions *>(sipSrc);
}


extern "C" {static void *array_QGL_FormatOptions(SIP_SSIZE_T);}
static void *array_QGL_FormatOptions(SIP_SSIZE_T sipNrElem)
{
    return new QGL::FormatOptions[sipNrElem];
}


extern "C" {static void *copy_QGL_FormatOptions(const void *, SIP_SSIZE_T);}
static void *copy_QGL_FormatOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGL::FormatOptions(reinterpret_cast<const QGL::FormatOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGL_FormatOptions(sipSimpleWrapper *);}
static void dealloc_QGL_FormatOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGL_FormatOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGL_FormatOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGL_FormatOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGL::FormatOptions *sipCpp = 0;

    {
        const QGL::FormatOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGL_FormatOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGL::FormatOptions *>(a0),sipType_QGL_FormatOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGL::FormatOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGL_FormatOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGL_FormatOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGL::FormatOptions **sipCppPtr = reinterpret_cast<QGL::FormatOptions **>(sipCppPtrV);

#line 379 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGL::FormatOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGL_FormatOption)) ||
            sipCanConvertToType(sipPy, sipType_QGL_FormatOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGL_FormatOption)))
{
    *sipCppPtr = new QGL::FormatOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGL::FormatOptions *>(sipConvertToType(sipPy, sipType_QGL_FormatOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtOpenGL/sipQtOpenGLQGLFormatOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGL_FormatOptions[] = {
    {(void *)slot_QGL_FormatOptions___bool__, bool_slot},
    {(void *)slot_QGL_FormatOptions___ne__, ne_slot},
    {(void *)slot_QGL_FormatOptions___eq__, eq_slot},
    {(void *)slot_QGL_FormatOptions___invert__, invert_slot},
    {(void *)slot_QGL_FormatOptions___and__, and_slot},
    {(void *)slot_QGL_FormatOptions___xor__, xor_slot},
    {(void *)slot_QGL_FormatOptions___or__, or_slot},
    {(void *)slot_QGL_FormatOptions___int__, int_slot},
    {(void *)slot_QGL_FormatOptions___ixor__, ixor_slot},
    {(void *)slot_QGL_FormatOptions___ior__, ior_slot},
    {(void *)slot_QGL_FormatOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGL_FormatOptions, "\1QGL.FormatOptions(QGL.FormatOptions)\n"
    "QGL.FormatOptions(int)\n"
    "QGL.FormatOptions()");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGL_FormatOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGL__FormatOptions,
        {0}
    },
    {
        sipNameNr_FormatOptions,
        {0, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGL_FormatOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGL_FormatOptions,
    init_type_QGL_FormatOptions,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGL_FormatOptions,
    assign_QGL_FormatOptions,
    array_QGL_FormatOptions,
    copy_QGL_FormatOptions,
    release_QGL_FormatOptions,
    cast_QGL_FormatOptions,
    convertTo_QGL_FormatOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
