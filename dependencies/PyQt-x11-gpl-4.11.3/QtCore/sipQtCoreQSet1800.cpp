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

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qset.sip"
#include <qset.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet1800.cpp"



extern "C" {static void assign_QSet_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QSet_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSet<int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSet<int> *>(sipSrc);
}


extern "C" {static void *array_QSet_1800(SIP_SSIZE_T);}
static void *array_QSet_1800(SIP_SSIZE_T sipNrElem)
{
    return new QSet<int>[sipNrElem];
}


extern "C" {static void *copy_QSet_1800(const void *, SIP_SSIZE_T);}
static void *copy_QSet_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSet<int>(reinterpret_cast<const QSet<int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_1800(void *, int);}
static void release_QSet_1800(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QSet<int> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSet<int> **sipCppPtr = reinterpret_cast<QSet<int> **>(sipCppPtrV);

#line 66 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qset.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<int> *qs = new QSet<int>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        qs->insert(SIPLong_AsLong(itm));
        Py_DECREF(itm);
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 107 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet1800.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_1800(void *, PyObject *);}
static PyObject *convertFrom_QSet_1800(void *sipCppV, PyObject *)
{
   QSet<int> *sipCpp = reinterpret_cast<QSet<int> *>(sipCppV);

#line 37 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qset.sip"
    // Create the set.
    PyObject *s;

    if ((s = PySet_New(NULL)) == NULL)
        return NULL;

    // Set the set elements.
    QSet<int>::const_iterator it = sipCpp->constBegin();
    QSet<int>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        PyObject *el_obj;

        if ((el_obj = SIPLong_FromLong(*it)) == NULL)
        {
            Py_DECREF(s);
            return NULL;
        }

        PySet_Add(s, el_obj);

        ++it;
    }

    return s;
#line 143 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQSet1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_40274,
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
    assign_QSet_1800,
    array_QSet_1800,
    copy_QSet_1800,
    release_QSet_1800,
    convertTo_QSet_1800,
    convertFrom_QSet_1800
};
