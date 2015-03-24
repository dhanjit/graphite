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

#line 29 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpynullvariant.sip"
#include <qvariant.h>

typedef QVariant QPyNullVariant;
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPyNullVariant_5.cpp"

#line 274 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 40 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPyNullVariant_5.cpp"


extern "C" {static PyObject *meth_QPyNullVariant_5_type(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_userType(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_userType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userType();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_userType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_typeName(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
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

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_typeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static int slot_QPyNullVariant_5___bool__(PyObject *);}
static int slot_QPyNullVariant_5___bool__(PyObject *sipSelf)
{
    QPyNullVariant *sipCpp = reinterpret_cast<QPyNullVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPyNullVariant));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 47 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpynullvariant.sip"
        // This makes QPyNullVariant behave like None when truth testing.
        sipRes = 0;
#line 173 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPyNullVariant_5.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyNullVariant_5(void *, const sipTypeDef *);}
static void *cast_QPyNullVariant_5(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPyNullVariant)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyNullVariant_5(void *, int);}
static void release_QPyNullVariant_5(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPyNullVariant *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyNullVariant_5(sipSimpleWrapper *);}
static void dealloc_QPyNullVariant_5(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPyNullVariant_5(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPyNullVariant_5(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyNullVariant_5(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPyNullVariant *sipCpp = 0;

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "P0", &a0))
        {
#line 37 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpynullvariant.sip"
        sipCpp = qpycore_qpynullvariant(a0);
#line 228 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPyNullVariant_5.cpp"

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPyNullVariant_5[] = {
    {(void *)slot_QPyNullVariant_5___bool__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPyNullVariant_5[] = {
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPyNullVariant_5_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QPyNullVariant_5_type, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QPyNullVariant_5_typeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_userType), meth_QPyNullVariant_5_userType, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QPyNullVariant_5 = {
{
    {
        5,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPyNullVariant,
        {0}
    },
    {
        sipNameNr_QPyNullVariant,
        {0, 0, 1},
        4, methods_QPyNullVariant_5,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPyNullVariant_5,
    init_type_QPyNullVariant_5,
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
    dealloc_QPyNullVariant_5,
    0,
    0,
    0,
    release_QPyNullVariant_5,
    cast_QPyNullVariant_5,
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
