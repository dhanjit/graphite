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

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"

#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 40 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_object, "QStateMachine.WrappedEvent.object() -> QObject");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->object();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_object, doc_QStateMachine_WrappedEvent_object);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_event, "QStateMachine.WrappedEvent.event() -> QEvent");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
            QEvent*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->event();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QEvent,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_event, doc_QStateMachine_WrappedEvent_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStateMachine_WrappedEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_WrappedEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStateMachine_WrappedEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QStateMachine::WrappedEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_WrappedEvent(void *, int);}
static void release_QStateMachine_WrappedEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStateMachine::WrappedEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStateMachine_WrappedEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_WrappedEvent[] = {{52, 255, 1}};


static PyMethodDef methods_QStateMachine_WrappedEvent[] = {
    {SIP_MLNAME_CAST(sipName_event), meth_QStateMachine_WrappedEvent_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_event)},
    {SIP_MLNAME_CAST(sipName_object), meth_QStateMachine_WrappedEvent_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_object)}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QStateMachine_WrappedEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__WrappedEvent,
        {0}
    },
    {
        sipNameNr_WrappedEvent,
        {189, 255, 0},
        2, methods_QStateMachine_WrappedEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStateMachine_WrappedEvent,
    0,
    0,
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
    dealloc_QStateMachine_WrappedEvent,
    0,
    0,
    0,
    release_QStateMachine_WrappedEvent,
    cast_QStateMachine_WrappedEvent,
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
