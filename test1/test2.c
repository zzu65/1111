/************************************************************************
* Copyright (C), 2006-2090, ASTRI&Innofidei,Ltd.
* Create Data:  2012-03-15
* File Name:     Drx_Var.c
* Author:
* Current Version:  Phase4
* Description:   Drx variables definition.
* Others:
* Modify:
    1. Date:
           Author:zhuguangqing
           Content:
    2. ...
**************************************************************************/
/*************************************************************************
* Include head files
**************************************************************************/
#include "Global_Macro.h"
#include "Drx_Common.h"
#include "Hal_PMU.h"

/*************************************************************************
* Global variable declaration
**************************************************************************/
U8  gu8DrxPagingRpt           = 0;            //DSP Drx status report.0: Active (DSP in Active Status); 1: SLEEP (DSP in Sleep Status).
U8  gu8DrxRFReadyFlg          = ENABLE;
U8  gu8DrxSelfWakeupFlg       = DISABLE;

U16 gu16DrxSleepTime           = 0;
U16 gu16DrxWakeupSrc           = 0;
U8  gu8DrxWakeupFlag          = DISABLE;

U8  gu8DetachSleepIndFlag   = DISABLE;

/*************************************************************************
* Global struct declaration
**************************************************************************/

//add for git 
//test - dhy
//xxxxxxxxxxxxxxxxx
