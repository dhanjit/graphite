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

#include "sipAPIQtGui.h"

#line 646 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

#line 945 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
#include <qgenericmatrix.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"


PyDoc_STRVAR(doc_QMatrix3x2_data, "QMatrix3x2.data() -> list-of-float");

extern "C" {static PyObject *meth_QMatrix3x2_data(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x2, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 721 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        sipError = qtgui_matrixDataAsList(6, sipCpp->constData(), &sipRes);
#line 58 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_data, doc_QMatrix3x2_data);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x2_copyDataTo, "QMatrix3x2.copyDataTo() -> list-of-float");

extern "C" {static PyObject *meth_QMatrix3x2_copyDataTo(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_copyDataTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x2, &sipCpp))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 726 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[6];

        sipCpp->copyDataTo(values);
        sipError = qtgui_matrixDataAsList(6, values, &sipRes);
#line 99 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_copyDataTo, doc_QMatrix3x2_copyDataTo);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x2_isIdentity, "QMatrix3x2.isIdentity() -> bool");

extern "C" {static PyObject *meth_QMatrix3x2_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x2, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isIdentity();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_isIdentity, doc_QMatrix3x2_isIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x2_setToIdentity, "QMatrix3x2.setToIdentity()");

extern "C" {static PyObject *meth_QMatrix3x2_setToIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_setToIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x2, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setToIdentity();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_setToIdentity, doc_QMatrix3x2_setToIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x2_fill, "QMatrix3x2.fill(float)");

extern "C" {static PyObject *meth_QMatrix3x2_fill(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMatrix3x2, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->fill(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_fill, doc_QMatrix3x2_fill);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix3x2_transposed, "QMatrix3x2.transposed() -> QMatrix2x3");

extern "C" {static PyObject *meth_QMatrix3x2_transposed(PyObject *, PyObject *);}
static PyObject *meth_QMatrix3x2_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix3x2, &sipCpp))
        {
            QMatrix2x3*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix2x3(sipCpp->transposed());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix2x3,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName_transposed, doc_QMatrix3x2_transposed);

    return NULL;
}


extern "C" {static PyObject *slot_QMatrix3x2___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x2, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix3x2::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMatrix3x2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x2___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x2, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix3x2::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMatrix3x2,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix3x2___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix3x2::operator/=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x2___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix3x2::operator*=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x2___isub__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix3x2::operator-=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QMatrix3x2___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix3x2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix3x2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix3x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix3x2::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static int slot_QMatrix3x2___setitem__(PyObject *,PyObject *);}
static int slot_QMatrix3x2___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        qreal a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "P0d", &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 757 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 2, &row, &column)) == sipErrorNone)
            sipCpp->operator()(row, column) = a1;
#line 494 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            if (sipError == sipErrorFail)
                return -1;

            if (sipError == sipErrorNone)
            {
            return 0;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_QMatrix3x2___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix3x2___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1P0", &a0))
        {
            PyObject * sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 734 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        int row, column;

        if ((sipError = qtgui_matrixParseIndex(a0, 3, 2, &row, &column)) == sipErrorNone)
        {
            sipRes = PyFloat_FromDouble(sipCpp->operator()(row, column));

            if (!sipRes)
                sipError = sipErrorFail;
        }
#line 543 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return sipRes;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix3x2, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QMatrix3x2___repr__(PyObject *);}
static PyObject *slot_QMatrix3x2___repr__(PyObject *sipSelf)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix3x2));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 674 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        bool bad = false;
        int i;
        PyObject *m[6];
        PYQT_FLOAT data[6];

        // The raw data is in column-major order but we want row-major order.
        sipCpp->copyDataTo(data);

        for (i = 0; i < 6; ++i)
        {
            m[i] = PyFloat_FromDouble(data[i]);

            if (!m[i])
                bad = true;
        }

        if (!bad)
        {
#if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtGui.QMatrix3x2("
                    "%R, %R, "
                    "%R, %R, "
                    "%R, %R)",
                    m[0], m[1],
                    m[2], m[3],
                    m[4], m[5]);
#else
            sipRes = PyString_FromString("PyQt4.QtGui.QMatrix3x2(");

            for (i = 0; i < 6; ++i)
            {
                if (i != 0)
                    PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));

                PyString_ConcatAndDel(&sipRes, PyObject_Repr(m[i]));
            }

            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
#endif
        }

        for (i = 0; i < 6; ++i)
            Py_XDECREF(m[i]);
#line 621 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMatrix3x2(void *, const sipTypeDef *);}
static void *cast_QMatrix3x2(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMatrix3x2)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix3x2(void *, int);}
static void release_QMatrix3x2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMatrix3x2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QMatrix3x2(void *);}
static PyObject *pickle_QMatrix3x2(void *sipCppV)
{
    QMatrix3x2 *sipCpp = reinterpret_cast<QMatrix3x2 *>(sipCppV);
    PyObject *sipRes;

#line 650 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT data[6];

        // We want the data in row-major order.
        sipCpp->copyDataTo(data);

        sipRes = Py_BuildValue((char *)"dddddd",
                (double)data[0], (double)data[1],
                (double)data[2], (double)data[3],
                (double)data[4], (double)data[5]);
#line 670 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

    return sipRes;
}


extern "C" {static void assign_QMatrix3x2(void *, SIP_SSIZE_T, const void *);}
static void assign_QMatrix3x2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMatrix3x2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMatrix3x2 *>(sipSrc);
}


extern "C" {static void *array_QMatrix3x2(SIP_SSIZE_T);}
static void *array_QMatrix3x2(SIP_SSIZE_T sipNrElem)
{
    return new QMatrix3x2[sipNrElem];
}


extern "C" {static void *copy_QMatrix3x2(const void *, SIP_SSIZE_T);}
static void *copy_QMatrix3x2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMatrix3x2(reinterpret_cast<const QMatrix3x2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix3x2(sipSimpleWrapper *);}
static void dealloc_QMatrix3x2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMatrix3x2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMatrix3x2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMatrix3x2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMatrix3x2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix3x2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMatrix3x2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMatrix3x2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix3x2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "P0", &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 666 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qgenericmatrix.sip"
        PYQT_FLOAT values[6];

        if ((sipError = qtgui_matrixDataFromSequence(a0, 6, values)) == sipErrorNone)
            sipCpp = new QMatrix3x2(values);
#line 748 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix3x2.cpp"

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix3x2[] = {
    {(void *)slot_QMatrix3x2___ne__, ne_slot},
    {(void *)slot_QMatrix3x2___eq__, eq_slot},
    {(void *)slot_QMatrix3x2___idiv__, idiv_slot},
    {(void *)slot_QMatrix3x2___imul__, imul_slot},
    {(void *)slot_QMatrix3x2___isub__, isub_slot},
    {(void *)slot_QMatrix3x2___iadd__, iadd_slot},
    {(void *)slot_QMatrix3x2___setitem__, setitem_slot},
    {(void *)slot_QMatrix3x2___getitem__, getitem_slot},
    {(void *)slot_QMatrix3x2___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix3x2[] = {
    {SIP_MLNAME_CAST(sipName_copyDataTo), meth_QMatrix3x2_copyDataTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_copyDataTo)},
    {SIP_MLNAME_CAST(sipName_data), meth_QMatrix3x2_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_data)},
    {SIP_MLNAME_CAST(sipName_fill), meth_QMatrix3x2_fill, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_fill)},
    {SIP_MLNAME_CAST(sipName_isIdentity), meth_QMatrix3x2_isIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_isIdentity)},
    {SIP_MLNAME_CAST(sipName_setToIdentity), meth_QMatrix3x2_setToIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_setToIdentity)},
    {SIP_MLNAME_CAST(sipName_transposed), meth_QMatrix3x2_transposed, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix3x2_transposed)}
};

PyDoc_STRVAR(doc_QMatrix3x2, "\1QMatrix3x2()\n"
    "QMatrix3x2(QMatrix3x2)\n"
    "QMatrix3x2(sequence-of-float)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMatrix3x2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMatrix3x2,
        {0}
    },
    {
        sipNameNr_QMatrix3x2,
        {0, 0, 1},
        6, methods_QMatrix3x2,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMatrix3x2,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMatrix3x2,
    init_type_QMatrix3x2,
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
    dealloc_QMatrix3x2,
    assign_QMatrix3x2,
    array_QMatrix3x2,
    copy_QMatrix3x2,
    release_QMatrix3x2,
    cast_QMatrix3x2,
    0,
    0,
    0,
    pickle_QMatrix3x2,
    0,
    0
},
    0,
    0,
    0
};
