/*
** ###################################################################
**     Processors:          MIMXRT1011CAE4A
**                          MIMXRT1011DAE5A
**
**     Compilers:           Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    IMXRT1010RM Rev.1, 10/2021 | IMXRT1010SRM Rev.0
**     Version:             rev. 1.2, 2021-08-10
**     Build:               b211108
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMXRT1011
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2021 NXP
**     All rights reserved.
**
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2019-02-14)
**         Initial version.
**     - rev. 1.0 (2019-08-01)
**         Rev.0 Header GA
**     - rev. 1.1 (2019-08-06)
**         Update header files to align with IMXRT1010RM Rev.B.
**     - rev. 1.2 (2021-08-10)
**         Update header files to align with IMXRT1010RM Rev.1.
**
** ###################################################################
*/

/*!
 * @file MIMXRT1011.h
 * @version 1.2
 * @date 2021-08-10
 * @brief CMSIS Peripheral Access Layer for MIMXRT1011
 *
 * CMSIS Peripheral Access Layer for MIMXRT1011
 */

#ifndef _MIMXRT1011_H_
#define _MIMXRT1011_H_                           /**< Symbol preventing repeated inclusion */

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Register_Masks ADC Register Masks
 * @{
 */

/*! @name HC - Control register for hardware triggers */
/*! @{ */

#define ADC_HC_ADCH_MASK                         (0x1FU)
#define ADC_HC_ADCH_SHIFT                        (0U)
/*! ADCH - Input Channel Select
 *  0b10000..External channel selection from ADC_ETC
 *  0b11000..Reserved.
 *  0b11001..VREFSH = internal channel, for ADC self-test, hard connected to VRH internally
 *  0b11010..Reserved.
 *  0b11011..Reserved.
 *  0b11111..Conversion Disabled. Hardware Triggers will not initiate any conversion.
 */
#define ADC_HC_ADCH(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_HC_ADCH_SHIFT)) & ADC_HC_ADCH_MASK)

#define ADC_HC_AIEN_MASK                         (0x80U)
#define ADC_HC_AIEN_SHIFT                        (7U)
/*! AIEN - Conversion Complete Interrupt Enable/Disable Control
 *  0b1..Conversion complete interrupt enabled
 *  0b0..Conversion complete interrupt disabled
 */
#define ADC_HC_AIEN(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_HC_AIEN_SHIFT)) & ADC_HC_AIEN_MASK)
/*! @} */

/* The count of ADC_HC */
#define ADC_HC_COUNT                             (8U)

/*! @name HS - Status register for HW triggers */
/*! @{ */

#define ADC_HS_COCO0_MASK                        (0x1U)
#define ADC_HS_COCO0_SHIFT                       (0U)
/*! COCO0 - Conversion Complete Flag
 */
#define ADC_HS_COCO0(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO0_SHIFT)) & ADC_HS_COCO0_MASK)

#define ADC_HS_COCO1_MASK                        (0x2U)
#define ADC_HS_COCO1_SHIFT                       (1U)
/*! COCO1 - Conversion Complete Flag
 */
#define ADC_HS_COCO1(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO1_SHIFT)) & ADC_HS_COCO1_MASK)

#define ADC_HS_COCO2_MASK                        (0x4U)
#define ADC_HS_COCO2_SHIFT                       (2U)
#define ADC_HS_COCO2(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO2_SHIFT)) & ADC_HS_COCO2_MASK)

#define ADC_HS_COCO3_MASK                        (0x8U)
#define ADC_HS_COCO3_SHIFT                       (3U)
#define ADC_HS_COCO3(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO3_SHIFT)) & ADC_HS_COCO3_MASK)

#define ADC_HS_COCO4_MASK                        (0x10U)
#define ADC_HS_COCO4_SHIFT                       (4U)
#define ADC_HS_COCO4(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO4_SHIFT)) & ADC_HS_COCO4_MASK)

#define ADC_HS_COCO5_MASK                        (0x20U)
#define ADC_HS_COCO5_SHIFT                       (5U)
#define ADC_HS_COCO5(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO5_SHIFT)) & ADC_HS_COCO5_MASK)

#define ADC_HS_COCO6_MASK                        (0x40U)
#define ADC_HS_COCO6_SHIFT                       (6U)
#define ADC_HS_COCO6(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO6_SHIFT)) & ADC_HS_COCO6_MASK)

#define ADC_HS_COCO7_MASK                        (0x80U)
#define ADC_HS_COCO7_SHIFT                       (7U)
#define ADC_HS_COCO7(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_HS_COCO7_SHIFT)) & ADC_HS_COCO7_MASK)
/*! @} */

/*! @name R - Data result register for HW triggers */
/*! @{ */

#define ADC_R_CDATA_MASK                         (0xFFFU)
#define ADC_R_CDATA_SHIFT                        (0U)
/*! CDATA - Data (result of an ADC conversion)
 */
#define ADC_R_CDATA(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_R_CDATA_SHIFT)) & ADC_R_CDATA_MASK)
/*! @} */

/* The count of ADC_R */
#define ADC_R_COUNT                              (8U)

/*! @name CFG - Configuration register */
/*! @{ */

#define ADC_CFG_ADICLK_MASK                      (0x3U)
#define ADC_CFG_ADICLK_SHIFT                     (0U)
/*! ADICLK - Input Clock Select
 *  0b00..IPG clock
 *  0b01..IPG clock divided by 2
 *  0b10..Alternate clock (ALTCLK)
 *  0b11..Asynchronous clock (ADACK)
 */
#define ADC_CFG_ADICLK(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADICLK_SHIFT)) & ADC_CFG_ADICLK_MASK)

#define ADC_CFG_MODE_MASK                        (0xCU)
#define ADC_CFG_MODE_SHIFT                       (2U)
/*! MODE - Conversion Mode Selection
 *  0b00..8-bit conversion
 *  0b01..10-bit conversion
 *  0b10..12-bit conversion
 *  0b11..Reserved
 */
#define ADC_CFG_MODE(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CFG_MODE_SHIFT)) & ADC_CFG_MODE_MASK)

#define ADC_CFG_ADLSMP_MASK                      (0x10U)
#define ADC_CFG_ADLSMP_SHIFT                     (4U)
/*! ADLSMP - Long Sample Time Configuration
 *  0b0..Short sample mode.
 *  0b1..Long sample mode.
 */
#define ADC_CFG_ADLSMP(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADLSMP_SHIFT)) & ADC_CFG_ADLSMP_MASK)

#define ADC_CFG_ADIV_MASK                        (0x60U)
#define ADC_CFG_ADIV_SHIFT                       (5U)
/*! ADIV - Clock Divide Select
 *  0b00..Input clock
 *  0b01..Input clock / 2
 *  0b10..Input clock / 4
 *  0b11..Input clock / 8
 */
#define ADC_CFG_ADIV(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADIV_SHIFT)) & ADC_CFG_ADIV_MASK)

#define ADC_CFG_ADLPC_MASK                       (0x80U)
#define ADC_CFG_ADLPC_SHIFT                      (7U)
/*! ADLPC - Low-Power Configuration
 *  0b0..ADC hard block not in low power mode.
 *  0b1..ADC hard block in low power mode.
 */
#define ADC_CFG_ADLPC(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADLPC_SHIFT)) & ADC_CFG_ADLPC_MASK)

#define ADC_CFG_ADSTS_MASK                       (0x300U)
#define ADC_CFG_ADSTS_SHIFT                      (8U)
/*! ADSTS
 *  0b00..Sample period (ADC clocks) = 3 if ADLSMP=0b Sample period (ADC clocks) = 13 if ADLSMP=1b
 *  0b01..Sample period (ADC clocks) = 5 if ADLSMP=0b Sample period (ADC clocks) = 17 if ADLSMP=1b
 *  0b10..Sample period (ADC clocks) = 7 if ADLSMP=0b Sample period (ADC clocks) = 21 if ADLSMP=1b
 *  0b11..Sample period (ADC clocks) = 9 if ADLSMP=0b Sample period (ADC clocks) = 25 if ADLSMP=1b
 */
#define ADC_CFG_ADSTS(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADSTS_SHIFT)) & ADC_CFG_ADSTS_MASK)

#define ADC_CFG_ADHSC_MASK                       (0x400U)
#define ADC_CFG_ADHSC_SHIFT                      (10U)
/*! ADHSC - High Speed Configuration
 *  0b0..Normal conversion selected.
 *  0b1..High speed conversion selected.
 */
#define ADC_CFG_ADHSC(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADHSC_SHIFT)) & ADC_CFG_ADHSC_MASK)

#define ADC_CFG_REFSEL_MASK                      (0x1800U)
#define ADC_CFG_REFSEL_SHIFT                     (11U)
/*! REFSEL - Voltage Reference Selection
 *  0b00..Selects VREFH/VREFL as reference voltage.
 *  0b01..Reserved
 *  0b10..Reserved
 *  0b11..Reserved
 */
#define ADC_CFG_REFSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_REFSEL_SHIFT)) & ADC_CFG_REFSEL_MASK)

#define ADC_CFG_ADTRG_MASK                       (0x2000U)
#define ADC_CFG_ADTRG_SHIFT                      (13U)
/*! ADTRG - Conversion Trigger Select
 *  0b0..Software trigger selected
 *  0b1..Hardware trigger selected
 */
#define ADC_CFG_ADTRG(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_ADTRG_SHIFT)) & ADC_CFG_ADTRG_MASK)

#define ADC_CFG_AVGS_MASK                        (0xC000U)
#define ADC_CFG_AVGS_SHIFT                       (14U)
/*! AVGS - Hardware Average select
 *  0b00..4 samples averaged
 *  0b01..8 samples averaged
 *  0b10..16 samples averaged
 *  0b11..32 samples averaged
 */
#define ADC_CFG_AVGS(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CFG_AVGS_SHIFT)) & ADC_CFG_AVGS_MASK)

#define ADC_CFG_OVWREN_MASK                      (0x10000U)
#define ADC_CFG_OVWREN_SHIFT                     (16U)
/*! OVWREN - Data Overwrite Enable
 *  0b1..Enable the overwriting.
 *  0b0..Disable the overwriting. Existing Data in Data result register will not be overwritten by subsequent converted data.
 */
#define ADC_CFG_OVWREN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_OVWREN_SHIFT)) & ADC_CFG_OVWREN_MASK)
/*! @} */

/*! @name GC - General control register */
/*! @{ */

#define ADC_GC_ADACKEN_MASK                      (0x1U)
#define ADC_GC_ADACKEN_SHIFT                     (0U)
/*! ADACKEN - Asynchronous clock output enable
 *  0b0..Asynchronous clock output disabled; Asynchronous clock only enabled if selected by ADICLK and a conversion is active.
 *  0b1..Asynchronous clock and clock output enabled regardless of the state of the ADC
 */
#define ADC_GC_ADACKEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_GC_ADACKEN_SHIFT)) & ADC_GC_ADACKEN_MASK)

#define ADC_GC_DMAEN_MASK                        (0x2U)
#define ADC_GC_DMAEN_SHIFT                       (1U)
/*! DMAEN - DMA Enable
 *  0b0..DMA disabled (default)
 *  0b1..DMA enabled
 */
#define ADC_GC_DMAEN(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_GC_DMAEN_SHIFT)) & ADC_GC_DMAEN_MASK)

#define ADC_GC_ACREN_MASK                        (0x4U)
#define ADC_GC_ACREN_SHIFT                       (2U)
/*! ACREN - Compare Function Range Enable
 *  0b0..Range function disabled. Only the compare value 1 of ADC_CV register (CV1) is compared.
 *  0b1..Range function enabled. Both compare values of ADC_CV registers (CV1 and CV2) are compared.
 */
#define ADC_GC_ACREN(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_GC_ACREN_SHIFT)) & ADC_GC_ACREN_MASK)

#define ADC_GC_ACFGT_MASK                        (0x8U)
#define ADC_GC_ACFGT_SHIFT                       (3U)
/*! ACFGT - Compare Function Greater Than Enable
 *  0b0..Configures "Less Than Threshold, Outside Range Not Inclusive and Inside Range Not Inclusive"
 *       functionality based on the values placed in the ADC_CV register.
 *  0b1..Configures "Greater Than Or Equal To Threshold, Outside Range Inclusive and Inside Range Inclusive"
 *       functionality based on the values placed in the ADC_CV registers.
 */
#define ADC_GC_ACFGT(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_GC_ACFGT_SHIFT)) & ADC_GC_ACFGT_MASK)

#define ADC_GC_ACFE_MASK                         (0x10U)
#define ADC_GC_ACFE_SHIFT                        (4U)
/*! ACFE - Compare Function Enable
 *  0b0..Compare function disabled
 *  0b1..Compare function enabled
 */
#define ADC_GC_ACFE(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GC_ACFE_SHIFT)) & ADC_GC_ACFE_MASK)

#define ADC_GC_AVGE_MASK                         (0x20U)
#define ADC_GC_AVGE_SHIFT                        (5U)
/*! AVGE - Hardware average enable
 *  0b0..Hardware average function disabled
 *  0b1..Hardware average function enabled
 */
#define ADC_GC_AVGE(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GC_AVGE_SHIFT)) & ADC_GC_AVGE_MASK)

#define ADC_GC_ADCO_MASK                         (0x40U)
#define ADC_GC_ADCO_SHIFT                        (6U)
/*! ADCO - Continuous Conversion Enable
 *  0b0..One conversion or one set of conversions if the hardware average function is enabled (AVGE=1) after initiating a conversion.
 *  0b1..Continuous conversions or sets of conversions if the hardware average function is enabled (AVGE=1) after initiating a conversion.
 */
#define ADC_GC_ADCO(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GC_ADCO_SHIFT)) & ADC_GC_ADCO_MASK)

#define ADC_GC_CAL_MASK                          (0x80U)
#define ADC_GC_CAL_SHIFT                         (7U)
/*! CAL - Calibration
 */
#define ADC_GC_CAL(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_GC_CAL_SHIFT)) & ADC_GC_CAL_MASK)
/*! @} */

/*! @name GS - General status register */
/*! @{ */

#define ADC_GS_ADACT_MASK                        (0x1U)
#define ADC_GS_ADACT_SHIFT                       (0U)
/*! ADACT - Conversion Active
 *  0b0..Conversion not in progress.
 *  0b1..Conversion in progress.
 */
#define ADC_GS_ADACT(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_GS_ADACT_SHIFT)) & ADC_GS_ADACT_MASK)

#define ADC_GS_CALF_MASK                         (0x2U)
#define ADC_GS_CALF_SHIFT                        (1U)
/*! CALF - Calibration Failed Flag
 *  0b0..Calibration completed normally.
 *  0b1..Calibration failed. ADC accuracy specifications are not guaranteed.
 */
#define ADC_GS_CALF(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GS_CALF_SHIFT)) & ADC_GS_CALF_MASK)

#define ADC_GS_AWKST_MASK                        (0x4U)
#define ADC_GS_AWKST_SHIFT                       (2U)
/*! AWKST - Asynchronous wakeup interrupt status
 *  0b1..Asynchronous wake up interrupt occurred in stop mode.
 *  0b0..No asynchronous interrupt.
 */
#define ADC_GS_AWKST(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_GS_AWKST_SHIFT)) & ADC_GS_AWKST_MASK)
/*! @} */

/*! @name CV - Compare value register */
/*! @{ */

#define ADC_CV_CV1_MASK                          (0xFFFU)
#define ADC_CV_CV1_SHIFT                         (0U)
/*! CV1 - Compare Value 1
 */
#define ADC_CV_CV1(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CV1_SHIFT)) & ADC_CV_CV1_MASK)

#define ADC_CV_CV2_MASK                          (0xFFF0000U)
#define ADC_CV_CV2_SHIFT                         (16U)
/*! CV2 - Compare Value 2
 */
#define ADC_CV_CV2(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CV2_SHIFT)) & ADC_CV_CV2_MASK)
/*! @} */

/*! @name OFS - Offset correction value register */
/*! @{ */

#define ADC_OFS_OFS_MASK                         (0xFFFU)
#define ADC_OFS_OFS_SHIFT                        (0U)
/*! OFS - Offset value
 */
#define ADC_OFS_OFS(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_OFS_OFS_SHIFT)) & ADC_OFS_OFS_MASK)

#define ADC_OFS_SIGN_MASK                        (0x1000U)
#define ADC_OFS_SIGN_SHIFT                       (12U)
/*! SIGN - Sign bit
 *  0b0..The offset value is added with the raw result
 *  0b1..The offset value is subtracted from the raw converted value
 */
#define ADC_OFS_SIGN(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_OFS_SIGN_SHIFT)) & ADC_OFS_SIGN_MASK)
/*! @} */

/*! @name CAL - Calibration value register */
/*! @{ */

#define ADC_CAL_CAL_CODE_MASK                    (0xFU)
#define ADC_CAL_CAL_CODE_SHIFT                   (0U)
/*! CAL_CODE - Calibration Result Value
 */
#define ADC_CAL_CAL_CODE(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CAL_CAL_CODE_SHIFT)) & ADC_CAL_CAL_CODE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADC_Register_Masks */


 /* ----------------------------------------------------------------------------
   -- ADC_ETC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_ETC_Register_Masks ADC_ETC Register Masks
 * @{
 */

/*! @name CTRL - ADC_ETC Global Control Register */
/*! @{ */

#define ADC_ETC_CTRL_TRIG_ENABLE_MASK            (0xFFU)
#define ADC_ETC_CTRL_TRIG_ENABLE_SHIFT           (0U)
/*! TRIG_ENABLE
 *  0b00000000..disable all 8 external XBAR triggers.
 *  0b00000001..enable external XBAR trigger0.
 *  0b00000010..enable external XBAR trigger1.
 *  0b00000011..enable external XBAR trigger0 and trigger1.
 *  0b11111111..enable all 8 external XBAR triggers.
 */
#define ADC_ETC_CTRL_TRIG_ENABLE(x)              (((uint32_t)(((uint32_t)(x)) << ADC_ETC_CTRL_TRIG_ENABLE_SHIFT)) & ADC_ETC_CTRL_TRIG_ENABLE_MASK)

#define ADC_ETC_CTRL_PRE_DIVIDER_MASK            (0xFF0000U)
#define ADC_ETC_CTRL_PRE_DIVIDER_SHIFT           (16U)
#define ADC_ETC_CTRL_PRE_DIVIDER(x)              (((uint32_t)(((uint32_t)(x)) << ADC_ETC_CTRL_PRE_DIVIDER_SHIFT)) & ADC_ETC_CTRL_PRE_DIVIDER_MASK)

#define ADC_ETC_CTRL_DMA_MODE_SEL_MASK           (0x20000000U)
#define ADC_ETC_CTRL_DMA_MODE_SEL_SHIFT          (29U)
/*! DMA_MODE_SEL
 *  0b0..Trig DMA_REQ with latched signal, REQ will be cleared when ACK and source request cleared.
 *  0b1..Trig DMA_REQ with pulsed signal, REQ will be cleared by ACK only.
 */
#define ADC_ETC_CTRL_DMA_MODE_SEL(x)             (((uint32_t)(((uint32_t)(x)) << ADC_ETC_CTRL_DMA_MODE_SEL_SHIFT)) & ADC_ETC_CTRL_DMA_MODE_SEL_MASK)

#define ADC_ETC_CTRL_SOFTRST_MASK                (0x80000000U)
#define ADC_ETC_CTRL_SOFTRST_SHIFT               (31U)
/*! SOFTRST
 *  0b0..ADC_ETC works normally.
 *  0b1..All registers inside ADC_ETC will be reset to the default value.
 */
#define ADC_ETC_CTRL_SOFTRST(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_ETC_CTRL_SOFTRST_SHIFT)) & ADC_ETC_CTRL_SOFTRST_MASK)
/*! @} */

/*! @name DONE0_1_IRQ - ETC DONE0 and DONE1 IRQ State Register */
/*! @{ */

#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE0_MASK     (0x1U)
#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE0_SHIFT    (0U)
/*! TRIG0_DONE0
 *  0b0..No TRIG0_DONE0 interrupt detected
 *  0b1..TRIG0_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG0_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG0_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE0_MASK     (0x2U)
#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE0_SHIFT    (1U)
/*! TRIG1_DONE0
 *  0b0..No TRIG1_DONE0 interrupt detected
 *  0b1..TRIG1_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG1_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG1_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE0_MASK     (0x4U)
#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE0_SHIFT    (2U)
/*! TRIG2_DONE0
 *  0b0..No TRIG2_DONE0 interrupt detected
 *  0b1..TRIG2_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG2_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG2_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE0_MASK     (0x8U)
#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE0_SHIFT    (3U)
/*! TRIG3_DONE0
 *  0b0..No TRIG3_DONE0 interrupt detected
 *  0b1..TRIG3_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG3_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG3_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE0_MASK     (0x10U)
#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE0_SHIFT    (4U)
/*! TRIG4_DONE0
 *  0b0..No TRIG4_DONE0 interrupt detected
 *  0b1..TRIG4_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG4_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG4_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE0_MASK     (0x20U)
#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE0_SHIFT    (5U)
/*! TRIG5_DONE0
 *  0b0..No TRIG5_DONE0 interrupt detected
 *  0b1..TRIG5_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG5_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG5_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE0_MASK     (0x40U)
#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE0_SHIFT    (6U)
/*! TRIG6_DONE0
 *  0b0..No TRIG6_DONE0 interrupt detected
 *  0b1..TRIG6_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG6_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG6_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE0_MASK     (0x80U)
#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE0_SHIFT    (7U)
/*! TRIG7_DONE0
 *  0b0..No TRIG7_DONE0 interrupt detected
 *  0b1..TRIG7_DONE0 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE0(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG7_DONE0_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG7_DONE0_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE1_MASK     (0x10000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE1_SHIFT    (16U)
/*! TRIG0_DONE1
 *  0b0..No TRIG0_DONE1 interrupt detected
 *  0b1..TRIG0_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG0_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG0_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG0_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE1_MASK     (0x20000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE1_SHIFT    (17U)
/*! TRIG1_DONE1
 *  0b0..No TRIG1_DONE1 interrupt detected
 *  0b1..TRIG1_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG1_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG1_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG1_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE1_MASK     (0x40000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE1_SHIFT    (18U)
/*! TRIG2_DONE1
 *  0b0..No TRIG2_DONE1 interrupt detected
 *  0b1..TRIG2_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG2_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG2_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG2_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE1_MASK     (0x80000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE1_SHIFT    (19U)
/*! TRIG3_DONE1
 *  0b0..No TRIG3_DONE1 interrupt detected
 *  0b1..TRIG3_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG3_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG3_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG3_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE1_MASK     (0x100000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE1_SHIFT    (20U)
/*! TRIG4_DONE1
 *  0b0..No TRIG4_DONE1 interrupt detected
 *  0b1..TRIG4_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG4_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG4_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG4_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE1_MASK     (0x200000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE1_SHIFT    (21U)
/*! TRIG5_DONE1
 *  0b0..No TRIG5_DONE1 interrupt detected
 *  0b1..TRIG5_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG5_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG5_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG5_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE1_MASK     (0x400000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE1_SHIFT    (22U)
/*! TRIG6_DONE1
 *  0b0..No TRIG6_DONE1 interrupt detected
 *  0b1..TRIG6_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG6_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG6_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG6_DONE1_MASK)

#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE1_MASK     (0x800000U)
#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE1_SHIFT    (23U)
/*! TRIG7_DONE1
 *  0b0..No TRIG7_DONE1 interrupt detected
 *  0b1..TRIG7_DONE1 interrupt detected
 */
#define ADC_ETC_DONE0_1_IRQ_TRIG7_DONE1(x)       (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE0_1_IRQ_TRIG7_DONE1_SHIFT)) & ADC_ETC_DONE0_1_IRQ_TRIG7_DONE1_MASK)
/*! @} */

/*! @name DONE2_3_ERR_IRQ - ETC DONE_2, DONE_3 and DONE_ERR IRQ State Register */
/*! @{ */

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE2_MASK (0x1U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE2_SHIFT (0U)
/*! TRIG0_DONE2
 *  0b0..No TRIG0_DONE2 interrupt detected
 *  0b1..TRIG0_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE2_MASK (0x2U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE2_SHIFT (1U)
/*! TRIG1_DONE2
 *  0b0..No TRIG1_DONE2 interrupt detected
 *  0b1..TRIG1_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE2_MASK (0x4U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE2_SHIFT (2U)
/*! TRIG2_DONE2
 *  0b0..No TRIG2_DONE2 interrupt detected
 *  0b1..TRIG2_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE2_MASK (0x8U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE2_SHIFT (3U)
/*! TRIG3_DONE2
 *  0b0..No TRIG3_DONE2 interrupt detected
 *  0b1..TRIG3_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE2_MASK (0x10U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE2_SHIFT (4U)
/*! TRIG4_DONE2
 *  0b0..No TRIG4_DONE2 interrupt detected
 *  0b1..TRIG4_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE2_MASK (0x20U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE2_SHIFT (5U)
/*! TRIG5_DONE2
 *  0b0..No TRIG5_DONE2 interrupt detected
 *  0b1..TRIG5_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE2_MASK (0x40U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE2_SHIFT (6U)
/*! TRIG6_DONE2
 *  0b0..No TRIG6_DONE2 interrupt detected
 *  0b1..TRIG6_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE2_MASK (0x80U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE2_SHIFT (7U)
/*! TRIG7_DONE2
 *  0b0..No TRIG7_DONE2 interrupt detected
 *  0b1..TRIG7_DONE2 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE2(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE2_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE2_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE3_MASK (0x100U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE3_SHIFT (8U)
/*! TRIG0_DONE3
 *  0b0..No TRIG0_DONE3 interrupt detected
 *  0b1..TRIG0_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE3_MASK (0x200U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE3_SHIFT (9U)
/*! TRIG1_DONE3
 *  0b0..No TRIG1_DONE3 interrupt detected
 *  0b1..TRIG1_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE3_MASK (0x400U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE3_SHIFT (10U)
/*! TRIG2_DONE3
 *  0b0..No TRIG2_DONE3 interrupt detected
 *  0b1..TRIG2_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE3_MASK (0x800U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE3_SHIFT (11U)
/*! TRIG3_DONE3
 *  0b0..No TRIG3_DONE3 interrupt detected
 *  0b1..TRIG3_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE3_MASK (0x1000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE3_SHIFT (12U)
/*! TRIG4_DONE3
 *  0b0..No TRIG4_DONE3 interrupt detected
 *  0b1..TRIG4_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE3_MASK (0x2000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE3_SHIFT (13U)
/*! TRIG5_DONE3
 *  0b0..No TRIG5_DONE3 interrupt detected
 *  0b1..TRIG5_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE3_MASK (0x4000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE3_SHIFT (14U)
/*! TRIG6_DONE3
 *  0b0..No TRIG6_DONE3 interrupt detected
 *  0b1..TRIG6_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE3_MASK (0x8000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE3_SHIFT (15U)
/*! TRIG7_DONE3
 *  0b0..No TRIG7_DONE3 interrupt detected
 *  0b1..TRIG7_DONE3 interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE3(x)   (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE3_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_DONE3_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_ERR_MASK   (0x10000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_ERR_SHIFT  (16U)
/*! TRIG0_ERR
 *  0b0..No TRIG0_ERR interrupt detected
 *  0b1..TRIG0_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG0_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_ERR_MASK   (0x20000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_ERR_SHIFT  (17U)
/*! TRIG1_ERR
 *  0b0..No TRIG1_ERR interrupt detected
 *  0b1..TRIG1_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG1_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_ERR_MASK   (0x40000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_ERR_SHIFT  (18U)
/*! TRIG2_ERR
 *  0b0..No TRIG2_ERR interrupt detected
 *  0b1..TRIG2_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG2_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_ERR_MASK   (0x80000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_ERR_SHIFT  (19U)
/*! TRIG3_ERR
 *  0b0..No TRIG3_ERR interrupt detected
 *  0b1..TRIG3_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG3_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_ERR_MASK   (0x100000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_ERR_SHIFT  (20U)
/*! TRIG4_ERR
 *  0b0..No TRIG4_ERR interrupt detected
 *  0b1..TRIG4_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG4_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_ERR_MASK   (0x200000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_ERR_SHIFT  (21U)
/*! TRIG5_ERR
 *  0b0..No TRIG5_ERR interrupt detected
 *  0b1..TRIG5_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG5_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_ERR_MASK   (0x400000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_ERR_SHIFT  (22U)
/*! TRIG6_ERR
 *  0b0..No TRIG6_ERR interrupt detected
 *  0b1..TRIG6_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG6_ERR_MASK)

#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_ERR_MASK   (0x800000U)
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_ERR_SHIFT  (23U)
/*! TRIG7_ERR
 *  0b0..No TRIG7_ERR interrupt detected
 *  0b1..TRIG7_ERR interrupt detected
 */
#define ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_ERR(x)     (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_ERR_SHIFT)) & ADC_ETC_DONE2_3_ERR_IRQ_TRIG7_ERR_MASK)
/*! @} */

/*! @name DMA_CTRL - ETC DMA control Register */
/*! @{ */

#define ADC_ETC_DMA_CTRL_TRIG0_ENABLE_MASK       (0x1U)
#define ADC_ETC_DMA_CTRL_TRIG0_ENABLE_SHIFT      (0U)
/*! TRIG0_ENABLE
 *  0b0..TRIG0 DMA request disabled.
 *  0b1..TRIG0 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG0_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG0_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG0_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG1_ENABLE_MASK       (0x2U)
#define ADC_ETC_DMA_CTRL_TRIG1_ENABLE_SHIFT      (1U)
/*! TRIG1_ENABLE
 *  0b0..TRIG1 DMA request disabled.
 *  0b1..TRIG1 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG1_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG1_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG1_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG2_ENABLE_MASK       (0x4U)
#define ADC_ETC_DMA_CTRL_TRIG2_ENABLE_SHIFT      (2U)
/*! TRIG2_ENABLE
 *  0b0..TRIG2 DMA request disabled.
 *  0b1..TRIG2 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG2_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG2_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG2_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG3_ENABLE_MASK       (0x8U)
#define ADC_ETC_DMA_CTRL_TRIG3_ENABLE_SHIFT      (3U)
/*! TRIG3_ENABLE
 *  0b0..TRIG3 DMA request disabled.
 *  0b1..TRIG3 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG3_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG3_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG3_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG4_ENABLE_MASK       (0x10U)
#define ADC_ETC_DMA_CTRL_TRIG4_ENABLE_SHIFT      (4U)
/*! TRIG4_ENABLE
 *  0b0..TRIG4 DMA request disabled.
 *  0b1..TRIG4 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG4_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG4_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG4_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG5_ENABLE_MASK       (0x20U)
#define ADC_ETC_DMA_CTRL_TRIG5_ENABLE_SHIFT      (5U)
/*! TRIG5_ENABLE
 *  0b0..TRIG5 DMA request disabled.
 *  0b1..TRIG5 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG5_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG5_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG5_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG6_ENABLE_MASK       (0x40U)
#define ADC_ETC_DMA_CTRL_TRIG6_ENABLE_SHIFT      (6U)
/*! TRIG6_ENABLE
 *  0b0..TRIG6 DMA request disabled.
 *  0b1..TRIG6 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG6_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG6_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG6_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG7_ENABLE_MASK       (0x80U)
#define ADC_ETC_DMA_CTRL_TRIG7_ENABLE_SHIFT      (7U)
/*! TRIG7_ENABLE
 *  0b0..TRIG7 DMA request disabled.
 *  0b1..TRIG7 DMA request enabled.
 */
#define ADC_ETC_DMA_CTRL_TRIG7_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG7_ENABLE_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG7_ENABLE_MASK)

#define ADC_ETC_DMA_CTRL_TRIG0_REQ_MASK          (0x10000U)
#define ADC_ETC_DMA_CTRL_TRIG0_REQ_SHIFT         (16U)
/*! TRIG0_REQ
 *  0b0..TRIG0_REQ not detected.
 *  0b1..TRIG0_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG0_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG0_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG0_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG1_REQ_MASK          (0x20000U)
#define ADC_ETC_DMA_CTRL_TRIG1_REQ_SHIFT         (17U)
/*! TRIG1_REQ
 *  0b0..TRIG1_REQ not detected.
 *  0b1..TRIG1_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG1_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG1_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG1_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG2_REQ_MASK          (0x40000U)
#define ADC_ETC_DMA_CTRL_TRIG2_REQ_SHIFT         (18U)
/*! TRIG2_REQ
 *  0b0..TRIG2_REQ not detected.
 *  0b1..TRIG2_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG2_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG2_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG2_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG3_REQ_MASK          (0x80000U)
#define ADC_ETC_DMA_CTRL_TRIG3_REQ_SHIFT         (19U)
/*! TRIG3_REQ
 *  0b0..TRIG3_REQ not detected.
 *  0b1..TRIG3_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG3_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG3_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG3_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG4_REQ_MASK          (0x100000U)
#define ADC_ETC_DMA_CTRL_TRIG4_REQ_SHIFT         (20U)
/*! TRIG4_REQ
 *  0b0..TRIG4_REQ not detected.
 *  0b1..TRIG4_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG4_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG4_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG4_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG5_REQ_MASK          (0x200000U)
#define ADC_ETC_DMA_CTRL_TRIG5_REQ_SHIFT         (21U)
/*! TRIG5_REQ
 *  0b0..TRIG5_REQ not detected.
 *  0b1..TRIG5_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG5_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG5_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG5_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG6_REQ_MASK          (0x400000U)
#define ADC_ETC_DMA_CTRL_TRIG6_REQ_SHIFT         (22U)
/*! TRIG6_REQ
 *  0b0..TRIG6_REQ not detected.
 *  0b1..TRIG6_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG6_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG6_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG6_REQ_MASK)

#define ADC_ETC_DMA_CTRL_TRIG7_REQ_MASK          (0x800000U)
#define ADC_ETC_DMA_CTRL_TRIG7_REQ_SHIFT         (23U)
/*! TRIG7_REQ
 *  0b0..TRIG7_REQ not detected.
 *  0b1..TRIG7_REQ detected.
 */
#define ADC_ETC_DMA_CTRL_TRIG7_REQ(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_DMA_CTRL_TRIG7_REQ_SHIFT)) & ADC_ETC_DMA_CTRL_TRIG7_REQ_MASK)
/*! @} */

/*! @name TRIGn_CTRL - ETC_TRIG Control Register */
/*! @{ */

#define ADC_ETC_TRIGn_CTRL_SW_TRIG_MASK          (0x1U)
#define ADC_ETC_TRIGn_CTRL_SW_TRIG_SHIFT         (0U)
/*! SW_TRIG
 *  0b0..No software trigger event generated.
 *  0b1..Software trigger event generated.
 */
#define ADC_ETC_TRIGn_CTRL_SW_TRIG(x)            (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CTRL_SW_TRIG_SHIFT)) & ADC_ETC_TRIGn_CTRL_SW_TRIG_MASK)

#define ADC_ETC_TRIGn_CTRL_TRIG_MODE_MASK        (0x10U)
#define ADC_ETC_TRIGn_CTRL_TRIG_MODE_SHIFT       (4U)
/*! TRIG_MODE
 *  0b0..Hardware trigger. The softerware trigger will be ignored.
 *  0b1..Software trigger. The hardware trigger will be ignored.
 */
#define ADC_ETC_TRIGn_CTRL_TRIG_MODE(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CTRL_TRIG_MODE_SHIFT)) & ADC_ETC_TRIGn_CTRL_TRIG_MODE_MASK)

#define ADC_ETC_TRIGn_CTRL_TRIG_CHAIN_MASK       (0x700U)
#define ADC_ETC_TRIGn_CTRL_TRIG_CHAIN_SHIFT      (8U)
/*! TRIG_CHAIN
 *  0b000..Trigger chain length is 1
 *  0b001..Trigger chain length is 2
 *  0b010..Trigger chain length is 3
 *  0b011..Trigger chain length is 4
 *  0b100..Trigger chain length is 5
 *  0b101..Trigger chain length is 6
 *  0b110..Trigger chain length is 7
 *  0b111..Trigger chain length is 8
 */
#define ADC_ETC_TRIGn_CTRL_TRIG_CHAIN(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CTRL_TRIG_CHAIN_SHIFT)) & ADC_ETC_TRIGn_CTRL_TRIG_CHAIN_MASK)

#define ADC_ETC_TRIGn_CTRL_TRIG_PRIORITY_MASK    (0x7000U)
#define ADC_ETC_TRIGn_CTRL_TRIG_PRIORITY_SHIFT   (12U)
#define ADC_ETC_TRIGn_CTRL_TRIG_PRIORITY(x)      (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CTRL_TRIG_PRIORITY_SHIFT)) & ADC_ETC_TRIGn_CTRL_TRIG_PRIORITY_MASK)

#define ADC_ETC_TRIGn_CTRL_SYNC_MODE_MASK        (0x10000U)
#define ADC_ETC_TRIGn_CTRL_SYNC_MODE_SHIFT       (16U)
/*! SYNC_MODE
 *  0b0..Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
 *  0b1..Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
 */
#define ADC_ETC_TRIGn_CTRL_SYNC_MODE(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CTRL_SYNC_MODE_SHIFT)) & ADC_ETC_TRIGn_CTRL_SYNC_MODE_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_CTRL */
#define ADC_ETC_TRIGn_CTRL_COUNT                 (4U)

/*! @name TRIGn_COUNTER - ETC_TRIG Counter Register */
/*! @{ */

#define ADC_ETC_TRIGn_COUNTER_INIT_DELAY_MASK    (0xFFFFU)
#define ADC_ETC_TRIGn_COUNTER_INIT_DELAY_SHIFT   (0U)
#define ADC_ETC_TRIGn_COUNTER_INIT_DELAY(x)      (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_COUNTER_INIT_DELAY_SHIFT)) & ADC_ETC_TRIGn_COUNTER_INIT_DELAY_MASK)

#define ADC_ETC_TRIGn_COUNTER_SAMPLE_INTERVAL_MASK (0xFFFF0000U)
#define ADC_ETC_TRIGn_COUNTER_SAMPLE_INTERVAL_SHIFT (16U)
#define ADC_ETC_TRIGn_COUNTER_SAMPLE_INTERVAL(x) (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_COUNTER_SAMPLE_INTERVAL_SHIFT)) & ADC_ETC_TRIGn_COUNTER_SAMPLE_INTERVAL_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_COUNTER */
#define ADC_ETC_TRIGn_COUNTER_COUNT              (4U)

/*! @name TRIGn_CHAIN_1_0 - ETC_TRIG Chain 0/1 Register */
/*! @{ */

#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL0_MASK       (0xFU)
#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL0_SHIFT      (0U)
/*! CSEL0
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL0(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_CSEL0_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_CSEL0_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS0_MASK       (0xFF0U)
#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS0_SHIFT      (4U)
/*! HWTS0
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS0(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_HWTS0_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_HWTS0_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_B2B0_MASK        (0x1000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_B2B0_SHIFT       (12U)
/*! B2B0
 *  0b0..Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_B2B0(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_B2B0_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_B2B0_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_IE0_MASK         (0x6000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_IE0_SHIFT        (13U)
/*! IE0
 *  0b00..Generate interrupt on Done0 when segment 0 finish.
 *  0b01..Generate interrupt on Done1 when segment 0 finish.
 *  0b10..Generate interrupt on Done2 when segment 0 finish.
 *  0b11..Generate interrupt on Done3 when segment 0 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_IE0(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_IE0_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_IE0_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_IE0_EN_MASK      (0x8000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_IE0_EN_SHIFT     (15U)
/*! IE0_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_IE0_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_IE0_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_IE0_EN_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL1_MASK       (0xF0000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL1_SHIFT      (16U)
/*! CSEL1
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_CSEL1(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_CSEL1_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_CSEL1_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS1_MASK       (0xFF00000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS1_SHIFT      (20U)
/*! HWTS1
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_HWTS1(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_HWTS1_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_HWTS1_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_B2B1_MASK        (0x10000000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_B2B1_SHIFT       (28U)
/*! B2B1
 *  0b0..Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_B2B1(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_B2B1_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_B2B1_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_IE1_MASK         (0x60000000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_IE1_SHIFT        (29U)
/*! IE1
 *  0b00..Generate interrupt on Done0 when Segment 1 finish.
 *  0b01..Generate interrupt on Done1 when Segment 1 finish.
 *  0b10..Generate interrupt on Done2 when Segment 1 finish.
 *  0b11..Generate interrupt on Done3 when Segment 1 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_IE1(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_IE1_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_IE1_MASK)

#define ADC_ETC_TRIGn_CHAIN_1_0_IE1_EN_MASK      (0x80000000U)
#define ADC_ETC_TRIGn_CHAIN_1_0_IE1_EN_SHIFT     (31U)
/*! IE1_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
 */
#define ADC_ETC_TRIGn_CHAIN_1_0_IE1_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_1_0_IE1_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_1_0_IE1_EN_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_CHAIN_1_0 */
#define ADC_ETC_TRIGn_CHAIN_1_0_COUNT            (4U)

/*! @name TRIGn_CHAIN_3_2 - ETC_TRIG Chain 2/3 Register */
/*! @{ */

#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL2_MASK       (0xFU)
#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL2_SHIFT      (0U)
/*! CSEL2
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL2(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_CSEL2_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_CSEL2_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS2_MASK       (0xFF0U)
#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS2_SHIFT      (4U)
/*! HWTS2
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS2(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_HWTS2_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_HWTS2_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_B2B2_MASK        (0x1000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_B2B2_SHIFT       (12U)
/*! B2B2
 *  0b0..Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_B2B2(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_B2B2_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_B2B2_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_IE2_MASK         (0x6000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_IE2_SHIFT        (13U)
/*! IE2
 *  0b00..Generate interrupt on Done0 when segment 2 finish.
 *  0b01..Generate interrupt on Done1 when segment 2 finish.
 *  0b10..Generate interrupt on Done2 when segment 2 finish.
 *  0b11..Generate interrupt on Done3 when segment 2 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_IE2(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_IE2_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_IE2_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_IE2_EN_MASK      (0x8000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_IE2_EN_SHIFT     (15U)
/*! IE2_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_IE2_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_IE2_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_IE2_EN_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL3_MASK       (0xF0000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL3_SHIFT      (16U)
/*! CSEL3
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_CSEL3(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_CSEL3_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_CSEL3_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS3_MASK       (0xFF00000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS3_SHIFT      (20U)
/*! HWTS3
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_HWTS3(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_HWTS3_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_HWTS3_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_B2B3_MASK        (0x10000000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_B2B3_SHIFT       (28U)
/*! B2B3
 *  0b0..Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_B2B3(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_B2B3_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_B2B3_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_IE3_MASK         (0x60000000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_IE3_SHIFT        (29U)
/*! IE3
 *  0b00..Generate interrupt on Done0 when segment 3 finish.
 *  0b01..Generate interrupt on Done1 when segment 3 finish.
 *  0b10..Generate interrupt on Done2 when segment 3 finish.
 *  0b11..Generate interrupt on Done3 when segment 3 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_IE3(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_IE3_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_IE3_MASK)

#define ADC_ETC_TRIGn_CHAIN_3_2_IE3_EN_MASK      (0x80000000U)
#define ADC_ETC_TRIGn_CHAIN_3_2_IE3_EN_SHIFT     (31U)
/*! IE3_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
 */
#define ADC_ETC_TRIGn_CHAIN_3_2_IE3_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_3_2_IE3_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_3_2_IE3_EN_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_CHAIN_3_2 */
#define ADC_ETC_TRIGn_CHAIN_3_2_COUNT            (4U)

/*! @name TRIGn_CHAIN_5_4 - ETC_TRIG Chain 4/5 Register */
/*! @{ */

#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL4_MASK       (0xFU)
#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL4_SHIFT      (0U)
/*! CSEL4
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL4(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_CSEL4_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_CSEL4_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS4_MASK       (0xFF0U)
#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS4_SHIFT      (4U)
/*! HWTS4
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS4(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_HWTS4_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_HWTS4_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_B2B4_MASK        (0x1000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_B2B4_SHIFT       (12U)
/*! B2B4
 *  0b0..Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_B2B4(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_B2B4_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_B2B4_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_IE4_MASK         (0x6000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_IE4_SHIFT        (13U)
/*! IE4
 *  0b00..Generate interrupt on Done0 when segment 4 finish.
 *  0b01..Generate interrupt on Done1 when segment 4 finish.
 *  0b10..Generate interrupt on Done2 when segment 4 finish.
 *  0b11..Generate interrupt on Done3 when segment 4 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_IE4(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_IE4_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_IE4_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_IE4_EN_MASK      (0x8000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_IE4_EN_SHIFT     (15U)
/*! IE4_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_IE4_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_IE4_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_IE4_EN_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL5_MASK       (0xF0000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL5_SHIFT      (16U)
/*! CSEL5
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_CSEL5(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_CSEL5_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_CSEL5_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS5_MASK       (0xFF00000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS5_SHIFT      (20U)
/*! HWTS5
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_HWTS5(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_HWTS5_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_HWTS5_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_B2B5_MASK        (0x10000000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_B2B5_SHIFT       (28U)
/*! B2B5
 *  0b0..Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_B2B5(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_B2B5_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_B2B5_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_IE5_MASK         (0x60000000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_IE5_SHIFT        (29U)
/*! IE5
 *  0b00..Generate interrupt on Done0 when segment 5 finish.
 *  0b01..Generate interrupt on Done1 when segment 5 finish.
 *  0b10..Generate interrupt on Done2 when segment 5 finish.
 *  0b11..Generate interrupt on Done3 when segment 5 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_IE5(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_IE5_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_IE5_MASK)

#define ADC_ETC_TRIGn_CHAIN_5_4_IE5_EN_MASK      (0x80000000U)
#define ADC_ETC_TRIGn_CHAIN_5_4_IE5_EN_SHIFT     (31U)
/*! IE5_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
 */
#define ADC_ETC_TRIGn_CHAIN_5_4_IE5_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_5_4_IE5_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_5_4_IE5_EN_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_CHAIN_5_4 */
#define ADC_ETC_TRIGn_CHAIN_5_4_COUNT            (4U)

/*! @name TRIGn_CHAIN_7_6 - ETC_TRIG Chain 6/7 Register */
/*! @{ */

#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL6_MASK       (0xFU)
#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL6_SHIFT      (0U)
/*! CSEL6
 *  0b0000..ADC Channel 0 selected
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL6(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_CSEL6_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_CSEL6_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS6_MASK       (0xFF0U)
#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS6_SHIFT      (4U)
/*! HWTS6
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS6(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_HWTS6_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_HWTS6_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_B2B6_MASK        (0x1000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_B2B6_SHIFT       (12U)
/*! B2B6
 *  0b0..Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_B2B6(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_B2B6_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_B2B6_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_IE6_MASK         (0x6000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_IE6_SHIFT        (13U)
/*! IE6
 *  0b00..Generate interrupt on Done0 when segment 6 finish.
 *  0b01..Generate interrupt on Done1 when segment 6 finish.
 *  0b10..Generate interrupt on Done2 when segment 6 finish.
 *  0b11..Generate interrupt on Done3 when segment 6 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_IE6(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_IE6_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_IE6_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_IE6_EN_MASK      (0x8000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_IE6_EN_SHIFT     (15U)
/*! IE6_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_IE6_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_IE6_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_IE6_EN_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL7_MASK       (0xF0000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL7_SHIFT      (16U)
/*! CSEL7
 *  0b0000..ADC Channel 0 selected.
 *  0b0001..ADC Channel 1 selected.
 *  0b0010..ADC Channel 2 selected.
 *  0b0011..ADC Channel 3 selected.
 *  0b0100..ADC Channel 4 selected.
 *  0b0101..ADC Channel 5 selected.
 *  0b0110..ADC Channel 6 selected.
 *  0b0111..ADC Channel 7 selected.
 *  0b1000..ADC Channel 8 selected.
 *  0b1001..ADC Channel 9 selected.
 *  0b1010..ADC Channel 10 selected.
 *  0b1011..ADC Channel 11 selected.
 *  0b1100..ADC Channel 12 selected.
 *  0b1101..ADC Channel 13 selected.
 *  0b1110..ADC Channel 14 selected.
 *  0b1111..ADC Channel 15 selected.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_CSEL7(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_CSEL7_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_CSEL7_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS7_MASK       (0xFF00000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS7_SHIFT      (20U)
/*! HWTS7
 *  0b00000000..no trigger selected
 *  0b00000001..ADC TRIG0 selected
 *  0b00000010..ADC TRIG1 selected
 *  0b00000100..ADC TRIG2 selected
 *  0b00001000..ADC TRIG3 selected
 *  0b00010000..ADC TRIG4 selected
 *  0b00100000..ADC TRIG5 selected
 *  0b01000000..ADC TRIG6 selected
 *  0b10000000..ADC TRIG7 selected
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_HWTS7(x)         (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_HWTS7_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_HWTS7_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_B2B7_MASK        (0x10000000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_B2B7_SHIFT       (28U)
/*! B2B7
 *  0b0..Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
 *  0b1..Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_B2B7(x)          (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_B2B7_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_B2B7_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_IE7_MASK         (0x60000000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_IE7_SHIFT        (29U)
/*! IE7
 *  0b00..Generate interrupt on Done0 when segment 7 finish.
 *  0b01..Generate interrupt on Done1 when segment 7 finish.
 *  0b10..Generate interrupt on Done2 when segment 7 finish.
 *  0b11..Generate interrupt on Done3 when segment 7 finish.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_IE7(x)           (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_IE7_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_IE7_MASK)

#define ADC_ETC_TRIGn_CHAIN_7_6_IE7_EN_MASK      (0x80000000U)
#define ADC_ETC_TRIGn_CHAIN_7_6_IE7_EN_SHIFT     (31U)
/*! IE7_EN
 *  0b0..Interrupt DONE disabled.
 *  0b1..Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
 */
#define ADC_ETC_TRIGn_CHAIN_7_6_IE7_EN(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_CHAIN_7_6_IE7_EN_SHIFT)) & ADC_ETC_TRIGn_CHAIN_7_6_IE7_EN_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_CHAIN_7_6 */
#define ADC_ETC_TRIGn_CHAIN_7_6_COUNT            (4U)

/*! @name TRIGn_RESULT_1_0 - ETC_TRIG Result Data 1/0 Register */
/*! @{ */

#define ADC_ETC_TRIGn_RESULT_1_0_DATA0_MASK      (0xFFFU)
#define ADC_ETC_TRIGn_RESULT_1_0_DATA0_SHIFT     (0U)
#define ADC_ETC_TRIGn_RESULT_1_0_DATA0(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_1_0_DATA0_SHIFT)) & ADC_ETC_TRIGn_RESULT_1_0_DATA0_MASK)

#define ADC_ETC_TRIGn_RESULT_1_0_DATA1_MASK      (0xFFF0000U)
#define ADC_ETC_TRIGn_RESULT_1_0_DATA1_SHIFT     (16U)
#define ADC_ETC_TRIGn_RESULT_1_0_DATA1(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_1_0_DATA1_SHIFT)) & ADC_ETC_TRIGn_RESULT_1_0_DATA1_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_RESULT_1_0 */
#define ADC_ETC_TRIGn_RESULT_1_0_COUNT           (4U)

/*! @name TRIGn_RESULT_3_2 - ETC_TRIG Result Data 3/2 Register */
/*! @{ */

#define ADC_ETC_TRIGn_RESULT_3_2_DATA2_MASK      (0xFFFU)
#define ADC_ETC_TRIGn_RESULT_3_2_DATA2_SHIFT     (0U)
#define ADC_ETC_TRIGn_RESULT_3_2_DATA2(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_3_2_DATA2_SHIFT)) & ADC_ETC_TRIGn_RESULT_3_2_DATA2_MASK)

#define ADC_ETC_TRIGn_RESULT_3_2_DATA3_MASK      (0xFFF0000U)
#define ADC_ETC_TRIGn_RESULT_3_2_DATA3_SHIFT     (16U)
#define ADC_ETC_TRIGn_RESULT_3_2_DATA3(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_3_2_DATA3_SHIFT)) & ADC_ETC_TRIGn_RESULT_3_2_DATA3_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_RESULT_3_2 */
#define ADC_ETC_TRIGn_RESULT_3_2_COUNT           (4U)

/*! @name TRIGn_RESULT_5_4 - ETC_TRIG Result Data 5/4 Register */
/*! @{ */

#define ADC_ETC_TRIGn_RESULT_5_4_DATA4_MASK      (0xFFFU)
#define ADC_ETC_TRIGn_RESULT_5_4_DATA4_SHIFT     (0U)
#define ADC_ETC_TRIGn_RESULT_5_4_DATA4(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_5_4_DATA4_SHIFT)) & ADC_ETC_TRIGn_RESULT_5_4_DATA4_MASK)

#define ADC_ETC_TRIGn_RESULT_5_4_DATA5_MASK      (0xFFF0000U)
#define ADC_ETC_TRIGn_RESULT_5_4_DATA5_SHIFT     (16U)
#define ADC_ETC_TRIGn_RESULT_5_4_DATA5(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_5_4_DATA5_SHIFT)) & ADC_ETC_TRIGn_RESULT_5_4_DATA5_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_RESULT_5_4 */
#define ADC_ETC_TRIGn_RESULT_5_4_COUNT           (4U)

/*! @name TRIGn_RESULT_7_6 - ETC_TRIG Result Data 7/6 Register */
/*! @{ */

#define ADC_ETC_TRIGn_RESULT_7_6_DATA6_MASK      (0xFFFU)
#define ADC_ETC_TRIGn_RESULT_7_6_DATA6_SHIFT     (0U)
#define ADC_ETC_TRIGn_RESULT_7_6_DATA6(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_7_6_DATA6_SHIFT)) & ADC_ETC_TRIGn_RESULT_7_6_DATA6_MASK)

#define ADC_ETC_TRIGn_RESULT_7_6_DATA7_MASK      (0xFFF0000U)
#define ADC_ETC_TRIGn_RESULT_7_6_DATA7_SHIFT     (16U)
#define ADC_ETC_TRIGn_RESULT_7_6_DATA7(x)        (((uint32_t)(((uint32_t)(x)) << ADC_ETC_TRIGn_RESULT_7_6_DATA7_SHIFT)) & ADC_ETC_TRIGn_RESULT_7_6_DATA7_MASK)
/*! @} */

/* The count of ADC_ETC_TRIGn_RESULT_7_6 */
#define ADC_ETC_TRIGn_RESULT_7_6_COUNT           (4U)


/*!
 * @}
 */ /* end of group ADC_ETC_Register_Masks */


 /* ----------------------------------------------------------------------------
   -- AIPSTZ Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AIPSTZ_Register_Masks AIPSTZ Register Masks
 * @{
 */

/*! @name MPR - Master Priviledge Registers */
/*! @{ */

#define AIPSTZ_MPR_MPROT3_MASK                   (0xF0000U)
#define AIPSTZ_MPR_MPROT3_SHIFT                  (16U)
/*! MPROT3
 *  0bxxx0..Accesses from this master are forced to user-mode (ips_supervisor_access is forced to zero) regardless of the hprot[1] access attribute.
 *  0bxxx1..Accesses from this master are not forced to user-mode. The hprot[1] access attribute is used directly to determine ips_supervisor_access.
 *  0bxx0x..This master is not trusted for write accesses.
 *  0bxx1x..This master is trusted for write accesses.
 *  0bx0xx..This master is not trusted for read accesses.
 *  0bx1xx..This master is trusted for read accesses.
 *  0b1xxx..Write accesses from this master are allowed to be buffered
 */
#define AIPSTZ_MPR_MPROT3(x)                     (((uint32_t)(((uint32_t)(x)) << AIPSTZ_MPR_MPROT3_SHIFT)) & AIPSTZ_MPR_MPROT3_MASK)

#define AIPSTZ_MPR_MPROT2_MASK                   (0xF00000U)
#define AIPSTZ_MPR_MPROT2_SHIFT                  (20U)
/*! MPROT2
 *  0bxxx0..Accesses from this master are forced to user-mode (ips_supervisor_access is forced to zero) regardless of the hprot[1] access attribute.
 *  0bxxx1..Accesses from this master are not forced to user-mode. The hprot[1] access attribute is used directly to determine ips_supervisor_access.
 *  0bxx0x..This master is not trusted for write accesses.
 *  0bxx1x..This master is trusted for write accesses.
 *  0bx0xx..This master is not trusted for read accesses.
 *  0bx1xx..This master is trusted for read accesses.
 *  0b1xxx..Write accesses from this master are allowed to be buffered
 */
#define AIPSTZ_MPR_MPROT2(x)                     (((uint32_t)(((uint32_t)(x)) << AIPSTZ_MPR_MPROT2_SHIFT)) & AIPSTZ_MPR_MPROT2_MASK)

#define AIPSTZ_MPR_MPROT1_MASK                   (0xF000000U)
#define AIPSTZ_MPR_MPROT1_SHIFT                  (24U)
/*! MPROT1
 *  0bxxx0..Accesses from this master are forced to user-mode (ips_supervisor_access is forced to zero) regardless of the hprot[1] access attribute.
 *  0bxxx1..Accesses from this master are not forced to user-mode. The hprot[1] access attribute is used directly to determine ips_supervisor_access.
 *  0bxx0x..This master is not trusted for write accesses.
 *  0bxx1x..This master is trusted for write accesses.
 *  0bx0xx..This master is not trusted for read accesses.
 *  0bx1xx..This master is trusted for read accesses.
 *  0b1xxx..Write accesses from this master are allowed to be buffered
 */
#define AIPSTZ_MPR_MPROT1(x)                     (((uint32_t)(((uint32_t)(x)) << AIPSTZ_MPR_MPROT1_SHIFT)) & AIPSTZ_MPR_MPROT1_MASK)

#define AIPSTZ_MPR_MPROT0_MASK                   (0xF0000000U)
#define AIPSTZ_MPR_MPROT0_SHIFT                  (28U)
/*! MPROT0
 *  0bxxx0..Accesses from this master are forced to user-mode (ips_supervisor_access is forced to zero) regardless of the hprot[1] access attribute.
 *  0bxxx1..Accesses from this master are not forced to user-mode. The hprot[1] access attribute is used directly to determine ips_supervisor_access.
 *  0bxx0x..This master is not trusted for write accesses.
 *  0bxx1x..This master is trusted for write accesses.
 *  0bx0xx..This master is not trusted for read accesses.
 *  0bx1xx..This master is trusted for read accesses.
 *  0b1xxx..Write accesses from this master are allowed to be buffered
 */
#define AIPSTZ_MPR_MPROT0(x)                     (((uint32_t)(((uint32_t)(x)) << AIPSTZ_MPR_MPROT0_SHIFT)) & AIPSTZ_MPR_MPROT0_MASK)
/*! @} */

/*! @name OPACR - Off-Platform Peripheral Access Control Registers */
/*! @{ */

#define AIPSTZ_OPACR_OPAC7_MASK                  (0xFU)
#define AIPSTZ_OPACR_OPAC7_SHIFT                 (0U)
/*! OPAC7
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC7(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC7_SHIFT)) & AIPSTZ_OPACR_OPAC7_MASK)

#define AIPSTZ_OPACR_OPAC6_MASK                  (0xF0U)
#define AIPSTZ_OPACR_OPAC6_SHIFT                 (4U)
/*! OPAC6
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC6(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC6_SHIFT)) & AIPSTZ_OPACR_OPAC6_MASK)

#define AIPSTZ_OPACR_OPAC5_MASK                  (0xF00U)
#define AIPSTZ_OPACR_OPAC5_SHIFT                 (8U)
/*! OPAC5
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC5(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC5_SHIFT)) & AIPSTZ_OPACR_OPAC5_MASK)

#define AIPSTZ_OPACR_OPAC4_MASK                  (0xF000U)
#define AIPSTZ_OPACR_OPAC4_SHIFT                 (12U)
/*! OPAC4
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC4(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC4_SHIFT)) & AIPSTZ_OPACR_OPAC4_MASK)

#define AIPSTZ_OPACR_OPAC3_MASK                  (0xF0000U)
#define AIPSTZ_OPACR_OPAC3_SHIFT                 (16U)
/*! OPAC3
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC3(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC3_SHIFT)) & AIPSTZ_OPACR_OPAC3_MASK)

#define AIPSTZ_OPACR_OPAC2_MASK                  (0xF00000U)
#define AIPSTZ_OPACR_OPAC2_SHIFT                 (20U)
/*! OPAC2
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC2(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC2_SHIFT)) & AIPSTZ_OPACR_OPAC2_MASK)

#define AIPSTZ_OPACR_OPAC1_MASK                  (0xF000000U)
#define AIPSTZ_OPACR_OPAC1_SHIFT                 (24U)
/*! OPAC1
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC1(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC1_SHIFT)) & AIPSTZ_OPACR_OPAC1_MASK)

#define AIPSTZ_OPACR_OPAC0_MASK                  (0xF0000000U)
#define AIPSTZ_OPACR_OPAC0_SHIFT                 (28U)
/*! OPAC0
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR_OPAC0(x)                    (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR_OPAC0_SHIFT)) & AIPSTZ_OPACR_OPAC0_MASK)
/*! @} */

/*! @name OPACR1 - Off-Platform Peripheral Access Control Registers */
/*! @{ */

#define AIPSTZ_OPACR1_OPAC15_MASK                (0xFU)
#define AIPSTZ_OPACR1_OPAC15_SHIFT               (0U)
/*! OPAC15
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC15(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC15_SHIFT)) & AIPSTZ_OPACR1_OPAC15_MASK)

#define AIPSTZ_OPACR1_OPAC14_MASK                (0xF0U)
#define AIPSTZ_OPACR1_OPAC14_SHIFT               (4U)
/*! OPAC14
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC14(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC14_SHIFT)) & AIPSTZ_OPACR1_OPAC14_MASK)

#define AIPSTZ_OPACR1_OPAC13_MASK                (0xF00U)
#define AIPSTZ_OPACR1_OPAC13_SHIFT               (8U)
/*! OPAC13
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC13(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC13_SHIFT)) & AIPSTZ_OPACR1_OPAC13_MASK)

#define AIPSTZ_OPACR1_OPAC12_MASK                (0xF000U)
#define AIPSTZ_OPACR1_OPAC12_SHIFT               (12U)
/*! OPAC12
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC12(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC12_SHIFT)) & AIPSTZ_OPACR1_OPAC12_MASK)

#define AIPSTZ_OPACR1_OPAC11_MASK                (0xF0000U)
#define AIPSTZ_OPACR1_OPAC11_SHIFT               (16U)
/*! OPAC11
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC11(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC11_SHIFT)) & AIPSTZ_OPACR1_OPAC11_MASK)

#define AIPSTZ_OPACR1_OPAC10_MASK                (0xF00000U)
#define AIPSTZ_OPACR1_OPAC10_SHIFT               (20U)
/*! OPAC10
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC10(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC10_SHIFT)) & AIPSTZ_OPACR1_OPAC10_MASK)

#define AIPSTZ_OPACR1_OPAC9_MASK                 (0xF000000U)
#define AIPSTZ_OPACR1_OPAC9_SHIFT                (24U)
/*! OPAC9
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC9(x)                   (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC9_SHIFT)) & AIPSTZ_OPACR1_OPAC9_MASK)

#define AIPSTZ_OPACR1_OPAC8_MASK                 (0xF0000000U)
#define AIPSTZ_OPACR1_OPAC8_SHIFT                (28U)
/*! OPAC8
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR1_OPAC8(x)                   (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR1_OPAC8_SHIFT)) & AIPSTZ_OPACR1_OPAC8_MASK)
/*! @} */

/*! @name OPACR2 - Off-Platform Peripheral Access Control Registers */
/*! @{ */

#define AIPSTZ_OPACR2_OPAC23_MASK                (0xFU)
#define AIPSTZ_OPACR2_OPAC23_SHIFT               (0U)
/*! OPAC23
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC23(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC23_SHIFT)) & AIPSTZ_OPACR2_OPAC23_MASK)

#define AIPSTZ_OPACR2_OPAC22_MASK                (0xF0U)
#define AIPSTZ_OPACR2_OPAC22_SHIFT               (4U)
/*! OPAC22
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC22(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC22_SHIFT)) & AIPSTZ_OPACR2_OPAC22_MASK)

#define AIPSTZ_OPACR2_OPAC21_MASK                (0xF00U)
#define AIPSTZ_OPACR2_OPAC21_SHIFT               (8U)
/*! OPAC21
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC21(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC21_SHIFT)) & AIPSTZ_OPACR2_OPAC21_MASK)

#define AIPSTZ_OPACR2_OPAC20_MASK                (0xF000U)
#define AIPSTZ_OPACR2_OPAC20_SHIFT               (12U)
/*! OPAC20
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC20(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC20_SHIFT)) & AIPSTZ_OPACR2_OPAC20_MASK)

#define AIPSTZ_OPACR2_OPAC19_MASK                (0xF0000U)
#define AIPSTZ_OPACR2_OPAC19_SHIFT               (16U)
/*! OPAC19
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC19(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC19_SHIFT)) & AIPSTZ_OPACR2_OPAC19_MASK)

#define AIPSTZ_OPACR2_OPAC18_MASK                (0xF00000U)
#define AIPSTZ_OPACR2_OPAC18_SHIFT               (20U)
/*! OPAC18
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC18(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC18_SHIFT)) & AIPSTZ_OPACR2_OPAC18_MASK)

#define AIPSTZ_OPACR2_OPAC17_MASK                (0xF000000U)
#define AIPSTZ_OPACR2_OPAC17_SHIFT               (24U)
/*! OPAC17
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC17(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC17_SHIFT)) & AIPSTZ_OPACR2_OPAC17_MASK)

#define AIPSTZ_OPACR2_OPAC16_MASK                (0xF0000000U)
#define AIPSTZ_OPACR2_OPAC16_SHIFT               (28U)
/*! OPAC16
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR2_OPAC16(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR2_OPAC16_SHIFT)) & AIPSTZ_OPACR2_OPAC16_MASK)
/*! @} */

/*! @name OPACR3 - Off-Platform Peripheral Access Control Registers */
/*! @{ */

#define AIPSTZ_OPACR3_OPAC31_MASK                (0xFU)
#define AIPSTZ_OPACR3_OPAC31_SHIFT               (0U)
/*! OPAC31
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC31(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC31_SHIFT)) & AIPSTZ_OPACR3_OPAC31_MASK)

#define AIPSTZ_OPACR3_OPAC30_MASK                (0xF0U)
#define AIPSTZ_OPACR3_OPAC30_SHIFT               (4U)
/*! OPAC30
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC30(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC30_SHIFT)) & AIPSTZ_OPACR3_OPAC30_MASK)

#define AIPSTZ_OPACR3_OPAC29_MASK                (0xF00U)
#define AIPSTZ_OPACR3_OPAC29_SHIFT               (8U)
/*! OPAC29
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC29(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC29_SHIFT)) & AIPSTZ_OPACR3_OPAC29_MASK)

#define AIPSTZ_OPACR3_OPAC28_MASK                (0xF000U)
#define AIPSTZ_OPACR3_OPAC28_SHIFT               (12U)
/*! OPAC28
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC28(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC28_SHIFT)) & AIPSTZ_OPACR3_OPAC28_MASK)

#define AIPSTZ_OPACR3_OPAC27_MASK                (0xF0000U)
#define AIPSTZ_OPACR3_OPAC27_SHIFT               (16U)
/*! OPAC27
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC27(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC27_SHIFT)) & AIPSTZ_OPACR3_OPAC27_MASK)

#define AIPSTZ_OPACR3_OPAC26_MASK                (0xF00000U)
#define AIPSTZ_OPACR3_OPAC26_SHIFT               (20U)
/*! OPAC26
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC26(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC26_SHIFT)) & AIPSTZ_OPACR3_OPAC26_MASK)

#define AIPSTZ_OPACR3_OPAC25_MASK                (0xF000000U)
#define AIPSTZ_OPACR3_OPAC25_SHIFT               (24U)
/*! OPAC25
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC25(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC25_SHIFT)) & AIPSTZ_OPACR3_OPAC25_MASK)

#define AIPSTZ_OPACR3_OPAC24_MASK                (0xF0000000U)
#define AIPSTZ_OPACR3_OPAC24_SHIFT               (28U)
/*! OPAC24
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR3_OPAC24(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR3_OPAC24_SHIFT)) & AIPSTZ_OPACR3_OPAC24_MASK)
/*! @} */

/*! @name OPACR4 - Off-Platform Peripheral Access Control Registers */
/*! @{ */

#define AIPSTZ_OPACR4_OPAC33_MASK                (0xF000000U)
#define AIPSTZ_OPACR4_OPAC33_SHIFT               (24U)
/*! OPAC33
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR4_OPAC33(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR4_OPAC33_SHIFT)) & AIPSTZ_OPACR4_OPAC33_MASK)

#define AIPSTZ_OPACR4_OPAC32_MASK                (0xF0000000U)
#define AIPSTZ_OPACR4_OPAC32_SHIFT               (28U)
/*! OPAC32
 *  0bxxx0..Accesses from an untrusted master are allowed.
 *  0bxxx1..Accesses from an untrusted master are not allowed. If an access is attempted by an untrusted master,
 *          the access is terminated with an error response and no peripheral access is initiated on the IPS bus.
 *  0bxx0x..This peripheral allows write accesses.
 *  0bxx1x..This peripheral is write protected. If a write access is attempted, the access is terminated with an
 *          error response and no peripheral access is initiated on the IPS bus.
 *  0bx0xx..This peripheral does not require supervisor privilege level for accesses.
 *  0bx1xx..This peripheral requires supervisor privilege level for accesses. The master privilege level must
 *          indicate supervisor via the hprot[1] access attribute, and the MPROTx[MPL] control bit for the master must
 *          be set. If not, the access is terminated with an error response and no peripheral access is initiated
 *          on the IPS bus.
 *  0b1xxx..Write accesses to this peripheral are allowed to be buffered by the AIPSTZ.
 */
#define AIPSTZ_OPACR4_OPAC32(x)                  (((uint32_t)(((uint32_t)(x)) << AIPSTZ_OPACR4_OPAC32_SHIFT)) & AIPSTZ_OPACR4_OPAC32_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group AIPSTZ_Register_Masks */


/* ----------------------------------------------------------------------------
   -- AOI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AOI_Register_Masks AOI Register Masks
 * @{
 */

/*! @name BFCRT01 - Boolean Function Term 0 and 1 Configuration Register for EVENTn */
/*! @{ */

#define AOI_BFCRT01_PT1_DC_MASK                  (0x3U)
#define AOI_BFCRT01_PT1_DC_SHIFT                 (0U)
/*! PT1_DC - Product term 1, D input configuration
 *  0b00..Force the D input in this product term to a logical zero
 *  0b01..Pass the D input in this product term
 *  0b10..Complement the D input in this product term
 *  0b11..Force the D input in this product term to a logical one
 */
#define AOI_BFCRT01_PT1_DC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT1_DC_SHIFT)) & AOI_BFCRT01_PT1_DC_MASK)

#define AOI_BFCRT01_PT1_CC_MASK                  (0xCU)
#define AOI_BFCRT01_PT1_CC_SHIFT                 (2U)
/*! PT1_CC - Product term 1, C input configuration
 *  0b00..Force the C input in this product term to a logical zero
 *  0b01..Pass the C input in this product term
 *  0b10..Complement the C input in this product term
 *  0b11..Force the C input in this product term to a logical one
 */
#define AOI_BFCRT01_PT1_CC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT1_CC_SHIFT)) & AOI_BFCRT01_PT1_CC_MASK)

#define AOI_BFCRT01_PT1_BC_MASK                  (0x30U)
#define AOI_BFCRT01_PT1_BC_SHIFT                 (4U)
/*! PT1_BC - Product term 1, B input configuration
 *  0b00..Force the B input in this product term to a logical zero
 *  0b01..Pass the B input in this product term
 *  0b10..Complement the B input in this product term
 *  0b11..Force the B input in this product term to a logical one
 */
#define AOI_BFCRT01_PT1_BC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT1_BC_SHIFT)) & AOI_BFCRT01_PT1_BC_MASK)

#define AOI_BFCRT01_PT1_AC_MASK                  (0xC0U)
#define AOI_BFCRT01_PT1_AC_SHIFT                 (6U)
/*! PT1_AC - Product term 1, A input configuration
 *  0b00..Force the A input in this product term to a logical zero
 *  0b01..Pass the A input in this product term
 *  0b10..Complement the A input in this product term
 *  0b11..Force the A input in this product term to a logical one
 */
#define AOI_BFCRT01_PT1_AC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT1_AC_SHIFT)) & AOI_BFCRT01_PT1_AC_MASK)

#define AOI_BFCRT01_PT0_DC_MASK                  (0x300U)
#define AOI_BFCRT01_PT0_DC_SHIFT                 (8U)
/*! PT0_DC - Product term 0, D input configuration
 *  0b00..Force the D input in this product term to a logical zero
 *  0b01..Pass the D input in this product term
 *  0b10..Complement the D input in this product term
 *  0b11..Force the D input in this product term to a logical one
 */
#define AOI_BFCRT01_PT0_DC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT0_DC_SHIFT)) & AOI_BFCRT01_PT0_DC_MASK)

#define AOI_BFCRT01_PT0_CC_MASK                  (0xC00U)
#define AOI_BFCRT01_PT0_CC_SHIFT                 (10U)
/*! PT0_CC - Product term 0, C input configuration
 *  0b00..Force the C input in this product term to a logical zero
 *  0b01..Pass the C input in this product term
 *  0b10..Complement the C input in this product term
 *  0b11..Force the C input in this product term to a logical one
 */
#define AOI_BFCRT01_PT0_CC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT0_CC_SHIFT)) & AOI_BFCRT01_PT0_CC_MASK)

#define AOI_BFCRT01_PT0_BC_MASK                  (0x3000U)
#define AOI_BFCRT01_PT0_BC_SHIFT                 (12U)
/*! PT0_BC - Product term 0, B input configuration
 *  0b00..Force the B input in this product term to a logical zero
 *  0b01..Pass the B input in this product term
 *  0b10..Complement the B input in this product term
 *  0b11..Force the B input in this product term to a logical one
 */
#define AOI_BFCRT01_PT0_BC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT0_BC_SHIFT)) & AOI_BFCRT01_PT0_BC_MASK)

#define AOI_BFCRT01_PT0_AC_MASK                  (0xC000U)
#define AOI_BFCRT01_PT0_AC_SHIFT                 (14U)
/*! PT0_AC - Product term 0, A input configuration
 *  0b00..Force the A input in this product term to a logical zero
 *  0b01..Pass the A input in this product term
 *  0b10..Complement the A input in this product term
 *  0b11..Force the A input in this product term to a logical one
 */
#define AOI_BFCRT01_PT0_AC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT01_PT0_AC_SHIFT)) & AOI_BFCRT01_PT0_AC_MASK)
/*! @} */

/* The count of AOI_BFCRT01 */
#define AOI_BFCRT01_COUNT                        (4U)

/*! @name BFCRT23 - Boolean Function Term 2 and 3 Configuration Register for EVENTn */
/*! @{ */

#define AOI_BFCRT23_PT3_DC_MASK                  (0x3U)
#define AOI_BFCRT23_PT3_DC_SHIFT                 (0U)
/*! PT3_DC - Product term 3, D input configuration
 *  0b00..Force the D input in this product term to a logical zero
 *  0b01..Pass the D input in this product term
 *  0b10..Complement the D input in this product term
 *  0b11..Force the D input in this product term to a logical one
 */
#define AOI_BFCRT23_PT3_DC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT3_DC_SHIFT)) & AOI_BFCRT23_PT3_DC_MASK)

#define AOI_BFCRT23_PT3_CC_MASK                  (0xCU)
#define AOI_BFCRT23_PT3_CC_SHIFT                 (2U)
/*! PT3_CC - Product term 3, C input configuration
 *  0b00..Force the C input in this product term to a logical zero
 *  0b01..Pass the C input in this product term
 *  0b10..Complement the C input in this product term
 *  0b11..Force the C input in this product term to a logical one
 */
#define AOI_BFCRT23_PT3_CC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT3_CC_SHIFT)) & AOI_BFCRT23_PT3_CC_MASK)

#define AOI_BFCRT23_PT3_BC_MASK                  (0x30U)
#define AOI_BFCRT23_PT3_BC_SHIFT                 (4U)
/*! PT3_BC - Product term 3, B input configuration
 *  0b00..Force the B input in this product term to a logical zero
 *  0b01..Pass the B input in this product term
 *  0b10..Complement the B input in this product term
 *  0b11..Force the B input in this product term to a logical one
 */
#define AOI_BFCRT23_PT3_BC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT3_BC_SHIFT)) & AOI_BFCRT23_PT3_BC_MASK)

#define AOI_BFCRT23_PT3_AC_MASK                  (0xC0U)
#define AOI_BFCRT23_PT3_AC_SHIFT                 (6U)
/*! PT3_AC - Product term 3, A input configuration
 *  0b00..Force the A input in this product term to a logical zero
 *  0b01..Pass the A input in this product term
 *  0b10..Complement the A input in this product term
 *  0b11..Force the A input in this product term to a logical one
 */
#define AOI_BFCRT23_PT3_AC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT3_AC_SHIFT)) & AOI_BFCRT23_PT3_AC_MASK)

#define AOI_BFCRT23_PT2_DC_MASK                  (0x300U)
#define AOI_BFCRT23_PT2_DC_SHIFT                 (8U)
/*! PT2_DC - Product term 2, D input configuration
 *  0b00..Force the D input in this product term to a logical zero
 *  0b01..Pass the D input in this product term
 *  0b10..Complement the D input in this product term
 *  0b11..Force the D input in this product term to a logical one
 */
#define AOI_BFCRT23_PT2_DC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT2_DC_SHIFT)) & AOI_BFCRT23_PT2_DC_MASK)

#define AOI_BFCRT23_PT2_CC_MASK                  (0xC00U)
#define AOI_BFCRT23_PT2_CC_SHIFT                 (10U)
/*! PT2_CC - Product term 2, C input configuration
 *  0b00..Force the C input in this product term to a logical zero
 *  0b01..Pass the C input in this product term
 *  0b10..Complement the C input in this product term
 *  0b11..Force the C input in this product term to a logical one
 */
#define AOI_BFCRT23_PT2_CC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT2_CC_SHIFT)) & AOI_BFCRT23_PT2_CC_MASK)

#define AOI_BFCRT23_PT2_BC_MASK                  (0x3000U)
#define AOI_BFCRT23_PT2_BC_SHIFT                 (12U)
/*! PT2_BC - Product term 2, B input configuration
 *  0b00..Force the B input in this product term to a logical zero
 *  0b01..Pass the B input in this product term
 *  0b10..Complement the B input in this product term
 *  0b11..Force the B input in this product term to a logical one
 */
#define AOI_BFCRT23_PT2_BC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT2_BC_SHIFT)) & AOI_BFCRT23_PT2_BC_MASK)

#define AOI_BFCRT23_PT2_AC_MASK                  (0xC000U)
#define AOI_BFCRT23_PT2_AC_SHIFT                 (14U)
/*! PT2_AC - Product term 2, A input configuration
 *  0b00..Force the A input in this product term to a logical zero
 *  0b01..Pass the A input in this product term
 *  0b10..Complement the A input in this product term
 *  0b11..Force the A input in this product term to a logical one
 */
#define AOI_BFCRT23_PT2_AC(x)                    (((uint16_t)(((uint16_t)(x)) << AOI_BFCRT23_PT2_AC_SHIFT)) & AOI_BFCRT23_PT2_AC_MASK)
/*! @} */

/* The count of AOI_BFCRT23 */
#define AOI_BFCRT23_COUNT                        (4U)


/*!
 * @}
 */ /* end of group AOI_Register_Masks */


 /* ----------------------------------------------------------------------------
   -- CCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_Register_Masks CCM Register Masks
 * @{
 */

/*! @name CCR - CCM Control Register */
/*! @{ */

#define CCM_CCR_OSCNT_MASK                       (0xFFU)
#define CCM_CCR_OSCNT_SHIFT                      (0U)
/*! OSCNT - Oscillator ready counter value. These bits define value of 32KHz counter, that serve as
 *    counter for oscillator lock time (count to n+1 ckil's). This is used for oscillator lock time.
 *    Current estimation is ~5ms. This counter will be used in ignition sequence and in wake from
 *    stop sequence if sbyos bit was defined, to notify that on chip oscillator output is ready for
 *    the dpll_ip to use and only then the gate in dpll_ip can be opened.
 */
#define CCM_CCR_OSCNT(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCR_OSCNT_SHIFT)) & CCM_CCR_OSCNT_MASK)

#define CCM_CCR_COSC_EN_MASK                     (0x1000U)
#define CCM_CCR_COSC_EN_SHIFT                    (12U)
/*! COSC_EN
 *  0b0..disable on chip oscillator
 *  0b1..enable on chip oscillator
 */
#define CCM_CCR_COSC_EN(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CCR_COSC_EN_SHIFT)) & CCM_CCR_COSC_EN_MASK)

#define CCM_CCR_REG_BYPASS_COUNT_MASK            (0x7E00000U)
#define CCM_CCR_REG_BYPASS_COUNT_SHIFT           (21U)
/*! REG_BYPASS_COUNT
 *  0b000000..no delay
 *  0b000001..1 CKIL clock period delay
 *  0b111111..63 CKIL clock periods delay
 */
#define CCM_CCR_REG_BYPASS_COUNT(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCR_REG_BYPASS_COUNT_SHIFT)) & CCM_CCR_REG_BYPASS_COUNT_MASK)

#define CCM_CCR_RBC_EN_MASK                      (0x8000000U)
#define CCM_CCR_RBC_EN_SHIFT                     (27U)
/*! RBC_EN
 *  0b1..REG_BYPASS_COUNTER enabled.
 *  0b0..REG_BYPASS_COUNTER disabled
 */
#define CCM_CCR_RBC_EN(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCR_RBC_EN_SHIFT)) & CCM_CCR_RBC_EN_MASK)
/*! @} */

/*! @name CSR - CCM Status Register */
/*! @{ */

#define CCM_CSR_REF_EN_B_MASK                    (0x1U)
#define CCM_CSR_REF_EN_B_SHIFT                   (0U)
/*! REF_EN_B
 *  0b0..value of CCM_REF_EN_B is '0'
 *  0b1..value of CCM_REF_EN_B is '1'
 */
#define CCM_CSR_REF_EN_B(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CSR_REF_EN_B_SHIFT)) & CCM_CSR_REF_EN_B_MASK)

#define CCM_CSR_CAMP2_READY_MASK                 (0x8U)
#define CCM_CSR_CAMP2_READY_SHIFT                (3U)
/*! CAMP2_READY
 *  0b0..CAMP2 is not ready.
 *  0b1..CAMP2 is ready.
 */
#define CCM_CSR_CAMP2_READY(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CSR_CAMP2_READY_SHIFT)) & CCM_CSR_CAMP2_READY_MASK)

#define CCM_CSR_COSC_READY_MASK                  (0x20U)
#define CCM_CSR_COSC_READY_SHIFT                 (5U)
/*! COSC_READY
 *  0b0..on board oscillator is not ready.
 *  0b1..on board oscillator is ready.
 */
#define CCM_CSR_COSC_READY(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CSR_COSC_READY_SHIFT)) & CCM_CSR_COSC_READY_MASK)
/*! @} */

/*! @name CCSR - CCM Clock Switcher Register */
/*! @{ */

#define CCM_CCSR_PLL3_SW_CLK_SEL_MASK            (0x1U)
#define CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT           (0U)
/*! PLL3_SW_CLK_SEL
 *  0b0..pll3_main_clk
 *  0b1..pll3 bypass clock
 */
#define CCM_CCSR_PLL3_SW_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CCSR_PLL3_SW_CLK_SEL_SHIFT)) & CCM_CCSR_PLL3_SW_CLK_SEL_MASK)
/*! @} */

/*! @name CBCDR - CCM Bus Clock Divider Register */
/*! @{ */

#define CCM_CBCDR_IPG_PODF_MASK                  (0x300U)
#define CCM_CBCDR_IPG_PODF_SHIFT                 (8U)
/*! IPG_PODF
 *  0b00..divide by 1
 *  0b01..divide by 2
 *  0b10..divide by 3
 *  0b11..divide by 4
 */
#define CCM_CBCDR_IPG_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_IPG_PODF_SHIFT)) & CCM_CBCDR_IPG_PODF_MASK)

#define CCM_CBCDR_AHB_PODF_MASK                  (0x1C00U)
#define CCM_CBCDR_AHB_PODF_SHIFT                 (10U)
/*! AHB_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CBCDR_AHB_PODF(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_AHB_PODF_SHIFT)) & CCM_CBCDR_AHB_PODF_MASK)

#define CCM_CBCDR_PERIPH_CLK_SEL_MASK            (0x2000000U)
#define CCM_CBCDR_PERIPH_CLK_SEL_SHIFT           (25U)
/*! PERIPH_CLK_SEL
 *  0b0..derive clock selected by CCM_CBCMR[CORE_CLK_PRE_SEL]
 *  0b1..derive clock selected by CCM_CBCMR[PERIPH_CLK2_SEL]
 */
#define CCM_CBCDR_PERIPH_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CBCDR_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCDR_PERIPH_CLK_SEL_MASK)
/*! @} */

/*! @name CBCMR - CCM Bus Clock Multiplexer Register */
/*! @{ */

#define CCM_CBCMR_LPSPI_CLK_SEL_MASK             (0x30U)
#define CCM_CBCMR_LPSPI_CLK_SEL_SHIFT            (4U)
/*! LPSPI_CLK_SEL
 *  0b00..derive clock from PLL3 PFD1 clk
 *  0b01..derive clock from PLL3 PFD0
 *  0b10..derive clock from PLL2
 *  0b11..derive clock from PLL2 PFD2
 */
#define CCM_CBCMR_LPSPI_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LPSPI_CLK_SEL_SHIFT)) & CCM_CBCMR_LPSPI_CLK_SEL_MASK)

#define CCM_CBCMR_PERIPH_CLK2_SEL_MASK           (0x3000U)
#define CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT          (12U)
/*! PERIPH_CLK2_SEL
 *  0b00..derive clock from pll3_sw_clk
 *  0b01..derive clock from osc_clk
 *  0b10..derive clock from pll2_bypass_clk
 *  0b11..reserved
 */
#define CCM_CBCMR_PERIPH_CLK2_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PERIPH_CLK2_SEL_SHIFT)) & CCM_CBCMR_PERIPH_CLK2_SEL_MASK)

#define CCM_CBCMR_TRACE_CLK_SEL_MASK             (0xC000U)
#define CCM_CBCMR_TRACE_CLK_SEL_SHIFT            (14U)
/*! TRACE_CLK_SEL
 *  0b00..derive clock from PLL2
 *  0b01..derive clock from PLL2 PFD2
 *  0b10..derive clock from PLL2 PFD0
 *  0b11..derive clock from PLL2 PFD1
 */
#define CCM_CBCMR_TRACE_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_TRACE_CLK_SEL_SHIFT)) & CCM_CBCMR_TRACE_CLK_SEL_MASK)

#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK        (0xC0000U)
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT       (18U)
/*! PRE_PERIPH_CLK_SEL
 *  0b00..derive clock from PLL2
 *  0b01..derive clock from PLL3 PFD3
 *  0b10..derive clock from PLL2 PFD3
 *  0b11..derive clock from PLL6
 */
#define CCM_CBCMR_PRE_PERIPH_CLK_SEL(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_PRE_PERIPH_CLK_SEL_SHIFT)) & CCM_CBCMR_PRE_PERIPH_CLK_SEL_MASK)

#define CCM_CBCMR_LPSPI_PODF_MASK                (0x3C000000U)
#define CCM_CBCMR_LPSPI_PODF_SHIFT               (26U)
/*! LPSPI_PODF
 *  0b0000..divide by 1
 *  0b0001..divide by 2
 *  0b0010..divide by 3
 *  0b0011..divide by 4
 *  0b0100..divide by 5
 *  0b0101..divide by 6
 *  0b0110..divide by 7
 *  0b0111..divide by 8
 *  0b1000..divide by 9
 *  0b1001..divide by 10
 *  0b1010..divide by 11
 *  0b1011..divide by 12
 *  0b1100..divide by 13
 *  0b1101..divide by 14
 *  0b1110..divide by 15
 *  0b1111..divide by 16
 */
#define CCM_CBCMR_LPSPI_PODF(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CBCMR_LPSPI_PODF_SHIFT)) & CCM_CBCMR_LPSPI_PODF_MASK)
/*! @} */

/*! @name CSCMR1 - CCM Serial Clock Multiplexer Register 1 */
/*! @{ */

#define CCM_CSCMR1_PERCLK_PODF_MASK              (0x3FU)
#define CCM_CSCMR1_PERCLK_PODF_SHIFT             (0U)
/*! PERCLK_PODF - Divider for perclk podf.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCMR1_PERCLK_PODF(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_PODF_SHIFT)) & CCM_CSCMR1_PERCLK_PODF_MASK)

#define CCM_CSCMR1_PERCLK_CLK_SEL_MASK           (0x40U)
#define CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT          (6U)
/*! PERCLK_CLK_SEL
 *  0b0..derive clock from ipg clk root
 *  0b1..derive clock from osc_clk
 */
#define CCM_CSCMR1_PERCLK_CLK_SEL(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_PERCLK_CLK_SEL_SHIFT)) & CCM_CSCMR1_PERCLK_CLK_SEL_MASK)

#define CCM_CSCMR1_SAI1_CLK_SEL_MASK             (0xC00U)
#define CCM_CSCMR1_SAI1_CLK_SEL_SHIFT            (10U)
/*! SAI1_CLK_SEL
 *  0b00..derive clock from PLL3 PFD2
 *  0b01..derive from pll3_sw_clk
 *  0b10..derive clock from PLL4
 *  0b11..Reserved
 */
#define CCM_CSCMR1_SAI1_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI1_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI1_CLK_SEL_MASK)

#define CCM_CSCMR1_SAI3_CLK_SEL_MASK             (0xC000U)
#define CCM_CSCMR1_SAI3_CLK_SEL_SHIFT            (14U)
/*! SAI3_CLK_SEL
 *  0b00..derive clock from PLL3 PFD2
 *  0b01..derive from pll3_sw_clk
 *  0b10..derive clock from PLL4
 *  0b11..Reserved
 */
#define CCM_CSCMR1_SAI3_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_SAI3_CLK_SEL_SHIFT)) & CCM_CSCMR1_SAI3_CLK_SEL_MASK)

#define CCM_CSCMR1_FLEXSPI_PODF_MASK             (0x3800000U)
#define CCM_CSCMR1_FLEXSPI_PODF_SHIFT            (23U)
/*! FLEXSPI_PODF
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CSCMR1_FLEXSPI_PODF(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_FLEXSPI_PODF_SHIFT)) & CCM_CSCMR1_FLEXSPI_PODF_MASK)

#define CCM_CSCMR1_FLEXSPI_CLK_SEL_MASK          (0x60000000U)
#define CCM_CSCMR1_FLEXSPI_CLK_SEL_SHIFT         (29U)
/*! FLEXSPI_CLK_SEL
 *  0b00..derive clock from PLL2
 *  0b01..derive clock from pll3_sw_clk
 *  0b10..derive clock from PLL2 PFD2
 *  0b11..derive clock from PLL3 PFD0
 */
#define CCM_CSCMR1_FLEXSPI_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_FLEXSPI_CLK_SEL_SHIFT)) & CCM_CSCMR1_FLEXSPI_CLK_SEL_MASK)

#define CCM_CSCMR1_FLEXSPI_CLK_SRC_MASK          (0x80000000U)
#define CCM_CSCMR1_FLEXSPI_CLK_SRC_SHIFT         (31U)
/*! FLEXSPI_CLK_SRC
 *  0b0..derive clock selected by CCM_CSCMR1[FLEXSPI_CLK_SEL]
 *  0b1..derive clock selected by CCM_CBCMR[PERIPH_CLK2_ SEL]
 */
#define CCM_CSCMR1_FLEXSPI_CLK_SRC(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR1_FLEXSPI_CLK_SRC_SHIFT)) & CCM_CSCMR1_FLEXSPI_CLK_SRC_MASK)
/*! @} */

/*! @name CSCMR2 - CCM Serial Clock Multiplexer Register 2 */
/*! @{ */

#define CCM_CSCMR2_FLEXIO1_CLK_SEL_MASK          (0x180000U)
#define CCM_CSCMR2_FLEXIO1_CLK_SEL_SHIFT         (19U)
/*! FLEXIO1_CLK_SEL
 *  0b00..derive clock from PLL4 divided clock
 *  0b01..derive clock from PLL3 PFD2 clock
 *  0b10..derive from PLL2
 *  0b11..derive clock from pll3_sw_clk
 */
#define CCM_CSCMR2_FLEXIO1_CLK_SEL(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_FLEXIO1_CLK_SEL_SHIFT)) & CCM_CSCMR2_FLEXIO1_CLK_SEL_MASK)

#define CCM_CSCMR2_ADC_ACLK_PODF_MASK            (0x78000000U)
#define CCM_CSCMR2_ADC_ACLK_PODF_SHIFT           (27U)
/*! ADC_ACLK_PODF - Divider for ADC alt_clk, as the list below (other values reserved).
 *  0b0111..pll3_sw_clk / 8
 *  0b1011..pll3_sw_clk / 12
 *  0b1111..pll3_sw_clk / 16
 */
#define CCM_CSCMR2_ADC_ACLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_ADC_ACLK_PODF_SHIFT)) & CCM_CSCMR2_ADC_ACLK_PODF_MASK)

#define CCM_CSCMR2_ADC_ACLK_EN_MASK              (0x80000000U)
#define CCM_CSCMR2_ADC_ACLK_EN_SHIFT             (31U)
/*! ADC_ACLK_EN
 *  0b0..ADC alt_clk source is disabled
 *  0b1..ADC alt_clk source is enabled
 */
#define CCM_CSCMR2_ADC_ACLK_EN(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CSCMR2_ADC_ACLK_EN_SHIFT)) & CCM_CSCMR2_ADC_ACLK_EN_MASK)
/*! @} */

/*! @name CSCDR1 - CCM Serial Clock Divider Register 1 */
/*! @{ */

#define CCM_CSCDR1_UART_CLK_PODF_MASK            (0x3FU)
#define CCM_CSCDR1_UART_CLK_PODF_SHIFT           (0U)
/*! UART_CLK_PODF - Divider for uart clock podf.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCDR1_UART_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_PODF_SHIFT)) & CCM_CSCDR1_UART_CLK_PODF_MASK)

#define CCM_CSCDR1_UART_CLK_SEL_MASK             (0xC0U)
#define CCM_CSCDR1_UART_CLK_SEL_SHIFT            (6U)
/*! UART_CLK_SEL
 *  0b00..derive clock from pll3_80m
 *  0b01..derive clock from osc_clk
 *  0b10..derive clock from per_clk_root
 *  0b11..Reserved
 */
#define CCM_CSCDR1_UART_CLK_SEL(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_UART_CLK_SEL_SHIFT)) & CCM_CSCDR1_UART_CLK_SEL_MASK)

#define CCM_CSCDR1_TRACE_PODF_MASK               (0x1E000000U)
#define CCM_CSCDR1_TRACE_PODF_SHIFT              (25U)
/*! TRACE_PODF
 *  0b0000..divide by 1
 *  0b0001..divide by 2
 *  0b0010..divide by 3
 *  0b0011..divide by 4
 *  0b0100..divide by 5
 *  0b0101..divide by 6
 *  0b0110..divide by 7
 *  0b0111..divide by 8
 *  0b1000..divide by 9
 *  0b1001..divide by 10
 *  0b1010..divide by 11
 *  0b1011..divide by 12
 *  0b1100..divide by 13
 *  0b1101..divide by 14
 *  0b1110..divide by 15
 *  0b1111..divide by 16
 */
#define CCM_CSCDR1_TRACE_PODF(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR1_TRACE_PODF_SHIFT)) & CCM_CSCDR1_TRACE_PODF_MASK)
/*! @} */

/*! @name CS1CDR - CCM Clock Divider Register */
/*! @{ */

#define CCM_CS1CDR_SAI1_CLK_PODF_MASK            (0x3FU)
#define CCM_CS1CDR_SAI1_CLK_PODF_SHIFT           (0U)
/*! SAI1_CLK_PODF - Divider for sai1 clock podf. The input clock to this divider should be lower
 *    than 300Mhz, the predivider can be used to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CS1CDR_SAI1_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PODF_MASK)

#define CCM_CS1CDR_SAI1_CLK_PRED_MASK            (0x1C0U)
#define CCM_CS1CDR_SAI1_CLK_PRED_SHIFT           (6U)
/*! SAI1_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_SAI1_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI1_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI1_CLK_PRED_MASK)

#define CCM_CS1CDR_FLEXIO1_CLK_PRED_MASK         (0xE00U)
#define CCM_CS1CDR_FLEXIO1_CLK_PRED_SHIFT        (9U)
/*! FLEXIO1_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_FLEXIO1_CLK_PRED(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_FLEXIO1_CLK_PRED_SHIFT)) & CCM_CS1CDR_FLEXIO1_CLK_PRED_MASK)

#define CCM_CS1CDR_SAI3_CLK_PODF_MASK            (0x3F0000U)
#define CCM_CS1CDR_SAI3_CLK_PODF_SHIFT           (16U)
/*! SAI3_CLK_PODF - Divider for sai3 clock podf. The input clock to this divider should be lower
 *    than 300Mhz, the predivider can be used to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CS1CDR_SAI3_CLK_PODF(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PODF_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PODF_MASK)

#define CCM_CS1CDR_SAI3_CLK_PRED_MASK            (0x1C00000U)
#define CCM_CS1CDR_SAI3_CLK_PRED_SHIFT           (22U)
/*! SAI3_CLK_PRED
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CS1CDR_SAI3_CLK_PRED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_SAI3_CLK_PRED_SHIFT)) & CCM_CS1CDR_SAI3_CLK_PRED_MASK)

#define CCM_CS1CDR_FLEXIO1_CLK_PODF_MASK         (0x1E000000U)
#define CCM_CS1CDR_FLEXIO1_CLK_PODF_SHIFT        (25U)
/*! FLEXIO1_CLK_PODF - Divider for flexio1 clock. Divider should be updated when output clock is gated.
 *  0b0000..Divide by 1
 *  0b0001..Divide by 2
 *  0b0010..Divide by 3
 *  0b0011..Divide by 4
 *  0b0100..Divide by 5
 *  0b0101..Divide by 6
 *  0b0110..Divide by 7
 *  0b0111..Divide by 8
 *  0b1000..Divide by 9
 *  0b1001..Divide by 10
 *  0b1010..Divide by 11
 *  0b1011..Divide by 12
 *  0b1100..Divide by 13
 *  0b1101..Divide by 14
 *  0b1110..Divide by 15
 *  0b1111..Divide by 16
 */
#define CCM_CS1CDR_FLEXIO1_CLK_PODF(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CS1CDR_FLEXIO1_CLK_PODF_SHIFT)) & CCM_CS1CDR_FLEXIO1_CLK_PODF_MASK)
/*! @} */

/*! @name CDCDR - CCM D1 Clock Divider Register */
/*! @{ */

#define CCM_CDCDR_SPDIF0_CLK_SEL_MASK            (0x300000U)
#define CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT           (20U)
/*! SPDIF0_CLK_SEL
 *  0b00..derive clock from PLL4
 *  0b01..derive clock from PLL3 PFD2
 *  0b10..Reserved
 *  0b11..derive clock from pll3_sw_clk
 */
#define CCM_CDCDR_SPDIF0_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_SEL_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_SEL_MASK)

#define CCM_CDCDR_SPDIF0_CLK_PODF_MASK           (0x1C00000U)
#define CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT          (22U)
/*! SPDIF0_CLK_PODF - Divider for spdif0 clock podf. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_SPDIF0_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PODF_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PODF_MASK)

#define CCM_CDCDR_SPDIF0_CLK_PRED_MASK           (0xE000000U)
#define CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT          (25U)
/*! SPDIF0_CLK_PRED - Divider for spdif0 clock pred. Divider should be updated when output clock is gated.
 *  0b000..Divide by 1
 *  0b001..Divide by 2
 *  0b010..Divide by 3
 *  0b011..Divide by 4
 *  0b100..Divide by 5
 *  0b101..Divide by 6
 *  0b110..Divide by 7
 *  0b111..Divide by 8
 */
#define CCM_CDCDR_SPDIF0_CLK_PRED(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CDCDR_SPDIF0_CLK_PRED_SHIFT)) & CCM_CDCDR_SPDIF0_CLK_PRED_MASK)
/*! @} */

/*! @name CSCDR2 - CCM Serial Clock Divider Register 2 */
/*! @{ */

#define CCM_CSCDR2_LPI2C_CLK_SEL_MASK            (0x40000U)
#define CCM_CSCDR2_LPI2C_CLK_SEL_SHIFT           (18U)
/*! LPI2C_CLK_SEL
 *  0b0..derive clock from pll3_60m
 *  0b1..derive clock from osc_clk
 */
#define CCM_CSCDR2_LPI2C_CLK_SEL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LPI2C_CLK_SEL_SHIFT)) & CCM_CSCDR2_LPI2C_CLK_SEL_MASK)

#define CCM_CSCDR2_LPI2C_CLK_PODF_MASK           (0x1F80000U)
#define CCM_CSCDR2_LPI2C_CLK_PODF_SHIFT          (19U)
/*! LPI2C_CLK_PODF - Divider for lpi2c clock podf. Divider should be updated when output clock is
 *    gated. The input clock to this divider should be lower than 300Mhz, the predivider can be used
 *    to achieve this.
 *  0b000000..Divide by 1
 *  0b000001..Divide by 2
 *  0b000010..Divide by 3
 *  0b000011..Divide by 4
 *  0b000100..Divide by 5
 *  0b000101..Divide by 6
 *  0b000110..Divide by 7
 *  0b000111..Divide by 8
 *  0b001000..Divide by 9
 *  0b001001..Divide by 10
 *  0b001010..Divide by 11
 *  0b001011..Divide by 12
 *  0b001100..Divide by 13
 *  0b001101..Divide by 14
 *  0b001110..Divide by 15
 *  0b001111..Divide by 16
 *  0b010000..Divide by 17
 *  0b010001..Divide by 18
 *  0b010010..Divide by 19
 *  0b010011..Divide by 20
 *  0b010100..Divide by 21
 *  0b010101..Divide by 22
 *  0b010110..Divide by 23
 *  0b010111..Divide by 24
 *  0b011000..Divide by 25
 *  0b011001..Divide by 26
 *  0b011010..Divide by 27
 *  0b011011..Divide by 28
 *  0b011100..Divide by 29
 *  0b011101..Divide by 30
 *  0b011110..Divide by 31
 *  0b011111..Divide by 32
 *  0b100000..Divide by 33
 *  0b100001..Divide by 34
 *  0b100010..Divide by 35
 *  0b100011..Divide by 36
 *  0b100100..Divide by 37
 *  0b100101..Divide by 38
 *  0b100110..Divide by 39
 *  0b100111..Divide by 40
 *  0b101000..Divide by 41
 *  0b101001..Divide by 42
 *  0b101010..Divide by 43
 *  0b101011..Divide by 44
 *  0b101100..Divide by 45
 *  0b101101..Divide by 46
 *  0b101110..Divide by 47
 *  0b101111..Divide by 48
 *  0b110000..Divide by 49
 *  0b110001..Divide by 50
 *  0b110010..Divide by 51
 *  0b110011..Divide by 52
 *  0b110100..Divide by 53
 *  0b110101..Divide by 54
 *  0b110110..Divide by 55
 *  0b110111..Divide by 56
 *  0b111000..Divide by 57
 *  0b111001..Divide by 58
 *  0b111010..Divide by 59
 *  0b111011..Divide by 60
 *  0b111100..Divide by 61
 *  0b111101..Divide by 62
 *  0b111110..Divide by 63
 *  0b111111..Divide by 64
 */
#define CCM_CSCDR2_LPI2C_CLK_PODF(x)             (((uint32_t)(((uint32_t)(x)) << CCM_CSCDR2_LPI2C_CLK_PODF_SHIFT)) & CCM_CSCDR2_LPI2C_CLK_PODF_MASK)
/*! @} */

/*! @name CDHIPR - CCM Divider Handshake In-Process Register */
/*! @{ */

#define CCM_CDHIPR_AHB_PODF_BUSY_MASK            (0x2U)
#define CCM_CDHIPR_AHB_PODF_BUSY_SHIFT           (1U)
/*! AHB_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the ahb_podf will be applied.
 */
#define CCM_CDHIPR_AHB_PODF_BUSY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_AHB_PODF_BUSY_SHIFT)) & CCM_CDHIPR_AHB_PODF_BUSY_MASK)

#define CCM_CDHIPR_FLEXSPI_PODF_BUSY_MASK        (0x8U)
#define CCM_CDHIPR_FLEXSPI_PODF_BUSY_SHIFT       (3U)
/*! FLEXSPI_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the flexspi_podf will be
 *       applied.
 */
#define CCM_CDHIPR_FLEXSPI_PODF_BUSY(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_FLEXSPI_PODF_BUSY_SHIFT)) & CCM_CDHIPR_FLEXSPI_PODF_BUSY_MASK)

#define CCM_CDHIPR_PERCLK_PODF_BUSY_MASK         (0x10U)
#define CCM_CDHIPR_PERCLK_PODF_BUSY_SHIFT        (4U)
/*! PERCLK_PODF_BUSY
 *  0b0..divider is not busy and its value represents the actual division.
 *  0b1..divider is busy with handshake process with module. The value read in the divider represents the previous
 *       value of the division factor, and after the handshake the written value of the perclk_podf will be
 *       applied.
 */
#define CCM_CDHIPR_PERCLK_PODF_BUSY(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERCLK_PODF_BUSY_SHIFT)) & CCM_CDHIPR_PERCLK_PODF_BUSY_MASK)

#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK      (0x20U)
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT     (5U)
/*! PERIPH_CLK_SEL_BUSY
 *  0b0..mux is not busy and its value represents the actual division.
 *  0b1..mux is busy with handshake process with module. The value read in the periph_clk_sel represents the
 *       previous value of select, and after the handshake periph_clk_sel value will be applied.
 */
#define CCM_CDHIPR_PERIPH_CLK_SEL_BUSY(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_SHIFT)) & CCM_CDHIPR_PERIPH_CLK_SEL_BUSY_MASK)
/*! @} */

/*! @name CLPCR - CCM Low Power Control Register */
/*! @{ */

#define CCM_CLPCR_LPM_MASK                       (0x3U)
#define CCM_CLPCR_LPM_SHIFT                      (0U)
/*! LPM
 *  0b00..Remain in run mode
 *  0b01..Transfer to wait mode
 *  0b10..Transfer to stop mode
 *  0b11..Reserved
 */
#define CCM_CLPCR_LPM(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_LPM_SHIFT)) & CCM_CLPCR_LPM_MASK)

#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK        (0x20U)
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT       (5U)
/*! ARM_CLK_DIS_ON_LPM
 *  0b0..Arm clock enabled on wait mode.
 *  0b1..Arm clock disabled on wait mode. .
 */
#define CCM_CLPCR_ARM_CLK_DIS_ON_LPM(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_ARM_CLK_DIS_ON_LPM_SHIFT)) & CCM_CLPCR_ARM_CLK_DIS_ON_LPM_MASK)

#define CCM_CLPCR_SBYOS_MASK                     (0x40U)
#define CCM_CLPCR_SBYOS_SHIFT                    (6U)
/*! SBYOS
 *  0b0..On-chip oscillator will not be powered down, after next entrance to STOP mode. (CCM_REF_EN_B will remain
 *       asserted - '0' and cosc_pwrdown will remain de asserted - '0')
 *  0b1..On-chip oscillator will be powered down, after next entrance to STOP mode. (CCM_REF_EN_B will be
 *       deasserted - '1' and cosc_pwrdown will be asserted - '1'). When returning from STOP mode, external oscillator will
 *       be enabled again, on-chip oscillator will return to oscillator mode, and after oscnt count, CCM will
 *       continue with the exit from the STOP mode process.
 */
#define CCM_CLPCR_SBYOS(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_SBYOS_SHIFT)) & CCM_CLPCR_SBYOS_MASK)

#define CCM_CLPCR_DIS_REF_OSC_MASK               (0x80U)
#define CCM_CLPCR_DIS_REF_OSC_SHIFT              (7U)
/*! DIS_REF_OSC
 *  0b0..external high frequency oscillator will be enabled, i.e. CCM_REF_EN_B = '0'.
 *  0b1..external high frequency oscillator will be disabled, i.e. CCM_REF_EN_B = '1'
 */
#define CCM_CLPCR_DIS_REF_OSC(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_DIS_REF_OSC_SHIFT)) & CCM_CLPCR_DIS_REF_OSC_MASK)

#define CCM_CLPCR_VSTBY_MASK                     (0x100U)
#define CCM_CLPCR_VSTBY_SHIFT                    (8U)
/*! VSTBY
 *  0b0..Voltage will not be changed to standby voltage after next entrance to STOP mode. ( PMIC_STBY_REQ will remain negated - '0')
 *  0b1..Voltage will be requested to change to standby voltage after next entrance to stop mode. ( PMIC_STBY_REQ will be asserted - '1').
 */
#define CCM_CLPCR_VSTBY(x)                       (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_VSTBY_SHIFT)) & CCM_CLPCR_VSTBY_MASK)

#define CCM_CLPCR_STBY_COUNT_MASK                (0x600U)
#define CCM_CLPCR_STBY_COUNT_SHIFT               (9U)
/*! STBY_COUNT
 *  0b00..CCM will wait (1*pmic_delay_scaler)+1 ckil clock cycles
 *  0b01..CCM will wait (3*pmic_delay_scaler)+1 ckil clock cycles
 *  0b10..CCM will wait (7*pmic_delay_scaler)+1 ckil clock cycles
 *  0b11..CCM will wait (15*pmic_delay_scaler)+1 ckil clock cycles
 */
#define CCM_CLPCR_STBY_COUNT(x)                  (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_STBY_COUNT_SHIFT)) & CCM_CLPCR_STBY_COUNT_MASK)

#define CCM_CLPCR_COSC_PWRDOWN_MASK              (0x800U)
#define CCM_CLPCR_COSC_PWRDOWN_SHIFT             (11U)
/*! COSC_PWRDOWN
 *  0b0..On chip oscillator will not be powered down, i.e. cosc_pwrdown = '0'.
 *  0b1..On chip oscillator will be powered down, i.e. cosc_pwrdown = '1'.
 */
#define CCM_CLPCR_COSC_PWRDOWN(x)                (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_COSC_PWRDOWN_SHIFT)) & CCM_CLPCR_COSC_PWRDOWN_MASK)

#define CCM_CLPCR_MASK_CORE0_WFI_MASK            (0x400000U)
#define CCM_CLPCR_MASK_CORE0_WFI_SHIFT           (22U)
/*! MASK_CORE0_WFI
 *  0b0..WFI of core0 is not masked
 *  0b1..WFI of core0 is masked
 */
#define CCM_CLPCR_MASK_CORE0_WFI(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_CORE0_WFI_SHIFT)) & CCM_CLPCR_MASK_CORE0_WFI_MASK)

#define CCM_CLPCR_MASK_SCU_IDLE_MASK             (0x4000000U)
#define CCM_CLPCR_MASK_SCU_IDLE_SHIFT            (26U)
/*! MASK_SCU_IDLE
 *  0b1..SCU IDLE is masked
 *  0b0..SCU IDLE is not masked
 */
#define CCM_CLPCR_MASK_SCU_IDLE(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_SCU_IDLE_SHIFT)) & CCM_CLPCR_MASK_SCU_IDLE_MASK)

#define CCM_CLPCR_MASK_L2CC_IDLE_MASK            (0x8000000U)
#define CCM_CLPCR_MASK_L2CC_IDLE_SHIFT           (27U)
/*! MASK_L2CC_IDLE
 *  0b1..L2CC IDLE is masked
 *  0b0..L2CC IDLE is not masked
 */
#define CCM_CLPCR_MASK_L2CC_IDLE(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CLPCR_MASK_L2CC_IDLE_SHIFT)) & CCM_CLPCR_MASK_L2CC_IDLE_MASK)
/*! @} */

/*! @name CISR - CCM Interrupt Status Register */
/*! @{ */

#define CCM_CISR_LRF_PLL_MASK                    (0x1U)
#define CCM_CISR_LRF_PLL_SHIFT                   (0U)
/*! LRF_PLL
 *  0b0..interrupt is not generated due to lock ready of all enabled and not bypaseed PLLs
 *  0b1..interrupt generated due to lock ready of all enabled and not bypaseed PLLs
 */
#define CCM_CISR_LRF_PLL(x)                      (((uint32_t)(((uint32_t)(x)) << CCM_CISR_LRF_PLL_SHIFT)) & CCM_CISR_LRF_PLL_MASK)

#define CCM_CISR_COSC_READY_MASK                 (0x40U)
#define CCM_CISR_COSC_READY_SHIFT                (6U)
/*! COSC_READY
 *  0b0..interrupt is not generated due to on board oscillator ready
 *  0b1..interrupt generated due to on board oscillator ready
 */
#define CCM_CISR_COSC_READY(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CISR_COSC_READY_SHIFT)) & CCM_CISR_COSC_READY_MASK)

#define CCM_CISR_FLEXSPI_PODF_LOADED_MASK        (0x10000U)
#define CCM_CISR_FLEXSPI_PODF_LOADED_SHIFT       (16U)
/*! FLEXSPI_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of flexspi_podf
 *  0b1..interrupt generated due to frequency change of flexspi_podf
 */
#define CCM_CISR_FLEXSPI_PODF_LOADED(x)          (((uint32_t)(((uint32_t)(x)) << CCM_CISR_FLEXSPI_PODF_LOADED_SHIFT)) & CCM_CISR_FLEXSPI_PODF_LOADED_MASK)

#define CCM_CISR_PERCLK_PODF_LOADED_MASK         (0x40000U)
#define CCM_CISR_PERCLK_PODF_LOADED_SHIFT        (18U)
/*! PERCLK_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of perclk_podf
 *  0b1..interrupt generated due to frequency change of perclk_podf
 */
#define CCM_CISR_PERCLK_PODF_LOADED(x)           (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERCLK_PODF_LOADED_SHIFT)) & CCM_CISR_PERCLK_PODF_LOADED_MASK)

#define CCM_CISR_AHB_PODF_LOADED_MASK            (0x100000U)
#define CCM_CISR_AHB_PODF_LOADED_SHIFT           (20U)
/*! AHB_PODF_LOADED
 *  0b0..interrupt is not generated due to frequency change of ahb_podf
 *  0b1..interrupt generated due to frequency change of ahb_podf
 */
#define CCM_CISR_AHB_PODF_LOADED(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CISR_AHB_PODF_LOADED_SHIFT)) & CCM_CISR_AHB_PODF_LOADED_MASK)

#define CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK      (0x400000U)
#define CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT     (22U)
/*! PERIPH_CLK_SEL_LOADED
 *  0b0..interrupt is not generated due to update of periph_clk_sel.
 *  0b1..interrupt generated due to update of periph_clk_sel.
 */
#define CCM_CISR_PERIPH_CLK_SEL_LOADED(x)        (((uint32_t)(((uint32_t)(x)) << CCM_CISR_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CISR_PERIPH_CLK_SEL_LOADED_MASK)
/*! @} */

/*! @name CIMR - CCM Interrupt Mask Register */
/*! @{ */

#define CCM_CIMR_MASK_LRF_PLL_MASK               (0x1U)
#define CCM_CIMR_MASK_LRF_PLL_SHIFT              (0U)
/*! MASK_LRF_PLL
 *  0b0..don't mask interrupt due to lrf of PLLs - interrupt will be created
 *  0b1..mask interrupt due to lrf of PLLs
 */
#define CCM_CIMR_MASK_LRF_PLL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_LRF_PLL_SHIFT)) & CCM_CIMR_MASK_LRF_PLL_MASK)

#define CCM_CIMR_MASK_COSC_READY_MASK            (0x40U)
#define CCM_CIMR_MASK_COSC_READY_SHIFT           (6U)
/*! MASK_COSC_READY
 *  0b0..don't mask interrupt due to on board oscillator ready - interrupt will be created
 *  0b1..mask interrupt due to on board oscillator ready
 */
#define CCM_CIMR_MASK_COSC_READY(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_COSC_READY_SHIFT)) & CCM_CIMR_MASK_COSC_READY_MASK)

#define CCM_CIMR_MASK_FLEXSPI_PODF_LOADED_MASK   (0x10000U)
#define CCM_CIMR_MASK_FLEXSPI_PODF_LOADED_SHIFT  (16U)
/*! MASK_FLEXSPI_PODF_LOADED
 *  0b0..don't mask interrupt due to update of flexspi_podf
 *  0b1..mask interrupt due to update of flexspi_podf
 */
#define CCM_CIMR_MASK_FLEXSPI_PODF_LOADED(x)     (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_FLEXSPI_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_FLEXSPI_PODF_LOADED_MASK)

#define CCM_CIMR_MASK_PERCLK_PODF_LOADED_MASK    (0x40000U)
#define CCM_CIMR_MASK_PERCLK_PODF_LOADED_SHIFT   (18U)
/*! MASK_PERCLK_PODF_LOADED
 *  0b0..don't mask interrupt due to update of perclk_podf
 *  0b1..mask interrupt due to update of perclk_podf
 */
#define CCM_CIMR_MASK_PERCLK_PODF_LOADED(x)      (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERCLK_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_PERCLK_PODF_LOADED_MASK)

#define CCM_CIMR_MASK_AHB_PODF_LOADED_MASK       (0x100000U)
#define CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT      (20U)
/*! MASK_AHB_PODF_LOADED
 *  0b0..don't mask interrupt due to frequency change of ahb_podf - interrupt will be created
 *  0b1..mask interrupt due to frequency change of ahb_podf
 */
#define CCM_CIMR_MASK_AHB_PODF_LOADED(x)         (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_AHB_PODF_LOADED_SHIFT)) & CCM_CIMR_MASK_AHB_PODF_LOADED_MASK)

#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK (0x400000U)
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT (22U)
/*! MASK_PERIPH_CLK_SEL_LOADED
 *  0b0..don't mask interrupt due to update of periph_clk_sel - interrupt will be created
 *  0b1..mask interrupt due to update of periph_clk_sel
 */
#define CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED(x)   (((uint32_t)(((uint32_t)(x)) << CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_SHIFT)) & CCM_CIMR_MASK_PERIPH_CLK_SEL_LOADED_MASK)
/*! @} */

/*! @name CCOSR - CCM Clock Output Source Register */
/*! @{ */

#define CCM_CCOSR_CLKO1_SEL_MASK                 (0xFU)
#define CCM_CCOSR_CLKO1_SEL_SHIFT                (0U)
/*! CLKO1_SEL
 *  0b0000..pll3_sw_clk (divided by 2)
 *  0b0001..PLL2 (divided by 2)
 *  0b0010..ENET PLL (divided by 2)
 *  0b0011..Reserved
 *  0b0101..Reserved
 *  0b0110..Reserved
 *  0b1010..Reserved
 *  0b1011..core_clk_root
 *  0b1100..ipg_clk_root
 *  0b1101..perclk_root
 *  0b1110..Reserved
 *  0b1111..pll4_main_clk
 */
#define CCM_CCOSR_CLKO1_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_SEL_SHIFT)) & CCM_CCOSR_CLKO1_SEL_MASK)

#define CCM_CCOSR_CLKO1_DIV_MASK                 (0x70U)
#define CCM_CCOSR_CLKO1_DIV_SHIFT                (4U)
/*! CLKO1_DIV
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CCOSR_CLKO1_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_DIV_SHIFT)) & CCM_CCOSR_CLKO1_DIV_MASK)

#define CCM_CCOSR_CLKO1_EN_MASK                  (0x80U)
#define CCM_CCOSR_CLKO1_EN_SHIFT                 (7U)
/*! CLKO1_EN
 *  0b0..CCM_CLKO1 disabled.
 *  0b1..CCM_CLKO1 enabled.
 */
#define CCM_CCOSR_CLKO1_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO1_EN_SHIFT)) & CCM_CCOSR_CLKO1_EN_MASK)

#define CCM_CCOSR_CLK_OUT_SEL_MASK               (0x100U)
#define CCM_CCOSR_CLK_OUT_SEL_SHIFT              (8U)
/*! CLK_OUT_SEL
 *  0b0..CCM_CLKO1 output drives CCM_CLKO1 clock
 *  0b1..CCM_CLKO1 output drives CCM_CLKO2 clock
 */
#define CCM_CCOSR_CLK_OUT_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLK_OUT_SEL_SHIFT)) & CCM_CCOSR_CLK_OUT_SEL_MASK)

#define CCM_CCOSR_CLKO2_SEL_MASK                 (0x1F0000U)
#define CCM_CCOSR_CLKO2_SEL_SHIFT                (16U)
/*! CLKO2_SEL
 *  0b00101..Reserved
 *  0b00110..lpi2c_clk_root
 *  0b01110..osc_clk
 *  0b10000..lpspi_clk_root
 *  0b10010..sai1_clk_root
 *  0b10100..sai3_clk_root
 *  0b10110..trace_clk_root
 *  0b11011..flexspi_clk_root
 *  0b11100..uart_clk_root
 *  0b11101..spdif0_clk_root
 *  0b11111..Reserved
 */
#define CCM_CCOSR_CLKO2_SEL(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_SEL_SHIFT)) & CCM_CCOSR_CLKO2_SEL_MASK)

#define CCM_CCOSR_CLKO2_DIV_MASK                 (0xE00000U)
#define CCM_CCOSR_CLKO2_DIV_SHIFT                (21U)
/*! CLKO2_DIV
 *  0b000..divide by 1
 *  0b001..divide by 2
 *  0b010..divide by 3
 *  0b011..divide by 4
 *  0b100..divide by 5
 *  0b101..divide by 6
 *  0b110..divide by 7
 *  0b111..divide by 8
 */
#define CCM_CCOSR_CLKO2_DIV(x)                   (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_DIV_SHIFT)) & CCM_CCOSR_CLKO2_DIV_MASK)

#define CCM_CCOSR_CLKO2_EN_MASK                  (0x1000000U)
#define CCM_CCOSR_CLKO2_EN_SHIFT                 (24U)
/*! CLKO2_EN
 *  0b0..CCM_CLKO2 disabled.
 *  0b1..CCM_CLKO2 enabled.
 */
#define CCM_CCOSR_CLKO2_EN(x)                    (((uint32_t)(((uint32_t)(x)) << CCM_CCOSR_CLKO2_EN_SHIFT)) & CCM_CCOSR_CLKO2_EN_MASK)
/*! @} */

/*! @name CGPR - CCM General Purpose Register */
/*! @{ */

#define CCM_CGPR_PMIC_DELAY_SCALER_MASK          (0x1U)
#define CCM_CGPR_PMIC_DELAY_SCALER_SHIFT         (0U)
/*! PMIC_DELAY_SCALER
 *  0b0..clock is not divided
 *  0b1..clock is divided /8
 */
#define CCM_CGPR_PMIC_DELAY_SCALER(x)            (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_PMIC_DELAY_SCALER_SHIFT)) & CCM_CGPR_PMIC_DELAY_SCALER_MASK)

#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK     (0x10U)
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT    (4U)
/*! EFUSE_PROG_SUPPLY_GATE
 *  0b0..fuse programing supply voltage is gated off to the efuse module
 *  0b1..allow fuse programing.
 */
#define CCM_CGPR_EFUSE_PROG_SUPPLY_GATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_SHIFT)) & CCM_CGPR_EFUSE_PROG_SUPPLY_GATE_MASK)

#define CCM_CGPR_SYS_MEM_DS_CTRL_MASK            (0xC000U)
#define CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT           (14U)
/*! SYS_MEM_DS_CTRL
 *  0b00..Disable memory DS mode always
 *  0b01..Enable memory (outside Arm platform) DS mode when system STOP and PLL are disabled
 *  0b1x..enable memory (outside Arm platform) DS mode when system is in STOP mode
 */
#define CCM_CGPR_SYS_MEM_DS_CTRL(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_SYS_MEM_DS_CTRL_SHIFT)) & CCM_CGPR_SYS_MEM_DS_CTRL_MASK)

#define CCM_CGPR_FPL_MASK                        (0x10000U)
#define CCM_CGPR_FPL_SHIFT                       (16U)
/*! FPL - Fast PLL enable.
 *  0b0..Engage PLL enable default way.
 *  0b1..Engage PLL enable 3 CKIL clocks earlier at exiting low power mode (STOP). Should be used only if 24MHz OSC was active in low power mode.
 */
#define CCM_CGPR_FPL(x)                          (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_FPL_SHIFT)) & CCM_CGPR_FPL_MASK)

#define CCM_CGPR_INT_MEM_CLK_LPM_MASK            (0x20000U)
#define CCM_CGPR_INT_MEM_CLK_LPM_SHIFT           (17U)
/*! INT_MEM_CLK_LPM
 *  0b0..Disable the clock to the Arm platform memories when entering Low Power Mode
 *  0b1..Keep the clocks to the Arm platform memories enabled only if an interrupt is pending when entering Low
 *       Power Modes (WAIT and STOP without power gating)
 */
#define CCM_CGPR_INT_MEM_CLK_LPM(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CGPR_INT_MEM_CLK_LPM_SHIFT)) & CCM_CGPR_INT_MEM_CLK_LPM_MASK)
/*! @} */

/*! @name CCGR0 - CCM Clock Gating Register 0 */
/*! @{ */

#define CCM_CCGR0_CG0_MASK                       (0x3U)
#define CCM_CCGR0_CG0_SHIFT                      (0U)
#define CCM_CCGR0_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG0_SHIFT)) & CCM_CCGR0_CG0_MASK)

#define CCM_CCGR0_CG1_MASK                       (0xCU)
#define CCM_CCGR0_CG1_SHIFT                      (2U)
#define CCM_CCGR0_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG1_SHIFT)) & CCM_CCGR0_CG1_MASK)

#define CCM_CCGR0_CG2_MASK                       (0x30U)
#define CCM_CCGR0_CG2_SHIFT                      (4U)
#define CCM_CCGR0_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG2_SHIFT)) & CCM_CCGR0_CG2_MASK)

#define CCM_CCGR0_CG3_MASK                       (0xC0U)
#define CCM_CCGR0_CG3_SHIFT                      (6U)
#define CCM_CCGR0_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG3_SHIFT)) & CCM_CCGR0_CG3_MASK)

#define CCM_CCGR0_CG4_MASK                       (0x300U)
#define CCM_CCGR0_CG4_SHIFT                      (8U)
#define CCM_CCGR0_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG4_SHIFT)) & CCM_CCGR0_CG4_MASK)

#define CCM_CCGR0_CG5_MASK                       (0xC00U)
#define CCM_CCGR0_CG5_SHIFT                      (10U)
#define CCM_CCGR0_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG5_SHIFT)) & CCM_CCGR0_CG5_MASK)

#define CCM_CCGR0_CG6_MASK                       (0x3000U)
#define CCM_CCGR0_CG6_SHIFT                      (12U)
#define CCM_CCGR0_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG6_SHIFT)) & CCM_CCGR0_CG6_MASK)

#define CCM_CCGR0_CG7_MASK                       (0xC000U)
#define CCM_CCGR0_CG7_SHIFT                      (14U)
#define CCM_CCGR0_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG7_SHIFT)) & CCM_CCGR0_CG7_MASK)

#define CCM_CCGR0_CG8_MASK                       (0x30000U)
#define CCM_CCGR0_CG8_SHIFT                      (16U)
#define CCM_CCGR0_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG8_SHIFT)) & CCM_CCGR0_CG8_MASK)

#define CCM_CCGR0_CG9_MASK                       (0xC0000U)
#define CCM_CCGR0_CG9_SHIFT                      (18U)
#define CCM_CCGR0_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG9_SHIFT)) & CCM_CCGR0_CG9_MASK)

#define CCM_CCGR0_CG10_MASK                      (0x300000U)
#define CCM_CCGR0_CG10_SHIFT                     (20U)
#define CCM_CCGR0_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG10_SHIFT)) & CCM_CCGR0_CG10_MASK)

#define CCM_CCGR0_CG11_MASK                      (0xC00000U)
#define CCM_CCGR0_CG11_SHIFT                     (22U)
#define CCM_CCGR0_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG11_SHIFT)) & CCM_CCGR0_CG11_MASK)

#define CCM_CCGR0_CG12_MASK                      (0x3000000U)
#define CCM_CCGR0_CG12_SHIFT                     (24U)
#define CCM_CCGR0_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG12_SHIFT)) & CCM_CCGR0_CG12_MASK)

#define CCM_CCGR0_CG13_MASK                      (0xC000000U)
#define CCM_CCGR0_CG13_SHIFT                     (26U)
#define CCM_CCGR0_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG13_SHIFT)) & CCM_CCGR0_CG13_MASK)

#define CCM_CCGR0_CG14_MASK                      (0x30000000U)
#define CCM_CCGR0_CG14_SHIFT                     (28U)
#define CCM_CCGR0_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG14_SHIFT)) & CCM_CCGR0_CG14_MASK)

#define CCM_CCGR0_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR0_CG15_SHIFT                     (30U)
#define CCM_CCGR0_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR0_CG15_SHIFT)) & CCM_CCGR0_CG15_MASK)
/*! @} */

/*! @name CCGR1 - CCM Clock Gating Register 1 */
/*! @{ */

#define CCM_CCGR1_CG0_MASK                       (0x3U)
#define CCM_CCGR1_CG0_SHIFT                      (0U)
#define CCM_CCGR1_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG0_SHIFT)) & CCM_CCGR1_CG0_MASK)

#define CCM_CCGR1_CG1_MASK                       (0xCU)
#define CCM_CCGR1_CG1_SHIFT                      (2U)
#define CCM_CCGR1_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG1_SHIFT)) & CCM_CCGR1_CG1_MASK)

#define CCM_CCGR1_CG2_MASK                       (0x30U)
#define CCM_CCGR1_CG2_SHIFT                      (4U)
#define CCM_CCGR1_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG2_SHIFT)) & CCM_CCGR1_CG2_MASK)

#define CCM_CCGR1_CG3_MASK                       (0xC0U)
#define CCM_CCGR1_CG3_SHIFT                      (6U)
#define CCM_CCGR1_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG3_SHIFT)) & CCM_CCGR1_CG3_MASK)

#define CCM_CCGR1_CG4_MASK                       (0x300U)
#define CCM_CCGR1_CG4_SHIFT                      (8U)
#define CCM_CCGR1_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG4_SHIFT)) & CCM_CCGR1_CG4_MASK)

#define CCM_CCGR1_CG5_MASK                       (0xC00U)
#define CCM_CCGR1_CG5_SHIFT                      (10U)
#define CCM_CCGR1_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG5_SHIFT)) & CCM_CCGR1_CG5_MASK)

#define CCM_CCGR1_CG6_MASK                       (0x3000U)
#define CCM_CCGR1_CG6_SHIFT                      (12U)
#define CCM_CCGR1_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG6_SHIFT)) & CCM_CCGR1_CG6_MASK)

#define CCM_CCGR1_CG7_MASK                       (0xC000U)
#define CCM_CCGR1_CG7_SHIFT                      (14U)
#define CCM_CCGR1_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG7_SHIFT)) & CCM_CCGR1_CG7_MASK)

#define CCM_CCGR1_CG8_MASK                       (0x30000U)
#define CCM_CCGR1_CG8_SHIFT                      (16U)
#define CCM_CCGR1_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG8_SHIFT)) & CCM_CCGR1_CG8_MASK)

#define CCM_CCGR1_CG9_MASK                       (0xC0000U)
#define CCM_CCGR1_CG9_SHIFT                      (18U)
#define CCM_CCGR1_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG9_SHIFT)) & CCM_CCGR1_CG9_MASK)

#define CCM_CCGR1_CG10_MASK                      (0x300000U)
#define CCM_CCGR1_CG10_SHIFT                     (20U)
#define CCM_CCGR1_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG10_SHIFT)) & CCM_CCGR1_CG10_MASK)

#define CCM_CCGR1_CG11_MASK                      (0xC00000U)
#define CCM_CCGR1_CG11_SHIFT                     (22U)
#define CCM_CCGR1_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG11_SHIFT)) & CCM_CCGR1_CG11_MASK)

#define CCM_CCGR1_CG12_MASK                      (0x3000000U)
#define CCM_CCGR1_CG12_SHIFT                     (24U)
#define CCM_CCGR1_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG12_SHIFT)) & CCM_CCGR1_CG12_MASK)

#define CCM_CCGR1_CG13_MASK                      (0xC000000U)
#define CCM_CCGR1_CG13_SHIFT                     (26U)
#define CCM_CCGR1_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG13_SHIFT)) & CCM_CCGR1_CG13_MASK)

#define CCM_CCGR1_CG14_MASK                      (0x30000000U)
#define CCM_CCGR1_CG14_SHIFT                     (28U)
#define CCM_CCGR1_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG14_SHIFT)) & CCM_CCGR1_CG14_MASK)

#define CCM_CCGR1_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR1_CG15_SHIFT                     (30U)
#define CCM_CCGR1_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR1_CG15_SHIFT)) & CCM_CCGR1_CG15_MASK)
/*! @} */

/*! @name CCGR2 - CCM Clock Gating Register 2 */
/*! @{ */

#define CCM_CCGR2_CG0_MASK                       (0x3U)
#define CCM_CCGR2_CG0_SHIFT                      (0U)
#define CCM_CCGR2_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG0_SHIFT)) & CCM_CCGR2_CG0_MASK)

#define CCM_CCGR2_CG1_MASK                       (0xCU)
#define CCM_CCGR2_CG1_SHIFT                      (2U)
#define CCM_CCGR2_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG1_SHIFT)) & CCM_CCGR2_CG1_MASK)

#define CCM_CCGR2_CG2_MASK                       (0x30U)
#define CCM_CCGR2_CG2_SHIFT                      (4U)
#define CCM_CCGR2_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG2_SHIFT)) & CCM_CCGR2_CG2_MASK)

#define CCM_CCGR2_CG3_MASK                       (0xC0U)
#define CCM_CCGR2_CG3_SHIFT                      (6U)
#define CCM_CCGR2_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG3_SHIFT)) & CCM_CCGR2_CG3_MASK)

#define CCM_CCGR2_CG4_MASK                       (0x300U)
#define CCM_CCGR2_CG4_SHIFT                      (8U)
#define CCM_CCGR2_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG4_SHIFT)) & CCM_CCGR2_CG4_MASK)

#define CCM_CCGR2_CG5_MASK                       (0xC00U)
#define CCM_CCGR2_CG5_SHIFT                      (10U)
#define CCM_CCGR2_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG5_SHIFT)) & CCM_CCGR2_CG5_MASK)

#define CCM_CCGR2_CG6_MASK                       (0x3000U)
#define CCM_CCGR2_CG6_SHIFT                      (12U)
#define CCM_CCGR2_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG6_SHIFT)) & CCM_CCGR2_CG6_MASK)

#define CCM_CCGR2_CG7_MASK                       (0xC000U)
#define CCM_CCGR2_CG7_SHIFT                      (14U)
#define CCM_CCGR2_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG7_SHIFT)) & CCM_CCGR2_CG7_MASK)

#define CCM_CCGR2_CG8_MASK                       (0x30000U)
#define CCM_CCGR2_CG8_SHIFT                      (16U)
#define CCM_CCGR2_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG8_SHIFT)) & CCM_CCGR2_CG8_MASK)

#define CCM_CCGR2_CG9_MASK                       (0xC0000U)
#define CCM_CCGR2_CG9_SHIFT                      (18U)
#define CCM_CCGR2_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG9_SHIFT)) & CCM_CCGR2_CG9_MASK)

#define CCM_CCGR2_CG10_MASK                      (0x300000U)
#define CCM_CCGR2_CG10_SHIFT                     (20U)
#define CCM_CCGR2_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG10_SHIFT)) & CCM_CCGR2_CG10_MASK)

#define CCM_CCGR2_CG11_MASK                      (0xC00000U)
#define CCM_CCGR2_CG11_SHIFT                     (22U)
#define CCM_CCGR2_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG11_SHIFT)) & CCM_CCGR2_CG11_MASK)

#define CCM_CCGR2_CG12_MASK                      (0x3000000U)
#define CCM_CCGR2_CG12_SHIFT                     (24U)
#define CCM_CCGR2_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG12_SHIFT)) & CCM_CCGR2_CG12_MASK)

#define CCM_CCGR2_CG13_MASK                      (0xC000000U)
#define CCM_CCGR2_CG13_SHIFT                     (26U)
#define CCM_CCGR2_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG13_SHIFT)) & CCM_CCGR2_CG13_MASK)

#define CCM_CCGR2_CG14_MASK                      (0x30000000U)
#define CCM_CCGR2_CG14_SHIFT                     (28U)
#define CCM_CCGR2_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG14_SHIFT)) & CCM_CCGR2_CG14_MASK)

#define CCM_CCGR2_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR2_CG15_SHIFT                     (30U)
#define CCM_CCGR2_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR2_CG15_SHIFT)) & CCM_CCGR2_CG15_MASK)
/*! @} */

/*! @name CCGR3 - CCM Clock Gating Register 3 */
/*! @{ */

#define CCM_CCGR3_CG0_MASK                       (0x3U)
#define CCM_CCGR3_CG0_SHIFT                      (0U)
#define CCM_CCGR3_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG0_SHIFT)) & CCM_CCGR3_CG0_MASK)

#define CCM_CCGR3_CG1_MASK                       (0xCU)
#define CCM_CCGR3_CG1_SHIFT                      (2U)
#define CCM_CCGR3_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG1_SHIFT)) & CCM_CCGR3_CG1_MASK)

#define CCM_CCGR3_CG2_MASK                       (0x30U)
#define CCM_CCGR3_CG2_SHIFT                      (4U)
#define CCM_CCGR3_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG2_SHIFT)) & CCM_CCGR3_CG2_MASK)

#define CCM_CCGR3_CG3_MASK                       (0xC0U)
#define CCM_CCGR3_CG3_SHIFT                      (6U)
#define CCM_CCGR3_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG3_SHIFT)) & CCM_CCGR3_CG3_MASK)

#define CCM_CCGR3_CG4_MASK                       (0x300U)
#define CCM_CCGR3_CG4_SHIFT                      (8U)
#define CCM_CCGR3_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG4_SHIFT)) & CCM_CCGR3_CG4_MASK)

#define CCM_CCGR3_CG5_MASK                       (0xC00U)
#define CCM_CCGR3_CG5_SHIFT                      (10U)
#define CCM_CCGR3_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG5_SHIFT)) & CCM_CCGR3_CG5_MASK)

#define CCM_CCGR3_CG6_MASK                       (0x3000U)
#define CCM_CCGR3_CG6_SHIFT                      (12U)
#define CCM_CCGR3_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG6_SHIFT)) & CCM_CCGR3_CG6_MASK)

#define CCM_CCGR3_CG7_MASK                       (0xC000U)
#define CCM_CCGR3_CG7_SHIFT                      (14U)
#define CCM_CCGR3_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG7_SHIFT)) & CCM_CCGR3_CG7_MASK)

#define CCM_CCGR3_CG8_MASK                       (0x30000U)
#define CCM_CCGR3_CG8_SHIFT                      (16U)
#define CCM_CCGR3_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG8_SHIFT)) & CCM_CCGR3_CG8_MASK)

#define CCM_CCGR3_CG9_MASK                       (0xC0000U)
#define CCM_CCGR3_CG9_SHIFT                      (18U)
#define CCM_CCGR3_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG9_SHIFT)) & CCM_CCGR3_CG9_MASK)

#define CCM_CCGR3_CG10_MASK                      (0x300000U)
#define CCM_CCGR3_CG10_SHIFT                     (20U)
#define CCM_CCGR3_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG10_SHIFT)) & CCM_CCGR3_CG10_MASK)

#define CCM_CCGR3_CG11_MASK                      (0xC00000U)
#define CCM_CCGR3_CG11_SHIFT                     (22U)
#define CCM_CCGR3_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG11_SHIFT)) & CCM_CCGR3_CG11_MASK)

#define CCM_CCGR3_CG12_MASK                      (0x3000000U)
#define CCM_CCGR3_CG12_SHIFT                     (24U)
#define CCM_CCGR3_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG12_SHIFT)) & CCM_CCGR3_CG12_MASK)

#define CCM_CCGR3_CG13_MASK                      (0xC000000U)
#define CCM_CCGR3_CG13_SHIFT                     (26U)
#define CCM_CCGR3_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG13_SHIFT)) & CCM_CCGR3_CG13_MASK)

#define CCM_CCGR3_CG14_MASK                      (0x30000000U)
#define CCM_CCGR3_CG14_SHIFT                     (28U)
/*! CG14 - The OCRAM clock cannot be turned off when the CM cache is running on this device.
 */
#define CCM_CCGR3_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG14_SHIFT)) & CCM_CCGR3_CG14_MASK)

#define CCM_CCGR3_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR3_CG15_SHIFT                     (30U)
#define CCM_CCGR3_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR3_CG15_SHIFT)) & CCM_CCGR3_CG15_MASK)
/*! @} */

/*! @name CCGR4 - CCM Clock Gating Register 4 */
/*! @{ */

#define CCM_CCGR4_CG0_MASK                       (0x3U)
#define CCM_CCGR4_CG0_SHIFT                      (0U)
#define CCM_CCGR4_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG0_SHIFT)) & CCM_CCGR4_CG0_MASK)

#define CCM_CCGR4_CG1_MASK                       (0xCU)
#define CCM_CCGR4_CG1_SHIFT                      (2U)
#define CCM_CCGR4_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG1_SHIFT)) & CCM_CCGR4_CG1_MASK)

#define CCM_CCGR4_CG2_MASK                       (0x30U)
#define CCM_CCGR4_CG2_SHIFT                      (4U)
#define CCM_CCGR4_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG2_SHIFT)) & CCM_CCGR4_CG2_MASK)

#define CCM_CCGR4_CG3_MASK                       (0xC0U)
#define CCM_CCGR4_CG3_SHIFT                      (6U)
#define CCM_CCGR4_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG3_SHIFT)) & CCM_CCGR4_CG3_MASK)

#define CCM_CCGR4_CG4_MASK                       (0x300U)
#define CCM_CCGR4_CG4_SHIFT                      (8U)
#define CCM_CCGR4_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG4_SHIFT)) & CCM_CCGR4_CG4_MASK)

#define CCM_CCGR4_CG5_MASK                       (0xC00U)
#define CCM_CCGR4_CG5_SHIFT                      (10U)
#define CCM_CCGR4_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG5_SHIFT)) & CCM_CCGR4_CG5_MASK)

#define CCM_CCGR4_CG6_MASK                       (0x3000U)
#define CCM_CCGR4_CG6_SHIFT                      (12U)
#define CCM_CCGR4_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG6_SHIFT)) & CCM_CCGR4_CG6_MASK)

#define CCM_CCGR4_CG7_MASK                       (0xC000U)
#define CCM_CCGR4_CG7_SHIFT                      (14U)
#define CCM_CCGR4_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG7_SHIFT)) & CCM_CCGR4_CG7_MASK)

#define CCM_CCGR4_CG8_MASK                       (0x30000U)
#define CCM_CCGR4_CG8_SHIFT                      (16U)
#define CCM_CCGR4_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG8_SHIFT)) & CCM_CCGR4_CG8_MASK)

#define CCM_CCGR4_CG9_MASK                       (0xC0000U)
#define CCM_CCGR4_CG9_SHIFT                      (18U)
#define CCM_CCGR4_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG9_SHIFT)) & CCM_CCGR4_CG9_MASK)

#define CCM_CCGR4_CG10_MASK                      (0x300000U)
#define CCM_CCGR4_CG10_SHIFT                     (20U)
#define CCM_CCGR4_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG10_SHIFT)) & CCM_CCGR4_CG10_MASK)

#define CCM_CCGR4_CG11_MASK                      (0xC00000U)
#define CCM_CCGR4_CG11_SHIFT                     (22U)
#define CCM_CCGR4_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG11_SHIFT)) & CCM_CCGR4_CG11_MASK)

#define CCM_CCGR4_CG12_MASK                      (0x3000000U)
#define CCM_CCGR4_CG12_SHIFT                     (24U)
#define CCM_CCGR4_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG12_SHIFT)) & CCM_CCGR4_CG12_MASK)

#define CCM_CCGR4_CG13_MASK                      (0xC000000U)
#define CCM_CCGR4_CG13_SHIFT                     (26U)
#define CCM_CCGR4_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG13_SHIFT)) & CCM_CCGR4_CG13_MASK)

#define CCM_CCGR4_CG14_MASK                      (0x30000000U)
#define CCM_CCGR4_CG14_SHIFT                     (28U)
#define CCM_CCGR4_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG14_SHIFT)) & CCM_CCGR4_CG14_MASK)

#define CCM_CCGR4_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR4_CG15_SHIFT                     (30U)
#define CCM_CCGR4_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR4_CG15_SHIFT)) & CCM_CCGR4_CG15_MASK)
/*! @} */

/*! @name CCGR5 - CCM Clock Gating Register 5 */
/*! @{ */

#define CCM_CCGR5_CG0_MASK                       (0x3U)
#define CCM_CCGR5_CG0_SHIFT                      (0U)
#define CCM_CCGR5_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG0_SHIFT)) & CCM_CCGR5_CG0_MASK)

#define CCM_CCGR5_CG1_MASK                       (0xCU)
#define CCM_CCGR5_CG1_SHIFT                      (2U)
#define CCM_CCGR5_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG1_SHIFT)) & CCM_CCGR5_CG1_MASK)

#define CCM_CCGR5_CG2_MASK                       (0x30U)
#define CCM_CCGR5_CG2_SHIFT                      (4U)
#define CCM_CCGR5_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG2_SHIFT)) & CCM_CCGR5_CG2_MASK)

#define CCM_CCGR5_CG3_MASK                       (0xC0U)
#define CCM_CCGR5_CG3_SHIFT                      (6U)
#define CCM_CCGR5_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG3_SHIFT)) & CCM_CCGR5_CG3_MASK)

#define CCM_CCGR5_CG4_MASK                       (0x300U)
#define CCM_CCGR5_CG4_SHIFT                      (8U)
#define CCM_CCGR5_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG4_SHIFT)) & CCM_CCGR5_CG4_MASK)

#define CCM_CCGR5_CG5_MASK                       (0xC00U)
#define CCM_CCGR5_CG5_SHIFT                      (10U)
#define CCM_CCGR5_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG5_SHIFT)) & CCM_CCGR5_CG5_MASK)

#define CCM_CCGR5_CG6_MASK                       (0x3000U)
#define CCM_CCGR5_CG6_SHIFT                      (12U)
#define CCM_CCGR5_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG6_SHIFT)) & CCM_CCGR5_CG6_MASK)

#define CCM_CCGR5_CG7_MASK                       (0xC000U)
#define CCM_CCGR5_CG7_SHIFT                      (14U)
#define CCM_CCGR5_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG7_SHIFT)) & CCM_CCGR5_CG7_MASK)

#define CCM_CCGR5_CG8_MASK                       (0x30000U)
#define CCM_CCGR5_CG8_SHIFT                      (16U)
#define CCM_CCGR5_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG8_SHIFT)) & CCM_CCGR5_CG8_MASK)

#define CCM_CCGR5_CG9_MASK                       (0xC0000U)
#define CCM_CCGR5_CG9_SHIFT                      (18U)
#define CCM_CCGR5_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG9_SHIFT)) & CCM_CCGR5_CG9_MASK)

#define CCM_CCGR5_CG10_MASK                      (0x300000U)
#define CCM_CCGR5_CG10_SHIFT                     (20U)
#define CCM_CCGR5_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG10_SHIFT)) & CCM_CCGR5_CG10_MASK)

#define CCM_CCGR5_CG11_MASK                      (0xC00000U)
#define CCM_CCGR5_CG11_SHIFT                     (22U)
#define CCM_CCGR5_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG11_SHIFT)) & CCM_CCGR5_CG11_MASK)

#define CCM_CCGR5_CG12_MASK                      (0x3000000U)
#define CCM_CCGR5_CG12_SHIFT                     (24U)
#define CCM_CCGR5_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG12_SHIFT)) & CCM_CCGR5_CG12_MASK)

#define CCM_CCGR5_CG13_MASK                      (0xC000000U)
#define CCM_CCGR5_CG13_SHIFT                     (26U)
#define CCM_CCGR5_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG13_SHIFT)) & CCM_CCGR5_CG13_MASK)

#define CCM_CCGR5_CG14_MASK                      (0x30000000U)
#define CCM_CCGR5_CG14_SHIFT                     (28U)
#define CCM_CCGR5_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG14_SHIFT)) & CCM_CCGR5_CG14_MASK)

#define CCM_CCGR5_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR5_CG15_SHIFT                     (30U)
#define CCM_CCGR5_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR5_CG15_SHIFT)) & CCM_CCGR5_CG15_MASK)
/*! @} */

/*! @name CCGR6 - CCM Clock Gating Register 6 */
/*! @{ */

#define CCM_CCGR6_CG0_MASK                       (0x3U)
#define CCM_CCGR6_CG0_SHIFT                      (0U)
#define CCM_CCGR6_CG0(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG0_SHIFT)) & CCM_CCGR6_CG0_MASK)

#define CCM_CCGR6_CG1_MASK                       (0xCU)
#define CCM_CCGR6_CG1_SHIFT                      (2U)
#define CCM_CCGR6_CG1(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG1_SHIFT)) & CCM_CCGR6_CG1_MASK)

#define CCM_CCGR6_CG2_MASK                       (0x30U)
#define CCM_CCGR6_CG2_SHIFT                      (4U)
#define CCM_CCGR6_CG2(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG2_SHIFT)) & CCM_CCGR6_CG2_MASK)

#define CCM_CCGR6_CG3_MASK                       (0xC0U)
#define CCM_CCGR6_CG3_SHIFT                      (6U)
#define CCM_CCGR6_CG3(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG3_SHIFT)) & CCM_CCGR6_CG3_MASK)

#define CCM_CCGR6_CG4_MASK                       (0x300U)
#define CCM_CCGR6_CG4_SHIFT                      (8U)
#define CCM_CCGR6_CG4(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG4_SHIFT)) & CCM_CCGR6_CG4_MASK)

#define CCM_CCGR6_CG5_MASK                       (0xC00U)
#define CCM_CCGR6_CG5_SHIFT                      (10U)
#define CCM_CCGR6_CG5(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG5_SHIFT)) & CCM_CCGR6_CG5_MASK)

#define CCM_CCGR6_CG6_MASK                       (0x3000U)
#define CCM_CCGR6_CG6_SHIFT                      (12U)
#define CCM_CCGR6_CG6(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG6_SHIFT)) & CCM_CCGR6_CG6_MASK)

#define CCM_CCGR6_CG7_MASK                       (0xC000U)
#define CCM_CCGR6_CG7_SHIFT                      (14U)
#define CCM_CCGR6_CG7(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG7_SHIFT)) & CCM_CCGR6_CG7_MASK)

#define CCM_CCGR6_CG8_MASK                       (0x30000U)
#define CCM_CCGR6_CG8_SHIFT                      (16U)
#define CCM_CCGR6_CG8(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG8_SHIFT)) & CCM_CCGR6_CG8_MASK)

#define CCM_CCGR6_CG9_MASK                       (0xC0000U)
#define CCM_CCGR6_CG9_SHIFT                      (18U)
#define CCM_CCGR6_CG9(x)                         (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG9_SHIFT)) & CCM_CCGR6_CG9_MASK)

#define CCM_CCGR6_CG10_MASK                      (0x300000U)
#define CCM_CCGR6_CG10_SHIFT                     (20U)
#define CCM_CCGR6_CG10(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG10_SHIFT)) & CCM_CCGR6_CG10_MASK)

#define CCM_CCGR6_CG11_MASK                      (0xC00000U)
#define CCM_CCGR6_CG11_SHIFT                     (22U)
#define CCM_CCGR6_CG11(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG11_SHIFT)) & CCM_CCGR6_CG11_MASK)

#define CCM_CCGR6_CG12_MASK                      (0x3000000U)
#define CCM_CCGR6_CG12_SHIFT                     (24U)
#define CCM_CCGR6_CG12(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG12_SHIFT)) & CCM_CCGR6_CG12_MASK)

#define CCM_CCGR6_CG13_MASK                      (0xC000000U)
#define CCM_CCGR6_CG13_SHIFT                     (26U)
#define CCM_CCGR6_CG13(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG13_SHIFT)) & CCM_CCGR6_CG13_MASK)

#define CCM_CCGR6_CG14_MASK                      (0x30000000U)
#define CCM_CCGR6_CG14_SHIFT                     (28U)
#define CCM_CCGR6_CG14(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG14_SHIFT)) & CCM_CCGR6_CG14_MASK)

#define CCM_CCGR6_CG15_MASK                      (0xC0000000U)
#define CCM_CCGR6_CG15_SHIFT                     (30U)
#define CCM_CCGR6_CG15(x)                        (((uint32_t)(((uint32_t)(x)) << CCM_CCGR6_CG15_SHIFT)) & CCM_CCGR6_CG15_MASK)
/*! @} */

/*! @name CMEOR - CCM Module Enable Overide Register */
/*! @{ */

#define CCM_CMEOR_MOD_EN_OV_GPT_MASK             (0x20U)
#define CCM_CMEOR_MOD_EN_OV_GPT_SHIFT            (5U)
/*! MOD_EN_OV_GPT
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_GPT(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_GPT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_GPT_MASK)

#define CCM_CMEOR_MOD_EN_OV_PIT_MASK             (0x40U)
#define CCM_CMEOR_MOD_EN_OV_PIT_SHIFT            (6U)
/*! MOD_EN_OV_PIT
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_PIT(x)               (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_PIT_SHIFT)) & CCM_CMEOR_MOD_EN_OV_PIT_MASK)

#define CCM_CMEOR_MOD_EN_OV_TRNG_MASK            (0x200U)
#define CCM_CMEOR_MOD_EN_OV_TRNG_SHIFT           (9U)
/*! MOD_EN_OV_TRNG
 *  0b0..don't override module enable signal
 *  0b1..override module enable signal
 */
#define CCM_CMEOR_MOD_EN_OV_TRNG(x)              (((uint32_t)(((uint32_t)(x)) << CCM_CMEOR_MOD_EN_OV_TRNG_SHIFT)) & CCM_CMEOR_MOD_EN_OV_TRNG_MASK)
/*! @} */


/* ----------------------------------------------------------------------------
   -- CCM_ANALOG Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CCM_ANALOG_Register_Masks CCM_ANALOG Register Masks
 * @{
 */

/*! @name PLL_USB1 - Analog USB1 480MHz PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK      (0x2U)
#define CCM_ANALOG_PLL_USB1_DIV_SELECT_SHIFT     (1U)
#define CCM_ANALOG_PLL_USB1_DIV_SELECT(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS_MASK     (0x40U)
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS_SHIFT    (6U)
/*! EN_USB_CLKS
 *  0b0..PLL outputs for USBPHYn off.
 *  0b1..PLL outputs for USBPHYn on.
 */
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_EN_USB_CLKS_MASK)

#define CCM_ANALOG_PLL_USB1_POWER_MASK           (0x1000U)
#define CCM_ANALOG_PLL_USB1_POWER_SHIFT          (12U)
#define CCM_ANALOG_PLL_USB1_POWER(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_POWER_MASK)

#define CCM_ANALOG_PLL_USB1_ENABLE_MASK          (0x2000U)
#define CCM_ANALOG_PLL_USB1_ENABLE_SHIFT         (13U)
#define CCM_ANALOG_PLL_USB1_ENABLE(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_ENABLE_MASK)

#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_MASK  (0xC000U)
#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_USB1_BYPASS_MASK          (0x10000U)
#define CCM_ANALOG_PLL_USB1_BYPASS_SHIFT         (16U)
#define CCM_ANALOG_PLL_USB1_BYPASS(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_BYPASS_MASK)

#define CCM_ANALOG_PLL_USB1_LOCK_MASK            (0x80000000U)
#define CCM_ANALOG_PLL_USB1_LOCK_SHIFT           (31U)
#define CCM_ANALOG_PLL_USB1_LOCK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_LOCK_MASK)
/*! @} */

/*! @name PLL_USB1_SET - Analog USB1 480MHz PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_MASK  (0x2U)
#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_SHIFT (1U)
#define CCM_ANALOG_PLL_USB1_SET_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_SHIFT (6U)
/*! EN_USB_CLKS
 *  0b0..PLL outputs for USBPHYn off.
 *  0b1..PLL outputs for USBPHYn on.
 */
#define CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_EN_USB_CLKS_MASK)

#define CCM_ANALOG_PLL_USB1_SET_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_SET_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_SET_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_POWER_MASK)

#define CCM_ANALOG_PLL_USB1_SET_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_SET_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_SET_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_ENABLE_MASK)

#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_USB1_SET_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_SET_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_BYPASS_MASK)

#define CCM_ANALOG_PLL_USB1_SET_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_SET_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_SET_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_SET_LOCK_MASK)
/*! @} */

/*! @name PLL_USB1_CLR - Analog USB1 480MHz PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_MASK  (0x2U)
#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_SHIFT (1U)
#define CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_SHIFT (6U)
/*! EN_USB_CLKS
 *  0b0..PLL outputs for USBPHYn off.
 *  0b1..PLL outputs for USBPHYn on.
 */
#define CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_EN_USB_CLKS_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_CLR_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_CLR_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_POWER_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_CLR_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_CLR_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_ENABLE_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_CLR_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_BYPASS_MASK)

#define CCM_ANALOG_PLL_USB1_CLR_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_CLR_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_CLR_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_CLR_LOCK_MASK)
/*! @} */

/*! @name PLL_USB1_TOG - Analog USB1 480MHz PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_MASK  (0x2U)
#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_SHIFT (1U)
#define CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_MASK (0x40U)
#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_SHIFT (6U)
/*! EN_USB_CLKS
 *  0b0..PLL outputs for USBPHYn off.
 *  0b1..PLL outputs for USBPHYn on.
 */
#define CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_EN_USB_CLKS_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_POWER_MASK       (0x1000U)
#define CCM_ANALOG_PLL_USB1_TOG_POWER_SHIFT      (12U)
#define CCM_ANALOG_PLL_USB1_TOG_POWER(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_POWER_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_POWER_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_ENABLE_MASK      (0x2000U)
#define CCM_ANALOG_PLL_USB1_TOG_ENABLE_SHIFT     (13U)
#define CCM_ANALOG_PLL_USB1_TOG_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_ENABLE_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_USB1_TOG_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_BYPASS_MASK)

#define CCM_ANALOG_PLL_USB1_TOG_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_USB1_TOG_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_USB1_TOG_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_USB1_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_USB1_TOG_LOCK_MASK)
/*! @} */

/*! @name PLL_SYS - Analog System PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK       (0x1U)
#define CCM_ANALOG_PLL_SYS_DIV_SELECT_SHIFT      (0U)
#define CCM_ANALOG_PLL_SYS_DIV_SELECT(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_SYS_POWERDOWN_MASK        (0x1000U)
#define CCM_ANALOG_PLL_SYS_POWERDOWN_SHIFT       (12U)
#define CCM_ANALOG_PLL_SYS_POWERDOWN(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_SYS_ENABLE_MASK           (0x2000U)
#define CCM_ANALOG_PLL_SYS_ENABLE_SHIFT          (13U)
#define CCM_ANALOG_PLL_SYS_ENABLE(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_ENABLE_MASK)

#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_MASK   (0xC000U)
#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_SHIFT  (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_SYS_BYPASS_MASK           (0x10000U)
#define CCM_ANALOG_PLL_SYS_BYPASS_SHIFT          (16U)
#define CCM_ANALOG_PLL_SYS_BYPASS(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_BYPASS_MASK)

#define CCM_ANALOG_PLL_SYS_LOCK_MASK             (0x80000000U)
#define CCM_ANALOG_PLL_SYS_LOCK_SHIFT            (31U)
#define CCM_ANALOG_PLL_SYS_LOCK(x)               (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_LOCK_MASK)
/*! @} */

/*! @name PLL_SYS_SET - Analog System PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_SET_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_SET_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_SYS_SET_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_SET_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_SET_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_ENABLE_MASK)

#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_SYS_SET_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_SET_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_BYPASS_MASK)

#define CCM_ANALOG_PLL_SYS_SET_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_SET_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_SET_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_SET_LOCK_MASK)
/*! @} */

/*! @name PLL_SYS_CLR - Analog System PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_CLR_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_SYS_CLR_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_CLR_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_CLR_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_ENABLE_MASK)

#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_CLR_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_BYPASS_MASK)

#define CCM_ANALOG_PLL_SYS_CLR_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_CLR_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_CLR_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_CLR_LOCK_MASK)
/*! @} */

/*! @name PLL_SYS_TOG - Analog System PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_MASK   (0x1U)
#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_SHIFT  (0U)
#define CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_MASK    (0x1000U)
#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_SHIFT   (12U)
#define CCM_ANALOG_PLL_SYS_TOG_POWERDOWN(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_SYS_TOG_ENABLE_MASK       (0x2000U)
#define CCM_ANALOG_PLL_SYS_TOG_ENABLE_SHIFT      (13U)
#define CCM_ANALOG_PLL_SYS_TOG_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_ENABLE_MASK)

#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 */
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_MASK       (0x10000U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS_SHIFT      (16U)
#define CCM_ANALOG_PLL_SYS_TOG_BYPASS(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_BYPASS_MASK)

#define CCM_ANALOG_PLL_SYS_TOG_LOCK_MASK         (0x80000000U)
#define CCM_ANALOG_PLL_SYS_TOG_LOCK_SHIFT        (31U)
#define CCM_ANALOG_PLL_SYS_TOG_LOCK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_SYS_TOG_LOCK_MASK)
/*! @} */

/*! @name PLL_SYS_SS - 528MHz System PLL Spread Spectrum Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_SS_STEP_MASK          (0x7FFFU)
#define CCM_ANALOG_PLL_SYS_SS_STEP_SHIFT         (0U)
#define CCM_ANALOG_PLL_SYS_SS_STEP(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_STEP_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_STEP_MASK)

#define CCM_ANALOG_PLL_SYS_SS_ENABLE_MASK        (0x8000U)
#define CCM_ANALOG_PLL_SYS_SS_ENABLE_SHIFT       (15U)
/*! ENABLE - Enable bit
 *  0b0..Spread spectrum modulation disabled
 *  0b1..Soread spectrum modulation enabled
 */
#define CCM_ANALOG_PLL_SYS_SS_ENABLE(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_ENABLE_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_ENABLE_MASK)

#define CCM_ANALOG_PLL_SYS_SS_STOP_MASK          (0xFFFF0000U)
#define CCM_ANALOG_PLL_SYS_SS_STOP_SHIFT         (16U)
#define CCM_ANALOG_PLL_SYS_SS_STOP(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_SS_STOP_SHIFT)) & CCM_ANALOG_PLL_SYS_SS_STOP_MASK)
/*! @} */

/*! @name PLL_SYS_NUM - Numerator of 528MHz System PLL Fractional Loop Divider Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_NUM_A_MASK            (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_SYS_NUM_A_SHIFT           (0U)
#define CCM_ANALOG_PLL_SYS_NUM_A(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_NUM_A_SHIFT)) & CCM_ANALOG_PLL_SYS_NUM_A_MASK)
/*! @} */

/*! @name PLL_SYS_DENOM - Denominator of 528MHz System PLL Fractional Loop Divider Register */
/*! @{ */

#define CCM_ANALOG_PLL_SYS_DENOM_B_MASK          (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_SYS_DENOM_B_SHIFT         (0U)
#define CCM_ANALOG_PLL_SYS_DENOM_B(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_SYS_DENOM_B_SHIFT)) & CCM_ANALOG_PLL_SYS_DENOM_B_MASK)
/*! @} */

/*! @name PLL_AUDIO - Analog Audio PLL control Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT_MASK     (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT_SHIFT    (0U)
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_POWERDOWN_MASK      (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT     (12U)
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_AUDIO_ENABLE_MASK         (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT        (13U)
#define CCM_ANALOG_PLL_AUDIO_ENABLE(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_ENABLE_MASK)

#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_AUDIO_BYPASS_MASK         (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS_SHIFT        (16U)
#define CCM_ANALOG_PLL_AUDIO_BYPASS(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_BYPASS_MASK)

#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_SHIFT (19U)
/*! POST_DIV_SELECT
 *  0b00..Divide by 4.
 *  0b01..Divide by 2.
 *  0b10..Divide by 1.
 *  0b11..Reserved
 */
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_LOCK_MASK           (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_LOCK_SHIFT          (31U)
#define CCM_ANALOG_PLL_AUDIO_LOCK(x)             (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_LOCK_MASK)
/*! @} */

/*! @name PLL_AUDIO_SET - Analog Audio PLL control Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_SET_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_ENABLE_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_SET_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_BYPASS_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_SHIFT (19U)
/*! POST_DIV_SELECT
 *  0b00..Divide by 4.
 *  0b01..Divide by 2.
 *  0b10..Divide by 1.
 *  0b11..Reserved
 */
#define CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_POST_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_SET_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_SET_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_SET_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_SET_LOCK_MASK)
/*! @} */

/*! @name PLL_AUDIO_CLR - Analog Audio PLL control Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_CLR_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_ENABLE_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_CLR_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_BYPASS_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_SHIFT (19U)
/*! POST_DIV_SELECT
 *  0b00..Divide by 4.
 *  0b01..Divide by 2.
 *  0b10..Divide by 1.
 *  0b11..Reserved
 */
#define CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_POST_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_CLR_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_CLR_LOCK_MASK)
/*! @} */

/*! @name PLL_AUDIO_TOG - Analog Audio PLL control Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_MASK (0x7FU)
#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_SHIFT (0U)
#define CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_MASK  (0x1000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_SHIFT (12U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_MASK     (0x2000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_SHIFT    (13U)
#define CCM_ANALOG_PLL_AUDIO_TOG_ENABLE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_ENABLE_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_MASK     (0x10000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_SHIFT    (16U)
#define CCM_ANALOG_PLL_AUDIO_TOG_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_BYPASS_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_MASK (0x180000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_SHIFT (19U)
/*! POST_DIV_SELECT
 *  0b00..Divide by 4.
 *  0b01..Divide by 2.
 *  0b10..Divide by 1.
 *  0b11..Reserved
 */
#define CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_POST_DIV_SELECT_MASK)

#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK_MASK       (0x80000000U)
#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK_SHIFT      (31U)
#define CCM_ANALOG_PLL_AUDIO_TOG_LOCK(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_AUDIO_TOG_LOCK_MASK)
/*! @} */

/*! @name PLL_AUDIO_NUM - Numerator of Audio PLL Fractional Loop Divider Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_NUM_A_MASK          (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_AUDIO_NUM_A_SHIFT         (0U)
#define CCM_ANALOG_PLL_AUDIO_NUM_A(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_NUM_A_SHIFT)) & CCM_ANALOG_PLL_AUDIO_NUM_A_MASK)
/*! @} */

/*! @name PLL_AUDIO_DENOM - Denominator of Audio PLL Fractional Loop Divider Register */
/*! @{ */

#define CCM_ANALOG_PLL_AUDIO_DENOM_B_MASK        (0x3FFFFFFFU)
#define CCM_ANALOG_PLL_AUDIO_DENOM_B_SHIFT       (0U)
#define CCM_ANALOG_PLL_AUDIO_DENOM_B(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_AUDIO_DENOM_B_SHIFT)) & CCM_ANALOG_PLL_AUDIO_DENOM_B_MASK)
/*! @} */

/*! @name PLL_ENET - Analog ENET PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_ENET_POWERDOWN_MASK       (0x1000U)
#define CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT      (12U)
#define CCM_ANALOG_PLL_ENET_POWERDOWN(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_MASK  (0xC000U)
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_ENET_BYPASS_MASK          (0x10000U)
#define CCM_ANALOG_PLL_ENET_BYPASS_SHIFT         (16U)
#define CCM_ANALOG_PLL_ENET_BYPASS(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_BYPASS_MASK)

#define CCM_ANALOG_PLL_ENET_ENET_500M_REF_EN_MASK (0x400000U)
#define CCM_ANALOG_PLL_ENET_ENET_500M_REF_EN_SHIFT (22U)
#define CCM_ANALOG_PLL_ENET_ENET_500M_REF_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_ENET_500M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_ENET_500M_REF_EN_MASK)

#define CCM_ANALOG_PLL_ENET_LOCK_MASK            (0x80000000U)
#define CCM_ANALOG_PLL_ENET_LOCK_SHIFT           (31U)
#define CCM_ANALOG_PLL_ENET_LOCK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_LOCK_MASK)
/*! @} */

/*! @name PLL_ENET_SET - Analog ENET PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_SET_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_ENET_SET_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_SET_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_BYPASS_MASK)

#define CCM_ANALOG_PLL_ENET_SET_ENET_500M_REF_EN_MASK (0x400000U)
#define CCM_ANALOG_PLL_ENET_SET_ENET_500M_REF_EN_SHIFT (22U)
#define CCM_ANALOG_PLL_ENET_SET_ENET_500M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_ENET_500M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_ENET_500M_REF_EN_MASK)

#define CCM_ANALOG_PLL_ENET_SET_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_SET_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_SET_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_SET_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_SET_LOCK_MASK)
/*! @} */

/*! @name PLL_ENET_CLR - Analog ENET PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_CLR_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_CLR_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_BYPASS_MASK)

#define CCM_ANALOG_PLL_ENET_CLR_ENET_500M_REF_EN_MASK (0x400000U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET_500M_REF_EN_SHIFT (22U)
#define CCM_ANALOG_PLL_ENET_CLR_ENET_500M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_ENET_500M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_ENET_500M_REF_EN_MASK)

#define CCM_ANALOG_PLL_ENET_CLR_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_CLR_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_CLR_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_CLR_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_CLR_LOCK_MASK)
/*! @} */

/*! @name PLL_ENET_TOG - Analog ENET PLL Control Register */
/*! @{ */

#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_MASK   (0x1000U)
#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_SHIFT  (12U)
#define CCM_ANALOG_PLL_ENET_TOG_POWERDOWN(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_POWERDOWN_MASK)

#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_MASK (0xC000U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_SHIFT (14U)
/*! BYPASS_CLK_SRC
 *  0b00..Select the 24MHz oscillator as source.
 *  0b10..Reserved1
 *  0b11..Reserved2
 */
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_BYPASS_CLK_SRC_MASK)

#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_MASK      (0x10000U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS_SHIFT     (16U)
#define CCM_ANALOG_PLL_ENET_TOG_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_BYPASS_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_BYPASS_MASK)

#define CCM_ANALOG_PLL_ENET_TOG_ENET_500M_REF_EN_MASK (0x400000U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET_500M_REF_EN_SHIFT (22U)
#define CCM_ANALOG_PLL_ENET_TOG_ENET_500M_REF_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_ENET_500M_REF_EN_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_ENET_500M_REF_EN_MASK)

#define CCM_ANALOG_PLL_ENET_TOG_LOCK_MASK        (0x80000000U)
#define CCM_ANALOG_PLL_ENET_TOG_LOCK_SHIFT       (31U)
#define CCM_ANALOG_PLL_ENET_TOG_LOCK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PLL_ENET_TOG_LOCK_SHIFT)) & CCM_ANALOG_PLL_ENET_TOG_LOCK_MASK)
/*! @} */

/*! @name PFD_480 - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_480_PFD0_FRAC_MASK        (0x3FU)
#define CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT       (0U)
#define CCM_ANALOG_PFD_480_PFD0_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_480_PFD0_STABLE_MASK      (0x40U)
#define CCM_ANALOG_PFD_480_PFD0_STABLE_SHIFT     (6U)
#define CCM_ANALOG_PFD_480_PFD0_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK     (0x80U)
#define CCM_ANALOG_PFD_480_PFD0_CLKGATE_SHIFT    (7U)
#define CCM_ANALOG_PFD_480_PFD0_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_PFD1_FRAC_MASK        (0x3F00U)
#define CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT       (8U)
#define CCM_ANALOG_PFD_480_PFD1_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_480_PFD1_STABLE_MASK      (0x4000U)
#define CCM_ANALOG_PFD_480_PFD1_STABLE_SHIFT     (14U)
#define CCM_ANALOG_PFD_480_PFD1_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_480_PFD1_CLKGATE_MASK     (0x8000U)
#define CCM_ANALOG_PFD_480_PFD1_CLKGATE_SHIFT    (15U)
#define CCM_ANALOG_PFD_480_PFD1_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_PFD2_FRAC_MASK        (0x3F0000U)
#define CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT       (16U)
#define CCM_ANALOG_PFD_480_PFD2_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_480_PFD2_STABLE_MASK      (0x400000U)
#define CCM_ANALOG_PFD_480_PFD2_STABLE_SHIFT     (22U)
#define CCM_ANALOG_PFD_480_PFD2_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_480_PFD2_CLKGATE_MASK     (0x800000U)
#define CCM_ANALOG_PFD_480_PFD2_CLKGATE_SHIFT    (23U)
#define CCM_ANALOG_PFD_480_PFD2_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_PFD3_FRAC_MASK        (0x3F000000U)
#define CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT       (24U)
#define CCM_ANALOG_PFD_480_PFD3_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_480_PFD3_STABLE_MASK      (0x40000000U)
#define CCM_ANALOG_PFD_480_PFD3_STABLE_SHIFT     (30U)
#define CCM_ANALOG_PFD_480_PFD3_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_480_PFD3_CLKGATE_MASK     (0x80000000U)
#define CCM_ANALOG_PFD_480_PFD3_CLKGATE_SHIFT    (31U)
#define CCM_ANALOG_PFD_480_PFD3_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_480_SET - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_SET_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_SET_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_SET_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_SET_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_SET_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_SET_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_SET_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_SET_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_SET_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_480_CLR - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_CLR_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_480_TOG - 480MHz Clock (PLL3) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_480_TOG_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_528 - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_528_PFD0_FRAC_MASK        (0x3FU)
#define CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT       (0U)
#define CCM_ANALOG_PFD_528_PFD0_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_528_PFD0_STABLE_MASK      (0x40U)
#define CCM_ANALOG_PFD_528_PFD0_STABLE_SHIFT     (6U)
#define CCM_ANALOG_PFD_528_PFD0_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK     (0x80U)
#define CCM_ANALOG_PFD_528_PFD0_CLKGATE_SHIFT    (7U)
#define CCM_ANALOG_PFD_528_PFD0_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_PFD1_FRAC_MASK        (0x3F00U)
#define CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT       (8U)
#define CCM_ANALOG_PFD_528_PFD1_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_528_PFD1_STABLE_MASK      (0x4000U)
#define CCM_ANALOG_PFD_528_PFD1_STABLE_SHIFT     (14U)
#define CCM_ANALOG_PFD_528_PFD1_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_528_PFD1_CLKGATE_MASK     (0x8000U)
#define CCM_ANALOG_PFD_528_PFD1_CLKGATE_SHIFT    (15U)
#define CCM_ANALOG_PFD_528_PFD1_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_PFD2_FRAC_MASK        (0x3F0000U)
#define CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT       (16U)
#define CCM_ANALOG_PFD_528_PFD2_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_528_PFD2_STABLE_MASK      (0x400000U)
#define CCM_ANALOG_PFD_528_PFD2_STABLE_SHIFT     (22U)
#define CCM_ANALOG_PFD_528_PFD2_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_528_PFD2_CLKGATE_MASK     (0x800000U)
#define CCM_ANALOG_PFD_528_PFD2_CLKGATE_SHIFT    (23U)
#define CCM_ANALOG_PFD_528_PFD2_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_PFD3_FRAC_MASK        (0x3F000000U)
#define CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT       (24U)
#define CCM_ANALOG_PFD_528_PFD3_FRAC(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_528_PFD3_STABLE_MASK      (0x40000000U)
#define CCM_ANALOG_PFD_528_PFD3_STABLE_SHIFT     (30U)
#define CCM_ANALOG_PFD_528_PFD3_STABLE(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_528_PFD3_CLKGATE_MASK     (0x80000000U)
#define CCM_ANALOG_PFD_528_PFD3_CLKGATE_SHIFT    (31U)
#define CCM_ANALOG_PFD_528_PFD3_CLKGATE(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_528_SET - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_SET_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_SET_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_SET_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_SET_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_SET_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_SET_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_SET_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_SET_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_SET_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_528_CLR - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_CLR_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name PFD_528_TOG - 528MHz Clock (PLL2) Phase Fractional Divider Control Register */
/*! @{ */

#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_MASK    (0x3FU)
#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_SHIFT   (0U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_FRAC_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_MASK  (0x40U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_SHIFT (6U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_STABLE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_MASK (0x80U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_SHIFT (7U)
#define CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD0_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_MASK    (0x3F00U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_SHIFT   (8U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_FRAC_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_MASK  (0x4000U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_SHIFT (14U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_STABLE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_MASK (0x8000U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_SHIFT (15U)
#define CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD1_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_MASK    (0x3F0000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_SHIFT   (16U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_FRAC_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_MASK  (0x400000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_SHIFT (22U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_STABLE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_MASK (0x800000U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_SHIFT (23U)
#define CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD2_CLKGATE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_MASK    (0x3F000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_SHIFT   (24U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_FRAC(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_FRAC_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_MASK  (0x40000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_SHIFT (30U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_STABLE(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_STABLE_MASK)

#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_MASK (0x80000000U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_SHIFT (31U)
#define CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_SHIFT)) & CCM_ANALOG_PFD_528_TOG_PFD3_CLKGATE_MASK)
/*! @} */

/*! @name MISC0 - Miscellaneous Register 0 */
/*! @{ */

#define CCM_ANALOG_MISC0_REFTOP_PWD_MASK         (0x1U)
#define CCM_ANALOG_MISC0_REFTOP_PWD_SHIFT        (0U)
#define CCM_ANALOG_MISC0_REFTOP_PWD(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_PWD_MASK)

#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_SHIFT (3U)
/*! REFTOP_SELFBIASOFF
 *  0b0..Uses coarse bias currents for startup
 *  0b1..Uses bandgap-based bias currents for best performance.
 */
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF_MASK)

#define CCM_ANALOG_MISC0_REFTOP_VBGADJ_MASK      (0x70U)
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ_SHIFT     (4U)
/*! REFTOP_VBGADJ
 *  0b000..Nominal VBG
 *  0b001..VBG+0.78%
 *  0b010..VBG+1.56%
 *  0b011..VBG+2.34%
 *  0b100..VBG-0.78%
 *  0b101..VBG-1.56%
 *  0b110..VBG-2.34%
 *  0b111..VBG-3.12%
 */
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_VBGADJ_MASK)

#define CCM_ANALOG_MISC0_REFTOP_VBGUP_MASK       (0x80U)
#define CCM_ANALOG_MISC0_REFTOP_VBGUP_SHIFT      (7U)
#define CCM_ANALOG_MISC0_REFTOP_VBGUP(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_REFTOP_VBGUP_MASK)

#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG_MASK   (0xC00U)
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG_SHIFT  (10U)
/*! STOP_MODE_CONFIG
 *  0b00..All analog except RTC powered down on stop mode assertion.
 *  0b01..Beside RTC, analog bandgap, 1p1 and 2p5 regulators are also on.
 *  0b10..Beside RTC, 1p1 and 2p5 regulators are also on, low-power bandgap is selected so that the normal analog
 *        bandgap together with the rest analog is powered down.
 *  0b11..Beside RTC, low-power bandgap is selected and the rest analog is powered down.
 */
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_STOP_MODE_CONFIG_MASK)

#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_MASK   (0x1000U)
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_SHIFT  (12U)
/*! DISCON_HIGH_SNVS
 *  0b0..Turn on the switch
 *  0b1..Turn off the switch
 */
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_DISCON_HIGH_SNVS_MASK)

#define CCM_ANALOG_MISC0_OSC_I_MASK              (0x6000U)
#define CCM_ANALOG_MISC0_OSC_I_SHIFT             (13U)
/*! OSC_I
 *  0b00..Nominal
 *  0b01..Decrease current by 12.5%
 *  0b10..Decrease current by 25.0%
 *  0b11..Decrease current by 37.5%
 */
#define CCM_ANALOG_MISC0_OSC_I(x)                (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_OSC_I_MASK)

#define CCM_ANALOG_MISC0_OSC_XTALOK_MASK         (0x8000U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_SHIFT        (15U)
#define CCM_ANALOG_MISC0_OSC_XTALOK(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_OSC_XTALOK_MASK)

#define CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK      (0x10000U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN_SHIFT     (16U)
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_OSC_XTALOK_EN_MASK)

#define CCM_ANALOG_MISC0_CLKGATE_CTRL_MASK       (0x2000000U)
#define CCM_ANALOG_MISC0_CLKGATE_CTRL_SHIFT      (25U)
/*! CLKGATE_CTRL
 *  0b0..Allow the logic to automatically gate the clock when the XTAL is powered down.
 *  0b1..Prevent the logic from ever gating off the clock.
 */
#define CCM_ANALOG_MISC0_CLKGATE_CTRL(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_CLKGATE_CTRL_MASK)

#define CCM_ANALOG_MISC0_CLKGATE_DELAY_MASK      (0x1C000000U)
#define CCM_ANALOG_MISC0_CLKGATE_DELAY_SHIFT     (26U)
/*! CLKGATE_DELAY
 *  0b000..0.5ms
 *  0b001..1.0ms
 *  0b010..2.0ms
 *  0b011..3.0ms
 *  0b100..4.0ms
 *  0b101..5.0ms
 *  0b110..6.0ms
 *  0b111..7.0ms
 */
#define CCM_ANALOG_MISC0_CLKGATE_DELAY(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_CLKGATE_DELAY_MASK)

#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_MASK    (0x20000000U)
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_SHIFT   (29U)
/*! RTC_XTAL_SOURCE
 *  0b0..Internal ring oscillator
 *  0b1..RTC_XTAL
 */
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_RTC_XTAL_SOURCE_MASK)

#define CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK       (0x40000000U)
#define CCM_ANALOG_MISC0_XTAL_24M_PWD_SHIFT      (30U)
#define CCM_ANALOG_MISC0_XTAL_24M_PWD(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_XTAL_24M_PWD_MASK)
/*! @} */

/*! @name MISC0_SET - Miscellaneous Register 0 */
/*! @{ */

#define CCM_ANALOG_MISC0_SET_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_SET_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_SET_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_PWD_MASK)

#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_SHIFT (3U)
/*! REFTOP_SELFBIASOFF
 *  0b0..Uses coarse bias currents for startup
 *  0b1..Uses bandgap-based bias currents for best performance.
 */
#define CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_SELFBIASOFF_MASK)

#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_SHIFT (4U)
/*! REFTOP_VBGADJ
 *  0b000..Nominal VBG
 *  0b001..VBG+0.78%
 *  0b010..VBG+1.56%
 *  0b011..VBG+2.34%
 *  0b100..VBG-0.78%
 *  0b101..VBG-1.56%
 *  0b110..VBG-2.34%
 *  0b111..VBG-3.12%
 */
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_VBGADJ_MASK)

#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_SET_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_SET_REFTOP_VBGUP_MASK)

#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_SHIFT (10U)
/*! STOP_MODE_CONFIG
 *  0b00..All analog except RTC powered down on stop mode assertion.
 *  0b01..Beside RTC, analog bandgap, 1p1 and 2p5 regulators are also on.
 *  0b10..Beside RTC, 1p1 and 2p5 regulators are also on, low-power bandgap is selected so that the normal analog
 *        bandgap together with the rest analog is powered down.
 *  0b11..Beside RTC, low-power bandgap is selected and the rest analog is powered down.
 */
#define CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_SET_STOP_MODE_CONFIG_MASK)

#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_SHIFT (12U)
/*! DISCON_HIGH_SNVS
 *  0b0..Turn on the switch
 *  0b1..Turn off the switch
 */
#define CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_SET_DISCON_HIGH_SNVS_MASK)

#define CCM_ANALOG_MISC0_SET_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_SET_OSC_I_SHIFT         (13U)
/*! OSC_I
 *  0b00..Nominal
 *  0b01..Decrease current by 12.5%
 *  0b10..Decrease current by 25.0%
 *  0b11..Decrease current by 37.5%
 */
#define CCM_ANALOG_MISC0_SET_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_I_MASK)

#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_XTALOK_MASK)

#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_SET_OSC_XTALOK_EN_MASK)

#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_SHIFT  (25U)
/*! CLKGATE_CTRL
 *  0b0..Allow the logic to automatically gate the clock when the XTAL is powered down.
 *  0b1..Prevent the logic from ever gating off the clock.
 */
#define CCM_ANALOG_MISC0_SET_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_SET_CLKGATE_CTRL_MASK)

#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_SHIFT (26U)
/*! CLKGATE_DELAY
 *  0b000..0.5ms
 *  0b001..1.0ms
 *  0b010..2.0ms
 *  0b011..3.0ms
 *  0b100..4.0ms
 *  0b101..5.0ms
 *  0b110..6.0ms
 *  0b111..7.0ms
 */
#define CCM_ANALOG_MISC0_SET_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_SET_CLKGATE_DELAY_MASK)

#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_SHIFT (29U)
/*! RTC_XTAL_SOURCE
 *  0b0..Internal ring oscillator
 *  0b1..RTC_XTAL
 */
#define CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_SET_RTC_XTAL_SOURCE_MASK)

#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_SET_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_SET_XTAL_24M_PWD_MASK)
/*! @} */

/*! @name MISC0_CLR - Miscellaneous Register 0 */
/*! @{ */

#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_PWD_MASK)

#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_SHIFT (3U)
/*! REFTOP_SELFBIASOFF
 *  0b0..Uses coarse bias currents for startup
 *  0b1..Uses bandgap-based bias currents for best performance.
 */
#define CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_SELFBIASOFF_MASK)

#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_SHIFT (4U)
/*! REFTOP_VBGADJ
 *  0b000..Nominal VBG
 *  0b001..VBG+0.78%
 *  0b010..VBG+1.56%
 *  0b011..VBG+2.34%
 *  0b100..VBG-0.78%
 *  0b101..VBG-1.56%
 *  0b110..VBG-2.34%
 *  0b111..VBG-3.12%
 */
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_VBGADJ_MASK)

#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_CLR_REFTOP_VBGUP_MASK)

#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_SHIFT (10U)
/*! STOP_MODE_CONFIG
 *  0b00..All analog except RTC powered down on stop mode assertion.
 *  0b01..Beside RTC, analog bandgap, 1p1 and 2p5 regulators are also on.
 *  0b10..Beside RTC, 1p1 and 2p5 regulators are also on, low-power bandgap is selected so that the normal analog
 *        bandgap together with the rest analog is powered down.
 *  0b11..Beside RTC, low-power bandgap is selected and the rest analog is powered down.
 */
#define CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_CLR_STOP_MODE_CONFIG_MASK)

#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_SHIFT (12U)
/*! DISCON_HIGH_SNVS
 *  0b0..Turn on the switch
 *  0b1..Turn off the switch
 */
#define CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_CLR_DISCON_HIGH_SNVS_MASK)

#define CCM_ANALOG_MISC0_CLR_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_CLR_OSC_I_SHIFT         (13U)
/*! OSC_I
 *  0b00..Nominal
 *  0b01..Decrease current by 12.5%
 *  0b10..Decrease current by 25.0%
 *  0b11..Decrease current by 37.5%
 */
#define CCM_ANALOG_MISC0_CLR_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_I_MASK)

#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_XTALOK_MASK)

#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_CLR_OSC_XTALOK_EN_MASK)

#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_SHIFT  (25U)
/*! CLKGATE_CTRL
 *  0b0..Allow the logic to automatically gate the clock when the XTAL is powered down.
 *  0b1..Prevent the logic from ever gating off the clock.
 */
#define CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_CLR_CLKGATE_CTRL_MASK)

#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_SHIFT (26U)
/*! CLKGATE_DELAY
 *  0b000..0.5ms
 *  0b001..1.0ms
 *  0b010..2.0ms
 *  0b011..3.0ms
 *  0b100..4.0ms
 *  0b101..5.0ms
 *  0b110..6.0ms
 *  0b111..7.0ms
 */
#define CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_CLR_CLKGATE_DELAY_MASK)

#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_SHIFT (29U)
/*! RTC_XTAL_SOURCE
 *  0b0..Internal ring oscillator
 *  0b1..RTC_XTAL
 */
#define CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_CLR_RTC_XTAL_SOURCE_MASK)

#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_CLR_XTAL_24M_PWD_MASK)
/*! @} */

/*! @name MISC0_TOG - Miscellaneous Register 0 */
/*! @{ */

#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD_MASK     (0x1U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD_SHIFT    (0U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_PWD(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_PWD_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_PWD_MASK)

#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_MASK (0x8U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_SHIFT (3U)
/*! REFTOP_SELFBIASOFF
 *  0b0..Uses coarse bias currents for startup
 *  0b1..Uses bandgap-based bias currents for best performance.
 */
#define CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_SELFBIASOFF_MASK)

#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_MASK  (0x70U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_SHIFT (4U)
/*! REFTOP_VBGADJ
 *  0b000..Nominal VBG
 *  0b001..VBG+0.78%
 *  0b010..VBG+1.56%
 *  0b011..VBG+2.34%
 *  0b100..VBG-0.78%
 *  0b101..VBG-1.56%
 *  0b110..VBG-2.34%
 *  0b111..VBG-3.12%
 */
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_VBGADJ_MASK)

#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_MASK   (0x80U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_SHIFT  (7U)
#define CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_SHIFT)) & CCM_ANALOG_MISC0_TOG_REFTOP_VBGUP_MASK)

#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_MASK (0xC00U)
#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_SHIFT (10U)
/*! STOP_MODE_CONFIG
 *  0b00..All analog except RTC powered down on stop mode assertion.
 *  0b01..Beside RTC, analog bandgap, 1p1 and 2p5 regulators are also on.
 *  0b10..Beside RTC, 1p1 and 2p5 regulators are also on, low-power bandgap is selected so that the normal analog
 *        bandgap together with the rest analog is powered down.
 *  0b11..Beside RTC, low-power bandgap is selected and the rest analog is powered down.
 */
#define CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_SHIFT)) & CCM_ANALOG_MISC0_TOG_STOP_MODE_CONFIG_MASK)

#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_MASK (0x1000U)
#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_SHIFT (12U)
/*! DISCON_HIGH_SNVS
 *  0b0..Turn on the switch
 *  0b1..Turn off the switch
 */
#define CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_SHIFT)) & CCM_ANALOG_MISC0_TOG_DISCON_HIGH_SNVS_MASK)

#define CCM_ANALOG_MISC0_TOG_OSC_I_MASK          (0x6000U)
#define CCM_ANALOG_MISC0_TOG_OSC_I_SHIFT         (13U)
/*! OSC_I
 *  0b00..Nominal
 *  0b01..Decrease current by 12.5%
 *  0b10..Decrease current by 25.0%
 *  0b11..Decrease current by 37.5%
 */
#define CCM_ANALOG_MISC0_TOG_OSC_I(x)            (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_I_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_I_MASK)

#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_MASK     (0x8000U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_SHIFT    (15U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_XTALOK_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_XTALOK_MASK)

#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_MASK  (0x10000U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_SHIFT (16U)
#define CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_SHIFT)) & CCM_ANALOG_MISC0_TOG_OSC_XTALOK_EN_MASK)

#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_MASK   (0x2000000U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_SHIFT  (25U)
/*! CLKGATE_CTRL
 *  0b0..Allow the logic to automatically gate the clock when the XTAL is powered down.
 *  0b1..Prevent the logic from ever gating off the clock.
 */
#define CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_SHIFT)) & CCM_ANALOG_MISC0_TOG_CLKGATE_CTRL_MASK)

#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_MASK  (0x1C000000U)
#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_SHIFT (26U)
/*! CLKGATE_DELAY
 *  0b000..0.5ms
 *  0b001..1.0ms
 *  0b010..2.0ms
 *  0b011..3.0ms
 *  0b100..4.0ms
 *  0b101..5.0ms
 *  0b110..6.0ms
 *  0b111..7.0ms
 */
#define CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_SHIFT)) & CCM_ANALOG_MISC0_TOG_CLKGATE_DELAY_MASK)

#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_MASK (0x20000000U)
#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_SHIFT (29U)
/*! RTC_XTAL_SOURCE
 *  0b0..Internal ring oscillator
 *  0b1..RTC_XTAL
 */
#define CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_SHIFT)) & CCM_ANALOG_MISC0_TOG_RTC_XTAL_SOURCE_MASK)

#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_MASK   (0x40000000U)
#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_SHIFT  (30U)
#define CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_SHIFT)) & CCM_ANALOG_MISC0_TOG_XTAL_24M_PWD_MASK)
/*! @} */

/*! @name MISC1 - Miscellaneous Register 1 */
/*! @{ */

#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN(x)  (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC_MASK      (0x8000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC_SHIFT     (27U)
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPPANIC_MASK)

#define CCM_ANALOG_MISC1_IRQ_TEMPLOW_MASK        (0x10000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW_SHIFT       (28U)
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPLOW_MASK)

#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH_MASK       (0x20000000U)
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH_SHIFT      (29U)
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_IRQ_TEMPHIGH_MASK)

#define CCM_ANALOG_MISC1_IRQ_ANA_BO_MASK         (0x40000000U)
#define CCM_ANALOG_MISC1_IRQ_ANA_BO_SHIFT        (30U)
#define CCM_ANALOG_MISC1_IRQ_ANA_BO(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_IRQ_ANA_BO_MASK)

#define CCM_ANALOG_MISC1_IRQ_DIG_BO_MASK         (0x80000000U)
#define CCM_ANALOG_MISC1_IRQ_DIG_BO_SHIFT        (31U)
#define CCM_ANALOG_MISC1_IRQ_DIG_BO(x)           (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_IRQ_DIG_BO_MASK)
/*! @} */

/*! @name MISC1_SET - Miscellaneous Register 1 */
/*! @{ */

#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_SET_PFD_480_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_SET_PFD_528_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPPANIC_MASK)

#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPLOW_MASK)

#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_TEMPHIGH_MASK)

#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_SET_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_ANA_BO_MASK)

#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_SET_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_SET_IRQ_DIG_BO_MASK)
/*! @} */

/*! @name MISC1_CLR - Miscellaneous Register 1 */
/*! @{ */

#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_CLR_PFD_480_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_CLR_PFD_528_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPPANIC_MASK)

#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPLOW_MASK)

#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_TEMPHIGH_MASK)

#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_ANA_BO_MASK)

#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_CLR_IRQ_DIG_BO_MASK)
/*! @} */

/*! @name MISC1_TOG - Miscellaneous Register 1 */
/*! @{ */

#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_MASK (0x10000U)
#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_SHIFT (16U)
#define CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_TOG_PFD_480_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_MASK (0x20000U)
#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_SHIFT (17U)
#define CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN(x) (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_SHIFT)) & CCM_ANALOG_MISC1_TOG_PFD_528_AUTOGATE_EN_MASK)

#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_MASK  (0x8000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_SHIFT (27U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPPANIC_MASK)

#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_MASK    (0x10000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_SHIFT   (28U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW(x)      (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPLOW_MASK)

#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_MASK   (0x20000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_SHIFT  (29U)
#define CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_TEMPHIGH_MASK)

#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_MASK     (0x40000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_SHIFT    (30U)
#define CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_ANA_BO_MASK)

#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_MASK     (0x80000000U)
#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_SHIFT    (31U)
#define CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_SHIFT)) & CCM_ANALOG_MISC1_TOG_IRQ_DIG_BO_MASK)
/*! @} */

/*! @name MISC2 - Miscellaneous Register 2 */
/*! @{ */

#define CCM_ANALOG_MISC2_REG0_BO_OFFSET_MASK     (0x7U)
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET_SHIFT    (0U)
/*! REG0_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG0_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_REG0_BO_STATUS_MASK     (0x8U)
#define CCM_ANALOG_MISC2_REG0_BO_STATUS_SHIFT    (3U)
/*! REG0_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_REG0_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG0_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_REG0_ENABLE_BO_MASK     (0x20U)
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO_SHIFT    (5U)
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG0_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_REG0_OK_MASK            (0x40U)
#define CCM_ANALOG_MISC2_REG0_OK_SHIFT           (6U)
#define CCM_ANALOG_MISC2_REG0_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_REG0_OK_MASK)

#define CCM_ANALOG_MISC2_PLL3_DISABLE_MASK       (0x80U)
#define CCM_ANALOG_MISC2_PLL3_DISABLE_SHIFT      (7U)
/*! PLL3_DISABLE
 *  0b0..PLL3 is being used by peripherals and is enabled when SoC is not in any low power mode
 *  0b1..PLL3 can be disabled when the SoC is not in any low power mode
 */
#define CCM_ANALOG_MISC2_PLL3_DISABLE(x)         (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_PLL3_DISABLE_SHIFT)) & CCM_ANALOG_MISC2_PLL3_DISABLE_MASK)

#define CCM_ANALOG_MISC2_REG1_BO_OFFSET_MASK     (0x700U)
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET_SHIFT    (8U)
/*! REG1_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG1_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_REG1_BO_STATUS_MASK     (0x800U)
#define CCM_ANALOG_MISC2_REG1_BO_STATUS_SHIFT    (11U)
/*! REG1_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_REG1_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG1_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_REG1_ENABLE_BO_MASK     (0x2000U)
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO_SHIFT    (13U)
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG1_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_REG1_OK_MASK            (0x4000U)
#define CCM_ANALOG_MISC2_REG1_OK_SHIFT           (14U)
#define CCM_ANALOG_MISC2_REG1_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_REG1_OK_MASK)

#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK      (0x8000U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB_SHIFT     (15U)
/*! AUDIO_DIV_LSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_AUDIO_DIV_LSB_MASK)

#define CCM_ANALOG_MISC2_REG2_BO_OFFSET_MASK     (0x70000U)
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET_SHIFT    (16U)
/*! REG2_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_REG2_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_REG2_BO_STATUS_MASK     (0x80000U)
#define CCM_ANALOG_MISC2_REG2_BO_STATUS_SHIFT    (19U)
#define CCM_ANALOG_MISC2_REG2_BO_STATUS(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_REG2_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_REG2_ENABLE_BO_MASK     (0x200000U)
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO_SHIFT    (21U)
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_REG2_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_REG2_OK_MASK            (0x400000U)
#define CCM_ANALOG_MISC2_REG2_OK_SHIFT           (22U)
#define CCM_ANALOG_MISC2_REG2_OK(x)              (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_REG2_OK_MASK)

#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK      (0x800000U)
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB_SHIFT     (23U)
/*! AUDIO_DIV_MSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB(x)        (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_AUDIO_DIV_MSB_MASK)

#define CCM_ANALOG_MISC2_REG0_STEP_TIME_MASK     (0x3000000U)
#define CCM_ANALOG_MISC2_REG0_STEP_TIME_SHIFT    (24U)
/*! REG0_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_REG0_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG0_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_REG1_STEP_TIME_MASK     (0xC000000U)
#define CCM_ANALOG_MISC2_REG1_STEP_TIME_SHIFT    (26U)
/*! REG1_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_REG1_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG1_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_REG2_STEP_TIME_MASK     (0x30000000U)
#define CCM_ANALOG_MISC2_REG2_STEP_TIME_SHIFT    (28U)
/*! REG2_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_REG2_STEP_TIME(x)       (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_REG2_STEP_TIME_MASK)
/*! @} */

/*! @name MISC2_SET - Miscellaneous Register 2 */
/*! @{ */

#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_SHIFT (0U)
/*! REG0_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_SHIFT (3U)
/*! REG0_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_SET_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_SET_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_SET_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_SET_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_OK_MASK)

#define CCM_ANALOG_MISC2_SET_PLL3_DISABLE_MASK   (0x80U)
#define CCM_ANALOG_MISC2_SET_PLL3_DISABLE_SHIFT  (7U)
/*! PLL3_DISABLE
 *  0b0..PLL3 is being used by peripherals and is enabled when SoC is not in any low power mode
 *  0b1..PLL3 can be disabled when the SoC is not in any low power mode
 */
#define CCM_ANALOG_MISC2_SET_PLL3_DISABLE(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_PLL3_DISABLE_SHIFT)) & CCM_ANALOG_MISC2_SET_PLL3_DISABLE_MASK)

#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_SHIFT (8U)
/*! REG1_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_SHIFT (11U)
/*! REG1_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_SET_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_SET_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_SET_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_SET_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_OK_MASK)

#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_SHIFT (15U)
/*! AUDIO_DIV_LSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_SET_AUDIO_DIV_LSB_MASK)

#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_SHIFT (16U)
/*! REG2_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_SET_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_SET_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_SET_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_SET_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_OK_MASK)

#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_SHIFT (23U)
/*! AUDIO_DIV_MSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_SET_AUDIO_DIV_MSB_MASK)

#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_SHIFT (24U)
/*! REG0_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_SET_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG0_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_SHIFT (26U)
/*! REG1_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_SET_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG1_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_SHIFT (28U)
/*! REG2_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_SET_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_SET_REG2_STEP_TIME_MASK)
/*! @} */

/*! @name MISC2_CLR - Miscellaneous Register 2 */
/*! @{ */

#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_SHIFT (0U)
/*! REG0_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_SHIFT (3U)
/*! REG0_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_CLR_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_CLR_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_CLR_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_OK_MASK)

#define CCM_ANALOG_MISC2_CLR_PLL3_DISABLE_MASK   (0x80U)
#define CCM_ANALOG_MISC2_CLR_PLL3_DISABLE_SHIFT  (7U)
/*! PLL3_DISABLE
 *  0b0..PLL3 is being used by peripherals and is enabled when SoC is not in any low power mode
 *  0b1..PLL3 can be disabled when the SoC is not in any low power mode
 */
#define CCM_ANALOG_MISC2_CLR_PLL3_DISABLE(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_PLL3_DISABLE_SHIFT)) & CCM_ANALOG_MISC2_CLR_PLL3_DISABLE_MASK)

#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_SHIFT (8U)
/*! REG1_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_SHIFT (11U)
/*! REG1_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_CLR_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_CLR_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_CLR_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_OK_MASK)

#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_SHIFT (15U)
/*! AUDIO_DIV_LSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_CLR_AUDIO_DIV_LSB_MASK)

#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_SHIFT (16U)
/*! REG2_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_CLR_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_CLR_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_CLR_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_OK_MASK)

#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_SHIFT (23U)
/*! AUDIO_DIV_MSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_CLR_AUDIO_DIV_MSB_MASK)

#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_SHIFT (24U)
/*! REG0_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG0_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_SHIFT (26U)
/*! REG1_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG1_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_SHIFT (28U)
/*! REG2_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_CLR_REG2_STEP_TIME_MASK)
/*! @} */

/*! @name MISC2_TOG - Miscellaneous Register 2 */
/*! @{ */

#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_MASK (0x7U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_SHIFT (0U)
/*! REG0_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_MASK (0x8U)
#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_SHIFT (3U)
/*! REG0_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_MASK (0x20U)
#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_SHIFT (5U)
#define CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_TOG_REG0_OK_MASK        (0x40U)
#define CCM_ANALOG_MISC2_TOG_REG0_OK_SHIFT       (6U)
#define CCM_ANALOG_MISC2_TOG_REG0_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_OK_MASK)

#define CCM_ANALOG_MISC2_TOG_PLL3_DISABLE_MASK   (0x80U)
#define CCM_ANALOG_MISC2_TOG_PLL3_DISABLE_SHIFT  (7U)
/*! PLL3_DISABLE
 *  0b0..PLL3 is being used by peripherals and is enabled when SoC is not in any low power mode
 *  0b1..PLL3 can be disabled when the SoC is not in any low power mode
 */
#define CCM_ANALOG_MISC2_TOG_PLL3_DISABLE(x)     (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_PLL3_DISABLE_SHIFT)) & CCM_ANALOG_MISC2_TOG_PLL3_DISABLE_MASK)

#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_MASK (0x700U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_SHIFT (8U)
/*! REG1_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_MASK (0x800U)
#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_SHIFT (11U)
/*! REG1_BO_STATUS
 *  0b1..Brownout, supply is below target minus brownout offset.
 */
#define CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_MASK (0x2000U)
#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_SHIFT (13U)
#define CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_TOG_REG1_OK_MASK        (0x4000U)
#define CCM_ANALOG_MISC2_TOG_REG1_OK_SHIFT       (14U)
#define CCM_ANALOG_MISC2_TOG_REG1_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_OK_MASK)

#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_MASK  (0x8000U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_SHIFT (15U)
/*! AUDIO_DIV_LSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_SHIFT)) & CCM_ANALOG_MISC2_TOG_AUDIO_DIV_LSB_MASK)

#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_MASK (0x70000U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_SHIFT (16U)
/*! REG2_BO_OFFSET
 *  0b100..Brownout offset = 0.100V
 *  0b111..Brownout offset = 0.175V
 */
#define CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_BO_OFFSET_MASK)

#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_MASK (0x80000U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_SHIFT (19U)
#define CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_BO_STATUS_MASK)

#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_MASK (0x200000U)
#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_SHIFT (21U)
#define CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_ENABLE_BO_MASK)

#define CCM_ANALOG_MISC2_TOG_REG2_OK_MASK        (0x400000U)
#define CCM_ANALOG_MISC2_TOG_REG2_OK_SHIFT       (22U)
#define CCM_ANALOG_MISC2_TOG_REG2_OK(x)          (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_OK_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_OK_MASK)

#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_MASK  (0x800000U)
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_SHIFT (23U)
/*! AUDIO_DIV_MSB
 *  0b0..divide by 1 (Default)
 *  0b1..divide by 2
 */
#define CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB(x)    (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_SHIFT)) & CCM_ANALOG_MISC2_TOG_AUDIO_DIV_MSB_MASK)

#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_MASK (0x3000000U)
#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_SHIFT (24U)
/*! REG0_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG0_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_MASK (0xC000000U)
#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_SHIFT (26U)
/*! REG1_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG1_STEP_TIME_MASK)

#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_MASK (0x30000000U)
#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_SHIFT (28U)
/*! REG2_STEP_TIME
 *  0b00..64
 *  0b01..128
 *  0b10..256
 *  0b11..512
 */
#define CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME(x)   (((uint32_t)(((uint32_t)(x)) << CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_SHIFT)) & CCM_ANALOG_MISC2_TOG_REG2_STEP_TIME_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CCM_ANALOG_Register_Masks */


/* ----------------------------------------------------------------------------
   -- CM7_MCM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CM7_MCM_Register_Masks CM7_MCM Register Masks
 * @{
 */

/*! @name ISCR - Interrupt Status and Control Register */
/*! @{ */

#define CM7_MCM_ISCR_WABS_MASK                   (0x20U)
#define CM7_MCM_ISCR_WABS_SHIFT                  (5U)
/*! WABS - Write Abort on Slave
 *  0b0..No abort
 *  0b1..Abort
 */
#define CM7_MCM_ISCR_WABS(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_WABS_SHIFT)) & CM7_MCM_ISCR_WABS_MASK)

#define CM7_MCM_ISCR_WABSO_MASK                  (0x40U)
#define CM7_MCM_ISCR_WABSO_SHIFT                 (6U)
/*! WABSO - Write Abort on Slave Overrun
 *  0b0..No write abort overrun
 *  0b1..Write abort overrun occurred
 */
#define CM7_MCM_ISCR_WABSO(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_WABSO_SHIFT)) & CM7_MCM_ISCR_WABSO_MASK)

#define CM7_MCM_ISCR_FIOC_MASK                   (0x100U)
#define CM7_MCM_ISCR_FIOC_SHIFT                  (8U)
/*! FIOC - FPU Invalid Operation interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FIOC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIOC_SHIFT)) & CM7_MCM_ISCR_FIOC_MASK)

#define CM7_MCM_ISCR_FDZC_MASK                   (0x200U)
#define CM7_MCM_ISCR_FDZC_SHIFT                  (9U)
/*! FDZC - FPU Divide-by-Zero Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FDZC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FDZC_SHIFT)) & CM7_MCM_ISCR_FDZC_MASK)

#define CM7_MCM_ISCR_FOFC_MASK                   (0x400U)
#define CM7_MCM_ISCR_FOFC_SHIFT                  (10U)
/*! FOFC - FPU Overflow interrupt status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FOFC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FOFC_SHIFT)) & CM7_MCM_ISCR_FOFC_MASK)

#define CM7_MCM_ISCR_FUFC_MASK                   (0x800U)
#define CM7_MCM_ISCR_FUFC_SHIFT                  (11U)
/*! FUFC - FPU Underflow Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FUFC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FUFC_SHIFT)) & CM7_MCM_ISCR_FUFC_MASK)

#define CM7_MCM_ISCR_FIXC_MASK                   (0x1000U)
#define CM7_MCM_ISCR_FIXC_SHIFT                  (12U)
/*! FIXC - FPU Inexact Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FIXC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIXC_SHIFT)) & CM7_MCM_ISCR_FIXC_MASK)

#define CM7_MCM_ISCR_FIDC_MASK                   (0x8000U)
#define CM7_MCM_ISCR_FIDC_SHIFT                  (15U)
/*! FIDC - FPU Input Denormal Interrupt Status
 *  0b0..No interrupt
 *  0b1..Interrupt occured
 */
#define CM7_MCM_ISCR_FIDC(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIDC_SHIFT)) & CM7_MCM_ISCR_FIDC_MASK)

#define CM7_MCM_ISCR_WABE_MASK                   (0x200000U)
#define CM7_MCM_ISCR_WABE_SHIFT                  (21U)
/*! WABE - TCM Write Abort Interrupt enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_WABE(x)                     (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_WABE_SHIFT)) & CM7_MCM_ISCR_WABE_MASK)

#define CM7_MCM_ISCR_FIOCE_MASK                  (0x1000000U)
#define CM7_MCM_ISCR_FIOCE_SHIFT                 (24U)
/*! FIOCE - FPU Invalid Operation Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FIOCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIOCE_SHIFT)) & CM7_MCM_ISCR_FIOCE_MASK)

#define CM7_MCM_ISCR_FDZCE_MASK                  (0x2000000U)
#define CM7_MCM_ISCR_FDZCE_SHIFT                 (25U)
/*! FDZCE - FPU Divide-by-Zero Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FDZCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FDZCE_SHIFT)) & CM7_MCM_ISCR_FDZCE_MASK)

#define CM7_MCM_ISCR_FOFCE_MASK                  (0x4000000U)
#define CM7_MCM_ISCR_FOFCE_SHIFT                 (26U)
/*! FOFCE - FPU Overflow Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FOFCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FOFCE_SHIFT)) & CM7_MCM_ISCR_FOFCE_MASK)

#define CM7_MCM_ISCR_FUFCE_MASK                  (0x8000000U)
#define CM7_MCM_ISCR_FUFCE_SHIFT                 (27U)
/*! FUFCE - FPU Underflow Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FUFCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FUFCE_SHIFT)) & CM7_MCM_ISCR_FUFCE_MASK)

#define CM7_MCM_ISCR_FIXCE_MASK                  (0x10000000U)
#define CM7_MCM_ISCR_FIXCE_SHIFT                 (28U)
/*! FIXCE - FPU Inexact Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FIXCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIXCE_SHIFT)) & CM7_MCM_ISCR_FIXCE_MASK)

#define CM7_MCM_ISCR_FIDCE_MASK                  (0x80000000U)
#define CM7_MCM_ISCR_FIDCE_SHIFT                 (31U)
/*! FIDCE - FPU Input Denormal Interrupt Enable
 *  0b0..Disable interrupt
 *  0b1..Enable interrupt
 */
#define CM7_MCM_ISCR_FIDCE(x)                    (((uint32_t)(((uint32_t)(x)) << CM7_MCM_ISCR_FIDCE_SHIFT)) & CM7_MCM_ISCR_FIDCE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CM7_MCM_Register_Masks */


 /* ----------------------------------------------------------------------------
   -- CSU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CSU_Register_Masks CSU Register Masks
 * @{
 */

/*! @name CSL - Config security level register */
/*! @{ */

#define CSU_CSL_SUR_S2_MASK                      (0x1U)
#define CSU_CSL_SUR_S2_SHIFT                     (0U)
/*! SUR_S2
 *  0b0..The secure user read access is disabled for the second slave.
 *  0b1..The secure user read access is enabled for the second slave.
 */
#define CSU_CSL_SUR_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SUR_S2_SHIFT)) & CSU_CSL_SUR_S2_MASK)

#define CSU_CSL_SSR_S2_MASK                      (0x2U)
#define CSU_CSL_SSR_S2_SHIFT                     (1U)
/*! SSR_S2
 *  0b0..The secure supervisor read access is disabled for the second slave.
 *  0b1..The secure supervisor read access is enabled for the second slave.
 */
#define CSU_CSL_SSR_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SSR_S2_SHIFT)) & CSU_CSL_SSR_S2_MASK)

#define CSU_CSL_NUR_S2_MASK                      (0x4U)
#define CSU_CSL_NUR_S2_SHIFT                     (2U)
/*! NUR_S2
 *  0b0..The non-secure user read access is disabled for the second slave.
 *  0b1..The non-secure user read access is enabled for the second slave.
 */
#define CSU_CSL_NUR_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NUR_S2_SHIFT)) & CSU_CSL_NUR_S2_MASK)

#define CSU_CSL_NSR_S2_MASK                      (0x8U)
#define CSU_CSL_NSR_S2_SHIFT                     (3U)
/*! NSR_S2
 *  0b0..The non-secure supervisor read access is disabled for the second slave.
 *  0b1..The non-secure supervisor read access is enabled for the second slave.
 */
#define CSU_CSL_NSR_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NSR_S2_SHIFT)) & CSU_CSL_NSR_S2_MASK)

#define CSU_CSL_SUW_S2_MASK                      (0x10U)
#define CSU_CSL_SUW_S2_SHIFT                     (4U)
/*! SUW_S2
 *  0b0..The secure user write access is disabled for the second slave.
 *  0b1..The secure user write access is enabled for the second slave.
 */
#define CSU_CSL_SUW_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SUW_S2_SHIFT)) & CSU_CSL_SUW_S2_MASK)

#define CSU_CSL_SSW_S2_MASK                      (0x20U)
#define CSU_CSL_SSW_S2_SHIFT                     (5U)
/*! SSW_S2
 *  0b0..The secure supervisor write access is disabled for the second slave.
 *  0b1..The secure supervisor write access is enabled for the second slave.
 */
#define CSU_CSL_SSW_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SSW_S2_SHIFT)) & CSU_CSL_SSW_S2_MASK)

#define CSU_CSL_NUW_S2_MASK                      (0x40U)
#define CSU_CSL_NUW_S2_SHIFT                     (6U)
/*! NUW_S2
 *  0b0..The non-secure user write access is disabled for the second slave.
 *  0b1..The non-secure user write access is enabled for the second slave.
 */
#define CSU_CSL_NUW_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NUW_S2_SHIFT)) & CSU_CSL_NUW_S2_MASK)

#define CSU_CSL_NSW_S2_MASK                      (0x80U)
#define CSU_CSL_NSW_S2_SHIFT                     (7U)
/*! NSW_S2
 *  0b0..The non-secure supervisor write access is disabled for the second slave.
 *  0b1..The non-secure supervisor write access is enabled for the second slave.
 */
#define CSU_CSL_NSW_S2(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NSW_S2_SHIFT)) & CSU_CSL_NSW_S2_MASK)

#define CSU_CSL_LOCK_S2_MASK                     (0x100U)
#define CSU_CSL_LOCK_S2_SHIFT                    (8U)
/*! LOCK_S2
 *  0b0..Not locked. Bits 7-0 can be written by the software.
 *  0b1..Bits 7-0 are locked and cannot be written by the software
 */
#define CSU_CSL_LOCK_S2(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_CSL_LOCK_S2_SHIFT)) & CSU_CSL_LOCK_S2_MASK)

#define CSU_CSL_SUR_S1_MASK                      (0x10000U)
#define CSU_CSL_SUR_S1_SHIFT                     (16U)
/*! SUR_S1
 *  0b0..The secure user read access is disabled for the first slave.
 *  0b1..The secure user read access is enabled for the first slave.
 */
#define CSU_CSL_SUR_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SUR_S1_SHIFT)) & CSU_CSL_SUR_S1_MASK)

#define CSU_CSL_SSR_S1_MASK                      (0x20000U)
#define CSU_CSL_SSR_S1_SHIFT                     (17U)
/*! SSR_S1
 *  0b0..The secure supervisor read access is disabled for the first slave.
 *  0b1..The secure supervisor read access is enabled for the first slave.
 */
#define CSU_CSL_SSR_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SSR_S1_SHIFT)) & CSU_CSL_SSR_S1_MASK)

#define CSU_CSL_NUR_S1_MASK                      (0x40000U)
#define CSU_CSL_NUR_S1_SHIFT                     (18U)
/*! NUR_S1
 *  0b0..The non-secure user read access is disabled for the first slave.
 *  0b1..The non-secure user read access is enabled for the first slave.
 */
#define CSU_CSL_NUR_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NUR_S1_SHIFT)) & CSU_CSL_NUR_S1_MASK)

#define CSU_CSL_NSR_S1_MASK                      (0x80000U)
#define CSU_CSL_NSR_S1_SHIFT                     (19U)
/*! NSR_S1
 *  0b0..The non-secure supervisor read access is disabled for the first slave.
 *  0b1..The non-secure supervisor read access is enabled for the first slave.
 */
#define CSU_CSL_NSR_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NSR_S1_SHIFT)) & CSU_CSL_NSR_S1_MASK)

#define CSU_CSL_SUW_S1_MASK                      (0x100000U)
#define CSU_CSL_SUW_S1_SHIFT                     (20U)
/*! SUW_S1
 *  0b0..The secure user write access is disabled for the first slave.
 *  0b1..The secure user write access is enabled for the first slave.
 */
#define CSU_CSL_SUW_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SUW_S1_SHIFT)) & CSU_CSL_SUW_S1_MASK)

#define CSU_CSL_SSW_S1_MASK                      (0x200000U)
#define CSU_CSL_SSW_S1_SHIFT                     (21U)
/*! SSW_S1
 *  0b0..The secure supervisor write access is disabled for the first slave.
 *  0b1..The secure supervisor write access is enabled for the first slave.
 */
#define CSU_CSL_SSW_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_SSW_S1_SHIFT)) & CSU_CSL_SSW_S1_MASK)

#define CSU_CSL_NUW_S1_MASK                      (0x400000U)
#define CSU_CSL_NUW_S1_SHIFT                     (22U)
/*! NUW_S1
 *  0b0..The non-secure user write access is disabled for the first slave.
 *  0b1..The non-secure user write access is enabled for the first slave.
 */
#define CSU_CSL_NUW_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NUW_S1_SHIFT)) & CSU_CSL_NUW_S1_MASK)

#define CSU_CSL_NSW_S1_MASK                      (0x800000U)
#define CSU_CSL_NSW_S1_SHIFT                     (23U)
/*! NSW_S1
 *  0b0..The non-secure supervisor write access is disabled for the first slave.
 *  0b1..The non-secure supervisor write access is enabled for the first slave
 */
#define CSU_CSL_NSW_S1(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_CSL_NSW_S1_SHIFT)) & CSU_CSL_NSW_S1_MASK)

#define CSU_CSL_LOCK_S1_MASK                     (0x1000000U)
#define CSU_CSL_LOCK_S1_SHIFT                    (24U)
/*! LOCK_S1
 *  0b0..Not locked. The bits 16-23 can be written by the software.
 *  0b1..The bits 16-23 are locked and can't be written by the software.
 */
#define CSU_CSL_LOCK_S1(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_CSL_LOCK_S1_SHIFT)) & CSU_CSL_LOCK_S1_MASK)
/*! @} */

/* The count of CSU_CSL */
#define CSU_CSL_COUNT                            (32U)

/*! @name HP0 - HP0 register */
/*! @{ */

#define CSU_HP0_HP_DMA_MASK                      (0x4U)
#define CSU_HP0_HP_DMA_SHIFT                     (2U)
/*! HP_DMA
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_DMA(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_DMA_SHIFT)) & CSU_HP0_HP_DMA_MASK)

#define CSU_HP0_L_DMA_MASK                       (0x8U)
#define CSU_HP0_L_DMA_SHIFT                      (3U)
/*! L_DMA
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_DMA(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_DMA_SHIFT)) & CSU_HP0_L_DMA_MASK)

#define CSU_HP0_HP_LCDIF_MASK                    (0x10U)
#define CSU_HP0_HP_LCDIF_SHIFT                   (4U)
/*! HP_LCDIF
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_LCDIF(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_LCDIF_SHIFT)) & CSU_HP0_HP_LCDIF_MASK)

#define CSU_HP0_L_LCDIF_MASK                     (0x20U)
#define CSU_HP0_L_LCDIF_SHIFT                    (5U)
/*! L_LCDIF
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_LCDIF(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_LCDIF_SHIFT)) & CSU_HP0_L_LCDIF_MASK)

#define CSU_HP0_HP_CSI_MASK                      (0x40U)
#define CSU_HP0_HP_CSI_SHIFT                     (6U)
/*! HP_CSI
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_CSI(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_CSI_SHIFT)) & CSU_HP0_HP_CSI_MASK)

#define CSU_HP0_L_CSI_MASK                       (0x80U)
#define CSU_HP0_L_CSI_SHIFT                      (7U)
/*! L_CSI
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_CSI(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_CSI_SHIFT)) & CSU_HP0_L_CSI_MASK)

#define CSU_HP0_HP_PXP_MASK                      (0x100U)
#define CSU_HP0_HP_PXP_SHIFT                     (8U)
/*! HP_PXP
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_PXP(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_PXP_SHIFT)) & CSU_HP0_HP_PXP_MASK)

#define CSU_HP0_L_PXP_MASK                       (0x200U)
#define CSU_HP0_L_PXP_SHIFT                      (9U)
/*! L_PXP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_PXP(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_PXP_SHIFT)) & CSU_HP0_L_PXP_MASK)

#define CSU_HP0_HP_DCP_MASK                      (0x400U)
#define CSU_HP0_HP_DCP_SHIFT                     (10U)
/*! HP_DCP
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_DCP(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_DCP_SHIFT)) & CSU_HP0_HP_DCP_MASK)

#define CSU_HP0_L_DCP_MASK                       (0x800U)
#define CSU_HP0_L_DCP_SHIFT                      (11U)
/*! L_DCP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit cannot be written by the software.
 */
#define CSU_HP0_L_DCP(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_DCP_SHIFT)) & CSU_HP0_L_DCP_MASK)

#define CSU_HP0_HP_ENET_MASK                     (0x4000U)
#define CSU_HP0_HP_ENET_SHIFT                    (14U)
/*! HP_ENET
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_ENET(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_ENET_SHIFT)) & CSU_HP0_HP_ENET_MASK)

#define CSU_HP0_L_ENET_MASK                      (0x8000U)
#define CSU_HP0_L_ENET_SHIFT                     (15U)
/*! L_ENET
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_ENET(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_ENET_SHIFT)) & CSU_HP0_L_ENET_MASK)

#define CSU_HP0_HP_USDHC1_MASK                   (0x10000U)
#define CSU_HP0_HP_USDHC1_SHIFT                  (16U)
/*! HP_USDHC1
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_USDHC1(x)                     (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_USDHC1_SHIFT)) & CSU_HP0_HP_USDHC1_MASK)

#define CSU_HP0_L_USDHC1_MASK                    (0x20000U)
#define CSU_HP0_L_USDHC1_SHIFT                   (17U)
/*! L_USDHC1
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_USDHC1(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_USDHC1_SHIFT)) & CSU_HP0_L_USDHC1_MASK)

#define CSU_HP0_HP_USDHC2_MASK                   (0x40000U)
#define CSU_HP0_HP_USDHC2_SHIFT                  (18U)
/*! HP_USDHC2
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_USDHC2(x)                     (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_USDHC2_SHIFT)) & CSU_HP0_HP_USDHC2_MASK)

#define CSU_HP0_L_USDHC2_MASK                    (0x80000U)
#define CSU_HP0_L_USDHC2_SHIFT                   (19U)
/*! L_USDHC2
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_USDHC2(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_USDHC2_SHIFT)) & CSU_HP0_L_USDHC2_MASK)

#define CSU_HP0_HP_TPSMP_MASK                    (0x100000U)
#define CSU_HP0_HP_TPSMP_SHIFT                   (20U)
/*! HP_TPSMP
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_TPSMP(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_TPSMP_SHIFT)) & CSU_HP0_HP_TPSMP_MASK)

#define CSU_HP0_L_TPSMP_MASK                     (0x200000U)
#define CSU_HP0_L_TPSMP_SHIFT                    (21U)
/*! L_TPSMP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_TPSMP(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_TPSMP_SHIFT)) & CSU_HP0_L_TPSMP_MASK)

#define CSU_HP0_HP_USB_MASK                      (0x400000U)
#define CSU_HP0_HP_USB_SHIFT                     (22U)
/*! HP_USB
 *  0b0..The hprot1 input signal value is routed to the csu_hprot1 output for the corresponding master.
 *  0b1..The HP register bit is routed to the csu_hprot1 output for the corresponding master.
 */
#define CSU_HP0_HP_USB(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_HP0_HP_USB_SHIFT)) & CSU_HP0_HP_USB_MASK)

#define CSU_HP0_L_USB_MASK                       (0x800000U)
#define CSU_HP0_L_USB_SHIFT                      (23U)
/*! L_USB
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HP0_L_USB(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_HP0_L_USB_SHIFT)) & CSU_HP0_L_USB_MASK)
/*! @} */

/*! @name SA - Secure access register */
/*! @{ */

#define CSU_SA_NSA_DMA_MASK                      (0x4U)
#define CSU_SA_NSA_DMA_SHIFT                     (2U)
/*! NSA_DMA - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_DMA(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_DMA_SHIFT)) & CSU_SA_NSA_DMA_MASK)

#define CSU_SA_L_DMA_MASK                        (0x8U)
#define CSU_SA_L_DMA_SHIFT                       (3U)
/*! L_DMA
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_DMA(x)                          (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_DMA_SHIFT)) & CSU_SA_L_DMA_MASK)

#define CSU_SA_NSA_LCDIF_MASK                    (0x10U)
#define CSU_SA_NSA_LCDIF_SHIFT                   (4U)
/*! NSA_LCDIF - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_LCDIF(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_LCDIF_SHIFT)) & CSU_SA_NSA_LCDIF_MASK)

#define CSU_SA_L_LCDIF_MASK                      (0x20U)
#define CSU_SA_L_LCDIF_SHIFT                     (5U)
/*! L_LCDIF
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_LCDIF(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_LCDIF_SHIFT)) & CSU_SA_L_LCDIF_MASK)

#define CSU_SA_NSA_CSI_MASK                      (0x40U)
#define CSU_SA_NSA_CSI_SHIFT                     (6U)
/*! NSA_CSI - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_CSI(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_CSI_SHIFT)) & CSU_SA_NSA_CSI_MASK)

#define CSU_SA_L_CSI_MASK                        (0x80U)
#define CSU_SA_L_CSI_SHIFT                       (7U)
/*! L_CSI
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_CSI(x)                          (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_CSI_SHIFT)) & CSU_SA_L_CSI_MASK)

#define CSU_SA_NSA_PXP_MASK                      (0x100U)
#define CSU_SA_NSA_PXP_SHIFT                     (8U)
/*! NSA_PXP - Non-Secure Access Policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_PXP(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_PXP_SHIFT)) & CSU_SA_NSA_PXP_MASK)

#define CSU_SA_L_PXP_MASK                        (0x200U)
#define CSU_SA_L_PXP_SHIFT                       (9U)
/*! L_PXP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_PXP(x)                          (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_PXP_SHIFT)) & CSU_SA_L_PXP_MASK)

#define CSU_SA_NSA_DCP_MASK                      (0x400U)
#define CSU_SA_NSA_DCP_SHIFT                     (10U)
/*! NSA_DCP - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_DCP(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_DCP_SHIFT)) & CSU_SA_NSA_DCP_MASK)

#define CSU_SA_L_DCP_MASK                        (0x800U)
#define CSU_SA_L_DCP_SHIFT                       (11U)
/*! L_DCP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_DCP(x)                          (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_DCP_SHIFT)) & CSU_SA_L_DCP_MASK)

#define CSU_SA_NSA_ENET_MASK                     (0x4000U)
#define CSU_SA_NSA_ENET_SHIFT                    (14U)
/*! NSA_ENET - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_ENET(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_ENET_SHIFT)) & CSU_SA_NSA_ENET_MASK)

#define CSU_SA_L_ENET_MASK                       (0x8000U)
#define CSU_SA_L_ENET_SHIFT                      (15U)
/*! L_ENET
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_ENET(x)                         (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_ENET_SHIFT)) & CSU_SA_L_ENET_MASK)

#define CSU_SA_NSA_USDHC1_MASK                   (0x10000U)
#define CSU_SA_NSA_USDHC1_SHIFT                  (16U)
/*! NSA_USDHC1 - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_USDHC1(x)                     (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_USDHC1_SHIFT)) & CSU_SA_NSA_USDHC1_MASK)

#define CSU_SA_L_USDHC1_MASK                     (0x20000U)
#define CSU_SA_L_USDHC1_SHIFT                    (17U)
/*! L_USDHC1
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_USDHC1(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_USDHC1_SHIFT)) & CSU_SA_L_USDHC1_MASK)

#define CSU_SA_NSA_USDHC2_MASK                   (0x40000U)
#define CSU_SA_NSA_USDHC2_SHIFT                  (18U)
/*! NSA_USDHC2 - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_USDHC2(x)                     (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_USDHC2_SHIFT)) & CSU_SA_NSA_USDHC2_MASK)

#define CSU_SA_L_USDHC2_MASK                     (0x80000U)
#define CSU_SA_L_USDHC2_SHIFT                    (19U)
/*! L_USDHC2
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_USDHC2(x)                       (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_USDHC2_SHIFT)) & CSU_SA_L_USDHC2_MASK)

#define CSU_SA_NSA_TPSMP_MASK                    (0x100000U)
#define CSU_SA_NSA_TPSMP_SHIFT                   (20U)
/*! NSA_TPSMP - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_TPSMP(x)                      (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_TPSMP_SHIFT)) & CSU_SA_NSA_TPSMP_MASK)

#define CSU_SA_L_TPSMP_MASK                      (0x200000U)
#define CSU_SA_L_TPSMP_SHIFT                     (21U)
/*! L_TPSMP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_TPSMP(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_TPSMP_SHIFT)) & CSU_SA_L_TPSMP_MASK)

#define CSU_SA_NSA_USB_MASK                      (0x400000U)
#define CSU_SA_NSA_USB_SHIFT                     (22U)
/*! NSA_USB - Non-secure access policy indicator bit
 *  0b0..Secure access for the corresponding type-1 master
 *  0b1..Non-secure access for the corresponding type-1 master
 */
#define CSU_SA_NSA_USB(x)                        (((uint32_t)(((uint32_t)(x)) << CSU_SA_NSA_USB_SHIFT)) & CSU_SA_NSA_USB_MASK)

#define CSU_SA_L_USB_MASK                        (0x800000U)
#define CSU_SA_L_USB_SHIFT                       (23U)
/*! L_USB
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_SA_L_USB(x)                          (((uint32_t)(((uint32_t)(x)) << CSU_SA_L_USB_SHIFT)) & CSU_SA_L_USB_MASK)
/*! @} */

/*! @name HPCONTROL0 - HPCONTROL0 register */
/*! @{ */

#define CSU_HPCONTROL0_HPC_DMA_MASK              (0x4U)
#define CSU_HPCONTROL0_HPC_DMA_SHIFT             (2U)
/*! HPC_DMA
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_DMA(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_DMA_SHIFT)) & CSU_HPCONTROL0_HPC_DMA_MASK)

#define CSU_HPCONTROL0_L_DMA_MASK                (0x8U)
#define CSU_HPCONTROL0_L_DMA_SHIFT               (3U)
/*! L_DMA
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_DMA(x)                  (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_DMA_SHIFT)) & CSU_HPCONTROL0_L_DMA_MASK)

#define CSU_HPCONTROL0_HPC_LCDIF_MASK            (0x10U)
#define CSU_HPCONTROL0_HPC_LCDIF_SHIFT           (4U)
/*! HPC_LCDIF
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_LCDIF(x)              (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_LCDIF_SHIFT)) & CSU_HPCONTROL0_HPC_LCDIF_MASK)

#define CSU_HPCONTROL0_L_LCDIF_MASK              (0x20U)
#define CSU_HPCONTROL0_L_LCDIF_SHIFT             (5U)
/*! L_LCDIF
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_LCDIF(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_LCDIF_SHIFT)) & CSU_HPCONTROL0_L_LCDIF_MASK)

#define CSU_HPCONTROL0_HPC_CSI_MASK              (0x40U)
#define CSU_HPCONTROL0_HPC_CSI_SHIFT             (6U)
/*! HPC_CSI
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_CSI(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_CSI_SHIFT)) & CSU_HPCONTROL0_HPC_CSI_MASK)

#define CSU_HPCONTROL0_L_CSI_MASK                (0x80U)
#define CSU_HPCONTROL0_L_CSI_SHIFT               (7U)
/*! L_CSI
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_CSI(x)                  (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_CSI_SHIFT)) & CSU_HPCONTROL0_L_CSI_MASK)

#define CSU_HPCONTROL0_HPC_PXP_MASK              (0x100U)
#define CSU_HPCONTROL0_HPC_PXP_SHIFT             (8U)
/*! HPC_PXP
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_PXP(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_PXP_SHIFT)) & CSU_HPCONTROL0_HPC_PXP_MASK)

#define CSU_HPCONTROL0_L_PXP_MASK                (0x200U)
#define CSU_HPCONTROL0_L_PXP_SHIFT               (9U)
/*! L_PXP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_PXP(x)                  (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_PXP_SHIFT)) & CSU_HPCONTROL0_L_PXP_MASK)

#define CSU_HPCONTROL0_HPC_DCP_MASK              (0x400U)
#define CSU_HPCONTROL0_HPC_DCP_SHIFT             (10U)
/*! HPC_DCP
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_DCP(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_DCP_SHIFT)) & CSU_HPCONTROL0_HPC_DCP_MASK)

#define CSU_HPCONTROL0_L_DCP_MASK                (0x800U)
#define CSU_HPCONTROL0_L_DCP_SHIFT               (11U)
/*! L_DCP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_DCP(x)                  (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_DCP_SHIFT)) & CSU_HPCONTROL0_L_DCP_MASK)

#define CSU_HPCONTROL0_HPC_ENET_MASK             (0x4000U)
#define CSU_HPCONTROL0_HPC_ENET_SHIFT            (14U)
/*! HPC_ENET
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_ENET(x)               (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_ENET_SHIFT)) & CSU_HPCONTROL0_HPC_ENET_MASK)

#define CSU_HPCONTROL0_L_ENET_MASK               (0x8000U)
#define CSU_HPCONTROL0_L_ENET_SHIFT              (15U)
/*! L_ENET
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_ENET(x)                 (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_ENET_SHIFT)) & CSU_HPCONTROL0_L_ENET_MASK)

#define CSU_HPCONTROL0_HPC_USDHC1_MASK           (0x10000U)
#define CSU_HPCONTROL0_HPC_USDHC1_SHIFT          (16U)
/*! HPC_USDHC1
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_USDHC1(x)             (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_USDHC1_SHIFT)) & CSU_HPCONTROL0_HPC_USDHC1_MASK)

#define CSU_HPCONTROL0_L_USDHC1_MASK             (0x20000U)
#define CSU_HPCONTROL0_L_USDHC1_SHIFT            (17U)
/*! L_USDHC1
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_USDHC1(x)               (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_USDHC1_SHIFT)) & CSU_HPCONTROL0_L_USDHC1_MASK)

#define CSU_HPCONTROL0_HPC_USDHC2_MASK           (0x40000U)
#define CSU_HPCONTROL0_HPC_USDHC2_SHIFT          (18U)
/*! HPC_USDHC2
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_USDHC2(x)             (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_USDHC2_SHIFT)) & CSU_HPCONTROL0_HPC_USDHC2_MASK)

#define CSU_HPCONTROL0_L_USDHC2_MASK             (0x80000U)
#define CSU_HPCONTROL0_L_USDHC2_SHIFT            (19U)
/*! L_USDHC2
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_USDHC2(x)               (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_USDHC2_SHIFT)) & CSU_HPCONTROL0_L_USDHC2_MASK)

#define CSU_HPCONTROL0_HPC_TPSMP_MASK            (0x100000U)
#define CSU_HPCONTROL0_HPC_TPSMP_SHIFT           (20U)
/*! HPC_TPSMP
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_TPSMP(x)              (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_TPSMP_SHIFT)) & CSU_HPCONTROL0_HPC_TPSMP_MASK)

#define CSU_HPCONTROL0_L_TPSMP_MASK              (0x200000U)
#define CSU_HPCONTROL0_L_TPSMP_SHIFT             (21U)
/*! L_TPSMP
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_TPSMP(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_TPSMP_SHIFT)) & CSU_HPCONTROL0_L_TPSMP_MASK)

#define CSU_HPCONTROL0_HPC_USB_MASK              (0x400000U)
#define CSU_HPCONTROL0_HPC_USB_SHIFT             (22U)
/*! HPC_USB
 *  0b0..User mode for the corresponding master
 *  0b1..Supervisor mode for the corresponding master
 */
#define CSU_HPCONTROL0_HPC_USB(x)                (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_HPC_USB_SHIFT)) & CSU_HPCONTROL0_HPC_USB_MASK)

#define CSU_HPCONTROL0_L_USB_MASK                (0x800000U)
#define CSU_HPCONTROL0_L_USB_SHIFT               (23U)
/*! L_USB
 *  0b0..No lock-the adjacent (next lower) bit can be written by the software.
 *  0b1..Lock-the adjacent (next lower) bit can't be written by the software.
 */
#define CSU_HPCONTROL0_L_USB(x)                  (((uint32_t)(((uint32_t)(x)) << CSU_HPCONTROL0_L_USB_SHIFT)) & CSU_HPCONTROL0_L_USB_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CSU_Register_Masks */


/* ----------------------------------------------------------------------------
   -- DCDC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DCDC_Register_Masks DCDC Register Masks
 * @{
 */

/*! @name REG0 - DCDC Register 0 */
/*! @{ */

#define DCDC_REG0_PWD_ZCD_MASK                   (0x1U)
#define DCDC_REG0_PWD_ZCD_SHIFT                  (0U)
/*! PWD_ZCD - Power Down Zero Cross Detection
 *  0b0..Zero cross detetion function powered up
 *  0b1..Zero cross detetion function powered down
 */
#define DCDC_REG0_PWD_ZCD(x)                     (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_ZCD_SHIFT)) & DCDC_REG0_PWD_ZCD_MASK)

#define DCDC_REG0_DISABLE_AUTO_CLK_SWITCH_MASK   (0x2U)
#define DCDC_REG0_DISABLE_AUTO_CLK_SWITCH_SHIFT  (1U)
/*! DISABLE_AUTO_CLK_SWITCH - Disable Auto Clock Switch
 *  0b0..If DISABLE_AUTO_CLK_SWITCH is set to 0 and 24M xtal is OK, the clock source will switch from internal ring OSC to 24M xtal automatically
 *  0b1..If DISABLE_AUTO_CLK_SWITCH is set to 1, SEL_CLK will determine which clock source the DCDC uses
 */
#define DCDC_REG0_DISABLE_AUTO_CLK_SWITCH(x)     (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_DISABLE_AUTO_CLK_SWITCH_SHIFT)) & DCDC_REG0_DISABLE_AUTO_CLK_SWITCH_MASK)

#define DCDC_REG0_SEL_CLK_MASK                   (0x4U)
#define DCDC_REG0_SEL_CLK_SHIFT                  (2U)
/*! SEL_CLK - Select Clock
 *  0b0..DCDC uses internal ring oscillator
 *  0b1..DCDC uses 24M xtal
 */
#define DCDC_REG0_SEL_CLK(x)                     (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_SEL_CLK_SHIFT)) & DCDC_REG0_SEL_CLK_MASK)

#define DCDC_REG0_PWD_OSC_INT_MASK               (0x8U)
#define DCDC_REG0_PWD_OSC_INT_SHIFT              (3U)
/*! PWD_OSC_INT - Power down internal osc
 *  0b0..Internal oscillator powered up
 *  0b1..Internal oscillator powered down
 */
#define DCDC_REG0_PWD_OSC_INT(x)                 (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_OSC_INT_SHIFT)) & DCDC_REG0_PWD_OSC_INT_MASK)

#define DCDC_REG0_PWD_CUR_SNS_CMP_MASK           (0x10U)
#define DCDC_REG0_PWD_CUR_SNS_CMP_SHIFT          (4U)
/*! PWD_CUR_SNS_CMP - Power down signal of the current detector.
 *  0b0..Current Detector powered up
 *  0b1..Current Detector powered down
 */
#define DCDC_REG0_PWD_CUR_SNS_CMP(x)             (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_CUR_SNS_CMP_SHIFT)) & DCDC_REG0_PWD_CUR_SNS_CMP_MASK)

#define DCDC_REG0_CUR_SNS_THRSH_MASK             (0xE0U)
#define DCDC_REG0_CUR_SNS_THRSH_SHIFT            (5U)
/*! CUR_SNS_THRSH - Current Sense (detector) Threshold
 *  0b000..150 mA
 *  0b001..250 mA
 *  0b010..350 mA
 *  0b011..450 mA
 *  0b100..550 mA
 *  0b101..650 mA
 */
#define DCDC_REG0_CUR_SNS_THRSH(x)               (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_CUR_SNS_THRSH_SHIFT)) & DCDC_REG0_CUR_SNS_THRSH_MASK)

#define DCDC_REG0_PWD_OVERCUR_DET_MASK           (0x100U)
#define DCDC_REG0_PWD_OVERCUR_DET_SHIFT          (8U)
/*! PWD_OVERCUR_DET - Power down overcurrent detection comparator
 *  0b0..Overcurrent detection comparator is enabled
 *  0b1..Overcurrent detection comparator is disabled
 */
#define DCDC_REG0_PWD_OVERCUR_DET(x)             (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_OVERCUR_DET_SHIFT)) & DCDC_REG0_PWD_OVERCUR_DET_MASK)

#define DCDC_REG0_OVERCUR_TRIG_ADJ_MASK          (0x600U)
#define DCDC_REG0_OVERCUR_TRIG_ADJ_SHIFT         (9U)
/*! OVERCUR_TRIG_ADJ - Overcurrent Trigger Adjust
 *  0b00..In Run Mode, 1 A. In Power Save Mode, 0.25 A
 *  0b01..In Run Mode, 2 A. In Power Save Mode, 0.25 A
 *  0b10..In Run Mode, 1 A. In Power Save Mode, 0.2 A
 *  0b11..In Run Mode, 2 A. In Power Save Mode, 0.2 A
 */
#define DCDC_REG0_OVERCUR_TRIG_ADJ(x)            (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_OVERCUR_TRIG_ADJ_SHIFT)) & DCDC_REG0_OVERCUR_TRIG_ADJ_MASK)

#define DCDC_REG0_PWD_CMP_BATT_DET_MASK          (0x800U)
#define DCDC_REG0_PWD_CMP_BATT_DET_SHIFT         (11U)
/*! PWD_CMP_BATT_DET - Power Down Battery Detection Comparator
 *  0b0..Low voltage detection comparator is enabled
 *  0b1..Low voltage detection comparator is disabled
 */
#define DCDC_REG0_PWD_CMP_BATT_DET(x)            (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_CMP_BATT_DET_SHIFT)) & DCDC_REG0_PWD_CMP_BATT_DET_MASK)

#define DCDC_REG0_EN_LP_OVERLOAD_SNS_MASK        (0x10000U)
#define DCDC_REG0_EN_LP_OVERLOAD_SNS_SHIFT       (16U)
/*! EN_LP_OVERLOAD_SNS - Low Power Overload Sense Enable
 *  0b0..Overload Detection in power save mode disabled
 *  0b1..Overload Detection in power save mode enabled
 */
#define DCDC_REG0_EN_LP_OVERLOAD_SNS(x)          (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_EN_LP_OVERLOAD_SNS_SHIFT)) & DCDC_REG0_EN_LP_OVERLOAD_SNS_MASK)

#define DCDC_REG0_PWD_HIGH_VOLT_DET_MASK         (0x20000U)
#define DCDC_REG0_PWD_HIGH_VOLT_DET_SHIFT        (17U)
/*! PWD_HIGH_VOLT_DET - Power Down High Voltage Detection
 *  0b0..Overvoltage detection comparator is enabled
 *  0b1..Overvoltage detection comparator is disabled
 */
#define DCDC_REG0_PWD_HIGH_VOLT_DET(x)           (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_HIGH_VOLT_DET_SHIFT)) & DCDC_REG0_PWD_HIGH_VOLT_DET_MASK)

#define DCDC_REG0_LP_OVERLOAD_THRSH_MASK         (0xC0000U)
#define DCDC_REG0_LP_OVERLOAD_THRSH_SHIFT        (18U)
/*! LP_OVERLOAD_THRSH - Low Power Overload Threshold
 *  0b00..32
 *  0b01..64
 *  0b10..16
 *  0b11..8
 */
#define DCDC_REG0_LP_OVERLOAD_THRSH(x)           (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_LP_OVERLOAD_THRSH_SHIFT)) & DCDC_REG0_LP_OVERLOAD_THRSH_MASK)

#define DCDC_REG0_LP_OVERLOAD_FREQ_SEL_MASK      (0x100000U)
#define DCDC_REG0_LP_OVERLOAD_FREQ_SEL_SHIFT     (20U)
/*! LP_OVERLOAD_FREQ_SEL - Low Power Overload Frequency Select
 *  0b0..eight 32k cycle
 *  0b1..sixteen 32k cycle
 */
#define DCDC_REG0_LP_OVERLOAD_FREQ_SEL(x)        (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_LP_OVERLOAD_FREQ_SEL_SHIFT)) & DCDC_REG0_LP_OVERLOAD_FREQ_SEL_MASK)

#define DCDC_REG0_LP_HIGH_HYS_MASK               (0x200000U)
#define DCDC_REG0_LP_HIGH_HYS_SHIFT              (21U)
/*! LP_HIGH_HYS - Low Power High Hysteric Value
 *  0b0..Adjust hysteretic value in low power to 12.5mV
 *  0b1..Adjust hysteretic value in low power to 25mV
 */
#define DCDC_REG0_LP_HIGH_HYS(x)                 (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_LP_HIGH_HYS_SHIFT)) & DCDC_REG0_LP_HIGH_HYS_MASK)

#define DCDC_REG0_PWD_CMP_OFFSET_MASK            (0x4000000U)
#define DCDC_REG0_PWD_CMP_OFFSET_SHIFT           (26U)
/*! PWD_CMP_OFFSET - Power down output range comparator
 *  0b0..Output range comparator powered up
 *  0b1..Output range comparator powered down
 */
#define DCDC_REG0_PWD_CMP_OFFSET(x)              (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_PWD_CMP_OFFSET_SHIFT)) & DCDC_REG0_PWD_CMP_OFFSET_MASK)

#define DCDC_REG0_XTALOK_DISABLE_MASK            (0x8000000U)
#define DCDC_REG0_XTALOK_DISABLE_SHIFT           (27U)
/*! XTALOK_DISABLE - Disable xtalok detection circuit
 *  0b0..Enable xtalok detection circuit
 *  0b1..Disable xtalok detection circuit and always outputs OK signal "1"
 */
#define DCDC_REG0_XTALOK_DISABLE(x)              (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_XTALOK_DISABLE_SHIFT)) & DCDC_REG0_XTALOK_DISABLE_MASK)

#define DCDC_REG0_CURRENT_ALERT_RESET_MASK       (0x10000000U)
#define DCDC_REG0_CURRENT_ALERT_RESET_SHIFT      (28U)
/*! CURRENT_ALERT_RESET - Reset Current Alert Signal
 *  0b0..Current Alert Signal not reset
 *  0b1..Current Alert Signal reset
 */
#define DCDC_REG0_CURRENT_ALERT_RESET(x)         (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_CURRENT_ALERT_RESET_SHIFT)) & DCDC_REG0_CURRENT_ALERT_RESET_MASK)

#define DCDC_REG0_XTAL_24M_OK_MASK               (0x20000000U)
#define DCDC_REG0_XTAL_24M_OK_SHIFT              (29U)
/*! XTAL_24M_OK - 24M XTAL OK
 *  0b0..DCDC uses internal ring OSC
 *  0b1..DCDC uses xtal 24M
 */
#define DCDC_REG0_XTAL_24M_OK(x)                 (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_XTAL_24M_OK_SHIFT)) & DCDC_REG0_XTAL_24M_OK_MASK)

#define DCDC_REG0_STS_DC_OK_MASK                 (0x80000000U)
#define DCDC_REG0_STS_DC_OK_SHIFT                (31U)
/*! STS_DC_OK - DCDC Output OK
 *  0b0..DCDC is settling
 *  0b1..DCDC already settled
 */
#define DCDC_REG0_STS_DC_OK(x)                   (((uint32_t)(((uint32_t)(x)) << DCDC_REG0_STS_DC_OK_SHIFT)) & DCDC_REG0_STS_DC_OK_MASK)
/*! @} */

/*! @name REG1 - DCDC Register 1 */
/*! @{ */

#define DCDC_REG1_REG_FBK_SEL_MASK               (0x180U)
#define DCDC_REG1_REG_FBK_SEL_SHIFT              (7U)
/*! REG_FBK_SEL
 *  0b00..The regulator outputs 1.0V with 1.2V reference voltage
 *  0b01..The regulator outputs 1.1V with 1.2V reference voltage
 *  0b10..The regulator outputs 1.0V with 1.3V reference voltage
 *  0b11..The regulator outputs 1.1V with 1.3V reference voltage
 */
#define DCDC_REG1_REG_FBK_SEL(x)                 (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_REG_FBK_SEL_SHIFT)) & DCDC_REG1_REG_FBK_SEL_MASK)

#define DCDC_REG1_REG_RLOAD_SW_MASK              (0x200U)
#define DCDC_REG1_REG_RLOAD_SW_SHIFT             (9U)
/*! REG_RLOAD_SW
 *  0b0..Load resistor disconnected
 *  0b1..Load resistor connected
 */
#define DCDC_REG1_REG_RLOAD_SW(x)                (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_REG_RLOAD_SW_SHIFT)) & DCDC_REG1_REG_RLOAD_SW_MASK)

#define DCDC_REG1_LP_CMP_ISRC_SEL_MASK           (0x3000U)
#define DCDC_REG1_LP_CMP_ISRC_SEL_SHIFT          (12U)
/*! LP_CMP_ISRC_SEL - Low Power Comparator Current Bias
 *  0b00..50 nA
 *  0b01..100 nA
 *  0b10..200 nA
 *  0b11..400 nA
 */
#define DCDC_REG1_LP_CMP_ISRC_SEL(x)             (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_LP_CMP_ISRC_SEL_SHIFT)) & DCDC_REG1_LP_CMP_ISRC_SEL_MASK)

#define DCDC_REG1_LOOPCTRL_HST_THRESH_MASK       (0x200000U)
#define DCDC_REG1_LOOPCTRL_HST_THRESH_SHIFT      (21U)
/*! LOOPCTRL_HST_THRESH - Increase Threshold Detection
 *  0b0..Lower hysteresis threshold (about 2.5mV in typical, but this value can vary with PVT corners
 *  0b1..Higher hysteresis threshold (about 5mV in typical)
 */
#define DCDC_REG1_LOOPCTRL_HST_THRESH(x)         (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_LOOPCTRL_HST_THRESH_SHIFT)) & DCDC_REG1_LOOPCTRL_HST_THRESH_MASK)

#define DCDC_REG1_LOOPCTRL_EN_HYST_MASK          (0x800000U)
#define DCDC_REG1_LOOPCTRL_EN_HYST_SHIFT         (23U)
/*! LOOPCTRL_EN_HYST - Enable Hysteresis
 *  0b0..Disable hysteresis in switching converter common mode analog comparators
 *  0b1..Enable hysteresis in switching converter common mode analog comparators
 */
#define DCDC_REG1_LOOPCTRL_EN_HYST(x)            (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_LOOPCTRL_EN_HYST_SHIFT)) & DCDC_REG1_LOOPCTRL_EN_HYST_MASK)

#define DCDC_REG1_VBG_TRIM_MASK                  (0x1F000000U)
#define DCDC_REG1_VBG_TRIM_SHIFT                 (24U)
/*! VBG_TRIM - Trim Bandgap Voltage
 */
#define DCDC_REG1_VBG_TRIM(x)                    (((uint32_t)(((uint32_t)(x)) << DCDC_REG1_VBG_TRIM_SHIFT)) & DCDC_REG1_VBG_TRIM_MASK)
/*! @} */

/*! @name REG2 - DCDC Register 2 */
/*! @{ */

#define DCDC_REG2_LOOPCTRL_DC_FF_MASK            (0x1C0U)
#define DCDC_REG2_LOOPCTRL_DC_FF_SHIFT           (6U)
#define DCDC_REG2_LOOPCTRL_DC_FF(x)              (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_LOOPCTRL_DC_FF_SHIFT)) & DCDC_REG2_LOOPCTRL_DC_FF_MASK)

#define DCDC_REG2_LOOPCTRL_EN_RCSCALE_MASK       (0xE00U)
#define DCDC_REG2_LOOPCTRL_EN_RCSCALE_SHIFT      (9U)
/*! LOOPCTRL_EN_RCSCALE - Enable RC Scale
 */
#define DCDC_REG2_LOOPCTRL_EN_RCSCALE(x)         (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_LOOPCTRL_EN_RCSCALE_SHIFT)) & DCDC_REG2_LOOPCTRL_EN_RCSCALE_MASK)

#define DCDC_REG2_LOOPCTRL_RCSCALE_THRSH_MASK    (0x1000U)
#define DCDC_REG2_LOOPCTRL_RCSCALE_THRSH_SHIFT   (12U)
/*! LOOPCTRL_RCSCALE_THRSH
 *  0b0..Do not increase the threshold detection for RC scale circuit.
 *  0b1..Increase the threshold detection for RC scale circuit.
 */
#define DCDC_REG2_LOOPCTRL_RCSCALE_THRSH(x)      (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_LOOPCTRL_RCSCALE_THRSH_SHIFT)) & DCDC_REG2_LOOPCTRL_RCSCALE_THRSH_MASK)

#define DCDC_REG2_LOOPCTRL_HYST_SIGN_MASK        (0x2000U)
#define DCDC_REG2_LOOPCTRL_HYST_SIGN_SHIFT       (13U)
/*! LOOPCTRL_HYST_SIGN
 *  0b0..Do not invert sign of the hysteresis
 *  0b1..Invert sign of the hysteresis
 */
#define DCDC_REG2_LOOPCTRL_HYST_SIGN(x)          (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_LOOPCTRL_HYST_SIGN_SHIFT)) & DCDC_REG2_LOOPCTRL_HYST_SIGN_MASK)

#define DCDC_REG2_DISABLE_PULSE_SKIP_MASK        (0x8000000U)
#define DCDC_REG2_DISABLE_PULSE_SKIP_SHIFT       (27U)
/*! DISABLE_PULSE_SKIP - Disable Pulse Skip
 *  0b0..DCDC will be idle to save current dissipation when the duty cycle get to the low limit which is set by NEGLIMIT_IN.
 *  0b1..DCDC will keep working with the low limited duty cycle NEGLIMIT_IN.
 */
#define DCDC_REG2_DISABLE_PULSE_SKIP(x)          (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_DISABLE_PULSE_SKIP_SHIFT)) & DCDC_REG2_DISABLE_PULSE_SKIP_MASK)

#define DCDC_REG2_DCM_SET_CTRL_MASK              (0x10000000U)
#define DCDC_REG2_DCM_SET_CTRL_SHIFT             (28U)
/*! DCM_SET_CTRL - DCM Set Control
 */
#define DCDC_REG2_DCM_SET_CTRL(x)                (((uint32_t)(((uint32_t)(x)) << DCDC_REG2_DCM_SET_CTRL_SHIFT)) & DCDC_REG2_DCM_SET_CTRL_MASK)
/*! @} */

/*! @name REG3 - DCDC Register 3 */
/*! @{ */

#define DCDC_REG3_TRG_MASK                       (0x1FU)
#define DCDC_REG3_TRG_SHIFT                      (0U)
/*! TRG - Target value of VDD_SOC
 */
#define DCDC_REG3_TRG(x)                         (((uint32_t)(((uint32_t)(x)) << DCDC_REG3_TRG_SHIFT)) & DCDC_REG3_TRG_MASK)

#define DCDC_REG3_TARGET_LP_MASK                 (0x700U)
#define DCDC_REG3_TARGET_LP_SHIFT                (8U)
/*! TARGET_LP - Low Power Target Value
 *  0b000..0.9 V
 *  0b001..0.925 V
 *  0b010..0.95 V
 *  0b011..0.975 V
 *  0b100..1.0 V
 */
#define DCDC_REG3_TARGET_LP(x)                   (((uint32_t)(((uint32_t)(x)) << DCDC_REG3_TARGET_LP_SHIFT)) & DCDC_REG3_TARGET_LP_MASK)

#define DCDC_REG3_MINPWR_DC_HALFCLK_MASK         (0x1000000U)
#define DCDC_REG3_MINPWR_DC_HALFCLK_SHIFT        (24U)
/*! MINPWR_DC_HALFCLK
 *  0b0..DCDC clock remains at full frequency for continuous mode
 *  0b1..DCDC clock set to half frequency for continuous mode
 */
#define DCDC_REG3_MINPWR_DC_HALFCLK(x)           (((uint32_t)(((uint32_t)(x)) << DCDC_REG3_MINPWR_DC_HALFCLK_SHIFT)) & DCDC_REG3_MINPWR_DC_HALFCLK_MASK)

#define DCDC_REG3_DISABLE_STEP_MASK              (0x40000000U)
#define DCDC_REG3_DISABLE_STEP_SHIFT             (30U)
/*! DISABLE_STEP - Disable Step
 *  0b0..Enable stepping for the output of VDD_SOC of DCDC
 *  0b1..Disable stepping for the output of VDD_SOC of DCDC
 */
#define DCDC_REG3_DISABLE_STEP(x)                (((uint32_t)(((uint32_t)(x)) << DCDC_REG3_DISABLE_STEP_SHIFT)) & DCDC_REG3_DISABLE_STEP_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DCDC_Register_Masks */

/* ----------------------------------------------------------------------------
   -- DCP Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DCP_Register_Masks DCP Register Masks
 * @{
 */

/*! @name CTRL - DCP control register 0 */
/*! @{ */

#define DCP_CTRL_CHANNEL_INTERRUPT_ENABLE_MASK   (0xFFU)
#define DCP_CTRL_CHANNEL_INTERRUPT_ENABLE_SHIFT  (0U)
/*! CHANNEL_INTERRUPT_ENABLE
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CTRL_CHANNEL_INTERRUPT_ENABLE(x)     (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CHANNEL_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_CHANNEL_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_RSVD_CSC_INTERRUPT_ENABLE_MASK  (0x100U)
#define DCP_CTRL_RSVD_CSC_INTERRUPT_ENABLE_SHIFT (8U)
#define DCP_CTRL_RSVD_CSC_INTERRUPT_ENABLE(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_RSVD_CSC_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_RSVD_CSC_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_ENABLE_CONTEXT_SWITCHING_MASK   (0x200000U)
#define DCP_CTRL_ENABLE_CONTEXT_SWITCHING_SHIFT  (21U)
#define DCP_CTRL_ENABLE_CONTEXT_SWITCHING(x)     (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_ENABLE_CONTEXT_SWITCHING_SHIFT)) & DCP_CTRL_ENABLE_CONTEXT_SWITCHING_MASK)

#define DCP_CTRL_ENABLE_CONTEXT_CACHING_MASK     (0x400000U)
#define DCP_CTRL_ENABLE_CONTEXT_CACHING_SHIFT    (22U)
#define DCP_CTRL_ENABLE_CONTEXT_CACHING(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_ENABLE_CONTEXT_CACHING_SHIFT)) & DCP_CTRL_ENABLE_CONTEXT_CACHING_MASK)

#define DCP_CTRL_GATHER_RESIDUAL_WRITES_MASK     (0x800000U)
#define DCP_CTRL_GATHER_RESIDUAL_WRITES_SHIFT    (23U)
#define DCP_CTRL_GATHER_RESIDUAL_WRITES(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_GATHER_RESIDUAL_WRITES_SHIFT)) & DCP_CTRL_GATHER_RESIDUAL_WRITES_MASK)

#define DCP_CTRL_PRESENT_SHA_MASK                (0x10000000U)
#define DCP_CTRL_PRESENT_SHA_SHIFT               (28U)
/*! PRESENT_SHA
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_PRESENT_SHA(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_PRESENT_SHA_SHIFT)) & DCP_CTRL_PRESENT_SHA_MASK)

#define DCP_CTRL_PRESENT_CRYPTO_MASK             (0x20000000U)
#define DCP_CTRL_PRESENT_CRYPTO_SHIFT            (29U)
/*! PRESENT_CRYPTO
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_PRESENT_CRYPTO(x)               (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_PRESENT_CRYPTO_SHIFT)) & DCP_CTRL_PRESENT_CRYPTO_MASK)

#define DCP_CTRL_CLKGATE_MASK                    (0x40000000U)
#define DCP_CTRL_CLKGATE_SHIFT                   (30U)
#define DCP_CTRL_CLKGATE(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLKGATE_SHIFT)) & DCP_CTRL_CLKGATE_MASK)

#define DCP_CTRL_SFTRST_MASK                     (0x80000000U)
#define DCP_CTRL_SFTRST_SHIFT                    (31U)
#define DCP_CTRL_SFTRST(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SFTRST_SHIFT)) & DCP_CTRL_SFTRST_MASK)
/*! @} */

/*! @name CTRL_SET - DCP control register 0 */
/*! @{ */

#define DCP_CTRL_SET_CHANNEL_INTERRUPT_ENABLE_MASK (0xFFU)
#define DCP_CTRL_SET_CHANNEL_INTERRUPT_ENABLE_SHIFT (0U)
/*! CHANNEL_INTERRUPT_ENABLE
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CTRL_SET_CHANNEL_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_CHANNEL_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_SET_CHANNEL_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_SET_RSVD_CSC_INTERRUPT_ENABLE_MASK (0x100U)
#define DCP_CTRL_SET_RSVD_CSC_INTERRUPT_ENABLE_SHIFT (8U)
#define DCP_CTRL_SET_RSVD_CSC_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_RSVD_CSC_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_SET_RSVD_CSC_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_SET_ENABLE_CONTEXT_SWITCHING_MASK (0x200000U)
#define DCP_CTRL_SET_ENABLE_CONTEXT_SWITCHING_SHIFT (21U)
#define DCP_CTRL_SET_ENABLE_CONTEXT_SWITCHING(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_ENABLE_CONTEXT_SWITCHING_SHIFT)) & DCP_CTRL_SET_ENABLE_CONTEXT_SWITCHING_MASK)

#define DCP_CTRL_SET_ENABLE_CONTEXT_CACHING_MASK (0x400000U)
#define DCP_CTRL_SET_ENABLE_CONTEXT_CACHING_SHIFT (22U)
#define DCP_CTRL_SET_ENABLE_CONTEXT_CACHING(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_ENABLE_CONTEXT_CACHING_SHIFT)) & DCP_CTRL_SET_ENABLE_CONTEXT_CACHING_MASK)

#define DCP_CTRL_SET_GATHER_RESIDUAL_WRITES_MASK (0x800000U)
#define DCP_CTRL_SET_GATHER_RESIDUAL_WRITES_SHIFT (23U)
#define DCP_CTRL_SET_GATHER_RESIDUAL_WRITES(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_GATHER_RESIDUAL_WRITES_SHIFT)) & DCP_CTRL_SET_GATHER_RESIDUAL_WRITES_MASK)

#define DCP_CTRL_SET_PRESENT_SHA_MASK            (0x10000000U)
#define DCP_CTRL_SET_PRESENT_SHA_SHIFT           (28U)
/*! PRESENT_SHA
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_SET_PRESENT_SHA(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_PRESENT_SHA_SHIFT)) & DCP_CTRL_SET_PRESENT_SHA_MASK)

#define DCP_CTRL_SET_PRESENT_CRYPTO_MASK         (0x20000000U)
#define DCP_CTRL_SET_PRESENT_CRYPTO_SHIFT        (29U)
/*! PRESENT_CRYPTO
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_SET_PRESENT_CRYPTO(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_PRESENT_CRYPTO_SHIFT)) & DCP_CTRL_SET_PRESENT_CRYPTO_MASK)

#define DCP_CTRL_SET_CLKGATE_MASK                (0x40000000U)
#define DCP_CTRL_SET_CLKGATE_SHIFT               (30U)
#define DCP_CTRL_SET_CLKGATE(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_CLKGATE_SHIFT)) & DCP_CTRL_SET_CLKGATE_MASK)

#define DCP_CTRL_SET_SFTRST_MASK                 (0x80000000U)
#define DCP_CTRL_SET_SFTRST_SHIFT                (31U)
#define DCP_CTRL_SET_SFTRST(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_SET_SFTRST_SHIFT)) & DCP_CTRL_SET_SFTRST_MASK)
/*! @} */

/*! @name CTRL_CLR - DCP control register 0 */
/*! @{ */

#define DCP_CTRL_CLR_CHANNEL_INTERRUPT_ENABLE_MASK (0xFFU)
#define DCP_CTRL_CLR_CHANNEL_INTERRUPT_ENABLE_SHIFT (0U)
/*! CHANNEL_INTERRUPT_ENABLE
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CTRL_CLR_CHANNEL_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_CHANNEL_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_CLR_CHANNEL_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_CLR_RSVD_CSC_INTERRUPT_ENABLE_MASK (0x100U)
#define DCP_CTRL_CLR_RSVD_CSC_INTERRUPT_ENABLE_SHIFT (8U)
#define DCP_CTRL_CLR_RSVD_CSC_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_RSVD_CSC_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_CLR_RSVD_CSC_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_CLR_ENABLE_CONTEXT_SWITCHING_MASK (0x200000U)
#define DCP_CTRL_CLR_ENABLE_CONTEXT_SWITCHING_SHIFT (21U)
#define DCP_CTRL_CLR_ENABLE_CONTEXT_SWITCHING(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_ENABLE_CONTEXT_SWITCHING_SHIFT)) & DCP_CTRL_CLR_ENABLE_CONTEXT_SWITCHING_MASK)

#define DCP_CTRL_CLR_ENABLE_CONTEXT_CACHING_MASK (0x400000U)
#define DCP_CTRL_CLR_ENABLE_CONTEXT_CACHING_SHIFT (22U)
#define DCP_CTRL_CLR_ENABLE_CONTEXT_CACHING(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_ENABLE_CONTEXT_CACHING_SHIFT)) & DCP_CTRL_CLR_ENABLE_CONTEXT_CACHING_MASK)

#define DCP_CTRL_CLR_GATHER_RESIDUAL_WRITES_MASK (0x800000U)
#define DCP_CTRL_CLR_GATHER_RESIDUAL_WRITES_SHIFT (23U)
#define DCP_CTRL_CLR_GATHER_RESIDUAL_WRITES(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_GATHER_RESIDUAL_WRITES_SHIFT)) & DCP_CTRL_CLR_GATHER_RESIDUAL_WRITES_MASK)

#define DCP_CTRL_CLR_PRESENT_SHA_MASK            (0x10000000U)
#define DCP_CTRL_CLR_PRESENT_SHA_SHIFT           (28U)
/*! PRESENT_SHA
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_CLR_PRESENT_SHA(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_PRESENT_SHA_SHIFT)) & DCP_CTRL_CLR_PRESENT_SHA_MASK)

#define DCP_CTRL_CLR_PRESENT_CRYPTO_MASK         (0x20000000U)
#define DCP_CTRL_CLR_PRESENT_CRYPTO_SHIFT        (29U)
/*! PRESENT_CRYPTO
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_CLR_PRESENT_CRYPTO(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_PRESENT_CRYPTO_SHIFT)) & DCP_CTRL_CLR_PRESENT_CRYPTO_MASK)

#define DCP_CTRL_CLR_CLKGATE_MASK                (0x40000000U)
#define DCP_CTRL_CLR_CLKGATE_SHIFT               (30U)
#define DCP_CTRL_CLR_CLKGATE(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_CLKGATE_SHIFT)) & DCP_CTRL_CLR_CLKGATE_MASK)

#define DCP_CTRL_CLR_SFTRST_MASK                 (0x80000000U)
#define DCP_CTRL_CLR_SFTRST_SHIFT                (31U)
#define DCP_CTRL_CLR_SFTRST(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_CLR_SFTRST_SHIFT)) & DCP_CTRL_CLR_SFTRST_MASK)
/*! @} */

/*! @name CTRL_TOG - DCP control register 0 */
/*! @{ */

#define DCP_CTRL_TOG_CHANNEL_INTERRUPT_ENABLE_MASK (0xFFU)
#define DCP_CTRL_TOG_CHANNEL_INTERRUPT_ENABLE_SHIFT (0U)
/*! CHANNEL_INTERRUPT_ENABLE
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CTRL_TOG_CHANNEL_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_CHANNEL_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_TOG_CHANNEL_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_TOG_RSVD_CSC_INTERRUPT_ENABLE_MASK (0x100U)
#define DCP_CTRL_TOG_RSVD_CSC_INTERRUPT_ENABLE_SHIFT (8U)
#define DCP_CTRL_TOG_RSVD_CSC_INTERRUPT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_RSVD_CSC_INTERRUPT_ENABLE_SHIFT)) & DCP_CTRL_TOG_RSVD_CSC_INTERRUPT_ENABLE_MASK)

#define DCP_CTRL_TOG_ENABLE_CONTEXT_SWITCHING_MASK (0x200000U)
#define DCP_CTRL_TOG_ENABLE_CONTEXT_SWITCHING_SHIFT (21U)
#define DCP_CTRL_TOG_ENABLE_CONTEXT_SWITCHING(x) (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_ENABLE_CONTEXT_SWITCHING_SHIFT)) & DCP_CTRL_TOG_ENABLE_CONTEXT_SWITCHING_MASK)

#define DCP_CTRL_TOG_ENABLE_CONTEXT_CACHING_MASK (0x400000U)
#define DCP_CTRL_TOG_ENABLE_CONTEXT_CACHING_SHIFT (22U)
#define DCP_CTRL_TOG_ENABLE_CONTEXT_CACHING(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_ENABLE_CONTEXT_CACHING_SHIFT)) & DCP_CTRL_TOG_ENABLE_CONTEXT_CACHING_MASK)

#define DCP_CTRL_TOG_GATHER_RESIDUAL_WRITES_MASK (0x800000U)
#define DCP_CTRL_TOG_GATHER_RESIDUAL_WRITES_SHIFT (23U)
#define DCP_CTRL_TOG_GATHER_RESIDUAL_WRITES(x)   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_GATHER_RESIDUAL_WRITES_SHIFT)) & DCP_CTRL_TOG_GATHER_RESIDUAL_WRITES_MASK)

#define DCP_CTRL_TOG_PRESENT_SHA_MASK            (0x10000000U)
#define DCP_CTRL_TOG_PRESENT_SHA_SHIFT           (28U)
/*! PRESENT_SHA
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_TOG_PRESENT_SHA(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_PRESENT_SHA_SHIFT)) & DCP_CTRL_TOG_PRESENT_SHA_MASK)

#define DCP_CTRL_TOG_PRESENT_CRYPTO_MASK         (0x20000000U)
#define DCP_CTRL_TOG_PRESENT_CRYPTO_SHIFT        (29U)
/*! PRESENT_CRYPTO
 *  0b1..Present
 *  0b0..Absent
 */
#define DCP_CTRL_TOG_PRESENT_CRYPTO(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_PRESENT_CRYPTO_SHIFT)) & DCP_CTRL_TOG_PRESENT_CRYPTO_MASK)

#define DCP_CTRL_TOG_CLKGATE_MASK                (0x40000000U)
#define DCP_CTRL_TOG_CLKGATE_SHIFT               (30U)
#define DCP_CTRL_TOG_CLKGATE(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_CLKGATE_SHIFT)) & DCP_CTRL_TOG_CLKGATE_MASK)

#define DCP_CTRL_TOG_SFTRST_MASK                 (0x80000000U)
#define DCP_CTRL_TOG_SFTRST_SHIFT                (31U)
#define DCP_CTRL_TOG_SFTRST(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CTRL_TOG_SFTRST_SHIFT)) & DCP_CTRL_TOG_SFTRST_MASK)
/*! @} */

/*! @name STAT - DCP status register */
/*! @{ */

#define DCP_STAT_IRQ_MASK                        (0xFU)
#define DCP_STAT_IRQ_SHIFT                       (0U)
#define DCP_STAT_IRQ(x)                          (((uint32_t)(((uint32_t)(x)) << DCP_STAT_IRQ_SHIFT)) & DCP_STAT_IRQ_MASK)

#define DCP_STAT_RSVD_IRQ_MASK                   (0x100U)
#define DCP_STAT_RSVD_IRQ_SHIFT                  (8U)
#define DCP_STAT_RSVD_IRQ(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_STAT_RSVD_IRQ_SHIFT)) & DCP_STAT_RSVD_IRQ_MASK)

#define DCP_STAT_READY_CHANNELS_MASK             (0xFF0000U)
#define DCP_STAT_READY_CHANNELS_SHIFT            (16U)
/*! READY_CHANNELS
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_STAT_READY_CHANNELS(x)               (((uint32_t)(((uint32_t)(x)) << DCP_STAT_READY_CHANNELS_SHIFT)) & DCP_STAT_READY_CHANNELS_MASK)

#define DCP_STAT_CUR_CHANNEL_MASK                (0xF000000U)
#define DCP_STAT_CUR_CHANNEL_SHIFT               (24U)
/*! CUR_CHANNEL
 *  0b0000..None
 *  0b0001..CH0
 *  0b0010..CH1
 *  0b0011..CH2
 *  0b0100..CH3
 */
#define DCP_STAT_CUR_CHANNEL(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CUR_CHANNEL_SHIFT)) & DCP_STAT_CUR_CHANNEL_MASK)

#define DCP_STAT_OTP_KEY_READY_MASK              (0x10000000U)
#define DCP_STAT_OTP_KEY_READY_SHIFT             (28U)
#define DCP_STAT_OTP_KEY_READY(x)                (((uint32_t)(((uint32_t)(x)) << DCP_STAT_OTP_KEY_READY_SHIFT)) & DCP_STAT_OTP_KEY_READY_MASK)
/*! @} */

/*! @name STAT_SET - DCP status register */
/*! @{ */

#define DCP_STAT_SET_IRQ_MASK                    (0xFU)
#define DCP_STAT_SET_IRQ_SHIFT                   (0U)
#define DCP_STAT_SET_IRQ(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_STAT_SET_IRQ_SHIFT)) & DCP_STAT_SET_IRQ_MASK)

#define DCP_STAT_SET_RSVD_IRQ_MASK               (0x100U)
#define DCP_STAT_SET_RSVD_IRQ_SHIFT              (8U)
#define DCP_STAT_SET_RSVD_IRQ(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_STAT_SET_RSVD_IRQ_SHIFT)) & DCP_STAT_SET_RSVD_IRQ_MASK)

#define DCP_STAT_SET_READY_CHANNELS_MASK         (0xFF0000U)
#define DCP_STAT_SET_READY_CHANNELS_SHIFT        (16U)
/*! READY_CHANNELS
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_STAT_SET_READY_CHANNELS(x)           (((uint32_t)(((uint32_t)(x)) << DCP_STAT_SET_READY_CHANNELS_SHIFT)) & DCP_STAT_SET_READY_CHANNELS_MASK)

#define DCP_STAT_SET_CUR_CHANNEL_MASK            (0xF000000U)
#define DCP_STAT_SET_CUR_CHANNEL_SHIFT           (24U)
/*! CUR_CHANNEL
 *  0b0000..None
 *  0b0001..CH0
 *  0b0010..CH1
 *  0b0011..CH2
 *  0b0100..CH3
 */
#define DCP_STAT_SET_CUR_CHANNEL(x)              (((uint32_t)(((uint32_t)(x)) << DCP_STAT_SET_CUR_CHANNEL_SHIFT)) & DCP_STAT_SET_CUR_CHANNEL_MASK)

#define DCP_STAT_SET_OTP_KEY_READY_MASK          (0x10000000U)
#define DCP_STAT_SET_OTP_KEY_READY_SHIFT         (28U)
#define DCP_STAT_SET_OTP_KEY_READY(x)            (((uint32_t)(((uint32_t)(x)) << DCP_STAT_SET_OTP_KEY_READY_SHIFT)) & DCP_STAT_SET_OTP_KEY_READY_MASK)
/*! @} */

/*! @name STAT_CLR - DCP status register */
/*! @{ */

#define DCP_STAT_CLR_IRQ_MASK                    (0xFU)
#define DCP_STAT_CLR_IRQ_SHIFT                   (0U)
#define DCP_STAT_CLR_IRQ(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CLR_IRQ_SHIFT)) & DCP_STAT_CLR_IRQ_MASK)

#define DCP_STAT_CLR_RSVD_IRQ_MASK               (0x100U)
#define DCP_STAT_CLR_RSVD_IRQ_SHIFT              (8U)
#define DCP_STAT_CLR_RSVD_IRQ(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CLR_RSVD_IRQ_SHIFT)) & DCP_STAT_CLR_RSVD_IRQ_MASK)

#define DCP_STAT_CLR_READY_CHANNELS_MASK         (0xFF0000U)
#define DCP_STAT_CLR_READY_CHANNELS_SHIFT        (16U)
/*! READY_CHANNELS
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_STAT_CLR_READY_CHANNELS(x)           (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CLR_READY_CHANNELS_SHIFT)) & DCP_STAT_CLR_READY_CHANNELS_MASK)

#define DCP_STAT_CLR_CUR_CHANNEL_MASK            (0xF000000U)
#define DCP_STAT_CLR_CUR_CHANNEL_SHIFT           (24U)
/*! CUR_CHANNEL
 *  0b0000..None
 *  0b0001..CH0
 *  0b0010..CH1
 *  0b0011..CH2
 *  0b0100..CH3
 */
#define DCP_STAT_CLR_CUR_CHANNEL(x)              (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CLR_CUR_CHANNEL_SHIFT)) & DCP_STAT_CLR_CUR_CHANNEL_MASK)

#define DCP_STAT_CLR_OTP_KEY_READY_MASK          (0x10000000U)
#define DCP_STAT_CLR_OTP_KEY_READY_SHIFT         (28U)
#define DCP_STAT_CLR_OTP_KEY_READY(x)            (((uint32_t)(((uint32_t)(x)) << DCP_STAT_CLR_OTP_KEY_READY_SHIFT)) & DCP_STAT_CLR_OTP_KEY_READY_MASK)
/*! @} */

/*! @name STAT_TOG - DCP status register */
/*! @{ */

#define DCP_STAT_TOG_IRQ_MASK                    (0xFU)
#define DCP_STAT_TOG_IRQ_SHIFT                   (0U)
#define DCP_STAT_TOG_IRQ(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_STAT_TOG_IRQ_SHIFT)) & DCP_STAT_TOG_IRQ_MASK)

#define DCP_STAT_TOG_RSVD_IRQ_MASK               (0x100U)
#define DCP_STAT_TOG_RSVD_IRQ_SHIFT              (8U)
#define DCP_STAT_TOG_RSVD_IRQ(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_STAT_TOG_RSVD_IRQ_SHIFT)) & DCP_STAT_TOG_RSVD_IRQ_MASK)

#define DCP_STAT_TOG_READY_CHANNELS_MASK         (0xFF0000U)
#define DCP_STAT_TOG_READY_CHANNELS_SHIFT        (16U)
/*! READY_CHANNELS
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_STAT_TOG_READY_CHANNELS(x)           (((uint32_t)(((uint32_t)(x)) << DCP_STAT_TOG_READY_CHANNELS_SHIFT)) & DCP_STAT_TOG_READY_CHANNELS_MASK)

#define DCP_STAT_TOG_CUR_CHANNEL_MASK            (0xF000000U)
#define DCP_STAT_TOG_CUR_CHANNEL_SHIFT           (24U)
/*! CUR_CHANNEL
 *  0b0000..None
 *  0b0001..CH0
 *  0b0010..CH1
 *  0b0011..CH2
 *  0b0100..CH3
 */
#define DCP_STAT_TOG_CUR_CHANNEL(x)              (((uint32_t)(((uint32_t)(x)) << DCP_STAT_TOG_CUR_CHANNEL_SHIFT)) & DCP_STAT_TOG_CUR_CHANNEL_MASK)

#define DCP_STAT_TOG_OTP_KEY_READY_MASK          (0x10000000U)
#define DCP_STAT_TOG_OTP_KEY_READY_SHIFT         (28U)
#define DCP_STAT_TOG_OTP_KEY_READY(x)            (((uint32_t)(((uint32_t)(x)) << DCP_STAT_TOG_OTP_KEY_READY_SHIFT)) & DCP_STAT_TOG_OTP_KEY_READY_MASK)
/*! @} */

/*! @name CHANNELCTRL - DCP channel control register */
/*! @{ */

#define DCP_CHANNELCTRL_ENABLE_CHANNEL_MASK      (0xFFU)
#define DCP_CHANNELCTRL_ENABLE_CHANNEL_SHIFT     (0U)
/*! ENABLE_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_ENABLE_CHANNEL(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_ENABLE_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_ENABLE_CHANNEL_MASK)

#define DCP_CHANNELCTRL_HIGH_PRIORITY_CHANNEL_MASK (0xFF00U)
#define DCP_CHANNELCTRL_HIGH_PRIORITY_CHANNEL_SHIFT (8U)
/*! HIGH_PRIORITY_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_HIGH_PRIORITY_CHANNEL(x) (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_HIGH_PRIORITY_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_HIGH_PRIORITY_CHANNEL_MASK)

#define DCP_CHANNELCTRL_CH0_IRQ_MERGED_MASK      (0x10000U)
#define DCP_CHANNELCTRL_CH0_IRQ_MERGED_SHIFT     (16U)
#define DCP_CHANNELCTRL_CH0_IRQ_MERGED(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_CH0_IRQ_MERGED_SHIFT)) & DCP_CHANNELCTRL_CH0_IRQ_MERGED_MASK)

#define DCP_CHANNELCTRL_RSVD_MASK                (0xFFFE0000U)
#define DCP_CHANNELCTRL_RSVD_SHIFT               (17U)
#define DCP_CHANNELCTRL_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_RSVD_SHIFT)) & DCP_CHANNELCTRL_RSVD_MASK)
/*! @} */

/*! @name CHANNELCTRL_SET - DCP channel control register */
/*! @{ */

#define DCP_CHANNELCTRL_SET_ENABLE_CHANNEL_MASK  (0xFFU)
#define DCP_CHANNELCTRL_SET_ENABLE_CHANNEL_SHIFT (0U)
/*! ENABLE_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_SET_ENABLE_CHANNEL(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_SET_ENABLE_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_SET_ENABLE_CHANNEL_MASK)

#define DCP_CHANNELCTRL_SET_HIGH_PRIORITY_CHANNEL_MASK (0xFF00U)
#define DCP_CHANNELCTRL_SET_HIGH_PRIORITY_CHANNEL_SHIFT (8U)
/*! HIGH_PRIORITY_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_SET_HIGH_PRIORITY_CHANNEL(x) (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_SET_HIGH_PRIORITY_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_SET_HIGH_PRIORITY_CHANNEL_MASK)

#define DCP_CHANNELCTRL_SET_CH0_IRQ_MERGED_MASK  (0x10000U)
#define DCP_CHANNELCTRL_SET_CH0_IRQ_MERGED_SHIFT (16U)
#define DCP_CHANNELCTRL_SET_CH0_IRQ_MERGED(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_SET_CH0_IRQ_MERGED_SHIFT)) & DCP_CHANNELCTRL_SET_CH0_IRQ_MERGED_MASK)

#define DCP_CHANNELCTRL_SET_RSVD_MASK            (0xFFFE0000U)
#define DCP_CHANNELCTRL_SET_RSVD_SHIFT           (17U)
#define DCP_CHANNELCTRL_SET_RSVD(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_SET_RSVD_SHIFT)) & DCP_CHANNELCTRL_SET_RSVD_MASK)
/*! @} */

/*! @name CHANNELCTRL_CLR - DCP channel control register */
/*! @{ */

#define DCP_CHANNELCTRL_CLR_ENABLE_CHANNEL_MASK  (0xFFU)
#define DCP_CHANNELCTRL_CLR_ENABLE_CHANNEL_SHIFT (0U)
/*! ENABLE_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_CLR_ENABLE_CHANNEL(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_CLR_ENABLE_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_CLR_ENABLE_CHANNEL_MASK)

#define DCP_CHANNELCTRL_CLR_HIGH_PRIORITY_CHANNEL_MASK (0xFF00U)
#define DCP_CHANNELCTRL_CLR_HIGH_PRIORITY_CHANNEL_SHIFT (8U)
/*! HIGH_PRIORITY_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_CLR_HIGH_PRIORITY_CHANNEL(x) (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_CLR_HIGH_PRIORITY_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_CLR_HIGH_PRIORITY_CHANNEL_MASK)

#define DCP_CHANNELCTRL_CLR_CH0_IRQ_MERGED_MASK  (0x10000U)
#define DCP_CHANNELCTRL_CLR_CH0_IRQ_MERGED_SHIFT (16U)
#define DCP_CHANNELCTRL_CLR_CH0_IRQ_MERGED(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_CLR_CH0_IRQ_MERGED_SHIFT)) & DCP_CHANNELCTRL_CLR_CH0_IRQ_MERGED_MASK)

#define DCP_CHANNELCTRL_CLR_RSVD_MASK            (0xFFFE0000U)
#define DCP_CHANNELCTRL_CLR_RSVD_SHIFT           (17U)
#define DCP_CHANNELCTRL_CLR_RSVD(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_CLR_RSVD_SHIFT)) & DCP_CHANNELCTRL_CLR_RSVD_MASK)
/*! @} */

/*! @name CHANNELCTRL_TOG - DCP channel control register */
/*! @{ */

#define DCP_CHANNELCTRL_TOG_ENABLE_CHANNEL_MASK  (0xFFU)
#define DCP_CHANNELCTRL_TOG_ENABLE_CHANNEL_SHIFT (0U)
/*! ENABLE_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_TOG_ENABLE_CHANNEL(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_TOG_ENABLE_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_TOG_ENABLE_CHANNEL_MASK)

#define DCP_CHANNELCTRL_TOG_HIGH_PRIORITY_CHANNEL_MASK (0xFF00U)
#define DCP_CHANNELCTRL_TOG_HIGH_PRIORITY_CHANNEL_SHIFT (8U)
/*! HIGH_PRIORITY_CHANNEL
 *  0b00000001..CH0
 *  0b00000010..CH1
 *  0b00000100..CH2
 *  0b00001000..CH3
 */
#define DCP_CHANNELCTRL_TOG_HIGH_PRIORITY_CHANNEL(x) (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_TOG_HIGH_PRIORITY_CHANNEL_SHIFT)) & DCP_CHANNELCTRL_TOG_HIGH_PRIORITY_CHANNEL_MASK)

#define DCP_CHANNELCTRL_TOG_CH0_IRQ_MERGED_MASK  (0x10000U)
#define DCP_CHANNELCTRL_TOG_CH0_IRQ_MERGED_SHIFT (16U)
#define DCP_CHANNELCTRL_TOG_CH0_IRQ_MERGED(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_TOG_CH0_IRQ_MERGED_SHIFT)) & DCP_CHANNELCTRL_TOG_CH0_IRQ_MERGED_MASK)

#define DCP_CHANNELCTRL_TOG_RSVD_MASK            (0xFFFE0000U)
#define DCP_CHANNELCTRL_TOG_RSVD_SHIFT           (17U)
#define DCP_CHANNELCTRL_TOG_RSVD(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CHANNELCTRL_TOG_RSVD_SHIFT)) & DCP_CHANNELCTRL_TOG_RSVD_MASK)
/*! @} */

/*! @name CAPABILITY0 - DCP capability 0 register */
/*! @{ */

#define DCP_CAPABILITY0_NUM_KEYS_MASK            (0xFFU)
#define DCP_CAPABILITY0_NUM_KEYS_SHIFT           (0U)
#define DCP_CAPABILITY0_NUM_KEYS(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY0_NUM_KEYS_SHIFT)) & DCP_CAPABILITY0_NUM_KEYS_MASK)

#define DCP_CAPABILITY0_NUM_CHANNELS_MASK        (0xF00U)
#define DCP_CAPABILITY0_NUM_CHANNELS_SHIFT       (8U)
#define DCP_CAPABILITY0_NUM_CHANNELS(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY0_NUM_CHANNELS_SHIFT)) & DCP_CAPABILITY0_NUM_CHANNELS_MASK)

#define DCP_CAPABILITY0_RSVD_MASK                (0x1FFFF000U)
#define DCP_CAPABILITY0_RSVD_SHIFT               (12U)
#define DCP_CAPABILITY0_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY0_RSVD_SHIFT)) & DCP_CAPABILITY0_RSVD_MASK)

#define DCP_CAPABILITY0_DISABLE_UNIQUE_KEY_MASK  (0x20000000U)
#define DCP_CAPABILITY0_DISABLE_UNIQUE_KEY_SHIFT (29U)
#define DCP_CAPABILITY0_DISABLE_UNIQUE_KEY(x)    (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY0_DISABLE_UNIQUE_KEY_SHIFT)) & DCP_CAPABILITY0_DISABLE_UNIQUE_KEY_MASK)

#define DCP_CAPABILITY0_DISABLE_DECRYPT_MASK     (0x80000000U)
#define DCP_CAPABILITY0_DISABLE_DECRYPT_SHIFT    (31U)
#define DCP_CAPABILITY0_DISABLE_DECRYPT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY0_DISABLE_DECRYPT_SHIFT)) & DCP_CAPABILITY0_DISABLE_DECRYPT_MASK)
/*! @} */

/*! @name CAPABILITY1 - DCP capability 1 register */
/*! @{ */

#define DCP_CAPABILITY1_CIPHER_ALGORITHMS_MASK   (0xFFFFU)
#define DCP_CAPABILITY1_CIPHER_ALGORITHMS_SHIFT  (0U)
/*! CIPHER_ALGORITHMS
 *  0b0000000000000001..AES128
 */
#define DCP_CAPABILITY1_CIPHER_ALGORITHMS(x)     (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY1_CIPHER_ALGORITHMS_SHIFT)) & DCP_CAPABILITY1_CIPHER_ALGORITHMS_MASK)

#define DCP_CAPABILITY1_HASH_ALGORITHMS_MASK     (0xFFFF0000U)
#define DCP_CAPABILITY1_HASH_ALGORITHMS_SHIFT    (16U)
/*! HASH_ALGORITHMS
 *  0b0000000000000001..SHA1
 *  0b0000000000000010..CRC32
 *  0b0000000000000100..SHA256
 */
#define DCP_CAPABILITY1_HASH_ALGORITHMS(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CAPABILITY1_HASH_ALGORITHMS_SHIFT)) & DCP_CAPABILITY1_HASH_ALGORITHMS_MASK)
/*! @} */

/*! @name CONTEXT - DCP context buffer pointer */
/*! @{ */

#define DCP_CONTEXT_ADDR_MASK                    (0xFFFFFFFFU)
#define DCP_CONTEXT_ADDR_SHIFT                   (0U)
#define DCP_CONTEXT_ADDR(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CONTEXT_ADDR_SHIFT)) & DCP_CONTEXT_ADDR_MASK)
/*! @} */

/*! @name KEY - DCP key index */
/*! @{ */

#define DCP_KEY_SUBWORD_MASK                     (0x3U)
#define DCP_KEY_SUBWORD_SHIFT                    (0U)
#define DCP_KEY_SUBWORD(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_KEY_SUBWORD_SHIFT)) & DCP_KEY_SUBWORD_MASK)

#define DCP_KEY_RSVD_SUBWORD_MASK                (0xCU)
#define DCP_KEY_RSVD_SUBWORD_SHIFT               (2U)
#define DCP_KEY_RSVD_SUBWORD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_KEY_RSVD_SUBWORD_SHIFT)) & DCP_KEY_RSVD_SUBWORD_MASK)

#define DCP_KEY_INDEX_MASK                       (0x30U)
#define DCP_KEY_INDEX_SHIFT                      (4U)
#define DCP_KEY_INDEX(x)                         (((uint32_t)(((uint32_t)(x)) << DCP_KEY_INDEX_SHIFT)) & DCP_KEY_INDEX_MASK)

#define DCP_KEY_RSVD_INDEX_MASK                  (0xC0U)
#define DCP_KEY_RSVD_INDEX_SHIFT                 (6U)
#define DCP_KEY_RSVD_INDEX(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_KEY_RSVD_INDEX_SHIFT)) & DCP_KEY_RSVD_INDEX_MASK)

#define DCP_KEY_RSVD_MASK                        (0xFFFFFF00U)
#define DCP_KEY_RSVD_SHIFT                       (8U)
#define DCP_KEY_RSVD(x)                          (((uint32_t)(((uint32_t)(x)) << DCP_KEY_RSVD_SHIFT)) & DCP_KEY_RSVD_MASK)
/*! @} */

/*! @name KEYDATA - DCP key data */
/*! @{ */

#define DCP_KEYDATA_DATA_MASK                    (0xFFFFFFFFU)
#define DCP_KEYDATA_DATA_SHIFT                   (0U)
#define DCP_KEYDATA_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_KEYDATA_DATA_SHIFT)) & DCP_KEYDATA_DATA_MASK)
/*! @} */

/*! @name PACKET0 - DCP work packet 0 status register */
/*! @{ */

#define DCP_PACKET0_ADDR_MASK                    (0xFFFFFFFFU)
#define DCP_PACKET0_ADDR_SHIFT                   (0U)
#define DCP_PACKET0_ADDR(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_PACKET0_ADDR_SHIFT)) & DCP_PACKET0_ADDR_MASK)
/*! @} */

/*! @name PACKET1 - DCP work packet 1 status register */
/*! @{ */

#define DCP_PACKET1_INTERRUPT_MASK               (0x1U)
#define DCP_PACKET1_INTERRUPT_SHIFT              (0U)
#define DCP_PACKET1_INTERRUPT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_INTERRUPT_SHIFT)) & DCP_PACKET1_INTERRUPT_MASK)

#define DCP_PACKET1_DECR_SEMAPHORE_MASK          (0x2U)
#define DCP_PACKET1_DECR_SEMAPHORE_SHIFT         (1U)
#define DCP_PACKET1_DECR_SEMAPHORE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_DECR_SEMAPHORE_SHIFT)) & DCP_PACKET1_DECR_SEMAPHORE_MASK)

#define DCP_PACKET1_CHAIN_MASK                   (0x4U)
#define DCP_PACKET1_CHAIN_SHIFT                  (2U)
#define DCP_PACKET1_CHAIN(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CHAIN_SHIFT)) & DCP_PACKET1_CHAIN_MASK)

#define DCP_PACKET1_CHAIN_CONTIGUOUS_MASK        (0x8U)
#define DCP_PACKET1_CHAIN_CONTIGUOUS_SHIFT       (3U)
#define DCP_PACKET1_CHAIN_CONTIGUOUS(x)          (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CHAIN_CONTIGUOUS_SHIFT)) & DCP_PACKET1_CHAIN_CONTIGUOUS_MASK)

#define DCP_PACKET1_ENABLE_MEMCOPY_MASK          (0x10U)
#define DCP_PACKET1_ENABLE_MEMCOPY_SHIFT         (4U)
#define DCP_PACKET1_ENABLE_MEMCOPY(x)            (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_ENABLE_MEMCOPY_SHIFT)) & DCP_PACKET1_ENABLE_MEMCOPY_MASK)

#define DCP_PACKET1_ENABLE_CIPHER_MASK           (0x20U)
#define DCP_PACKET1_ENABLE_CIPHER_SHIFT          (5U)
#define DCP_PACKET1_ENABLE_CIPHER(x)             (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_ENABLE_CIPHER_SHIFT)) & DCP_PACKET1_ENABLE_CIPHER_MASK)

#define DCP_PACKET1_ENABLE_HASH_MASK             (0x40U)
#define DCP_PACKET1_ENABLE_HASH_SHIFT            (6U)
#define DCP_PACKET1_ENABLE_HASH(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_ENABLE_HASH_SHIFT)) & DCP_PACKET1_ENABLE_HASH_MASK)

#define DCP_PACKET1_ENABLE_BLIT_MASK             (0x80U)
#define DCP_PACKET1_ENABLE_BLIT_SHIFT            (7U)
#define DCP_PACKET1_ENABLE_BLIT(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_ENABLE_BLIT_SHIFT)) & DCP_PACKET1_ENABLE_BLIT_MASK)

#define DCP_PACKET1_CIPHER_ENCRYPT_MASK          (0x100U)
#define DCP_PACKET1_CIPHER_ENCRYPT_SHIFT         (8U)
/*! CIPHER_ENCRYPT
 *  0b1..ENCRYPT
 *  0b0..DECRYPT
 */
#define DCP_PACKET1_CIPHER_ENCRYPT(x)            (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CIPHER_ENCRYPT_SHIFT)) & DCP_PACKET1_CIPHER_ENCRYPT_MASK)

#define DCP_PACKET1_CIPHER_INIT_MASK             (0x200U)
#define DCP_PACKET1_CIPHER_INIT_SHIFT            (9U)
#define DCP_PACKET1_CIPHER_INIT(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CIPHER_INIT_SHIFT)) & DCP_PACKET1_CIPHER_INIT_MASK)

#define DCP_PACKET1_OTP_KEY_MASK                 (0x400U)
#define DCP_PACKET1_OTP_KEY_SHIFT                (10U)
#define DCP_PACKET1_OTP_KEY(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_OTP_KEY_SHIFT)) & DCP_PACKET1_OTP_KEY_MASK)

#define DCP_PACKET1_PAYLOAD_KEY_MASK             (0x800U)
#define DCP_PACKET1_PAYLOAD_KEY_SHIFT            (11U)
#define DCP_PACKET1_PAYLOAD_KEY(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_PAYLOAD_KEY_SHIFT)) & DCP_PACKET1_PAYLOAD_KEY_MASK)

#define DCP_PACKET1_HASH_INIT_MASK               (0x1000U)
#define DCP_PACKET1_HASH_INIT_SHIFT              (12U)
#define DCP_PACKET1_HASH_INIT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_HASH_INIT_SHIFT)) & DCP_PACKET1_HASH_INIT_MASK)

#define DCP_PACKET1_HASH_TERM_MASK               (0x2000U)
#define DCP_PACKET1_HASH_TERM_SHIFT              (13U)
#define DCP_PACKET1_HASH_TERM(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_HASH_TERM_SHIFT)) & DCP_PACKET1_HASH_TERM_MASK)

#define DCP_PACKET1_CHECK_HASH_MASK              (0x4000U)
#define DCP_PACKET1_CHECK_HASH_SHIFT             (14U)
#define DCP_PACKET1_CHECK_HASH(x)                (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CHECK_HASH_SHIFT)) & DCP_PACKET1_CHECK_HASH_MASK)

#define DCP_PACKET1_HASH_OUTPUT_MASK             (0x8000U)
#define DCP_PACKET1_HASH_OUTPUT_SHIFT            (15U)
/*! HASH_OUTPUT
 *  0b0..INPUT
 *  0b1..OUTPUT
 */
#define DCP_PACKET1_HASH_OUTPUT(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_HASH_OUTPUT_SHIFT)) & DCP_PACKET1_HASH_OUTPUT_MASK)

#define DCP_PACKET1_CONSTANT_FILL_MASK           (0x10000U)
#define DCP_PACKET1_CONSTANT_FILL_SHIFT          (16U)
#define DCP_PACKET1_CONSTANT_FILL(x)             (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_CONSTANT_FILL_SHIFT)) & DCP_PACKET1_CONSTANT_FILL_MASK)

#define DCP_PACKET1_TEST_SEMA_IRQ_MASK           (0x20000U)
#define DCP_PACKET1_TEST_SEMA_IRQ_SHIFT          (17U)
#define DCP_PACKET1_TEST_SEMA_IRQ(x)             (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_TEST_SEMA_IRQ_SHIFT)) & DCP_PACKET1_TEST_SEMA_IRQ_MASK)

#define DCP_PACKET1_KEY_BYTESWAP_MASK            (0x40000U)
#define DCP_PACKET1_KEY_BYTESWAP_SHIFT           (18U)
#define DCP_PACKET1_KEY_BYTESWAP(x)              (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_KEY_BYTESWAP_SHIFT)) & DCP_PACKET1_KEY_BYTESWAP_MASK)

#define DCP_PACKET1_KEY_WORDSWAP_MASK            (0x80000U)
#define DCP_PACKET1_KEY_WORDSWAP_SHIFT           (19U)
#define DCP_PACKET1_KEY_WORDSWAP(x)              (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_KEY_WORDSWAP_SHIFT)) & DCP_PACKET1_KEY_WORDSWAP_MASK)

#define DCP_PACKET1_INPUT_BYTESWAP_MASK          (0x100000U)
#define DCP_PACKET1_INPUT_BYTESWAP_SHIFT         (20U)
#define DCP_PACKET1_INPUT_BYTESWAP(x)            (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_INPUT_BYTESWAP_SHIFT)) & DCP_PACKET1_INPUT_BYTESWAP_MASK)

#define DCP_PACKET1_INPUT_WORDSWAP_MASK          (0x200000U)
#define DCP_PACKET1_INPUT_WORDSWAP_SHIFT         (21U)
#define DCP_PACKET1_INPUT_WORDSWAP(x)            (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_INPUT_WORDSWAP_SHIFT)) & DCP_PACKET1_INPUT_WORDSWAP_MASK)

#define DCP_PACKET1_OUTPUT_BYTESWAP_MASK         (0x400000U)
#define DCP_PACKET1_OUTPUT_BYTESWAP_SHIFT        (22U)
#define DCP_PACKET1_OUTPUT_BYTESWAP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_OUTPUT_BYTESWAP_SHIFT)) & DCP_PACKET1_OUTPUT_BYTESWAP_MASK)

#define DCP_PACKET1_OUTPUT_WORDSWAP_MASK         (0x800000U)
#define DCP_PACKET1_OUTPUT_WORDSWAP_SHIFT        (23U)
#define DCP_PACKET1_OUTPUT_WORDSWAP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_OUTPUT_WORDSWAP_SHIFT)) & DCP_PACKET1_OUTPUT_WORDSWAP_MASK)

#define DCP_PACKET1_TAG_MASK                     (0xFF000000U)
#define DCP_PACKET1_TAG_SHIFT                    (24U)
#define DCP_PACKET1_TAG(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_PACKET1_TAG_SHIFT)) & DCP_PACKET1_TAG_MASK)
/*! @} */

/*! @name PACKET2 - DCP work packet 2 status register */
/*! @{ */

#define DCP_PACKET2_CIPHER_SELECT_MASK           (0xFU)
#define DCP_PACKET2_CIPHER_SELECT_SHIFT          (0U)
/*! CIPHER_SELECT
 *  0b0000..AES128
 */
#define DCP_PACKET2_CIPHER_SELECT(x)             (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_CIPHER_SELECT_SHIFT)) & DCP_PACKET2_CIPHER_SELECT_MASK)

#define DCP_PACKET2_CIPHER_MODE_MASK             (0xF0U)
#define DCP_PACKET2_CIPHER_MODE_SHIFT            (4U)
/*! CIPHER_MODE
 *  0b0000..ECB
 *  0b0001..CBC
 */
#define DCP_PACKET2_CIPHER_MODE(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_CIPHER_MODE_SHIFT)) & DCP_PACKET2_CIPHER_MODE_MASK)

#define DCP_PACKET2_KEY_SELECT_MASK              (0xFF00U)
#define DCP_PACKET2_KEY_SELECT_SHIFT             (8U)
/*! KEY_SELECT
 *  0b00000000..KEY0
 *  0b00000001..KEY1
 *  0b00000010..KEY2
 *  0b00000011..KEY3
 *  0b11111110..UNIQUE_KEY
 *  0b11111111..OTP_KEY
 */
#define DCP_PACKET2_KEY_SELECT(x)                (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_KEY_SELECT_SHIFT)) & DCP_PACKET2_KEY_SELECT_MASK)

#define DCP_PACKET2_HASH_SELECT_MASK             (0xF0000U)
#define DCP_PACKET2_HASH_SELECT_SHIFT            (16U)
/*! HASH_SELECT
 *  0b0000..SHA1
 *  0b0001..CRC32
 *  0b0010..SHA256
 */
#define DCP_PACKET2_HASH_SELECT(x)               (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_HASH_SELECT_SHIFT)) & DCP_PACKET2_HASH_SELECT_MASK)

#define DCP_PACKET2_RSVD_MASK                    (0xF00000U)
#define DCP_PACKET2_RSVD_SHIFT                   (20U)
#define DCP_PACKET2_RSVD(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_RSVD_SHIFT)) & DCP_PACKET2_RSVD_MASK)

#define DCP_PACKET2_CIPHER_CFG_MASK              (0xFF000000U)
#define DCP_PACKET2_CIPHER_CFG_SHIFT             (24U)
#define DCP_PACKET2_CIPHER_CFG(x)                (((uint32_t)(((uint32_t)(x)) << DCP_PACKET2_CIPHER_CFG_SHIFT)) & DCP_PACKET2_CIPHER_CFG_MASK)
/*! @} */

/*! @name PACKET3 - DCP work packet 3 status register */
/*! @{ */

#define DCP_PACKET3_ADDR_MASK                    (0xFFFFFFFFU)
#define DCP_PACKET3_ADDR_SHIFT                   (0U)
#define DCP_PACKET3_ADDR(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_PACKET3_ADDR_SHIFT)) & DCP_PACKET3_ADDR_MASK)
/*! @} */

/*! @name PACKET4 - DCP work packet 4 status register */
/*! @{ */

#define DCP_PACKET4_ADDR_MASK                    (0xFFFFFFFFU)
#define DCP_PACKET4_ADDR_SHIFT                   (0U)
#define DCP_PACKET4_ADDR(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_PACKET4_ADDR_SHIFT)) & DCP_PACKET4_ADDR_MASK)
/*! @} */

/*! @name PACKET5 - DCP work packet 5 status register */
/*! @{ */

#define DCP_PACKET5_COUNT_MASK                   (0xFFFFFFFFU)
#define DCP_PACKET5_COUNT_SHIFT                  (0U)
#define DCP_PACKET5_COUNT(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_PACKET5_COUNT_SHIFT)) & DCP_PACKET5_COUNT_MASK)
/*! @} */

/*! @name PACKET6 - DCP work packet 6 status register */
/*! @{ */

#define DCP_PACKET6_ADDR_MASK                    (0xFFFFFFFFU)
#define DCP_PACKET6_ADDR_SHIFT                   (0U)
#define DCP_PACKET6_ADDR(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_PACKET6_ADDR_SHIFT)) & DCP_PACKET6_ADDR_MASK)
/*! @} */

/*! @name CH0CMDPTR - DCP channel 0 command pointer address register */
/*! @{ */

#define DCP_CH0CMDPTR_ADDR_MASK                  (0xFFFFFFFFU)
#define DCP_CH0CMDPTR_ADDR_SHIFT                 (0U)
#define DCP_CH0CMDPTR_ADDR(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_CH0CMDPTR_ADDR_SHIFT)) & DCP_CH0CMDPTR_ADDR_MASK)
/*! @} */

/*! @name CH0SEMA - DCP channel 0 semaphore register */
/*! @{ */

#define DCP_CH0SEMA_INCREMENT_MASK               (0xFFU)
#define DCP_CH0SEMA_INCREMENT_SHIFT              (0U)
#define DCP_CH0SEMA_INCREMENT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH0SEMA_INCREMENT_SHIFT)) & DCP_CH0SEMA_INCREMENT_MASK)

#define DCP_CH0SEMA_VALUE_MASK                   (0xFF0000U)
#define DCP_CH0SEMA_VALUE_SHIFT                  (16U)
#define DCP_CH0SEMA_VALUE(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_CH0SEMA_VALUE_SHIFT)) & DCP_CH0SEMA_VALUE_MASK)
/*! @} */

/*! @name CH0STAT - DCP channel 0 status register */
/*! @{ */

#define DCP_CH0STAT_RSVD_COMPLETE_MASK           (0x1U)
#define DCP_CH0STAT_RSVD_COMPLETE_SHIFT          (0U)
#define DCP_CH0STAT_RSVD_COMPLETE(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_RSVD_COMPLETE_SHIFT)) & DCP_CH0STAT_RSVD_COMPLETE_MASK)

#define DCP_CH0STAT_HASH_MISMATCH_MASK           (0x2U)
#define DCP_CH0STAT_HASH_MISMATCH_SHIFT          (1U)
#define DCP_CH0STAT_HASH_MISMATCH(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_HASH_MISMATCH_SHIFT)) & DCP_CH0STAT_HASH_MISMATCH_MASK)

#define DCP_CH0STAT_ERROR_SETUP_MASK             (0x4U)
#define DCP_CH0STAT_ERROR_SETUP_SHIFT            (2U)
#define DCP_CH0STAT_ERROR_SETUP(x)               (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_SETUP_SHIFT)) & DCP_CH0STAT_ERROR_SETUP_MASK)

#define DCP_CH0STAT_ERROR_PACKET_MASK            (0x8U)
#define DCP_CH0STAT_ERROR_PACKET_SHIFT           (3U)
#define DCP_CH0STAT_ERROR_PACKET(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_PACKET_SHIFT)) & DCP_CH0STAT_ERROR_PACKET_MASK)

#define DCP_CH0STAT_ERROR_SRC_MASK               (0x10U)
#define DCP_CH0STAT_ERROR_SRC_SHIFT              (4U)
#define DCP_CH0STAT_ERROR_SRC(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_SRC_SHIFT)) & DCP_CH0STAT_ERROR_SRC_MASK)

#define DCP_CH0STAT_ERROR_DST_MASK               (0x20U)
#define DCP_CH0STAT_ERROR_DST_SHIFT              (5U)
#define DCP_CH0STAT_ERROR_DST(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_DST_SHIFT)) & DCP_CH0STAT_ERROR_DST_MASK)

#define DCP_CH0STAT_ERROR_PAGEFAULT_MASK         (0x40U)
#define DCP_CH0STAT_ERROR_PAGEFAULT_SHIFT        (6U)
#define DCP_CH0STAT_ERROR_PAGEFAULT(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_PAGEFAULT_SHIFT)) & DCP_CH0STAT_ERROR_PAGEFAULT_MASK)

#define DCP_CH0STAT_ERROR_CODE_MASK              (0xFF0000U)
#define DCP_CH0STAT_ERROR_CODE_SHIFT             (16U)
/*! ERROR_CODE
 *  0b00000001..Error signalled because the next pointer is 0x00000000
 *  0b00000010..Error signalled because the semaphore is non-zero and neither chain bit is set
 *  0b00000011..Error signalled because an error is reported reading/writing the context buffer
 *  0b00000100..Error signalled because an error is reported reading/writing the payload
 *  0b00000101..Error signalled because the control packet specifies an invalid mode select (for instance, blit + hash)
 */
#define DCP_CH0STAT_ERROR_CODE(x)                (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_ERROR_CODE_SHIFT)) & DCP_CH0STAT_ERROR_CODE_MASK)

#define DCP_CH0STAT_TAG_MASK                     (0xFF000000U)
#define DCP_CH0STAT_TAG_SHIFT                    (24U)
#define DCP_CH0STAT_TAG(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TAG_SHIFT)) & DCP_CH0STAT_TAG_MASK)
/*! @} */

/*! @name CH0STAT_SET - DCP channel 0 status register */
/*! @{ */

#define DCP_CH0STAT_SET_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH0STAT_SET_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH0STAT_SET_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_RSVD_COMPLETE_SHIFT)) & DCP_CH0STAT_SET_RSVD_COMPLETE_MASK)

#define DCP_CH0STAT_SET_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH0STAT_SET_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH0STAT_SET_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_HASH_MISMATCH_SHIFT)) & DCP_CH0STAT_SET_HASH_MISMATCH_MASK)

#define DCP_CH0STAT_SET_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH0STAT_SET_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH0STAT_SET_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_SETUP_SHIFT)) & DCP_CH0STAT_SET_ERROR_SETUP_MASK)

#define DCP_CH0STAT_SET_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH0STAT_SET_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH0STAT_SET_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_PACKET_SHIFT)) & DCP_CH0STAT_SET_ERROR_PACKET_MASK)

#define DCP_CH0STAT_SET_ERROR_SRC_MASK           (0x10U)
#define DCP_CH0STAT_SET_ERROR_SRC_SHIFT          (4U)
#define DCP_CH0STAT_SET_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_SRC_SHIFT)) & DCP_CH0STAT_SET_ERROR_SRC_MASK)

#define DCP_CH0STAT_SET_ERROR_DST_MASK           (0x20U)
#define DCP_CH0STAT_SET_ERROR_DST_SHIFT          (5U)
#define DCP_CH0STAT_SET_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_DST_SHIFT)) & DCP_CH0STAT_SET_ERROR_DST_MASK)

#define DCP_CH0STAT_SET_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH0STAT_SET_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH0STAT_SET_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_PAGEFAULT_SHIFT)) & DCP_CH0STAT_SET_ERROR_PAGEFAULT_MASK)

#define DCP_CH0STAT_SET_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH0STAT_SET_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error signalled because the next pointer is 0x00000000
 *  0b00000010..Error signalled because the semaphore is non-zero and neither chain bit is set
 *  0b00000011..Error signalled because an error is reported reading/writing the context buffer
 *  0b00000100..Error signalled because an error is reported reading/writing the payload
 *  0b00000101..Error signalled because the control packet specifies an invalid mode select (for instance, blit + hash)
 */
#define DCP_CH0STAT_SET_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_ERROR_CODE_SHIFT)) & DCP_CH0STAT_SET_ERROR_CODE_MASK)

#define DCP_CH0STAT_SET_TAG_MASK                 (0xFF000000U)
#define DCP_CH0STAT_SET_TAG_SHIFT                (24U)
#define DCP_CH0STAT_SET_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_SET_TAG_SHIFT)) & DCP_CH0STAT_SET_TAG_MASK)
/*! @} */

/*! @name CH0STAT_CLR - DCP channel 0 status register */
/*! @{ */

#define DCP_CH0STAT_CLR_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH0STAT_CLR_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH0STAT_CLR_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_RSVD_COMPLETE_SHIFT)) & DCP_CH0STAT_CLR_RSVD_COMPLETE_MASK)

#define DCP_CH0STAT_CLR_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH0STAT_CLR_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH0STAT_CLR_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_HASH_MISMATCH_SHIFT)) & DCP_CH0STAT_CLR_HASH_MISMATCH_MASK)

#define DCP_CH0STAT_CLR_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH0STAT_CLR_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH0STAT_CLR_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_SETUP_SHIFT)) & DCP_CH0STAT_CLR_ERROR_SETUP_MASK)

#define DCP_CH0STAT_CLR_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH0STAT_CLR_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH0STAT_CLR_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_PACKET_SHIFT)) & DCP_CH0STAT_CLR_ERROR_PACKET_MASK)

#define DCP_CH0STAT_CLR_ERROR_SRC_MASK           (0x10U)
#define DCP_CH0STAT_CLR_ERROR_SRC_SHIFT          (4U)
#define DCP_CH0STAT_CLR_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_SRC_SHIFT)) & DCP_CH0STAT_CLR_ERROR_SRC_MASK)

#define DCP_CH0STAT_CLR_ERROR_DST_MASK           (0x20U)
#define DCP_CH0STAT_CLR_ERROR_DST_SHIFT          (5U)
#define DCP_CH0STAT_CLR_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_DST_SHIFT)) & DCP_CH0STAT_CLR_ERROR_DST_MASK)

#define DCP_CH0STAT_CLR_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH0STAT_CLR_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH0STAT_CLR_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_PAGEFAULT_SHIFT)) & DCP_CH0STAT_CLR_ERROR_PAGEFAULT_MASK)

#define DCP_CH0STAT_CLR_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH0STAT_CLR_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error signalled because the next pointer is 0x00000000
 *  0b00000010..Error signalled because the semaphore is non-zero and neither chain bit is set
 *  0b00000011..Error signalled because an error is reported reading/writing the context buffer
 *  0b00000100..Error signalled because an error is reported reading/writing the payload
 *  0b00000101..Error signalled because the control packet specifies an invalid mode select (for instance, blit + hash)
 */
#define DCP_CH0STAT_CLR_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_ERROR_CODE_SHIFT)) & DCP_CH0STAT_CLR_ERROR_CODE_MASK)

#define DCP_CH0STAT_CLR_TAG_MASK                 (0xFF000000U)
#define DCP_CH0STAT_CLR_TAG_SHIFT                (24U)
#define DCP_CH0STAT_CLR_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_CLR_TAG_SHIFT)) & DCP_CH0STAT_CLR_TAG_MASK)
/*! @} */

/*! @name CH0STAT_TOG - DCP channel 0 status register */
/*! @{ */

#define DCP_CH0STAT_TOG_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH0STAT_TOG_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH0STAT_TOG_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_RSVD_COMPLETE_SHIFT)) & DCP_CH0STAT_TOG_RSVD_COMPLETE_MASK)

#define DCP_CH0STAT_TOG_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH0STAT_TOG_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH0STAT_TOG_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_HASH_MISMATCH_SHIFT)) & DCP_CH0STAT_TOG_HASH_MISMATCH_MASK)

#define DCP_CH0STAT_TOG_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH0STAT_TOG_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH0STAT_TOG_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_SETUP_SHIFT)) & DCP_CH0STAT_TOG_ERROR_SETUP_MASK)

#define DCP_CH0STAT_TOG_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH0STAT_TOG_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH0STAT_TOG_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_PACKET_SHIFT)) & DCP_CH0STAT_TOG_ERROR_PACKET_MASK)

#define DCP_CH0STAT_TOG_ERROR_SRC_MASK           (0x10U)
#define DCP_CH0STAT_TOG_ERROR_SRC_SHIFT          (4U)
#define DCP_CH0STAT_TOG_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_SRC_SHIFT)) & DCP_CH0STAT_TOG_ERROR_SRC_MASK)

#define DCP_CH0STAT_TOG_ERROR_DST_MASK           (0x20U)
#define DCP_CH0STAT_TOG_ERROR_DST_SHIFT          (5U)
#define DCP_CH0STAT_TOG_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_DST_SHIFT)) & DCP_CH0STAT_TOG_ERROR_DST_MASK)

#define DCP_CH0STAT_TOG_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH0STAT_TOG_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH0STAT_TOG_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_PAGEFAULT_SHIFT)) & DCP_CH0STAT_TOG_ERROR_PAGEFAULT_MASK)

#define DCP_CH0STAT_TOG_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH0STAT_TOG_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error signalled because the next pointer is 0x00000000
 *  0b00000010..Error signalled because the semaphore is non-zero and neither chain bit is set
 *  0b00000011..Error signalled because an error is reported reading/writing the context buffer
 *  0b00000100..Error signalled because an error is reported reading/writing the payload
 *  0b00000101..Error signalled because the control packet specifies an invalid mode select (for instance, blit + hash)
 */
#define DCP_CH0STAT_TOG_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_ERROR_CODE_SHIFT)) & DCP_CH0STAT_TOG_ERROR_CODE_MASK)

#define DCP_CH0STAT_TOG_TAG_MASK                 (0xFF000000U)
#define DCP_CH0STAT_TOG_TAG_SHIFT                (24U)
#define DCP_CH0STAT_TOG_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH0STAT_TOG_TAG_SHIFT)) & DCP_CH0STAT_TOG_TAG_MASK)
/*! @} */

/*! @name CH0OPTS - DCP channel 0 options register */
/*! @{ */

#define DCP_CH0OPTS_RECOVERY_TIMER_MASK          (0xFFFFU)
#define DCP_CH0OPTS_RECOVERY_TIMER_SHIFT         (0U)
#define DCP_CH0OPTS_RECOVERY_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_RECOVERY_TIMER_SHIFT)) & DCP_CH0OPTS_RECOVERY_TIMER_MASK)

#define DCP_CH0OPTS_RSVD_MASK                    (0xFFFF0000U)
#define DCP_CH0OPTS_RSVD_SHIFT                   (16U)
#define DCP_CH0OPTS_RSVD(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_RSVD_SHIFT)) & DCP_CH0OPTS_RSVD_MASK)
/*! @} */

/*! @name CH0OPTS_SET - DCP channel 0 options register */
/*! @{ */

#define DCP_CH0OPTS_SET_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH0OPTS_SET_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH0OPTS_SET_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_SET_RECOVERY_TIMER_SHIFT)) & DCP_CH0OPTS_SET_RECOVERY_TIMER_MASK)

#define DCP_CH0OPTS_SET_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH0OPTS_SET_RSVD_SHIFT               (16U)
#define DCP_CH0OPTS_SET_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_SET_RSVD_SHIFT)) & DCP_CH0OPTS_SET_RSVD_MASK)
/*! @} */

/*! @name CH0OPTS_CLR - DCP channel 0 options register */
/*! @{ */

#define DCP_CH0OPTS_CLR_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH0OPTS_CLR_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH0OPTS_CLR_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_CLR_RECOVERY_TIMER_SHIFT)) & DCP_CH0OPTS_CLR_RECOVERY_TIMER_MASK)

#define DCP_CH0OPTS_CLR_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH0OPTS_CLR_RSVD_SHIFT               (16U)
#define DCP_CH0OPTS_CLR_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_CLR_RSVD_SHIFT)) & DCP_CH0OPTS_CLR_RSVD_MASK)
/*! @} */

/*! @name CH0OPTS_TOG - DCP channel 0 options register */
/*! @{ */

#define DCP_CH0OPTS_TOG_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH0OPTS_TOG_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH0OPTS_TOG_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_TOG_RECOVERY_TIMER_SHIFT)) & DCP_CH0OPTS_TOG_RECOVERY_TIMER_MASK)

#define DCP_CH0OPTS_TOG_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH0OPTS_TOG_RSVD_SHIFT               (16U)
#define DCP_CH0OPTS_TOG_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH0OPTS_TOG_RSVD_SHIFT)) & DCP_CH0OPTS_TOG_RSVD_MASK)
/*! @} */

/*! @name CH1CMDPTR - DCP channel 1 command pointer address register */
/*! @{ */

#define DCP_CH1CMDPTR_ADDR_MASK                  (0xFFFFFFFFU)
#define DCP_CH1CMDPTR_ADDR_SHIFT                 (0U)
#define DCP_CH1CMDPTR_ADDR(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_CH1CMDPTR_ADDR_SHIFT)) & DCP_CH1CMDPTR_ADDR_MASK)
/*! @} */

/*! @name CH1SEMA - DCP channel 1 semaphore register */
/*! @{ */

#define DCP_CH1SEMA_INCREMENT_MASK               (0xFFU)
#define DCP_CH1SEMA_INCREMENT_SHIFT              (0U)
#define DCP_CH1SEMA_INCREMENT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH1SEMA_INCREMENT_SHIFT)) & DCP_CH1SEMA_INCREMENT_MASK)

#define DCP_CH1SEMA_VALUE_MASK                   (0xFF0000U)
#define DCP_CH1SEMA_VALUE_SHIFT                  (16U)
#define DCP_CH1SEMA_VALUE(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_CH1SEMA_VALUE_SHIFT)) & DCP_CH1SEMA_VALUE_MASK)
/*! @} */

/*! @name CH1STAT - DCP channel 1 status register */
/*! @{ */

#define DCP_CH1STAT_RSVD_COMPLETE_MASK           (0x1U)
#define DCP_CH1STAT_RSVD_COMPLETE_SHIFT          (0U)
#define DCP_CH1STAT_RSVD_COMPLETE(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_RSVD_COMPLETE_SHIFT)) & DCP_CH1STAT_RSVD_COMPLETE_MASK)

#define DCP_CH1STAT_HASH_MISMATCH_MASK           (0x2U)
#define DCP_CH1STAT_HASH_MISMATCH_SHIFT          (1U)
#define DCP_CH1STAT_HASH_MISMATCH(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_HASH_MISMATCH_SHIFT)) & DCP_CH1STAT_HASH_MISMATCH_MASK)

#define DCP_CH1STAT_ERROR_SETUP_MASK             (0x4U)
#define DCP_CH1STAT_ERROR_SETUP_SHIFT            (2U)
#define DCP_CH1STAT_ERROR_SETUP(x)               (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_SETUP_SHIFT)) & DCP_CH1STAT_ERROR_SETUP_MASK)

#define DCP_CH1STAT_ERROR_PACKET_MASK            (0x8U)
#define DCP_CH1STAT_ERROR_PACKET_SHIFT           (3U)
#define DCP_CH1STAT_ERROR_PACKET(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_PACKET_SHIFT)) & DCP_CH1STAT_ERROR_PACKET_MASK)

#define DCP_CH1STAT_ERROR_SRC_MASK               (0x10U)
#define DCP_CH1STAT_ERROR_SRC_SHIFT              (4U)
#define DCP_CH1STAT_ERROR_SRC(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_SRC_SHIFT)) & DCP_CH1STAT_ERROR_SRC_MASK)

#define DCP_CH1STAT_ERROR_DST_MASK               (0x20U)
#define DCP_CH1STAT_ERROR_DST_SHIFT              (5U)
#define DCP_CH1STAT_ERROR_DST(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_DST_SHIFT)) & DCP_CH1STAT_ERROR_DST_MASK)

#define DCP_CH1STAT_ERROR_PAGEFAULT_MASK         (0x40U)
#define DCP_CH1STAT_ERROR_PAGEFAULT_SHIFT        (6U)
#define DCP_CH1STAT_ERROR_PAGEFAULT(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_PAGEFAULT_SHIFT)) & DCP_CH1STAT_ERROR_PAGEFAULT_MASK)

#define DCP_CH1STAT_ERROR_CODE_MASK              (0xFF0000U)
#define DCP_CH1STAT_ERROR_CODE_SHIFT             (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported when reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported when reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH1STAT_ERROR_CODE(x)                (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_ERROR_CODE_SHIFT)) & DCP_CH1STAT_ERROR_CODE_MASK)

#define DCP_CH1STAT_TAG_MASK                     (0xFF000000U)
#define DCP_CH1STAT_TAG_SHIFT                    (24U)
#define DCP_CH1STAT_TAG(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TAG_SHIFT)) & DCP_CH1STAT_TAG_MASK)
/*! @} */

/*! @name CH1STAT_SET - DCP channel 1 status register */
/*! @{ */

#define DCP_CH1STAT_SET_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH1STAT_SET_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH1STAT_SET_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_RSVD_COMPLETE_SHIFT)) & DCP_CH1STAT_SET_RSVD_COMPLETE_MASK)

#define DCP_CH1STAT_SET_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH1STAT_SET_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH1STAT_SET_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_HASH_MISMATCH_SHIFT)) & DCP_CH1STAT_SET_HASH_MISMATCH_MASK)

#define DCP_CH1STAT_SET_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH1STAT_SET_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH1STAT_SET_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_SETUP_SHIFT)) & DCP_CH1STAT_SET_ERROR_SETUP_MASK)

#define DCP_CH1STAT_SET_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH1STAT_SET_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH1STAT_SET_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_PACKET_SHIFT)) & DCP_CH1STAT_SET_ERROR_PACKET_MASK)

#define DCP_CH1STAT_SET_ERROR_SRC_MASK           (0x10U)
#define DCP_CH1STAT_SET_ERROR_SRC_SHIFT          (4U)
#define DCP_CH1STAT_SET_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_SRC_SHIFT)) & DCP_CH1STAT_SET_ERROR_SRC_MASK)

#define DCP_CH1STAT_SET_ERROR_DST_MASK           (0x20U)
#define DCP_CH1STAT_SET_ERROR_DST_SHIFT          (5U)
#define DCP_CH1STAT_SET_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_DST_SHIFT)) & DCP_CH1STAT_SET_ERROR_DST_MASK)

#define DCP_CH1STAT_SET_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH1STAT_SET_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH1STAT_SET_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_PAGEFAULT_SHIFT)) & DCP_CH1STAT_SET_ERROR_PAGEFAULT_MASK)

#define DCP_CH1STAT_SET_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH1STAT_SET_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported when reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported when reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH1STAT_SET_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_ERROR_CODE_SHIFT)) & DCP_CH1STAT_SET_ERROR_CODE_MASK)

#define DCP_CH1STAT_SET_TAG_MASK                 (0xFF000000U)
#define DCP_CH1STAT_SET_TAG_SHIFT                (24U)
#define DCP_CH1STAT_SET_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_SET_TAG_SHIFT)) & DCP_CH1STAT_SET_TAG_MASK)
/*! @} */

/*! @name CH1STAT_CLR - DCP channel 1 status register */
/*! @{ */

#define DCP_CH1STAT_CLR_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH1STAT_CLR_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH1STAT_CLR_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_RSVD_COMPLETE_SHIFT)) & DCP_CH1STAT_CLR_RSVD_COMPLETE_MASK)

#define DCP_CH1STAT_CLR_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH1STAT_CLR_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH1STAT_CLR_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_HASH_MISMATCH_SHIFT)) & DCP_CH1STAT_CLR_HASH_MISMATCH_MASK)

#define DCP_CH1STAT_CLR_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH1STAT_CLR_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH1STAT_CLR_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_SETUP_SHIFT)) & DCP_CH1STAT_CLR_ERROR_SETUP_MASK)

#define DCP_CH1STAT_CLR_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH1STAT_CLR_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH1STAT_CLR_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_PACKET_SHIFT)) & DCP_CH1STAT_CLR_ERROR_PACKET_MASK)

#define DCP_CH1STAT_CLR_ERROR_SRC_MASK           (0x10U)
#define DCP_CH1STAT_CLR_ERROR_SRC_SHIFT          (4U)
#define DCP_CH1STAT_CLR_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_SRC_SHIFT)) & DCP_CH1STAT_CLR_ERROR_SRC_MASK)

#define DCP_CH1STAT_CLR_ERROR_DST_MASK           (0x20U)
#define DCP_CH1STAT_CLR_ERROR_DST_SHIFT          (5U)
#define DCP_CH1STAT_CLR_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_DST_SHIFT)) & DCP_CH1STAT_CLR_ERROR_DST_MASK)

#define DCP_CH1STAT_CLR_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH1STAT_CLR_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH1STAT_CLR_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_PAGEFAULT_SHIFT)) & DCP_CH1STAT_CLR_ERROR_PAGEFAULT_MASK)

#define DCP_CH1STAT_CLR_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH1STAT_CLR_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported when reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported when reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH1STAT_CLR_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_ERROR_CODE_SHIFT)) & DCP_CH1STAT_CLR_ERROR_CODE_MASK)

#define DCP_CH1STAT_CLR_TAG_MASK                 (0xFF000000U)
#define DCP_CH1STAT_CLR_TAG_SHIFT                (24U)
#define DCP_CH1STAT_CLR_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_CLR_TAG_SHIFT)) & DCP_CH1STAT_CLR_TAG_MASK)
/*! @} */

/*! @name CH1STAT_TOG - DCP channel 1 status register */
/*! @{ */

#define DCP_CH1STAT_TOG_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH1STAT_TOG_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH1STAT_TOG_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_RSVD_COMPLETE_SHIFT)) & DCP_CH1STAT_TOG_RSVD_COMPLETE_MASK)

#define DCP_CH1STAT_TOG_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH1STAT_TOG_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH1STAT_TOG_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_HASH_MISMATCH_SHIFT)) & DCP_CH1STAT_TOG_HASH_MISMATCH_MASK)

#define DCP_CH1STAT_TOG_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH1STAT_TOG_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH1STAT_TOG_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_SETUP_SHIFT)) & DCP_CH1STAT_TOG_ERROR_SETUP_MASK)

#define DCP_CH1STAT_TOG_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH1STAT_TOG_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH1STAT_TOG_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_PACKET_SHIFT)) & DCP_CH1STAT_TOG_ERROR_PACKET_MASK)

#define DCP_CH1STAT_TOG_ERROR_SRC_MASK           (0x10U)
#define DCP_CH1STAT_TOG_ERROR_SRC_SHIFT          (4U)
#define DCP_CH1STAT_TOG_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_SRC_SHIFT)) & DCP_CH1STAT_TOG_ERROR_SRC_MASK)

#define DCP_CH1STAT_TOG_ERROR_DST_MASK           (0x20U)
#define DCP_CH1STAT_TOG_ERROR_DST_SHIFT          (5U)
#define DCP_CH1STAT_TOG_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_DST_SHIFT)) & DCP_CH1STAT_TOG_ERROR_DST_MASK)

#define DCP_CH1STAT_TOG_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH1STAT_TOG_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH1STAT_TOG_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_PAGEFAULT_SHIFT)) & DCP_CH1STAT_TOG_ERROR_PAGEFAULT_MASK)

#define DCP_CH1STAT_TOG_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH1STAT_TOG_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported when reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported when reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH1STAT_TOG_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_ERROR_CODE_SHIFT)) & DCP_CH1STAT_TOG_ERROR_CODE_MASK)

#define DCP_CH1STAT_TOG_TAG_MASK                 (0xFF000000U)
#define DCP_CH1STAT_TOG_TAG_SHIFT                (24U)
#define DCP_CH1STAT_TOG_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH1STAT_TOG_TAG_SHIFT)) & DCP_CH1STAT_TOG_TAG_MASK)
/*! @} */

/*! @name CH1OPTS - DCP channel 1 options register */
/*! @{ */

#define DCP_CH1OPTS_RECOVERY_TIMER_MASK          (0xFFFFU)
#define DCP_CH1OPTS_RECOVERY_TIMER_SHIFT         (0U)
#define DCP_CH1OPTS_RECOVERY_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_RECOVERY_TIMER_SHIFT)) & DCP_CH1OPTS_RECOVERY_TIMER_MASK)

#define DCP_CH1OPTS_RSVD_MASK                    (0xFFFF0000U)
#define DCP_CH1OPTS_RSVD_SHIFT                   (16U)
#define DCP_CH1OPTS_RSVD(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_RSVD_SHIFT)) & DCP_CH1OPTS_RSVD_MASK)
/*! @} */

/*! @name CH1OPTS_SET - DCP channel 1 options register */
/*! @{ */

#define DCP_CH1OPTS_SET_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH1OPTS_SET_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH1OPTS_SET_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_SET_RECOVERY_TIMER_SHIFT)) & DCP_CH1OPTS_SET_RECOVERY_TIMER_MASK)

#define DCP_CH1OPTS_SET_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH1OPTS_SET_RSVD_SHIFT               (16U)
#define DCP_CH1OPTS_SET_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_SET_RSVD_SHIFT)) & DCP_CH1OPTS_SET_RSVD_MASK)
/*! @} */

/*! @name CH1OPTS_CLR - DCP channel 1 options register */
/*! @{ */

#define DCP_CH1OPTS_CLR_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH1OPTS_CLR_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH1OPTS_CLR_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_CLR_RECOVERY_TIMER_SHIFT)) & DCP_CH1OPTS_CLR_RECOVERY_TIMER_MASK)

#define DCP_CH1OPTS_CLR_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH1OPTS_CLR_RSVD_SHIFT               (16U)
#define DCP_CH1OPTS_CLR_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_CLR_RSVD_SHIFT)) & DCP_CH1OPTS_CLR_RSVD_MASK)
/*! @} */

/*! @name CH1OPTS_TOG - DCP channel 1 options register */
/*! @{ */

#define DCP_CH1OPTS_TOG_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH1OPTS_TOG_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH1OPTS_TOG_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_TOG_RECOVERY_TIMER_SHIFT)) & DCP_CH1OPTS_TOG_RECOVERY_TIMER_MASK)

#define DCP_CH1OPTS_TOG_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH1OPTS_TOG_RSVD_SHIFT               (16U)
#define DCP_CH1OPTS_TOG_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH1OPTS_TOG_RSVD_SHIFT)) & DCP_CH1OPTS_TOG_RSVD_MASK)
/*! @} */

/*! @name CH2CMDPTR - DCP channel 2 command pointer address register */
/*! @{ */

#define DCP_CH2CMDPTR_ADDR_MASK                  (0xFFFFFFFFU)
#define DCP_CH2CMDPTR_ADDR_SHIFT                 (0U)
#define DCP_CH2CMDPTR_ADDR(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_CH2CMDPTR_ADDR_SHIFT)) & DCP_CH2CMDPTR_ADDR_MASK)
/*! @} */

/*! @name CH2SEMA - DCP channel 2 semaphore register */
/*! @{ */

#define DCP_CH2SEMA_INCREMENT_MASK               (0xFFU)
#define DCP_CH2SEMA_INCREMENT_SHIFT              (0U)
#define DCP_CH2SEMA_INCREMENT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH2SEMA_INCREMENT_SHIFT)) & DCP_CH2SEMA_INCREMENT_MASK)

#define DCP_CH2SEMA_VALUE_MASK                   (0xFF0000U)
#define DCP_CH2SEMA_VALUE_SHIFT                  (16U)
#define DCP_CH2SEMA_VALUE(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_CH2SEMA_VALUE_SHIFT)) & DCP_CH2SEMA_VALUE_MASK)
/*! @} */

/*! @name CH2STAT - DCP channel 2 status register */
/*! @{ */

#define DCP_CH2STAT_RSVD_COMPLETE_MASK           (0x1U)
#define DCP_CH2STAT_RSVD_COMPLETE_SHIFT          (0U)
#define DCP_CH2STAT_RSVD_COMPLETE(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_RSVD_COMPLETE_SHIFT)) & DCP_CH2STAT_RSVD_COMPLETE_MASK)

#define DCP_CH2STAT_HASH_MISMATCH_MASK           (0x2U)
#define DCP_CH2STAT_HASH_MISMATCH_SHIFT          (1U)
#define DCP_CH2STAT_HASH_MISMATCH(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_HASH_MISMATCH_SHIFT)) & DCP_CH2STAT_HASH_MISMATCH_MASK)

#define DCP_CH2STAT_ERROR_SETUP_MASK             (0x4U)
#define DCP_CH2STAT_ERROR_SETUP_SHIFT            (2U)
#define DCP_CH2STAT_ERROR_SETUP(x)               (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_SETUP_SHIFT)) & DCP_CH2STAT_ERROR_SETUP_MASK)

#define DCP_CH2STAT_ERROR_PACKET_MASK            (0x8U)
#define DCP_CH2STAT_ERROR_PACKET_SHIFT           (3U)
#define DCP_CH2STAT_ERROR_PACKET(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_PACKET_SHIFT)) & DCP_CH2STAT_ERROR_PACKET_MASK)

#define DCP_CH2STAT_ERROR_SRC_MASK               (0x10U)
#define DCP_CH2STAT_ERROR_SRC_SHIFT              (4U)
#define DCP_CH2STAT_ERROR_SRC(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_SRC_SHIFT)) & DCP_CH2STAT_ERROR_SRC_MASK)

#define DCP_CH2STAT_ERROR_DST_MASK               (0x20U)
#define DCP_CH2STAT_ERROR_DST_SHIFT              (5U)
#define DCP_CH2STAT_ERROR_DST(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_DST_SHIFT)) & DCP_CH2STAT_ERROR_DST_MASK)

#define DCP_CH2STAT_ERROR_PAGEFAULT_MASK         (0x40U)
#define DCP_CH2STAT_ERROR_PAGEFAULT_SHIFT        (6U)
#define DCP_CH2STAT_ERROR_PAGEFAULT(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_PAGEFAULT_SHIFT)) & DCP_CH2STAT_ERROR_PAGEFAULT_MASK)

#define DCP_CH2STAT_ERROR_CODE_MASK              (0xFF0000U)
#define DCP_CH2STAT_ERROR_CODE_SHIFT             (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for instance, blit + hash).
 */
#define DCP_CH2STAT_ERROR_CODE(x)                (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_ERROR_CODE_SHIFT)) & DCP_CH2STAT_ERROR_CODE_MASK)

#define DCP_CH2STAT_TAG_MASK                     (0xFF000000U)
#define DCP_CH2STAT_TAG_SHIFT                    (24U)
#define DCP_CH2STAT_TAG(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TAG_SHIFT)) & DCP_CH2STAT_TAG_MASK)
/*! @} */

/*! @name CH2STAT_SET - DCP channel 2 status register */
/*! @{ */

#define DCP_CH2STAT_SET_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH2STAT_SET_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH2STAT_SET_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_RSVD_COMPLETE_SHIFT)) & DCP_CH2STAT_SET_RSVD_COMPLETE_MASK)

#define DCP_CH2STAT_SET_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH2STAT_SET_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH2STAT_SET_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_HASH_MISMATCH_SHIFT)) & DCP_CH2STAT_SET_HASH_MISMATCH_MASK)

#define DCP_CH2STAT_SET_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH2STAT_SET_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH2STAT_SET_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_SETUP_SHIFT)) & DCP_CH2STAT_SET_ERROR_SETUP_MASK)

#define DCP_CH2STAT_SET_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH2STAT_SET_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH2STAT_SET_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_PACKET_SHIFT)) & DCP_CH2STAT_SET_ERROR_PACKET_MASK)

#define DCP_CH2STAT_SET_ERROR_SRC_MASK           (0x10U)
#define DCP_CH2STAT_SET_ERROR_SRC_SHIFT          (4U)
#define DCP_CH2STAT_SET_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_SRC_SHIFT)) & DCP_CH2STAT_SET_ERROR_SRC_MASK)

#define DCP_CH2STAT_SET_ERROR_DST_MASK           (0x20U)
#define DCP_CH2STAT_SET_ERROR_DST_SHIFT          (5U)
#define DCP_CH2STAT_SET_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_DST_SHIFT)) & DCP_CH2STAT_SET_ERROR_DST_MASK)

#define DCP_CH2STAT_SET_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH2STAT_SET_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH2STAT_SET_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_PAGEFAULT_SHIFT)) & DCP_CH2STAT_SET_ERROR_PAGEFAULT_MASK)

#define DCP_CH2STAT_SET_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH2STAT_SET_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for instance, blit + hash).
 */
#define DCP_CH2STAT_SET_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_ERROR_CODE_SHIFT)) & DCP_CH2STAT_SET_ERROR_CODE_MASK)

#define DCP_CH2STAT_SET_TAG_MASK                 (0xFF000000U)
#define DCP_CH2STAT_SET_TAG_SHIFT                (24U)
#define DCP_CH2STAT_SET_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_SET_TAG_SHIFT)) & DCP_CH2STAT_SET_TAG_MASK)
/*! @} */

/*! @name CH2STAT_CLR - DCP channel 2 status register */
/*! @{ */

#define DCP_CH2STAT_CLR_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH2STAT_CLR_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH2STAT_CLR_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_RSVD_COMPLETE_SHIFT)) & DCP_CH2STAT_CLR_RSVD_COMPLETE_MASK)

#define DCP_CH2STAT_CLR_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH2STAT_CLR_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH2STAT_CLR_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_HASH_MISMATCH_SHIFT)) & DCP_CH2STAT_CLR_HASH_MISMATCH_MASK)

#define DCP_CH2STAT_CLR_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH2STAT_CLR_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH2STAT_CLR_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_SETUP_SHIFT)) & DCP_CH2STAT_CLR_ERROR_SETUP_MASK)

#define DCP_CH2STAT_CLR_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH2STAT_CLR_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH2STAT_CLR_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_PACKET_SHIFT)) & DCP_CH2STAT_CLR_ERROR_PACKET_MASK)

#define DCP_CH2STAT_CLR_ERROR_SRC_MASK           (0x10U)
#define DCP_CH2STAT_CLR_ERROR_SRC_SHIFT          (4U)
#define DCP_CH2STAT_CLR_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_SRC_SHIFT)) & DCP_CH2STAT_CLR_ERROR_SRC_MASK)

#define DCP_CH2STAT_CLR_ERROR_DST_MASK           (0x20U)
#define DCP_CH2STAT_CLR_ERROR_DST_SHIFT          (5U)
#define DCP_CH2STAT_CLR_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_DST_SHIFT)) & DCP_CH2STAT_CLR_ERROR_DST_MASK)

#define DCP_CH2STAT_CLR_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH2STAT_CLR_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH2STAT_CLR_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_PAGEFAULT_SHIFT)) & DCP_CH2STAT_CLR_ERROR_PAGEFAULT_MASK)

#define DCP_CH2STAT_CLR_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH2STAT_CLR_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for instance, blit + hash).
 */
#define DCP_CH2STAT_CLR_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_ERROR_CODE_SHIFT)) & DCP_CH2STAT_CLR_ERROR_CODE_MASK)

#define DCP_CH2STAT_CLR_TAG_MASK                 (0xFF000000U)
#define DCP_CH2STAT_CLR_TAG_SHIFT                (24U)
#define DCP_CH2STAT_CLR_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_CLR_TAG_SHIFT)) & DCP_CH2STAT_CLR_TAG_MASK)
/*! @} */

/*! @name CH2STAT_TOG - DCP channel 2 status register */
/*! @{ */

#define DCP_CH2STAT_TOG_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH2STAT_TOG_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH2STAT_TOG_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_RSVD_COMPLETE_SHIFT)) & DCP_CH2STAT_TOG_RSVD_COMPLETE_MASK)

#define DCP_CH2STAT_TOG_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH2STAT_TOG_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH2STAT_TOG_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_HASH_MISMATCH_SHIFT)) & DCP_CH2STAT_TOG_HASH_MISMATCH_MASK)

#define DCP_CH2STAT_TOG_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH2STAT_TOG_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH2STAT_TOG_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_SETUP_SHIFT)) & DCP_CH2STAT_TOG_ERROR_SETUP_MASK)

#define DCP_CH2STAT_TOG_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH2STAT_TOG_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH2STAT_TOG_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_PACKET_SHIFT)) & DCP_CH2STAT_TOG_ERROR_PACKET_MASK)

#define DCP_CH2STAT_TOG_ERROR_SRC_MASK           (0x10U)
#define DCP_CH2STAT_TOG_ERROR_SRC_SHIFT          (4U)
#define DCP_CH2STAT_TOG_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_SRC_SHIFT)) & DCP_CH2STAT_TOG_ERROR_SRC_MASK)

#define DCP_CH2STAT_TOG_ERROR_DST_MASK           (0x20U)
#define DCP_CH2STAT_TOG_ERROR_DST_SHIFT          (5U)
#define DCP_CH2STAT_TOG_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_DST_SHIFT)) & DCP_CH2STAT_TOG_ERROR_DST_MASK)

#define DCP_CH2STAT_TOG_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH2STAT_TOG_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH2STAT_TOG_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_PAGEFAULT_SHIFT)) & DCP_CH2STAT_TOG_ERROR_PAGEFAULT_MASK)

#define DCP_CH2STAT_TOG_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH2STAT_TOG_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for instance, blit + hash).
 */
#define DCP_CH2STAT_TOG_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_ERROR_CODE_SHIFT)) & DCP_CH2STAT_TOG_ERROR_CODE_MASK)

#define DCP_CH2STAT_TOG_TAG_MASK                 (0xFF000000U)
#define DCP_CH2STAT_TOG_TAG_SHIFT                (24U)
#define DCP_CH2STAT_TOG_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH2STAT_TOG_TAG_SHIFT)) & DCP_CH2STAT_TOG_TAG_MASK)
/*! @} */

/*! @name CH2OPTS - DCP channel 2 options register */
/*! @{ */

#define DCP_CH2OPTS_RECOVERY_TIMER_MASK          (0xFFFFU)
#define DCP_CH2OPTS_RECOVERY_TIMER_SHIFT         (0U)
#define DCP_CH2OPTS_RECOVERY_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_RECOVERY_TIMER_SHIFT)) & DCP_CH2OPTS_RECOVERY_TIMER_MASK)

#define DCP_CH2OPTS_RSVD_MASK                    (0xFFFF0000U)
#define DCP_CH2OPTS_RSVD_SHIFT                   (16U)
#define DCP_CH2OPTS_RSVD(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_RSVD_SHIFT)) & DCP_CH2OPTS_RSVD_MASK)
/*! @} */

/*! @name CH2OPTS_SET - DCP channel 2 options register */
/*! @{ */

#define DCP_CH2OPTS_SET_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH2OPTS_SET_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH2OPTS_SET_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_SET_RECOVERY_TIMER_SHIFT)) & DCP_CH2OPTS_SET_RECOVERY_TIMER_MASK)

#define DCP_CH2OPTS_SET_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH2OPTS_SET_RSVD_SHIFT               (16U)
#define DCP_CH2OPTS_SET_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_SET_RSVD_SHIFT)) & DCP_CH2OPTS_SET_RSVD_MASK)
/*! @} */

/*! @name CH2OPTS_CLR - DCP channel 2 options register */
/*! @{ */

#define DCP_CH2OPTS_CLR_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH2OPTS_CLR_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH2OPTS_CLR_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_CLR_RECOVERY_TIMER_SHIFT)) & DCP_CH2OPTS_CLR_RECOVERY_TIMER_MASK)

#define DCP_CH2OPTS_CLR_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH2OPTS_CLR_RSVD_SHIFT               (16U)
#define DCP_CH2OPTS_CLR_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_CLR_RSVD_SHIFT)) & DCP_CH2OPTS_CLR_RSVD_MASK)
/*! @} */

/*! @name CH2OPTS_TOG - DCP channel 2 options register */
/*! @{ */

#define DCP_CH2OPTS_TOG_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH2OPTS_TOG_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH2OPTS_TOG_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_TOG_RECOVERY_TIMER_SHIFT)) & DCP_CH2OPTS_TOG_RECOVERY_TIMER_MASK)

#define DCP_CH2OPTS_TOG_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH2OPTS_TOG_RSVD_SHIFT               (16U)
#define DCP_CH2OPTS_TOG_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH2OPTS_TOG_RSVD_SHIFT)) & DCP_CH2OPTS_TOG_RSVD_MASK)
/*! @} */

/*! @name CH3CMDPTR - DCP channel 3 command pointer address register */
/*! @{ */

#define DCP_CH3CMDPTR_ADDR_MASK                  (0xFFFFFFFFU)
#define DCP_CH3CMDPTR_ADDR_SHIFT                 (0U)
#define DCP_CH3CMDPTR_ADDR(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_CH3CMDPTR_ADDR_SHIFT)) & DCP_CH3CMDPTR_ADDR_MASK)
/*! @} */

/*! @name CH3SEMA - DCP channel 3 semaphore register */
/*! @{ */

#define DCP_CH3SEMA_INCREMENT_MASK               (0xFFU)
#define DCP_CH3SEMA_INCREMENT_SHIFT              (0U)
#define DCP_CH3SEMA_INCREMENT(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH3SEMA_INCREMENT_SHIFT)) & DCP_CH3SEMA_INCREMENT_MASK)

#define DCP_CH3SEMA_VALUE_MASK                   (0xFF0000U)
#define DCP_CH3SEMA_VALUE_SHIFT                  (16U)
#define DCP_CH3SEMA_VALUE(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_CH3SEMA_VALUE_SHIFT)) & DCP_CH3SEMA_VALUE_MASK)
/*! @} */

/*! @name CH3STAT - DCP channel 3 status register */
/*! @{ */

#define DCP_CH3STAT_RSVD_COMPLETE_MASK           (0x1U)
#define DCP_CH3STAT_RSVD_COMPLETE_SHIFT          (0U)
#define DCP_CH3STAT_RSVD_COMPLETE(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_RSVD_COMPLETE_SHIFT)) & DCP_CH3STAT_RSVD_COMPLETE_MASK)

#define DCP_CH3STAT_HASH_MISMATCH_MASK           (0x2U)
#define DCP_CH3STAT_HASH_MISMATCH_SHIFT          (1U)
#define DCP_CH3STAT_HASH_MISMATCH(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_HASH_MISMATCH_SHIFT)) & DCP_CH3STAT_HASH_MISMATCH_MASK)

#define DCP_CH3STAT_ERROR_SETUP_MASK             (0x4U)
#define DCP_CH3STAT_ERROR_SETUP_SHIFT            (2U)
#define DCP_CH3STAT_ERROR_SETUP(x)               (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_SETUP_SHIFT)) & DCP_CH3STAT_ERROR_SETUP_MASK)

#define DCP_CH3STAT_ERROR_PACKET_MASK            (0x8U)
#define DCP_CH3STAT_ERROR_PACKET_SHIFT           (3U)
#define DCP_CH3STAT_ERROR_PACKET(x)              (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_PACKET_SHIFT)) & DCP_CH3STAT_ERROR_PACKET_MASK)

#define DCP_CH3STAT_ERROR_SRC_MASK               (0x10U)
#define DCP_CH3STAT_ERROR_SRC_SHIFT              (4U)
#define DCP_CH3STAT_ERROR_SRC(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_SRC_SHIFT)) & DCP_CH3STAT_ERROR_SRC_MASK)

#define DCP_CH3STAT_ERROR_DST_MASK               (0x20U)
#define DCP_CH3STAT_ERROR_DST_SHIFT              (5U)
#define DCP_CH3STAT_ERROR_DST(x)                 (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_DST_SHIFT)) & DCP_CH3STAT_ERROR_DST_MASK)

#define DCP_CH3STAT_ERROR_PAGEFAULT_MASK         (0x40U)
#define DCP_CH3STAT_ERROR_PAGEFAULT_SHIFT        (6U)
#define DCP_CH3STAT_ERROR_PAGEFAULT(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_PAGEFAULT_SHIFT)) & DCP_CH3STAT_ERROR_PAGEFAULT_MASK)

#define DCP_CH3STAT_ERROR_CODE_MASK              (0xFF0000U)
#define DCP_CH3STAT_ERROR_CODE_SHIFT             (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH3STAT_ERROR_CODE(x)                (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_ERROR_CODE_SHIFT)) & DCP_CH3STAT_ERROR_CODE_MASK)

#define DCP_CH3STAT_TAG_MASK                     (0xFF000000U)
#define DCP_CH3STAT_TAG_SHIFT                    (24U)
#define DCP_CH3STAT_TAG(x)                       (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TAG_SHIFT)) & DCP_CH3STAT_TAG_MASK)
/*! @} */

/*! @name CH3STAT_SET - DCP channel 3 status register */
/*! @{ */

#define DCP_CH3STAT_SET_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH3STAT_SET_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH3STAT_SET_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_RSVD_COMPLETE_SHIFT)) & DCP_CH3STAT_SET_RSVD_COMPLETE_MASK)

#define DCP_CH3STAT_SET_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH3STAT_SET_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH3STAT_SET_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_HASH_MISMATCH_SHIFT)) & DCP_CH3STAT_SET_HASH_MISMATCH_MASK)

#define DCP_CH3STAT_SET_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH3STAT_SET_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH3STAT_SET_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_SETUP_SHIFT)) & DCP_CH3STAT_SET_ERROR_SETUP_MASK)

#define DCP_CH3STAT_SET_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH3STAT_SET_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH3STAT_SET_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_PACKET_SHIFT)) & DCP_CH3STAT_SET_ERROR_PACKET_MASK)

#define DCP_CH3STAT_SET_ERROR_SRC_MASK           (0x10U)
#define DCP_CH3STAT_SET_ERROR_SRC_SHIFT          (4U)
#define DCP_CH3STAT_SET_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_SRC_SHIFT)) & DCP_CH3STAT_SET_ERROR_SRC_MASK)

#define DCP_CH3STAT_SET_ERROR_DST_MASK           (0x20U)
#define DCP_CH3STAT_SET_ERROR_DST_SHIFT          (5U)
#define DCP_CH3STAT_SET_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_DST_SHIFT)) & DCP_CH3STAT_SET_ERROR_DST_MASK)

#define DCP_CH3STAT_SET_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH3STAT_SET_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH3STAT_SET_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_PAGEFAULT_SHIFT)) & DCP_CH3STAT_SET_ERROR_PAGEFAULT_MASK)

#define DCP_CH3STAT_SET_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH3STAT_SET_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH3STAT_SET_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_ERROR_CODE_SHIFT)) & DCP_CH3STAT_SET_ERROR_CODE_MASK)

#define DCP_CH3STAT_SET_TAG_MASK                 (0xFF000000U)
#define DCP_CH3STAT_SET_TAG_SHIFT                (24U)
#define DCP_CH3STAT_SET_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_SET_TAG_SHIFT)) & DCP_CH3STAT_SET_TAG_MASK)
/*! @} */

/*! @name CH3STAT_CLR - DCP channel 3 status register */
/*! @{ */

#define DCP_CH3STAT_CLR_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH3STAT_CLR_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH3STAT_CLR_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_RSVD_COMPLETE_SHIFT)) & DCP_CH3STAT_CLR_RSVD_COMPLETE_MASK)

#define DCP_CH3STAT_CLR_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH3STAT_CLR_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH3STAT_CLR_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_HASH_MISMATCH_SHIFT)) & DCP_CH3STAT_CLR_HASH_MISMATCH_MASK)

#define DCP_CH3STAT_CLR_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH3STAT_CLR_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH3STAT_CLR_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_SETUP_SHIFT)) & DCP_CH3STAT_CLR_ERROR_SETUP_MASK)

#define DCP_CH3STAT_CLR_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH3STAT_CLR_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH3STAT_CLR_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_PACKET_SHIFT)) & DCP_CH3STAT_CLR_ERROR_PACKET_MASK)

#define DCP_CH3STAT_CLR_ERROR_SRC_MASK           (0x10U)
#define DCP_CH3STAT_CLR_ERROR_SRC_SHIFT          (4U)
#define DCP_CH3STAT_CLR_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_SRC_SHIFT)) & DCP_CH3STAT_CLR_ERROR_SRC_MASK)

#define DCP_CH3STAT_CLR_ERROR_DST_MASK           (0x20U)
#define DCP_CH3STAT_CLR_ERROR_DST_SHIFT          (5U)
#define DCP_CH3STAT_CLR_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_DST_SHIFT)) & DCP_CH3STAT_CLR_ERROR_DST_MASK)

#define DCP_CH3STAT_CLR_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH3STAT_CLR_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH3STAT_CLR_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_PAGEFAULT_SHIFT)) & DCP_CH3STAT_CLR_ERROR_PAGEFAULT_MASK)

#define DCP_CH3STAT_CLR_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH3STAT_CLR_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH3STAT_CLR_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_ERROR_CODE_SHIFT)) & DCP_CH3STAT_CLR_ERROR_CODE_MASK)

#define DCP_CH3STAT_CLR_TAG_MASK                 (0xFF000000U)
#define DCP_CH3STAT_CLR_TAG_SHIFT                (24U)
#define DCP_CH3STAT_CLR_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_CLR_TAG_SHIFT)) & DCP_CH3STAT_CLR_TAG_MASK)
/*! @} */

/*! @name CH3STAT_TOG - DCP channel 3 status register */
/*! @{ */

#define DCP_CH3STAT_TOG_RSVD_COMPLETE_MASK       (0x1U)
#define DCP_CH3STAT_TOG_RSVD_COMPLETE_SHIFT      (0U)
#define DCP_CH3STAT_TOG_RSVD_COMPLETE(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_RSVD_COMPLETE_SHIFT)) & DCP_CH3STAT_TOG_RSVD_COMPLETE_MASK)

#define DCP_CH3STAT_TOG_HASH_MISMATCH_MASK       (0x2U)
#define DCP_CH3STAT_TOG_HASH_MISMATCH_SHIFT      (1U)
#define DCP_CH3STAT_TOG_HASH_MISMATCH(x)         (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_HASH_MISMATCH_SHIFT)) & DCP_CH3STAT_TOG_HASH_MISMATCH_MASK)

#define DCP_CH3STAT_TOG_ERROR_SETUP_MASK         (0x4U)
#define DCP_CH3STAT_TOG_ERROR_SETUP_SHIFT        (2U)
#define DCP_CH3STAT_TOG_ERROR_SETUP(x)           (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_SETUP_SHIFT)) & DCP_CH3STAT_TOG_ERROR_SETUP_MASK)

#define DCP_CH3STAT_TOG_ERROR_PACKET_MASK        (0x8U)
#define DCP_CH3STAT_TOG_ERROR_PACKET_SHIFT       (3U)
#define DCP_CH3STAT_TOG_ERROR_PACKET(x)          (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_PACKET_SHIFT)) & DCP_CH3STAT_TOG_ERROR_PACKET_MASK)

#define DCP_CH3STAT_TOG_ERROR_SRC_MASK           (0x10U)
#define DCP_CH3STAT_TOG_ERROR_SRC_SHIFT          (4U)
#define DCP_CH3STAT_TOG_ERROR_SRC(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_SRC_SHIFT)) & DCP_CH3STAT_TOG_ERROR_SRC_MASK)

#define DCP_CH3STAT_TOG_ERROR_DST_MASK           (0x20U)
#define DCP_CH3STAT_TOG_ERROR_DST_SHIFT          (5U)
#define DCP_CH3STAT_TOG_ERROR_DST(x)             (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_DST_SHIFT)) & DCP_CH3STAT_TOG_ERROR_DST_MASK)

#define DCP_CH3STAT_TOG_ERROR_PAGEFAULT_MASK     (0x40U)
#define DCP_CH3STAT_TOG_ERROR_PAGEFAULT_SHIFT    (6U)
#define DCP_CH3STAT_TOG_ERROR_PAGEFAULT(x)       (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_PAGEFAULT_SHIFT)) & DCP_CH3STAT_TOG_ERROR_PAGEFAULT_MASK)

#define DCP_CH3STAT_TOG_ERROR_CODE_MASK          (0xFF0000U)
#define DCP_CH3STAT_TOG_ERROR_CODE_SHIFT         (16U)
/*! ERROR_CODE
 *  0b00000001..Error is signalled because the next pointer is 0x00000000.
 *  0b00000010..Error is signalled because the semaphore is of a non-zero value and neither of the chain bits is set.
 *  0b00000011..Error is signalled because an error was reported while reading/writing the context buffer.
 *  0b00000100..Error is signalled because an error was reported while reading/writing the payload.
 *  0b00000101..Error is signalled because the control packet specifies an invalid mode select (for example, blit + hash).
 */
#define DCP_CH3STAT_TOG_ERROR_CODE(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_ERROR_CODE_SHIFT)) & DCP_CH3STAT_TOG_ERROR_CODE_MASK)

#define DCP_CH3STAT_TOG_TAG_MASK                 (0xFF000000U)
#define DCP_CH3STAT_TOG_TAG_SHIFT                (24U)
#define DCP_CH3STAT_TOG_TAG(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_CH3STAT_TOG_TAG_SHIFT)) & DCP_CH3STAT_TOG_TAG_MASK)
/*! @} */

/*! @name CH3OPTS - DCP channel 3 options register */
/*! @{ */

#define DCP_CH3OPTS_RECOVERY_TIMER_MASK          (0xFFFFU)
#define DCP_CH3OPTS_RECOVERY_TIMER_SHIFT         (0U)
#define DCP_CH3OPTS_RECOVERY_TIMER(x)            (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_RECOVERY_TIMER_SHIFT)) & DCP_CH3OPTS_RECOVERY_TIMER_MASK)

#define DCP_CH3OPTS_RSVD_MASK                    (0xFFFF0000U)
#define DCP_CH3OPTS_RSVD_SHIFT                   (16U)
#define DCP_CH3OPTS_RSVD(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_RSVD_SHIFT)) & DCP_CH3OPTS_RSVD_MASK)
/*! @} */

/*! @name CH3OPTS_SET - DCP channel 3 options register */
/*! @{ */

#define DCP_CH3OPTS_SET_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH3OPTS_SET_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH3OPTS_SET_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_SET_RECOVERY_TIMER_SHIFT)) & DCP_CH3OPTS_SET_RECOVERY_TIMER_MASK)

#define DCP_CH3OPTS_SET_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH3OPTS_SET_RSVD_SHIFT               (16U)
#define DCP_CH3OPTS_SET_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_SET_RSVD_SHIFT)) & DCP_CH3OPTS_SET_RSVD_MASK)
/*! @} */

/*! @name CH3OPTS_CLR - DCP channel 3 options register */
/*! @{ */

#define DCP_CH3OPTS_CLR_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH3OPTS_CLR_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH3OPTS_CLR_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_CLR_RECOVERY_TIMER_SHIFT)) & DCP_CH3OPTS_CLR_RECOVERY_TIMER_MASK)

#define DCP_CH3OPTS_CLR_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH3OPTS_CLR_RSVD_SHIFT               (16U)
#define DCP_CH3OPTS_CLR_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_CLR_RSVD_SHIFT)) & DCP_CH3OPTS_CLR_RSVD_MASK)
/*! @} */

/*! @name CH3OPTS_TOG - DCP channel 3 options register */
/*! @{ */

#define DCP_CH3OPTS_TOG_RECOVERY_TIMER_MASK      (0xFFFFU)
#define DCP_CH3OPTS_TOG_RECOVERY_TIMER_SHIFT     (0U)
#define DCP_CH3OPTS_TOG_RECOVERY_TIMER(x)        (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_TOG_RECOVERY_TIMER_SHIFT)) & DCP_CH3OPTS_TOG_RECOVERY_TIMER_MASK)

#define DCP_CH3OPTS_TOG_RSVD_MASK                (0xFFFF0000U)
#define DCP_CH3OPTS_TOG_RSVD_SHIFT               (16U)
#define DCP_CH3OPTS_TOG_RSVD(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_CH3OPTS_TOG_RSVD_SHIFT)) & DCP_CH3OPTS_TOG_RSVD_MASK)
/*! @} */

/*! @name DBGSELECT - DCP debug select register */
/*! @{ */

#define DCP_DBGSELECT_INDEX_MASK                 (0xFFU)
#define DCP_DBGSELECT_INDEX_SHIFT                (0U)
/*! INDEX
 *  0b00000001..CONTROL
 *  0b00010000..OTPKEY0
 *  0b00010001..OTPKEY1
 *  0b00010010..OTPKEY2
 *  0b00010011..OTPKEY3
 */
#define DCP_DBGSELECT_INDEX(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_DBGSELECT_INDEX_SHIFT)) & DCP_DBGSELECT_INDEX_MASK)

#define DCP_DBGSELECT_RSVD_MASK                  (0xFFFFFF00U)
#define DCP_DBGSELECT_RSVD_SHIFT                 (8U)
#define DCP_DBGSELECT_RSVD(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_DBGSELECT_RSVD_SHIFT)) & DCP_DBGSELECT_RSVD_MASK)
/*! @} */

/*! @name DBGDATA - DCP debug data register */
/*! @{ */

#define DCP_DBGDATA_DATA_MASK                    (0xFFFFFFFFU)
#define DCP_DBGDATA_DATA_SHIFT                   (0U)
#define DCP_DBGDATA_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_DBGDATA_DATA_SHIFT)) & DCP_DBGDATA_DATA_MASK)
/*! @} */

/*! @name PAGETABLE - DCP page table register */
/*! @{ */

#define DCP_PAGETABLE_ENABLE_MASK                (0x1U)
#define DCP_PAGETABLE_ENABLE_SHIFT               (0U)
#define DCP_PAGETABLE_ENABLE(x)                  (((uint32_t)(((uint32_t)(x)) << DCP_PAGETABLE_ENABLE_SHIFT)) & DCP_PAGETABLE_ENABLE_MASK)

#define DCP_PAGETABLE_FLUSH_MASK                 (0x2U)
#define DCP_PAGETABLE_FLUSH_SHIFT                (1U)
#define DCP_PAGETABLE_FLUSH(x)                   (((uint32_t)(((uint32_t)(x)) << DCP_PAGETABLE_FLUSH_SHIFT)) & DCP_PAGETABLE_FLUSH_MASK)

#define DCP_PAGETABLE_BASE_MASK                  (0xFFFFFFFCU)
#define DCP_PAGETABLE_BASE_SHIFT                 (2U)
#define DCP_PAGETABLE_BASE(x)                    (((uint32_t)(((uint32_t)(x)) << DCP_PAGETABLE_BASE_SHIFT)) & DCP_PAGETABLE_BASE_MASK)
/*! @} */

/*! @name VERSION - DCP version register */
/*! @{ */

#define DCP_VERSION_STEP_MASK                    (0xFFFFU)
#define DCP_VERSION_STEP_SHIFT                   (0U)
#define DCP_VERSION_STEP(x)                      (((uint32_t)(((uint32_t)(x)) << DCP_VERSION_STEP_SHIFT)) & DCP_VERSION_STEP_MASK)

#define DCP_VERSION_MINOR_MASK                   (0xFF0000U)
#define DCP_VERSION_MINOR_SHIFT                  (16U)
#define DCP_VERSION_MINOR(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_VERSION_MINOR_SHIFT)) & DCP_VERSION_MINOR_MASK)

#define DCP_VERSION_MAJOR_MASK                   (0xFF000000U)
#define DCP_VERSION_MAJOR_SHIFT                  (24U)
#define DCP_VERSION_MAJOR(x)                     (((uint32_t)(((uint32_t)(x)) << DCP_VERSION_MAJOR_SHIFT)) & DCP_VERSION_MAJOR_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DCP_Register_Masks */



/*!
 * @}
 */ /* end of group CCM_Register_Masks */


#endif

