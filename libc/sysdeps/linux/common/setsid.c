/* vi: set sw=4 ts=4: */
/*
 * setsid() for uClibc
 *
 * Copyright (C) 2000-2004 by Erik Andersen <andersen@codpoet.org>
 *
 * GNU Library General Public License (LGPL) version 2 or later.
 */

#include "syscalls.h"
#include <unistd.h>
_syscall0(pid_t, setsid);
