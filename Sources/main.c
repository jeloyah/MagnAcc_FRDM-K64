/* ###################################################################
**     Filename    : main.c
**     Project     : MagnAcc_FRDM-K64
**     Processor   : MK64FN1M0VLL12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-11-19, 13:34, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"
#include "ASerial.h"
#include "ASerialLdd1.h"
#include "CI2C0.h"
#include "IntI2cLdd1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
  unsigned char *CI2C0_ID;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /*** 1) The master transmits a start condition to the FXOS8700CQ, ***/
  /*** 2) followed by the slave address, with the R/W bit set to "0" for a write, ***/
  /*** 3) and the FXOS8700CQ sends an acknowledgment ***/
  /*** 4) Then the master transmits the address of the register to read ***/
  /*** 5) and the FXOS8700CQ sends an acknowledgment ***/
  CI2C0_SendChar(0x0D);

  /*** 1) The master transmits a repeated start condition ***/
  /*** 2) followed by the slave address with the R/W bit set to "1" for a read ***/
  /*** 3) The FXOS8700CQ then acknowledges and transmits the data from the requested register ***/
  /*** 4) The master transmits a stop condition to end the transfer ***/

  CI2C0_SendChar(0x0D);

  //CI2C0_RecvChar(CI2C0_ID);

  /* Write your code here */
  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
