/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1701766277_4_
#define _BUR_1701766277_4_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit enable;
_BUR_LOCAL float e;
_BUR_LOCAL float speed;
_BUR_LOCAL unsigned char counter;
_BUR_LOCAL struct FB_Regulator regulator;
_BUR_LOCAL struct FB_Motor fb_motor1;
_BUR_LOCAL struct FB_Motor fb_motor2;
_BUR_LOCAL struct FB_Motor fb_motor3;
_BUR_LOCAL struct FB_Motor fb_motor4;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MotorCtrl/MotorCtrl.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1701766277_4_ */

