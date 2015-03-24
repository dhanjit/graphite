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

#line 81 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qprinterinfo.sip"
#include <qlist.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0100QPagedPaintDevicePageSize.cpp"

#line 33 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0100QPagedPaintDevicePageSize.cpp"


extern "C" {static void assign_QList_0100QPagedPaintDevice_PageSize(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QPagedPaintDevice_PageSize(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPagedPaintDevice::PageSize> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QPagedPaintDevice_PageSize(SIP_SSIZE_T);}
static void *array_QList_0100QPagedPaintDevice_PageSize(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPagedPaintDevice::PageSize>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QPagedPaintDevice_PageSize(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPagedPaintDevice::PageSize>(reinterpret_cast<const QList<QPagedPaintDevice::PageSize> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QPagedPaintDevice_PageSize(void *, int);}
static void release_QList_0100QPagedPaintDevice_PageSize(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QPagedPaintDevice_PageSize(PyObject *sipPy,void **,int *sipIsErr,PyObject *)
{
#line 109 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qprinterinfo.sip"
    if (sipIsErr == NULL)
    {
        // We don't support passing the type as an argument as it isn't
        // currently needed.
        PyErr_SetString(PyExc_NotImplementedError, "converting to QList<QPagedPaintDevice::PageSize> is unsupported");

        return 0;
    }

    // Keep the compiler quiet.
    sipPy = NULL;
    return 0;
#line 89 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0100QPagedPaintDevicePageSize.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QPagedPaintDevice_PageSize(void *sipCppV, PyObject *)
{
   QList<QPagedPaintDevice::PageSize> *sipCpp = reinterpret_cast<QList<QPagedPaintDevice::PageSize> *>(sipCppV);

#line 85 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qprinterinfo.sip"
    // Create the list.
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *obj = sipConvertFromEnum(sipCpp->at(i), sipType_QPagedPaintDevice_PageSize);

        if (!obj)
        {
            Py_DECREF(l);
            return 0;
        }

        PyList_SET_ITEM(l, i, obj);
    }

    return l;
#line 120 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0100QPagedPaintDevicePageSize.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0100QPagedPaintDevice_PageSize = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4222,
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
    assign_QList_0100QPagedPaintDevice_PageSize,
    array_QList_0100QPagedPaintDevice_PageSize,
    copy_QList_0100QPagedPaintDevice_PageSize,
    release_QList_0100QPagedPaintDevice_PageSize,
    convertTo_QList_0100QPagedPaintDevice_PageSize,
    convertFrom_QList_0100QPagedPaintDevice_PageSize
};
