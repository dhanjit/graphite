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

#include "sipAPIQtDBus.h"

#line 128 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDBus/qpydbusreply.sip"
#include <qdbusreply.h>
#include <qpydbusreply.h>
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBusQDBusReply2600.cpp"



extern "C" {static void assign_QDBusReply_2600(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusReply_2600(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusReply<bool> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusReply<bool> *>(sipSrc);
}


extern "C" {static void *array_QDBusReply_2600(SIP_SSIZE_T);}
static void *array_QDBusReply_2600(SIP_SSIZE_T sipNrElem)
{
    return new QDBusReply<bool>[sipNrElem];
}


extern "C" {static void *copy_QDBusReply_2600(const void *, SIP_SSIZE_T);}
static void *copy_QDBusReply_2600(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusReply<bool>(reinterpret_cast<const QDBusReply<bool> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QDBusReply_2600(void *, int);}
static void release_QDBusReply_2600(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QDBusReply<bool> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QDBusReply_2600(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusReply_2600(PyObject *,void **,int *,PyObject *)
{
#line 160 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDBus/qpydbusreply.sip"
    // We never create a QDBusReply from Python.
    return 0;
#line 77 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBusQDBusReply2600.cpp"
}


extern "C" {static PyObject *convertFrom_QDBusReply_2600(void *, PyObject *);}
static PyObject *convertFrom_QDBusReply_2600(void *sipCppV, PyObject *sipTransferObj)
{
   QDBusReply<bool> *sipCpp = reinterpret_cast<QDBusReply<bool> *>(sipCppV);

#line 133 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDBus/qpydbusreply.sip"
    PyObject *value_obj;

    if (sipCpp->isValid())
    {
        if ((value_obj = PyBool_FromLong(sipCpp->value())) == NULL)
            return NULL;
    }
    else
    {
        value_obj = 0;
    }

    QPyDBusReply *reply = new QPyDBusReply(value_obj,
            sipCpp->isValid(), sipCpp->error());

    PyObject *reply_obj = sipConvertFromNewType(reply, sipType_QPyDBusReply, sipTransferObj);

    if (reply_obj == NULL)
    {
        delete reply;
        return NULL;
    }

    return reply_obj;
#line 111 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBusQDBusReply2600.cpp"
}


sipMappedTypeDef sipTypeDef_QtDBus_QDBusReply_2600 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1736,
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
    assign_QDBusReply_2600,
    array_QDBusReply_2600,
    copy_QDBusReply_2600,
    release_QDBusReply_2600,
    convertTo_QDBusReply_2600,
    convertFrom_QDBusReply_2600
};