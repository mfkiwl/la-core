#define INSN_NAME vcage
#define TEST_MSG "VCAGE/VCAGEQ"

#include "cmp_fp_op.inc"

/* Expected results.  */
VECT_VAR_DECL(expected,uint,32,2) [] = { 0xffffffff, 0x0 };
VECT_VAR_DECL(expected,uint,32,4) [] = { 0xffffffff, 0xffffffff,
					 0xffffffff, 0x0 };

VECT_VAR_DECL(expected2,uint,32,2) [] = { 0xffffffff, 0xffffffff };
VECT_VAR_DECL(expected2,uint,32,4) [] = { 0xffffffff, 0xffffffff,
					  0xffffffff, 0xffffffff };
