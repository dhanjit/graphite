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

#line 32 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpair.sip"
#include <qpair.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPair18001800.cpp"



extern "C" {static void assign_QPair_1800_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QPair_1800_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPair<int,int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPair<int,int> *>(sipSrc);
}


extern "C" {static void *array_QPair_1800_1800(SIP_SSIZE_T);}
static void *array_QPair_1800_1800(SIP_SSIZE_T sipNrElem)
{
    return new QPair<int,int>[sipNrElem];
}


extern "C" {static void *copy_QPair_1800_1800(const void *, SIP_SSIZE_T);}
static void *copy_QPair_1800_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPair<int,int>(reinterpret_cast<const QPair<int,int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_1800_1800(void *, int);}
static void release_QPair_1800_1800(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QPair<int,int> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QPair_1800_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_1800_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPair<int,int> **sipCppPtr = reinterpret_cast<QPair<int,int> **>(sipCppPtrV);

#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpair.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PyTuple_Size(sipPy) == 2);

    QPair<int, int> *qp = new QPair<int, int>;
 
    qp->first = SIPLong_AsLong(PyTuple_GET_ITEM(sipPy, 0));
    qp->second = SIPLong_AsLong(PyTuple_GET_ITEM(sipPy, 1));

    *sipCppPtr = qp;
 
    return sipGetState(sipTransferObj);
#line 88 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPair18001800.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_1800_1800(void *, PyObject *);}
static PyObject *convertFrom_QPair_1800_1800(void *sipCppV, PyObject *)
{
   QPair<int,int> *sipCpp = reinterpret_cast<QPair<int,int> *>(sipCppV);

#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpair.sip"
    // Create the tuple.
    return Py_BuildValue((char *)"ii", sipCpp->first, sipCpp->second);
#line 100 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtCore/sipQtCoreQPair18001800.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QPair_1800_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_23553,
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
    assign_QPair_1800_1800,
    array_QPair_1800_1800,
    copy_QPair_1800_1800,
    release_QPair_1800_1800,
    convertTo_QPair_1800_1800,
    convertFrom_QPair_1800_1800
};
