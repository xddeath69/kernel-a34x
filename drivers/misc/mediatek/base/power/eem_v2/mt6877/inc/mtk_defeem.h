/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/

#ifndef _MTK_DEFEEM_
#define _MTK_DEFEEM_

#include <linux/kernel.h>
#define USE_EEMSN_PHYSICAL_ADDR	(1) /* set 0 for debug log */

extern void __iomem *eem_base;
#define EEM_BASEADDR eem_base
#define EEM_TEMPSPARE0		(EEM_BASEADDR + 0x8F0)

#define EEMSN_CSRAM_BASE	0x0011BC00  /* EB View:0x0011BC00 */
#define OFFS_SN_VOLT_S_4B	(EEMSN_CSRAM_BASE + 0x0250) /* 148 */
#define OFFS_SN_VOLT_E_4B	(EEMSN_CSRAM_BASE + 0x029C) /* 167 */

#if USE_EEMSN_PHYSICAL_ADDR
#define SN_BASEADDR             0x0C560000
#else
#define SN_BASEADDR             0x02000000
#endif


#define SN_CPEMONCTL            (SN_BASEADDR + 0xB00)
#define SN_CPEEN                (SN_BASEADDR + 0xB04)
#define SN_COMPAREDVOP          (SN_BASEADDR + 0xB08)
#define SN_CPEVMIN1T0           (SN_BASEADDR + 0xB0C)
#define SN_CPEVMIN3T2           (SN_BASEADDR + 0xB10)
#define SN_CPEVMIN5T4           (SN_BASEADDR + 0xB14)
#define SN_CPEVMIN7T6           (SN_BASEADDR + 0xB18)
#define SN_CPEIRQSTS            (SN_BASEADDR + 0xB1C)
#define SN_BCPUVMAXVMINOPP0     (SN_BASEADDR + 0xB20)
#define SN_LCPUVMAXVMINOPP0     (SN_BASEADDR + 0xB24)
#define SN_CPEINTSTS            (SN_BASEADDR + 0xB2C)
#define SN_CPEINTEN             (SN_BASEADDR + 0xB30)
#define SN_CPEINTSTSRAW         (SN_BASEADDR + 0xB34)
#define SN_CPECALSTS            (SN_BASEADDR + 0xB38)
#define SN_CPECALFSMSTSCORE01   (SN_BASEADDR + 0xB3C)
#define SN_CPECALFSMSTSCORE23   (SN_BASEADDR + 0xB40)
#define SN_CPECALFSMSTSCORE45   (SN_BASEADDR + 0xB44)
#define SN_CPECALFSMSTSCORE67   (SN_BASEADDR + 0xB48)

#define SN_C0ASENSORDATA        (SN_BASEADDR + 0xC00)
#define SN_C0TSENSORDATA        (SN_BASEADDR + 0xC04)
#define SN_C0VSENSORMINDATA0    (SN_BASEADDR + 0xC08)
#define SN_C0VSENSORMINDATA1    (SN_BASEADDR + 0xC0C)
#define SN_C0VSENSORMAXDATA0    (SN_BASEADDR + 0xC10)
#define SN_C0VSENSORMAXDATA1    (SN_BASEADDR + 0xC14)
#define SN_C0PSESNORDATA0       (SN_BASEADDR + 0xC18)
#define SN_C0PSESNORDATA1       (SN_BASEADDR + 0xC1C)
#define SN_C1ASENSORDATA        (SN_BASEADDR + 0xC20)
#define SN_C1TSENSORDATA        (SN_BASEADDR + 0xC24)
#define SN_C1VSENSORMINDATA0    (SN_BASEADDR + 0xC28)
#define SN_C1VSENSORMINDATA1    (SN_BASEADDR + 0xC2C)
#define SN_C1VSENSORMAXDATA0    (SN_BASEADDR + 0xC30)
#define SN_C1VSENSORMAXDATA1    (SN_BASEADDR + 0xC34)
#define SN_C1PSESNORDATA0       (SN_BASEADDR + 0xC38)
#define SN_C1PSESNORDATA1       (SN_BASEADDR + 0xC3C)
#define SN_C2ASENSORDATA        (SN_BASEADDR + 0xC40)
#define SN_C2TSENSORDATA        (SN_BASEADDR + 0xC44)
#define SN_C2VSENSORMINDATA0    (SN_BASEADDR + 0xC48)
#define SN_C2VSENSORMINDATA1    (SN_BASEADDR + 0xC4C)
#define SN_C2VSENSORMAXDATA0    (SN_BASEADDR + 0xC50)
#define SN_C2VSENSORMAXDATA1    (SN_BASEADDR + 0xC54)
#define SN_C2PSESNORDATA0       (SN_BASEADDR + 0xC58)
#define SN_C2PSESNORDATA1       (SN_BASEADDR + 0xC5C)
#define SN_C3ASENSORDATA        (SN_BASEADDR + 0xC60)
#define SN_C3TSENSORDATA        (SN_BASEADDR + 0xC64)
#define SN_C3VSENSORMINDATA0    (SN_BASEADDR + 0xC68)
#define SN_C3VSENSORMINDATA1    (SN_BASEADDR + 0xC6C)
#define SN_C3VSENSORMAXDATA0    (SN_BASEADDR + 0xC70)
#define SN_C3VSENSORMAXDATA1    (SN_BASEADDR + 0xC74)
#define SN_C3PSESNORDATA0       (SN_BASEADDR + 0xC78)
#define SN_C3PSESNORDATA1       (SN_BASEADDR + 0xC7C)
#define SN_C4ASENSORDATA        (SN_BASEADDR + 0xC80)
#define SN_C4TSENSORDATA        (SN_BASEADDR + 0xC84)
#define SN_C4VSENSORMINDATA0    (SN_BASEADDR + 0xC88)
#define SN_C4VSENSORMINDATA1    (SN_BASEADDR + 0xC8C)
#define SN_C4VSENSORMAXDATA0    (SN_BASEADDR + 0xC90)
#define SN_C4VSENSORMAXDATA1    (SN_BASEADDR + 0xC94)
#define SN_C4PSESNORDATA0       (SN_BASEADDR + 0xC98)
#define SN_C4PSESNORDATA1       (SN_BASEADDR + 0xC9C)
#define SN_C5ASENSORDATA        (SN_BASEADDR + 0xCA0)
#define SN_C5TSENSORDATA        (SN_BASEADDR + 0xCA4)
#define SN_C5VSENSORMINDATA0    (SN_BASEADDR + 0xCA8)
#define SN_C5VSENSORMINDATA1    (SN_BASEADDR + 0xCAC)
#define SN_C5VSENSORMAXDATA0    (SN_BASEADDR + 0xCB0)
#define SN_C5VSENSORMAXDATA1    (SN_BASEADDR + 0xCB4)
#define SN_C5PSESNORDATA0       (SN_BASEADDR + 0xCB8)
#define SN_C5PSESNORDATA1       (SN_BASEADDR + 0xCBC)
#define SN_C6ASENSORDATA        (SN_BASEADDR + 0xCC0)
#define SN_C6TSENSORDATA        (SN_BASEADDR + 0xCC4)
#define SN_C6VSENSORMINDATA0    (SN_BASEADDR + 0xCC8)
#define SN_C6VSENSORMINDATA1    (SN_BASEADDR + 0xCCC)
#define SN_C6VSENSORMAXDATA0    (SN_BASEADDR + 0xCD0)
#define SN_C6VSENSORMAXDATA1    (SN_BASEADDR + 0xCD4)
#define SN_C6PSESNORDATA0       (SN_BASEADDR + 0xCD8)
#define SN_C6PSESNORDATA1       (SN_BASEADDR + 0xCDC)
#define SN_C7ASENSORDATA        (SN_BASEADDR + 0xCE0)
#define SN_C7TSENSORDATA        (SN_BASEADDR + 0xCE4)
#define SN_C7VSENSORMINDATA0    (SN_BASEADDR + 0xCE8)
#define SN_C7VSENSORMINDATA1    (SN_BASEADDR + 0xCEC)
#define SN_C7VSENSORMAXDATA0    (SN_BASEADDR + 0xCF0)
#define SN_C7VSENSORMAXDATA1    (SN_BASEADDR + 0xCF4)
#define SN_C7PSESNORDATA0       (SN_BASEADDR + 0xCF8)
#define SN_C7PSESNORDATA1       (SN_BASEADDR + 0xCFC)

#define SN_LCPUAGINGCOEF0       (SN_BASEADDR + 0xD00)
#define SN_LCPUAGINGCOEF1       (SN_BASEADDR + 0xD04)
#define SN_LCPUAGINGCOEF2       (SN_BASEADDR + 0xD08)
#define SN_LCPUTEMPCOEF0        (SN_BASEADDR + 0xD0C)
#define SN_LCPUTEMPCOEF1        (SN_BASEADDR + 0xD10)
#define SN_LCPUTEMPCOEF2        (SN_BASEADDR + 0xD14)
#define SN_LCPUVOLTCOEF0        (SN_BASEADDR + 0xD18)
#define SN_LCPUVOLTCOEF1        (SN_BASEADDR + 0xD1C)
#define SN_LCPUVOLTCOEF2        (SN_BASEADDR + 0xD20)
#define SN_LCPUVOLTCOEF3        (SN_BASEADDR + 0xD24)
#define SN_LCPUVOLTCOEF4        (SN_BASEADDR + 0xD28)
#define SN_LCPUVOLTCOEF5        (SN_BASEADDR + 0xD2C)
#define SN_LCPUVOLTCOEF6        (SN_BASEADDR + 0xD30)
#define SN_LCPUVOLTCOEF7        (SN_BASEADDR + 0xD34)
#define SN_LCPUPROCESSCOEF0     (SN_BASEADDR + 0xD38)
#define SN_LCPUPROCESSCOEF1     (SN_BASEADDR + 0xD3C)
#define SN_LCPUPROCESSCOEF2     (SN_BASEADDR + 0xD40)
#define SN_LCPUPROCESSCOEF3     (SN_BASEADDR + 0xD44)
#define SN_LCPUPROCESSCOEF4     (SN_BASEADDR + 0xD48)
#define SN_LCPUPROCESSCOEF5     (SN_BASEADDR + 0xD4C)
#define SN_LCPUPROCESSCOEF6     (SN_BASEADDR + 0xD50)
#define SN_LCPUPROCESSCOEF7     (SN_BASEADDR + 0xD54)
#define SN_LCPUPROCESSCOEF8     (SN_BASEADDR + 0xD58)
#define SN_LCPUPROCESSCOEF9     (SN_BASEADDR + 0xD5C)
#define SN_LCPUPROCESSCOEF10    (SN_BASEADDR + 0xD60)
#define SN_LCPUPROCESSCOEF11    (SN_BASEADDR + 0xD64)
#define SN_LCPUPROCESSCOEF12    (SN_BASEADDR + 0xD68)
#define SN_LCPUPROCESSCOEF13    (SN_BASEADDR + 0xD6C)
#define SN_LCPUPROCESSCOEF14    (SN_BASEADDR + 0xD70)
#define SN_LCPUPROCESSCOEF15    (SN_BASEADDR + 0xD74)
#define SN_LCPUPROCESSCOEF16    (SN_BASEADDR + 0xD78)
#define SN_LCPUPROCESSCOEF17    (SN_BASEADDR + 0xD7C)
#define SN_LCPUPROCESSCOEF18    (SN_BASEADDR + 0xD80)
#define SN_LCPUPROCESSCOEF19    (SN_BASEADDR + 0xD84)
#define SN_LCPUPROCESSCOEF20    (SN_BASEADDR + 0xD88)
#define SN_LCPUPROCESSCOEF21    (SN_BASEADDR + 0xD8C)
#define SN_LCPUPROCESSCOEF22    (SN_BASEADDR + 0xD90)
#define SN_LCPUPROCESSCOEF23    (SN_BASEADDR + 0xD94)
#define SN_LCPUPROCESSCOEF24    (SN_BASEADDR + 0xD98)
#define SN_LCPUPROCESSCOEF25    (SN_BASEADDR + 0xD9C)
#define SN_LCPUPROCESSCOEF26    (SN_BASEADDR + 0xDA0)
#define SN_LCPUPROCESSCOEF27    (SN_BASEADDR + 0xDA4)
#define SN_LCPUPROCESSCOEF28    (SN_BASEADDR + 0xDA8)
#define SN_LCPUPROCESSCOEF29    (SN_BASEADDR + 0xDAC)
#define SN_LCPUPROCESSCOEF30    (SN_BASEADDR + 0xDB0)
#define SN_LCPUPROCESSCOEF31    (SN_BASEADDR + 0xDB4)
#define SN_LCPUPROCESSCOEF32    (SN_BASEADDR + 0xDB8)
#define SN_LCPUPROCESSCOEF33    (SN_BASEADDR + 0xDBC)
#define SN_LCPUPROCESSCOEF34    (SN_BASEADDR + 0xDC0)
#define SN_LCPUPROCESSCOEF35    (SN_BASEADDR + 0xDC4)
#define SN_LCPUPROCESSCOEF36    (SN_BASEADDR + 0xDC8)
#define SN_LCPUINTERCEPTION0    (SN_BASEADDR + 0xDCC)
#define SN_LCPUINTERCEPTION1    (SN_BASEADDR + 0xDD0)
/* SN_LCPUINTERCEPTION1 = LCPUINTERCEPTION1WLCPUVOLTCOEF */

#define SN_BCPUAGINGCOEF0       (SN_BASEADDR + 0xE00)
#define SN_BCPUAGINGCOEF1       (SN_BASEADDR + 0xE04)
#define SN_BCPUAGINGCOEF2       (SN_BASEADDR + 0xE08)
#define SN_BCPUTEMPCOEF0        (SN_BASEADDR + 0xE0C)
#define SN_BCPUTEMPCOEF1        (SN_BASEADDR + 0xE10)
#define SN_BCPUTEMPCOEF2        (SN_BASEADDR + 0xE14)
#define SN_BCPUVOLTCOEF0        (SN_BASEADDR + 0xE18)
#define SN_BCPUVOLTCOEF1        (SN_BASEADDR + 0xE1C)
#define SN_BCPUVOLTCOEF2        (SN_BASEADDR + 0xE20)
#define SN_BCPUVOLTCOEF3        (SN_BASEADDR + 0xE24)
#define SN_BCPUVOLTCOEF4        (SN_BASEADDR + 0xE28)
#define SN_BCPUVOLTCOEF5        (SN_BASEADDR + 0xE2C)
#define SN_BCPUVOLTCOEF6        (SN_BASEADDR + 0xE30)
#define SN_BCPUVOLTCOEF7        (SN_BASEADDR + 0xE34)
#define SN_BCPUPROCESSCOEF0     (SN_BASEADDR + 0xE38)
#define SN_BCPUPROCESSCOEF1     (SN_BASEADDR + 0xE3C)
#define SN_BCPUPROCESSCOEF2     (SN_BASEADDR + 0xE40)
#define SN_BCPUPROCESSCOEF3     (SN_BASEADDR + 0xE44)
#define SN_BCPUPROCESSCOEF4     (SN_BASEADDR + 0xE48)
#define SN_BCPUPROCESSCOEF5     (SN_BASEADDR + 0xE4C)
#define SN_BCPUPROCESSCOEF6     (SN_BASEADDR + 0xE50)
#define SN_BCPUPROCESSCOEF7     (SN_BASEADDR + 0xE54)
#define SN_BCPUPROCESSCOEF8     (SN_BASEADDR + 0xE58)
#define SN_BCPUPROCESSCOEF9     (SN_BASEADDR + 0xE5C)
#define SN_BCPUPROCESSCOEF10    (SN_BASEADDR + 0xE60)
#define SN_BCPUPROCESSCOEF11    (SN_BASEADDR + 0xE64)
#define SN_BCPUPROCESSCOEF12    (SN_BASEADDR + 0xE68)
#define SN_BCPUPROCESSCOEF13    (SN_BASEADDR + 0xE6C)
#define SN_BCPUPROCESSCOEF14    (SN_BASEADDR + 0xE70)
#define SN_BCPUPROCESSCOEF15    (SN_BASEADDR + 0xE74)
#define SN_BCPUPROCESSCOEF16    (SN_BASEADDR + 0xE78)
#define SN_BCPUPROCESSCOEF17    (SN_BASEADDR + 0xE7C)
#define SN_BCPUPROCESSCOEF18    (SN_BASEADDR + 0xE80)
#define SN_BCPUPROCESSCOEF19    (SN_BASEADDR + 0xE84)
#define SN_BCPUPROCESSCOEF20    (SN_BASEADDR + 0xE88)
#define SN_BCPUPROCESSCOEF21    (SN_BASEADDR + 0xE8C)
#define SN_BCPUPROCESSCOEF22    (SN_BASEADDR + 0xE90)
#define SN_BCPUPROCESSCOEF23    (SN_BASEADDR + 0xE94)
#define SN_BCPUPROCESSCOEF24    (SN_BASEADDR + 0xE98)
#define SN_BCPUPROCESSCOEF25    (SN_BASEADDR + 0xE9C)
#define SN_BCPUPROCESSCOEF26    (SN_BASEADDR + 0xEA0)
#define SN_BCPUPROCESSCOEF27    (SN_BASEADDR + 0xEA4)
#define SN_BCPUPROCESSCOEF28    (SN_BASEADDR + 0xEA8)
#define SN_BCPUPROCESSCOEF29    (SN_BASEADDR + 0xEAC)
#define SN_BCPUPROCESSCOEF30    (SN_BASEADDR + 0xEB0)
#define SN_BCPUPROCESSCOEF31    (SN_BASEADDR + 0xEB4)
#define SN_BCPUPROCESSCOEF32    (SN_BASEADDR + 0xEB8)
#define SN_BCPUPROCESSCOEF33    (SN_BASEADDR + 0xEBC)
#define SN_BCPUPROCESSCOEF34    (SN_BASEADDR + 0xEC0)
#define SN_BCPUPROCESSCOEF35    (SN_BASEADDR + 0xEC4)
#define SN_BCPUPROCESSCOEF36    (SN_BASEADDR + 0xEC8)
#define SN_BCPUINTERCEPTION0    (SN_BASEADDR + 0xECC)
#define SN_BCPUINTERCEPTION1    (SN_BASEADDR + 0xED0)
/* SN_BCPUINTERCEPTION1 = BCPUINTERCEPTION1WBCPUVOLTCOEF */

#define PSESN32T35_OFFSET		0x640
#define ASESN_ULVT_OFFSET			0x670
#if USE_EEMSN_PHYSICAL_ADDR
#define MCUSYS_CPU0_BASEADDR             0x0C530000
#define MCUSYS_CPU1_BASEADDR             0x0C530800
#define MCUSYS_CPU2_BASEADDR             0x0C531000
#define MCUSYS_CPU3_BASEADDR             0x0C531800
#define MCUSYS_CPU4_BASEADDR             0x0C532000
#define MCUSYS_CPU5_BASEADDR             0x0C532800
#define MCUSYS_CPU6_BASEADDR             0x0C533000
#define MCUSYS_CPU7_BASEADDR             0x0C533800
#else
#define MCUSYS_CPU0_BASEADDR             0x03000000
#define MCUSYS_CPU1_BASEADDR             0x03000800
#define MCUSYS_CPU2_BASEADDR             0x03001000
#define MCUSYS_CPU3_BASEADDR             0x03001800
#define MCUSYS_CPU4_BASEADDR             0x03002000
#define MCUSYS_CPU5_BASEADDR             0x03002800
#define MCUSYS_CPU6_BASEADDR             0x03003000
#define MCUSYS_CPU7_BASEADDR             0x03003800
#endif

#endif
