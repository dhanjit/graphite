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

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qpolygon.sip"
#include <qpolygon.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 168 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 44 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 119 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 50 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qline.sip"
#include <qline.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 113 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qline.sip"
#include <qline.h>
#line 56 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 355 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qpolygon.sip"
#include <qpolygon.h>
#line 59 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 62 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 65 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"


PyDoc_STRVAR(doc_QMatrix_setMatrix, "QMatrix.setMatrix(float, float, float, float, float, float)");

extern "C" {static PyObject *meth_QMatrix_setMatrix(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_setMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        qreal a4;
        qreal a5;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddddd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1, &a2, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMatrix(a0,a1,a2,a3,a4,a5);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_setMatrix, doc_QMatrix_setMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_m11, "QMatrix.m11() -> float");

extern "C" {static PyObject *meth_QMatrix_m11(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m11(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m11();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m11, doc_QMatrix_m11);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_m12, "QMatrix.m12() -> float");

extern "C" {static PyObject *meth_QMatrix_m12(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m12(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m12();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m12, doc_QMatrix_m12);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_m21, "QMatrix.m21() -> float");

extern "C" {static PyObject *meth_QMatrix_m21(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m21(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m21();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m21, doc_QMatrix_m21);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_m22, "QMatrix.m22() -> float");

extern "C" {static PyObject *meth_QMatrix_m22(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_m22(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->m22();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_m22, doc_QMatrix_m22);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_dx, "QMatrix.dx() -> float");

extern "C" {static PyObject *meth_QMatrix_dx(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_dx(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dx();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_dx, doc_QMatrix_dx);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_dy, "QMatrix.dy() -> float");

extern "C" {static PyObject *meth_QMatrix_dy(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_dy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->dy();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_dy, doc_QMatrix_dy);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_map, "QMatrix.map(int, int) -> (int, int)\n"
    "QMatrix.map(float, float) -> (float, float)\n"
    "QMatrix.map(QPoint) -> QPoint\n"
    "QMatrix.map(QPointF) -> QPointF\n"
    "QMatrix.map(QLine) -> QLine\n"
    "QMatrix.map(QLineF) -> QLineF\n"
    "QMatrix.map(QPolygonF) -> QPolygonF\n"
    "QMatrix.map(QPolygon) -> QPolygon\n"
    "QMatrix.map(QRegion) -> QRegion\n"
    "QMatrix.map(QPainterPath) -> QPainterPath");

extern "C" {static PyObject *meth_QMatrix_map(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXiXi", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map(a0,a1,&a2,&a3);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(ii)",a2,a3);
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->map(a0,a1,&a2,&a3);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(dd)",a2,a3);
        }
    }

    {
        const QPoint* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPoint, &a0))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    {
        const QLine* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QLine, &a0))
        {
            QLine*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLine(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLine,NULL);
        }
    }

    {
        const QLineF* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QLineF, &a0))
        {
            QLineF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLineF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLineF,NULL);
        }
    }

    {
        const QPolygonF* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPolygonF, &a0))
        {
            QPolygonF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygonF(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygonF,NULL);
        }
    }

    {
        const QPolygon* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPolygon, &a0))
        {
            QPolygon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygon(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygon,NULL);
        }
    }

    {
        const QRegion* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRegion, &a0))
        {
            QRegion*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
        const QPainterPath* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QPainterPath, &a0))
        {
            QPainterPath*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainterPath(sipCpp->map(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_map, doc_QMatrix_map);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_mapRect, "QMatrix.mapRect(QRect) -> QRect\n"
    "QMatrix.mapRect(QRectF) -> QRectF");

extern "C" {static PyObject *meth_QMatrix_mapRect(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_mapRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRect, &a0))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->mapRect(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        const QRectF* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRectF, &a0))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->mapRect(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_mapRect, doc_QMatrix_mapRect);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_mapToPolygon, "QMatrix.mapToPolygon(QRect) -> QPolygon");

extern "C" {static PyObject *meth_QMatrix_mapToPolygon(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_mapToPolygon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect* a0;
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QMatrix, &sipCpp, sipType_QRect, &a0))
        {
            QPolygon*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPolygon(sipCpp->mapToPolygon(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPolygon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_mapToPolygon, doc_QMatrix_mapToPolygon);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_reset, "QMatrix.reset()");

extern "C" {static PyObject *meth_QMatrix_reset(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reset();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_reset, doc_QMatrix_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_translate, "QMatrix.translate(float, float) -> QMatrix");

extern "C" {static PyObject *meth_QMatrix_translate(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->translate(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_translate, doc_QMatrix_translate);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_scale, "QMatrix.scale(float, float) -> QMatrix");

extern "C" {static PyObject *meth_QMatrix_scale(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_scale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->scale(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_scale, doc_QMatrix_scale);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_shear, "QMatrix.shear(float, float) -> QMatrix");

extern "C" {static PyObject *meth_QMatrix_shear(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_shear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        qreal a1;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QMatrix, &sipCpp, &a0, &a1))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->shear(a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_shear, doc_QMatrix_shear);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_rotate, "QMatrix.rotate(float) -> QMatrix");

extern "C" {static PyObject *meth_QMatrix_rotate(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_rotate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QMatrix, &sipCpp, &a0))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->rotate(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_rotate, doc_QMatrix_rotate);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_isInvertible, "QMatrix.isInvertible() -> bool");

extern "C" {static PyObject *meth_QMatrix_isInvertible(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_isInvertible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInvertible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_isInvertible, doc_QMatrix_isInvertible);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_inverted, "QMatrix.inverted() -> (QMatrix, bool)");

extern "C" {static PyObject *meth_QMatrix_inverted(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMatrix_inverted(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        const QMatrix *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix(sipCpp->inverted(&a0));
            Py_END_ALLOW_THREADS

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
            return sipBuildResult(0,"(Rb)",sipResObj,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_inverted, doc_QMatrix_inverted);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_isIdentity, "QMatrix.isIdentity() -> bool");

extern "C" {static PyObject *meth_QMatrix_isIdentity(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_isIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isIdentity();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_isIdentity, doc_QMatrix_isIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_QMatrix_determinant, "QMatrix.determinant() -> float");

extern "C" {static PyObject *meth_QMatrix_determinant(PyObject *, PyObject *);}
static PyObject *meth_QMatrix_determinant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMatrix, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->determinant();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMatrix, sipName_determinant, doc_QMatrix_determinant);

    return NULL;
}


extern "C" {static PyObject *slot_QMatrix___mul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMatrix* a0;
        const QMatrix* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QMatrix, &a0, sipType_QMatrix, &a1))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMatrix___imul__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMatrix)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMatrix::operator*=(*a0);
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


extern "C" {static PyObject *slot_QMatrix___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMatrix,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMatrix___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMatrix___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMatrix));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMatrix* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QMatrix, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QMatrix::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMatrix,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMatrix(void *, const sipTypeDef *);}
static void *cast_QMatrix(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMatrix)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMatrix(void *, int);}
static void release_QMatrix(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMatrix *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QMatrix(void *);}
static PyObject *pickle_QMatrix(void *sipCppV)
{
    QMatrix *sipCpp = reinterpret_cast<QMatrix *>(sipCppV);
    PyObject *sipRes;

#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qmatrix.sip"
    sipRes = Py_BuildValue((char *)"dddddd", sipCpp->m11(), sipCpp->m12(), sipCpp->m21(), sipCpp->m22(), sipCpp->dx(), sipCpp->dy());
#line 980 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQMatrix.cpp"

    return sipRes;
}


extern "C" {static void assign_QMatrix(void *, SIP_SSIZE_T, const void *);}
static void assign_QMatrix(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMatrix *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMatrix *>(sipSrc);
}


extern "C" {static void *array_QMatrix(SIP_SSIZE_T);}
static void *array_QMatrix(SIP_SSIZE_T sipNrElem)
{
    return new QMatrix[sipNrElem];
}


extern "C" {static void *copy_QMatrix(const void *, SIP_SSIZE_T);}
static void *copy_QMatrix(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMatrix(reinterpret_cast<const QMatrix *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMatrix(sipSimpleWrapper *);}
static void dealloc_QMatrix(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMatrix(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMatrix(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMatrix(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMatrix *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;
        qreal a4;
        qreal a5;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddddd", &a0, &a1, &a2, &a3, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix(a0,a1,a2,a3,a4,a5);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMatrix* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMatrix(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMatrix[] = {
    {(void *)slot_QMatrix___mul__, mul_slot},
    {(void *)slot_QMatrix___imul__, imul_slot},
    {(void *)slot_QMatrix___ne__, ne_slot},
    {(void *)slot_QMatrix___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QMatrix[] = {
    {SIP_MLNAME_CAST(sipName_determinant), meth_QMatrix_determinant, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_determinant)},
    {SIP_MLNAME_CAST(sipName_dx), meth_QMatrix_dx, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_dx)},
    {SIP_MLNAME_CAST(sipName_dy), meth_QMatrix_dy, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_dy)},
    {SIP_MLNAME_CAST(sipName_inverted), (PyCFunction)meth_QMatrix_inverted, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMatrix_inverted)},
    {SIP_MLNAME_CAST(sipName_isIdentity), meth_QMatrix_isIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_isIdentity)},
    {SIP_MLNAME_CAST(sipName_isInvertible), meth_QMatrix_isInvertible, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_isInvertible)},
    {SIP_MLNAME_CAST(sipName_m11), meth_QMatrix_m11, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_m11)},
    {SIP_MLNAME_CAST(sipName_m12), meth_QMatrix_m12, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_m12)},
    {SIP_MLNAME_CAST(sipName_m21), meth_QMatrix_m21, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_m21)},
    {SIP_MLNAME_CAST(sipName_m22), meth_QMatrix_m22, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_m22)},
    {SIP_MLNAME_CAST(sipName_map), meth_QMatrix_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_map)},
    {SIP_MLNAME_CAST(sipName_mapRect), meth_QMatrix_mapRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_mapRect)},
    {SIP_MLNAME_CAST(sipName_mapToPolygon), meth_QMatrix_mapToPolygon, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_mapToPolygon)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QMatrix_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_reset)},
    {SIP_MLNAME_CAST(sipName_rotate), meth_QMatrix_rotate, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_rotate)},
    {SIP_MLNAME_CAST(sipName_scale), meth_QMatrix_scale, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_scale)},
    {SIP_MLNAME_CAST(sipName_setMatrix), meth_QMatrix_setMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_setMatrix)},
    {SIP_MLNAME_CAST(sipName_shear), meth_QMatrix_shear, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_shear)},
    {SIP_MLNAME_CAST(sipName_translate), meth_QMatrix_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_QMatrix_translate)}
};

PyDoc_STRVAR(doc_QMatrix, "\1QMatrix()\n"
    "QMatrix(float, float, float, float, float, float)\n"
    "QMatrix(QMatrix)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMatrix = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMatrix,
        {0}
    },
    {
        sipNameNr_QMatrix,
        {0, 0, 1},
        19, methods_QMatrix,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMatrix,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMatrix,
    init_type_QMatrix,
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
    dealloc_QMatrix,
    assign_QMatrix,
    array_QMatrix,
    copy_QMatrix,
    release_QMatrix,
    cast_QMatrix,
    0,
    0,
    0,
    pickle_QMatrix,
    0,
    0
},
    0,
    0,
    0
};
