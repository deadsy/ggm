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

#define LOG_INF log_info
#define LOG_DBG log_debug
#define LOG_ERR log_error
#define LOG_WRN log_warn

enum { LOG_TRACE, LOG_DEBUG, LOG_INFO, LOG_WARN, LOG_ERROR, LOG_FATAL };

#define log_trace(...) ggm_log(LOG_TRACE, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define log_debug(...) ggm_log(LOG_DEBUG, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define log_info(...)  ggm_log(LOG_INFO,  __FILE__, __func__, __LINE__, __VA_ARGS__)
#define log_warn(...)  ggm_log(LOG_WARN,  __FILE__, __func__, __LINE__, __VA_ARGS__)
#define log_error(...) ggm_log(LOG_ERROR, __FILE__, __func__, __LINE__, __VA_ARGS__)
#define log_fatal(...) ggm_log(LOG_FATAL, __FILE__, __func__, __LINE__, __VA_ARGS__)

void ggm_log(int level, const char *file, const char *func, int line, const char *fmt, ...);

/*****************************************************************************/

#endif /* GGM_SRC_INC_OSAL_H */

/*****************************************************************************/
