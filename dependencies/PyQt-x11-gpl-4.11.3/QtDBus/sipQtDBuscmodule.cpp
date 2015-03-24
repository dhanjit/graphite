/*
 * Module code.
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

#include "sipAPIQtDBus.h"

#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 34 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusargument.sip"
#include <qdbusargument.h>
#line 37 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 57 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 40 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 57 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 43 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 59 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 46 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 112 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 49 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 161 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 52 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 55 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 39 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusservicewatcher.sip"
#include <qdbusservicewatcher.h>
#line 58 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 33 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusunixfiledescriptor.sip"
#include <qdbusunixfiledescriptor.h>
#line 61 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"
#line 31 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qpydbuspendingreply.sip"
#include <qpydbuspendingreply.h>
#line 64 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtDBus[] = {
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'R', 'e', 'p', 'l', 'y', '>', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'R', 'e', 'p', 'l', 'a', 'c', 'e', 'm', 'e', 'n', 't', 'O', 'p', 't', 'i', 'o', 'n', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'R', 'e', 'p', 'l', 'y', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'Q', 'u', 'e', 'u', 'e', 'O', 'p', 't', 'i', 'o', 'n', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'C', 'a', 'p', 'a', 'b', 'i', 'l', 'i', 't', 'i', 'e', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'C', 'a', 'p', 'a', 'b', 'i', 'l', 'i', 't', 'y', 0,
    'Q', 'D', 'B', 'u', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'W', 'a', 't', 'c', 'h', 'e', 'r', ':', ':', 'W', 'a', 't', 'c', 'h', 'M', 'o', 'd', 'e', 'F', 'l', 'a', 'g', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'O', 'p', 't', 'i', 'o', 'n', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'U', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'M', 'o', 'd', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'Q', 'D', 'B', 'u', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'W', 'a', 't', 'c', 'h', 'e', 'r', ':', ':', 'W', 'a', 't', 'c', 'h', 'M', 'o', 'd', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'N', 'o', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'I', 'n', 'v', 'o', 'k', 'a', 'b', 'l', 'e', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'N', 'o', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'N', 'o', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'C', 'o', 'n', 't', 'e', 'n', 't', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'N', 'o', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'I', 'n', 'v', 'o', 'k', 'a', 'b', 'l', 'e', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'M', 'e', 's', 's', 'a', 'g', 'e', ':', ':', 'M', 'e', 's', 's', 'a', 'g', 'e', 'T', 'y', 'p', 'e', 0,
    'U', 'n', 'i', 'x', 'F', 'i', 'l', 'e', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'o', 'r', 'P', 'a', 's', 's', 'i', 'n', 'g', 0,
    'a', 's', 'y', 'n', 'c', 'C', 'a', 'l', 'l', 'W', 'i', 't', 'h', 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 'L', 'i', 's', 't', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'N', 'o', 'n', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'S', 'l', 'o', 't', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'C', 'o', 'n', 't', 'e', 'n', 't', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', ':', ':', 'B', 'u', 's', 'T', 'y', 'p', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'Q', 'S', 't', 'r', 'i', 'n', 'g', 'L', 'i', 's', 't', '>', 0,
    'Q', 'D', 'B', 'u', 's', 'U', 'n', 'i', 'x', 'F', 'i', 'l', 'e', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'o', 'r', 0,
    'Q', 'D', 'B', 'u', 's', 'P', 'e', 'n', 'd', 'i', 'n', 'g', 'C', 'a', 'l', 'l', 'W', 'a', 't', 'c', 'h', 'e', 'r', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'W', 'a', 't', 'c', 'h', 'F', 'o', 'r', 'U', 'n', 'r', 'e', 'g', 'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'c', 'a', 'l', 'l', 'W', 'i', 't', 'h', 'C', 'a', 'l', 'l', 'b', 'a', 'c', 'k', 'F', 'a', 'i', 'l', 'e', 'd', 0,
    'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'N', 'a', 'm', 'e', 's', 0,
    'R', 'e', 'p', 'l', 'a', 'c', 'e', 'E', 'x', 'i', 's', 't', 'i', 'n', 'g', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'C', 'a', 'p', 'a', 'b', 'i', 'l', 'i', 't', 'i', 'e', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'E', 'r', 'r', 'o', 'r', ':', ':', 'E', 'r', 'r', 'o', 'r', 'T', 'y', 'p', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'S', 'c', 'r', 'i', 'p', 't', 'a', 'b', 'l', 'e', 'S', 'l', 'o', 't', 's', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'W', 'a', 't', 'c', 'h', 'e', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'W', 'a', 't', 'c', 'h', 'F', 'o', 'r', 'R', 'e', 'g', 'i', 's', 't', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'S', 'e', 'r', 'v', 'i', 'c', 'e', 'N', 'o', 't', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 0,
    'D', 'o', 'n', 't', 'A', 'l', 'l', 'o', 'w', 'R', 'e', 'p', 'l', 'a', 'c', 'e', 'm', 'e', 'n', 't', 0,
    'c', 'a', 'l', 'l', 'W', 'i', 't', 'h', 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 'L', 'i', 's', 't', 0,
    'Q', 'D', 'B', 'u', 's', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'A', 'd', 'a', 'p', 't', 'o', 'r', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'Q', 'S', 't', 'r', 'i', 'n', 'g', '>', 0,
    'Q', 'P', 'y', 'D', 'B', 'u', 's', 'P', 'e', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'p', 'l', 'y', 0,
    'W', 'a', 't', 'c', 'h', 'F', 'o', 'r', 'O', 'w', 'n', 'e', 'r', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'W', 'a', 't', 'c', 'h', 'e', 'r', 0,
    's', 'e', 't', 'A', 'u', 't', 'o', 'S', 't', 'a', 'r', 't', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'O', 'w', 'n', 'e', 'r', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 0,
    'i', 's', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'I', 'n', 'v', 'o', 'k', 'a', 'b', 'l', 'e', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's', 0,
    's', 'e', 't', 'A', 'u', 't', 'o', 'R', 'e', 'l', 'a', 'y', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    's', 'e', 't', 'W', 'a', 't', 'c', 'h', 'e', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 's', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'F', 'r', 'o', 'm', 'P', 'e', 'e', 'r', 0,
    'o', 'b', 'j', 'e', 'c', 't', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 'A', 't', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'C', 'h', 'i', 'l', 'd', 'O', 'b', 'j', 'e', 'c', 't', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'P', 'e', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'p', 'l', 'y', 0,
    's', 'e', 't', 'F', 'i', 'l', 'e', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'o', 'r', 0,
    'a', 'd', 'd', 'W', 'a', 't', 'c', 'h', 'e', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'f', 'r', 'o', 'm', 'C', 'o', 'm', 'p', 'l', 'e', 't', 'e', 'd', 'C', 'a', 'l', 'l', 0,
    'M', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'O', 'b', 'j', 'e', 'c', 't', 'P', 'a', 't', 'h', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'F', 'r', 'o', 'm', 'B', 'u', 's', 0,
    'u', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'C', 'o', 'n', 't', 'e', 'n', 't', 's', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'u', 'i', 'n', 't', '>', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'b', 'o', 'o', 'l', '>', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', '<', 'v', 'o', 'i', 'd', '>', 0,
    'Q', 'D', 'B', 'u', 's', 'P', 'e', 'n', 'd', 'i', 'n', 'g', 'C', 'a', 'l', 'l', 0,
    'a', 'u', 't', 'o', 'S', 't', 'a', 'r', 't', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'E', 'r', 'r', 'o', 'r', 'R', 'e', 'p', 'l', 'y', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'M', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'g', 'n', 'a', 't', 'u', 'r', 'e', 0,
    'D', 'o', 'n', 't', 'Q', 'u', 'e', 'u', 'e', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'u', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'O', 'b', 'j', 'e', 'c', 't', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'c', 'a', 'l', 'l', 'W', 'i', 't', 'h', 'C', 'a', 'l', 'l', 'b', 'a', 'c', 'k', 0,
    'a', 'u', 't', 'o', 'R', 'e', 'l', 'a', 'y', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'w', 'a', 't', 'c', 'h', 'e', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 's', 0,
    's', 'e', 't', 'D', 'e', 'l', 'a', 'y', 'e', 'd', 'R', 'e', 'p', 'l', 'y', 0,
    'i', 's', 'R', 'e', 'p', 'l', 'y', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', 0,
    'Q', 'D', 'B', 'u', 's', 'O', 'b', 'j', 'e', 'c', 't', 'P', 'a', 't', 'h', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'Q', 'D', 'B', 'u', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'Q', 'D', 'B', 'u', 's', ':', ':', 'C', 'a', 'l', 'l', 'M', 'o', 'd', 'e', 0,
    'w', 'a', 'i', 't', 'F', 'o', 'r', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'f', 'i', 'l', 'e', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'o', 'r', 0,
    'i', 's', 'D', 'e', 'l', 'a', 'y', 'e', 'd', 'R', 'e', 'p', 'l', 'y', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'S', 'i', 'g', 'n', 'a', 't', 'u', 'r', 'e', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'L', 'i', 'm', 'i', 't', 's', 'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd', 0,
    'S', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'n', 'k', 'n', 'o', 'w', 'n', 0,
    'l', 'o', 'c', 'a', 'l', 'M', 'a', 'c', 'h', 'i', 'n', 'e', 'I', 'd', 0,
    'U', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'T', 'r', 'e', 'e', 0,
    'U', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'N', 'o', 'd', 'e', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'l', 'l', 'S', 'l', 'o', 't', 's', 0,
    'E', 'x', 'p', 'o', 'r', 't', 'A', 'd', 'a', 'p', 't', 'o', 'r', 's', 0,
    'b', 'e', 'g', 'i', 'n', 'S', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e', 0,
    's', 'e', 't', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'S', 'i', 'g', 'n', 'a', 'l', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'M', 'e', 'm', 'b', 'e', 'r', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'O', 'b', 'j', 'e', 'c', 't', 0,
    'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'E', 'r', 'r', 'o', 'r', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'M', 'e', 't', 'h', 'o', 'd', 0,
    'S', 'e', 'r', 'v', 'i', 'c', 'e', 'Q', 'u', 'e', 'u', 'e', 'd', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'T', 'o', 'P', 'e', 'e', 'r', 0,
    'A', 'c', 't', 'i', 'v', 'a', 't', 'i', 'o', 'n', 'B', 'u', 's', 0,
    'b', 'e', 'g', 'i', 'n', 'M', 'a', 'p', 'E', 'n', 't', 'r', 'y', 0,
    'Q', 'D', 'B', 'u', 's', 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 0,
    'Q', 'P', 'y', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', 0,
    's', 'e', 't', 'W', 'a', 't', 'c', 'h', 'M', 'o', 'd', 'e', 0,
    's', 'e', 't', 'A', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's', 0,
    'e', 'r', 'r', 'o', 'r', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'E', 'r', 'r', 'o', 'r', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'R', 'e', 'p', 'l', 'y', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'Q', 'D', 'B', 'u', 's', 'V', 'a', 'r', 'i', 'a', 'n', 't', 0,
    's', 'e', 't', 'S', 'i', 'g', 'n', 'a', 't', 'u', 'r', 'e', 0,
    'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    'A', 'd', 'd', 'r', 'e', 's', 's', 'I', 'n', 'U', 's', 'e', 0,
    'A', 'c', 'c', 'e', 's', 's', 'D', 'e', 'n', 'i', 'e', 'd', 0,
    'N', 'o', 't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 0,
    's', 't', 'a', 'r', 't', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'O', 'w', 'n', 'e', 'r', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'T', 'o', 'B', 'u', 's', 0,
    'B', 'l', 'o', 'c', 'k', 'W', 'i', 't', 'h', 'G', 'u', 'i', 0,
    'e', 'n', 'd', 'S', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'D', 'B', 'u', 's', 0,
    'i', 's', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'R', 'e', 'p', 'l', 'y', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'E', 'r', 'r', 'o', 'r', 0,
    'I', 'n', 'v', 'a', 'l', 'i', 'd', 'A', 'r', 'g', 's', 0,
    'b', 'a', 's', 'e', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'i', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    'e', 'n', 'd', 'M', 'a', 'p', 'E', 'n', 't', 'r', 'y', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'e', 'r', 'r', 'o', 'r', 'S', 't', 'r', 'i', 'n', 'g', 0,
    'Q', 'D', 'B', 'u', 's', 'R', 'e', 'p', 'l', 'y', 0,
    'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 'A', 't', 0,
    's', 'e', 't', 'V', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'B', 'a', 'd', 'A', 'd', 'd', 'r', 'e', 's', 's', 0,
    'Q', 'D', 'B', 'u', 's', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'i', 'd', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'P', 'i', 'd', 0,
    's', 'e', 's', 's', 'i', 'o', 'n', 'B', 'u', 's', 0,
    'S', 'e', 's', 's', 'i', 'o', 'n', 'B', 'u', 's', 0,
    'A', 'u', 't', 'o', 'D', 'e', 't', 'e', 'c', 't', 0,
    'b', 'e', 'g', 'i', 'n', 'A', 'r', 'r', 'a', 'y', 0,
    's', 'e', 't', 'T', 'i', 'm', 'e', 'o', 'u', 't', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'i', 's', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 0,
    '_', '_', 'l', 's', 'h', 'i', 'f', 't', '_', '_', 0,
    '_', '_', 'i', 'n', 'v', 'e', 'r', 't', '_', '_', 0,
    'w', 'a', 't', 'c', 'h', 'M', 'o', 'd', 'e', 0,
    'f', 'r', 'o', 'm', 'E', 'r', 'r', 'o', 'r', 0,
    'e', 'r', 'r', 'o', 'r', 'N', 'a', 'm', 'e', 0,
    'N', 'o', 'N', 'e', 't', 'w', 'o', 'r', 'k', 0,
    's', 'y', 's', 't', 'e', 'm', 'B', 'u', 's', 0,
    'S', 'y', 's', 't', 'e', 'm', 'B', 'u', 's', 0,
    'a', 's', 'y', 'n', 'c', 'C', 'a', 'l', 'l', 0,
    'l', 'a', 's', 't', 'E', 'r', 'r', 'o', 'r', 0,
    'i', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    's', 'i', 'g', 'n', 'a', 't', 'u', 'r', 'e', 0,
    'a', 'r', 'g', 'u', 'm', 'e', 'n', 't', 's', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'T', 'i', 'm', 'e', 'd', 'O', 'u', 't', 0,
    'N', 'o', 'S', 'e', 'r', 'v', 'e', 'r', 0,
    'N', 'o', 'M', 'e', 'm', 'o', 'r', 'y', 0,
    'b', 'e', 'g', 'i', 'n', 'M', 'a', 'p', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'e', 'n', 'd', 'A', 'r', 'r', 'a', 'y', 0,
    '_', '_', 'h', 'a', 's', 'h', '_', '_', 0,
    'f', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    '_', '_', 'b', 'o', 'o', 'l', '_', '_', 0,
    '_', '_', 'i', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'a', 'n', 'd', '_', '_', 0,
    'i', 's', 'E', 'r', 'r', 'o', 'r', 0,
    'N', 'o', 'R', 'e', 'p', 'l', 'y', 0,
    'r', 'o', 'p', 't', 'i', 'o', 'n', 0,
    'q', 'o', 'p', 't', 'i', 'o', 'n', 0,
    'N', 'o', 'B', 'l', 'o', 'c', 'k', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 0,
    'v', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'N', 'o', 'E', 'r', 'r', 'o', 'r', 0,
    't', 'i', 'm', 'e', 'o', 'u', 't', 0,
    's', 'e', 't', 'P', 'a', 't', 'h', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'm', 'e', 's', 's', 'a', 'g', 'e', 0,
    '_', '_', 'a', 'n', 'd', '_', '_', 0,
    '_', '_', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'n', 't', '_', '_', 0,
    '_', '_', 'i', 'o', 'r', '_', '_', 0,
    'e', 'n', 'd', 'M', 'a', 'p', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'm', 'e', 'm', 'b', 'e', 'r', 0,
    's', 'e', 'n', 'd', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    '_', '_', 'g', 'e', '_', '_', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    '_', '_', 'l', 't', '_', '_', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    '_', '_', 'n', 'e', '_', '_', 0,
    '_', '_', 'e', 'q', '_', '_', 0,
    '_', '_', 'o', 'r', '_', '_', 0,
    'r', 'e', 'p', 'l', 'y', 0,
    'O', 't', 'h', 'e', 'r', 0,
    'Q', 'D', 'B', 'u', 's', 0,
    'v', 'a', 'l', 'u', 'e', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 'e', 'n', 'd', 0,
    'c', 'a', 'l', 'l', 0,
    'a', 'r', 'g', '8', 0,
    'a', 'r', 'g', '7', 0,
    'a', 'r', 'g', '6', 0,
    'a', 'r', 'g', '5', 0,
    'a', 'r', 'g', '4', 0,
    'a', 'r', 'g', '3', 0,
    'a', 'r', 'g', '2', 0,
    'a', 'r', 'g', '1', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'p', 'a', 't', 'h', 0,
    't', 'y', 'p', 'e', 0,
    'a', 'd', 'd', 0,
};
#line 30 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 321 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusconnection.sip"
QByteArray (*qpycore_pyqtslot_get_parts)(PyObject *, QObject **);
PyObject *(*qpycore_qvariant_value)(QVariant &, PyObject *);
#line 30 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusextratypes.sip"
#include <qdbusextratypes.h>
#line 30 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusservicewatcher.sip"
#include <qdbusservicewatcher.h>
#line 339 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QDBusAbstractInterface(void **);}
static const sipTypeDef *sipSubClass_QDBusAbstractInterface(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 37 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusabstractinterface.sip"
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_QDBusPendingCallWatcher, &sipType_QDBusPendingCallWatcher, -1, 1},
        {sipName_QDBusAbstractInterface, &sipType_QDBusAbstractInterface, 4, 2},
        {sipName_QDBusServiceWatcher, &sipType_QDBusServiceWatcher, -1, 3},
        {sipName_QDBusAbstractAdaptor, &sipType_QDBusAbstractAdaptor, -1, -1},
        {sipName_QDBusConnectionInterface, &sipType_QDBusConnectionInterface, -1, 5},
        {sipName_QDBusInterface, &sipType_QDBusInterface, -1, -1},
    };
    
    int i = 0;
    
    sipType = NULL;
    
    do
    {
        struct class_graph *cg = &graph[i];
    
        if (cg->name != NULL && sipCpp->inherits(cg->name))
        {
            sipType = *cg->type;
            i = cg->yes;
        }
        else
            i = cg->no;
    }
    while (i >= 0);
#line 380 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"

    return sipType;
}


extern "C" {static PyObject *slot_QDBusServiceWatcher_WatchModeFlag___or__(PyObject *,PyObject *);}
static PyObject *slot_QDBusServiceWatcher_WatchModeFlag___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusServiceWatcher::WatchModeFlag a0;
        QDBusServiceWatcher::WatchMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QDBusServiceWatcher_WatchModeFlag, &a0, sipType_QDBusServiceWatcher_WatchMode, &a1, &a1State))
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDBusServiceWatcher::WatchMode((a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QDBusServiceWatcher_WatchMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    {
        QDBusServiceWatcher::WatchModeFlag a0;
        QDBusServiceWatcher::WatchModeFlag a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EE", sipType_QDBusServiceWatcher_WatchModeFlag, &a0, sipType_QDBusServiceWatcher_WatchModeFlag, &a1))
        {
            QDBusServiceWatcher::WatchMode*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDBusServiceWatcher::WatchMode((a0 | a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDBusServiceWatcher_WatchMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QDBusServiceWatcher_WatchModeFlag[] = {
    {(void *)slot_QDBusServiceWatcher_WatchModeFlag___or__, or_slot},
    {0, (sipPySlotType)0}
};



extern "C" {static PyObject *slot_QDBusConnection_RegisterOption___or__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_RegisterOption___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::RegisterOption a0;
        QDBusConnection::RegisterOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QDBusConnection_RegisterOption, &a0, sipType_QDBusConnection_RegisterOptions, &a1, &a1State))
        {
            QDBusConnection::RegisterOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDBusConnection::RegisterOptions((a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QDBusConnection_RegisterOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    {
        QDBusConnection::RegisterOption a0;
        QDBusConnection::RegisterOption a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EE", sipType_QDBusConnection_RegisterOption, &a0, sipType_QDBusConnection_RegisterOption, &a1))
        {
            QDBusConnection::RegisterOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDBusConnection::RegisterOptions((a0 | a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_RegisterOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QDBusConnection_RegisterOption[] = {
    {(void *)slot_QDBusConnection_RegisterOption___or__, or_slot},
    {0, (sipPySlotType)0}
};

static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusServiceWatcher__WatchModeFlag, {0}}, sipNameNr_WatchModeFlag, 30, slots_QDBusServiceWatcher_WatchModeFlag},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusMessage__MessageType, {0}}, sipNameNr_MessageType, 19, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusError__ErrorType, {0}}, sipNameNr_ErrorType, 16, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnectionInterface__RegisterServiceReply, {0}}, sipNameNr_RegisterServiceReply, 12, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnectionInterface__ServiceReplacementOptions, {0}}, sipNameNr_ServiceReplacementOptions, 12, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnectionInterface__ServiceQueueOptions, {0}}, sipNameNr_ServiceQueueOptions, 12, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnection__ConnectionCapability, {0}}, sipNameNr_ConnectionCapability, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnection__UnregisterMode, {0}}, sipNameNr_UnregisterMode, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnection__RegisterOption, {0}}, sipNameNr_RegisterOption, 5, slots_QDBusConnection_RegisterOption},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBusConnection__BusType, {0}}, sipNameNr_BusType, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QDBus__CallMode, {0}}, sipNameNr_CallMode, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtDBus_QDBus.super.ctd_base,
    &enumTypes[10].etd_base,
    &sipTypeDef_QtDBus_QDBusAbstractAdaptor.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusAbstractInterface.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusArgument.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusConnection.super.ctd_base,
    &enumTypes[9].etd_base,
    &sipTypeDef_QtDBus_QDBusConnection_ConnectionCapabilities.super.ctd_base,
    &enumTypes[6].etd_base,
    &enumTypes[8].etd_base,
    &sipTypeDef_QtDBus_QDBusConnection_RegisterOptions.super.ctd_base,
    &enumTypes[7].etd_base,
    &sipTypeDef_QtDBus_QDBusConnectionInterface.super.ctd_base,
    &enumTypes[3].etd_base,
    &enumTypes[5].etd_base,
    &enumTypes[4].etd_base,
    &sipTypeDef_QtDBus_QDBusError.super.ctd_base,
    &enumTypes[2].etd_base,
    &sipTypeDef_QtDBus_QDBusInterface.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusMessage.super.ctd_base,
    &enumTypes[1].etd_base,
    &sipTypeDef_QtDBus_QDBusObjectPath.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusPendingCall.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusPendingCallWatcher.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusReply_0100QDBusConnectionInterface_RegisterServiceReply.mtd_base,
    &sipTypeDef_QtDBus_QDBusReply_0100QString.mtd_base,
    &sipTypeDef_QtDBus_QDBusReply_0100QStringList.mtd_base,
    &sipTypeDef_QtDBus_QDBusReply_2600.mtd_base,
    &sipTypeDef_QtDBus_QDBusReply_1900.mtd_base,
    &sipTypeDef_QtDBus_QDBusReply_0400.mtd_base,
    &sipTypeDef_QtDBus_QDBusServiceWatcher.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusServiceWatcher_WatchMode.super.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_QtDBus_QDBusSignature.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusUnixFileDescriptor.super.ctd_base,
    &sipTypeDef_QtDBus_QDBusVariant.super.ctd_base,
    &sipTypeDef_QtDBus_QPyDBusPendingReply.super.ctd_base,
    &sipTypeDef_QtDBus_QPyDBusReply.super.ctd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QDBusAbstractInterface, {141, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtDBus = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtDBus,
    0,
    -1,
    sipStrings_QtDBus,
    importsTable,
    NULL,
    38,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtDBus;
const sipExportedModuleDef *sipModuleAPI_QtDBus_QtCore;

sip_qt_metaobject_func sip_QtDBus_qt_metaobject;
sip_qt_metacall_func sip_QtDBus_qt_metacall;
sip_qt_metacast_func sip_QtDBus_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtDBus
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtDBus
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtDBus",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtDBus, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtDBus), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtDBus = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtDBus = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtDBus == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtDBus,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtDBus_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtDBus_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtDBus_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtDBus_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtDBus,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtDBus_QtCore = sipModuleAPI_QtDBus.em_imports[0].im_module;
#line 162 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusabstractinterface.sip"
qpydbus_post_init();
#line 326 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/sip/QtDBus/qdbusconnection.sip"
// Import helpers from the QtCore module.
qpycore_pyqtslot_get_parts = (QByteArray (*)(PyObject *, QObject **))sipImportSymbol("qpycore_pyqtslot_get_parts");
qpycore_qvariant_value = (PyObject *(*)(QVariant &, PyObject *))sipImportSymbol("qpycore_qvariant_value");
#line 732 "/home/archen/MyRepos/graphite/PyQt-x11-gpl-4.11.3/QtDBus/sipQtDBuscmodule.cpp"

    SIP_MODULE_RETURN(sipModule);
}
