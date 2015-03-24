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

#line 250 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"
#line 254 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
#include <QHash>

#if PY_VERSION_HEX >= 0x02040000
#include <datetime.h>
#endif
#line 48 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"


PyDoc_STRVAR(doc_QTime_toPyTime, "QTime.toPyTime() -> datetime.time");

extern "C" {static PyObject *meth_QTime_toPyTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_toPyTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 362 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
        if (!PyDateTimeAPI)
            PyDateTime_IMPORT;
        
        // Convert to a Python time object.
        sipRes = PyTime_FromTime(sipCpp->hour(), sipCpp->minute(), sipCpp->second(), sipCpp->msec() * 1000);
#line 71 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_toPyTime, doc_QTime_toPyTime);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_isNull, "QTime.isNull() -> bool");

extern "C" {static PyObject *meth_QTime_isNull(PyObject *, PyObject *);}
static PyObject *meth_QTime_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_isNull, doc_QTime_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_isValid, "QTime.isValid() -> bool\n"
    "QTime.isValid(int, int, int, int msec=0) -> bool");

extern "C" {static PyObject *meth_QTime_isValid(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_isValid(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "iii|i", &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTime::isValid(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_isValid, doc_QTime_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_hour, "QTime.hour() -> int");

extern "C" {static PyObject *meth_QTime_hour(PyObject *, PyObject *);}
static PyObject *meth_QTime_hour(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hour();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_hour, doc_QTime_hour);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_minute, "QTime.minute() -> int");

extern "C" {static PyObject *meth_QTime_minute(PyObject *, PyObject *);}
static PyObject *meth_QTime_minute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minute();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_minute, doc_QTime_minute);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_second, "QTime.second() -> int");

extern "C" {static PyObject *meth_QTime_second(PyObject *, PyObject *);}
static PyObject *meth_QTime_second(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->second();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_second, doc_QTime_second);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_msec, "QTime.msec() -> int");

extern "C" {static PyObject *meth_QTime_msec(PyObject *, PyObject *);}
static PyObject *meth_QTime_msec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msec();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_msec, doc_QTime_msec);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_toString, "QTime.toString(Qt.DateFormat format=Qt.TextDate) -> QString\n"
    "QTime.toString(QString) -> QString");

extern "C" {static PyObject *meth_QTime_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DateFormat a0 = Qt::TextDate;
        const QTime *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QTime, &sipCpp, sipType_Qt_DateFormat, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QTime *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_toString, doc_QTime_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_setHMS, "QTime.setHMS(int, int, int, int msec=0) -> bool");

extern "C" {static PyObject *meth_QTime_setHMS(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_setHMS(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
        int a3 = 0;
        QTime *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_msec,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Biii|i", &sipSelf, sipType_QTime, &sipCpp, &a0, &a1, &a2, &a3))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setHMS(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_setHMS, doc_QTime_setHMS);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_addSecs, "QTime.addSecs(int) -> QTime");

extern "C" {static PyObject *meth_QTime_addSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
            QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTime(sipCpp->addSecs(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_addSecs, doc_QTime_addSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_secsTo, "QTime.secsTo(QTime) -> int");

extern "C" {static PyObject *meth_QTime_secsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_secsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->secsTo(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_secsTo, doc_QTime_secsTo);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_addMSecs, "QTime.addMSecs(int) -> QTime");

extern "C" {static PyObject *meth_QTime_addMSecs(PyObject *, PyObject *);}
static PyObject *meth_QTime_addMSecs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTime, &sipCpp, &a0))
        {
            QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTime(sipCpp->addMSecs(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_addMSecs, doc_QTime_addMSecs);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_msecsTo, "QTime.msecsTo(QTime) -> int");

extern "C" {static PyObject *meth_QTime_msecsTo(PyObject *, PyObject *);}
static PyObject *meth_QTime_msecsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTime, &sipCpp, sipType_QTime, &a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->msecsTo(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_msecsTo, doc_QTime_msecsTo);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_currentTime, "QTime.currentTime() -> QTime");

extern "C" {static PyObject *meth_QTime_currentTime(PyObject *, PyObject *);}
static PyObject *meth_QTime_currentTime(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTime(QTime::currentTime());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_currentTime, doc_QTime_currentTime);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_fromString, "QTime.fromString(QString, Qt.DateFormat format=Qt.TextDate) -> QTime\n"
    "QTime.fromString(QString, QString) -> QTime");

extern "C" {static PyObject *meth_QTime_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTime_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        Qt::DateFormat a1 = Qt::TextDate;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_DateFormat, &a1))
        {
            QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTime(QTime::fromString(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTime,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QTime*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTime(QTime::fromString(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_fromString, doc_QTime_fromString);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_start, "QTime.start()");

extern "C" {static PyObject *meth_QTime_start(PyObject *, PyObject *);}
static PyObject *meth_QTime_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_start, doc_QTime_start);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_restart, "QTime.restart() -> int");

extern "C" {static PyObject *meth_QTime_restart(PyObject *, PyObject *);}
static PyObject *meth_QTime_restart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->restart();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_restart, doc_QTime_restart);

    return NULL;
}


PyDoc_STRVAR(doc_QTime_elapsed, "QTime.elapsed() -> int");

extern "C" {static PyObject *meth_QTime_elapsed(PyObject *, PyObject *);}
static PyObject *meth_QTime_elapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTime *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTime, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->elapsed();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTime, sipName_elapsed, doc_QTime_elapsed);

    return NULL;
}


extern "C" {static PyObject *slot_QTime___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator>=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTime___gt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator>(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,gt_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTime___le__(PyObject *,PyObject *);}
static PyObject *slot_QTime___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator<=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,le_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTime___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTime___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator<(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTime___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTime___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTime___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTime___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTime, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTime::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QTime,sipSelf,sipArg);
}


extern "C" {static int slot_QTime___bool__(PyObject *);}
static int slot_QTime___bool__(PyObject *sipSelf)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 373 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
        sipRes = !sipCpp->isNull();
#line 903 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static long slot_QTime___hash__(PyObject *);}
static long slot_QTime___hash__(PyObject *sipSelf)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 348 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
        if (sipIsAPIEnabled("QTime", 2, 0))
        {
            sipRes = qHash(sipCpp->toString(Qt::ISODate));
        }
        else
        {
            // Mimic Python's default behavour.
            sipRes = _Py_HashPointer(sipSelf);
        }
#line 936 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTime___repr__(PyObject *);}
static PyObject *slot_QTime___repr__(PyObject *sipSelf)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTime));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 302 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt4.QtCore.QTime()");
        #else
            sipRes = PyString_FromString("PyQt4.QtCore.QTime()");
        #endif
        }
        else
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                qpycore_Unicode_ConcatAndDel(&sipRes,
                        PyUnicode_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    qpycore_Unicode_ConcatAndDel(&sipRes,
                            PyUnicode_FromFormat(", %i", sipCpp->msec()));
            }
        
            qpycore_Unicode_ConcatAndDel(&sipRes, PyUnicode_FromString(")"));
        #else
            sipRes = PyString_FromFormat("PyQt4.QtCore.QTime(%i, %i", sipCpp->hour(),
                    sipCpp->minute());
        
            if (sipCpp->second() || sipCpp->msec())
            {
                PyString_ConcatAndDel(&sipRes,
                        PyString_FromFormat(", %i", sipCpp->second()));
        
                if (sipCpp->msec())
                    PyString_ConcatAndDel(&sipRes,
                            PyString_FromFormat(", %i", sipCpp->msec()));
            }
        
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
#line 1002 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTime(void *, const sipTypeDef *);}
static void *cast_QTime(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTime)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTime(void *, int);}
static void release_QTime(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTime *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QTime(void *);}
static PyObject *pickle_QTime(void *sipCppV)
{
    QTime *sipCpp = reinterpret_cast<QTime *>(sipCppV);
    PyObject *sipRes;

#line 294 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->hour(), sipCpp->minute(), sipCpp->second(), sipCpp->msec());
#line 1043 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"

    return sipRes;
}


extern "C" {static void assign_QTime(void *, SIP_SSIZE_T, const void *);}
static void assign_QTime(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTime *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTime *>(sipSrc);
}


extern "C" {static void *array_QTime(SIP_SSIZE_T);}
static void *array_QTime(SIP_SSIZE_T sipNrElem)
{
    return new QTime[sipNrElem];
}


extern "C" {static void *copy_QTime(const void *, SIP_SSIZE_T);}
static void *copy_QTime(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTime(reinterpret_cast<const QTime *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTime(sipSimpleWrapper *);}
static void dealloc_QTime(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTime(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTime(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTime(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTime *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTime();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_second,
            sipName_msec,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ii|ii", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTime(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTime* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTime, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTime(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTime *>(a0),sipType_QTime,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTime(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTime(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTime **sipCppPtr = reinterpret_cast<QTime **>(sipCppPtrV);

#line 262 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qdatetime.sip"
#if PY_VERSION_HEX >= 0x02040000
    if (!PyDateTimeAPI)
        PyDateTime_IMPORT;
#endif

// Allow a Python time object whenever a QTime is expected.

if (sipIsErr == NULL)
    return (
#if PY_VERSION_HEX >= 0x02040000
            PyTime_Check(sipPy) ||
#endif
            sipCanConvertToType(sipPy, sipType_QTime, SIP_NO_CONVERTORS));

#if PY_VERSION_HEX >= 0x02040000
if (PyTime_Check(sipPy))
{
    *sipCppPtr = new QTime(PyDateTime_TIME_GET_HOUR(sipPy),
                           PyDateTime_TIME_GET_MINUTE(sipPy),
                           PyDateTime_TIME_GET_SECOND(sipPy),
                           PyDateTime_TIME_GET_MICROSECOND(sipPy) / 1000);

    return sipGetState(sipTransferObj);
}
#endif

*sipCppPtr = reinterpret_cast<QTime *>(sipConvertToType(sipPy, sipType_QTime, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 1173 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQTime.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTime[] = {
    {(void *)slot_QTime___ge__, ge_slot},
    {(void *)slot_QTime___gt__, gt_slot},
    {(void *)slot_QTime___le__, le_slot},
    {(void *)slot_QTime___lt__, lt_slot},
    {(void *)slot_QTime___ne__, ne_slot},
    {(void *)slot_QTime___eq__, eq_slot},
    {(void *)slot_QTime___bool__, bool_slot},
    {(void *)slot_QTime___hash__, hash_slot},
    {(void *)slot_QTime___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTime[] = {
    {SIP_MLNAME_CAST(sipName_addMSecs), meth_QTime_addMSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_addMSecs)},
    {SIP_MLNAME_CAST(sipName_addSecs), meth_QTime_addSecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_addSecs)},
    {SIP_MLNAME_CAST(sipName_currentTime), meth_QTime_currentTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_currentTime)},
    {SIP_MLNAME_CAST(sipName_elapsed), meth_QTime_elapsed, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_elapsed)},
    {SIP_MLNAME_CAST(sipName_fromString), (PyCFunction)meth_QTime_fromString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_fromString)},
    {SIP_MLNAME_CAST(sipName_hour), meth_QTime_hour, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_hour)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QTime_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), (PyCFunction)meth_QTime_isValid, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_isValid)},
    {SIP_MLNAME_CAST(sipName_minute), meth_QTime_minute, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_minute)},
    {SIP_MLNAME_CAST(sipName_msec), meth_QTime_msec, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_msec)},
    {SIP_MLNAME_CAST(sipName_msecsTo), meth_QTime_msecsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_msecsTo)},
    {SIP_MLNAME_CAST(sipName_restart), meth_QTime_restart, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_restart)},
    {SIP_MLNAME_CAST(sipName_second), meth_QTime_second, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_second)},
    {SIP_MLNAME_CAST(sipName_secsTo), meth_QTime_secsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_secsTo)},
    {SIP_MLNAME_CAST(sipName_setHMS), (PyCFunction)meth_QTime_setHMS, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_setHMS)},
    {SIP_MLNAME_CAST(sipName_start), meth_QTime_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_start)},
    {SIP_MLNAME_CAST(sipName_toPyTime), meth_QTime_toPyTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTime_toPyTime)},
    {SIP_MLNAME_CAST(sipName_toString), (PyCFunction)meth_QTime_toString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTime_toString)}
};

PyDoc_STRVAR(doc_QTime, "\1QTime()\n"
    "QTime(int, int, int second=0, int msec=0)\n"
    "QTime(QTime)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTime = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTime,
        {0}
    },
    {
        sipNameNr_QTime,
        {0, 0, 1},
        18, methods_QTime,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTime,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTime,
    init_type_QTime,
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
    dealloc_QTime,
    assign_QTime,
    array_QTime,
    copy_QTime,
    release_QTime,
    cast_QTime,
    convertTo_QTime,
    0,
    0,
    pickle_QTime,
    0,
    0
},
    0,
    0,
    0
};
