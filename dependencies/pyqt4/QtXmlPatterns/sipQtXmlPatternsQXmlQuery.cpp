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

#include "sipAPIQtXmlPatterns.h"

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlquery.sip"
#include <qxmlquery.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 132 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 50 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 107 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 53 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 56 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qabstracturiresolver.sip"
#include <qabstracturiresolver.h>
#line 59 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlresultitems.sip"
#include <qxmlresultitems.h>
#line 62 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qabstractxmlreceiver.sip"
#include <qabstractxmlreceiver.h>
#line 65 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 68 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 71 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"


PyDoc_STRVAR(doc_QXmlQuery_setMessageHandler, "QXmlQuery.setMessageHandler(QAbstractMessageHandler)");

extern "C" {static PyObject *meth_QXmlQuery_setMessageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setMessageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractMessageHandler* a0;
        PyObject *a0Keep;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlQuery, &sipCpp, &a0Keep, sipType_QAbstractMessageHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMessageHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -2, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setMessageHandler, doc_QXmlQuery_setMessageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_messageHandler, "QXmlQuery.messageHandler() -> QAbstractMessageHandler");

extern "C" {static PyObject *meth_QXmlQuery_messageHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_messageHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            QAbstractMessageHandler*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->messageHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractMessageHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_messageHandler, doc_QXmlQuery_messageHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_setQuery, "QXmlQuery.setQuery(QString, QUrl documentUri=QUrl())\n"
    "QXmlQuery.setQuery(QIODevice, QUrl documentUri=QUrl())\n"
    "QXmlQuery.setQuery(QUrl, QUrl baseUri=QUrl())");

extern "C" {static PyObject *meth_QXmlQuery_setQuery(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setQuery(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QUrl& a1def = QUrl();
        const QUrl* a1 = &a1def;
        QXmlQuery *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QUrl, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setQuery(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QIODevice* a0;
        const QUrl& a1def = QUrl();
        const QUrl* a1 = &a1def;
        QXmlQuery *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_documentUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QIODevice, &a0, sipType_QUrl, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setQuery(a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QUrl* a0;
        const QUrl& a1def = QUrl();
        const QUrl* a1 = &a1def;
        QXmlQuery *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_baseUri,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QUrl, &a0, sipType_QUrl, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setQuery(*a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setQuery, doc_QXmlQuery_setQuery);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_namePool, "QXmlQuery.namePool() -> QXmlNamePool");

extern "C" {static PyObject *meth_QXmlQuery_namePool(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            QXmlNamePool*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNamePool(sipCpp->namePool());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_namePool, doc_QXmlQuery_namePool);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_bindVariable, "QXmlQuery.bindVariable(QXmlName, QXmlItem)\n"
    "QXmlQuery.bindVariable(QXmlName, QIODevice)\n"
    "QXmlQuery.bindVariable(QXmlName, QXmlQuery)\n"
    "QXmlQuery.bindVariable(QString, QXmlItem)\n"
    "QXmlQuery.bindVariable(QString, QIODevice)\n"
    "QXmlQuery.bindVariable(QString, QXmlQuery)");

extern "C" {static PyObject *meth_QXmlQuery_bindVariable(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_bindVariable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlName* a0;
        const QXmlItem* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlName, &a0, sipType_QXmlItem, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QXmlName* a0;
        QIODevice* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlName, &a0, sipType_QIODevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QXmlName* a0;
        const QXmlQuery* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlName, &a0, sipType_QXmlQuery, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QXmlItem* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QXmlItem, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QIODevice* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QIODevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QXmlQuery* a1;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State, sipType_QXmlQuery, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bindVariable(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_bindVariable, doc_QXmlQuery_bindVariable);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_isValid, "QXmlQuery.isValid() -> bool");

extern "C" {static PyObject *meth_QXmlQuery_isValid(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_isValid, doc_QXmlQuery_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_evaluateTo, "QXmlQuery.evaluateTo(QXmlResultItems)\n"
    "QXmlQuery.evaluateTo(QAbstractXmlReceiver) -> bool\n"
    "QXmlQuery.evaluateTo(QStringList) -> bool\n"
    "QXmlQuery.evaluateTo(QIODevice) -> bool\n"
    "QXmlQuery.evaluateTo(QString) -> bool");

extern "C" {static PyObject *meth_QXmlQuery_evaluateTo(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_evaluateTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlResultItems* a0;
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlResultItems, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->evaluateTo(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QAbstractXmlReceiver* a0;
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QAbstractXmlReceiver, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->evaluateTo(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QStringList* a0;
        int a0State = 0;
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->evaluateTo(a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStringList,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QIODevice* a0;
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QIODevice, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->evaluateTo(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QString* a0;
        int a0State = 0;
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->evaluateTo(a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_evaluateTo, doc_QXmlQuery_evaluateTo);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_evaluateToStringList, "QXmlQuery.evaluateToStringList() -> QStringList");

extern "C" {static PyObject *meth_QXmlQuery_evaluateToStringList(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_evaluateToStringList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 75 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlquery.sip"
        bool ok;
        QStringList *result = new QStringList;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->evaluateTo(result);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            sipRes = sipConvertFromNewType(result, sipType_QStringList, NULL);
        }
        else
        {
            delete result;
            sipRes = Py_None;
            Py_INCREF(Py_None);
        }
#line 533 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_evaluateToStringList, doc_QXmlQuery_evaluateToStringList);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_evaluateToString, "QXmlQuery.evaluateToString() -> QString");

extern "C" {static PyObject *meth_QXmlQuery_evaluateToString(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_evaluateToString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 103 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXmlPatterns/qxmlquery.sip"
        bool ok;
        QString *result = new QString;
        
        Py_BEGIN_ALLOW_THREADS
        ok = sipCpp->evaluateTo(result);
        Py_END_ALLOW_THREADS
        
        if (ok)
        {
            sipRes = sipConvertFromNewType(result, sipType_QString, NULL);
        }
        else
        {
            delete result;
            sipRes = Py_None;
            Py_INCREF(Py_None);
        }
#line 578 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXmlPatterns/sipQtXmlPatternsQXmlQuery.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_evaluateToString, doc_QXmlQuery_evaluateToString);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_setUriResolver, "QXmlQuery.setUriResolver(QAbstractUriResolver)");

extern "C" {static PyObject *meth_QXmlQuery_setUriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setUriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractUriResolver* a0;
        PyObject *a0Keep;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlQuery, &sipCpp, &a0Keep, sipType_QAbstractUriResolver, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUriResolver(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -3, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setUriResolver, doc_QXmlQuery_setUriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_uriResolver, "QXmlQuery.uriResolver() -> QAbstractUriResolver");

extern "C" {static PyObject *meth_QXmlQuery_uriResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_uriResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            const QAbstractUriResolver*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->uriResolver();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QAbstractUriResolver *>(sipRes),sipType_QAbstractUriResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_uriResolver, doc_QXmlQuery_uriResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_setFocus, "QXmlQuery.setFocus(QXmlItem)\n"
    "QXmlQuery.setFocus(QUrl) -> bool\n"
    "QXmlQuery.setFocus(QIODevice) -> bool\n"
    "QXmlQuery.setFocus(QString) -> bool");

extern "C" {static PyObject *meth_QXmlQuery_setFocus(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setFocus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlItem* a0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFocus(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QUrl* a0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QUrl, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setFocus(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QIODevice* a0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QIODevice, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setFocus(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setFocus(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setFocus, doc_QXmlQuery_setFocus);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_setInitialTemplateName, "QXmlQuery.setInitialTemplateName(QXmlName)\n"
    "QXmlQuery.setInitialTemplateName(QString)");

extern "C" {static PyObject *meth_QXmlQuery_setInitialTemplateName(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setInitialTemplateName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlName* a0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QXmlName, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setInitialTemplateName(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setInitialTemplateName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setInitialTemplateName, doc_QXmlQuery_setInitialTemplateName);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_initialTemplateName, "QXmlQuery.initialTemplateName() -> QXmlName");

extern "C" {static PyObject *meth_QXmlQuery_initialTemplateName(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_initialTemplateName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            QXmlName*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlName(sipCpp->initialTemplateName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_initialTemplateName, doc_QXmlQuery_initialTemplateName);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_setNetworkAccessManager, "QXmlQuery.setNetworkAccessManager(QNetworkAccessManager)");

extern "C" {static PyObject *meth_QXmlQuery_setNetworkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_setNetworkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkAccessManager* a0;
        PyObject *a0Keep;
        QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlQuery, &sipCpp, &a0Keep, sipType_QNetworkAccessManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNetworkAccessManager(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -4, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_setNetworkAccessManager, doc_QXmlQuery_setNetworkAccessManager);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_networkAccessManager, "QXmlQuery.networkAccessManager() -> QNetworkAccessManager");

extern "C" {static PyObject *meth_QXmlQuery_networkAccessManager(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_networkAccessManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            QNetworkAccessManager*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->networkAccessManager();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_networkAccessManager, doc_QXmlQuery_networkAccessManager);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlQuery_queryLanguage, "QXmlQuery.queryLanguage() -> QXmlQuery.QueryLanguage");

extern "C" {static PyObject *meth_QXmlQuery_queryLanguage(PyObject *, PyObject *);}
static PyObject *meth_QXmlQuery_queryLanguage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlQuery, &sipCpp))
        {
            QXmlQuery::QueryLanguage sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->queryLanguage();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QXmlQuery_QueryLanguage);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlQuery, sipName_queryLanguage, doc_QXmlQuery_queryLanguage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlQuery(void *, const sipTypeDef *);}
static void *cast_QXmlQuery(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlQuery)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlQuery(void *, int);}
static void release_QXmlQuery(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlQuery *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlQuery *>(sipSrc);
}


extern "C" {static void *array_QXmlQuery(SIP_SSIZE_T);}
static void *array_QXmlQuery(SIP_SSIZE_T sipNrElem)
{
    return new QXmlQuery[sipNrElem];
}


extern "C" {static void *copy_QXmlQuery(const void *, SIP_SSIZE_T);}
static void *copy_QXmlQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlQuery(reinterpret_cast<const QXmlQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlQuery(sipSimpleWrapper *);}
static void dealloc_QXmlQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlQuery(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlQuery *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlQuery();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlQuery* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlQuery, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlQuery(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlNamePool* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNamePool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlQuery(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QXmlQuery::QueryLanguage a0;
        const QXmlNamePool& a1def = QXmlNamePool();
        const QXmlNamePool* a1 = &a1def;

        static const char *sipKwdList[] = {
            NULL,
            sipName_pool,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|J9", sipType_QXmlQuery_QueryLanguage, &a0, sipType_QXmlNamePool, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlQuery(a0,*a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlQuery[] = {
    {SIP_MLNAME_CAST(sipName_bindVariable), meth_QXmlQuery_bindVariable, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_bindVariable)},
    {SIP_MLNAME_CAST(sipName_evaluateTo), meth_QXmlQuery_evaluateTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_evaluateTo)},
    {SIP_MLNAME_CAST(sipName_evaluateToString), meth_QXmlQuery_evaluateToString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_evaluateToString)},
    {SIP_MLNAME_CAST(sipName_evaluateToStringList), meth_QXmlQuery_evaluateToStringList, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_evaluateToStringList)},
    {SIP_MLNAME_CAST(sipName_initialTemplateName), meth_QXmlQuery_initialTemplateName, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_initialTemplateName)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QXmlQuery_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_isValid)},
    {SIP_MLNAME_CAST(sipName_messageHandler), meth_QXmlQuery_messageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_messageHandler)},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QXmlQuery_namePool, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_namePool)},
    {SIP_MLNAME_CAST(sipName_networkAccessManager), meth_QXmlQuery_networkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_networkAccessManager)},
    {SIP_MLNAME_CAST(sipName_queryLanguage), meth_QXmlQuery_queryLanguage, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_queryLanguage)},
    {SIP_MLNAME_CAST(sipName_setFocus), meth_QXmlQuery_setFocus, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_setFocus)},
    {SIP_MLNAME_CAST(sipName_setInitialTemplateName), meth_QXmlQuery_setInitialTemplateName, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_setInitialTemplateName)},
    {SIP_MLNAME_CAST(sipName_setMessageHandler), meth_QXmlQuery_setMessageHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_setMessageHandler)},
    {SIP_MLNAME_CAST(sipName_setNetworkAccessManager), meth_QXmlQuery_setNetworkAccessManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_setNetworkAccessManager)},
    {SIP_MLNAME_CAST(sipName_setQuery), (PyCFunction)meth_QXmlQuery_setQuery, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlQuery_setQuery)},
    {SIP_MLNAME_CAST(sipName_setUriResolver), meth_QXmlQuery_setUriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_setUriResolver)},
    {SIP_MLNAME_CAST(sipName_uriResolver), meth_QXmlQuery_uriResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlQuery_uriResolver)}
};

static sipEnumMemberDef enummembers_QXmlQuery[] = {
    {sipName_XQuery10, static_cast<int>(QXmlQuery::XQuery10), 17},
    {sipName_XSLT20, static_cast<int>(QXmlQuery::XSLT20), 17},
};

PyDoc_STRVAR(doc_QXmlQuery, "\1QXmlQuery()\n"
    "QXmlQuery(QXmlQuery)\n"
    "QXmlQuery(QXmlNamePool)\n"
    "QXmlQuery(QXmlQuery.QueryLanguage, QXmlNamePool pool=QXmlNamePool())");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlQuery,
        {0}
    },
    {
        sipNameNr_QXmlQuery,
        {0, 0, 1},
        17, methods_QXmlQuery,
        2, enummembers_QXmlQuery,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlQuery,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlQuery,
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
    dealloc_QXmlQuery,
    assign_QXmlQuery,
    array_QXmlQuery,
    copy_QXmlQuery,
    release_QXmlQuery,
    cast_QXmlQuery,
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
