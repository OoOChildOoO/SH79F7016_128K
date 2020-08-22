/*
 * @Description: 固件库定义
 * @Author: XPH
 * @Date: 2019-09-13 16:52:45
 * @LastEditTime: 2020-04-16 13:32:42
 * @LastEditors: Please set LastEditors
 */
#ifndef __REG_IT_H
#define __REG_IT_H
#include "SH79F7016.h"
#include "basic_api.h"
#include "define.h"

#include <intrins.h>
#include <string.h>
#include <ABSACC.H >
#include <math.h>

sfr IE    = 0xA8;

//P2端口寄存器输出高低电平定义
#define P20_H()   P2 |= 0x01
#define P20_L()   P2 &= ~0x01
#define P21_H()   P2 |= 0x02
#define P21_L()   P2 &= ~0x02
#define P22_H()   P2 |= 0x04
#define P22_L()   P2 &= ~0x04
#define P23_H()   P2 |= 0x08
#define P23_L()   P2 &= ~0x08
#define P24_H()   P2 |= 0x10
#define P24_L()   P2 &= ~0x10
#define P25_H()   P2 |= 0x20
#define P25_L()   P2 &= ~0x20
#define P26_H()   P2 |= 0x40
#define P26_L()   P2 &= ~0x40
#define P27_H()   P2 |= 0x80
#define P27_L()   P2 &= ~0x80

//P8端口寄存器输出高低电平定义
#define P80_H()   P8 |= 0x01
#define P80_L()   P8 &= ~0x01
#define P81_H()   P8 |= 0x02
#define P81_L()   P8 &= ~0x02
#define P82_H()   P8 |= 0x04
#define P82_L()   P8 &= ~0x04
#define P83_H()   P8 |= 0x08
#define P83_L()   P8 &= ~0x08
#define P84_H()   P8 |= 0x10
#define P84_L()   P8 &= ~0x10
#define P85_H()   P8 |= 0x20
#define P85_L()   P8 &= ~0x20
#define P86_H()   P8 |= 0x40
#define P86_L()   P8 &= ~0x40
#define P87_H()   P8 |= 0x80
#define P87_L()   P8 &= ~0x80

//P9端口寄存器输出高低电平定义
#define P90_H()   P9 |= 0x01
#define P90_L()   P9 &= ~0x01
#define P91_H()   P9 |= 0x02
#define P91_L()   P9 &= ~0x02
#define P92_H()   P9 |= 0x04
#define P92_L()   P9 &= ~0x04
#define P93_H()   P9 |= 0x08
#define P93_L()   P9 &= ~0x08
#define P94_H()   P9 |= 0x10
#define P94_L()   P9 &= ~0x10
#define P95_H()   P9 |= 0x20
#define P95_L()   P9 &= ~0x20
#define P96_H()   P9 |= 0x40
#define P96_L()   P9 &= ~0x40
#define P97_H()   P9 |= 0x80
#define P97_L()   P9 &= ~0x80

//P10端口寄存器输出高低电平定义
#define P100_H()   P10 |= 0x01
#define P100_L()   P10 &= ~0x01
#define P101_H()   P10 |= 0x02
#define P101_L()   P10 &= ~0x02
#define P102_H()   P10 |= 0x04
#define P102_L()   P10 &= ~0x04
#define P103_H()   P10 |= 0x08
#define P103_L()   P10 &= ~0x08
#define P104_H()   P10 |= 0x10
#define P104_L()   P10 &= ~0x10
#define P105_H()   P10 |= 0x20
#define P105_L()   P10 &= ~0x20
#define P106_H()   P10 |= 0x40
#define P106_L()   P10 &= ~0x40
#define P107_H()   P10 |= 0x80
#define P107_L()   P10 &= ~0x80

sbit P_FSENSOR = P3 ^ 4; //灯
sbit P_MSENSOR = P3 ^ 3;
sbit P_BSENSOR = P3 ^ 2;
// 宝宇双色灯
sbit P_POWER = P3 ^ 1;
sbit P_EXCEPTION = P3 ^ 0;

sbit KEY_RESET = P7 ^ 0;

#endif
