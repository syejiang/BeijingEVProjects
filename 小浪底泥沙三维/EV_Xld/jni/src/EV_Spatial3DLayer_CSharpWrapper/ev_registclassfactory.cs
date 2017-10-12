using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial3DLayer_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::CBilBuilder", new EarthView.World.Spatial3D.BilBuilderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayer", new EarthView.World.Spatial3D.Atlas.ChartClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.ChartClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.ChartClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.ChartClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayer", new EarthView.World.Spatial3D.Atlas.ChartWMSClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.ChartWMSClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.ChartWMSClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMSClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.ChartWMSClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayer", new EarthView.World.Spatial3D.Atlas.ChartWMTSClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.ChartWMTSClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.ChartWMTSClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CChartWMTSClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.ChartWMTSClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayer", new EarthView.World.Spatial3D.Atlas.FeatureGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayerProxy", new EarthView.World.Spatial3D.Atlas.FeatureGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayerFactory", new EarthView.World.Spatial3D.Atlas.FeatureGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CFeatureGroupLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.FeatureGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayer", new EarthView.World.Spatial3D.Atlas.ImageClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.ImageClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.ImageClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.ImageClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer", new EarthView.World.Spatial3D.Atlas.ImageGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayerProxy", new EarthView.World.Spatial3D.Atlas.ImageGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::TimeList", new EarthView.World.Spatial3D.Atlas.ImageGroupLayer.TimeListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayer::CDesiredTime", new EarthView.World.Spatial3D.Atlas.ImageGroupLayer.DesiredTimeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayerFactory", new EarthView.World.Spatial3D.Atlas.ImageGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CImageGroupLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.ImageGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IRelativeSceneLayer", new EarthView.World.Spatial3D.Atlas.IrelativescenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IRelativeSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.IrelativescenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::ITerrainLayer", new EarthView.World.Spatial3D.Atlas.IterrainlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::ITerrainLayerProxy", new EarthView.World.Spatial3D.Atlas.IterrainlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IWebClampSceneLayer", new EarthView.World.Spatial3D.Atlas.IwebclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::IWebClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.IwebclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayer3DLabelProperty", new EarthView.World.Spatial3D.Atlas.Layer3DLabelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLayer3DLabelPropertyProxy", new EarthView.World.Spatial3D.Atlas.Layer3DLabelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayer", new EarthView.World.Spatial3D.Atlas.LocalImageClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.LocalImageClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.LocalImageClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalImageClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.LocalImageClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayer", new EarthView.World.Spatial3D.Atlas.LocalTerrainLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayerProxy", new EarthView.World.Spatial3D.Atlas.LocalTerrainLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayerFactory", new EarthView.World.Spatial3D.Atlas.LocalTerrainLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CLocalTerrainLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.LocalTerrainLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayer", new EarthView.World.Spatial3D.Atlas.NeoVectorWebSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.NeoVectorWebSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.NeoVectorWebSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CNeoVectorWebSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.NeoVectorWebSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayer", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorclamplayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayerProxy", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorclamplayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayerFactory", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorclamplayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorClampLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorclamplayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayer", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorrelativescenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorrelativescenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorrelativescenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWFSVectorRelativeSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.OgcwfsvectorrelativescenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayer", new EarthView.World.Spatial3D.Atlas.OgcwmsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.OgcwmsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.OgcwmsclampscenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMSClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.OgcwmsclampscenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayer", new EarthView.World.Spatial3D.Atlas.OgcwmtsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.OgcwmtsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.OgcwmtsclampscenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::COGCWMTSClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.OgcwmtsclampscenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterface", new EarthView.World.Spatial3D.Atlas.SelectedGeometryStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CSelectedGeometryStringInterfaceProxy", new EarthView.World.Spatial3D.Atlas.SelectedGeometryStringInterfaceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTempGroupLayer", new EarthView.World.Spatial3D.Atlas.TempGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTempGroupLayerProxy", new EarthView.World.Spatial3D.Atlas.TempGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayer", new EarthView.World.Spatial3D.Atlas.TerrainGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerProxy", new EarthView.World.Spatial3D.Atlas.TerrainGroupLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerFactory", new EarthView.World.Spatial3D.Atlas.TerrainGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainGroupLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.TerrainGroupLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainLayer", new EarthView.World.Spatial3D.Atlas.TerrainLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainLayerProxy", new EarthView.World.Spatial3D.Atlas.TerrainLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainLayerFactory", new EarthView.World.Spatial3D.Atlas.TerrainLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.TerrainLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainManager", new EarthView.World.Spatial3D.Atlas.TerrainManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CTerrainManagerProxy", new EarthView.World.Spatial3D.Atlas.TerrainManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorCache3DLayerInfo", new EarthView.World.Spatial3D.Atlas.VectorCache3DLayerInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayer", new EarthView.World.Spatial3D.Atlas.VectorDBClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.VectorDBClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.VectorDBClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorDBClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.VectorDBClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager", new EarthView.World.Spatial3D.Atlas.VectorLayerBackgroundQueueManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisher", new EarthView.World.Spatial3D.Atlas.VectorOctreeCachePublisherClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreeCachePublisherProxy", new EarthView.World.Spatial3D.Atlas.VectorOctreeCachePublisherClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListener", new EarthView.World.Spatial3D.Atlas.VectorOctreePublishListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorOctreePublishListenerProxy", new EarthView.World.Spatial3D.Atlas.VectorOctreePublishListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVector3DCacheField", new EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVector3DCacheFieldVector", new EarthView.World.Spatial3D.Atlas.Vector3DCacheFieldVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayer", new EarthView.World.Spatial3D.Atlas.VectorRelativeSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.VectorRelativeSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.VectorRelativeSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.VectorRelativeSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayer", new EarthView.World.Spatial3D.Atlas.VectorWebClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.VectorWebClampSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.VectorWebClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.VectorWebClampSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebRelativeSceneLayer", new EarthView.World.Spatial3D.Atlas.VectorWebRelativeSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorWebRelativeSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.VectorWebRelativeSceneLayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeWebSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.VectorRelativeWebSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CVectorRelativeWebSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.VectorRelativeWebSceneLayerFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayer", new EarthView.World.Spatial3D.Atlas.WmtsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayerProxy", new EarthView.World.Spatial3D.Atlas.WmtsclampscenelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayerFactory", new EarthView.World.Spatial3D.Atlas.WmtsclampscenelayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::Atlas::CWMTSClampSceneLayerFactoryProxy", new EarthView.World.Spatial3D.Atlas.WmtsclampscenelayerfactoryClassFactory());
	}
}

