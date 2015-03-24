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

#line 178 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaEnum.cpp"

#line 37 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQMetaEnum.cpp"


PyDoc_STRVAR(doc_QMetaEnum_name, "QMetaEnum.name() -> str");

extern "C" {static PyObject *meth_QMetaEnum_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaEnum, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->name();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_name, doc_QMetaEnum_name);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_isFlag, "QMetaEnum.isFlag() -> bool");

extern "C" {static PyObject *meth_QMetaEnum_isFlag(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_isFlag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaEnum, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFlag();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_isFlag, doc_QMetaEnum_isFlag);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_keyCount, "QMetaEnum.keyCount() -> int");

extern "C" {static PyObject *meth_QMetaEnum_keyCount(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_keyCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaEnum, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->keyCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_keyCount, doc_QMetaEnum_keyCount);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_key, "QMetaEnum.key(int) -> str");

extern "C" {static PyObject *meth_QMetaEnum_key(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->key(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_key, doc_QMetaEnum_key);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_value, "QMetaEnum.value(int) -> int");

extern "C" {static PyObject *meth_QMetaEnum_value(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->value(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_value, doc_QMetaEnum_value);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_scope, "QMetaEnum.scope() -> str");

extern "C" {static PyObject *meth_QMetaEnum_scope(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_scope(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaEnum, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->scope();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_scope, doc_QMetaEnum_scope);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_keyToValue, "QMetaEnum.keyToValue(str) -> int");

extern "C" {static PyObject *meth_QMetaEnum_keyToValue(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_keyToValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->keyToValue(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_keyToValue, doc_QMetaEnum_keyToValue);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_valueToKey, "QMetaEnum.valueToKey(int) -> str");

extern "C" {static PyObject *meth_QMetaEnum_valueToKey(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_valueToKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->valueToKey(a0);
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_valueToKey, doc_QMetaEnum_valueToKey);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_keysToValue, "QMetaEnum.keysToValue(str) -> int");

extern "C" {static PyObject *meth_QMetaEnum_keysToValue(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_keysToValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->keysToValue(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_keysToValue, doc_QMetaEnum_keysToValue);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_valueToKeys, "QMetaEnum.valueToKeys(int) -> QByteArray");

extern "C" {static PyObject *meth_QMetaEnum_valueToKeys(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_valueToKeys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMetaEnum, &sipCpp, &a0))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->valueToKeys(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_valueToKeys, doc_QMetaEnum_valueToKeys);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaEnum_isValid, "QMetaEnum.isValid() -> bool");

extern "C" {static PyObject *meth_QMetaEnum_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMetaEnum_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaEnum *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaEnum, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaEnum, sipName_isValid, doc_QMetaEnum_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMetaEnum(void *, const sipTypeDef *);}
static void *cast_QMetaEnum(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMetaEnum)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaEnum(void *, int);}
static void release_QMetaEnum(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMetaEnum *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaEnum(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaEnum(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaEnum *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaEnum *>(sipSrc);
}


extern "C" {static void *array_QMetaEnum(SIP_SSIZE_T);}
static void *array_QMetaEnum(SIP_SSIZE_T sipNrElem)
{
    return new QMetaEnum[sipNrElem];
}


extern "C" {static void *copy_QMetaEnum(const void *, SIP_SSIZE_T);}
static void *copy_QMetaEnum(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaEnum(reinterpret_cast<const QMetaEnum *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaEnum(sipSimpleWrapper *);}
static void dealloc_QMetaEnum(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaEnum(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMetaEnum(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaEnum(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMetaEnum *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaEnum();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMetaEnum* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaEnum, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaEnum(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMetaEnum[] = {
    {SIP_MLNAME_CAST(sipName_isFlag), meth_QMetaEnum_isFlag, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_isFlag)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QMetaEnum_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_isValid)},
    {SIP_MLNAME_CAST(sipName_key), meth_QMetaEnum_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_key)},
    {SIP_MLNAME_CAST(sipName_keyCount), meth_QMetaEnum_keyCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_keyCount)},
    {SIP_MLNAME_CAST(sipName_keyToValue), meth_QMetaEnum_keyToValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_keyToValue)},
    {SIP_MLNAME_CAST(sipName_keysToValue), meth_QMetaEnum_keysToValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_keysToValue)},
    {SIP_MLNAME_CAST(sipName_name), meth_QMetaEnum_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_name)},
    {SIP_MLNAME_CAST(sipName_scope), meth_QMetaEnum_scope, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_scope)},
    {SIP_MLNAME_CAST(sipName_value), meth_QMetaEnum_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_value)},
    {SIP_MLNAME_CAST(sipName_valueToKey), meth_QMetaEnum_valueToKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_valueToKey)},
    {SIP_MLNAME_CAST(sipName_valueToKeys), meth_QMetaEnum_valueToKeys, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaEnum_valueToKeys)}
};

PyDoc_STRVAR(doc_QMetaEnum, "\1QMetaEnum()\n"
    "QMetaEnum(QMetaEnum)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QMetaEnum = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaEnum,
        {0}
    },
    {
        sipNameNr_QMetaEnum,
        {0, 0, 1},
        11, methods_QMetaEnum,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaEnum,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMetaEnum,
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
    dealloc_QMetaEnum,
    assign_QMetaEnum,
    array_QMetaEnum,
    copy_QMetaEnum,
    release_QMetaEnum,
    cast_QMetaEnum,
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
