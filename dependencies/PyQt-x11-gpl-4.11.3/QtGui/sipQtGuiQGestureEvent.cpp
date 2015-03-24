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

#line 227 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"

#line 120 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"
#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"
#line 119 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 44 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 50 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"
#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQGestureEvent.cpp"


class sipQGestureEvent : public QGestureEvent
{
public:
    sipQGestureEvent(const QList<QGesture*>&);
    sipQGestureEvent(const QGestureEvent&);
    ~sipQGestureEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGestureEvent(const sipQGestureEvent &);
    sipQGestureEvent &operator = (const sipQGestureEvent &);
};

sipQGestureEvent::sipQGestureEvent(const QList<QGesture*>& a0): QGestureEvent(a0), sipPySelf(0)
{
}

sipQGestureEvent::sipQGestureEvent(const QGestureEvent& a0): QGestureEvent(a0), sipPySelf(0)
{
}

sipQGestureEvent::~sipQGestureEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QGestureEvent_gestures, "QGestureEvent.gestures() -> list-of-QGesture");

extern "C" {static PyObject *meth_QGestureEvent_gestures(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_gestures(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            QList<QGesture*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QGesture*>(sipCpp->gestures());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QGesture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_gestures, doc_QGestureEvent_gestures);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_gesture, "QGestureEvent.gesture(Qt.GestureType) -> QGesture");

extern "C" {static PyObject *meth_QGestureEvent_gesture(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_gesture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::GestureType a0;
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_Qt_GestureType, &a0))
        {
            QGesture*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->gesture(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QGesture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_gesture, doc_QGestureEvent_gesture);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_activeGestures, "QGestureEvent.activeGestures() -> list-of-QGesture");

extern "C" {static PyObject *meth_QGestureEvent_activeGestures(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_activeGestures(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            QList<QGesture*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QGesture*>(sipCpp->activeGestures());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QGesture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_activeGestures, doc_QGestureEvent_activeGestures);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_canceledGestures, "QGestureEvent.canceledGestures() -> list-of-QGesture");

extern "C" {static PyObject *meth_QGestureEvent_canceledGestures(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_canceledGestures(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            QList<QGesture*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QGesture*>(sipCpp->canceledGestures());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QGesture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_canceledGestures, doc_QGestureEvent_canceledGestures);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_setAccepted, "QGestureEvent.setAccepted(bool)\n"
    "QGestureEvent.setAccepted(QGesture, bool)\n"
    "QGestureEvent.setAccepted(Qt.GestureType, bool)");

extern "C" {static PyObject *meth_QGestureEvent_setAccepted(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_setAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGestureEvent, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAccepted(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QGesture* a0;
        bool a1;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8b", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_QGesture, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAccepted(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::GestureType a0;
        bool a1;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEb", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_Qt_GestureType, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAccepted(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_setAccepted, doc_QGestureEvent_setAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_isAccepted, "QGestureEvent.isAccepted() -> bool\n"
    "QGestureEvent.isAccepted(QGesture) -> bool\n"
    "QGestureEvent.isAccepted(Qt.GestureType) -> bool");

extern "C" {static PyObject *meth_QGestureEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAccepted();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QGesture* a0;
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_QGesture, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAccepted(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        Qt::GestureType a0;
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_Qt_GestureType, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAccepted(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_isAccepted, doc_QGestureEvent_isAccepted);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_accept, "QGestureEvent.accept()\n"
    "QGestureEvent.accept(QGesture)\n"
    "QGestureEvent.accept(Qt.GestureType)");

extern "C" {static PyObject *meth_QGestureEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->accept();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QGesture* a0;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_QGesture, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->accept(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::GestureType a0;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_Qt_GestureType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->accept(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_accept, doc_QGestureEvent_accept);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_ignore, "QGestureEvent.ignore()\n"
    "QGestureEvent.ignore(QGesture)\n"
    "QGestureEvent.ignore(Qt.GestureType)");

extern "C" {static PyObject *meth_QGestureEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->ignore();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QGesture* a0;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_QGesture, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->ignore(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::GestureType a0;
        QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_Qt_GestureType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->ignore(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_ignore, doc_QGestureEvent_ignore);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_widget, "QGestureEvent.widget() -> QWidget");

extern "C" {static PyObject *meth_QGestureEvent_widget(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGestureEvent, &sipCpp))
        {
            QWidget*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widget();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_widget, doc_QGestureEvent_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureEvent_mapToGraphicsScene, "QGestureEvent.mapToGraphicsScene(QPointF) -> QPointF");

extern "C" {static PyObject *meth_QGestureEvent_mapToGraphicsScene(PyObject *, PyObject *);}
static PyObject *meth_QGestureEvent_mapToGraphicsScene(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QGestureEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGestureEvent, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->mapToGraphicsScene(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureEvent, sipName_mapToGraphicsScene, doc_QGestureEvent_mapToGraphicsScene);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGestureEvent(void *, const sipTypeDef *);}
static void *cast_QGestureEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGestureEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QGestureEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGestureEvent(void *, int);}
static void release_QGestureEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGestureEvent *>(sipCppV);
    else
        delete reinterpret_cast<QGestureEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGestureEvent(sipSimpleWrapper *);}
static void dealloc_QGestureEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGestureEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGestureEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGestureEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGestureEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGestureEvent *sipCpp = 0;

    {
        const QList<QGesture*>* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QList_0101QGesture,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGestureEvent(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QGesture*> *>(a0),sipType_QList_0101QGesture,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QGestureEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGestureEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGestureEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGestureEvent[] = {{52, 0, 1}};


static PyMethodDef methods_QGestureEvent[] = {
    {SIP_MLNAME_CAST(sipName_accept), meth_QGestureEvent_accept, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_accept)},
    {SIP_MLNAME_CAST(sipName_activeGestures), meth_QGestureEvent_activeGestures, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_activeGestures)},
    {SIP_MLNAME_CAST(sipName_canceledGestures), meth_QGestureEvent_canceledGestures, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_canceledGestures)},
    {SIP_MLNAME_CAST(sipName_gesture), meth_QGestureEvent_gesture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_gesture)},
    {SIP_MLNAME_CAST(sipName_gestures), meth_QGestureEvent_gestures, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_gestures)},
    {SIP_MLNAME_CAST(sipName_ignore), meth_QGestureEvent_ignore, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_ignore)},
    {SIP_MLNAME_CAST(sipName_isAccepted), meth_QGestureEvent_isAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_isAccepted)},
    {SIP_MLNAME_CAST(sipName_mapToGraphicsScene), meth_QGestureEvent_mapToGraphicsScene, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_mapToGraphicsScene)},
    {SIP_MLNAME_CAST(sipName_setAccepted), meth_QGestureEvent_setAccepted, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_setAccepted)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QGestureEvent_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureEvent_widget)}
};

PyDoc_STRVAR(doc_QGestureEvent, "\1QGestureEvent(list-of-QGesture)\n"
    "QGestureEvent(QGestureEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGestureEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGestureEvent,
        {0}
    },
    {
        sipNameNr_QGestureEvent,
        {0, 0, 1},
        10, methods_QGestureEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGestureEvent,
    -1,
    -1,
    supers_QGestureEvent,
    0,
    init_type_QGestureEvent,
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
    dealloc_QGestureEvent,
    0,
    0,
    0,
    release_QGestureEvent,
    cast_QGestureEvent,
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
