/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * $URL$
 * $Id$
 *
 */

#ifndef TINSEL_SCROLL_H	// prevent multiple includes
#define TINSEL_SCROLL_H

namespace Tinsel {

#define SCROLLPIXELS 8	// Number of pixels to scroll per iteration

#define RLDISTANCE 50	// Distance from edge that triggers a scroll
#define UDDISTANCE 20

// Number of iterations to make
#define RLSCROLL 160	// 20*8 = 160 = half a screen
#define UDSCROLL 100	// 12.5*8 = 100 = half a screen


// These structures defined here so boundaries can be saved
struct NOSCROLLB {
	int ln;
	int c1;
	int c2;
};

#define MAX_HNOSCROLL	10
#define MAX_VNOSCROLL	10

struct SCROLLDATA{
	NOSCROLLB NoVScroll[MAX_VNOSCROLL];	// Vertical no-scroll boundaries
	NOSCROLLB NoHScroll[MAX_HNOSCROLL];	// Horizontal no-scroll boundaries
	unsigned NumNoV, NumNoH;		// Counts of no-scroll boundaries
};



void DontScrollCursor(void);
void DoScrollCursor(void);

void SetNoScroll(int x1, int y1, int x2, int y2);
void DropNoScrolls(void);

void ScrollProcess(CORO_PARAM, const void *);

void ScrollFocus(int actor);
void ScrollTo(int x, int y, int iter);

void KillScroll(void);

void GetNoScrollData(SCROLLDATA *ssd);
void RestoreNoScrollData(SCROLLDATA *ssd);

} // end of namespace Tinsel

#endif /* TINSEL_SCROLL_H */
