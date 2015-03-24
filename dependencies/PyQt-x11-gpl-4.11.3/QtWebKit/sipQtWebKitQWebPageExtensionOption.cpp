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

#include "sipAPIQtWebKit.h"

#line 39 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 240 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebPageExtensionOption.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ExtensionOption(void *, const sipTypeDef *);}
static void *cast_QWebPage_ExtensionOption(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPage_ExtensionOption)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ExtensionOption(void *, int);}
static void release_QWebPage_ExtensionOption(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPage::ExtensionOption *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_ExtensionOption(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ExtensionOption(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ExtensionOption *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ExtensionOption *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ExtensionOption(SIP_SSIZE_T);}
static void *array_QWebPage_ExtensionOption(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ExtensionOption[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ExtensionOption(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ExtensionOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ExtensionOption(reinterpret_cast<const QWebPage::ExtensionOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ExtensionOption(sipSimpleWrapper *);}
static void dealloc_QWebPage_ExtensionOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ExtensionOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ExtensionOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ExtensionOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ExtensionOption *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ExtensionOption();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPage::ExtensionOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ExtensionOption, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ExtensionOption(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPage_ExtensionOption, "\1QWebPage.ExtensionOption()\n"
    "QWebPage.ExtensionOption(QWebPage.ExtensionOption)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPage_ExtensionOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ExtensionOption,
        {0}
    },
    {
        sipNameNr_ExtensionOption,
        {20, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ExtensionOption,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPage_ExtensionOption,
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
    dealloc_QWebPage_ExtensionOption,
    assign_QWebPage_ExtensionOption,
    array_QWebPage_ExtensionOption,
    copy_QWebPage_ExtensionOption,
    release_QWebPage_ExtensionOption,
    cast_QWebPage_ExtensionOption,
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
