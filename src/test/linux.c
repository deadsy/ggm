/******************************************************************************
 * Copyright (c) 2019 Jason T. Harris. (sirmanlypowers@gmail.com)
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * OS Abstraction Layer for Linux
 */

#include <time.h>
#include <stdlib.h>
#include <stdarg.h>

#include "log.h"
#include "ggm.h"

/******************************************************************************
 * ggm_mdelay delays for a specified number of milliseconds
 */

void ggm_mdelay(long ms)
{
	struct timespec req, rem;

	if (ms > 999) {
		req.tv_sec = (int)(ms / 1000);
		req.tv_nsec = (ms - ((long)req.tv_sec * 1000)) * 1000000;
	} else {
		req.tv_sec = 0;
		req.tv_nsec = ms * 1000000;
	}

	nanosleep(&req, &rem);
}

/******************************************************************************
 * memory allocation
 */

void *ggm_calloc(size_t num, size_t size)
{
	return calloc(num, size);
}

void ggm_free(void *ptr)
{
	free(ptr);
}

/******************************************************************************
 * logging
 */

static const int map_level[] = {
	LOG_INFO,       /* GGM_LOG_INFO */
	LOG_DEBUG,      /* GGM_LOG_DEBUG */
	LOG_WARN,       /* GGM_LOG_WARN */
	LOG_ERROR,      /* GGM_LOG_ERROR */
};

void ggm_log(int level, const char *file, const char *func, int line, const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	log_log(map_level[level], file, func, line, fmt, args);
	va_end(args);
}

/*****************************************************************************/
