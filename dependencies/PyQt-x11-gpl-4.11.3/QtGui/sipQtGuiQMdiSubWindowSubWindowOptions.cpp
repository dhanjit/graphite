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

#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qmdisubwindow.sip"
#include <qmdisubwindow.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"

#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qmdisubwindow.sip"
#include <qmdisubwindow.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"


extern "C" {static int slot_QMdiSubWindow_SubWindowOptions___bool__(PyObject *);}
static int slot_QMdiSubWindow_SubWindowOptions___bool__(PyObject *sipSelf)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMdiSubWindow::SubWindowOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMdiSubWindow::SubWindowOptions::Int() != a0->operator QMdiSubWindow::SubWindowOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"
            sipReleaseType(const_cast<QMdiSubWindow::SubWindowOptions *>(a0),sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMdiSubWindow_SubWindowOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QMdiSubWindow::SubWindowOptions::Int() == a0->operator QMdiSubWindow::SubWindowOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"
            sipReleaseType(const_cast<QMdiSubWindow::SubWindowOptions *>(a0),sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMdiSubWindow_SubWindowOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___invert__(PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___invert__(PyObject *sipSelf)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QMdiSubWindow::SubWindowOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiSubWindow::SubWindowOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State, &a1))
        {
            QMdiSubWindow::SubWindowOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiSubWindow::SubWindowOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;
        QMdiSubWindow::SubWindowOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State, sipType_QMdiSubWindow_SubWindowOptions, &a1, &a1State))
        {
            QMdiSubWindow::SubWindowOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiSubWindow::SubWindowOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);
            sipReleaseType(a1,sipType_QMdiSubWindow_SubWindowOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State, &a1))
        {
            QMdiSubWindow::SubWindowOptions*sipRes = 0;

#line 346 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QMdiSubWindow::SubWindowOptions(*a0 ^ a1);
#line 243 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;
        QMdiSubWindow::SubWindowOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State, sipType_QMdiSubWindow_SubWindowOptions, &a1, &a1State))
        {
            QMdiSubWindow::SubWindowOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiSubWindow::SubWindowOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);
            sipReleaseType(a1,sipType_QMdiSubWindow_SubWindowOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State, &a1))
        {
            QMdiSubWindow::SubWindowOptions*sipRes = 0;

#line 341 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QMdiSubWindow::SubWindowOptions(*a0 | a1);
#line 295 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiSubWindow_SubWindowOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___int__(PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___int__(PyObject *sipSelf)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

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


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiSubWindow_SubWindowOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiSubWindow::SubWindowOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);

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


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiSubWindow_SubWindowOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiSubWindow::SubWindowOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiSubWindow_SubWindowOptions,a0State);

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


extern "C" {static PyObject *slot_QMdiSubWindow_SubWindowOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMdiSubWindow_SubWindowOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiSubWindow_SubWindowOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiSubWindow::SubWindowOptions *sipCpp = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiSubWindow_SubWindowOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiSubWindow::SubWindowOptions::operator&=(a0);
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
extern "C" {static void *cast_QMdiSubWindow_SubWindowOptions(void *, const sipTypeDef *);}
static void *cast_QMdiSubWindow_SubWindowOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMdiSubWindow_SubWindowOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMdiSubWindow_SubWindowOptions(void *, int);}
static void release_QMdiSubWindow_SubWindowOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMdiSubWindow_SubWindowOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QMdiSubWindow_SubWindowOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMdiSubWindow::SubWindowOptions *>(sipSrc);
}


extern "C" {static void *array_QMdiSubWindow_SubWindowOptions(SIP_SSIZE_T);}
static void *array_QMdiSubWindow_SubWindowOptions(SIP_SSIZE_T sipNrElem)
{
    return new QMdiSubWindow::SubWindowOptions[sipNrElem];
}


extern "C" {static void *copy_QMdiSubWindow_SubWindowOptions(const void *, SIP_SSIZE_T);}
static void *copy_QMdiSubWindow_SubWindowOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMdiSubWindow::SubWindowOptions(reinterpret_cast<const QMdiSubWindow::SubWindowOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMdiSubWindow_SubWindowOptions(sipSimpleWrapper *);}
static void dealloc_QMdiSubWindow_SubWindowOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMdiSubWindow_SubWindowOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMdiSubWindow_SubWindowOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMdiSubWindow_SubWindowOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMdiSubWindow::SubWindowOptions *sipCpp = 0;

    {
        const QMdiSubWindow::SubWindowOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMdiSubWindow_SubWindowOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiSubWindow::SubWindowOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QMdiSubWindow::SubWindowOptions *>(a0),sipType_QMdiSubWindow_SubWindowOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiSubWindow::SubWindowOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiSubWindow::SubWindowOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMdiSubWindow_SubWindowOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMdiSubWindow_SubWindowOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMdiSubWindow::SubWindowOptions **sipCppPtr = reinterpret_cast<QMdiSubWindow::SubWindowOptions **>(sipCppPtrV);

#line 379 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMdiSubWindow::SubWindowOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiSubWindow_SubWindowOption)) ||
            sipCanConvertToType(sipPy, sipType_QMdiSubWindow_SubWindowOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiSubWindow_SubWindowOption)))
{
    *sipCppPtr = new QMdiSubWindow::SubWindowOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMdiSubWindow::SubWindowOptions *>(sipConvertToType(sipPy, sipType_QMdiSubWindow_SubWindowOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMdiSubWindowSubWindowOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMdiSubWindow_SubWindowOptions[] = {
    {(void *)slot_QMdiSubWindow_SubWindowOptions___bool__, bool_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___ne__, ne_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___eq__, eq_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___invert__, invert_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___and__, and_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___xor__, xor_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___or__, or_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___int__, int_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___ixor__, ixor_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___ior__, ior_slot},
    {(void *)slot_QMdiSubWindow_SubWindowOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMdiSubWindow_SubWindowOptions, "\1QMdiSubWindow.SubWindowOptions(QMdiSubWindow.SubWindowOptions)\n"
    "QMdiSubWindow.SubWindowOptions(int)\n"
    "QMdiSubWindow.SubWindowOptions()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMdiSubWindow_SubWindowOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMdiSubWindow__SubWindowOptions,
        {0}
    },
    {
        sipNameNr_SubWindowOptions,
        {343, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMdiSubWindow_SubWindowOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMdiSubWindow_SubWindowOptions,
    init_type_QMdiSubWindow_SubWindowOptions,
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
    dealloc_QMdiSubWindow_SubWindowOptions,
    assign_QMdiSubWindow_SubWindowOptions,
    array_QMdiSubWindow_SubWindowOptions,
    copy_QMdiSubWindow_SubWindowOptions,
    release_QMdiSubWindow_SubWindowOptions,
    cast_QMdiSubWindow_SubWindowOptions,
    convertTo_QMdiSubWindow_SubWindowOptions,
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