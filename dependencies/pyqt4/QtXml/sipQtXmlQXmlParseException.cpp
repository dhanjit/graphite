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

#include "sipAPIQtXml.h"

#line 116 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXml/sipQtXmlQXmlParseException.cpp"

#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtXml/sipQtXmlQXmlParseException.cpp"


PyDoc_STRVAR(doc_QXmlParseException_columnNumber, "QXmlParseException.columnNumber() -> int");

extern "C" {static PyObject *meth_QXmlParseException_columnNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_columnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_columnNumber, doc_QXmlParseException_columnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_lineNumber, "QXmlParseException.lineNumber() -> int");

extern "C" {static PyObject *meth_QXmlParseException_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_lineNumber, doc_QXmlParseException_lineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_publicId, "QXmlParseException.publicId() -> QString");

extern "C" {static PyObject *meth_QXmlParseException_publicId(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->publicId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_publicId, doc_QXmlParseException_publicId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_systemId, "QXmlParseException.systemId() -> QString");

extern "C" {static PyObject *meth_QXmlParseException_systemId(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->systemId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_systemId, doc_QXmlParseException_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_message, "QXmlParseException.message() -> QString");

extern "C" {static PyObject *meth_QXmlParseException_message(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_message(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->message());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_message, doc_QXmlParseException_message);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlParseException(void *, const sipTypeDef *);}
static void *cast_QXmlParseException(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlParseException)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlParseException(void *, int);}
static void release_QXmlParseException(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlParseException *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlParseException(sipSimpleWrapper *);}
static void dealloc_QXmlParseException(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlParseException(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlParseException(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlParseException(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlParseException *sipCpp = 0;

    {
        const QString& a0def = QString();
        const QString* a0 = &a0def;
        int a0State = 0;
        int a1 = -1;
        int a2 = -1;
        const QString& a3def = QString();
        const QString* a3 = &a3def;
        int a3State = 0;
        const QString& a4def = QString();
        const QString* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_column,
            sipName_line,
            sipName_publicId,
            sipName_systemId,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1iiJ1J1", sipType_QString,&a0, &a0State, &a1, &a2, sipType_QString,&a3, &a3State, sipType_QString,&a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlParseException(*a0,a1,a2,*a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast<QString *>(a4),sipType_QString,a4State);

            return sipCpp;
        }
    }

    {
        const QXmlParseException* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlParseException, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlParseException(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlParseException[] = {
    {SIP_MLNAME_CAST(sipName_columnNumber), meth_QXmlParseException_columnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_columnNumber)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QXmlParseException_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_lineNumber)},
    {SIP_MLNAME_CAST(sipName_message), meth_QXmlParseException_message, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_message)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QXmlParseException_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QXmlParseException_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_systemId)}
};

PyDoc_STRVAR(doc_QXmlParseException, "\1QXmlParseException(QString name=QString(), int column=-1, int line=-1, QString publicId=QString(), QString systemId=QString())\n"
    "QXmlParseException(QXmlParseException)");


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlParseException = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlParseException,
        {0}
    },
    {
        sipNameNr_QXmlParseException,
        {0, 0, 1},
        5, methods_QXmlParseException,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlParseException,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlParseException,
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
    dealloc_QXmlParseException,
    0,
    0,
    0,
    release_QXmlParseException,
    cast_QXmlParseException,
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
