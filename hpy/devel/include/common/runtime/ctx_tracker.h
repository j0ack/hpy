#ifndef HPY_COMMON_RUNTIME_CTX_TRACKER_H
#define HPY_COMMON_RUNTIME_CTX_TRACKER_H

#include "hpy.h"

_HPy_HIDDEN HPyTracker
ctx_Tracker_New(HPyContext ctx, HPy_ssize_t size);

_HPy_HIDDEN int
ctx_Tracker_Add(HPyContext ctx, HPyTracker hl, HPy h);

_HPy_HIDDEN int
ctx_Tracker_RemoveAll(HPyContext ctx, HPyTracker hl);

_HPy_HIDDEN int
ctx_Tracker_Free(HPyContext ctx, HPyTracker hl);

#endif /* HPY_COMMON_RUNTIME_CTX_TRACKER_H */
