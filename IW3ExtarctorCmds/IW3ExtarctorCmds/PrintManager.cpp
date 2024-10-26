#include "stdafx.h"
#include "PrintManager.h"

#include <future>

void PrintManager::_Sys_Print(const char* message)
{
	IW3::MSG::SysPrint(message);
}