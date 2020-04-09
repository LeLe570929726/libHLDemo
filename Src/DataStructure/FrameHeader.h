#pragma once

#include <cstdint>

namespace HLDemo {

// Adapt on network protocol 7 and 8
enum class FrameCommandV1 : int8_t {
	SignOn = 1,
	Packet = 2,
	SyncTick = 3,
	ConcoleCmd = 4,
	UserCmd = 5,
	DataTables = 6,
	Stop = 7
};

// Adapt on network protocol 14 and 15
enum class FrameCommandV2 : FrameCommandV1 {
	StringTables = 8
};

// Adapt on network protocol 36 and higher
enum class FrameCommandV3 : FrameCommandV1 {
	CustomData = 8,
	StringTables = 9
};

struct FrameHeader {
	int8_t mCommand;
	int32_t mTick;
	int8_t mPlayerSlot;
};

}
