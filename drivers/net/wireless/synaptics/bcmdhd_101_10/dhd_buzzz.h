#ifndef _DHD_BUZZZ_H_INCLUDED_
#define _DHD_BUZZZ_H_INCLUDED_

*/
 * Copyright (C) 2022, Broadcom.
 *
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *
 * <<Broadcom-WL-IPTag/Open:>>
 *
 * $Id$
 */

/*
 * Broadcom logging system - Empty implementaiton
 */

#define dhd_buzzz_attach()              do { /* noop */ } while (0)
#define dhd_buzzz_detach()              do { /* noop */ } while (0)
#define dhd_buzzz_panic(x)              do { /* noop */ } while (0)
#define BUZZZ_LOG(ID, N, ARG...)    do { /* noop */ } while (0)

#endif /* _DHD_BUZZZ_H_INCLUDED_ */
