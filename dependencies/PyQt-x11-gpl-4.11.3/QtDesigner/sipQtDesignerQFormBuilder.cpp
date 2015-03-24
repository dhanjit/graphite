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

#include "sipAPIQtDesigner.h"

#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDesigner/formbuilder.sip"
#include <formbuilder.h>
#line 34 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"

#line 120 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 31 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 41 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 44 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 36 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 50 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 53 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"
#line 35 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 56 "/home/saiaravindbv/repos/graphite/dependencies/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQFormBuilder.cpp"


class sipQFormBuilder : public QFormBuilder
{
public:
    sipQFormBuilder();
    virtual ~sipQFormBuilder();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void save(QIODevice*,QWidget*);
    QWidget* load(QIODevice*,QWidget*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFormBuilder(const sipQFormBuilder &);
    sipQFormBuilder &operator = (const sipQFormBuilder &);

    char sipPyMethods[2];
};

sipQFormBuilder::sipQFormBuilder(): QFormBuilder(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFormBuilder::~sipQFormBuilder()
{
    sipCommonDtor(sipPySelf);
}

void sipQFormBuilder::save(QIODevice*a0,QWidget*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_save);

    if (!sipMeth)
    {
        QFormBuilder::save(a0,a1);
        return;
    }

    extern void sipVH_QtDesigner_41(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIODevice*,QWidget*);

    sipVH_QtDesigner_41(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QWidget* sipQFormBuilder::load(QIODevice*a0,QWidget*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_load);

    if (!sipMeth)
        return QFormBuilder::load(a0,a1);

    extern QWidget* sipVH_QtDesigner_42(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIODevice*,QWidget*);

    return sipVH_QtDesigner_42(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QFormBuilder_pluginPaths, "QFormBuilder.pluginPaths() -> list-of-str");

extern "C" {static PyObject *meth_QFormBuilder_pluginPaths(PyObject *, PyObject *);}
static PyObject *meth_QFormBuilder_pluginPaths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFormBuilder, &sipCpp))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->pluginPaths());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFormBuilder, sipName_pluginPaths, doc_QFormBuilder_pluginPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QFormBuilder_clearPluginPaths, "QFormBuilder.clearPluginPaths()");

extern "C" {static PyObject *meth_QFormBuilder_clearPluginPaths(PyObject *, PyObject *);}
static PyObject *meth_QFormBuilder_clearPluginPaths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFormBuilder, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearPluginPaths();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFormBuilder, sipName_clearPluginPaths, doc_QFormBuilder_clearPluginPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QFormBuilder_addPluginPath, "QFormBuilder.addPluginPath(str)");

extern "C" {static PyObject *meth_QFormBuilder_addPluginPath(PyObject *, PyObject *);}
static PyObject *meth_QFormBuilder_addPluginPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFormBuilder, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addPluginPath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFormBuilder, sipName_addPluginPath, doc_QFormBuilder_addPluginPath);

    return NULL;
}


PyDoc_STRVAR(doc_QFormBuilder_setPluginPath, "QFormBuilder.setPluginPath(list-of-str)");

extern "C" {static PyObject *meth_QFormBuilder_setPluginPath(PyObject *, PyObject *);}
static PyObject *meth_QFormBuilder_setPluginPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFormBuilder, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPluginPath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFormBuilder, sipName_setPluginPath, doc_QFormBuilder_setPluginPath);

    return NULL;
}


PyDoc_STRVAR(doc_QFormBuilder_customWidgets, "QFormBuilder.customWidgets() -> list-of-QDesignerCustomWidgetInterface");

extern "C" {static PyObject *meth_QFormBuilder_customWidgets(PyObject *, PyObject *);}
static PyObject *meth_QFormBuilder_customWidgets(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFormBuilder, &sipCpp))
        {
            QList<QDesignerCustomWidgetInterface*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QDesignerCustomWidgetInterface*>(sipCpp->customWidgets());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QDesignerCustomWidgetInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFormBuilder, sipName_customWidgets, doc_QFormBuilder_customWidgets);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFormBuilder(void *, const sipTypeDef *);}
static void *cast_QFormBuilder(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QFormBuilder)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractFormBuilder)->ctd_cast((QAbstractFormBuilder *)(QFormBuilder *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFormBuilder(void *, int);}
static void release_QFormBuilder(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFormBuilder *>(sipCppV);
    else
        delete reinterpret_cast<QFormBuilder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFormBuilder(sipSimpleWrapper *);}
static void dealloc_QFormBuilder(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQFormBuilder *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QFormBuilder(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QFormBuilder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFormBuilder(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFormBuilder *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQFormBuilder();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFormBuilder[] = {{2, 255, 1}};


static PyMethodDef methods_QFormBuilder[] = {
    {SIP_MLNAME_CAST(sipName_addPluginPath), meth_QFormBuilder_addPluginPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QFormBuilder_addPluginPath)},
    {SIP_MLNAME_CAST(sipName_clearPluginPaths), meth_QFormBuilder_clearPluginPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QFormBuilder_clearPluginPaths)},
    {SIP_MLNAME_CAST(sipName_customWidgets), meth_QFormBuilder_customWidgets, METH_VARARGS, SIP_MLDOC_CAST(doc_QFormBuilder_customWidgets)},
    {SIP_MLNAME_CAST(sipName_pluginPaths), meth_QFormBuilder_pluginPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QFormBuilder_pluginPaths)},
    {SIP_MLNAME_CAST(sipName_setPluginPath), meth_QFormBuilder_setPluginPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QFormBuilder_setPluginPath)}
};

PyDoc_STRVAR(doc_QFormBuilder, "\1QFormBuilder()");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QFormBuilder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFormBuilder,
        {0}
    },
    {
        sipNameNr_QFormBuilder,
        {0, 0, 1},
        5, methods_QFormBuilder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFormBuilder,
    -1,
    -1,
    supers_QFormBuilder,
    0,
    init_type_QFormBuilder,
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
    dealloc_QFormBuilder,
    0,
    0,
    0,
    release_QFormBuilder,
    cast_QFormBuilder,
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