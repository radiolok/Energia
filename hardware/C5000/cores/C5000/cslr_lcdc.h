/* ============================================================================
 * Copyright (c) 2008-2012 Texas Instruments Incorporated.
 * Except for those rights granted to you in your license from TI, all rights
 * reserved.
 *
 * Software License Agreement
 * Texas Instruments (TI) is supplying this software for use solely and
 * exclusively on TI devices. The software is owned by TI and/or its suppliers,
 * and is protected under applicable patent and copyright laws.  You may not
 * combine this software with any open-source software if such combination would
 * cause this software to become subject to any of the license terms applicable
 * to such open source software.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
 * NO WARRANTIES APPLY TO THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY.
 * EXAMPLES OF EXCLUDED WARRANTIES ARE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE AND WARRANTIES OF NON-INFRINGEMENT,
 * BUT ALL OTHER WARRANTY EXCLUSIONS ALSO APPLY. FURTHERMORE, TI SHALL NOT,
 * UNDER ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, CONSEQUENTIAL
 * OR PUNITIVE DAMAGES, FOR ANY REASON WHATSOEVER.
 * ============================================================================
 */

/*********************************************************************
* file: cslr_lcdc.h
*
* Brief: This file contains the Register Description for lcdc
*
*********************************************************************/
#ifndef _CSLR_LCDC_H_
#define _CSLR_LCDC_H_

#include <cslr.h>

#include <tistdtypes.h>
#include <csl_general.h>


/* Minimum unit = 2 bytes */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint16 LCDREVMIN;
    volatile Uint16 LCDREVMAJ;
    volatile Uint16 RSVD0[2];
    volatile Uint16 LCDCR;
    volatile Uint16 RSVD1[3];
    volatile Uint16 LCDSR;
    volatile Uint16 RSVD2[3];
    volatile Uint16 LCDLIDDCR;
    volatile Uint16 RSVD3[3];
    volatile Uint16 LCDLIDDCS0CONFIG0;
    volatile Uint16 LCDLIDDCS0CONFIG1;
    volatile Uint16 RSVD4[2];
    volatile Uint16 LCDLIDDCS0ADDR;
    volatile Uint16 RSVD5[3];
    volatile Uint16 LCDLIDDCS0DATA;
    volatile Uint16 RSVD6[3];
    volatile Uint16 LCDLIDDCS1CONFIG0;
    volatile Uint16 LCDLIDDCS1CONFIG1;
    volatile Uint16 RSVD7[2];
    volatile Uint16 LCDLIDDCS1ADDR;
    volatile Uint16 RSVD8[3];
    volatile Uint16 LCDLIDDCS1DATA;
    volatile Uint16 RSVD9[27];
    volatile Uint16 LCDDMACR;
    volatile Uint16 RSVD10[3];
    volatile Uint16 LCDDMAFB0BAR0;
    volatile Uint16 LCDDMAFB0BAR1;
    volatile Uint16 RSVD11[2];
    volatile Uint16 LCDDMAFB0CAR0;
    volatile Uint16 LCDDMAFB0CAR1;
    volatile Uint16 RSVD12[2];
    volatile Uint16 LCDDMAFB1BAR0;
    volatile Uint16 LCDDMAFB1BAR1;
    volatile Uint16 RSVD13[2];
    volatile Uint16 LCDDMAFB1CAR0;
    volatile Uint16 LCDDMAFB1CAR1;
} CSL_LcdcRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* LCDREVMIN */

#define CSL_LCDC_LCDREVMIN_REVMIN_MASK   (0xFFFFu)
#define CSL_LCDC_LCDREVMIN_REVMIN_SHIFT  (0x0000u)

#define CSL_LCDC_LCDREVMIN_RESETVAL      (0x0000u)

/* LCDREVMAJ */

#define CSL_LCDC_LCDREVMAJ_REVMAJ_MASK   (0xFFFFu)
#define CSL_LCDC_LCDREVMAJ_REVMAJ_SHIFT  (0x0000u)

#define CSL_LCDC_LCDREVMAJ_RESETVAL      (0x0000u)

/* LCDCR */

#define CSL_LCDC_LCDCR_CLKDIV_MASK       (0xFF00u)
#define CSL_LCDC_LCDCR_CLKDIV_SHIFT      (0x0008u)
#define CSL_LCDC_LCDCR_CLKDIV_RESETVAL   (0x0000u)


#define CSL_LCDC_LCDCR_MODESEL_MASK      (0x0001u)
#define CSL_LCDC_LCDCR_MODESEL_SHIFT     (0x0000u)
#define CSL_LCDC_LCDCR_MODESEL_RESETVAL  (0x0000u)
/*----MODESEL Tokens----*/
#define CSL_LCDC_LCDCR_MODESEL_LIDD      (0x0000u)
#define CSL_LCDC_LCDCR_MODESEL_RASTER    (0x0001u)

#define CSL_LCDC_LCDCR_RESETVAL          (0x0000u)

/* LCDSR */


#define CSL_LCDC_LCDSR_EOF1_MASK         (0x0200u)
#define CSL_LCDC_LCDSR_EOF1_SHIFT        (0x0009u)
#define CSL_LCDC_LCDSR_EOF1_RESETVAL     (0x0000u)
/*----EOF1 Tokens----*/
#define CSL_LCDC_LCDSR_EOF1_CLEAR        (0x0000u)
#define CSL_LCDC_LCDSR_EOF1_SET          (0x0001u)

#define CSL_LCDC_LCDSR_EOF0_MASK         (0x0100u)
#define CSL_LCDC_LCDSR_EOF0_SHIFT        (0x0008u)
#define CSL_LCDC_LCDSR_EOF0_RESETVAL     (0x0000u)
/*----EOF0 Tokens----*/
#define CSL_LCDC_LCDSR_EOF0_CLEAR        (0x0000u)
#define CSL_LCDC_LCDSR_EOF0_SET          (0x0001u)

#define CSL_LCDC_LCDSR_DONE_MASK         (0x0001u)
#define CSL_LCDC_LCDSR_DONE_SHIFT        (0x0000u)
#define CSL_LCDC_LCDSR_DONE_RESETVAL     (0x0000u)
/*----DONE Tokens----*/
#define CSL_LCDC_LCDSR_DONE_CLEAR        (0x0000u)
#define CSL_LCDC_LCDSR_DONE_SET          (0x0001u)

#define CSL_LCDC_LCDSR_RESETVAL          (0x0000u)

/* LCDLIDDCR */


#define CSL_LCDC_LCDLIDDCR_DONE_INT_EN_MASK (0x0400u)
#define CSL_LCDC_LCDLIDDCR_DONE_INT_EN_SHIFT (0x000Au)
#define CSL_LCDC_LCDLIDDCR_DONE_INT_EN_RESETVAL (0x0000u)
/*----DONE_INT_EN Tokens----*/
#define CSL_LCDC_LCDLIDDCR_DONE_INT_EN_DISABLE (0x0000u)
#define CSL_LCDC_LCDLIDDCR_DONE_INT_EN_ENABLE (0x0001u)

#define CSL_LCDC_LCDLIDDCR_DMA_CS0_CS1_MASK (0x0200u)
#define CSL_LCDC_LCDLIDDCR_DMA_CS0_CS1_SHIFT (0x0009u)
#define CSL_LCDC_LCDLIDDCR_DMA_CS0_CS1_RESETVAL (0x0000u)
/*----DMA_CS0_CS1 Tokens----*/
#define CSL_LCDC_LCDLIDDCR_DMA_CS0_CS1_CS0 (0x0000u)
#define CSL_LCDC_LCDLIDDCR_DMA_CS0_CS1_CS1 (0x0001u)

#define CSL_LCDC_LCDLIDDCR_LIDD_DMA_EN_MASK (0x0100u)
#define CSL_LCDC_LCDLIDDCR_LIDD_DMA_EN_SHIFT (0x0008u)
#define CSL_LCDC_LCDLIDDCR_LIDD_DMA_EN_RESETVAL (0x0000u)
/*----LIDD_DMA_EN Tokens----*/
#define CSL_LCDC_LCDLIDDCR_LIDD_DMA_EN_DISABLE (0x0000u)
#define CSL_LCDC_LCDLIDDCR_LIDD_DMA_EN_ENABLE (0x0001u)

#define CSL_LCDC_LCDLIDDCR_CS1_E1_POL_MASK (0x0080u)
#define CSL_LCDC_LCDLIDDCR_CS1_E1_POL_SHIFT (0x0007u)
#define CSL_LCDC_LCDLIDDCR_CS1_E1_POL_RESETVAL (0x0000u)
/*----CS1_E1_POL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_CS1_E1_POL_NORMAL (0x0000u)
#define CSL_LCDC_LCDLIDDCR_CS1_E1_POL_INVERT (0x0001u)

#define CSL_LCDC_LCDLIDDCR_CS0_E0_POL_MASK (0x0040u)
#define CSL_LCDC_LCDLIDDCR_CS0_E0_POL_SHIFT (0x0006u)
#define CSL_LCDC_LCDLIDDCR_CS0_E0_POL_RESETVAL (0x0000u)
/*----CS0_E0_POL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_CS0_E0_POL_NORMAL (0x0000u)
#define CSL_LCDC_LCDLIDDCR_CS0_E0_POL_INVERT (0x0001u)

#define CSL_LCDC_LCDLIDDCR_WS_DIR_POL_MASK (0x0020u)
#define CSL_LCDC_LCDLIDDCR_WS_DIR_POL_SHIFT (0x0005u)
#define CSL_LCDC_LCDLIDDCR_WS_DIR_POL_RESETVAL (0x0000u)
/*----WS_DIR_POL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_WS_DIR_POL_NORMAL (0x0000u)
#define CSL_LCDC_LCDLIDDCR_WS_DIR_POL_INVERT (0x0001u)

#define CSL_LCDC_LCDLIDDCR_RS_EN_POL_MASK (0x0010u)
#define CSL_LCDC_LCDLIDDCR_RS_EN_POL_SHIFT (0x0004u)
#define CSL_LCDC_LCDLIDDCR_RS_EN_POL_RESETVAL (0x0000u)
/*----RS_EN_POL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_RS_EN_POL_NORMAL (0x0000u)
#define CSL_LCDC_LCDLIDDCR_RS_EN_POL_INVERT (0x0001u)

#define CSL_LCDC_LCDLIDDCR_RSPOL_MASK   (0x0008u)
#define CSL_LCDC_LCDLIDDCR_RSPOL_SHIFT  (0x0003u)
#define CSL_LCDC_LCDLIDDCR_RSPOL_RESETVAL (0x0000u)
/*----RSPOL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_RSPOL_NORMAL (0x0000u)
#define CSL_LCDC_LCDLIDDCR_RSPOL_INVERT (0x0001u)

#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_MASK (0x0007u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_RESETVAL (0x0000u)
/*----LIDD_MODE_SEL Tokens----*/
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_SYNC_MPU68 (0x0000u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_ASYNC_MPU68 (0x0001u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_SYNC_MPU80 (0x0002u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_ASYNC_MPU80 (0x0003u)
#define CSL_LCDC_LCDLIDDCR_LIDD_MODE_SEL_HITACHI (0x0004u)

#define CSL_LCDC_LCDLIDDCR_RESETVAL      (0x0000u)

/* LCDLIDDCS0CONFIG0 */

#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_SU0_MASK (0xF000u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_SU0_SHIFT (0x000Cu)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_SU0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_STROBE_MASK (0x0FC0u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_STROBE_SHIFT (0x0006u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_STROBE_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_HOLD_MASK (0x003Cu)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_HOLD_SHIFT (0x0002u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_R_HOLD_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS0CONFIG0_TA_MASK (0x0003u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_TA_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS0CONFIG0_TA_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0CONFIG0_RESETVAL (0x0044u)

/* LCDLIDDCS0CONFIG1 */

#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_SU_MASK (0xF800u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_SU_SHIFT (0x000Bu)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_SU_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_STROBE_MASK (0x07E0u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_STROBE_SHIFT (0x0005u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_STROBE_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_HOLD_MASK (0x001Eu)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_HOLD_SHIFT (0x0001u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_W_HOLD_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS0CONFIG1_R_SU1_MASK (0x0001u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_R_SU1_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS0CONFIG1_R_SU1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0CONFIG1_RESETVAL (0x0022u)

/* LCDLIDDCS0ADDR */

#define CSL_LCDC_LCDLIDDCS0ADDR_ADR_INDX_MASK (0xFFFFu)
#define CSL_LCDC_LCDLIDDCS0ADDR_ADR_INDX_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS0ADDR_ADR_INDX_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0ADDR_RESETVAL (0x0000u)

/* LCDLIDDCS0DATA */

#define CSL_LCDC_LCDLIDDCS0DATA_DATA_MASK (0xFFFFu)
#define CSL_LCDC_LCDLIDDCS0DATA_DATA_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS0DATA_DATA_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS0DATA_RESETVAL (0x0000u)

/* LCDLIDDCS1CONFIG0 */

#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_SU0_MASK (0xF000u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_SU0_SHIFT (0x000Cu)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_SU0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_STROBE_MASK (0x0FC0u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_STROBE_SHIFT (0x0006u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_STROBE_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_HOLD_MASK (0x003Cu)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_HOLD_SHIFT (0x0002u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_R_HOLD_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS1CONFIG0_TA_MASK (0x0003u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_TA_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS1CONFIG0_TA_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1CONFIG0_RESETVAL (0x0044u)

/* LCDLIDDCS1CONFIG1 */

#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_SU_MASK (0xF800u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_SU_SHIFT (0x000Bu)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_SU_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_STROBE_MASK (0x07E0u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_STROBE_SHIFT (0x0005u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_STROBE_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_HOLD_MASK (0x001Eu)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_HOLD_SHIFT (0x0001u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_W_HOLD_RESETVAL (0x0001u)

#define CSL_LCDC_LCDLIDDCS1CONFIG1_R_SU1_MASK (0x0001u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_R_SU1_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS1CONFIG1_R_SU1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1CONFIG1_RESETVAL (0x0022u)

/* LCDLIDDCS1ADDR */

#define CSL_LCDC_LCDLIDDCS1ADDR_ADR_INDX_MASK (0xFFFFu)
#define CSL_LCDC_LCDLIDDCS1ADDR_ADR_INDX_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS1ADDR_ADR_INDX_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1ADDR_RESETVAL (0x0000u)

/* LCDLIDDCS1DATA */

#define CSL_LCDC_LCDLIDDCS1DATA_DATA_MASK (0xFFFFu)
#define CSL_LCDC_LCDLIDDCS1DATA_DATA_SHIFT (0x0000u)
#define CSL_LCDC_LCDLIDDCS1DATA_DATA_RESETVAL (0x0000u)

#define CSL_LCDC_LCDLIDDCS1DATA_RESETVAL (0x0000u)

/* LCDDMACR */


#define CSL_LCDC_LCDDMACR_BURST_SIZE_MASK (0x0070u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_SHIFT (0x0004u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_RESETVAL (0x0000u)
/*----BURST_SIZE Tokens----*/
#define CSL_LCDC_LCDDMACR_BURST_SIZE_BSIZE1 (0x0000u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_BSIZE2 (0x0001u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_BSIZE4 (0x0002u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_BSIZE8 (0x0003u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_BSIZE16 (0x0004u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_RES1 (0x0005u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_RES2 (0x0006u)
#define CSL_LCDC_LCDDMACR_BURST_SIZE_RES7 (0x0007u)


#define CSL_LCDC_LCDDMACR_EOF_INTEN_MASK (0x0004u)
#define CSL_LCDC_LCDDMACR_EOF_INTEN_SHIFT (0x0002u)
#define CSL_LCDC_LCDDMACR_EOF_INTEN_RESETVAL (0x0000u)
/*----EOF_INTEN Tokens----*/
#define CSL_LCDC_LCDDMACR_EOF_INTEN_DISABLED (0x0000u)
#define CSL_LCDC_LCDDMACR_EOF_INTEN_ENABLED (0x0001u)

#define CSL_LCDC_LCDDMACR_BIGENDIAN_MASK (0x0002u)
#define CSL_LCDC_LCDDMACR_BIGENDIAN_SHIFT (0x0001u)
#define CSL_LCDC_LCDDMACR_BIGENDIAN_RESETVAL (0x0000u)
/*----BIGENDIAN Tokens----*/
#define CSL_LCDC_LCDDMACR_BIGENDIAN_DISABLED (0x0000u)
#define CSL_LCDC_LCDDMACR_BIGENDIAN_ENABLED (0x0001u)

#define CSL_LCDC_LCDDMACR_FRAME_MODE_MASK (0x0001u)
#define CSL_LCDC_LCDDMACR_FRAME_MODE_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMACR_FRAME_MODE_RESETVAL (0x0000u)
/*----FRAME_MODE Tokens----*/
#define CSL_LCDC_LCDDMACR_FRAME_MODE_ONE (0x0000u)
#define CSL_LCDC_LCDDMACR_FRAME_MODE_TWO (0x0001u)

#define CSL_LCDC_LCDDMACR_RESETVAL       (0x0000u)

/* LCDDMAFB0BAR0 */

#define CSL_LCDC_LCDDMAFB0BAR0_FB0_BASE0_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB0BAR0_FB0_BASE0_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB0BAR0_FB0_BASE0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB0BAR0_RESETVAL  (0x0000u)

/* LCDDMAFB0BAR1 */

#define CSL_LCDC_LCDDMAFB0BAR1_FB0_BASE1_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB0BAR1_FB0_BASE1_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB0BAR1_FB0_BASE1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB0BAR1_RESETVAL  (0x0000u)

/* LCDDMAFB0CAR0 */

#define CSL_LCDC_LCDDMAFB0CAR0_FB0_CEIL0_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB0CAR0_FB0_CEIL0_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB0CAR0_FB0_CEIL0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB0CAR0_RESETVAL  (0x0000u)

/* LCDDMAFB0CAR1 */

#define CSL_LCDC_LCDDMAFB0CAR1_FB0_CEIL1_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB0CAR1_FB0_CEIL1_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB0CAR1_FB0_CEIL1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB0CAR1_RESETVAL  (0x0000u)

/* LCDDMAFB1BAR0 */

#define CSL_LCDC_LCDDMAFB1BAR0_FB1_BASE0_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB1BAR0_FB1_BASE0_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB1BAR0_FB1_BASE0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB1BAR0_RESETVAL  (0x0000u)

/* LCDDMAFB1BAR1 */

#define CSL_LCDC_LCDDMAFB1BAR1_FB1_BASE1_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB1BAR1_FB1_BASE1_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB1BAR1_FB1_BASE1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB1BAR1_RESETVAL  (0x0000u)

/* LCDDMAFB1CAR0 */

#define CSL_LCDC_LCDDMAFB1CAR0_FB1_CEIL0_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB1CAR0_FB1_CEIL0_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB1CAR0_FB1_CEIL0_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB1CAR0_RESETVAL  (0x0000u)

/* LCDDMAFB1CAR1 */

#define CSL_LCDC_LCDDMAFB1CAR1_FB1_CEIL1_MASK (0xFFFFu)
#define CSL_LCDC_LCDDMAFB1CAR1_FB1_CEIL1_SHIFT (0x0000u)
#define CSL_LCDC_LCDDMAFB1CAR1_FB1_CEIL1_RESETVAL (0x0000u)

#define CSL_LCDC_LCDDMAFB1CAR1_RESETVAL  (0x0000u)

#endif
