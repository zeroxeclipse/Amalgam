#include "../SDK/SDK.h"

MAKE_HOOK(StudioRender_SetAlphaModulation, U::Memory.GetVFunc(I::StudioRender, 28), void, __fastcall,
	void* ecx, float flAlpha)
{
	if(Vars::Visuals::World::Modulations.Value & (1 << 2) && 
		G::DrawingProps && 
		!(Vars::Visuals::UI::CleanScreenshots.Value && I::EngineClient->IsTakingScreenshot()))
	{
		auto flVal = Vars::Colors::PropModulation.Value.a / 255.f * flAlpha;

		if(flVal == 0.f)
		{
			flVal = 1.f;
		}

		return CALL_ORIGINAL(ecx, flVal);
	}
		

	CALL_ORIGINAL(ecx, flAlpha);
}