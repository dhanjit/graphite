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

#include "sipAPIQtScript.h"

#line 39 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptclass.sip"
#include <qscriptclass.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"

#line 39 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptclass.sip"
#include <qscriptclass.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"


extern "C" {static int slot_QScriptClass_QueryFlags___bool__(PyObject *);}
static int slot_QScriptClass_QueryFlags___bool__(PyObject *sipSelf)
{
    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptClass::QueryFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptClass::QueryFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptClass::QueryFlags::Int() != a0->operator QScriptClass::QueryFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"
            sipReleaseType(const_cast<QScriptClass::QueryFlags *>(a0),sipType_QScriptClass_QueryFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,ne_slot,sipType_QScriptClass_QueryFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptClass::QueryFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptClass::QueryFlags::Int() == a0->operator QScriptClass::QueryFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"
            sipReleaseType(const_cast<QScriptClass::QueryFlags *>(a0),sipType_QScriptClass_QueryFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,eq_slot,sipType_QScriptClass_QueryFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___invert__(PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___invert__(PyObject *sipSelf)
{
    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QScriptClass::QueryFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptClass::QueryFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptClass_QueryFlags, &a0, &a0State, &a1))
        {
            QScriptClass::QueryFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptClass::QueryFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;
        QScriptClass::QueryFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State, sipType_QScriptClass_QueryFlags, &a1, &a1State))
        {
            QScriptClass::QueryFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptClass::QueryFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);
            sipReleaseType(a1,sipType_QScriptClass_QueryFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptClass_QueryFlags, &a0, &a0State, &a1))
        {
            QScriptClass::QueryFlags*sipRes = 0;

#line 346 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QScriptClass::QueryFlags(*a0 ^ a1);
#line 243 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;
        QScriptClass::QueryFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State, sipType_QScriptClass_QueryFlags, &a1, &a1State))
        {
            QScriptClass::QueryFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptClass::QueryFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);
            sipReleaseType(a1,sipType_QScriptClass_QueryFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptClass_QueryFlags, &a0, &a0State, &a1))
        {
            QScriptClass::QueryFlags*sipRes = 0;

#line 341 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QScriptClass::QueryFlags(*a0 | a1);
#line 295 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptClass_QueryFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___int__(PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___int__(PyObject *sipSelf)
{
    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

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


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptClass_QueryFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptClass::QueryFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);

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


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptClass_QueryFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptClass::QueryFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptClass_QueryFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptClass::QueryFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptClass_QueryFlags,a0State);

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


extern "C" {static PyObject *slot_QScriptClass_QueryFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QScriptClass_QueryFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptClass_QueryFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptClass::QueryFlags *sipCpp = reinterpret_cast<QScriptClass::QueryFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptClass_QueryFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptClass::QueryFlags::operator&=(a0);
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
extern "C" {static void *cast_QScriptClass_QueryFlags(void *, const sipTypeDef *);}
static void *cast_QScriptClass_QueryFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptClass_QueryFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptClass_QueryFlags(void *, int);}
static void release_QScriptClass_QueryFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptClass::QueryFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QScriptClass_QueryFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QScriptClass_QueryFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QScriptClass::QueryFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QScriptClass::QueryFlags *>(sipSrc);
}


extern "C" {static void *array_QScriptClass_QueryFlags(SIP_SSIZE_T);}
static void *array_QScriptClass_QueryFlags(SIP_SSIZE_T sipNrElem)
{
    return new QScriptClass::QueryFlags[sipNrElem];
}


extern "C" {static void *copy_QScriptClass_QueryFlags(const void *, SIP_SSIZE_T);}
static void *copy_QScriptClass_QueryFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QScriptClass::QueryFlags(reinterpret_cast<const QScriptClass::QueryFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScriptClass_QueryFlags(sipSimpleWrapper *);}
static void dealloc_QScriptClass_QueryFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptClass_QueryFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QScriptClass_QueryFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptClass_QueryFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptClass::QueryFlags *sipCpp = 0;

    {
        const QScriptClass::QueryFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QScriptClass_QueryFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptClass::QueryFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QScriptClass::QueryFlags *>(a0),sipType_QScriptClass_QueryFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptClass::QueryFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptClass::QueryFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QScriptClass_QueryFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QScriptClass_QueryFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QScriptClass::QueryFlags **sipCppPtr = reinterpret_cast<QScriptClass::QueryFlags **>(sipCppPtrV);

#line 379 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QScriptClass::QueryFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptClass_QueryFlag)) ||
            sipCanConvertToType(sipPy, sipType_QScriptClass_QueryFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptClass_QueryFlag)))
{
    *sipCppPtr = new QScriptClass::QueryFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QScriptClass::QueryFlags *>(sipConvertToType(sipPy, sipType_QScriptClass_QueryFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptClassQueryFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScriptClass_QueryFlags[] = {
    {(void *)slot_QScriptClass_QueryFlags___bool__, bool_slot},
    {(void *)slot_QScriptClass_QueryFlags___ne__, ne_slot},
    {(void *)slot_QScriptClass_QueryFlags___eq__, eq_slot},
    {(void *)slot_QScriptClass_QueryFlags___invert__, invert_slot},
    {(void *)slot_QScriptClass_QueryFlags___and__, and_slot},
    {(void *)slot_QScriptClass_QueryFlags___xor__, xor_slot},
    {(void *)slot_QScriptClass_QueryFlags___or__, or_slot},
    {(void *)slot_QScriptClass_QueryFlags___int__, int_slot},
    {(void *)slot_QScriptClass_QueryFlags___ixor__, ixor_slot},
    {(void *)slot_QScriptClass_QueryFlags___ior__, ior_slot},
    {(void *)slot_QScriptClass_QueryFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QScriptClass_QueryFlags, "\1QScriptClass.QueryFlags(QScriptClass.QueryFlags)\n"
    "QScriptClass.QueryFlags(int)\n"
    "QScriptClass.QueryFlags()");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptClass_QueryFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptClass__QueryFlags,
        {0}
    },
    {
        sipNameNr_QueryFlags,
        {2, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptClass_QueryFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QScriptClass_QueryFlags,
    init_type_QScriptClass_QueryFlags,
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
    dealloc_QScriptClass_QueryFlags,
    assign_QScriptClass_QueryFlags,
    array_QScriptClass_QueryFlags,
    copy_QScriptClass_QueryFlags,
    release_QScriptClass_QueryFlags,
    cast_QScriptClass_QueryFlags,
    convertTo_QScriptClass_QueryFlags,
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
