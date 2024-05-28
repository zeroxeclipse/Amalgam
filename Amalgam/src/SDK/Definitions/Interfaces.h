#pragma once

#include "../../Utils/Feature/Feature.h"

#include "Interfaces/CClientModeShared.h"
#include "Interfaces/CClientState.h"
#include "Interfaces/CGlobalVarsBase.h"
#include "Interfaces/CTFGameRules.h"
#include "Interfaces/CTFPartyClient.h"
#include "Interfaces/IClientEntityList.h"
#include "Interfaces/ICVar.h"
#include "Interfaces/IEngineTrace.h"
#include "Interfaces/IEngineVGui.h"
#include "Interfaces/IGameEvents.h"
#include "Interfaces/IGameMovement.h"
#include "Interfaces/IInput.h"
#include "Interfaces/IInputSystem.h"
#include "Interfaces/IMaterialSystem.h"
#include "Interfaces/IMatSystemSurface.h"
#include "Interfaces/IMoveHelper.h"
#include "Interfaces/IStudioRender.h"
#include "Interfaces/IUniformRandomStream.h"
#include "Interfaces/IVEngineClient.h"
#include "Interfaces/IViewRender.h"
#include "Interfaces/IVModelInfo.h"
#include "Interfaces/IVModelRender.h"
#include "Interfaces/IVRenderView.h"
#include "Interfaces/Prediction.h"
#include "Interfaces/SteamInterfaces.h"
#include "Interfaces/VGuiPanel.h"
#include "Interfaces/ViewRenderBeams.h"
#include "Interfaces/VPhysics.h"

class CNullInterfaces
{
public:
	void Initialize();
};

ADD_FEATURE_CUSTOM(CNullInterfaces, Interfaces, H);