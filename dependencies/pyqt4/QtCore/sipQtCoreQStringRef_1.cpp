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

#line 801 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStringRef_1.cpp"



extern "C" {static void assign_QStringRef_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringRef_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStringRef *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStringRef *>(sipSrc);
}


extern "C" {static void *array_QStringRef_1(SIP_SSIZE_T);}
static void *array_QStringRef_1(SIP_SSIZE_T sipNrElem)
{
    return new QStringRef[sipNrElem];
}


extern "C" {static void *copy_QStringRef_1(const void *, SIP_SSIZE_T);}
static void *copy_QStringRef_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStringRef(reinterpret_cast<const QStringRef *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringRef_1(void *, int);}
static void release_QStringRef_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QStringRef *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QStringRef_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringRef_1(PyObject *,void **,int *,PyObject *)
{
#line 805 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
    // Qt only ever returns a QStringRef so this conversion isn't needed.
    return 0;
#line 76 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStringRef_1.cpp"
}


extern "C" {static PyObject *convertFrom_QStringRef_1(void *, PyObject *);}
static PyObject *convertFrom_QStringRef_1(void *sipCppV, PyObject *)
{
   QStringRef *sipCpp = reinterpret_cast<QStringRef *>(sipCppV);

#line 810 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
    return qpycore_PyObject_FromQString(sipCpp->toString());
#line 87 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQStringRef_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringRef_1 = {
    {
        1,
        &sipTypeDef_QtCore_QStringRef_0.super.ctd_base,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringRef,
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
    assign_QStringRef_1,
    array_QStringRef_1,
    copy_QStringRef_1,
    release_QStringRef_1,
    convertTo_QStringRef_1,
    convertFrom_QStringRef_1
};
