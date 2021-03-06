/*
 * Copyright (c) 1999
 * Boris Fomitchev
 *
 * This material is provided "as is", with absolutely no warranty expressed
 * or implied. Any use is at your own risk.
 *
 * Permission to use or copy this software for any purpose is hereby granted
 * without fee, provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 *
 */

#ifndef _STLP_INTERNAL_CLOCALE
#define _STLP_INTERNAL_CLOCALE

#if !defined (_STLP_WCE_EVC3)

#  include <locale.h>

#  if defined (_STLP_IMPORT_VENDOR_CSTD)
_STLP_BEGIN_NAMESPACE
using _STLP_VENDOR_CSTD::lconv;
#    if !defined (_STLP_NO_CSTD_FUNCTION_IMPORTS) && !defined(__ANDROID__)
using _STLP_VENDOR_CSTD::localeconv;
using _STLP_VENDOR_CSTD::setlocale;
#    endif
_STLP_END_NAMESPACE
#  endif

#endif /* !_STLP_WCE_EVC3 */

#endif
