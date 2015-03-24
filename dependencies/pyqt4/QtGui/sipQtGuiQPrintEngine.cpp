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

#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qprintengine.sip"
#include <qprintengine.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPrintEngine.cpp"

#line 215 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qprinter.sip"
#include <qprinter.h>
#line 38 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPrintEngine.cpp"
#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 41 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPrintEngine.cpp"
#line 274 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 44 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtGui/sipQtGuiQPrintEngine.cpp"


class sipQPrintEngine : public QPrintEngine
{
public:
    sipQPrintEngine();
    sipQPrintEngine(const QPrintEngine&);
    virtual ~sipQPrintEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QPrinter::PrinterState printerState() const;
    int metric(QPaintDevice::PaintDeviceMetric) const;
    bool abort();
    bool newPage();
    QVariant property(QPrintEngine::PrintEnginePropertyKey) const;
    void setProperty(QPrintEngine::PrintEnginePropertyKey,const QVariant&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPrintEngine(const sipQPrintEngine &);
    sipQPrintEngine &operator = (const sipQPrintEngine &);

    char sipPyMethods[6];
};

sipQPrintEngine::sipQPrintEngine(): QPrintEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPrintEngine::sipQPrintEngine(const QPrintEngine& a0): QPrintEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPrintEngine::~sipQPrintEngine()
{
    sipCommonDtor(sipPySelf);
}

QPrinter::PrinterState sipQPrintEngine::printerState() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QPrintEngine,sipName_printerState);

    if (!sipMeth)
        return (QPrinter::PrinterState)0;

    extern QPrinter::PrinterState sipVH_QtGui_117(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_117(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQPrintEngine::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPrintEngine,sipName_metric);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtGui_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_14(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPrintEngine::abort()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QPrintEngine,sipName_abort);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQPrintEngine::newPage()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QPrintEngine,sipName_newPage);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

QVariant sipQPrintEngine::property(QPrintEngine::PrintEnginePropertyKey a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPrintEngine,sipName_property);

    if (!sipMeth)
        return QVariant();

    extern QVariant sipVH_QtGui_118(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPrintEngine::PrintEnginePropertyKey);

    return sipVH_QtGui_118(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QPrintEngine,sipName_setProperty);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_119(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPrintEngine::PrintEnginePropertyKey,const QVariant&);

    sipVH_QtGui_119(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QPrintEngine_setProperty, "QPrintEngine.setProperty(QPrintEngine.PrintEnginePropertyKey, QVariant)");

extern "C" {static PyObject *meth_QPrintEngine_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine::PrintEnginePropertyKey a0;
        const QVariant* a1;
        int a1State = 0;
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPrintEngine_PrintEnginePropertyKey, &a0, sipType_QVariant,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_setProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProperty(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_setProperty, doc_QPrintEngine_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QPrintEngine_property, "QPrintEngine.property(QPrintEngine.PrintEnginePropertyKey) -> QVariant");

extern "C" {static PyObject *meth_QPrintEngine_property(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine::PrintEnginePropertyKey a0;
        const QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPrintEngine_PrintEnginePropertyKey, &a0))
        {
            QVariant*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_property);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->property(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_property, doc_QPrintEngine_property);

    return NULL;
}


PyDoc_STRVAR(doc_QPrintEngine_newPage, "QPrintEngine.newPage() -> bool");

extern "C" {static PyObject *meth_QPrintEngine_newPage(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_newPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_newPage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->newPage();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_newPage, doc_QPrintEngine_newPage);

    return NULL;
}


PyDoc_STRVAR(doc_QPrintEngine_abort, "QPrintEngine.abort() -> bool");

extern "C" {static PyObject *meth_QPrintEngine_abort(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_abort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_abort);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->abort();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_abort, doc_QPrintEngine_abort);

    return NULL;
}


PyDoc_STRVAR(doc_QPrintEngine_metric, "QPrintEngine.metric(QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QPrintEngine_metric(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPaintDevice::PaintDeviceMetric a0;
        const QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPrintEngine, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_metric);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->metric(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_metric, doc_QPrintEngine_metric);

    return NULL;
}


PyDoc_STRVAR(doc_QPrintEngine_printerState, "QPrintEngine.printerState() -> QPrinter.PrinterState");

extern "C" {static PyObject *meth_QPrintEngine_printerState(PyObject *, PyObject *);}
static PyObject *meth_QPrintEngine_printerState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QPrintEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrintEngine, &sipCpp))
        {
            QPrinter::PrinterState sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPrintEngine, sipName_printerState);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->printerState();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QPrinter_PrinterState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrintEngine, sipName_printerState, doc_QPrintEngine_printerState);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPrintEngine(void *, const sipTypeDef *);}
static void *cast_QPrintEngine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPrintEngine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPrintEngine(void *, int);}
static void release_QPrintEngine(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPrintEngine *>(sipCppV);
    else
        delete reinterpret_cast<QPrintEngine *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPrintEngine(sipSimpleWrapper *);}
static void dealloc_QPrintEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPrintEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPrintEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPrintEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPrintEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPrintEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPrintEngine();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QPrintEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrintEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPrintEngine(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPrintEngine[] = {
    {SIP_MLNAME_CAST(sipName_abort), meth_QPrintEngine_abort, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_abort)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QPrintEngine_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_metric)},
    {SIP_MLNAME_CAST(sipName_newPage), meth_QPrintEngine_newPage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_newPage)},
    {SIP_MLNAME_CAST(sipName_printerState), meth_QPrintEngine_printerState, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_printerState)},
    {SIP_MLNAME_CAST(sipName_property), meth_QPrintEngine_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_property)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QPrintEngine_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrintEngine_setProperty)}
};

static sipEnumMemberDef enummembers_QPrintEngine[] = {
    {sipName_PPK_CollateCopies, static_cast<int>(QPrintEngine::PPK_CollateCopies), 405},
    {sipName_PPK_ColorMode, static_cast<int>(QPrintEngine::PPK_ColorMode), 405},
    {sipName_PPK_CopyCount, static_cast<int>(QPrintEngine::PPK_CopyCount), 405},
    {sipName_PPK_Creator, static_cast<int>(QPrintEngine::PPK_Creator), 405},
    {sipName_PPK_CustomBase, static_cast<int>(QPrintEngine::PPK_CustomBase), 405},
    {sipName_PPK_CustomPaperSize, static_cast<int>(QPrintEngine::PPK_CustomPaperSize), 405},
    {sipName_PPK_DocumentName, static_cast<int>(QPrintEngine::PPK_DocumentName), 405},
    {sipName_PPK_Duplex, static_cast<int>(QPrintEngine::PPK_Duplex), 405},
    {sipName_PPK_FontEmbedding, static_cast<int>(QPrintEngine::PPK_FontEmbedding), 405},
    {sipName_PPK_FullPage, static_cast<int>(QPrintEngine::PPK_FullPage), 405},
    {sipName_PPK_NumberOfCopies, static_cast<int>(QPrintEngine::PPK_NumberOfCopies), 405},
    {sipName_PPK_Orientation, static_cast<int>(QPrintEngine::PPK_Orientation), 405},
    {sipName_PPK_OutputFileName, static_cast<int>(QPrintEngine::PPK_OutputFileName), 405},
    {sipName_PPK_PageMargins, static_cast<int>(QPrintEngine::PPK_PageMargins), 405},
    {sipName_PPK_PageOrder, static_cast<int>(QPrintEngine::PPK_PageOrder), 405},
    {sipName_PPK_PageRect, static_cast<int>(QPrintEngine::PPK_PageRect), 405},
    {sipName_PPK_PageSize, static_cast<int>(QPrintEngine::PPK_PageSize), 405},
    {sipName_PPK_PaperRect, static_cast<int>(QPrintEngine::PPK_PaperRect), 405},
    {sipName_PPK_PaperSize, static_cast<int>(QPrintEngine::PPK_PaperSize), 405},
    {sipName_PPK_PaperSource, static_cast<int>(QPrintEngine::PPK_PaperSource), 405},
    {sipName_PPK_PaperSources, static_cast<int>(QPrintEngine::PPK_PaperSources), 405},
    {sipName_PPK_PrinterName, static_cast<int>(QPrintEngine::PPK_PrinterName), 405},
    {sipName_PPK_PrinterProgram, static_cast<int>(QPrintEngine::PPK_PrinterProgram), 405},
    {sipName_PPK_Resolution, static_cast<int>(QPrintEngine::PPK_Resolution), 405},
    {sipName_PPK_SelectionOption, static_cast<int>(QPrintEngine::PPK_SelectionOption), 405},
    {sipName_PPK_SupportedResolutions, static_cast<int>(QPrintEngine::PPK_SupportedResolutions), 405},
    {sipName_PPK_SupportsMultipleCopies, static_cast<int>(QPrintEngine::PPK_SupportsMultipleCopies), 405},
    {sipName_PPK_SuppressSystemPrintStatus, static_cast<int>(QPrintEngine::PPK_SuppressSystemPrintStatus), 405},
    {sipName_PPK_WindowsPageSize, static_cast<int>(QPrintEngine::PPK_WindowsPageSize), 405},
};

PyDoc_STRVAR(doc_QPrintEngine, "\1QPrintEngine()\n"
    "QPrintEngine(QPrintEngine)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QPrintEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QPrintEngine,
        {0}
    },
    {
        sipNameNr_QPrintEngine,
        {0, 0, 1},
        6, methods_QPrintEngine,
        29, enummembers_QPrintEngine,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPrintEngine,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPrintEngine,
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
    dealloc_QPrintEngine,
    0,
    0,
    0,
    release_QPrintEngine,
    cast_QPrintEngine,
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
