#pragma once
#include <ev.h>

#include "util_error.h"

void idle_cb(EV_P, ev_idle *w, int revents);

extern int int_idle_count;
/*
While an idle watcher is running, the event loop will not sleep and ev_check
watchers will be run.
*/

/*
Increment the number of watchers using the idle watcher. If the old number was
zero, it adds the idle watcher.
*/
void _increment_idle(EV_P);
#define increment_idle(A) \
	_increment_idle(A); \
	debug_root(__FILE__, __LINE__, (char *)__func__, "increment_idle: %d", int_idle_count);

/*
Decrement the number of watchers using the idle watcher. If it reaches zero, it
removes the idle watcher.
*/
void _decrement_idle(EV_P);
#define decrement_idle(A) \
	debug_root(__FILE__, __LINE__, (char *)__func__, "decrement_idle: %d", int_idle_count); \
	_decrement_idle(A);
