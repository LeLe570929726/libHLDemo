#pragma once

#include <string>
#include <cstdint>

namespace HLDemo {

struct DemoHeader {
	std::string mDemoFileStamp;
	int32_t mDemoProtocol;
	int32_t mNetworkProtocol;
	std::string mServerName;
	std::string mClientName;
	std::string mMapName;
	std::string mGameDirectory;
	float mPlaybackTime;
	int32_t mTicks;
	int32_t mFrames;
	int32_t mSignOnLength;
};

}
