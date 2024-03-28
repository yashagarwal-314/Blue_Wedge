/*
 * Copyright (c) {YEAR}, {ORGANIZATION_NAME}, {ORGANIZATION_WEB}
 * All rights reserved.
 */
/*
 * This file is licensed according to the BSD 3-clause license as follows:
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of the "{ORGANIZATION_NAME}" nor
 *     the names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL "{ORGANIZATION_NAME}" BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 * This file is part of X2C. http://www.mechatronic-simulation.org/
 * $LastChangedRevision: 1916 $
 */
/* USERCODE-BEGIN:Description                                                                                         */
/* Description: */
/* USERCODE-END:Description                                                                                           */
#ifndef BEMF_MCHP_FIP16_H
#define BEMF_MCHP_FIP16_H

#ifdef __cplusplus
extern "C" {
#endif

#include "CommonFcts.h"

#if !defined(BEMF_MCHP_FIP16_ISLINKED)
#define BEMF_MCHP_FIP16_ID ((uint16)20992)

typedef struct {
    uint16          ID;
    int16           *Ialpha;
    int16           *Ibeta;
    int16           *Valpha;
    int16           *Vbeta;
    int16           BEMFalpha;
    int16           BEMFbeta;
    int16           Ls;
    int16           Rs;
    int8            sfrLs;
    int8            sfrRs;
    int16           Ib_old;
    int16           Ia_old;
    uint8           CurrentSampleFactor;
    int16           V_Ls_alpha;
    int16           V_Ls_beta;
    uint8           FactCounter;
} BEMF_MCHP_FIP16;

#define BEMF_MCHP_FIP16_FUNCTIONS { \
    BEMF_MCHP_FIP16_ID, \
    (void (*)(void*))BEMF_MCHP_FiP16_Update, \
    (void (*)(void*))BEMF_MCHP_FiP16_Init, \
    (tLoadImplementationParameter)BEMF_MCHP_FiP16_Load, \
    (tSaveImplementationParameter)BEMF_MCHP_FiP16_Save, \
    (void* (*)(const void*, uint16))BEMF_MCHP_FiP16_GetAddress }

/**********************************************************************************************************************/
/** Public prototypes                                                                                                **/
/**********************************************************************************************************************/
void BEMF_MCHP_FiP16_Update(BEMF_MCHP_FIP16 *pTBEMF_MCHP_FiP16);
void BEMF_MCHP_FiP16_Init(BEMF_MCHP_FIP16 *pTBEMF_MCHP_FiP16);
uint8 BEMF_MCHP_FiP16_Load(const BEMF_MCHP_FIP16 *pTBEMF_MCHP_FiP16, uint8 data[], uint16 *dataLength, uint16 maxSize);
uint8 BEMF_MCHP_FiP16_Save(BEMF_MCHP_FIP16 *pTBEMF_MCHP_FiP16, const uint8 data[], uint16 dataLength);
void* BEMF_MCHP_FiP16_GetAddress(const BEMF_MCHP_FIP16 *block, uint16 elementId);

#endif

#ifdef __cplusplus
}
#endif

#endif
