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

#line 91 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"

#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"


PyDoc_STRVAR(doc_QDnsServiceRecord_swap, "QDnsServiceRecord.swap(QDnsServiceRecord)");

extern "C" {static PyObject *meth_QDnsServiceRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsServiceRecord* a0;
        QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsServiceRecord, &sipCpp, sipType_QDnsServiceRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_swap, doc_QDnsServiceRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_name, "QDnsServiceRecord.name() -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_name, doc_QDnsServiceRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_port, "QDnsServiceRecord.port() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_port(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->port();
            Py_END_ALLOW_THREADS

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_port, doc_QDnsServiceRecord_port);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_priority, "QDnsServiceRecord.priority() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_priority(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_priority(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->priority();
            Py_END_ALLOW_THREADS

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_priority, doc_QDnsServiceRecord_priority);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_target, "QDnsServiceRecord.target() -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_target(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->target());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_target, doc_QDnsServiceRecord_target);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_timeToLive, "QDnsServiceRecord.timeToLive() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timeToLive();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_timeToLive, doc_QDnsServiceRecord_timeToLive);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_weight, "QDnsServiceRecord.weight() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_weight(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->weight();
            Py_END_ALLOW_THREADS

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_weight, doc_QDnsServiceRecord_weight);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDnsServiceRecord(void *, const sipTypeDef *);}
static void *cast_QDnsServiceRecord(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDnsServiceRecord)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsServiceRecord(void *, int);}
static void release_QDnsServiceRecord(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDnsServiceRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDnsServiceRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsServiceRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsServiceRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsServiceRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsServiceRecord(SIP_SSIZE_T);}
static void *array_QDnsServiceRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsServiceRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsServiceRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsServiceRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsServiceRecord(reinterpret_cast<const QDnsServiceRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsServiceRecord(sipSimpleWrapper *);}
static void dealloc_QDnsServiceRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsServiceRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsServiceRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsServiceRecord();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDnsServiceRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsServiceRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsServiceRecord(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsServiceRecord[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsServiceRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_name)},
    {SIP_MLNAME_CAST(sipName_port), meth_QDnsServiceRecord_port, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_port)},
    {SIP_MLNAME_CAST(sipName_priority), meth_QDnsServiceRecord_priority, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_priority)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsServiceRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_swap)},
    {SIP_MLNAME_CAST(sipName_target), meth_QDnsServiceRecord_target, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_target)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsServiceRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_timeToLive)},
    {SIP_MLNAME_CAST(sipName_weight), meth_QDnsServiceRecord_weight, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_weight)}
};

PyDoc_STRVAR(doc_QDnsServiceRecord, "\1QDnsServiceRecord()\n"
    "QDnsServiceRecord(QDnsServiceRecord)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QDnsServiceRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDnsServiceRecord,
        {0}
    },
    {
        sipNameNr_QDnsServiceRecord,
        {0, 0, 1},
        7, methods_QDnsServiceRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsServiceRecord,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsServiceRecord,
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
    dealloc_QDnsServiceRecord,
    assign_QDnsServiceRecord,
    array_QDnsServiceRecord,
    copy_QDnsServiceRecord,
    release_QDnsServiceRecord,
    cast_QDnsServiceRecord,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
