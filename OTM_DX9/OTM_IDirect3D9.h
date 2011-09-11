/*
This file is part of OpenTexMod.


OpenTexMod is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenTexMod is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with FooOpenTexMod.  If not, see <http://www.gnu.org/licenses/>.
*/



#ifndef OTM_IDirect3D9_H_
#define OTM_IDirect3D9_H_


#include <d3d9.h>
#include <d3dx9.h>
#include "OTM_TextureServer.h"
#include "OTM_TextureClient.h"

class OTM_IDirect3D9 : public IDirect3D9
{
public:
    OTM_IDirect3D9(IDirect3D9 *pOriginal, OTM_TextureServer *server);
    virtual ~OTM_IDirect3D9(void);

    // The original DX9 function definitions
	HRESULT  __stdcall QueryInterface(REFIID riid, void** ppvObj);
    ULONG    __stdcall AddRef(void);
	ULONG    __stdcall Release(void);
    HRESULT  __stdcall RegisterSoftwareDevice(void* pInitializeFunction);
	UINT     __stdcall GetAdapterCount(void);
	HRESULT  __stdcall GetAdapterIdentifier(UINT Adapter,DWORD Flags,D3DADAPTER_IDENTIFIER9* pIdentifier) ;
    UINT     __stdcall GetAdapterModeCount(UINT Adapter, D3DFORMAT Format);
    HRESULT  __stdcall EnumAdapterModes(UINT Adapter,D3DFORMAT Format,UINT Mode,D3DDISPLAYMODE* pMode) ;
    HRESULT  __stdcall GetAdapterDisplayMode( UINT Adapter,D3DDISPLAYMODE* pMode) ;
    HRESULT  __stdcall CheckDeviceType(UINT iAdapter,D3DDEVTYPE DevType,D3DFORMAT DisplayFormat,D3DFORMAT BackBufferFormat,BOOL bWindowed) ;
    HRESULT  __stdcall CheckDeviceFormat(UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,DWORD Usage,D3DRESOURCETYPE RType,D3DFORMAT CheckFormat) ;
    HRESULT  __stdcall CheckDeviceMultiSampleType(UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT SurfaceFormat,BOOL Windowed,D3DMULTISAMPLE_TYPE MultiSampleType,DWORD* pQualityLevels) ;
    HRESULT  __stdcall CheckDepthStencilMatch(UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT AdapterFormat,D3DFORMAT RenderTargetFormat,D3DFORMAT DepthStencilFormat) ;
    HRESULT  __stdcall CheckDeviceFormatConversion(UINT Adapter,D3DDEVTYPE DeviceType,D3DFORMAT SourceFormat,D3DFORMAT TargetFormat);
    HRESULT  __stdcall GetDeviceCaps(UINT Adapter,D3DDEVTYPE DeviceType,D3DCAPS9* pCaps) ;
	HMONITOR __stdcall GetAdapterMonitor(UINT Adapter) ;
	HRESULT  __stdcall CreateDevice(UINT Adapter,D3DDEVTYPE DeviceType,HWND hFocusWindow,DWORD BehaviorFlags,D3DPRESENT_PARAMETERS* pPresentationParameters,IDirect3DDevice9** ppReturnedDeviceInterface) ;
    // The original DX9 function definitions

//private:
   	IDirect3D9 *m_pIDirect3D9;
   	OTM_TextureServer*  OTM_Server;
};

#endif
