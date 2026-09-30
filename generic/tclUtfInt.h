/*
 * tclUtfInt.h --
 *
 * Internal declarations of fast tcl clock module.
 *
 * This needs to be after tclInt.h
 *
 * Copyright (c) 2017 Serg G. Brester (aka sebres)
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 */

#ifndef _TCLUTFINT_H
#define _TCLUTFINT_H

#if TCL_MAJOR_VERSION < 9
#ifndef TclUtfNext
#define TclUtfNext(src)	\
	( (((unsigned char) *(src)) < 0xC0) ? src + 1 : Tcl_UtfNext(src) )
#endif
#endif

#endif /* _TCLUTFINT_H */
