

#pragma once

#ifdef HGDLL_EXPORTS
#define HGDLL_API __declspec(dllexport)
#else
#define HGDLL_API __declspec(dllimport)
#endif

namespace hg { namespace dl {
#ifndef HGDLL_EXPORTS
	void * memory_block;
#endif
} }

