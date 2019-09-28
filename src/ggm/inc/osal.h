/******************************************************************************
 * Copyright (c) 2019 Jason T. Harris. (sirmanlypowers@gmail.com)
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * OS Abstraction Layer
 *
 */

#ifndef GGM_SRC_INC_OSAL_H
#define GGM_SRC_INC_OSAL_H

/*****************************************************************************
 * Memory Alloc/Free
 */

void *ggm_calloc(size_t num, size_t size);
void ggm_free(void *ptr);

/*****************************************************************************
 * Logging
 */

enum {
	GGM_LOG_INFO,
	GGM_LOG_DEBUG,
	GGM_LOG_WARN,
	GGM_LOG_ERROR,
};

#define LOG_INF ggm_log_inf
#define LOG_DBG ggm_log_dbg
#define LOG_WRN ggm_log_wrn
#define LOG_ERR ggm_log_err

#define ggm_log_inf(...) ggm_log(GGM_LOG_INFO, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define ggm_log_dbg(...) ggm_log(GGM_LOG_DEBUG, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define ggm_log_wrn(...) ggm_log(GGM_LOG_WARN,  __FILE__, __func__, __LINE__, __VA_ARGS__)
#define ggm_log_err(...) ggm_log(GGM_LOG_ERROR, __FILE__, __func__, __LINE__, __VA_ARGS__)

void ggm_log(int level, const char *file, const char *func, int line, const char *fmt, ...);

/*****************************************************************************/

#endif /* GGM_SRC_INC_OSAL_H */

/*****************************************************************************/
