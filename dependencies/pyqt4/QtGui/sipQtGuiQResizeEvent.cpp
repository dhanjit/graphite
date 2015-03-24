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

#line 570 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQResizeEvent.cpp"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQResizeEvent.cpp"
#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQResizeEvent.cpp"


class sipQResizeEvent : public QResizeEvent
{
public:
    sipQResizeEvent(const QSize&,const QSize&);
    sipQResizeEvent(const QResizeEvent&);
    ~sipQResizeEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQResizeEvent(const sipQResizeEvent &);
    sipQResizeEvent &operator = (const sipQResizeEvent &);
};

sipQResizeEvent::sipQResizeEvent(const QSize& a0,const QSize& a1): QResizeEvent(a0,a1), sipPySelf(0)
{
}

sipQResizeEvent::sipQResizeEvent(const QResizeEvent& a0): QResizeEvent(a0), sipPySelf(0)
{
}

sipQResizeEvent::~sipQResizeEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QResizeEvent_size, "QResizeEvent.size() -> QSize");

extern "C" {static PyObject *meth_QResizeEvent_size(PyObject *, PyObject *);}
static PyObject *meth_QResizeEvent_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QResizeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResizeEvent, &sipCpp))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResizeEvent, sipName_size, doc_QResizeEvent_size);

    return NULL;
}


PyDoc_STRVAR(doc_QResizeEvent_oldSize, "QResizeEvent.oldSize() -> QSize");

extern "C" {static PyObject *meth_QResizeEvent_oldSize(PyObject *, PyObject *);}
static PyObject *meth_QResizeEvent_oldSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QResizeEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QResizeEvent, &sipCpp))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->oldSize());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QResizeEvent, sipName_oldSize, doc_QResizeEvent_oldSize);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QResizeEvent(void *, const sipTypeDef *);}
static void *cast_QResizeEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QResizeEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QResizeEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QResizeEvent(void *, int);}
static void release_QResizeEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQResizeEvent *>(sipCppV);
    else
        delete reinterpret_cast<QResizeEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QResizeEvent(sipSimpleWrapper *);}
static void dealloc_QResizeEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQResizeEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QResizeEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QResizeEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QResizeEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQResizeEvent *sipCpp = 0;

    {
        const QSize* a0;
        const QSize* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QSize, &a0, sipType_QSize, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQResizeEvent(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QResizeEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QResizeEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQResizeEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QResizeEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QResizeEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldSize), meth_QResizeEvent_oldSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QResizeEvent_oldSize)},
    {SIP_MLNAME_CAST(sipName_size), meth_QResizeEvent_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QResizeEvent_size)}
};

PyDoc_STRVAR(doc_QResizeEvent, "\1QResizeEvent(QSize, QSize)\n"
    "QResizeEvent(QResizeEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QResizeEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QResizeEvent,
        {0}
    },
    {
        sipNameNr_QResizeEvent,
        {0, 0, 1},
        2, methods_QResizeEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QResizeEvent,
    -1,
    -1,
    supers_QResizeEvent,
    0,
    init_type_QResizeEvent,
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
    dealloc_QResizeEvent,
    0,
    0,
    0,
    release_QResizeEvent,
    cast_QResizeEvent,
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
