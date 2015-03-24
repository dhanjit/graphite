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

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qcryptographichash.sip"
#include <qcryptographichash.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQCryptographicHash.cpp"

#line 37 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQCryptographicHash.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQCryptographicHash.cpp"


PyDoc_STRVAR(doc_QCryptographicHash_reset, "QCryptographicHash.reset()");

extern "C" {static PyObject *meth_QCryptographicHash_reset(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCryptographicHash, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_reset, doc_QCryptographicHash_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_addData, "QCryptographicHash.addData(str)\n"
    "QCryptographicHash.addData(QByteArray)\n"
    "QCryptographicHash.addData(QIODevice) -> bool");

extern "C" {static PyObject *meth_QCryptographicHash_addData(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_addData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QCryptographicHash, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addData(a0,(int)a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCryptographicHash, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addData(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QIODevice* a0;
        QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QCryptographicHash, &sipCpp, sipType_QIODevice, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->addData(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_addData, doc_QCryptographicHash_addData);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_result, "QCryptographicHash.result() -> QByteArray");

extern "C" {static PyObject *meth_QCryptographicHash_result(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_result(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCryptographicHash *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCryptographicHash, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->result());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_result, doc_QCryptographicHash_result);

    return NULL;
}


PyDoc_STRVAR(doc_QCryptographicHash_hash, "QCryptographicHash.hash(QByteArray, QCryptographicHash.Algorithm) -> QByteArray");

extern "C" {static PyObject *meth_QCryptographicHash_hash(PyObject *, PyObject *);}
static PyObject *meth_QCryptographicHash_hash(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QCryptographicHash::Algorithm a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1E", sipType_QByteArray, &a0, &a0State, sipType_QCryptographicHash_Algorithm, &a1))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(QCryptographicHash::hash(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCryptographicHash, sipName_hash, doc_QCryptographicHash_hash);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCryptographicHash(void *, const sipTypeDef *);}
static void *cast_QCryptographicHash(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCryptographicHash)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCryptographicHash(void *, int);}
static void release_QCryptographicHash(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QCryptographicHash *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QCryptographicHash(sipSimpleWrapper *);}
static void dealloc_QCryptographicHash(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCryptographicHash(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCryptographicHash(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCryptographicHash(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCryptographicHash *sipCpp = 0;

    {
        QCryptographicHash::Algorithm a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QCryptographicHash_Algorithm, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCryptographicHash(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCryptographicHash[] = {
    {SIP_MLNAME_CAST(sipName_addData), meth_QCryptographicHash_addData, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_addData)},
    {SIP_MLNAME_CAST(sipName_hash), meth_QCryptographicHash_hash, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_hash)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QCryptographicHash_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_reset)},
    {SIP_MLNAME_CAST(sipName_result), meth_QCryptographicHash_result, METH_VARARGS, SIP_MLDOC_CAST(doc_QCryptographicHash_result)}
};

static sipEnumMemberDef enummembers_QCryptographicHash[] = {
    {sipName_Md4, static_cast<int>(QCryptographicHash::Md4), 30},
    {sipName_Md5, static_cast<int>(QCryptographicHash::Md5), 30},
    {sipName_Sha1, static_cast<int>(QCryptographicHash::Sha1), 30},
    {sipName_Sha224, static_cast<int>(QCryptographicHash::Sha224), 30},
    {sipName_Sha256, static_cast<int>(QCryptographicHash::Sha256), 30},
    {sipName_Sha384, static_cast<int>(QCryptographicHash::Sha384), 30},
    {sipName_Sha512, static_cast<int>(QCryptographicHash::Sha512), 30},
};

PyDoc_STRVAR(doc_QCryptographicHash, "\1QCryptographicHash(QCryptographicHash.Algorithm)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QCryptographicHash = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QCryptographicHash,
        {0}
    },
    {
        sipNameNr_QCryptographicHash,
        {0, 0, 1},
        4, methods_QCryptographicHash,
        7, enummembers_QCryptographicHash,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCryptographicHash,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QCryptographicHash,
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
    dealloc_QCryptographicHash,
    0,
    0,
    0,
    release_QCryptographicHash,
    cast_QCryptographicHash,
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
