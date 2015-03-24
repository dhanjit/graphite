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

#line 1325 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionRubberBand.cpp"

#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qrubberband.sip"
#include <qrubberband.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionRubberBand.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionRubberBand.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionRubberBand(void *, const sipTypeDef *);}
static void *cast_QStyleOptionRubberBand(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionRubberBand)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionRubberBand *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionRubberBand(void *, int);}
static void release_QStyleOptionRubberBand(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionRubberBand *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionRubberBand(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionRubberBand(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionRubberBand *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionRubberBand *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionRubberBand(SIP_SSIZE_T);}
static void *array_QStyleOptionRubberBand(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionRubberBand[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionRubberBand(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionRubberBand(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionRubberBand(reinterpret_cast<const QStyleOptionRubberBand *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionRubberBand(sipSimpleWrapper *);}
static void dealloc_QStyleOptionRubberBand(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionRubberBand(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionRubberBand(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionRubberBand(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionRubberBand *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionRubberBand();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionRubberBand* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionRubberBand, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionRubberBand(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionRubberBand[] = {{499, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionRubberBand[] = {
    {sipName_Type, static_cast<int>(QStyleOptionRubberBand::Type), 546},
    {sipName_Version, static_cast<int>(QStyleOptionRubberBand::Version), 547},
};


extern "C" {static PyObject *varget_QStyleOptionRubberBand_opaque(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionRubberBand_opaque(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionRubberBand *sipCpp = reinterpret_cast<QStyleOptionRubberBand *>(sipSelf);

    sipVal = sipCpp->opaque;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionRubberBand_opaque(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionRubberBand_opaque(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionRubberBand *sipCpp = reinterpret_cast<QStyleOptionRubberBand *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->opaque = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionRubberBand_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionRubberBand_shape(void *sipSelf, PyObject *, PyObject *)
{
    QRubberBand::Shape sipVal;
    QStyleOptionRubberBand *sipCpp = reinterpret_cast<QStyleOptionRubberBand *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(sipVal, sipType_QRubberBand_Shape);
}


extern "C" {static int varset_QStyleOptionRubberBand_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionRubberBand_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRubberBand::Shape sipVal;
    QStyleOptionRubberBand *sipCpp = reinterpret_cast<QStyleOptionRubberBand *>(sipSelf);

    sipVal = (QRubberBand::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionRubberBand[] = {
    {InstanceVariable, sipName_opaque, (PyMethodDef *)varget_QStyleOptionRubberBand_opaque, (PyMethodDef *)varset_QStyleOptionRubberBand_opaque, NULL, NULL},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionRubberBand_shape, (PyMethodDef *)varset_QStyleOptionRubberBand_shape, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionRubberBand, "\1QStyleOptionRubberBand()\n"
    "QStyleOptionRubberBand(QStyleOptionRubberBand)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionRubberBand = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionRubberBand,
        {0}
    },
    {
        sipNameNr_QStyleOptionRubberBand,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionRubberBand,
        2, variables_QStyleOptionRubberBand,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionRubberBand,
    -1,
    -1,
    supers_QStyleOptionRubberBand,
    0,
    init_type_QStyleOptionRubberBand,
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
    dealloc_QStyleOptionRubberBand,
    assign_QStyleOptionRubberBand,
    array_QStyleOptionRubberBand,
    copy_QStyleOptionRubberBand,
    release_QStyleOptionRubberBand,
    cast_QStyleOptionRubberBand,
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
