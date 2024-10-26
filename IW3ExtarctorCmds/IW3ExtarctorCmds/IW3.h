#pragma once

namespace IW3
{
	class CMD
	{
	public:
		typedef void(__cdecl* AddExtractorCmds_t)();
		static AddExtractorCmds_t AddExtractorCmds;
	};

	class MSG
	{
	public:
		typedef void(__cdecl* SysPrint_t)(const char*);
		static SysPrint_t SysPrint;
	};

}