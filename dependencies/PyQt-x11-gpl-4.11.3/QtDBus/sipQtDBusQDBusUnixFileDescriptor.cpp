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

#include "sipAPIQtDBus.h"

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusunixfiledescriptor.sip"
#include <qdbusunixfiledescriptor.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBusQDBusUnixFileDescriptor.cpp"



PyDoc_STRVAR(doc_QDBusUnixFileDescriptor_isValid, "QDBusUnixFileDescriptor.isValid() -> bool");

extern "C" {static PyObject *meth_QDBusUnixFileDescriptor_isValid(PyObject *, PyObject *);}
static PyObject *meth_QDBusUnixFileDescriptor_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusUnixFileDescriptor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusUnixFileDescriptor, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusUnixFileDescriptor, sipName_isValid, doc_QDBusUnixFileDescriptor_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusUnixFileDescriptor_fileDescriptor, "QDBusUnixFileDescriptor.fileDescriptor() -> int");

extern "C" {static PyObject *meth_QDBusUnixFileDescriptor_fileDescriptor(PyObject *, PyObject *);}
static PyObject *meth_QDBusUnixFileDescriptor_fileDescriptor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDBusUnixFileDescriptor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDBusUnixFileDescriptor, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fileDescriptor();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusUnixFileDescriptor, sipName_fileDescriptor, doc_QDBusUnixFileDescriptor_fileDescriptor);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusUnixFileDescriptor_setFileDescriptor, "QDBusUnixFileDescriptor.setFileDescriptor(int)");

extern "C" {static PyObject *meth_QDBusUnixFileDescriptor_setFileDescriptor(PyObject *, PyObject *);}
static PyObject *meth_QDBusUnixFileDescriptor_setFileDescriptor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDBusUnixFileDescriptor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDBusUnixFileDescriptor, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileDescriptor(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusUnixFileDescriptor, sipName_setFileDescriptor, doc_QDBusUnixFileDescriptor_setFileDescriptor);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusUnixFileDescriptor_isSupported, "QDBusUnixFileDescriptor.isSupported() -> bool");

extern "C" {static PyObject *meth_QDBusUnixFileDescriptor_isSupported(PyObject *, PyObject *);}
static PyObject *meth_QDBusUnixFileDescriptor_isSupported(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QDBusUnixFileDescriptor::isSupported();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusUnixFileDescriptor, sipName_isSupported, doc_QDBusUnixFileDescriptor_isSupported);

    return NULL;
}


PyDoc_STRVAR(doc_QDBusUnixFileDescriptor_swap, "QDBusUnixFileDescriptor.swap(QDBusUnixFileDescriptor)");

extern "C" {static PyObject *meth_QDBusUnixFileDescriptor_swap(PyObject *, PyObject *);}
static PyObject *meth_QDBusUnixFileDescriptor_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusUnixFileDescriptor* a0;
        QDBusUnixFileDescriptor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDBusUnixFileDescriptor, &sipCpp, sipType_QDBusUnixFileDescriptor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDBusUnixFileDescriptor, sipName_swap, doc_QDBusUnixFileDescriptor_swap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusUnixFileDescriptor(void *, const sipTypeDef *);}
static void *cast_QDBusUnixFileDescriptor(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusUnixFileDescriptor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusUnixFileDescriptor(void *, int);}
static void release_QDBusUnixFileDescriptor(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDBusUnixFileDescriptor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDBusUnixFileDescriptor(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusUnixFileDescriptor(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusUnixFileDescriptor *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusUnixFileDescriptor *>(sipSrc);
}


extern "C" {static void *array_QDBusUnixFileDescriptor(SIP_SSIZE_T);}
static void *array_QDBusUnixFileDescriptor(SIP_SSIZE_T sipNrElem)
{
    return new QDBusUnixFileDescriptor[sipNrElem];
}


extern "C" {static void *copy_QDBusUnixFileDescriptor(const void *, SIP_SSIZE_T);}
static void *copy_QDBusUnixFileDescriptor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusUnixFileDescriptor(reinterpret_cast<const QDBusUnixFileDescriptor *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusUnixFileDescriptor(sipSimpleWrapper *);}
static void dealloc_QDBusUnixFileDescriptor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusUnixFileDescriptor(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusUnixFileDescriptor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusUnixFileDescriptor(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusUnixFileDescriptor *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusUnixFileDescriptor();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusUnixFileDescriptor(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDBusUnixFileDescriptor* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDBusUnixFileDescriptor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDBusUnixFileDescriptor(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDBusUnixFileDescriptor[] = {
    {SIP_MLNAME_CAST(sipName_fileDescriptor), meth_QDBusUnixFileDescriptor_fileDescriptor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusUnixFileDescriptor_fileDescriptor)},
    {SIP_MLNAME_CAST(sipName_isSupported), meth_QDBusUnixFileDescriptor_isSupported, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusUnixFileDescriptor_isSupported)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QDBusUnixFileDescriptor_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusUnixFileDescriptor_isValid)},
    {SIP_MLNAME_CAST(sipName_setFileDescriptor), meth_QDBusUnixFileDescriptor_setFileDescriptor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusUnixFileDescriptor_setFileDescriptor)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDBusUnixFileDescriptor_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDBusUnixFileDescriptor_swap)}
};

PyDoc_STRVAR(doc_QDBusUnixFileDescriptor, "\1QDBusUnixFileDescriptor()\n"
    "QDBusUnixFileDescriptor(int)\n"
    "QDBusUnixFileDescriptor(QDBusUnixFileDescriptor)");


pyqt4ClassTypeDef sipTypeDef_QtDBus_QDBusUnixFileDescriptor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDBusUnixFileDescriptor,
        {0}
    },
    {
        sipNameNr_QDBusUnixFileDescriptor,
        {0, 0, 1},
        5, methods_QDBusUnixFileDescriptor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusUnixFileDescriptor,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDBusUnixFileDescriptor,
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
    dealloc_QDBusUnixFileDescriptor,
    assign_QDBusUnixFileDescriptor,
    array_QDBusUnixFileDescriptor,
    copy_QDBusUnixFileDescriptor,
    release_QDBusUnixFileDescriptor,
    cast_QDBusUnixFileDescriptor,
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
