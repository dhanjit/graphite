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

#line 1135 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"

#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 1135 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 50 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 56 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 59 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 62 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 65 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 68 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQStyleOptionViewItem.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionViewItem(void *, const sipTypeDef *);}
static void *cast_QStyleOptionViewItem(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionViewItem)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionViewItem *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItem(void *, int);}
static void release_QStyleOptionViewItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionViewItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItem(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItem(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItem(reinterpret_cast<const QStyleOptionViewItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItem(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItem();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItem[] = {{499, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItem[] = {
    {sipName_Alternate, static_cast<int>(QStyleOptionViewItem::Alternate), 595},
    {sipName_Beginning, static_cast<int>(QStyleOptionViewItem::Beginning), 597},
    {sipName_Bottom, static_cast<int>(QStyleOptionViewItem::Bottom), 592},
    {sipName_End, static_cast<int>(QStyleOptionViewItem::End), 597},
    {sipName_HasCheckIndicator, static_cast<int>(QStyleOptionViewItem::HasCheckIndicator), 595},
    {sipName_HasDecoration, static_cast<int>(QStyleOptionViewItem::HasDecoration), 595},
    {sipName_HasDisplay, static_cast<int>(QStyleOptionViewItem::HasDisplay), 595},
    {sipName_Invalid, static_cast<int>(QStyleOptionViewItem::Invalid), 597},
    {sipName_Left, static_cast<int>(QStyleOptionViewItem::Left), 592},
    {sipName_Middle, static_cast<int>(QStyleOptionViewItem::Middle), 597},
    {sipName_None, static_cast<int>(QStyleOptionViewItem::None), 595},
    {sipName_OnlyOne, static_cast<int>(QStyleOptionViewItem::OnlyOne), 597},
    {sipName_Right, static_cast<int>(QStyleOptionViewItem::Right), 592},
    {sipName_Top, static_cast<int>(QStyleOptionViewItem::Top), 592},
    {sipName_Type, static_cast<int>(QStyleOptionViewItem::Type), 593},
    {sipName_Version, static_cast<int>(QStyleOptionViewItem::Version), 594},
    {sipName_WrapText, static_cast<int>(QStyleOptionViewItem::WrapText), 595},
};


extern "C" {static PyObject *varget_QStyleOptionViewItem_backgroundBrush(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_backgroundBrush(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QBrush*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->backgroundBrush;

    sipPy = sipConvertFromType(sipVal, sipType_QBrush, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_backgroundBrush(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_backgroundBrush(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QBrush*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QBrush *>(sipForceConvertToType(sipPy,sipType_QBrush,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundBrush = *sipVal;

    sipReleaseType(sipVal, sipType_QBrush, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_checkState(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_checkState(void *sipSelf, PyObject *, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->checkState;

    return sipConvertFromEnum(sipVal, sipType_Qt_CheckState);
}


extern "C" {static int varset_QStyleOptionViewItem_checkState(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_checkState(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (Qt::CheckState)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checkState = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_decorationAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->decorationPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_Position);
}


extern "C" {static int varset_QStyleOptionViewItem_decorationPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::Position sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (QStyleOptionViewItem::Position)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->decorationPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->decorationSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_decorationSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_decorationSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->decorationSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->displayAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_displayAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_displayAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->displayAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionViewItem::ViewItemFeatures*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionViewItem_ViewItemFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::ViewItemFeatures*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionViewItem::ViewItemFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionViewItem_ViewItemFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionViewItem_ViewItemFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QFont*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->font;

    sipPy = sipConvertFromType(sipVal, sipType_QFont, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFont*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFont *>(sipForceConvertToType(sipPy,sipType_QFont,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_index(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_index(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QModelIndex*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->index;

    sipPy = sipConvertFromType(sipVal, sipType_QModelIndex, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_index(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_index(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QModelIndex*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QModelIndex *>(sipForceConvertToType(sipPy,sipType_QModelIndex,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->index = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_locale(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_locale(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QLocale*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->locale;

    sipPy = sipConvertFromType(sipVal, sipType_QLocale, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItem_locale(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_locale(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QLocale*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QLocale *>(sipForceConvertToType(sipPy,sipType_QLocale,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->locale = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->showDecorationSelected;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionViewItem_showDecorationSelected(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_showDecorationSelected(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->showDecorationSelected = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->textElideMode;

    return sipConvertFromEnum(sipVal, sipType_Qt_TextElideMode);
}


extern "C" {static int varset_QStyleOptionViewItem_textElideMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_textElideMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::TextElideMode sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (Qt::TextElideMode)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->textElideMode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_viewItemPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_viewItemPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionViewItem::ViewItemPosition sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->viewItemPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItem_ViewItemPosition);
}


extern "C" {static int varset_QStyleOptionViewItem_viewItemPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_viewItemPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItem::ViewItemPosition sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = (QStyleOptionViewItem::ViewItemPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->viewItemPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItem_widget(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItem_widget(void *sipSelf, PyObject *, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    sipVal = sipCpp->widget;

    return sipConvertFromType(const_cast<QWidget *>(sipVal), sipType_QWidget, NULL);
}


extern "C" {static int varset_QStyleOptionViewItem_widget(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItem_widget(void *sipSelf, PyObject *sipPy, PyObject *)
{
    const QWidget*sipVal;
    QStyleOptionViewItem *sipCpp = reinterpret_cast<QStyleOptionViewItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QWidget *>(sipForceConvertToType(sipPy,sipType_QWidget,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->widget = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItem[] = {
    {InstanceVariable, sipName_backgroundBrush, (PyMethodDef *)varget_QStyleOptionViewItem_backgroundBrush, (PyMethodDef *)varset_QStyleOptionViewItem_backgroundBrush, NULL, NULL},
    {InstanceVariable, sipName_checkState, (PyMethodDef *)varget_QStyleOptionViewItem_checkState, (PyMethodDef *)varset_QStyleOptionViewItem_checkState, NULL, NULL},
    {InstanceVariable, sipName_decorationAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_decorationAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_decorationAlignment, NULL, NULL},
    {InstanceVariable, sipName_decorationPosition, (PyMethodDef *)varget_QStyleOptionViewItem_decorationPosition, (PyMethodDef *)varset_QStyleOptionViewItem_decorationPosition, NULL, NULL},
    {InstanceVariable, sipName_decorationSize, (PyMethodDef *)varget_QStyleOptionViewItem_decorationSize, (PyMethodDef *)varset_QStyleOptionViewItem_decorationSize, NULL, NULL},
    {InstanceVariable, sipName_displayAlignment, (PyMethodDef *)varget_QStyleOptionViewItem_displayAlignment, (PyMethodDef *)varset_QStyleOptionViewItem_displayAlignment, NULL, NULL},
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionViewItem_features, (PyMethodDef *)varset_QStyleOptionViewItem_features, NULL, NULL},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionViewItem_font, (PyMethodDef *)varset_QStyleOptionViewItem_font, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionViewItem_icon, (PyMethodDef *)varset_QStyleOptionViewItem_icon, NULL, NULL},
    {InstanceVariable, sipName_index, (PyMethodDef *)varget_QStyleOptionViewItem_index, (PyMethodDef *)varset_QStyleOptionViewItem_index, NULL, NULL},
    {InstanceVariable, sipName_locale, (PyMethodDef *)varget_QStyleOptionViewItem_locale, (PyMethodDef *)varset_QStyleOptionViewItem_locale, NULL, NULL},
    {InstanceVariable, sipName_showDecorationSelected, (PyMethodDef *)varget_QStyleOptionViewItem_showDecorationSelected, (PyMethodDef *)varset_QStyleOptionViewItem_showDecorationSelected, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionViewItem_text, (PyMethodDef *)varset_QStyleOptionViewItem_text, NULL, NULL},
    {InstanceVariable, sipName_textElideMode, (PyMethodDef *)varget_QStyleOptionViewItem_textElideMode, (PyMethodDef *)varset_QStyleOptionViewItem_textElideMode, NULL, NULL},
    {InstanceVariable, sipName_viewItemPosition, (PyMethodDef *)varget_QStyleOptionViewItem_viewItemPosition, (PyMethodDef *)varset_QStyleOptionViewItem_viewItemPosition, NULL, NULL},
    {InstanceVariable, sipName_widget, (PyMethodDef *)varget_QStyleOptionViewItem_widget, (PyMethodDef *)varset_QStyleOptionViewItem_widget, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionViewItem, "\1QStyleOptionViewItem()\n"
    "QStyleOptionViewItem(QStyleOptionViewItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItem,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItem,
        {0, 0, 1},
        0, 0,
        17, enummembers_QStyleOptionViewItem,
        16, variables_QStyleOptionViewItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItem,
    -1,
    -1,
    supers_QStyleOptionViewItem,
    0,
    init_type_QStyleOptionViewItem,
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
    dealloc_QStyleOptionViewItem,
    assign_QStyleOptionViewItem,
    array_QStyleOptionViewItem,
    copy_QStyleOptionViewItem,
    release_QStyleOptionViewItem,
    cast_QStyleOptionViewItem,
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
