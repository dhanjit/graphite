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

#line 121 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtWebKit/qwebelement.sip"
#include <qwebelement.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtWebKit/qwebelement.sip"
#include <qwebelement.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"
#line 36 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"


PyDoc_STRVAR(doc_QWebElementCollection_append, "QWebElementCollection.append(QWebElementCollection)");

extern "C" {static PyObject *meth_QWebElementCollection_append(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection* a0;
        QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebElementCollection, &sipCpp, sipType_QWebElementCollection, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_append, doc_QWebElementCollection_append);

    return NULL;
}


PyDoc_STRVAR(doc_QWebElementCollection_count, "QWebElementCollection.count() -> int");

extern "C" {static PyObject *meth_QWebElementCollection_count(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebElementCollection, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_count, doc_QWebElementCollection_count);

    return NULL;
}


PyDoc_STRVAR(doc_QWebElementCollection_at, "QWebElementCollection.at(int) -> QWebElement");

extern "C" {static PyObject *meth_QWebElementCollection_at(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebElementCollection, &sipCpp, &a0))
        {
            QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebElement(sipCpp->at(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_at, doc_QWebElementCollection_at);

    return NULL;
}


PyDoc_STRVAR(doc_QWebElementCollection_first, "QWebElementCollection.first() -> QWebElement");

extern "C" {static PyObject *meth_QWebElementCollection_first(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_first(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebElementCollection, &sipCpp))
        {
            QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebElement(sipCpp->first());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_first, doc_QWebElementCollection_first);

    return NULL;
}


PyDoc_STRVAR(doc_QWebElementCollection_last, "QWebElementCollection.last() -> QWebElement");

extern "C" {static PyObject *meth_QWebElementCollection_last(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_last(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebElementCollection, &sipCpp))
        {
            QWebElement*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebElement(sipCpp->last());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_last, doc_QWebElementCollection_last);

    return NULL;
}


PyDoc_STRVAR(doc_QWebElementCollection_toList, "QWebElementCollection.toList() -> list-of-QWebElement");

extern "C" {static PyObject *meth_QWebElementCollection_toList(PyObject *, PyObject *);}
static PyObject *meth_QWebElementCollection_toList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebElementCollection, &sipCpp))
        {
            QList<QWebElement>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebElement>(sipCpp->toList());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName_toList, doc_QWebElementCollection_toList);

    return NULL;
}


extern "C" {static PyObject *slot_QWebElementCollection___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QWebElementCollection___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebElementCollection *sipCpp = reinterpret_cast<QWebElementCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebElementCollection));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            QWebElement*sipRes = 0;
            int sipIsErr = 0;

#line 136 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtWebKit/qwebelement.sip"
        SIP_SSIZE_T idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = new QWebElement(sipCpp->operator[]((int)idx));
#line 247 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_QWebElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebElementCollection, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static SIP_SSIZE_T slot_QWebElementCollection___len__(PyObject *);}
static SIP_SSIZE_T slot_QWebElementCollection___len__(PyObject *sipSelf)
{
    QWebElementCollection *sipCpp = reinterpret_cast<QWebElementCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebElementCollection));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 278 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtWebKit/sipQtWebKitQWebElementCollection.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebElementCollection___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QWebElementCollection___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebElementCollection *sipCpp = reinterpret_cast<QWebElementCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebElementCollection));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebElementCollection, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QWebElementCollection::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    /* Raise an exception if the argument couldn't be parsed. */
    sipBadOperatorArg(sipSelf,sipArg,iconcat_slot);

    return NULL;
}


extern "C" {static PyObject *slot_QWebElementCollection___add__(PyObject *,PyObject *);}
static PyObject *slot_QWebElementCollection___add__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebElementCollection *sipCpp = reinterpret_cast<QWebElementCollection *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebElementCollection));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebElementCollection* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebElementCollection, &a0))
        {
            QWebElementCollection*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebElementCollection(sipCpp->QWebElementCollection::operator+(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebElementCollection,NULL);
        }
    }

    /* Raise an exception if the argument couldn't be parsed. */
    sipBadOperatorArg(sipSelf,sipArg,concat_slot);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebElementCollection(void *, const sipTypeDef *);}
static void *cast_QWebElementCollection(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebElementCollection)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebElementCollection(void *, int);}
static void release_QWebElementCollection(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebElementCollection *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebElementCollection(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebElementCollection(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebElementCollection *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebElementCollection *>(sipSrc);
}


extern "C" {static void *array_QWebElementCollection(SIP_SSIZE_T);}
static void *array_QWebElementCollection(SIP_SSIZE_T sipNrElem)
{
    return new QWebElementCollection[sipNrElem];
}


extern "C" {static void *copy_QWebElementCollection(const void *, SIP_SSIZE_T);}
static void *copy_QWebElementCollection(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebElementCollection(reinterpret_cast<const QWebElementCollection *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebElementCollection(sipSimpleWrapper *);}
static void dealloc_QWebElementCollection(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebElementCollection(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebElementCollection(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebElementCollection(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebElementCollection *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebElementCollection();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebElement* a0;
        const QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J1", sipType_QWebElement, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebElementCollection(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QWebElementCollection* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebElementCollection, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebElementCollection(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebElementCollection[] = {
    {(void *)slot_QWebElementCollection___getitem__, getitem_slot},
    {(void *)slot_QWebElementCollection___len__, len_slot},
    {(void *)slot_QWebElementCollection___iadd__, iconcat_slot},
    {(void *)slot_QWebElementCollection___add__, concat_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QWebElementCollection[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QWebElementCollection_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_append)},
    {SIP_MLNAME_CAST(sipName_at), meth_QWebElementCollection_at, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_at)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWebElementCollection_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_count)},
    {SIP_MLNAME_CAST(sipName_first), meth_QWebElementCollection_first, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_first)},
    {SIP_MLNAME_CAST(sipName_last), meth_QWebElementCollection_last, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_last)},
    {SIP_MLNAME_CAST(sipName_toList), meth_QWebElementCollection_toList, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebElementCollection_toList)}
};

PyDoc_STRVAR(doc_QWebElementCollection, "\1QWebElementCollection()\n"
    "QWebElementCollection(QWebElement, QString)\n"
    "QWebElementCollection(QWebElementCollection)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebElementCollection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebElementCollection,
        {0}
    },
    {
        sipNameNr_QWebElementCollection,
        {0, 0, 1},
        6, methods_QWebElementCollection,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebElementCollection,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebElementCollection,
    init_type_QWebElementCollection,
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
    dealloc_QWebElementCollection,
    assign_QWebElementCollection,
    array_QWebElementCollection,
    copy_QWebElementCollection,
    release_QWebElementCollection,
    cast_QWebElementCollection,
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
