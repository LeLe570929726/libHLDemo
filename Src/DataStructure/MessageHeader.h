#pragma once

#include <cstdint>

namespace HLDemo {

enum class MessageCommand : int8_t {
	// Network messages
	NOP = 0,
	Disconnect = 1,
	File = 2,
	Tick = 4,
	StringCmd = 5,
	SetConVar = 6,
	SignOnState = 7,
	// Server messages
	ServerInfo = 8,
	SendTable = 9,
	ClassInfo = 10,
	SetPause = 11,
	CreateStringTable = 12,
	UpdateStringTable = 13,
	VoiceInit = 14,
	VoiceData = 15,
	Print = 16,
	Sounds = 17,
	SetView = 18,
	FixAngle = 19,
	CrosshairAngle = 20,
	BSPDecal = 21,
	UserMessage = 23,
	GameEvent = 25,
	PacketEntities = 26,
	TempEntities = 27,
	Prefetch = 28,
	Menu = 29,
	GameEventList = 30,
	GetCvarValue = 31
};

struct MessageHeader {
	int32_t mCommand;
	int32_t mSize;
};

}
