/*----------------------------------------------------------------------------- 
* This file is part of the Colony.Core Project.  The Colony.Core Project is an   
* open source project with a BSD type of licensing agreement.  See the license  
* agreement (license.txt) in the top/ directory or on the Internet at           
* http://integerfox.com/colony.core/license.txt
*                                                                               
* Copyright (c) 2014, 2015  John T. Taylor                                        
*                                                                               
* Redistributions of the source code must retain the above copyright notice.    
*----------------------------------------------------------------------------*/ 


#include "Bsp/Api.h"


/// Stub
#define Bsp_Api_nop_MAP()

/// Stub
#define Bsp_Api_disableIrqs_MAP()

/// Stub
#define Bsp_Api_enableIrqs_MAP()

/// Stub
#define Bsp_Api_pushAndDisableIrqs_MAP()

/// Stub
#define Bsp_Api_popIrqs_MAP()

/// Stub
#define Bsp_Api_turnOn_debug1_MAP()

/// Stub
#define Bsp_Api_turnOff_debug1_MAP()

/// Stub
#define Bsp_Api_toggle_debug1_MAP()

/// Stub
#define Bsp_Api_turnOn_debug2_MAP()

/// Stub
#define Bsp_Api_turnOff_debug2_MAP()

/// Stub
#define Bsp_Api_toggle_debug2_MAP()


/// Stub
void Bsp_Api_initialize( void )
    { 
    Bsp_Api_nop();
    Bsp_Api_disableIrqs();
    Bsp_Api_enableIrqs();
    Bsp_Api_pushAndDisableIrqs();
    Bsp_Api_popIrqs();
    Bsp_Api_turnOn_debug1();
    Bsp_Api_turnOff_debug1();
    Bsp_Api_toggle_debug1();
    Bsp_Api_turnOn_debug2();
    Bsp_Api_turnOff_debug2();
    Bsp_Api_toggle_debug2();
    }
