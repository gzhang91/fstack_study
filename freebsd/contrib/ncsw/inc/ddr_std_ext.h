/******************************************************************************

 ? 1995-2003, 2004, 2005-2011 Freescale Semiconductor, Inc.
 All rights reserved.

 This is proprietary source code of Freescale Semiconductor Inc.,
 and its use is subject to the NetComm Device Drivers EULA.
 The copyright notice above does not evidence any actual or intended
 publication of such source code.

 ALTERNATIVELY, redistribution and use in source and binary forms, with
 or without modification, are permitted provided that the following
 conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of Freescale Semiconductor nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY Freescale Semiconductor ``AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL Freescale Semiconductor BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *

 **************************************************************************/

#ifndef __DDR_SDT_EXT_H
#define __DDR_SDT_EXT_H


/**************************************************************************//**
 @Group         ddr_Generic_Resources

 @Description   ddr generic functions, definitions and enums.

 @{
*//***************************************************************************/


/**************************************************************************//**
 @Description   SPD maximum size
*//***************************************************************************/
#define SPD_MAX_SIZE 256

/**************************************************************************//**
 @Description   DDR types select
*//***************************************************************************/
typedef enum e_DdrType
{
    e_DDR_DDR1,
    e_DDR_DDR2,
    e_DDR_DDR3,
    e_DDR_DDR3L
} e_DdrType;

/**************************************************************************//**
 @Description   DDR Mode.
*//***************************************************************************/
typedef enum e_DdrMode
{
    e_DDR_BUS_WIDTH_32BIT,
    e_DDR_BUS_WIDTH_64BIT
} e_DdrMode;

/** @} */ /* end of ddr_Generic_Resources group */



#endif /* __DDR_SDT_EXT_H */

