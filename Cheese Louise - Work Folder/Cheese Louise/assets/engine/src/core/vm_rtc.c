#pragma bank 2

#include "vm_math.h"

#include "vm.h"

#include "rtc.h"

void vm_rtc_latch() OLDCALL __banked {
    RTC_LATCH();
}

void vm_rtc_get(SCRIPT_CTX * THIS, INT16 idx, UBYTE what) OLDCALL __banked {
    INT16 * res = VM_REF_TO_PTR(idx);
    *res = RTC_GET((rtc_dateparts_e)((what & 0x03) + RTC_VALUE_SEC));
}

void vm_rtc_set(SCRIPT_CTX * THIS, INT16 idx, UBYTE what) OLDCALL __banked {
    INT16 * res = VM_REF_TO_PTR(idx);
    RTC_SET((rtc_dateparts_e)((what & 0x03) + RTC_VALUE_SEC), (UWORD)*res);
}

void vm_rtc_start(SCRIPT_CTX * THIS, UBYTE start) OLDCALL __banked {
    THIS;
    RTC_START(start);
}
