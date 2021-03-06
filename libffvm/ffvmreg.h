#ifndef __FFVMREG_H__
#define __FFVMREG_H__

#define REG_FFVM_STDIO  ((volatile uint32_t*)0xF0000000)
#define REG_FFVM_STDERR ((volatile uint32_t*)0xF0000004)
#define REG_FFVM_GETCH  ((volatile uint32_t*)0xF0000008)
#define REG_FFVM_KBHIT  ((volatile uint32_t*)0xF000000C)

#define REG_FFVM_MSLEEP ((volatile uint32_t*)0xF0000100)
#define REG_FFVM_CLRSCR ((volatile uint32_t*)0xF0000104)
#define REG_FFVM_GOTOXY ((volatile uint32_t*)0xF0000108)

#endif
