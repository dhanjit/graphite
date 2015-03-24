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

#include "sipAPIQtCore.h"

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"


extern "C" {static int slot_Qt_InputMethodQueries___bool__(PyObject *);}
static int slot_Qt_InputMethodQueries___bool__(PyObject *sipSelf)
{
    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodQueries::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodQueries::Int() != a0->operator Qt::InputMethodQueries::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"
            sipReleaseType(const_cast<Qt::InputMethodQueries *>(a0),sipType_Qt_InputMethodQueries,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_InputMethodQueries,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::InputMethodQueries::Int() == a0->operator Qt::InputMethodQueries::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"
            sipReleaseType(const_cast<Qt::InputMethodQueries *>(a0),sipType_Qt_InputMethodQueries,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_InputMethodQueries,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___invert__(PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___invert__(PyObject *sipSelf)
{
    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::InputMethodQueries*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodQueries(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodQueries, &a0, &a0State, &a1))
        {
            Qt::InputMethodQueries*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodQueries((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;
        Qt::InputMethodQueries* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodQueries, &a0, &a0State, sipType_Qt_InputMethodQueries, &a1, &a1State))
        {
            Qt::InputMethodQueries*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodQueries((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodQueries,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodQueries, &a0, &a0State, &a1))
        {
            Qt::InputMethodQueries*sipRes = 0;

#line 346 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodQueries(*a0 ^ a1);
#line 243 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;
        Qt::InputMethodQueries* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodQueries, &a0, &a0State, sipType_Qt_InputMethodQueries, &a1, &a1State))
        {
            Qt::InputMethodQueries*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::InputMethodQueries((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodQueries,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodQueries, &a0, &a0State, &a1))
        {
            Qt::InputMethodQueries*sipRes = 0;

#line 341 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodQueries(*a0 | a1);
#line 295 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodQueries___int__(PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___int__(PyObject *sipSelf)
{
    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

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


extern "C" {static PyObject *slot_Qt_InputMethodQueries___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodQueries)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodQueries::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

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


extern "C" {static PyObject *slot_Qt_InputMethodQueries___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodQueries)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodQueries::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

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


extern "C" {static PyObject *slot_Qt_InputMethodQueries___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodQueries___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodQueries)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodQueries *sipCpp = reinterpret_cast<Qt::InputMethodQueries *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodQueries));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::InputMethodQueries::operator&=(a0);
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
extern "C" {static void *cast_Qt_InputMethodQueries(void *, const sipTypeDef *);}
static void *cast_Qt_InputMethodQueries(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_InputMethodQueries)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_InputMethodQueries(void *, int);}
static void release_Qt_InputMethodQueries(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::InputMethodQueries *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_InputMethodQueries(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_InputMethodQueries(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::InputMethodQueries *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::InputMethodQueries *>(sipSrc);
}


extern "C" {static void *array_Qt_InputMethodQueries(SIP_SSIZE_T);}
static void *array_Qt_InputMethodQueries(SIP_SSIZE_T sipNrElem)
{
    return new Qt::InputMethodQueries[sipNrElem];
}


extern "C" {static void *copy_Qt_InputMethodQueries(const void *, SIP_SSIZE_T);}
static void *copy_Qt_InputMethodQueries(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::InputMethodQueries(reinterpret_cast<const Qt::InputMethodQueries *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_InputMethodQueries(sipSimpleWrapper *);}
static void dealloc_Qt_InputMethodQueries(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_InputMethodQueries(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_InputMethodQueries(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_InputMethodQueries(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::InputMethodQueries *sipCpp = 0;

    {
        const Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodQueries(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::InputMethodQueries *>(a0),sipType_Qt_InputMethodQueries,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodQueries(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::InputMethodQueries();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_InputMethodQueries(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_InputMethodQueries(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::InputMethodQueries **sipCppPtr = reinterpret_cast<Qt::InputMethodQueries **>(sipCppPtrV);

#line 379 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::InputMethodQueries is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodQuery)) ||
            sipCanConvertToType(sipPy, sipType_Qt_InputMethodQueries, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodQuery)))
{
    *sipCppPtr = new Qt::InputMethodQueries(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::InputMethodQueries *>(sipConvertToType(sipPy, sipType_Qt_InputMethodQueries, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQtInputMethodQueries.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_InputMethodQueries[] = {
    {(void *)slot_Qt_InputMethodQueries___bool__, bool_slot},
    {(void *)slot_Qt_InputMethodQueries___ne__, ne_slot},
    {(void *)slot_Qt_InputMethodQueries___eq__, eq_slot},
    {(void *)slot_Qt_InputMethodQueries___invert__, invert_slot},
    {(void *)slot_Qt_InputMethodQueries___and__, and_slot},
    {(void *)slot_Qt_InputMethodQueries___xor__, xor_slot},
    {(void *)slot_Qt_InputMethodQueries___or__, or_slot},
    {(void *)slot_Qt_InputMethodQueries___int__, int_slot},
    {(void *)slot_Qt_InputMethodQueries___ixor__, ixor_slot},
    {(void *)slot_Qt_InputMethodQueries___ior__, ior_slot},
    {(void *)slot_Qt_InputMethodQueries___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_InputMethodQueries, "\1Qt.InputMethodQueries(Qt.InputMethodQueries)\n"
    "Qt.InputMethodQueries(int)\n"
    "Qt.InputMethodQueries()");


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_InputMethodQueries = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__InputMethodQueries,
        {0}
    },
    {
        sipNameNr_InputMethodQueries,
        {272, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_InputMethodQueries,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_InputMethodQueries,
    init_type_Qt_InputMethodQueries,
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
    dealloc_Qt_InputMethodQueries,
    assign_Qt_InputMethodQueries,
    array_Qt_InputMethodQueries,
    copy_Qt_InputMethodQueries,
    release_Qt_InputMethodQueries,
    cast_Qt_InputMethodQueries,
    convertTo_Qt_InputMethodQueries,
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