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

#line 525 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionTabWidgetFrame.cpp"

#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionTabWidgetFrame.cpp"
#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtabbar.sip"
#include <qtabbar.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionTabWidgetFrame.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionTabWidgetFrame.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTabWidgetFrame(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabWidgetFrame(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTabWidgetFrame)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionTabWidgetFrame *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabWidgetFrame(void *, int);}
static void release_QStyleOptionTabWidgetFrame(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabWidgetFrame(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabWidgetFrame(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabWidgetFrame *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabWidgetFrame(SIP_SSIZE_T);}
static void *array_QStyleOptionTabWidgetFrame(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabWidgetFrame[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabWidgetFrame(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabWidgetFrame(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabWidgetFrame(reinterpret_cast<const QStyleOptionTabWidgetFrame *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabWidgetFrame(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabWidgetFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabWidgetFrame(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTabWidgetFrame(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTabWidgetFrame(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabWidgetFrame *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabWidgetFrame();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabWidgetFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabWidgetFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabWidgetFrame(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabWidgetFrame[] = {{498, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabWidgetFrame[] = {
    {sipName_Type, static_cast<int>(QStyleOptionTabWidgetFrame::Type), 582},
    {sipName_Version, static_cast<int>(QStyleOptionTabWidgetFrame::Version), 583},
};


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = &sipCpp->leftCornerWidgetSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->leftCornerWidgetSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = &sipCpp->rightCornerWidgetSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rightCornerWidgetSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_shape(void *sipSelf, PyObject *, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(sipVal, sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = (QTabBar::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTabWidgetFrame_tabBarSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    sipVal = &sipCpp->tabBarSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTabWidgetFrame_tabBarSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabWidgetFrame_tabBarSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTabWidgetFrame *sipCpp = reinterpret_cast<QStyleOptionTabWidgetFrame *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->tabBarSize = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabWidgetFrame[] = {
    {InstanceVariable, sipName_leftCornerWidgetSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_leftCornerWidgetSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_leftCornerWidgetSize, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_lineWidth, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_midLineWidth, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_midLineWidth, NULL, NULL},
    {InstanceVariable, sipName_rightCornerWidgetSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_rightCornerWidgetSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_rightCornerWidgetSize, NULL, NULL},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_shape, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_shape, NULL, NULL},
    {InstanceVariable, sipName_tabBarSize, (PyMethodDef *)varget_QStyleOptionTabWidgetFrame_tabBarSize, (PyMethodDef *)varset_QStyleOptionTabWidgetFrame_tabBarSize, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTabWidgetFrame, "\1QStyleOptionTabWidgetFrame()\n"
    "QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabWidgetFrame = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabWidgetFrame,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabWidgetFrame,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionTabWidgetFrame,
        6, variables_QStyleOptionTabWidgetFrame,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTabWidgetFrame,
    -1,
    -1,
    supers_QStyleOptionTabWidgetFrame,
    0,
    init_type_QStyleOptionTabWidgetFrame,
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
    dealloc_QStyleOptionTabWidgetFrame,
    assign_QStyleOptionTabWidgetFrame,
    array_QStyleOptionTabWidgetFrame,
    copy_QStyleOptionTabWidgetFrame,
    release_QStyleOptionTabWidgetFrame,
    cast_QStyleOptionTabWidgetFrame,
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
