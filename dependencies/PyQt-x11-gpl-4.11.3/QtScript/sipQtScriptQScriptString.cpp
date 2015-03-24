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

#include "sipAPIQtScript.h"

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptstring.sip"
#include <qscriptstring.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptString.cpp"

#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptString.cpp"
#line 37 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptstring.sip"
#include <QHash>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptString.cpp"


PyDoc_STRVAR(doc_QScriptString_isValid, "QScriptString.isValid() -> bool");

extern "C" {static PyObject *meth_QScriptString_isValid(PyObject *, PyObject *);}
static PyObject *meth_QScriptString_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptString, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptString, sipName_isValid, doc_QScriptString_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptString_toString, "QScriptString.toString() -> str");

extern "C" {static PyObject *meth_QScriptString_toString(PyObject *, PyObject *);}
static PyObject *meth_QScriptString_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptString, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptString, sipName_toString, doc_QScriptString_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptString_toArrayIndex, "QScriptString.toArrayIndex() -> (int, bool)");

extern "C" {static PyObject *meth_QScriptString_toArrayIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QScriptString_toArrayIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        const QScriptString *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QScriptString, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toArrayIndex(&a0);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(ub)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptString, sipName_toArrayIndex, doc_QScriptString_toArrayIndex);

    return NULL;
}


extern "C" {static PyObject *slot_QScriptString___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScriptString___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptString *sipCpp = reinterpret_cast<QScriptString *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptString));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptString* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScriptString, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QScriptString::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,ne_slot,sipType_QScriptString,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptString___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScriptString___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptString *sipCpp = reinterpret_cast<QScriptString *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptString));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptString* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QScriptString, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QScriptString::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,eq_slot,sipType_QScriptString,sipSelf,sipArg);
}


extern "C" {static long slot_QScriptString___hash__(PyObject *);}
static long slot_QScriptString___hash__(PyObject *sipSelf)
{
    QScriptString *sipCpp = reinterpret_cast<QScriptString *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptString));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtScript/qscriptstring.sip"
        sipRes = qHash(*sipCpp);
#line 215 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtScript/sipQtScriptQScriptString.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptString(void *, const sipTypeDef *);}
static void *cast_QScriptString(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptString)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptString(void *, int);}
static void release_QScriptString(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptString *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QScriptString(void *, SIP_SSIZE_T, const void *);}
static void assign_QScriptString(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QScriptString *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QScriptString *>(sipSrc);
}


extern "C" {static void *array_QScriptString(SIP_SSIZE_T);}
static void *array_QScriptString(SIP_SSIZE_T sipNrElem)
{
    return new QScriptString[sipNrElem];
}


extern "C" {static void *copy_QScriptString(const void *, SIP_SSIZE_T);}
static void *copy_QScriptString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QScriptString(reinterpret_cast<const QScriptString *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScriptString(sipSimpleWrapper *);}
static void dealloc_QScriptString(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptString(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QScriptString(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptString(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptString *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptString();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QScriptString* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptString, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptString(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScriptString[] = {
    {(void *)slot_QScriptString___ne__, ne_slot},
    {(void *)slot_QScriptString___eq__, eq_slot},
    {(void *)slot_QScriptString___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QScriptString[] = {
    {SIP_MLNAME_CAST(sipName_isValid), meth_QScriptString_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptString_isValid)},
    {SIP_MLNAME_CAST(sipName_toArrayIndex), (PyCFunction)meth_QScriptString_toArrayIndex, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QScriptString_toArrayIndex)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QScriptString_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptString_toString)}
};

PyDoc_STRVAR(doc_QScriptString, "\1QScriptString()\n"
    "QScriptString(QScriptString)");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptString = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptString,
        {0}
    },
    {
        sipNameNr_QScriptString,
        {0, 0, 1},
        3, methods_QScriptString,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptString,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QScriptString,
    init_type_QScriptString,
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
    dealloc_QScriptString,
    assign_QScriptString,
    array_QScriptString,
    copy_QScriptString,
    release_QScriptString,
    cast_QScriptString,
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
