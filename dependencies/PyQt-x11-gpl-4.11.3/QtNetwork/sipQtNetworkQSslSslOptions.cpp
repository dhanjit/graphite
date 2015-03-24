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

#line 40 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"

#line 40 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"


extern "C" {static int slot_QSsl_SslOptions___bool__(PyObject *);}
static int slot_QSsl_SslOptions___bool__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() != a0->operator QSsl::SslOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSsl_SslOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QSsl::SslOptions::Int() == a0->operator QSsl::SslOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSsl_SslOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___invert__(PyObject *);}
static PyObject *slot_QSsl_SslOptions___invert__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QSsl::SslOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSsl::SslOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSsl_SslOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSsl::SslOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        QSsl::SslOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSsl_SslOptions, &a0, &a0State, sipType_QSsl_SslOptions, &a1, &a1State))
        {
            QSsl::SslOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSsl::SslOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);
            sipReleaseType(a1,sipType_QSsl_SslOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes = 0;

#line 346 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QSsl::SslOptions(*a0 ^ a1);
#line 243 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        QSsl::SslOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSsl_SslOptions, &a0, &a0State, sipType_QSsl_SslOptions, &a1, &a1State))
        {
            QSsl::SslOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSsl::SslOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);
            sipReleaseType(a1,sipType_QSsl_SslOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    {
        QSsl::SslOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSsl_SslOptions, &a0, &a0State, &a1))
        {
            QSsl::SslOptions*sipRes = 0;

#line 341 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
        sipRes = new QSsl::SslOptions(*a0 | a1);
#line 295 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSsl_SslOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSsl_SslOptions___int__(PyObject *);}
static PyObject *slot_QSsl_SslOptions___int__(PyObject *sipSelf)
{
    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

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


extern "C" {static PyObject *slot_QSsl_SslOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSsl::SslOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

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


extern "C" {static PyObject *slot_QSsl_SslOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSsl::SslOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QSsl_SslOptions,a0State);

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


extern "C" {static PyObject *slot_QSsl_SslOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSsl_SslOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSsl_SslOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSsl::SslOptions *sipCpp = reinterpret_cast<QSsl::SslOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSsl_SslOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QSsl::SslOptions::operator&=(a0);
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
extern "C" {static void *cast_QSsl_SslOptions(void *, const sipTypeDef *);}
static void *cast_QSsl_SslOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSsl_SslOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSsl_SslOptions(void *, int);}
static void release_QSsl_SslOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSsl::SslOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSsl_SslOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QSsl_SslOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSsl::SslOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSsl::SslOptions *>(sipSrc);
}


extern "C" {static void *array_QSsl_SslOptions(SIP_SSIZE_T);}
static void *array_QSsl_SslOptions(SIP_SSIZE_T sipNrElem)
{
    return new QSsl::SslOptions[sipNrElem];
}


extern "C" {static void *copy_QSsl_SslOptions(const void *, SIP_SSIZE_T);}
static void *copy_QSsl_SslOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSsl::SslOptions(reinterpret_cast<const QSsl::SslOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSsl_SslOptions(sipSimpleWrapper *);}
static void dealloc_QSsl_SslOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSsl_SslOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSsl_SslOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSsl_SslOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSsl::SslOptions *sipCpp = 0;

    {
        const QSsl::SslOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSsl_SslOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSsl::SslOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QSsl::SslOptions *>(a0),sipType_QSsl_SslOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSsl::SslOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSsl::SslOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSsl_SslOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSsl_SslOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSsl::SslOptions **sipCppPtr = reinterpret_cast<QSsl::SslOptions **>(sipCppPtrV);

#line 379 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSsl::SslOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSsl_SslOption)) ||
            sipCanConvertToType(sipPy, sipType_QSsl_SslOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSsl_SslOption)))
{
    *sipCppPtr = new QSsl::SslOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSsl::SslOptions *>(sipConvertToType(sipPy, sipType_QSsl_SslOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQSslSslOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSsl_SslOptions[] = {
    {(void *)slot_QSsl_SslOptions___bool__, bool_slot},
    {(void *)slot_QSsl_SslOptions___ne__, ne_slot},
    {(void *)slot_QSsl_SslOptions___eq__, eq_slot},
    {(void *)slot_QSsl_SslOptions___invert__, invert_slot},
    {(void *)slot_QSsl_SslOptions___and__, and_slot},
    {(void *)slot_QSsl_SslOptions___xor__, xor_slot},
    {(void *)slot_QSsl_SslOptions___or__, or_slot},
    {(void *)slot_QSsl_SslOptions___int__, int_slot},
    {(void *)slot_QSsl_SslOptions___ixor__, ixor_slot},
    {(void *)slot_QSsl_SslOptions___ior__, ior_slot},
    {(void *)slot_QSsl_SslOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSsl_SslOptions, "\1QSsl.SslOptions(QSsl.SslOptions)\n"
    "QSsl.SslOptions(int)\n"
    "QSsl.SslOptions()");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QSsl_SslOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSsl__SslOptions,
        {0}
    },
    {
        sipNameNr_SslOptions,
        {83, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSsl_SslOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSsl_SslOptions,
    init_type_QSsl_SslOptions,
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
    dealloc_QSsl_SslOptions,
    assign_QSsl_SslOptions,
    array_QSsl_SslOptions,
    copy_QSsl_SslOptions,
    release_QSsl_SslOptions,
    cast_QSsl_SslOptions,
    convertTo_QSsl_SslOptions,
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
