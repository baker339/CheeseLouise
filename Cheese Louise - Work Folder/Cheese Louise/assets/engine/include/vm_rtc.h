#ifndef _VM_RTC_H_INCLUDE
#define _VM_RTC_H_INCLUDE

#include <gb/gb.h>

#include "vm.h"

void vm_rtc_latch() OLDCALL __banked;
void vm_rtc_get(SCRIPT_CTX * THIS, INT16 idx, UBYTE what) OLDCALL __banked;
void vm_rtc_set(SCRIPT_CTX * THIS, INT16 idx, UBYTE what) OLDCALL __banked;
void vm_rtc_start(SCRIPT_CTX * THIS, UBYTE start) OLDCALL __banked;

#endif