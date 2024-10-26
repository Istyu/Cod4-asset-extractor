#include "stdafx.h"
#include "IW3.h"

#define IW3DECLARE(SPACE, NAME, ADDRESS) SPACE##::##NAME##_t SPACE##::##NAME = (SPACE##::##NAME##_t)(ADDRESS)

namespace IW3
{
#pragma region CMD
	IW3DECLARE(CMD, AddExtractorCmds, 0x144062BE);
#pragma endregion

#pragma region MSG
	IW3DECLARE(MSG, SysPrint, 0x1447E1D5);
#pragma endregion
}
