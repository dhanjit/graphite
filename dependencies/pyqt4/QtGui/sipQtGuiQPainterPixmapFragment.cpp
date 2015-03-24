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

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 650 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPainterPixmapFragment.cpp"

#line 119 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 40 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPainterPixmapFragment.cpp"
#line 168 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 43 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPainterPixmapFragment.cpp"


PyDoc_STRVAR(doc_QPainter_PixmapFragment_create, "QPainter.PixmapFragment.create(QPointF, QRectF, float scaleX=1, float scaleY=1, float rotation=0, float opacity=1) -> QPainter.PixmapFragment");

extern "C" {static PyObject *meth_QPainter_PixmapFragment_create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPainter_PixmapFragment_create(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QRectF* a1;
        qreal a2 = 1;
        qreal a3 = 1;
        qreal a4 = 0;
        qreal a5 = 1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_scaleX,
            sipName_scaleY,
            sipName_rotation,
            sipName_opacity,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1J9|dddd", sipType_QPointF, &a0, &a0State, sipType_QRectF, &a1, &a2, &a3, &a4, &a5))
        {
            QPainter::PixmapFragment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::PixmapFragment(QPainter::PixmapFragment::create(*a0,*a1,a2,a3,a4,a5));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPainter_PixmapFragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PixmapFragment, sipName_create, doc_QPainter_PixmapFragment_create);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPainter_PixmapFragment(void *, const sipTypeDef *);}
static void *cast_QPainter_PixmapFragment(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPainter_PixmapFragment)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPainter_PixmapFragment(void *, int);}
static void release_QPainter_PixmapFragment(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPainter::PixmapFragment *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPainter_PixmapFragment(void *, SIP_SSIZE_T, const void *);}
static void assign_QPainter_PixmapFragment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPainter::PixmapFragment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPainter::PixmapFragment *>(sipSrc);
}


extern "C" {static void *array_QPainter_PixmapFragment(SIP_SSIZE_T);}
static void *array_QPainter_PixmapFragment(SIP_SSIZE_T sipNrElem)
{
    return new QPainter::PixmapFragment[sipNrElem];
}


extern "C" {static void *copy_QPainter_PixmapFragment(const void *, SIP_SSIZE_T);}
static void *copy_QPainter_PixmapFragment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPainter::PixmapFragment(reinterpret_cast<const QPainter::PixmapFragment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPainter_PixmapFragment(sipSimpleWrapper *);}
static void dealloc_QPainter_PixmapFragment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPainter_PixmapFragment(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPainter_PixmapFragment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPainter_PixmapFragment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPainter::PixmapFragment *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainter::PixmapFragment();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPainter::PixmapFragment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPainter_PixmapFragment, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPainter::PixmapFragment(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPainter_PixmapFragment[] = {
    {SIP_MLNAME_CAST(sipName_create), (PyCFunction)meth_QPainter_PixmapFragment_create, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPainter_PixmapFragment_create)}
};


extern "C" {static PyObject *varget_QPainter_PixmapFragment_height(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_height(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->height;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_height(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_height(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->height = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_opacity(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_opacity(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->opacity;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_opacity(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_opacity(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->opacity = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_rotation(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_rotation(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->rotation;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_rotation(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_rotation(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->rotation = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_scaleX(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_scaleX(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->scaleX;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_scaleX(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_scaleX(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->scaleX = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_scaleY(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_scaleY(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->scaleY;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_scaleY(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_scaleY(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->scaleY = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_sourceLeft(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_sourceLeft(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->sourceLeft;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_sourceLeft(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_sourceLeft(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->sourceLeft = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_sourceTop(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_sourceTop(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->sourceTop;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_sourceTop(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_sourceTop(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->sourceTop = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_width(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_width(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->width;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_width(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_width(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->width = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_x(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_x(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_x(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QPainter_PixmapFragment_y(void *, PyObject *, PyObject *);}
static PyObject *varget_QPainter_PixmapFragment_y(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QPainter_PixmapFragment_y(void *, PyObject *, PyObject *);}
static int varset_QPainter_PixmapFragment_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QPainter::PixmapFragment *sipCpp = reinterpret_cast<QPainter::PixmapFragment *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_QPainter_PixmapFragment[] = {
    {InstanceVariable, sipName_height, (PyMethodDef *)varget_QPainter_PixmapFragment_height, (PyMethodDef *)varset_QPainter_PixmapFragment_height, NULL, NULL},
    {InstanceVariable, sipName_opacity, (PyMethodDef *)varget_QPainter_PixmapFragment_opacity, (PyMethodDef *)varset_QPainter_PixmapFragment_opacity, NULL, NULL},
    {InstanceVariable, sipName_rotation, (PyMethodDef *)varget_QPainter_PixmapFragment_rotation, (PyMethodDef *)varset_QPainter_PixmapFragment_rotation, NULL, NULL},
    {InstanceVariable, sipName_scaleX, (PyMethodDef *)varget_QPainter_PixmapFragment_scaleX, (PyMethodDef *)varset_QPainter_PixmapFragment_scaleX, NULL, NULL},
    {InstanceVariable, sipName_scaleY, (PyMethodDef *)varget_QPainter_PixmapFragment_scaleY, (PyMethodDef *)varset_QPainter_PixmapFragment_scaleY, NULL, NULL},
    {InstanceVariable, sipName_sourceLeft, (PyMethodDef *)varget_QPainter_PixmapFragment_sourceLeft, (PyMethodDef *)varset_QPainter_PixmapFragment_sourceLeft, NULL, NULL},
    {InstanceVariable, sipName_sourceTop, (PyMethodDef *)varget_QPainter_PixmapFragment_sourceTop, (PyMethodDef *)varset_QPainter_PixmapFragment_sourceTop, NULL, NULL},
    {InstanceVariable, sipName_width, (PyMethodDef *)varget_QPainter_PixmapFragment_width, (PyMethodDef *)varset_QPainter_PixmapFragment_width, NULL, NULL},
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_QPainter_PixmapFragment_x, (PyMethodDef *)varset_QPainter_PixmapFragment_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_QPainter_PixmapFragment_y, (PyMethodDef *)varset_QPainter_PixmapFragment_y, NULL, NULL},
};

PyDoc_STRVAR(doc_QPainter_PixmapFragment, "\1QPainter.PixmapFragment()\n"
    "QPainter.PixmapFragment(QPainter.PixmapFragment)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QPainter_PixmapFragment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPainter__PixmapFragment,
        {0}
    },
    {
        sipNameNr_PixmapFragment,
        {373, 255, 0},
        1, methods_QPainter_PixmapFragment,
        0, 0,
        10, variables_QPainter_PixmapFragment,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPainter_PixmapFragment,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPainter_PixmapFragment,
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
    dealloc_QPainter_PixmapFragment,
    assign_QPainter_PixmapFragment,
    array_QPainter_PixmapFragment,
    copy_QPainter_PixmapFragment,
    release_QPainter_PixmapFragment,
    cast_QPainter_PixmapFragment,
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
