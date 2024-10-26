#include "stdafx.h"
#include "CommandManager.h"

#include <future>

void CommandManager::add_extractor_console_commands()
{
	IW3::CMD::AddExtractorCmds();
}