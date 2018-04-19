/* ---------------------------------------------------------------------------- */
/*                  Atmel Microcontroller Software Support                      */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) 2014, Atmel Corporation                                        */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Atmel's name may not be used to endorse or promote products derived from     */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR   */
/* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE   */
/* DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,      */
/* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,  */
/* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    */
/* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING         */
/* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, */
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                           */
/* ---------------------------------------------------------------------------- */

#ifndef _SAMG55_FLEXCOM0_INSTANCE_
#define _SAMG55_FLEXCOM0_INSTANCE_

/* ========== Register definition for FLEXCOM0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_FLEXCOM0_MR                   (0x4000C000U) /**< \brief (FLEXCOM0) FLEXCOM Mode register */
  #define REG_FLEXCOM0_RHR                  (0x4000C010U) /**< \brief (FLEXCOM0) FLEXCOM Receive Holding Register */
  #define REG_FLEXCOM0_THR                  (0x4000C020U) /**< \brief (FLEXCOM0) FLEXCOM Transmit Holding Register */
#else
  #define REG_FLEXCOM0_MR  (*(__IO uint32_t*)0x4000C000U) /**< \brief (FLEXCOM0) FLEXCOM Mode register */
  #define REG_FLEXCOM0_RHR (*(__I  uint32_t*)0x4000C010U) /**< \brief (FLEXCOM0) FLEXCOM Receive Holding Register */
  #define REG_FLEXCOM0_THR (*(__IO uint32_t*)0x4000C020U) /**< \brief (FLEXCOM0) FLEXCOM Transmit Holding Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMG55_FLEXCOM0_INSTANCE_ */
