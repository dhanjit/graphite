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

#include "sipAPIQtNetwork.h"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qudpsocket.sip"
#include <qudpsocket.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qudpsocket.sip"
#include <qudpsocket.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"


extern "C" {static int slot_QUdpSocket_BindMode___bool__(PyObject *);}
static int slot_QUdpSocket_BindMode___bool__(PyObject *sipSelf)
{
    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QUdpSocket::BindMode::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUdpSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUdpSocket_BindMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QUdpSocket::BindMode::Int() != a0->operator QUdpSocket::BindMode::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"
            sipReleaseType(const_cast<QUdpSocket::BindMode *>(a0),sipType_QUdpSocket_BindMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QUdpSocket_BindMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUdpSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUdpSocket_BindMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QUdpSocket::BindMode::Int() == a0->operator QUdpSocket::BindMode::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"
            sipReleaseType(const_cast<QUdpSocket::BindMode *>(a0),sipType_QUdpSocket_BindMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QUdpSocket_BindMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___invert__(PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___invert__(PyObject *sipSelf)
{
    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;


    {
        {
            QUdpSocket::BindMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUdpSocket::BindMode(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUdpSocket_BindMode, &a0, &a0State, &a1))
        {
            QUdpSocket::BindMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUdpSocket::BindMode((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;
        QUdpSocket::BindMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUdpSocket_BindMode, &a0, &a0State, sipType_QUdpSocket_BindMode, &a1, &a1State))
        {
            QUdpSocket::BindMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUdpSocket::BindMode((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);
            sipReleaseType(a1,sipType_QUdpSocket_BindMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUdpSocket_BindMode, &a0, &a0State, &a1))
        {
            QUdpSocket::BindMode*sipRes = 0;

#line 346 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QUdpSocket::BindMode(*a0 ^ a1);
#line 243 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;
        QUdpSocket::BindMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUdpSocket_BindMode, &a0, &a0State, sipType_QUdpSocket_BindMode, &a1, &a1State))
        {
            QUdpSocket::BindMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUdpSocket::BindMode((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);
            sipReleaseType(a1,sipType_QUdpSocket_BindMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUdpSocket_BindMode, &a0, &a0State, &a1))
        {
            QUdpSocket::BindMode*sipRes = 0;

#line 341 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QUdpSocket::BindMode(*a0 | a1);
#line 295 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUdpSocket_BindMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUdpSocket_BindMode___int__(PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___int__(PyObject *sipSelf)
{
    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

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


extern "C" {static PyObject *slot_QUdpSocket_BindMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUdpSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUdpSocket_BindMode, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUdpSocket::BindMode::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);

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


extern "C" {static PyObject *slot_QUdpSocket_BindMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUdpSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUdpSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUdpSocket_BindMode, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUdpSocket::BindMode::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QUdpSocket_BindMode,a0State);

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


extern "C" {static PyObject *slot_QUdpSocket_BindMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QUdpSocket_BindMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUdpSocket_BindMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUdpSocket::BindMode *sipCpp = reinterpret_cast<QUdpSocket::BindMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUdpSocket_BindMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QUdpSocket::BindMode::operator&=(a0);
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
extern "C" {static void *cast_QUdpSocket_BindMode(void *, const sipTypeDef *);}
static void *cast_QUdpSocket_BindMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUdpSocket_BindMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUdpSocket_BindMode(void *, int);}
static void release_QUdpSocket_BindMode(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QUdpSocket::BindMode *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QUdpSocket_BindMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QUdpSocket_BindMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUdpSocket::BindMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUdpSocket::BindMode *>(sipSrc);
}


extern "C" {static void *array_QUdpSocket_BindMode(SIP_SSIZE_T);}
static void *array_QUdpSocket_BindMode(SIP_SSIZE_T sipNrElem)
{
    return new QUdpSocket::BindMode[sipNrElem];
}


extern "C" {static void *copy_QUdpSocket_BindMode(const void *, SIP_SSIZE_T);}
static void *copy_QUdpSocket_BindMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUdpSocket::BindMode(reinterpret_cast<const QUdpSocket::BindMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUdpSocket_BindMode(sipSimpleWrapper *);}
static void dealloc_QUdpSocket_BindMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUdpSocket_BindMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QUdpSocket_BindMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUdpSocket_BindMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUdpSocket::BindMode *sipCpp = 0;

    {
        const QUdpSocket::BindMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QUdpSocket_BindMode, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUdpSocket::BindMode(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QUdpSocket::BindMode *>(a0),sipType_QUdpSocket_BindMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUdpSocket::BindMode(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUdpSocket::BindMode();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QUdpSocket_BindMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QUdpSocket_BindMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QUdpSocket::BindMode **sipCppPtr = reinterpret_cast<QUdpSocket::BindMode **>(sipCppPtrV);

#line 379 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QUdpSocket::BindMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUdpSocket_BindFlag)) ||
            sipCanConvertToType(sipPy, sipType_QUdpSocket_BindMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUdpSocket_BindFlag)))
{
    *sipCppPtr = new QUdpSocket::BindMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QUdpSocket::BindMode *>(sipConvertToType(sipPy, sipType_QUdpSocket_BindMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQUdpSocketBindMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUdpSocket_BindMode[] = {
    {(void *)slot_QUdpSocket_BindMode___bool__, bool_slot},
    {(void *)slot_QUdpSocket_BindMode___ne__, ne_slot},
    {(void *)slot_QUdpSocket_BindMode___eq__, eq_slot},
    {(void *)slot_QUdpSocket_BindMode___invert__, invert_slot},
    {(void *)slot_QUdpSocket_BindMode___and__, and_slot},
    {(void *)slot_QUdpSocket_BindMode___xor__, xor_slot},
    {(void *)slot_QUdpSocket_BindMode___or__, or_slot},
    {(void *)slot_QUdpSocket_BindMode___int__, int_slot},
    {(void *)slot_QUdpSocket_BindMode___ixor__, ixor_slot},
    {(void *)slot_QUdpSocket_BindMode___ior__, ior_slot},
    {(void *)slot_QUdpSocket_BindMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QUdpSocket_BindMode, "\1QUdpSocket.BindMode(QUdpSocket.BindMode)\n"
    "QUdpSocket.BindMode(int)\n"
    "QUdpSocket.BindMode()");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QUdpSocket_BindMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QUdpSocket__BindMode,
        {0}
    },
    {
        sipNameNr_BindMode,
        {103, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUdpSocket_BindMode,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUdpSocket_BindMode,
    init_type_QUdpSocket_BindMode,
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
    dealloc_QUdpSocket_BindMode,
    assign_QUdpSocket_BindMode,
    array_QUdpSocket_BindMode,
    copy_QUdpSocket_BindMode,
    release_QUdpSocket_BindMode,
    cast_QUdpSocket_BindMode,
    convertTo_QUdpSocket_BindMode,
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
