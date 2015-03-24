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

#line 2033 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#include <qset.h>
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"


extern "C" {static void assign_QSet_0100Qt_DayOfWeek(void *, SIP_SSIZE_T, const void *);}
static void assign_QSet_0100Qt_DayOfWeek(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSet<Qt::DayOfWeek> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSet<Qt::DayOfWeek> *>(sipSrc);
}


extern "C" {static void *array_QSet_0100Qt_DayOfWeek(SIP_SSIZE_T);}
static void *array_QSet_0100Qt_DayOfWeek(SIP_SSIZE_T sipNrElem)
{
    return new QSet<Qt::DayOfWeek>[sipNrElem];
}


extern "C" {static void *copy_QSet_0100Qt_DayOfWeek(const void *, SIP_SSIZE_T);}
static void *copy_QSet_0100Qt_DayOfWeek(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSet<Qt::DayOfWeek>(reinterpret_cast<const QSet<Qt::DayOfWeek> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_0100Qt_DayOfWeek(void *, int);}
static void release_QSet_0100Qt_DayOfWeek(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QSet<Qt::DayOfWeek> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_0100Qt_DayOfWeek(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_0100Qt_DayOfWeek(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSet<Qt::DayOfWeek> **sipCppPtr = reinterpret_cast<QSet<Qt::DayOfWeek> **>(sipCppPtrV);

#line 2068 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        while ((itm = PyIter_Next(it)) != NULL)
        {
            int ok = sipCanConvertToEnum(itm, sipType_Qt_DayOfWeek);

            Py_DECREF(itm);

            if (!ok)
            {
                Py_DECREF(it);
                return 0;
            }
        }

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<Qt::DayOfWeek> *qs = new QSet<Qt::DayOfWeek>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        long l = SIPLong_AsLong(itm);

        Py_DECREF(itm);

        qs->insert(static_cast<Qt::DayOfWeek>(l));
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 127 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_0100Qt_DayOfWeek(void *, PyObject *);}
static PyObject *convertFrom_QSet_0100Qt_DayOfWeek(void *sipCppV, PyObject *)
{
   QSet<Qt::DayOfWeek> *sipCpp = reinterpret_cast<QSet<Qt::DayOfWeek> *>(sipCppV);

#line 2038 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
    // Create the set.
    PyObject *s;

    if ((s = PySet_New(NULL)) == NULL)
        return NULL;

    // Set the set elements.
    QSet<Qt::DayOfWeek>::const_iterator it = sipCpp->constBegin();
    QSet<Qt::DayOfWeek>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *el_obj;

        if ((el_obj = sipConvertFromEnum(*it, sipType_Qt_DayOfWeek)) == NULL)
        {
            Py_DECREF(s);

            return NULL;
        }

        PySet_Add(s, el_obj);

        ++it;
    }

    return s;
#line 164 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet0100QtDayOfWeek.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_0100Qt_DayOfWeek = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_11868,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QSet_0100Qt_DayOfWeek,
    array_QSet_0100Qt_DayOfWeek,
    copy_QSet_0100Qt_DayOfWeek,
    release_QSet_0100Qt_DayOfWeek,
    convertTo_QSet_0100Qt_DayOfWeek,
    convertFrom_QSet_0100Qt_DayOfWeek
};
