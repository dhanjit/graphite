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

#line 53 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp"

#line 120 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp"
#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDesigner/customwidget.sip"
#include <customwidget.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDesigner/sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp"


class sipQDesignerCustomWidgetCollectionInterface : public QDesignerCustomWidgetCollectionInterface
{
public:
    sipQDesignerCustomWidgetCollectionInterface();
    sipQDesignerCustomWidgetCollectionInterface(const QDesignerCustomWidgetCollectionInterface&);
    virtual ~sipQDesignerCustomWidgetCollectionInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList<QDesignerCustomWidgetInterface*> customWidgets() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerCustomWidgetCollectionInterface(const sipQDesignerCustomWidgetCollectionInterface &);
    sipQDesignerCustomWidgetCollectionInterface &operator = (const sipQDesignerCustomWidgetCollectionInterface &);

    char sipPyMethods[1];
};

sipQDesignerCustomWidgetCollectionInterface::sipQDesignerCustomWidgetCollectionInterface(): QDesignerCustomWidgetCollectionInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerCustomWidgetCollectionInterface::sipQDesignerCustomWidgetCollectionInterface(const QDesignerCustomWidgetCollectionInterface& a0): QDesignerCustomWidgetCollectionInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerCustomWidgetCollectionInterface::~sipQDesignerCustomWidgetCollectionInterface()
{
    sipCommonDtor(sipPySelf);
}

QList<QDesignerCustomWidgetInterface*> sipQDesignerCustomWidgetCollectionInterface::customWidgets() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QDesignerCustomWidgetCollectionInterface,sipName_customWidgets);

    if (!sipMeth)
        return QList<QDesignerCustomWidgetInterface*>();

    extern QList<QDesignerCustomWidgetInterface*> sipVH_QtDesigner_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_7(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerCustomWidgetCollectionInterface_customWidgets, "QDesignerCustomWidgetCollectionInterface.customWidgets() -> list-of-QDesignerCustomWidgetInterface");

extern "C" {static PyObject *meth_QDesignerCustomWidgetCollectionInterface_customWidgets(PyObject *, PyObject *);}
static PyObject *meth_QDesignerCustomWidgetCollectionInterface_customWidgets(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerCustomWidgetCollectionInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerCustomWidgetCollectionInterface, &sipCpp))
        {
            QList<QDesignerCustomWidgetInterface*>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerCustomWidgetCollectionInterface, sipName_customWidgets);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QDesignerCustomWidgetInterface*>(sipCpp->customWidgets());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QDesignerCustomWidgetInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerCustomWidgetCollectionInterface, sipName_customWidgets, doc_QDesignerCustomWidgetCollectionInterface_customWidgets);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerCustomWidgetCollectionInterface(void *, const sipTypeDef *);}
static void *cast_QDesignerCustomWidgetCollectionInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerCustomWidgetCollectionInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerCustomWidgetCollectionInterface(void *, int);}
static void release_QDesignerCustomWidgetCollectionInterface(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerCustomWidgetCollectionInterface *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerCustomWidgetCollectionInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerCustomWidgetCollectionInterface(sipSimpleWrapper *);}
static void dealloc_QDesignerCustomWidgetCollectionInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerCustomWidgetCollectionInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerCustomWidgetCollectionInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerCustomWidgetCollectionInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerCustomWidgetCollectionInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerCustomWidgetCollectionInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerCustomWidgetCollectionInterface();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerCustomWidgetCollectionInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerCustomWidgetCollectionInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerCustomWidgetCollectionInterface(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerCustomWidgetCollectionInterface[] = {
    {SIP_MLNAME_CAST(sipName_customWidgets), meth_QDesignerCustomWidgetCollectionInterface_customWidgets, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerCustomWidgetCollectionInterface_customWidgets)}
};

PyDoc_STRVAR(doc_QDesignerCustomWidgetCollectionInterface, "\1QDesignerCustomWidgetCollectionInterface()\n"
    "QDesignerCustomWidgetCollectionInterface(QDesignerCustomWidgetCollectionInterface)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerCustomWidgetCollectionInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerCustomWidgetCollectionInterface,
        {0}
    },
    {
        sipNameNr_QDesignerCustomWidgetCollectionInterface,
        {0, 0, 1},
        1, methods_QDesignerCustomWidgetCollectionInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerCustomWidgetCollectionInterface,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDesignerCustomWidgetCollectionInterface,
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
    dealloc_QDesignerCustomWidgetCollectionInterface,
    0,
    0,
    0,
    release_QDesignerCustomWidgetCollectionInterface,
    cast_QDesignerCustomWidgetCollectionInterface,
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
