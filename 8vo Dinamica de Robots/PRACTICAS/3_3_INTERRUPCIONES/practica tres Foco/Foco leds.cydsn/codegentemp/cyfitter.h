/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* LCD */
#define LCD_LCDPort__0__INTTYPE CYREG_PICU12_INTTYPE0
#define LCD_LCDPort__0__MASK 0x01u
#define LCD_LCDPort__0__PC CYREG_PRT12_PC0
#define LCD_LCDPort__0__PORT 12u
#define LCD_LCDPort__0__SHIFT 0u
#define LCD_LCDPort__1__INTTYPE CYREG_PICU12_INTTYPE1
#define LCD_LCDPort__1__MASK 0x02u
#define LCD_LCDPort__1__PC CYREG_PRT12_PC1
#define LCD_LCDPort__1__PORT 12u
#define LCD_LCDPort__1__SHIFT 1u
#define LCD_LCDPort__2__INTTYPE CYREG_PICU12_INTTYPE2
#define LCD_LCDPort__2__MASK 0x04u
#define LCD_LCDPort__2__PC CYREG_PRT12_PC2
#define LCD_LCDPort__2__PORT 12u
#define LCD_LCDPort__2__SHIFT 2u
#define LCD_LCDPort__3__INTTYPE CYREG_PICU12_INTTYPE3
#define LCD_LCDPort__3__MASK 0x08u
#define LCD_LCDPort__3__PC CYREG_PRT12_PC3
#define LCD_LCDPort__3__PORT 12u
#define LCD_LCDPort__3__SHIFT 3u
#define LCD_LCDPort__4__INTTYPE CYREG_PICU12_INTTYPE4
#define LCD_LCDPort__4__MASK 0x10u
#define LCD_LCDPort__4__PC CYREG_PRT12_PC4
#define LCD_LCDPort__4__PORT 12u
#define LCD_LCDPort__4__SHIFT 4u
#define LCD_LCDPort__5__INTTYPE CYREG_PICU12_INTTYPE5
#define LCD_LCDPort__5__MASK 0x20u
#define LCD_LCDPort__5__PC CYREG_PRT12_PC5
#define LCD_LCDPort__5__PORT 12u
#define LCD_LCDPort__5__SHIFT 5u
#define LCD_LCDPort__6__INTTYPE CYREG_PICU12_INTTYPE6
#define LCD_LCDPort__6__MASK 0x40u
#define LCD_LCDPort__6__PC CYREG_PRT12_PC6
#define LCD_LCDPort__6__PORT 12u
#define LCD_LCDPort__6__SHIFT 6u
#define LCD_LCDPort__AG CYREG_PRT12_AG
#define LCD_LCDPort__BIE CYREG_PRT12_BIE
#define LCD_LCDPort__BIT_MASK CYREG_PRT12_BIT_MASK
#define LCD_LCDPort__BYP CYREG_PRT12_BYP
#define LCD_LCDPort__DM0 CYREG_PRT12_DM0
#define LCD_LCDPort__DM1 CYREG_PRT12_DM1
#define LCD_LCDPort__DM2 CYREG_PRT12_DM2
#define LCD_LCDPort__DR CYREG_PRT12_DR
#define LCD_LCDPort__INP_DIS CYREG_PRT12_INP_DIS
#define LCD_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU12_BASE
#define LCD_LCDPort__MASK 0x7Fu
#define LCD_LCDPort__PORT 12u
#define LCD_LCDPort__PRT CYREG_PRT12_PRT
#define LCD_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define LCD_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define LCD_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define LCD_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define LCD_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define LCD_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define LCD_LCDPort__PS CYREG_PRT12_PS
#define LCD_LCDPort__SHIFT 0u
#define LCD_LCDPort__SIO_CFG CYREG_PRT12_SIO_CFG
#define LCD_LCDPort__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define LCD_LCDPort__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define LCD_LCDPort__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define LCD_LCDPort__SLW CYREG_PRT12_SLW

/* Sw1 */
#define Sw1__0__INTTYPE CYREG_PICU2_INTTYPE2
#define Sw1__0__MASK 0x04u
#define Sw1__0__PC CYREG_PRT2_PC2
#define Sw1__0__PORT 2u
#define Sw1__0__SHIFT 2u
#define Sw1__AG CYREG_PRT2_AG
#define Sw1__AMUX CYREG_PRT2_AMUX
#define Sw1__BIE CYREG_PRT2_BIE
#define Sw1__BIT_MASK CYREG_PRT2_BIT_MASK
#define Sw1__BYP CYREG_PRT2_BYP
#define Sw1__CTL CYREG_PRT2_CTL
#define Sw1__DM0 CYREG_PRT2_DM0
#define Sw1__DM1 CYREG_PRT2_DM1
#define Sw1__DM2 CYREG_PRT2_DM2
#define Sw1__DR CYREG_PRT2_DR
#define Sw1__INP_DIS CYREG_PRT2_INP_DIS
#define Sw1__INTSTAT CYREG_PICU2_INTSTAT
#define Sw1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Sw1__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Sw1__LCD_EN CYREG_PRT2_LCD_EN
#define Sw1__MASK 0x04u
#define Sw1__PORT 2u
#define Sw1__PRT CYREG_PRT2_PRT
#define Sw1__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Sw1__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Sw1__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Sw1__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Sw1__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Sw1__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Sw1__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Sw1__PS CYREG_PRT2_PS
#define Sw1__SHIFT 2u
#define Sw1__SLW CYREG_PRT2_SLW
#define Sw1__SNAP CYREG_PICU2_SNAP

/* FOCO */
#define FOCO__0__INTTYPE CYREG_PICU2_INTTYPE0
#define FOCO__0__MASK 0x01u
#define FOCO__0__PC CYREG_PRT2_PC0
#define FOCO__0__PORT 2u
#define FOCO__0__SHIFT 0u
#define FOCO__AG CYREG_PRT2_AG
#define FOCO__AMUX CYREG_PRT2_AMUX
#define FOCO__BIE CYREG_PRT2_BIE
#define FOCO__BIT_MASK CYREG_PRT2_BIT_MASK
#define FOCO__BYP CYREG_PRT2_BYP
#define FOCO__CTL CYREG_PRT2_CTL
#define FOCO__DM0 CYREG_PRT2_DM0
#define FOCO__DM1 CYREG_PRT2_DM1
#define FOCO__DM2 CYREG_PRT2_DM2
#define FOCO__DR CYREG_PRT2_DR
#define FOCO__INP_DIS CYREG_PRT2_INP_DIS
#define FOCO__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define FOCO__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define FOCO__LCD_EN CYREG_PRT2_LCD_EN
#define FOCO__MASK 0x01u
#define FOCO__PORT 2u
#define FOCO__PRT CYREG_PRT2_PRT
#define FOCO__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define FOCO__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define FOCO__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define FOCO__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define FOCO__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define FOCO__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define FOCO__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define FOCO__PS CYREG_PRT2_PS
#define FOCO__SHIFT 0u
#define FOCO__SLW CYREG_PRT2_SLW

/* LED1 */
#define LED1__0__INTTYPE CYREG_PICU3_INTTYPE0
#define LED1__0__MASK 0x01u
#define LED1__0__PC CYREG_PRT3_PC0
#define LED1__0__PORT 3u
#define LED1__0__SHIFT 0u
#define LED1__AG CYREG_PRT3_AG
#define LED1__AMUX CYREG_PRT3_AMUX
#define LED1__BIE CYREG_PRT3_BIE
#define LED1__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED1__BYP CYREG_PRT3_BYP
#define LED1__CTL CYREG_PRT3_CTL
#define LED1__DM0 CYREG_PRT3_DM0
#define LED1__DM1 CYREG_PRT3_DM1
#define LED1__DM2 CYREG_PRT3_DM2
#define LED1__DR CYREG_PRT3_DR
#define LED1__INP_DIS CYREG_PRT3_INP_DIS
#define LED1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED1__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED1__LCD_EN CYREG_PRT3_LCD_EN
#define LED1__MASK 0x01u
#define LED1__PORT 3u
#define LED1__PRT CYREG_PRT3_PRT
#define LED1__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED1__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED1__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED1__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED1__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED1__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED1__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED1__PS CYREG_PRT3_PS
#define LED1__SHIFT 0u
#define LED1__SLW CYREG_PRT3_SLW

/* LED2 */
#define LED2__0__INTTYPE CYREG_PICU3_INTTYPE1
#define LED2__0__MASK 0x02u
#define LED2__0__PC CYREG_PRT3_PC1
#define LED2__0__PORT 3u
#define LED2__0__SHIFT 1u
#define LED2__AG CYREG_PRT3_AG
#define LED2__AMUX CYREG_PRT3_AMUX
#define LED2__BIE CYREG_PRT3_BIE
#define LED2__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED2__BYP CYREG_PRT3_BYP
#define LED2__CTL CYREG_PRT3_CTL
#define LED2__DM0 CYREG_PRT3_DM0
#define LED2__DM1 CYREG_PRT3_DM1
#define LED2__DM2 CYREG_PRT3_DM2
#define LED2__DR CYREG_PRT3_DR
#define LED2__INP_DIS CYREG_PRT3_INP_DIS
#define LED2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED2__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED2__LCD_EN CYREG_PRT3_LCD_EN
#define LED2__MASK 0x02u
#define LED2__PORT 3u
#define LED2__PRT CYREG_PRT3_PRT
#define LED2__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED2__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED2__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED2__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED2__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED2__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED2__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED2__PS CYREG_PRT3_PS
#define LED2__SHIFT 1u
#define LED2__SLW CYREG_PRT3_SLW

/* LED3 */
#define LED3__0__INTTYPE CYREG_PICU3_INTTYPE3
#define LED3__0__MASK 0x08u
#define LED3__0__PC CYREG_PRT3_PC3
#define LED3__0__PORT 3u
#define LED3__0__SHIFT 3u
#define LED3__AG CYREG_PRT3_AG
#define LED3__AMUX CYREG_PRT3_AMUX
#define LED3__BIE CYREG_PRT3_BIE
#define LED3__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED3__BYP CYREG_PRT3_BYP
#define LED3__CTL CYREG_PRT3_CTL
#define LED3__DM0 CYREG_PRT3_DM0
#define LED3__DM1 CYREG_PRT3_DM1
#define LED3__DM2 CYREG_PRT3_DM2
#define LED3__DR CYREG_PRT3_DR
#define LED3__INP_DIS CYREG_PRT3_INP_DIS
#define LED3__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED3__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED3__LCD_EN CYREG_PRT3_LCD_EN
#define LED3__MASK 0x08u
#define LED3__PORT 3u
#define LED3__PRT CYREG_PRT3_PRT
#define LED3__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED3__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED3__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED3__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED3__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED3__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED3__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED3__PS CYREG_PRT3_PS
#define LED3__SHIFT 3u
#define LED3__SLW CYREG_PRT3_SLW

/* LED4 */
#define LED4__0__INTTYPE CYREG_PICU3_INTTYPE4
#define LED4__0__MASK 0x10u
#define LED4__0__PC CYREG_PRT3_PC4
#define LED4__0__PORT 3u
#define LED4__0__SHIFT 4u
#define LED4__AG CYREG_PRT3_AG
#define LED4__AMUX CYREG_PRT3_AMUX
#define LED4__BIE CYREG_PRT3_BIE
#define LED4__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED4__BYP CYREG_PRT3_BYP
#define LED4__CTL CYREG_PRT3_CTL
#define LED4__DM0 CYREG_PRT3_DM0
#define LED4__DM1 CYREG_PRT3_DM1
#define LED4__DM2 CYREG_PRT3_DM2
#define LED4__DR CYREG_PRT3_DR
#define LED4__INP_DIS CYREG_PRT3_INP_DIS
#define LED4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED4__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED4__LCD_EN CYREG_PRT3_LCD_EN
#define LED4__MASK 0x10u
#define LED4__PORT 3u
#define LED4__PRT CYREG_PRT3_PRT
#define LED4__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED4__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED4__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED4__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED4__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED4__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED4__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED4__PS CYREG_PRT3_PS
#define LED4__SHIFT 4u
#define LED4__SLW CYREG_PRT3_SLW

/* LED5 */
#define LED5__0__INTTYPE CYREG_PICU3_INTTYPE5
#define LED5__0__MASK 0x20u
#define LED5__0__PC CYREG_PRT3_PC5
#define LED5__0__PORT 3u
#define LED5__0__SHIFT 5u
#define LED5__AG CYREG_PRT3_AG
#define LED5__AMUX CYREG_PRT3_AMUX
#define LED5__BIE CYREG_PRT3_BIE
#define LED5__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED5__BYP CYREG_PRT3_BYP
#define LED5__CTL CYREG_PRT3_CTL
#define LED5__DM0 CYREG_PRT3_DM0
#define LED5__DM1 CYREG_PRT3_DM1
#define LED5__DM2 CYREG_PRT3_DM2
#define LED5__DR CYREG_PRT3_DR
#define LED5__INP_DIS CYREG_PRT3_INP_DIS
#define LED5__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED5__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED5__LCD_EN CYREG_PRT3_LCD_EN
#define LED5__MASK 0x20u
#define LED5__PORT 3u
#define LED5__PRT CYREG_PRT3_PRT
#define LED5__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED5__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED5__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED5__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED5__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED5__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED5__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED5__PS CYREG_PRT3_PS
#define LED5__SHIFT 5u
#define LED5__SLW CYREG_PRT3_SLW

/* LED6 */
#define LED6__0__INTTYPE CYREG_PICU3_INTTYPE6
#define LED6__0__MASK 0x40u
#define LED6__0__PC CYREG_PRT3_PC6
#define LED6__0__PORT 3u
#define LED6__0__SHIFT 6u
#define LED6__AG CYREG_PRT3_AG
#define LED6__AMUX CYREG_PRT3_AMUX
#define LED6__BIE CYREG_PRT3_BIE
#define LED6__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED6__BYP CYREG_PRT3_BYP
#define LED6__CTL CYREG_PRT3_CTL
#define LED6__DM0 CYREG_PRT3_DM0
#define LED6__DM1 CYREG_PRT3_DM1
#define LED6__DM2 CYREG_PRT3_DM2
#define LED6__DR CYREG_PRT3_DR
#define LED6__INP_DIS CYREG_PRT3_INP_DIS
#define LED6__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED6__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED6__LCD_EN CYREG_PRT3_LCD_EN
#define LED6__MASK 0x40u
#define LED6__PORT 3u
#define LED6__PRT CYREG_PRT3_PRT
#define LED6__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED6__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED6__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED6__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED6__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED6__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED6__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED6__PS CYREG_PRT3_PS
#define LED6__SHIFT 6u
#define LED6__SLW CYREG_PRT3_SLW

/* LED7 */
#define LED7__0__INTTYPE CYREG_PICU3_INTTYPE7
#define LED7__0__MASK 0x80u
#define LED7__0__PC CYREG_PRT3_PC7
#define LED7__0__PORT 3u
#define LED7__0__SHIFT 7u
#define LED7__AG CYREG_PRT3_AG
#define LED7__AMUX CYREG_PRT3_AMUX
#define LED7__BIE CYREG_PRT3_BIE
#define LED7__BIT_MASK CYREG_PRT3_BIT_MASK
#define LED7__BYP CYREG_PRT3_BYP
#define LED7__CTL CYREG_PRT3_CTL
#define LED7__DM0 CYREG_PRT3_DM0
#define LED7__DM1 CYREG_PRT3_DM1
#define LED7__DM2 CYREG_PRT3_DM2
#define LED7__DR CYREG_PRT3_DR
#define LED7__INP_DIS CYREG_PRT3_INP_DIS
#define LED7__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LED7__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LED7__LCD_EN CYREG_PRT3_LCD_EN
#define LED7__MASK 0x80u
#define LED7__PORT 3u
#define LED7__PRT CYREG_PRT3_PRT
#define LED7__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LED7__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LED7__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LED7__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LED7__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LED7__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LED7__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LED7__PS CYREG_PRT3_PS
#define LED7__SHIFT 7u
#define LED7__SLW CYREG_PRT3_SLW

/* LED8 */
#define LED8__0__INTTYPE CYREG_PICU15_INTTYPE0
#define LED8__0__MASK 0x01u
#define LED8__0__PC CYREG_IO_PC_PRT15_PC0
#define LED8__0__PORT 15u
#define LED8__0__SHIFT 0u
#define LED8__AG CYREG_PRT15_AG
#define LED8__AMUX CYREG_PRT15_AMUX
#define LED8__BIE CYREG_PRT15_BIE
#define LED8__BIT_MASK CYREG_PRT15_BIT_MASK
#define LED8__BYP CYREG_PRT15_BYP
#define LED8__CTL CYREG_PRT15_CTL
#define LED8__DM0 CYREG_PRT15_DM0
#define LED8__DM1 CYREG_PRT15_DM1
#define LED8__DM2 CYREG_PRT15_DM2
#define LED8__DR CYREG_PRT15_DR
#define LED8__INP_DIS CYREG_PRT15_INP_DIS
#define LED8__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define LED8__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define LED8__LCD_EN CYREG_PRT15_LCD_EN
#define LED8__MASK 0x01u
#define LED8__PORT 15u
#define LED8__PRT CYREG_PRT15_PRT
#define LED8__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define LED8__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define LED8__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define LED8__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define LED8__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define LED8__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define LED8__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define LED8__PS CYREG_PRT15_PS
#define LED8__SHIFT 0u
#define LED8__SLW CYREG_PRT15_SLW

/* LED9 */
#define LED9__0__INTTYPE CYREG_PICU15_INTTYPE1
#define LED9__0__MASK 0x02u
#define LED9__0__PC CYREG_IO_PC_PRT15_PC1
#define LED9__0__PORT 15u
#define LED9__0__SHIFT 1u
#define LED9__AG CYREG_PRT15_AG
#define LED9__AMUX CYREG_PRT15_AMUX
#define LED9__BIE CYREG_PRT15_BIE
#define LED9__BIT_MASK CYREG_PRT15_BIT_MASK
#define LED9__BYP CYREG_PRT15_BYP
#define LED9__CTL CYREG_PRT15_CTL
#define LED9__DM0 CYREG_PRT15_DM0
#define LED9__DM1 CYREG_PRT15_DM1
#define LED9__DM2 CYREG_PRT15_DM2
#define LED9__DR CYREG_PRT15_DR
#define LED9__INP_DIS CYREG_PRT15_INP_DIS
#define LED9__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define LED9__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define LED9__LCD_EN CYREG_PRT15_LCD_EN
#define LED9__MASK 0x02u
#define LED9__PORT 15u
#define LED9__PRT CYREG_PRT15_PRT
#define LED9__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define LED9__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define LED9__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define LED9__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define LED9__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define LED9__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define LED9__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define LED9__PS CYREG_PRT15_PS
#define LED9__SHIFT 1u
#define LED9__SLW CYREG_PRT15_SLW

/* LED10 */
#define LED10__0__INTTYPE CYREG_PICU15_INTTYPE2
#define LED10__0__MASK 0x04u
#define LED10__0__PC CYREG_IO_PC_PRT15_PC2
#define LED10__0__PORT 15u
#define LED10__0__SHIFT 2u
#define LED10__AG CYREG_PRT15_AG
#define LED10__AMUX CYREG_PRT15_AMUX
#define LED10__BIE CYREG_PRT15_BIE
#define LED10__BIT_MASK CYREG_PRT15_BIT_MASK
#define LED10__BYP CYREG_PRT15_BYP
#define LED10__CTL CYREG_PRT15_CTL
#define LED10__DM0 CYREG_PRT15_DM0
#define LED10__DM1 CYREG_PRT15_DM1
#define LED10__DM2 CYREG_PRT15_DM2
#define LED10__DR CYREG_PRT15_DR
#define LED10__INP_DIS CYREG_PRT15_INP_DIS
#define LED10__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define LED10__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define LED10__LCD_EN CYREG_PRT15_LCD_EN
#define LED10__MASK 0x04u
#define LED10__PORT 15u
#define LED10__PRT CYREG_PRT15_PRT
#define LED10__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define LED10__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define LED10__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define LED10__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define LED10__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define LED10__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define LED10__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define LED10__PS CYREG_PRT15_PS
#define LED10__SHIFT 2u
#define LED10__SLW CYREG_PRT15_SLW

/* IRQ_Sw */
#define IRQ_Sw__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define IRQ_Sw__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define IRQ_Sw__INTC_MASK 0x40u
#define IRQ_Sw__INTC_NUMBER 6u
#define IRQ_Sw__INTC_PRIOR_NUM 7u
#define IRQ_Sw__INTC_PRIOR_REG CYREG_NVIC_PRI_6
#define IRQ_Sw__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define IRQ_Sw__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Foco leds"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
