/* ScummVM - Scumm Interpreter
 * Copyright (C) 2001  Ludvig Strigeus
 * Copyright (C) 2001-2003 The ScummVM project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * $Header$
 *
 */

#ifndef PLAYER_V1_H
#define PLAYER_V1_H

#include "player_v2.h"

#define FB_WNOISE 0x12000       /* feedback for white noise */
#define FB_PNOISE 0x08000       /* feedback for periodic noise */

struct channel_data_v1 {
	uint freq;
	uint volume;
	byte *cmd_ptr;
	uint notelen;
	uint hull_counter;
	uint attack;
	uint decay;
	uint level;
	uint sustain_1;
	uint sustain_2;
	int  sustctr;
};

class Player_V1 : public Player_V2 {
public:
	Player_V1(Scumm *scumm);
	~Player_V1();

	void startSound(int nr, byte *data);
	void stopAllSounds();
	void stopSound(int nr);
	int  getMusicTimer() const;

protected:
	void restartSound();
	void next_speaker_cmd(ChannelInfo *channel);
	void clear_channel(int i);
	void chainSound(int nr, byte *data);

	void do_mix (int16 *buf, uint len);

	void set_mplex(uint mplex);
	void parseSpeakerChunk();
	void nextSpeakerCmd();
	void parsePCjrChunk();
	void nextPCjrCmd();
	void generateSpkSamples(int16 *data, uint len);
	void generatePCjrSamples(int16 *data, uint len);

	channel_data_v1 _channels[4];

private:
	byte *_next_chunk;
	byte *_repeat_chunk;
	uint  _chunk_type;
	uint  _mplex_step;
	uint  _mplex;
	uint  _repeat_ctr;
	uint  _freq_current;
	uint  _forced_level;
	uint16 _random_lsr;
	uint  *_value_ptr;
	uint  _time_left;
	uint  _start;
	uint  _end;
	int   _delta;
	uint  *_value_ptr_2;
	uint  _time_left_2;
	uint  _start_2;
	int   _delta_2;
};

#endif
