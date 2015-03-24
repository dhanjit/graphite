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

#include "sipAPIQtGui.h"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtextedit.sip"
#include <qtextedit.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"


extern "C" {static int slot_QTextEdit_AutoFormatting___bool__(PyObject *);}
static int slot_QTextEdit_AutoFormatting___bool__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() != a0->operator QTextEdit::AutoFormatting::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextEdit_AutoFormatting,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextEdit::AutoFormatting::Int() == a0->operator QTextEdit::AutoFormatting::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextEdit_AutoFormatting,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___invert__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;


    {
        {
            QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
            QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        QTextEdit::AutoFormatting* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State, sipType_QTextEdit_AutoFormatting, &a1, &a1State))
        {
            QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);
            sipReleaseType(a1,sipType_QTextEdit_AutoFormatting,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
            QTextEdit::AutoFormatting*sipRes = 0;

#line 346 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QTextEdit::AutoFormatting(*a0 ^ a1);
#line 243 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        QTextEdit::AutoFormatting* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State, sipType_QTextEdit_AutoFormatting, &a1, &a1State))
        {
            QTextEdit::AutoFormatting*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextEdit::AutoFormatting((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);
            sipReleaseType(a1,sipType_QTextEdit_AutoFormatting,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextEdit_AutoFormatting, &a0, &a0State, &a1))
        {
            QTextEdit::AutoFormatting*sipRes = 0;

#line 341 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QTextEdit::AutoFormatting(*a0 | a1);
#line 295 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEdit_AutoFormatting,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___int__(PyObject *sipSelf)
{
    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextEdit_AutoFormatting,a0State);

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


extern "C" {static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextEdit_AutoFormatting___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormatting)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextEdit::AutoFormatting *sipCpp = reinterpret_cast<QTextEdit::AutoFormatting *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextEdit_AutoFormatting));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextEdit::AutoFormatting::operator&=(a0);
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
extern "C" {static void *cast_QTextEdit_AutoFormatting(void *, const sipTypeDef *);}
static void *cast_QTextEdit_AutoFormatting(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextEdit_AutoFormatting)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextEdit_AutoFormatting(void *, int);}
static void release_QTextEdit_AutoFormatting(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextEdit::AutoFormatting *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextEdit_AutoFormatting(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextEdit_AutoFormatting(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextEdit::AutoFormatting *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextEdit::AutoFormatting *>(sipSrc);
}


extern "C" {static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T);}
static void *array_QTextEdit_AutoFormatting(SIP_SSIZE_T sipNrElem)
{
    return new QTextEdit::AutoFormatting[sipNrElem];
}


extern "C" {static void *copy_QTextEdit_AutoFormatting(const void *, SIP_SSIZE_T);}
static void *copy_QTextEdit_AutoFormatting(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextEdit::AutoFormatting(reinterpret_cast<const QTextEdit::AutoFormatting *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *);}
static void dealloc_QTextEdit_AutoFormatting(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextEdit_AutoFormatting(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextEdit_AutoFormatting(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextEdit::AutoFormatting *sipCpp = 0;

    {
        const QTextEdit::AutoFormatting* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextEdit_AutoFormatting, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTextEdit::AutoFormatting *>(a0),sipType_QTextEdit_AutoFormatting,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEdit::AutoFormatting();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextEdit_AutoFormatting(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextEdit_AutoFormatting(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextEdit::AutoFormatting **sipCppPtr = reinterpret_cast<QTextEdit::AutoFormatting **>(sipCppPtrV);

#line 379 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextEdit::AutoFormatting is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextEdit_AutoFormattingFlag)))
{
    *sipCppPtr = new QTextEdit::AutoFormatting(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextEdit::AutoFormatting *>(sipConvertToType(sipPy, sipType_QTextEdit_AutoFormatting, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextEditAutoFormatting.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextEdit_AutoFormatting[] = {
    {(void *)slot_QTextEdit_AutoFormatting___bool__, bool_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ne__, ne_slot},
    {(void *)slot_QTextEdit_AutoFormatting___eq__, eq_slot},
    {(void *)slot_QTextEdit_AutoFormatting___invert__, invert_slot},
    {(void *)slot_QTextEdit_AutoFormatting___and__, and_slot},
    {(void *)slot_QTextEdit_AutoFormatting___xor__, xor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___or__, or_slot},
    {(void *)slot_QTextEdit_AutoFormatting___int__, int_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ixor__, ixor_slot},
    {(void *)slot_QTextEdit_AutoFormatting___ior__, ior_slot},
    {(void *)slot_QTextEdit_AutoFormatting___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextEdit_AutoFormatting, "\1QTextEdit.AutoFormatting(QTextEdit.AutoFormatting)\n"
    "QTextEdit.AutoFormatting(int)\n"
    "QTextEdit.AutoFormatting()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextEdit_AutoFormatting = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEdit__AutoFormatting,
        {0}
    },
    {
        sipNameNr_AutoFormatting,
        {667, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextEdit_AutoFormatting,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextEdit_AutoFormatting,
    init_type_QTextEdit_AutoFormatting,
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
    dealloc_QTextEdit_AutoFormatting,
    assign_QTextEdit_AutoFormatting,
    array_QTextEdit_AutoFormatting,
    copy_QTextEdit_AutoFormatting,
    release_QTextEdit_AutoFormatting,
    cast_QTextEdit_AutoFormatting,
    convertTo_QTextEdit_AutoFormatting,
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
