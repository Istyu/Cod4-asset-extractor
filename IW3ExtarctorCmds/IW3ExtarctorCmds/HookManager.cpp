#include "stdafx.h"
#include "HookManager.h"
#include <future>

#include "CommandManager.h"
#include "PrintManager.h"


DWORD WINAPI CreateDetour(LPVOID lpvoid)
{
	CommandManager::add_extractor_console_commands();

	const char* message = "Server must be running in order to extract assets.\n 'extract' and 'assets' commands are available\n";
	PrintManager::_Sys_Print(message);

	return 0;
}