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

#line 694 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQList1900.cpp"



extern "C" {static void assign_QList_1900(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<uint> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<uint> *>(sipSrc);
}


extern "C" {static void *array_QList_1900(SIP_SSIZE_T);}
static void *array_QList_1900(SIP_SSIZE_T sipNrElem)
{
    return new QList<uint>[sipNrElem];
}


extern "C" {static void *copy_QList_1900(const void *, SIP_SSIZE_T);}
static void *copy_QList_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<uint>(reinterpret_cast<const QList<uint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_1900(void *, int);}
static void release_QList_1900(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<uint> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<uint> **sipCppPtr = reinterpret_cast<QList<uint> **>(sipCppPtrV);

#line 723 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PySequence_Check(sipPy) && PySequence_Size(sipPy) >= 0);

    QList<unsigned> *ql = new QList<unsigned>;
    SIP_SSIZE_T len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);

        PyErr_Clear();
        unsigned long val = itm ? PyLong_AsUnsignedLong(itm) : (unsigned long)-1;
        
        if (!itm || (val == (unsigned long)-1 && PyErr_Occurred()))
        {
            Py_XDECREF(itm);
            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        ql->append(val);

        Py_DECREF(itm);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 107 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQList1900.cpp"
}


extern "C" {static PyObject *convertFrom_QList_1900(void *, PyObject *);}
static PyObject *convertFrom_QList_1900(void *sipCppV, PyObject *)
{
   QList<uint> *sipCpp = reinterpret_cast<QList<uint> *>(sipCppV);

#line 698 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        if ((pobj = PyLong_FromUnsignedLong(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 139 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQList1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_33267,
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
    assign_QList_1900,
    array_QList_1900,
    copy_QList_1900,
    release_QList_1900,
    convertTo_QList_1900,
    convertFrom_QList_1900
};
