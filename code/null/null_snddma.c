/*
===========================================================================
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of Q3lite Source Code.

Q3lite Source Code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License,
or (at your option) any later version.

Q3lite Source Code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Q3lite Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, Q3lite Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following
the terms and conditions of the GNU General Public License.  If not, please
request a copy in writing from id Software at the address below.
If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc.,
Suite 120, Rockville, Maryland 20850 USA.
===========================================================================
*/

// snddma_null.c
// all other sound mixing is portable

#include "../qcommon/q_shared.h"
#include "../qcommon/qcommon.h"

qboolean SNDDMA_Init(void)
{
	return qfalse;
}

int	SNDDMA_GetDMAPos(void)
{
	return 0;
}

void SNDDMA_Shutdown(void)
{
}

void SNDDMA_BeginPainting (void)
{
}

void SNDDMA_Submit(void)
{
}

#ifdef USE_VOIP
void SNDDMA_StartCapture(void)
{
}

int SNDDMA_AvailableCaptureSamples(void)
{
	return 0;
}

void SNDDMA_Capture(int samples, byte *data)
{
}

void SNDDMA_StopCapture(void)
{
}

void SNDDMA_MasterGain( float val )
{
}
#endif


sfxHandle_t S_RegisterSound( const char *name, qboolean compressed ) 
{
	return 0;
}

void S_StartLocalSound( sfxHandle_t sfxHandle, int channelNum ) {
}

void S_ClearSoundBuffer( void ) {
}
