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

#line 150 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextLine.cpp"

#line 119 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextLine.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextLine.cpp"
#line 53 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 80 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 46 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextLine.cpp"
#line 168 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 49 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQTextLine.cpp"


PyDoc_STRVAR(doc_QTextLine_isValid, "QTextLine.isValid() -> bool");

extern "C" {static PyObject *meth_QTextLine_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_isValid, doc_QTextLine_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_rect, "QTextLine.rect() -> QRectF");

extern "C" {static PyObject *meth_QTextLine_rect(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->rect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_rect, doc_QTextLine_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_x, "QTextLine.x() -> float");

extern "C" {static PyObject *meth_QTextLine_x(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_x, doc_QTextLine_x);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_y, "QTextLine.y() -> float");

extern "C" {static PyObject *meth_QTextLine_y(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_y, doc_QTextLine_y);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_width, "QTextLine.width() -> float");

extern "C" {static PyObject *meth_QTextLine_width(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_width, doc_QTextLine_width);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_ascent, "QTextLine.ascent() -> float");

extern "C" {static PyObject *meth_QTextLine_ascent(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ascent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_ascent, doc_QTextLine_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_descent, "QTextLine.descent() -> float");

extern "C" {static PyObject *meth_QTextLine_descent(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->descent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_descent, doc_QTextLine_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_height, "QTextLine.height() -> float");

extern "C" {static PyObject *meth_QTextLine_height(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_height, doc_QTextLine_height);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_naturalTextWidth, "QTextLine.naturalTextWidth() -> float");

extern "C" {static PyObject *meth_QTextLine_naturalTextWidth(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_naturalTextWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->naturalTextWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_naturalTextWidth, doc_QTextLine_naturalTextWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_naturalTextRect, "QTextLine.naturalTextRect() -> QRectF");

extern "C" {static PyObject *meth_QTextLine_naturalTextRect(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_naturalTextRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->naturalTextRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_naturalTextRect, doc_QTextLine_naturalTextRect);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_cursorToX, "QTextLine.cursorToX(int, QTextLine.Edge edge=QTextLine.Leading) -> (float, int)");

extern "C" {static PyObject *meth_QTextLine_cursorToX(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextLine_cursorToX(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextLine::Edge a1 = QTextLine::Leading;
        const QTextLine *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_edge,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|E", &sipSelf, sipType_QTextLine, &sipCpp, &a0, sipType_QTextLine_Edge, &a1))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->cursorToX(&a0,a1);
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(di)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_cursorToX, doc_QTextLine_cursorToX);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_xToCursor, "QTextLine.xToCursor(float, QTextLine.CursorPosition edge=QTextLine.CursorBetweenCharacters) -> int");

extern "C" {static PyObject *meth_QTextLine_xToCursor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextLine_xToCursor(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextLine::CursorPosition a1 = QTextLine::CursorBetweenCharacters;
        const QTextLine *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_edge,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bd|E", &sipSelf, sipType_QTextLine, &sipCpp, &a0, sipType_QTextLine_CursorPosition, &a1))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xToCursor(a0,a1);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_xToCursor, doc_QTextLine_xToCursor);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_setLineWidth, "QTextLine.setLineWidth(float)");

extern "C" {static PyObject *meth_QTextLine_setLineWidth(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_setLineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextLine, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLineWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_setLineWidth, doc_QTextLine_setLineWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_setNumColumns, "QTextLine.setNumColumns(int)\n"
    "QTextLine.setNumColumns(int, float)");

extern "C" {static PyObject *meth_QTextLine_setNumColumns(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_setNumColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextLine, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNumColumns(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        qreal a1;
        QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bid", &sipSelf, sipType_QTextLine, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNumColumns(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_setNumColumns, doc_QTextLine_setNumColumns);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_setPosition, "QTextLine.setPosition(QPointF)");

extern "C" {static PyObject *meth_QTextLine_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextLine, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_setPosition, doc_QTextLine_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_textStart, "QTextLine.textStart() -> int");

extern "C" {static PyObject *meth_QTextLine_textStart(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_textStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textStart();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_textStart, doc_QTextLine_textStart);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_textLength, "QTextLine.textLength() -> int");

extern "C" {static PyObject *meth_QTextLine_textLength(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_textLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textLength();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_textLength, doc_QTextLine_textLength);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_lineNumber, "QTextLine.lineNumber() -> int");

extern "C" {static PyObject *meth_QTextLine_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_lineNumber, doc_QTextLine_lineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_draw, "QTextLine.draw(QPainter, QPointF, QTextLayout.FormatRange selection=None)");

extern "C" {static PyObject *meth_QTextLine_draw(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextLine_draw(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QPainter* a0;
        const QPointF* a1;
        int a1State = 0;
        const QTextLayout::FormatRange* a2 = 0;
        const QTextLine *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_selection,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8J1|J8", &sipSelf, sipType_QTextLine, &sipCpp, sipType_QPainter, &a0, sipType_QPointF, &a1, &a1State, sipType_QTextLayout_FormatRange, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->draw(a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_draw, doc_QTextLine_draw);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_position, "QTextLine.position() -> QPointF");

extern "C" {static PyObject *meth_QTextLine_position(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->position());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_position, doc_QTextLine_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_leading, "QTextLine.leading() -> float");

extern "C" {static PyObject *meth_QTextLine_leading(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_leading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leading();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_leading, doc_QTextLine_leading);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_setLeadingIncluded, "QTextLine.setLeadingIncluded(bool)");

extern "C" {static PyObject *meth_QTextLine_setLeadingIncluded(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_setLeadingIncluded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextLine, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLeadingIncluded(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_setLeadingIncluded, doc_QTextLine_setLeadingIncluded);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_leadingIncluded, "QTextLine.leadingIncluded() -> bool");

extern "C" {static PyObject *meth_QTextLine_leadingIncluded(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_leadingIncluded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leadingIncluded();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_leadingIncluded, doc_QTextLine_leadingIncluded);

    return NULL;
}


PyDoc_STRVAR(doc_QTextLine_horizontalAdvance, "QTextLine.horizontalAdvance() -> float");

extern "C" {static PyObject *meth_QTextLine_horizontalAdvance(PyObject *, PyObject *);}
static PyObject *meth_QTextLine_horizontalAdvance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextLine, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->horizontalAdvance();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextLine, sipName_horizontalAdvance, doc_QTextLine_horizontalAdvance);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextLine(void *, const sipTypeDef *);}
static void *cast_QTextLine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextLine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextLine(void *, int);}
static void release_QTextLine(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextLine *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextLine(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextLine(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextLine *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextLine *>(sipSrc);
}


extern "C" {static void *array_QTextLine(SIP_SSIZE_T);}
static void *array_QTextLine(SIP_SSIZE_T sipNrElem)
{
    return new QTextLine[sipNrElem];
}


extern "C" {static void *copy_QTextLine(const void *, SIP_SSIZE_T);}
static void *copy_QTextLine(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextLine(reinterpret_cast<const QTextLine *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextLine(sipSimpleWrapper *);}
static void dealloc_QTextLine(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextLine(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextLine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextLine(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextLine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextLine();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextLine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextLine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextLine(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextLine[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QTextLine_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_ascent)},
    {SIP_MLNAME_CAST(sipName_cursorToX), (PyCFunction)meth_QTextLine_cursorToX, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextLine_cursorToX)},
    {SIP_MLNAME_CAST(sipName_descent), meth_QTextLine_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_descent)},
    {SIP_MLNAME_CAST(sipName_draw), (PyCFunction)meth_QTextLine_draw, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextLine_draw)},
    {SIP_MLNAME_CAST(sipName_height), meth_QTextLine_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_height)},
    {SIP_MLNAME_CAST(sipName_horizontalAdvance), meth_QTextLine_horizontalAdvance, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_horizontalAdvance)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextLine_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_isValid)},
    {SIP_MLNAME_CAST(sipName_leading), meth_QTextLine_leading, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_leading)},
    {SIP_MLNAME_CAST(sipName_leadingIncluded), meth_QTextLine_leadingIncluded, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_leadingIncluded)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QTextLine_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_lineNumber)},
    {SIP_MLNAME_CAST(sipName_naturalTextRect), meth_QTextLine_naturalTextRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_naturalTextRect)},
    {SIP_MLNAME_CAST(sipName_naturalTextWidth), meth_QTextLine_naturalTextWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_naturalTextWidth)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextLine_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_position)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QTextLine_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_rect)},
    {SIP_MLNAME_CAST(sipName_setLeadingIncluded), meth_QTextLine_setLeadingIncluded, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_setLeadingIncluded)},
    {SIP_MLNAME_CAST(sipName_setLineWidth), meth_QTextLine_setLineWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_setLineWidth)},
    {SIP_MLNAME_CAST(sipName_setNumColumns), meth_QTextLine_setNumColumns, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_setNumColumns)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTextLine_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_setPosition)},
    {SIP_MLNAME_CAST(sipName_textLength), meth_QTextLine_textLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_textLength)},
    {SIP_MLNAME_CAST(sipName_textStart), meth_QTextLine_textStart, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_textStart)},
    {SIP_MLNAME_CAST(sipName_width), meth_QTextLine_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_width)},
    {SIP_MLNAME_CAST(sipName_x), meth_QTextLine_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_x)},
    {SIP_MLNAME_CAST(sipName_xToCursor), (PyCFunction)meth_QTextLine_xToCursor, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextLine_xToCursor)},
    {SIP_MLNAME_CAST(sipName_y), meth_QTextLine_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextLine_y)}
};

static sipEnumMemberDef enummembers_QTextLine[] = {
    {sipName_CursorBetweenCharacters, static_cast<int>(QTextLine::CursorBetweenCharacters), 695},
    {sipName_CursorOnCharacter, static_cast<int>(QTextLine::CursorOnCharacter), 695},
    {sipName_Leading, static_cast<int>(QTextLine::Leading), 696},
    {sipName_Trailing, static_cast<int>(QTextLine::Trailing), 696},
};

PyDoc_STRVAR(doc_QTextLine, "\1QTextLine()\n"
    "QTextLine(QTextLine)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextLine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextLine,
        {0}
    },
    {
        sipNameNr_QTextLine,
        {0, 0, 1},
        24, methods_QTextLine,
        4, enummembers_QTextLine,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextLine,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextLine,
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
    dealloc_QTextLine,
    assign_QTextLine,
    array_QTextLine,
    copy_QTextLine,
    release_QTextLine,
    cast_QTextLine,
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
