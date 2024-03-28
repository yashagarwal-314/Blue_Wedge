/*
 * Copyright (c) 2013, Linz Center of Mechatronics GmbH (LCM) http://www.lcm.at/
 * All rights reserved.
 */
/*
 * This file is licensed according to the BSD 3-clause license as follows:
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the "Linz Center of Mechatronics GmbH" and "LCM" nor
 *       the names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL "Linz Center of Mechatronics GmbH" BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * This file is part of X2C. http://x2c.lcm.at/
 * $LastChangedRevision: 1603 $
 */
/* USERCODE-BEGIN:Description                                                                                         */
/**     Description:	PI Controller with                                   **/
/**							- Enable Input									 **/
/**							- Anti Wind-up									 **/
/**							- Initial Condition Input	 					 **/
/**							- Output Limitation								 **/
/**						Calculation ZOH:									 **/
/**	       						                1          			 		 **/
/** 						y = ( Kp + Ki*Ts* -----  ) * u					 **/
/**          					              z - 1	   						 **/
/**																			 **/
/**						-> y(k) = b1.u(k) + b0.u(k-1) + y(k-1)				 **/
/**																			 **/
/* USERCODE-END:Description                                                                                           */
#ifndef PILIMIT_FIP8_H
#define PILIMIT_FIP8_H

#ifdef __cplusplus
extern "C" {
#endif

#include "CommonFcts.h"

#if !defined(PILIMIT_FIP8_ISLINKED)
#define PILIMIT_FIP8_ID ((uint16)3232)

typedef struct {
    uint16          ID;
    int8            *In;
    int8            *Init;
    int8            *max;
    int8            *min;
    int8            *Enable;
    int8            Out;
    int8            b0;
    int8            b1;
    int8            sfrb0;
    int8            sfrb1;
    int16           i_old;
    int8            enable_old;
} PILIMIT_FIP8;

#define PILIMIT_FIP8_FUNCTIONS { \
    PILIMIT_FIP8_ID, \
    (void (*)(void*))PILimit_FiP8_Update, \
    (void (*)(void*))PILimit_FiP8_Init, \
    (tLoadImplementationParameter)PILimit_FiP8_Load, \
    (tSaveImplementationParameter)PILimit_FiP8_Save, \
    (void* (*)(const void*, uint16))PILimit_FiP8_GetAddress }

/**********************************************************************************************************************/
/** Public prototypes                                                                                                **/
/**********************************************************************************************************************/
void PILimit_FiP8_Update(PILIMIT_FIP8 *pTPILimit_FiP8);
void PILimit_FiP8_Init(PILIMIT_FIP8 *pTPILimit_FiP8);
uint8 PILimit_FiP8_Load(const PILIMIT_FIP8 *pTPILimit_FiP8, uint8 data[], uint16 *dataLength, uint16 maxSize);
uint8 PILimit_FiP8_Save(PILIMIT_FIP8 *pTPILimit_FiP8, const uint8 data[], uint16 dataLength);
void* PILimit_FiP8_GetAddress(const PILIMIT_FIP8 *block, uint16 elementId);

#endif

#ifdef __cplusplus
}
#endif

#endif
