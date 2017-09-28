#include "xld\WaterConservancyManager.h"
#include "TerrainManager.h"
#include "BillboardManager.h"
#include "QtCore\QTextCodec"
#include "AnalysisToolManager.h"
using namespace EarthView::XldManager;

EarthView::XldManager::CWaterConservancyManager* CWaterConservancyManager::mpSingleton = NULL;

EarthView::XldManager::CWaterConservancyManager::CWaterConservancyManager()
{
	QTextCodec *codec = QTextCodec::codecForName("system");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);
}

EarthView::XldManager::CWaterConservancyManager::~CWaterConservancyManager()
{
}

void EarthView::XldManager::CWaterConservancyManager::Initialise(EarthView::World::Spatial3D::Controls::CGlobeControl * ref_globecontrol)
{
	mpGlobeControl = ref_globecontrol;
	EarthView::World::Graphic::CResourceGroupManager* resourceGM = EarthView::World::Graphic::CResourceGroupManager::getSingletonPtr();
	EVString folder;
	CDirectory::getCurrentDirectory(folder);
	folder += "/Resource";
	if (!resourceGM->getResourceGroup("Resource"))
	{
		resourceGM->createResourceGroup("Resource");
		resourceGM->addResourceLocation(folder, "FileSystem", "Resource");
		resourceGM->initialiseResourceGroup("Resource");
	}
}

void EarthView::XldManager::CWaterConservancyManager::CreateTerrain(const EVString& grdFileName)
{
	EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()->CreateGrdTerrain(grdFileName);
}

EVString  EarthView::XldManager::CWaterConservancyManager::GetTerrainName(const ev_int32 terrainIndex)
{
	return EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()->GetTerrainName(terrainIndex);
}

void EarthView::XldManager::CWaterConservancyManager::SetTerrainVisible(const EVString& terrainName, const ev_bool& isVisible)
{
	EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()->SetTerrainVisible(terrainName,isVisible);
}


void EarthView::XldManager::CWaterConservancyManager::SetTerrainOffset(const EVString& terrainName, const ev_real64 offset)
{
	EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()->RaiseTerrain(terrainName, offset);
}

void EarthView::XldManager::CWaterConservancyManager::MarkPosistion(const EVString& name,const EVString & imgeFileName,const EVString& tip ,ev_real64 longi, ev_real64 lati, ev_real64 alti)
{
	EarthView::Xld::RenderLib::CBilloardManager::getSingletonPtr()->CreateBillBoard(name, imgeFileName, tip, longi, lati, alti);
}

void EarthView::XldManager::CWaterConservancyManager::CreateWaterSurface(const ev_real64 & waterHeight)
{
}

void EarthView::XldManager::CWaterConservancyManager::SetSectionQueryEnable(const ev_bool & isEnable)
{
}

void EarthView::XldManager::CWaterConservancyManager::SetTerrainHeightQueryEnable(const ev_bool & isEnable)
{
}

void EarthView::XldManager::CWaterConservancyManager::DrawRectBounds()
{
	EarthView::Xld::CAnalysisToolManager::GetSingletonPtr()->DrawRectBounds();
}

ev_uint64 EarthView::XldManager::CWaterConservancyManager::GetTerrainCount()
{
	return EarthView::Xld::RenderLib::CTerrainManager::getSingletonPtr()->GetTerrainCount();
}

EarthView::XldManager::CWaterConservancyManager::CWaterConservancyManager(EarthView::World::Core::CNameValuePairList * pList)
{
}

EarthView::XldManager::CWaterConservancyManager* EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()
{
	if (!mpSingleton)
	{
		mpSingleton = new CWaterConservancyManager();
		
	}
	return mpSingleton;
	
}
