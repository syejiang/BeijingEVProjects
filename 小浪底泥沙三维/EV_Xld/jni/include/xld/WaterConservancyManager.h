#ifndef WATERCONSERVANCYMANAGER_H_
#define WATERCONSERVANCYMANAGER_H_

#include "xldmanager_cfg.h"
#include "globecontrol\globecontrol.h"
#include "WorldSetting.h"

namespace EarthView
{
	namespace XldManager
	{
		class EV_XLDMANAGER_DLL CWaterConservancyManager:public EarthView::World::Core::CBaseObject
		{
			
			friend class CTerrainManager;
			friend class CBilloardManager;
			friend class CWaterConservancyDataEngine;
		ev_private:
			CWaterConservancyManager(EarthView::World::Core::CNameValuePairList* pList);
		public:

			static CWaterConservancyManager* GetSingletonPtr();
			~CWaterConservancyManager();
			void Initialise(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globecontrol,EVString& runtimePath);
			void CreateTerrain(const EVString& grdFileName);
			EVString GetTerrainName(const ev_int32 terrainIndex);
			void SetTerrainVisible(const EVString& terrainName,const ev_bool& isVisible);
			void SetTerrainOffset(const EVString& terrainName, const ev_real64 offset);
			void MarkPosistion(const EVString& name, const EVString & imgeFileName, const EVString& tip, ev_real64 longi, ev_real64 lati, ev_real64 alti);
			
			void SetSectionQueryEnable(const ev_bool& isEnable);
			void SetTerrainHeightQueryEnable(const ev_bool& isEnable);
			
			/// <summary>
			/// 创建水面，该方法仅在无水面时使用，并且仅使用一次即可
			/// </summary>
			/// <param name="waterHeight">水面高度</param>
			void CreateWaterSurface(const ev_real64& waterHeight);
			/// <summary>
			/// 设置水面的可见性
			/// </summary>
			/// <param name="isVisible">是否可见</param>
			void SetWaterSurfaceVisible(const ev_bool& isVisible);
			/// <summary>
			/// 设置水位高度
			/// </summary>
			/// <param name="waterLineHeight">水位数值</param>
			void SetWaterLineHeight(const ev_real64& waterLineHeight);
			/// <summary>
			/// 删除水面
			/// </summary>
			/// <param name="isSure">确认？</param>
			void DeleteWaterSurface(const ev_bool& isSure);

			void DrawRectBounds();
			void DrawPolylineBounds();
			ev_uint64 GetTerrainCount();
			EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
		protected:
			CWaterConservancyManager();
			static CWaterConservancyManager* mpSingleton;
			
		};
	}
}


#endif