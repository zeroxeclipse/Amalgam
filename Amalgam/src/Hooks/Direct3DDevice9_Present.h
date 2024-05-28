#pragma once
#include <d3d9.h>

#include <atomic>

namespace WndProc
{
	inline HWND hwWindow;
	inline WNDPROC Original;
	LONG __stdcall Func(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	void Initialize();
	void Unload();
}

namespace DirectX
{
	void Startup();

	inline std::atomic<bool> bIsReady = ATOMIC_VAR_INIT(false);

	HRESULT __stdcall HookedPresent(IDirect3DDevice9* pDevice, const RECT* pSource, const RECT* pDestination, const RGNDATA* pDirtyRegion);
	HRESULT __stdcall HookedReset(IDirect3DDevice9* pDevice, D3DPRESENT_PARAMETERS* pParams);
	inline decltype(&HookedPresent) pOriginalPresent = nullptr;
	inline decltype(&HookedReset) pOriginalReset = nullptr;
}