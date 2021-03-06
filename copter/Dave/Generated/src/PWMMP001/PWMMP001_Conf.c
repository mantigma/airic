/*******************************************************************************
**  DAVE App Name : PWMMP001       App Version: 1.0.20               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[PWMMP001Conf.c]*/

/*******************************************************************************
 Copyright (c) 2013, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without**
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : DAVE App Developer                                              **
**                                                                            **
** MAY BE CHANGED BY USER [yes/Yes]: Yes                                      **
**                                                                            **
** MODIFICATION DATE : Apr 25, 2013                                           **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** KS           DAVE App Developer                                            **
*******************************************************************************/
/**
 * @file  PWMMP001_Conf.c
 * @App Version PWMMP001 <1.0.20>
 * @brief This file contains App parameter data as per GUI configurations
 */
/* Revision History
 * 01 Jan 2013   v1.0.10   taken as base version
 * 25 Apr 2013   v1.0.12   Trap value affecting is updated
 */

#include <DAVE3.h>

   


CCU8PWMLIB_DynamicHandleType CCU8PWMLIB_DynamicHandle10 =
{
  .State = CCU8PWMLIB_UNINITIALIZED
};

const CCU8PWMLIB_HandleType CCU8PWMLIB_Handle10 =
{
    .kTimerMode= 0U,
    .CompareMode= CCU8PWMLIB_ASYMMETRIC,
    .CountingMode= CCU8PWMLIB_CENTER_ALIGNED,
    
    .kPassiveState0= 0U,
    .kPassiveState1= 1U,
    .kPassiveLevel0= 0U,
    .kPassiveLevel1= 0U,

    .kExtStartTrig = 1,
    .kExtStopTrig = 0U,
    .kStartEdge =  CCU8PWMLIB_RISINGEDGE,
    .kStopEdge =  CCU8PWMLIB_NOTRIGGER,
    .ExtStartConfig = CCU8PWMLIB_CLEAR_START_TIMER,
    .ExtStopConfig =  CCU8PWMLIB_CLEAR_STOP_TIMER,
    .kTrapEnable= 0U,
    .kTrapSync= 1U,
    .kTrapExitControl= 0U,
    .kTrapLevel= 1U,
    
    .kResolution = (float)16.667,
    .kCCUPrescalar= 1U,
    .kTimerConcatenation= 0U,
    .kCompareValue1= 1U, 
    .kCompareValue2 = 1U,
    .kPeriodVal= 19999U,
    
    .kFallingDeadTime = 0U,
    .kRisingDeadTime= 0U,
    .kDeadTimePrescalar= 0U,
    .DeadTimeConf=  CCU8PWMLIB_DISABLE, 
    
    .kDitherSetting= 0U,
    .kDitherCompare = 0U,  

    .ShadowTransfer= 0U,
    .ShadowTransferMask= 0x00U,
  
    .Start= 0U,
    .StartMask= 0U,  
        
    .FirstSlice= CCU8PWMLIB_SLICE1,
    .SecondSlice= CCU8PWMLIB_SLICE0,
    .CC8yKernRegsPtr= (CCU8_GLOBAL_TypeDef*) CCU81_BASE,
    .CC8yRegsPtr= CCU81_CC81,
    .CC8yRegs1Ptr= CCU81_CC81,
    .DynamicHandleType= &CCU8PWMLIB_DynamicHandle10,
    .StartControl = 0U,
    .InterruptControl = 0x0U,
    .SetCompareFuncPtr = &CCU8PWMLIB_SetCompareAsymmetric,
    .SetDutyFuncPtr = &CCU8PWMLIB_SetDutyCenterAlignAsymmetric,
};

CCU8PWMLIB_DynamicHandleType CCU8PWMLIB_DynamicHandle20 =
{
  .State = CCU8PWMLIB_UNINITIALIZED
};
const CCU8PWMLIB_HandleType CCU8PWMLIB_Handle20 =
{
    .kTimerMode= 0U,
    .CompareMode= CCU8PWMLIB_ASYMMETRIC,
    .CountingMode= CCU8PWMLIB_CENTER_ALIGNED,
    
    .kPassiveState0= 0U,
    .kPassiveState1= 1U,
    .kPassiveLevel0= 0U,
    .kPassiveLevel1= 0U,

    .kExtStartTrig = 1U,
    .kExtStopTrig = 0U,
    .kStartEdge =  CCU8PWMLIB_RISINGEDGE,
    .kStopEdge =  CCU8PWMLIB_NOTRIGGER,
    .ExtStartConfig = CCU8PWMLIB_CLEAR_START_TIMER,
    .ExtStopConfig =  CCU8PWMLIB_CLEAR_STOP_TIMER,
    
    .kTrapEnable= 0U,
    .kTrapSync= 1U,
    .kTrapExitControl= 0U,
    .kTrapLevel= 1U,
    
    .kResolution = (float)16.667,
    .kCCUPrescalar= 1U,
    .kTimerConcatenation= 0U,
    .kCompareValue1= 1U, 
    .kCompareValue2 = 1U,
    .kPeriodVal= 19999U,
    
    .kFallingDeadTime = 0U,
    .kRisingDeadTime= 0U,
    .kDeadTimePrescalar= 0U,
    .DeadTimeConf=  CCU8PWMLIB_DISABLE, 
    
    .kDitherSetting= 0U,
    .kDitherCompare = 0U,  

    .ShadowTransfer=  1U ,
    .ShadowTransferMask=  272U ,
  
    .Start=  1U ,
    .StartMask=  6U ,
        
    .FirstSlice= CCU8PWMLIB_SLICE2,
    .SecondSlice= CCU8PWMLIB_SLICE0,
    .CC8yKernRegsPtr= (CCU8_GLOBAL_TypeDef*) CCU81_BASE,
    .CC8yRegsPtr= CCU81_CC82,
    .CC8yRegs1Ptr= CCU81_CC82,
    .DynamicHandleType= &CCU8PWMLIB_DynamicHandle20,
    .StartControl = 0U,
    .InterruptControl = 0x0U,
    .SetCompareFuncPtr = &CCU8PWMLIB_SetCompareAsymmetric,
    .SetDutyFuncPtr = &CCU8PWMLIB_SetDutyCenterAlignAsymmetric,
};



PWMMP001_DynamicHandleType PWMMP001_DynamicHandle0 =
{
  .State = PWMMP001_UNINITIALIZED
};


const PWMMP001_HandleType PWMMP001_Handle0 =
{
  .SCUSyncStart = 1U,
  .kMultiChanModeSupport= 0U,
  .kNumPhases= 2U,
  .kModuleNo = PWMMP001_CCU81,
  .StartControl = 0U,
  .PhaseHandlePtr=
  {
    &CCU8PWMLIB_Handle10,
    &CCU8PWMLIB_Handle20,
    NULL,        
    NULL,
  },
  .CCU8KernRegsPtr = (CCU8_GLOBAL_TypeDef*) CCU81_BASE,
  .DynamicHandle = &PWMMP001_DynamicHandle0
}; 



/**
 * @}
 */
 
/*CODE_BLOCK_END*/

