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

#line 511 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0600QPair24000100QPointF.cpp"

#line 119 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0600QPair24000100QPointF.cpp"


extern "C" {static void assign_QList_0600QPair_2400_0100QPointF(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_2400_0100QPointF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<qreal,QPointF> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<qreal,QPointF> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_2400_0100QPointF(SIP_SSIZE_T);}
static void *array_QList_0600QPair_2400_0100QPointF(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<qreal,QPointF> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_2400_0100QPointF(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_2400_0100QPointF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<qreal,QPointF> >(reinterpret_cast<const QList<QPair<qreal,QPointF> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_2400_0100QPointF(void *, int);}
static void release_QList_0600QPair_2400_0100QPointF(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPair<qreal,QPointF> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0600QPair_2400_0100QPointF(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_2400_0100QPointF(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<qreal,QPointF> > **sipCppPtr = reinterpret_cast<QList<QPair<qreal,QPointF> > **>(sipCppPtrV);

#line 544 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *seq = PySequence_ITEM(sipPy, i);

            if (!seq || !PySequence_Check(seq) || PySequence_Size(seq) != 2)
            {
                Py_XDECREF(seq);
                return 0;
            }

            PyObject *itm1 = PySequence_ITEM(seq, 1);
            bool ok = (itm1 && sipCanConvertToType(itm1, sipType_QPointF, SIP_NOT_NONE));

            Py_XDECREF(itm1);
            Py_DECREF(seq);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QPair<qreal, QPointF> > *ql = new QList<QPair<qreal, QPointF> >;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);

        Py_DECREF(seq);

        if (!itm0)
        {
            Py_DECREF(itm1);

            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        qreal d;
        int state;

        d = PyFloat_AsDouble(itm0);
        QPointF *t = reinterpret_cast<QPointF *>(sipConvertToType(itm1, sipType_QPointF, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm0);
        Py_DECREF(itm1);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QPointF, state);

            delete ql;
            return 0;
        }

        ql->append(QPair<qreal, QPointF>(d, *t));

        sipReleaseType(t, sipType_QPointF, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 157 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0600QPair24000100QPointF.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_2400_0100QPointF(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_2400_0100QPointF(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QPair<qreal,QPointF> > *sipCpp = reinterpret_cast<QList<QPair<qreal,QPointF> > *>(sipCppV);

#line 516 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<qreal, QPointF> &p = sipCpp->at(i);
        QPointF *t = new QPointF(p.second);
        PyObject *pobj;

        if ((pobj = sipBuildResult(NULL, "(dN)", p.first, t, sipType_QPointF, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 192 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQList0600QPair24000100QPointF.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0600QPair_2400_0100QPointF = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_9124,
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
    assign_QList_0600QPair_2400_0100QPointF,
    array_QList_0600QPair_2400_0100QPointF,
    copy_QList_0600QPair_2400_0100QPointF,
    release_QList_0600QPair_2400_0100QPointF,
    convertTo_QList_0600QPair_2400_0100QPointF,
    convertFrom_QList_0600QPair_2400_0100QPointF
};
