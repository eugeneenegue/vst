/* 
vst~ - VST plugin object for PD 
based on the work of Jarno Sepp�nen and Mark Williamson

Copyright (c)2003-2004 Thomas Grill (xovo@gmx.net)
For information on usage and redistribution, and for a DISCLAIMER OF ALL
WARRANTIES, see the file, "license.txt," in this distribution.  
*/

#include "editor.h"
#include "vsthost.h"
#include <flext.h>

#if FLEXT_OS == FLEXT_OS_WIN
// only Windows code is situated in this file

#include "editorwin.hpp"

#elif FLEXT_OS == FLEXT_OS_MAC

#include "editormac.hpp"

#else

#error Platform not supported

#endif
