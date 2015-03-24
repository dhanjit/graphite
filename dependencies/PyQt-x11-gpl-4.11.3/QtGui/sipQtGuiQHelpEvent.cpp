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

#line 812 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQHelpEvent.cpp"

#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQHelpEvent.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQHelpEvent.cpp"


class sipQHelpEvent : public QHelpEvent
{
public:
    sipQHelpEvent(QEvent::Type,const QPoint&,const QPoint&);
    sipQHelpEvent(const QHelpEvent&);
    ~sipQHelpEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHelpEvent(const sipQHelpEvent &);
    sipQHelpEvent &operator = (const sipQHelpEvent &);
};

sipQHelpEvent::sipQHelpEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2): QHelpEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQHelpEvent::sipQHelpEvent(const QHelpEvent& a0): QHelpEvent(a0), sipPySelf(0)
{
}

sipQHelpEvent::~sipQHelpEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QHelpEvent_x, "QHelpEvent.x() -> int");

extern "C" {static PyObject *meth_QHelpEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_x, doc_QHelpEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_y, "QHelpEvent.y() -> int");

extern "C" {static PyObject *meth_QHelpEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_y, doc_QHelpEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalX, "QHelpEvent.globalX() -> int");

extern "C" {static PyObject *meth_QHelpEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalX, doc_QHelpEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalY, "QHelpEvent.globalY() -> int");

extern "C" {static PyObject *meth_QHelpEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalY, doc_QHelpEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_pos, "QHelpEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QHelpEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_pos, doc_QHelpEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalPos, "QHelpEvent.globalPos() -> QPoint");

extern "C" {static PyObject *meth_QHelpEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalPos, doc_QHelpEvent_globalPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHelpEvent(void *, const sipTypeDef *);}
static void *cast_QHelpEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QHelpEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QHelpEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHelpEvent(void *, int);}
static void release_QHelpEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHelpEvent *>(sipCppV);
    else
        delete reinterpret_cast<QHelpEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHelpEvent(sipSimpleWrapper *);}
static void dealloc_QHelpEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHelpEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHelpEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHelpEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHelpEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint* a1;
        const QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHelpEvent(a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHelpEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHelpEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHelpEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHelpEvent[] = {{52, 0, 1}};


static PyMethodDef methods_QHelpEvent[] = {
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QHelpEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QHelpEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QHelpEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QHelpEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_pos)},
    {SIP_MLNAME_CAST(sipName_x), meth_QHelpEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QHelpEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_y)}
};

PyDoc_STRVAR(doc_QHelpEvent, "\1QHelpEvent(QEvent.Type, QPoint, QPoint)\n"
    "QHelpEvent(QHelpEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QHelpEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QHelpEvent,
        {0}
    },
    {
        sipNameNr_QHelpEvent,
        {0, 0, 1},
        6, methods_QHelpEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHelpEvent,
    -1,
    -1,
    supers_QHelpEvent,
    0,
    init_type_QHelpEvent,
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
    dealloc_QHelpEvent,
    0,
    0,
    0,
    release_QHelpEvent,
    cast_QHelpEvent,
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
