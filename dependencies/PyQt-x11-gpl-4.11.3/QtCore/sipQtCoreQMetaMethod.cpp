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

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"

#line 37 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 176 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 159 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 50 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"
#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
// Raise an exception when QMetaMethod::invoke() returns false.
static void qtcore_invoke_exception()
{
    PyErr_SetString(PyExc_RuntimeError, "QMetaMethod.invoke() call failed");
}
#line 60 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"


PyDoc_STRVAR(doc_QMetaMethod_typeName, "QMetaMethod.typeName() -> str");

extern "C" {static PyObject *meth_QMetaMethod_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->typeName();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_typeName, doc_QMetaMethod_typeName);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterTypes, "QMetaMethod.parameterTypes() -> list-of-QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_parameterTypes(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterTypes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterTypes, doc_QMetaMethod_parameterTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterNames, "QMetaMethod.parameterNames() -> list-of-QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_parameterNames(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterNames());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterNames, doc_QMetaMethod_parameterNames);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_tag, "QMetaMethod.tag() -> str");

extern "C" {static PyObject *meth_QMetaMethod_tag(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_tag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tag();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_tag, doc_QMetaMethod_tag);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_access, "QMetaMethod.access() -> QMetaMethod.Access");

extern "C" {static PyObject *meth_QMetaMethod_access(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_access(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QMetaMethod::Access sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->access();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QMetaMethod_Access);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_access, doc_QMetaMethod_access);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_methodType, "QMetaMethod.methodType() -> QMetaMethod.MethodType");

extern "C" {static PyObject *meth_QMetaMethod_methodType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QMetaMethod::MethodType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->methodType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QMetaMethod_MethodType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodType, doc_QMetaMethod_methodType);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_invoke, "QMetaMethod.invoke(QObject, Qt.ConnectionType, QGenericReturnArgument, QGenericArgument value0=QGenericArgument(0,0), QGenericArgument value1=QGenericArgument(0,0), QGenericArgument value2=QGenericArgument(0,0), QGenericArgument value3=QGenericArgument(0,0), QGenericArgument value4=QGenericArgument(0,0), QGenericArgument value5=QGenericArgument(0,0), QGenericArgument value6=QGenericArgument(0,0), QGenericArgument value7=QGenericArgument(0,0), QGenericArgument value8=QGenericArgument(0,0), QGenericArgument value9=QGenericArgument(0,0)) -> object\n"
    "QMetaMethod.invoke(QObject, QGenericReturnArgument, QGenericArgument value0=QGenericArgument(0,0), QGenericArgument value1=QGenericArgument(0,0), QGenericArgument value2=QGenericArgument(0,0), QGenericArgument value3=QGenericArgument(0,0), QGenericArgument value4=QGenericArgument(0,0), QGenericArgument value5=QGenericArgument(0,0), QGenericArgument value6=QGenericArgument(0,0), QGenericArgument value7=QGenericArgument(0,0), QGenericArgument value8=QGenericArgument(0,0), QGenericArgument value9=QGenericArgument(0,0)) -> object\n"
    "QMetaMethod.invoke(QObject, Qt.ConnectionType, QGenericArgument value0=QGenericArgument(0,0), QGenericArgument value1=QGenericArgument(0,0), QGenericArgument value2=QGenericArgument(0,0), QGenericArgument value3=QGenericArgument(0,0), QGenericArgument value4=QGenericArgument(0,0), QGenericArgument value5=QGenericArgument(0,0), QGenericArgument value6=QGenericArgument(0,0), QGenericArgument value7=QGenericArgument(0,0), QGenericArgument value8=QGenericArgument(0,0), QGenericArgument value9=QGenericArgument(0,0)) -> object\n"
    "QMetaMethod.invoke(QObject, QGenericArgument value0=QGenericArgument(0,0), QGenericArgument value1=QGenericArgument(0,0), QGenericArgument value2=QGenericArgument(0,0), QGenericArgument value3=QGenericArgument(0,0), QGenericArgument value4=QGenericArgument(0,0), QGenericArgument value5=QGenericArgument(0,0), QGenericArgument value6=QGenericArgument(0,0), QGenericArgument value7=QGenericArgument(0,0), QGenericArgument value8=QGenericArgument(0,0), QGenericArgument value9=QGenericArgument(0,0)) -> object");

extern "C" {static PyObject *meth_QMetaMethod_invoke(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_invoke(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        Qt::ConnectionType a1;
        QGenericReturnArgument* a2;
        PyObject *a2Wrapper;
        QGenericArgument a3def = QGenericArgument(0,0);
        QGenericArgument* a3 = &a3def;
        QGenericArgument a4def = QGenericArgument(0,0);
        QGenericArgument* a4 = &a4def;
        QGenericArgument a5def = QGenericArgument(0,0);
        QGenericArgument* a5 = &a5def;
        QGenericArgument a6def = QGenericArgument(0,0);
        QGenericArgument* a6 = &a6def;
        QGenericArgument a7def = QGenericArgument(0,0);
        QGenericArgument* a7 = &a7def;
        QGenericArgument a8def = QGenericArgument(0,0);
        QGenericArgument* a8 = &a8def;
        QGenericArgument a9def = QGenericArgument(0,0);
        QGenericArgument* a9 = &a9def;
        QGenericArgument a10def = QGenericArgument(0,0);
        QGenericArgument* a10 = &a10def;
        QGenericArgument a11def = QGenericArgument(0,0);
        QGenericArgument* a11 = &a11def;
        QGenericArgument a12def = QGenericArgument(0,0);
        QGenericArgument* a12 = &a12def;
        const QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8E@J9|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_Qt_ConnectionType, &a1, &a2Wrapper, sipType_QGenericReturnArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11, sipType_QGenericArgument, &a12))
        {
            PyObject * sipRes = 0;

#line 79 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11,
                *a12);
        Py_END_ALLOW_THREADS
        
        if (ok)
            sipRes = qpycore_ReturnValue(a2Wrapper);
        else
            qtcore_invoke_exception();
#line 319 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
        QObject* a0;
        QGenericReturnArgument* a1;
        PyObject *a1Wrapper;
        QGenericArgument a2def = QGenericArgument(0,0);
        QGenericArgument* a2 = &a2def;
        QGenericArgument a3def = QGenericArgument(0,0);
        QGenericArgument* a3 = &a3def;
        QGenericArgument a4def = QGenericArgument(0,0);
        QGenericArgument* a4 = &a4def;
        QGenericArgument a5def = QGenericArgument(0,0);
        QGenericArgument* a5 = &a5def;
        QGenericArgument a6def = QGenericArgument(0,0);
        QGenericArgument* a6 = &a6def;
        QGenericArgument a7def = QGenericArgument(0,0);
        QGenericArgument* a7 = &a7def;
        QGenericArgument a8def = QGenericArgument(0,0);
        QGenericArgument* a8 = &a8def;
        QGenericArgument a9def = QGenericArgument(0,0);
        QGenericArgument* a9 = &a9def;
        QGenericArgument a10def = QGenericArgument(0,0);
        QGenericArgument* a10 = &a10def;
        QGenericArgument a11def = QGenericArgument(0,0);
        QGenericArgument* a11 = &a11def;
        const QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8@J9|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, &a1Wrapper, sipType_QGenericReturnArgument, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11))
        {
            PyObject * sipRes = 0;

#line 97 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10,
                *a11);
        Py_END_ALLOW_THREADS
        
        if (ok)
            sipRes = qpycore_ReturnValue(a1Wrapper);
        else
            qtcore_invoke_exception();
#line 383 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
        QObject* a0;
        Qt::ConnectionType a1;
        QGenericArgument a2def = QGenericArgument(0,0);
        QGenericArgument* a2 = &a2def;
        QGenericArgument a3def = QGenericArgument(0,0);
        QGenericArgument* a3 = &a3def;
        QGenericArgument a4def = QGenericArgument(0,0);
        QGenericArgument* a4 = &a4def;
        QGenericArgument a5def = QGenericArgument(0,0);
        QGenericArgument* a5 = &a5def;
        QGenericArgument a6def = QGenericArgument(0,0);
        QGenericArgument* a6 = &a6def;
        QGenericArgument a7def = QGenericArgument(0,0);
        QGenericArgument* a7 = &a7def;
        QGenericArgument a8def = QGenericArgument(0,0);
        QGenericArgument* a8 = &a8def;
        QGenericArgument a9def = QGenericArgument(0,0);
        QGenericArgument* a9 = &a9def;
        QGenericArgument a10def = QGenericArgument(0,0);
        QGenericArgument* a10 = &a10def;
        QGenericArgument a11def = QGenericArgument(0,0);
        QGenericArgument* a11 = &a11def;
        const QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8E|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_Qt_ConnectionType, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10, sipType_QGenericArgument, &a11))
        {
            PyObject * sipRes = 0;

#line 115 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            Py_INCREF(Py_None);
            sipRes = Py_None;
        }
        else
            qtcore_invoke_exception();
#line 448 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    {
        QObject* a0;
        QGenericArgument a1def = QGenericArgument(0,0);
        QGenericArgument* a1 = &a1def;
        QGenericArgument a2def = QGenericArgument(0,0);
        QGenericArgument* a2 = &a2def;
        QGenericArgument a3def = QGenericArgument(0,0);
        QGenericArgument* a3 = &a3def;
        QGenericArgument a4def = QGenericArgument(0,0);
        QGenericArgument* a4 = &a4def;
        QGenericArgument a5def = QGenericArgument(0,0);
        QGenericArgument* a5 = &a5def;
        QGenericArgument a6def = QGenericArgument(0,0);
        QGenericArgument* a6 = &a6def;
        QGenericArgument a7def = QGenericArgument(0,0);
        QGenericArgument* a7 = &a7def;
        QGenericArgument a8def = QGenericArgument(0,0);
        QGenericArgument* a8 = &a8def;
        QGenericArgument a9def = QGenericArgument(0,0);
        QGenericArgument* a9 = &a9def;
        QGenericArgument a10def = QGenericArgument(0,0);
        QGenericArgument* a10 = &a10def;
        const QMetaMethod *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_value0,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
            sipName_value9,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J9J9J9J9J9J9J9J9J9J9", &sipSelf, sipType_QMetaMethod, &sipCpp, sipType_QObject, &a0, sipType_QGenericArgument, &a1, sipType_QGenericArgument, &a2, sipType_QGenericArgument, &a3, sipType_QGenericArgument, &a4, sipType_QGenericArgument, &a5, sipType_QGenericArgument, &a6, sipType_QGenericArgument, &a7, sipType_QGenericArgument, &a8, sipType_QGenericArgument, &a9, sipType_QGenericArgument, &a10))
        {
            PyObject * sipRes = 0;

#line 135 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
        // Raise an exception if the call failed.
        bool ok;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->invoke(a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            Py_INCREF(Py_None);
            sipRes = Py_None;
        }
        else
            qtcore_invoke_exception();
#line 511 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaMethod.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_invoke, doc_QMetaMethod_invoke);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_methodIndex, "QMetaMethod.methodIndex() -> int");

extern "C" {static PyObject *meth_QMetaMethod_methodIndex(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->methodIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodIndex, doc_QMetaMethod_methodIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_isValid, "QMetaMethod.isValid() -> bool");

extern "C" {static PyObject *meth_QMetaMethod_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_isValid, doc_QMetaMethod_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_methodSignature, "QMetaMethod.methodSignature() -> QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_methodSignature(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_methodSignature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->methodSignature());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_methodSignature, doc_QMetaMethod_methodSignature);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_name, "QMetaMethod.name() -> QByteArray");

extern "C" {static PyObject *meth_QMetaMethod_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_name, doc_QMetaMethod_name);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_returnType, "QMetaMethod.returnType() -> int");

extern "C" {static PyObject *meth_QMetaMethod_returnType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_returnType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->returnType();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_returnType, doc_QMetaMethod_returnType);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterCount, "QMetaMethod.parameterCount() -> int");

extern "C" {static PyObject *meth_QMetaMethod_parameterCount(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaMethod, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parameterCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterCount, doc_QMetaMethod_parameterCount);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaMethod_parameterType, "QMetaMethod.parameterType(int) -> int");

extern "C" {static PyObject *meth_QMetaMethod_parameterType(PyObject *, PyObject *);}
static PyObject *meth_QMetaMethod_parameterType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QMetaMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaMethod, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parameterType(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaMethod, sipName_parameterType, doc_QMetaMethod_parameterType);

    return NULL;
}


extern "C" {static PyObject *slot_QMetaMethod___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMetaMethod___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMetaMethod *sipCpp = reinterpret_cast<QMetaMethod *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaMethod));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QMetaMethod,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMetaMethod___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMetaMethod___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMetaMethod *sipCpp = reinterpret_cast<QMetaMethod *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMetaMethod));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QMetaMethod,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMetaMethod(void *, const sipTypeDef *);}
static void *cast_QMetaMethod(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMetaMethod)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaMethod(void *, int);}
static void release_QMetaMethod(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMetaMethod *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaMethod(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaMethod(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaMethod *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaMethod *>(sipSrc);
}


extern "C" {static void *array_QMetaMethod(SIP_SSIZE_T);}
static void *array_QMetaMethod(SIP_SSIZE_T sipNrElem)
{
    return new QMetaMethod[sipNrElem];
}


extern "C" {static void *copy_QMetaMethod(const void *, SIP_SSIZE_T);}
static void *copy_QMetaMethod(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaMethod(reinterpret_cast<const QMetaMethod *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaMethod(sipSimpleWrapper *);}
static void dealloc_QMetaMethod(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaMethod(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMetaMethod(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaMethod(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMetaMethod *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaMethod();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMetaMethod* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaMethod, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaMethod(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMetaMethod[] = {
    {(void *)slot_QMetaMethod___eq__, eq_slot},
    {(void *)slot_QMetaMethod___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMetaMethod[] = {
    {SIP_MLNAME_CAST(sipName_access), meth_QMetaMethod_access, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_access)},
    {SIP_MLNAME_CAST(sipName_invoke), (PyCFunction)meth_QMetaMethod_invoke, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaMethod_invoke)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QMetaMethod_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_isValid)},
    {SIP_MLNAME_CAST(sipName_methodIndex), meth_QMetaMethod_methodIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_methodIndex)},
    {SIP_MLNAME_CAST(sipName_methodSignature), meth_QMetaMethod_methodSignature, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_methodSignature)},
    {SIP_MLNAME_CAST(sipName_methodType), meth_QMetaMethod_methodType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_methodType)},
    {SIP_MLNAME_CAST(sipName_name), meth_QMetaMethod_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_name)},
    {SIP_MLNAME_CAST(sipName_parameterCount), meth_QMetaMethod_parameterCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_parameterCount)},
    {SIP_MLNAME_CAST(sipName_parameterNames), meth_QMetaMethod_parameterNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_parameterNames)},
    {SIP_MLNAME_CAST(sipName_parameterType), meth_QMetaMethod_parameterType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_parameterType)},
    {SIP_MLNAME_CAST(sipName_parameterTypes), meth_QMetaMethod_parameterTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_parameterTypes)},
    {SIP_MLNAME_CAST(sipName_returnType), meth_QMetaMethod_returnType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_returnType)},
    {SIP_MLNAME_CAST(sipName_tag), meth_QMetaMethod_tag, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_tag)},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QMetaMethod_typeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaMethod_typeName)}
};

static sipEnumMemberDef enummembers_QMetaMethod[] = {
    {sipName_Constructor, static_cast<int>(QMetaMethod::Constructor), 126},
    {sipName_Method, static_cast<int>(QMetaMethod::Method), 126},
    {sipName_Private, static_cast<int>(QMetaMethod::Private), 125},
    {sipName_Protected, static_cast<int>(QMetaMethod::Protected), 125},
    {sipName_Public, static_cast<int>(QMetaMethod::Public), 125},
    {sipName_Signal, static_cast<int>(QMetaMethod::Signal), 126},
    {sipName_Slot, static_cast<int>(QMetaMethod::Slot), 126},
};

PyDoc_STRVAR(doc_QMetaMethod, "\1QMetaMethod()\n"
    "QMetaMethod(QMetaMethod)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QMetaMethod = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaMethod,
        {0}
    },
    {
        sipNameNr_QMetaMethod,
        {0, 0, 1},
        14, methods_QMetaMethod,
        7, enummembers_QMetaMethod,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaMethod,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMetaMethod,
    init_type_QMetaMethod,
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
    dealloc_QMetaMethod,
    assign_QMetaMethod,
    array_QMetaMethod,
    copy_QMetaMethod,
    release_QMetaMethod,
    cast_QMetaMethod,
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
