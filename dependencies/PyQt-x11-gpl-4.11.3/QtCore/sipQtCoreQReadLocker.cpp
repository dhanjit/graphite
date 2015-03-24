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

#line 73 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQReadLocker.cpp"

#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQReadLocker.cpp"


PyDoc_STRVAR(doc_QReadLocker_unlock, "QReadLocker.unlock()");

extern "C" {static PyObject *meth_QReadLocker_unlock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_unlock, doc_QReadLocker_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QReadLocker_relock, "QReadLocker.relock()");

extern "C" {static PyObject *meth_QReadLocker_relock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_relock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->relock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_relock, doc_QReadLocker_relock);

    return NULL;
}


PyDoc_STRVAR(doc_QReadLocker_readWriteLock, "QReadLocker.readWriteLock() -> QReadWriteLock");

extern "C" {static PyObject *meth_QReadLocker_readWriteLock(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker_readWriteLock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            QReadWriteLock*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->readWriteLock();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QReadWriteLock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName_readWriteLock, doc_QReadLocker_readWriteLock);

    return NULL;
}


PyDoc_STRVAR(doc_QReadLocker___enter__, "QReadLocker.__enter__() -> object");

extern "C" {static PyObject *meth_QReadLocker___enter__(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker___enter__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QReadLocker, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 84 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qreadwritelock.sip"
        // Just return a reference to self.
        sipRes = sipSelf;
        Py_INCREF(sipRes);
#line 144 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQReadLocker.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName___enter__, doc_QReadLocker___enter__);

    return NULL;
}


PyDoc_STRVAR(doc_QReadLocker___exit__, "QReadLocker.__exit__(object, object, object)");

extern "C" {static PyObject *meth_QReadLocker___exit__(PyObject *, PyObject *);}
static PyObject *meth_QReadLocker___exit__(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        PyObject * a1;
        PyObject * a2;
        QReadLocker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0P0P0", &sipSelf, sipType_QReadLocker, &sipCpp, &a0, &a1, &a2))
        {
#line 91 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qreadwritelock.sip"
        sipCpp->unlock();
#line 174 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQReadLocker.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QReadLocker, sipName___exit__, doc_QReadLocker___exit__);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QReadLocker(void *, const sipTypeDef *);}
static void *cast_QReadLocker(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QReadLocker)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QReadLocker(void *, int);}
static void release_QReadLocker(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QReadLocker *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QReadLocker(sipSimpleWrapper *);}
static void dealloc_QReadLocker(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QReadLocker(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QReadLocker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QReadLocker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QReadLocker *sipCpp = 0;

    {
        QReadWriteLock* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QReadWriteLock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QReadLocker(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QReadLocker[] = {
    {SIP_MLNAME_CAST(sipName___enter__), meth_QReadLocker___enter__, METH_VARARGS, SIP_MLDOC_CAST(doc_QReadLocker___enter__)},
    {SIP_MLNAME_CAST(sipName___exit__), meth_QReadLocker___exit__, METH_VARARGS, SIP_MLDOC_CAST(doc_QReadLocker___exit__)},
    {SIP_MLNAME_CAST(sipName_readWriteLock), meth_QReadLocker_readWriteLock, METH_VARARGS, SIP_MLDOC_CAST(doc_QReadLocker_readWriteLock)},
    {SIP_MLNAME_CAST(sipName_relock), meth_QReadLocker_relock, METH_VARARGS, SIP_MLDOC_CAST(doc_QReadLocker_relock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QReadLocker_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QReadLocker_unlock)}
};

PyDoc_STRVAR(doc_QReadLocker, "\1QReadLocker(QReadWriteLock)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QReadLocker = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NONLAZY|SIP_TYPE_CLASS,
        sipNameNr_QReadLocker,
        {0}
    },
    {
        sipNameNr_QReadLocker,
        {0, 0, 1},
        5, methods_QReadLocker,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QReadLocker,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QReadLocker,
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
    dealloc_QReadLocker,
    0,
    0,
    0,
    release_QReadLocker,
    cast_QReadLocker,
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
