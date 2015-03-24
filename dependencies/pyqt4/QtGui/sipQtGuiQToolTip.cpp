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

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qtooltip.sip"
#include <qtooltip.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"

#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 47 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 50 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"
#line 35 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 53 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQToolTip.cpp"


PyDoc_STRVAR(doc_QToolTip_showText, "QToolTip.showText(QPoint, QString, QWidget widget=None)\n"
    "QToolTip.showText(QPoint, QString, QWidget, QRect)");

extern "C" {static PyObject *meth_QToolTip_showText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QToolTip_showText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        const QString* a1;
        int a1State = 0;
        QWidget* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_widget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J9J1|J8", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            QToolTip::showText(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QPoint* a0;
        const QString* a1;
        int a1State = 0;
        QWidget* a2;
        const QRect* a3;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "J9J1J8J9", sipType_QPoint, &a0, sipType_QString,&a1, &a1State, sipType_QWidget, &a2, sipType_QRect, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            QToolTip::showText(*a0,*a1,a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_showText, doc_QToolTip_showText);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_palette, "QToolTip.palette() -> QPalette");

extern "C" {static PyObject *meth_QToolTip_palette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_palette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QPalette*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPalette(QToolTip::palette());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPalette,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_palette, doc_QToolTip_palette);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_hideText, "QToolTip.hideText()");

extern "C" {static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_hideText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QToolTip::hideText();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_hideText, doc_QToolTip_hideText);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_setPalette, "QToolTip.setPalette(QPalette)");

extern "C" {static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setPalette(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPalette* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPalette, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QToolTip::setPalette(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setPalette, doc_QToolTip_setPalette);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_font, "QToolTip.font() -> QFont");

extern "C" {static PyObject *meth_QToolTip_font(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_font(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(QToolTip::font());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_font, doc_QToolTip_font);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_setFont, "QToolTip.setFont(QFont)");

extern "C" {static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_setFont(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFont* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QToolTip::setFont(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_setFont, doc_QToolTip_setFont);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_isVisible, "QToolTip.isVisible() -> bool");

extern "C" {static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_isVisible(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QToolTip::isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_isVisible, doc_QToolTip_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QToolTip_text, "QToolTip.text() -> QString");

extern "C" {static PyObject *meth_QToolTip_text(PyObject *, PyObject *);}
static PyObject *meth_QToolTip_text(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QToolTip::text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QToolTip, sipName_text, doc_QToolTip_text);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QToolTip(void *, const sipTypeDef *);}
static void *cast_QToolTip(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QToolTip)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QToolTip(void *, int);}
static void release_QToolTip(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QToolTip *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QToolTip(sipSimpleWrapper *);}
static void dealloc_QToolTip(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QToolTip(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QToolTip[] = {
    {SIP_MLNAME_CAST(sipName_font), meth_QToolTip_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_font)},
    {SIP_MLNAME_CAST(sipName_hideText), meth_QToolTip_hideText, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_hideText)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QToolTip_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_isVisible)},
    {SIP_MLNAME_CAST(sipName_palette), meth_QToolTip_palette, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_palette)},
    {SIP_MLNAME_CAST(sipName_setFont), meth_QToolTip_setFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_setFont)},
    {SIP_MLNAME_CAST(sipName_setPalette), meth_QToolTip_setPalette, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_setPalette)},
    {SIP_MLNAME_CAST(sipName_showText), (PyCFunction)meth_QToolTip_showText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QToolTip_showText)},
    {SIP_MLNAME_CAST(sipName_text), meth_QToolTip_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QToolTip_text)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QToolTip = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QToolTip,
        {0}
    },
    {
        sipNameNr_QToolTip,
        {0, 0, 1},
        8, methods_QToolTip,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QToolTip,
    0,
    0,
    0,
    release_QToolTip,
    cast_QToolTip,
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
