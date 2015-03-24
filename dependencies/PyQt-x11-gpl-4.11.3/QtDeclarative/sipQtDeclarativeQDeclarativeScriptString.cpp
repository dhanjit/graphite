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

#include "sipAPIQtDeclarative.h"

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDeclarative/qdeclarativescriptstring.sip"
#include <qdeclarativescriptstring.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDeclarative/sipQtDeclarativeQDeclarativeScriptString.cpp"

#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDeclarative/sipQtDeclarativeQDeclarativeScriptString.cpp"
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDeclarative/sipQtDeclarativeQDeclarativeScriptString.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDeclarative/qdeclarativecontext.sip"
#include <qdeclarativecontext.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDeclarative/sipQtDeclarativeQDeclarativeScriptString.cpp"


PyDoc_STRVAR(doc_QDeclarativeScriptString_context, "QDeclarativeScriptString.context() -> QDeclarativeContext");

extern "C" {static PyObject *meth_QDeclarativeScriptString_context(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_context(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp))
        {
            QDeclarativeContext*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->context();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDeclarativeContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_context, doc_QDeclarativeScriptString_context);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeScriptString_setContext, "QDeclarativeScriptString.setContext(QDeclarativeContext)");

extern "C" {static PyObject *meth_QDeclarativeScriptString_setContext(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_setContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDeclarativeContext* a0;
        PyObject *a0Keep;
        QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp, &a0Keep, sipType_QDeclarativeContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContext(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_setContext, doc_QDeclarativeScriptString_setContext);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeScriptString_scopeObject, "QDeclarativeScriptString.scopeObject() -> QObject");

extern "C" {static PyObject *meth_QDeclarativeScriptString_scopeObject(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_scopeObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->scopeObject();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_scopeObject, doc_QDeclarativeScriptString_scopeObject);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeScriptString_setScopeObject, "QDeclarativeScriptString.setScopeObject(QObject)");

extern "C" {static PyObject *meth_QDeclarativeScriptString_setScopeObject(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_setScopeObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        PyObject *a0Keep;
        QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp, &a0Keep, sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setScopeObject(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_setScopeObject, doc_QDeclarativeScriptString_setScopeObject);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeScriptString_script, "QDeclarativeScriptString.script() -> QString");

extern "C" {static PyObject *meth_QDeclarativeScriptString_script(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_script(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->script());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_script, doc_QDeclarativeScriptString_script);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeScriptString_setScript, "QDeclarativeScriptString.setScript(QString)");

extern "C" {static PyObject *meth_QDeclarativeScriptString_setScript(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeScriptString_setScript(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QDeclarativeScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDeclarativeScriptString, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setScript(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeScriptString, sipName_setScript, doc_QDeclarativeScriptString_setScript);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeScriptString(void *, const sipTypeDef *);}
static void *cast_QDeclarativeScriptString(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDeclarativeScriptString)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeScriptString(void *, int);}
static void release_QDeclarativeScriptString(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDeclarativeScriptString *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDeclarativeScriptString(void *, SIP_SSIZE_T, const void *);}
static void assign_QDeclarativeScriptString(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDeclarativeScriptString *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDeclarativeScriptString *>(sipSrc);
}


extern "C" {static void *array_QDeclarativeScriptString(SIP_SSIZE_T);}
static void *array_QDeclarativeScriptString(SIP_SSIZE_T sipNrElem)
{
    return new QDeclarativeScriptString[sipNrElem];
}


extern "C" {static void *copy_QDeclarativeScriptString(const void *, SIP_SSIZE_T);}
static void *copy_QDeclarativeScriptString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDeclarativeScriptString(reinterpret_cast<const QDeclarativeScriptString *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDeclarativeScriptString(sipSimpleWrapper *);}
static void dealloc_QDeclarativeScriptString(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeScriptString(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDeclarativeScriptString(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeScriptString(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDeclarativeScriptString *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDeclarativeScriptString();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDeclarativeScriptString* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeScriptString, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDeclarativeScriptString(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeScriptString[] = {
    {SIP_MLNAME_CAST(sipName_context), meth_QDeclarativeScriptString_context, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_context)},
    {SIP_MLNAME_CAST(sipName_scopeObject), meth_QDeclarativeScriptString_scopeObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_scopeObject)},
    {SIP_MLNAME_CAST(sipName_script), meth_QDeclarativeScriptString_script, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_script)},
    {SIP_MLNAME_CAST(sipName_setContext), meth_QDeclarativeScriptString_setContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_setContext)},
    {SIP_MLNAME_CAST(sipName_setScopeObject), meth_QDeclarativeScriptString_setScopeObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_setScopeObject)},
    {SIP_MLNAME_CAST(sipName_setScript), meth_QDeclarativeScriptString_setScript, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeScriptString_setScript)}
};

PyDoc_STRVAR(doc_QDeclarativeScriptString, "\1QDeclarativeScriptString()\n"
    "QDeclarativeScriptString(QDeclarativeScriptString)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeScriptString = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeScriptString,
        {0}
    },
    {
        sipNameNr_QDeclarativeScriptString,
        {0, 0, 1},
        6, methods_QDeclarativeScriptString,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeScriptString,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativeScriptString,
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
    dealloc_QDeclarativeScriptString,
    assign_QDeclarativeScriptString,
    array_QDeclarativeScriptString,
    copy_QDeclarativeScriptString,
    release_QDeclarativeScriptString,
    cast_QDeclarativeScriptString,
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
