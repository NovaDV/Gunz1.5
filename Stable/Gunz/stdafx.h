#pragma once


#define POINTER_64 __ptr64
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

// Windows
#include <afxdb.h>
#include <afxtempl.h>
#include <afxdtctl.h>

#include <winsock2.h>
#include <mswsock.h>

#include <crtdbg.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <mmsystem.h>
#include <shlwapi.h>
#include <shellapi.h>

#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <math.h>
#include <cstddef>
#include <comutil.h>
#include <stdio.h>

#include "../CSCommon/MFeatureDefine.h"


// stl
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <sstream>

// DirectX Includes
#include "d3d9.h"
#include "d3dx9math.h"

#include "fmod.h"
// cml
#include "MXml.h"
#include "rapidxml.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_print.hpp"
#include "MUtil.h"
#include "MDebug.h"
#include "MRTTI.h"
#include "MUID.h"
#include "MemPool.h"

// mint
#include "Mint.h"
#include "MWidget.h"
#include "MBitmap.h"
#include "MButton.h"
#include "MListBox.h"
#include "MTextArea.h"
#include "MTabCtrl.h"
#include "MComboBox.h"
#include "MFrame.h"
#include "MPopupMenu.h"

// realspace2
#include "rtypes.h"
#include "RNameSpace.h"
#include "RTypes.h"
#include "RealSpace2.h"
#include "RBspObject.h"
#include "XBspObject.h"
#include "RMeshMgr.h"
#include "RVisualMeshMgr.h"
#include "RMaterialList.h"
#include "RAnimationMgr.h"
#include "Mint4R2.h"

// cscommon
#include "MObject.h"
#include "MMatchObject.h"
#include "MMatchStage.h"
#include "MMatchItem.h"
#include "MMatchMap.h"
#include "MSafeUDP.h"
#include "MMatchClient.h"
#include "MGameClient.h"
#include "MMatchTransDataType.h"
#include "MErrorTable.h"
#include "Config.h"
#include "MSharedCommandTable.h"
#include "MObjectTypes.h"
#include "MMatchBuff.h"

// gunz global
#include "ZApplication.h"
#include "ZGlobal.h"
#include "ZMessages.h"
#include "ZStringResManager.h"
#include "ZGameInterface.h"
#include "ZCombatInterface.h"
//#include "ZGame.h"
#include "ZGameClient.h"
#include "ZObject.h"
#include "ZIDLResource.h"
#include "ZInterfaceListener.h"
#include "ZColorTable.h"
#include "ZMyInfo.h"
#include "ZMyItemList.h"
#include "ZNetRepository.h"
#include "ZItem.h"
#include "ZItemDesc.h"
#include "ZPost.h"
#include "ZSoundEngine.h"
#include "ZSoundFMod.h"
#include "ZCamera.h"
#include "ZCharacter.h"