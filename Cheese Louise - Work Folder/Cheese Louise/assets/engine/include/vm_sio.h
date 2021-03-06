#ifndef _VM_SIO_H_INCLUDE
#define _VM_SIO_H_INCLUDE

#include <gb/gb.h>

#include "vm.h"

void vm_sio_set_mode(SCRIPT_CTX * THIS, UBYTE mode) OLDCALL __banked;
void vm_sio_exchange(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB, UBYTE len) OLDCALL __banked;

#endif