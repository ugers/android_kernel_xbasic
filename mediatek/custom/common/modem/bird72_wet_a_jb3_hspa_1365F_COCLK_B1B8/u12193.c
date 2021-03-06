/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	u12193.c
 *
 * Project:
 * --------
 *   MT6582
 *
 * Description:
 * ------------
 *   MT6582 Power Ramp Table
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#if !defined(MT6166_RF)
   #error "rf files mismatch with compile option!"
#endif

/*===============================================================================================*/
#include "kal_public_api.h"
#include "ul1d_rf_public.h"

U_sTEMPAGCOFFSET AGC_PATHLOSS_BANDANY[CAL_TEMP_SECTION] =
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp2*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp3*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp4*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp5*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp6*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp7*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp8*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND1[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( -0.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -0.50 ) },
     { 10631,  U_GAINLOSS( 0.500 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.750 ) },
     { 10700,  U_GAINLOSS( 1.750 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 2.250 ) },
     { 10769,  U_GAINLOSS( 0.250 ), U_GAINLOSS( -0.50 ), U_GAINLOSS( 1.250 ) },
     { 10838,  U_GAINLOSS( 0.000 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( 0.500 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp2*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( -0.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -0.50 ) },
     { 10631,  U_GAINLOSS( 0.500 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.750 ) },
     { 10700,  U_GAINLOSS( 1.750 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 2.250 ) },
     { 10769,  U_GAINLOSS( 0.250 ), U_GAINLOSS( -0.50 ), U_GAINLOSS( 1.250 ) },
     { 10838,  U_GAINLOSS( 0.000 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( 0.500 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp3*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 0.750 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.500 ) },
     { 10631,  U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.750 ) },
     { 10700,  U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.000 ), U_GAINLOSS( 3.250 ) },
     { 10769,  U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 2.250 ) },
     { 10838,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 1.500 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp4*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 0.750 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.500 ) },
     { 10631,  U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.750 ) },
     { 10700,  U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.000 ), U_GAINLOSS( 3.250 ) },
     { 10769,  U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 2.250 ) },
     { 10838,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 1.500 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp5*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 0.750 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.500 ) },
     { 10631,  U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.750 ) },
     { 10700,  U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.000 ), U_GAINLOSS( 3.250 ) },
     { 10769,  U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 2.250 ) },
     { 10838,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 1.500 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp6*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 0.750 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( 0.500 ) },
     { 10631,  U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.750 ) },
     { 10700,  U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.000 ), U_GAINLOSS( 3.250 ) },
     { 10769,  U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 2.250 ) },
     { 10838,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 1.500 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp7*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 1.750 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.500 ) },
     { 10631,  U_GAINLOSS( 2.500 ), U_GAINLOSS( 1.750 ), U_GAINLOSS( 2.750 ) },
     { 10700,  U_GAINLOSS( 3.750 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.250 ) },
     { 10769,  U_GAINLOSS( 2.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 3.250 ) },
     { 10838,  U_GAINLOSS( 2.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 2.500 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
   /*temp8*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     { 10562,  U_GAINLOSS( 1.750 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.500 ) },
     { 10631,  U_GAINLOSS( 2.500 ), U_GAINLOSS( 1.750 ), U_GAINLOSS( 2.750 ) },
     { 10700,  U_GAINLOSS( 3.750 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.250 ) },
     { 10769,  U_GAINLOSS( 2.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 3.250 ) },
     { 10838,  U_GAINLOSS( 2.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 2.500 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND2[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp2*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
    /*temp3*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp4*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp5*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp6*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp7*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp8*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     {  9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND3[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp2*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
    /*temp3*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp4*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp5*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp6*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp7*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp8*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  1162,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1187,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1212,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1262,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1287,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1338,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1363,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1388,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1413,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1438,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1463,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1488,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  1513,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND4[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp2*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp3*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp4*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp5*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp6*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp7*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp8*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     { 1537,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1552,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1567,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1582,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1597,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1612,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1627,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1642,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1657,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1675,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1687,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1702,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1717,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1732,  U_GAINLOSS( 0.000 ), 0, 0 },
     { 1738,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND5[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     {  4382,  U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.25 ) },
     {  4408,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -3.75 ), U_GAINLOSS( -3.75 ) },
     {  4433,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.50 ) },
     {  4458,  U_GAINLOSS( -4.00 ), U_GAINLOSS( -4.25 ), U_GAINLOSS( -4.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp2*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     {  4382,  U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.25 ) },
     {  4408,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -3.75 ), U_GAINLOSS( -3.75 ) },
     {  4433,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.50 ) },
     {  4458,  U_GAINLOSS( -4.00 ), U_GAINLOSS( -4.25 ), U_GAINLOSS( -4.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp3*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     {  4382,  U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ) },
     {  4408,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ) },
     {  4433,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ) },
     {  4458,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.25 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp4*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     {  4382,  U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ) },
     {  4408,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ) },
     {  4433,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ) },
     {  4458,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.25 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp5*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     {  4382,  U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ) },
     {  4408,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ) },
     {  4433,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ) },
     {  4458,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.25 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp6*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     {  4382,  U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.25 ) },
     {  4408,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ) },
     {  4433,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.50 ) },
     {  4458,  U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.25 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp7*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     {  4382,  U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.25 ) },
     {  4408,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ) },
     {  4433,  U_GAINLOSS( -0.50 ), U_GAINLOSS( -0.50 ), U_GAINLOSS( -0.50 ) },
     {  4458,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.00 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
   /*temp8*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  4357,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     {  4382,  U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.25 ) },
     {  4408,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ) },
     {  4433,  U_GAINLOSS( -0.50 ), U_GAINLOSS( -0.50 ), U_GAINLOSS( -0.50 ) },
     {  4458,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.00 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND6[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp2*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp3*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp4*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp5*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp6*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp7*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
   /*temp8*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  4387,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4394,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4400,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4406,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  4413,  U_GAINLOSS( 0.000 ), 0, 0 },
     { UMTS_TABLE_END }
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND8[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  2975,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.75 ) },
     {  3013,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -3.75 ), U_GAINLOSS( -4.00 ) },
     {  3051,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.75 ) },
     {  3088,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -4.00 ), U_GAINLOSS( -4.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp2*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -2.75 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  2975,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.75 ) },
     {  3013,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -3.75 ), U_GAINLOSS( -4.00 ) },
     {  3051,  U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.25 ), U_GAINLOSS( -2.75 ) },
     {  3088,  U_GAINLOSS( -3.50 ), U_GAINLOSS( -4.00 ), U_GAINLOSS( -4.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
     { 0,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.00 ) },
   }},
   /*temp3*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  2975,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.75 ) },
     {  3013,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  3051,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.75 ) },
     {  3088,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp4*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  2975,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.75 ) },
     {  3013,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  3051,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.75 ) },
     {  3088,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp5*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  2975,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.75 ) },
     {  3013,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  3051,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.75 ) },
     {  3088,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp6*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -1.75 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  2975,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.75 ) },
     {  3013,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -2.75 ), U_GAINLOSS( -3.00 ) },
     {  3051,  U_GAINLOSS( -1.00 ), U_GAINLOSS( -1.25 ), U_GAINLOSS( -1.75 ) },
     {  3088,  U_GAINLOSS( -2.50 ), U_GAINLOSS( -3.00 ), U_GAINLOSS( -3.00 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
     { 0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }},
   /*temp7*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -0.75 ), U_GAINLOSS( -0.75 ), U_GAINLOSS( -1.00 ) },
     {  2975,  U_GAINLOSS( -0.50 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( -0.75 ) },
     {  3013,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  3051,  U_GAINLOSS( 0.000 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.75 ) },
     {  3088,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
   /*temp8*/
   {{/* uarfcn,    LNA_H_loss,    LNA_M_loss,    LNA_L_loss */
     {  2937,  U_GAINLOSS( -0.75 ), U_GAINLOSS( -0.75 ), U_GAINLOSS( -1.00 ) },
     {  2975,  U_GAINLOSS( -0.50 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( -0.75 ) },
     {  3013,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -1.75 ), U_GAINLOSS( -2.00 ) },
     {  3051,  U_GAINLOSS( 0.000 ), U_GAINLOSS( -0.25 ), U_GAINLOSS( -0.75 ) },
     {  3088,  U_GAINLOSS( -1.50 ), U_GAINLOSS( -2.00 ), U_GAINLOSS( -2.00 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
     { 0,  U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.000 ) },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND9[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp2*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp3*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp4*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp5*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp6*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp7*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp8*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  9237,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9248,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9259,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9281,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9292,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9303,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9312,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9323,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9334,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9345,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9356,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9367,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9378,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  9387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
};

U_sTEMPAGCOFFSET AGC_PATHLOSS_BAND10[CAL_TEMP_SECTION] = 
{
   /*temp1*/
   {{/* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp2*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp3*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp4*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp5*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp6*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp7*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
   /*temp8*/
   {{  /* uarfcn,    LNA_H_loss,    diff_HM,    diff_HL */
     {  3113,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3133,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3153,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3173,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3193,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3213,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3233,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3250,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3270,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3290,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3310,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3330,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3350,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3370,  U_GAINLOSS( 0.000 ), 0, 0 },
     {  3387,  U_GAINLOSS( 0.000 ), 0, 0 },
   }},
};

U_sTEMPAGCOFFSET*  U_AGC_PATHLOSS_TABLE[] =
{
   &AGC_PATHLOSS_BANDANY[0],
   &AGC_PATHLOSS_BAND1[0],
   &AGC_PATHLOSS_BAND2[0],
   &AGC_PATHLOSS_BAND4[0],
   &AGC_PATHLOSS_BAND5[0],
   &AGC_PATHLOSS_BAND8[0]
};

//temperature dac
kal_uint16 U_TEMP_DAC[CAL_TEMP_SECTION] =
{
   334, 378, 424, 467, 501, 531, 546, 560
};

/*------------------------------*/
/* RX Diversity Path loss table */
/*------------------------------*/
U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND_DUMMY =
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {  0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  0,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {  10562,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  10631,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  10700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  10769,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  10838,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND2 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {   9662,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   9700,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   9800,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   9869,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   9938,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND4 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {   1537,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1552,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1567,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1582,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1597,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1612,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1627,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1642,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1657,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1675,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1687,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1702,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1717,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   1732,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
   }
};

U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND5 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {   4357,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   4382,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   4408,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   4433,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   4458,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

U_sAGCOFFSETRXD AGC_PATHLOSS_RXD_BAND8 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {//  uarfcn,       LNA_High_loss,     LNA_Middle_loss,       LNA_Low_loss
      {   2937,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   2975,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   3013,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   3051,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {   3088,  U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

U_sAGCOFFSETRXD*  U_AGC_PATHLOSS_RXD_TABLE[] =
{
   &AGC_PATHLOSS_RXD_BAND_DUMMY,
   &AGC_PATHLOSS_RXD_BAND1,
   &AGC_PATHLOSS_RXD_BAND2,
   &AGC_PATHLOSS_RXD_BAND4,
   &AGC_PATHLOSS_RXD_BAND5,
   &AGC_PATHLOSS_RXD_BAND8
};

/* BAND ANY...................................................................*/
U_sRAMPDATA  BANDANY_RampData =
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     5      ,     0     },
            {    0x0000    ,     1      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     7      ,     0     },
            {    0x0000    ,    12      ,     0     },
            {    0x0000    ,    20      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     5      ,     0     },
            {    0x0000    ,     1      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     6      ,     0     },
            {    0x0000    ,    11      ,     0     },
            {    0x0000    ,    19      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,    -4      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     6      ,     0     },
            {    0x0000    ,    11      ,     0     },
            {    0x0000    ,    19      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
        {    0x0000    ,    10      ,     0     },
        {    0x0000    ,    14      ,     0     },
        {    0x0000    ,    17      ,     0     },
        {    0x0000    ,    13      ,     0     },
        {    0x0000    ,    11      ,     0     },
        {    0x0000    ,     8      ,     0     },
        {    0x0000    ,     6      ,     0     },
        {    0x0000    ,     0      ,     0     },
        {    0x0000    ,    -2      ,     0     },
        {    0x0000    ,    -3      ,     0     },
        {    0x0000    ,    -7      ,     0     },
        {    0x0000    ,    -14     ,     0     },
        {    0x0000    ,    -18     ,     0     },
        {    0x0000    ,    -15     ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND1...................................................................*/
U_sRAMPDATA  BAND1_RampData = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  294 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,      2      ,     0     },
            {    9634    ,     12      ,     0     },
            {    9656    ,     18      ,     0     },
            {    9678    ,     20      ,     0     },
            {    9700    ,     17      ,     0     },
            {    9722    ,     10      ,     0     },
            {    9750    ,      0      ,     0     },
            {    9766    ,     -1      ,     0     },
            {    9788    ,     -1      ,     0     },
            {    9810    ,      7      ,     0     },
            {    9832    ,     20      ,     0     },
            {    9854    ,     33      ,     0     },
            {    9876    ,     39      ,     0     },
            {    9888    ,     39      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   291 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,     21      ,     0     },
            {    9634    ,     40      ,     0     },
            {    9656    ,     51      ,     0     },
            {    9678    ,     53      ,     0     },
            {    9700    ,     44      ,     0     },
            {    9722    ,     25      ,     0     },
            {    9750    ,      0      ,     0     },
            {    9766    ,    -15      ,     0     },
            {    9788    ,    -20      ,     0     },
            {    9810    ,     -7      ,     0     },
            {    9832    ,     14      ,     0     },
            {    9854    ,     35      ,     0     },
            {    9876    ,     43      ,     0     },
            {    9888    ,     42      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   293 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,     26      ,     0     },
            {    9634    ,     45      ,     0     },
            {    9656    ,     56      ,     0     },
            {    9678    ,     57      ,     0     },
            {    9700    ,     48      ,     0     },
            {    9722    ,     28      ,     0     },
            {    9750    ,      0      ,     0     },
            {    9766    ,    -12      ,     0     },
            {    9788    ,    -17      ,     0     },
            {    9810    ,     -4      ,     0     },
            {    9832    ,     18      ,     0     },
            {    9854    ,     40      ,     0     },
            {    9876    ,     47      ,     0     },
            {    9888    ,     47      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 16, 18 },   
     { 22, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
        {    9612    ,    -30      ,     0     },
        {    9634    ,    -24      ,     0     },
        {    9656    ,    -16      ,     0     },
        {    9678    ,     -5      ,     0     },
        {    9700    ,      2      ,     0     },
        {    9722    ,      6      ,     0     },
        {    9750    ,      0      ,     0     },
        {    9766    ,     -3      ,     0     },
        {    9788    ,    -12      ,     0     },
        {    9810    ,    -22      ,     0     },
        {    9832    ,    -28      ,     0     },
        {    9854    ,    -31      ,     0     },
        {    9876    ,    -28      ,     0     },
        {    9888    ,    -23      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND2...................................................................*/
U_sRAMPDATA  BAND2_RampData = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  174 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9262    ,    20      ,     0     },
            {    9284    ,    12      ,     0     },
            {    9306    ,     5      ,     0     },
            {    9328    ,     1      ,     0     },
            {    9350    ,    -2      ,     0     },
            {    9372    ,    -2      ,     0     },
            {    9394    ,     0      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     2      ,     0     },
            {    9460    ,     3      ,     0     },
            {    9482    ,     5      ,     0     },
            {    9504    ,     5      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    31      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   174 },
 
         /* VGA offset by subband */
         {
            /* max arfcn ,   pwr_offset_db */
            {    9262    ,    16      ,     0     },
            {    9284    ,     9      ,     0     },
            {    9306    ,     3      ,     0     },
            {    9328    ,     0      ,     0     },
            {    9350    ,    -3      ,     0     },
            {    9372    ,    -2      ,     0     },
            {    9394    ,     0      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     1      ,     0     },
            {    9460    ,     2      ,     0     },
            {    9482    ,     6      ,     0     },
            {    9504    ,     6      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   174 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9262    ,    13      ,     0     },
            {    9284    ,     6      ,     0     },
            {    9306    ,     1      ,     0     },
            {    9328    ,    -1      ,     0     },
            {    9350    ,    -4      ,     0     },
            {    9372    ,    -4      ,     0     },
            {    9394    ,    -1      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     1      ,     0     },
            {    9460    ,     1      ,     0     },
            {    9482    ,     5      ,     0     },
            {    9504    ,     6      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn ,   pwr_offset_db */
        {    9262    ,    13      ,     0     },
        {    9284    ,    17      ,     0     },
        {    9306    ,    21      ,     0     },
        {    9328    ,    17      ,     0     },
        {    9350    ,    15      ,     0     },
        {    9372    ,     9      ,     0     },
        {    9394    ,     2      ,     0     },
        {    9416    ,     0      ,     0     },
        {    9438    ,     6      ,     0     },
        {    9460    ,    13      ,     0     },
        {    9482    ,    13      ,     0     },
        {    9504    ,     8      ,     0     },
        {    9526    ,     7      ,     0     },
        {    9538    ,    -7      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND3...................................................................*/
U_sRAMPDATA  BAND3_RampData = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  225,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },      
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  191,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  144,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    937     ,     0      ,     0     },
        {    962     ,     0      ,     0     },
        {    987     ,     0      ,     0     },
        {    1012    ,     0      ,     0     },
        {    1037    ,     0      ,     0     },
        {    1062    ,     0      ,     0     },
        {    1087    ,     0      ,     0     },
        {    1113    ,     0      ,     0     },
        {    1138    ,     0      ,     0     },
        {    1163    ,     0      ,     0     },
        {    1188    ,     0      ,     0     },
        {    1213    ,     0      ,     0     },
        {    1238    ,     0      ,     0     },
        {    1263    ,     0      ,     0     },
        {    1288    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND4...................................................................*/
U_sRAMPDATA  BAND4_RampData = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  246,   176 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  212,   172 },
 
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  166,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    1312    ,     0      ,     0     },
        {    1327    ,     0      ,     0     },
        {    1342    ,     0      ,     0     },
        {    1357    ,     0      ,     0     },
        {    1372    ,     0      ,     0     },
        {    1387    ,     0      ,     0     },
        {    1402    ,     0      ,     0     },
        {    1417    ,     0      ,     0     },
        {    1432    ,     0      ,     0     },
        {    1450    ,     0      ,     0     },
        {    1465    ,     0      ,     0     },
        {    1480    ,     0      ,     0     },
        {    1495    ,     0      ,     0     },
        {    1510    ,     0      ,     0     },
        {    1513    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND5...................................................................*/
U_sRAMPDATA  BAND5_RampData = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  271 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    782    ,     -17      ,     0     },
            {    812    ,      -8      ,     0     },
            {    862    ,       3      ,     0     },
            {    4132    ,    -17      ,     0     },
            {    4142    ,    -18      ,     0     },
            {    4152    ,    -14      ,     0     },
            {    4162    ,     -8      ,     0     },
            {    4172    ,     -3      ,     0     },
            {    4183    ,      0      ,     0     },
            {    4193    ,      2      ,     0     },
            {    4203    ,      3      ,     0     },
            {    4213    ,      4      ,     0     },
            {    4223    ,      6      ,     0     },
            {    4233    ,      9      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,    272 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    782    ,      -24      ,     0     },
            {    812    ,      -16      ,     0     },
            {    862    ,        7      ,     0     },
            {    4132    ,     -24      ,     0     },
            {    4142    ,     -28      ,     0     },
            {    4152    ,     -25      ,     0     },
            {    4162    ,     -17      ,     0     },
            {    4172    ,     -10      ,     0     },
            {    4183    ,       0      ,     0     },
            {    4193    ,       1      ,     0     },
            {    4203    ,       4      ,     0     },
            {    4213    ,       5      ,     0     },
            {    4223    ,       7      ,     0     },
            {    4233    ,       9      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,    272 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    782    ,      -22      ,     0     },
            {    812    ,      -14      ,     0     },
            {    862    ,        8      ,     0     },
            {    4132    ,     -22      ,     0     },
            {    4142    ,     -26      ,     0     },
            {    4152    ,     -23      ,     0     },
            {    4162    ,     -15      ,     0     },
            {    4172    ,      -7      ,     0     },
            {    4183    ,       0      ,     0     },
            {    4193    ,       3      ,     0     },
            {    4203    ,       6      ,     0     },
            {    4213    ,       7      ,     0     },
            {    4223    ,       9      ,     0     },
            {    4233    ,      11      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { -3, 0 },
           { -3, 0 },
           { -3, 0 },
           { -3, 0 },
           { -3, 0 },
           { -3, 0 },
           { -3, 0 },
           { -3, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 12, 14 },   
     { 22, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
      0,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
            {    782    ,     -23      ,     0     },
            {    812    ,      -2      ,     0     },
            {    862    ,      -8      ,     0     },
            {    4132    ,    -20      ,     0     },
            {    4142    ,    -13      ,     0     },
            {    4152    ,     -7      ,     0     },
            {    4162    ,     -5      ,     0     },
            {    4172    ,      1      ,     0     },
            {    4183    ,      0      ,     0     },
            {    4193    ,     -1      ,     0     },
            {    4203    ,     -4      ,     0     },
            {    4213    ,     -5      ,     0     },
            {    4223    ,    -13      ,     0     },
            {    4233    ,    -14      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND6...................................................................*/
/* Band6 is overlap with Band5 */
U_sRAMPDATA  BAND6_RampData = 
{
   /* DC2DC data by BAND */
   { 0, 
     0 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }

         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }

         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 0, 0 },   
     { 0, 0 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     0, 
     /* pwr dt used section */ 
     0,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    4132    ,     0      ,     0     },
        {    4140    ,     0      ,     0     },
        {    4148    ,     0      ,     0     },
        {    4156    ,     0      ,     0     },
        {    4164    ,     0      ,     0     },
        {    4172    ,     0      ,     0     },
        {    4180    ,     0      ,     0     },
        {    4188    ,     0      ,     0     },
        {    4196    ,     0      ,     0     },
        {    4204    ,     0      ,     0     },
        {    4212    ,     0      ,     0     },
        {    4220    ,     0      ,     0     },
        {    4228    ,     0      ,     0     },
        {    4233    ,     0      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND8...................................................................*/
U_sRAMPDATA  BAND8_RampData = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  292,   257 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     12      ,     0     },
            {    2724    ,     -1      ,     0     },
            {    2736    ,     -4      ,     0     },
            {    2748    ,     -2      ,     0     },
            {    2760    ,      0      ,     0     },
            {    2772    ,      0      ,     0     },
            {    2787    ,      0      ,     0     },
            {    2796    ,      3      ,     0     },
            {    2807    ,      5      ,     0     },
            {    2818    ,      9      ,     0     },
            {    2829    ,     15      ,     0     },
            {    2840    ,     25      ,     0     },
            {    2851    ,     42      ,     0     },
            {    2863    ,     64      ,     0     },
         },      
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   258 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     12      ,     0     },
            {    2724    ,     -2      ,     0     },
            {    2736    ,     -6      ,     0     },
            {    2748    ,     -5      ,     0     },
            {    2760    ,     -3      ,     0     },
            {    2772    ,     -1      ,     0     },
            {    2787    ,      0      ,     0     },
            {    2796    ,      0      ,     0     },
            {    2807    ,      1      ,     0     },
            {    2818    ,      4      ,     0     },
            {    2829    ,     10      ,     0     },
            {    2840    ,     20      ,     0     },
            {    2851    ,     37      ,     0     },
            {    2863    ,     59      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   258 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     16      ,     0     },
            {    2724    ,      0      ,     0     },
            {    2736    ,     -8      ,     0     },
            {    2748    ,     -8      ,     0     },
            {    2760    ,     -6      ,     0     },
            {    2772    ,     -3      ,     0     },
            {    2787    ,      0      ,     0     },
            {    2796    ,      1      ,     0     },
            {    2807    ,      2      ,     0     },
            {    2818    ,      5      ,     0     },
            {    2829    ,      8      ,     0     },
            {    2840    ,     17      ,     0     },
            {    2851    ,     35      ,     0     },
            {    2863    ,     62      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 12, 14 },   
     { 22, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset */
        {    2712    ,       0      ,     0     },
        {    2724    ,     -11      ,     0     },
        {    2736    ,     -10      ,     0     },
        {    2748    ,      -7      ,     0     },
        {    2760    ,      -7      ,     0     },
        {    2772    ,      -1      ,     0     },
        {    2787    ,       0      ,     0     },
        {    2796    ,       4      ,     0     },
        {    2807    ,       5      ,     0     },
        {    2818    ,       3      ,     0     },
        {    2829    ,      -2      ,     0     },
        {    2840    ,      -5      ,     0     },
        {    2851    ,     -10      ,     0     },
        {    2863    ,     -15      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND9...................................................................*/
U_sRAMPDATA  BAND9_RampData = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  246,   176 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  212,   172 },
 
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  166,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset */
        {    8762    ,     0      ,     0     },
        {    8773    ,     0      ,     0     },
        {    8784    ,     0      ,     0     },
        {    8795    ,     0      ,     0     },
        {    8806    ,     0      ,     0     },
        {    8817    ,     0      ,     0     },
        {    8828    ,     0      ,     0     },
        {    8837    ,     0      ,     0     },
        {    8848    ,     0      ,     0     },
        {    8859    ,     0      ,     0     },
        {    8870    ,     0      ,     0     },
        {    8881    ,     0      ,     0     },
        {    8892    ,     0      ,     0     },
        {    8903    ,     0      ,     0     },
        {    8912    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND10...................................................................*/
U_sRAMPDATA  BAND10_RampData = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  276,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  242,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  183,   173 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    2888    ,     0      ,     0     },
        {    2908    ,     0      ,     0     },
        {    2928    ,     0      ,     0     },
        {    2948    ,     0      ,     0     },
        {    2968    ,     0      ,     0     },
        {    2988    ,     0      ,     0     },
        {    3008    ,     0      ,     0     },
        {    3025    ,     0      ,     0     },
        {    3045    ,     0      ,     0     },
        {    3065    ,     0      ,     0     },
        {    3085    ,     0      ,     0     },
        {    3105    ,     0      ,     0     },
        {    3125    ,     0      ,     0     },
        {    3145    ,     0      ,     0     },
        {    3162    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

U_sRAMPDATA*  UMTS_RampData[] =
{
   &BANDANY_RampData,
   &BAND1_RampData,
   &BAND2_RampData,
   &BAND4_RampData,
   &BAND5_RampData,  
   &BAND8_RampData,
};

/* PA 8-level control (for MT6276, MT6573) */
U_sPAOCTLVLSETTING  BANDANY_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        190 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        298 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        642 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        639 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        648 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        663 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        680 // PA gain
      },
   }
};

/* BAND1...................................................................*/
U_sPAOCTLVLSETTING  BAND1_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          0, // DC2DC level
          1, // Vm0
          1, // Vm1
          0, // Vbias
        754 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
          0, // DC2DC level
          1, // Vm0
          1, // Vm1
          0, // Vbias
        753 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
          0, // DC2DC level
          1, // Vm0
          1, // Vm1
          0, // Vbias
        751 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
          0, // DC2DC level
          0, // Vm0
          0, // Vm1
          0, // Vbias
        1111 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
          0, // DC2DC level
          0, // Vm0
          0, // Vm1
          0, // Vbias
        1111 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
          0, // DC2DC level
          0, // Vm0
          0, // Vm1
          0, // Vbias
        1106 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
          0, // DC2DC level
          0, // Vm0
          0, // Vm1
          0, // Vbias
        1111 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
          0, // DC2DC level
          0, // Vm0
          0, // Vm1
          0, // Vbias
        1106 // PA gain
      },
   }
};

/* BAND2...................................................................*/
U_sPAOCTLVLSETTING  BAND2_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        254 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        375 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        390 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        728 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        735 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        747 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        766 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        786 // PA gain
      },
   }
};

/* BAND3...................................................................*/
U_sPAOCTLVLSETTING  BAND3_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND4...................................................................*/
U_sPAOCTLVLSETTING  BAND4_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND5...................................................................*/
U_sPAOCTLVLSETTING  BAND5_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
         -3, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        822 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         -2, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        819 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
          2, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        821 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
          6, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        1137 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         10, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        1135 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         13, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        1139 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         17, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        1142 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         25, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        1140 // PA gain
      },
   }
};

/* BAND6...................................................................*/
U_sPAOCTLVLSETTING  BAND6_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        399 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        724 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        727 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        742 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        759 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        774 // PA gain
      },
   }
};

/* BAND8...................................................................*/
U_sPAOCTLVLSETTING  BAND8_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          2, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        799 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
       1112 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         12, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
       1105 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         20, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
       1098 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         28, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
       1094 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         34, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
       1093 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         42, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
       1092 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
       1094 // PA gain
      },
   }
};

/* BAND9...................................................................*/
U_sPAOCTLVLSETTING  BAND9_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND10...................................................................*/
U_sPAOCTLVLSETTING  BAND10_PaOctLevData =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* PA 8-level control */
U_sPAOCTLVLSETTING*  U_PA_OCTLEV_TABLE[] =
{
   &BANDANY_PaOctLevData,
   &BAND1_PaOctLevData,
   &BAND2_PaOctLevData,
   &BAND4_PaOctLevData,
   &BAND5_PaOctLevData,  
   &BAND8_PaOctLevData,
};
/*===============================================================================================*/
U_sPADRIFTSETTING  BANDANY_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND1_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND2_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND3_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND4_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND5_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND6_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND8_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND9_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING  BAND10_PaDriftCompData =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

U_sPADRIFTSETTING*  U_PA_DRIFT_TABLE[] =
{
   &BANDANY_PaDriftCompData,
   &BAND1_PaDriftCompData,
   &BAND2_PaDriftCompData,
   &BAND4_PaDriftCompData,
   &BAND5_PaDriftCompData,  
   &BAND8_PaDriftCompData,
};


U_sPARACHTMCOMPDATA BANDANY_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND1_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND2_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND3_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND4_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND5_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND6_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND7_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND8_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND9_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

U_sPARACHTMCOMPDATA BAND10_RACH_temperature_compensation =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};



U_sPARACHTMCOMPDATA*  U_PA_RACH_COMP_TABLE[] =
{
   &BANDANY_RACH_temperature_compensation,
   &BAND1_RACH_temperature_compensation,
   &BAND2_RACH_temperature_compensation,
   &BAND4_RACH_temperature_compensation,
   &BAND5_RACH_temperature_compensation,  
   &BAND8_RACH_temperature_compensation,
};
