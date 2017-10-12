using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_SpatialInterface_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IBitmap", new EarthView.World.Display.IbitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IBitmapProxy", new EarthView.World.Display.IbitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::ICachedBitmap", new EarthView.World.Display.IcachedbitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::ICachedBitmapProxy", new EarthView.World.Display.IcachedbitmapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IChartLayer", new EarthView.World.Spatial.Atlas.IchartlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IChartLayerProxy", new EarthView.World.Spatial.Atlas.IchartlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IChartOption", new EarthView.World.Spatial.Display.IchartoptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IChartOptionProxy", new EarthView.World.Spatial.Display.IchartoptionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IColor", new EarthView.World.Spatial.Display.IcolorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IColorProxy", new EarthView.World.Spatial.Display.IcolorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDataAccessor", new EarthView.World.Spatial.Accessor.IdataaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDataAccessorProxy", new EarthView.World.Spatial.Accessor.IdataaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchange", new EarthView.World.Spatial.Convertor.IdataexchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeProxy", new EarthView.World.Spatial.Convertor.IdataexchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeListener", new EarthView.World.Spatial.Convertor.IdataexchangelistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::IDataExchangeListenerProxy", new EarthView.World.Spatial.Convertor.IdataexchangelistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataMetaInfo", new EarthView.World.Spatial.GeoDataset.IdatametainfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataMetaInfoProxy", new EarthView.World.Spatial.GeoDataset.IdatametainfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataMetaInfos", new EarthView.World.Spatial.GeoDataset.IdatametainfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataMetaInfosProxy", new EarthView.World.Spatial.GeoDataset.IdatametainfosClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataset", new EarthView.World.Spatial.GeoDataset.IdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDatasetProxy", new EarthView.World.Spatial.GeoDataset.IdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDatasetIterator", new EarthView.World.Spatial.GeoDataset.IdatasetiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDatasetIteratorProxy", new EarthView.World.Spatial.GeoDataset.IdatasetiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDatasetOperator", new EarthView.World.Spatial.GeoDataset.IdatasetoperatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDatasetOperatorProxy", new EarthView.World.Spatial.GeoDataset.IdatasetoperatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSource", new EarthView.World.Spatial.GeoDataset.IdatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSourceProxy", new EarthView.World.Spatial.GeoDataset.IdatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFileDataSource", new EarthView.World.Spatial.GeoDataset.IfiledatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFileDataSourceProxy", new EarthView.World.Spatial.GeoDataset.IfiledatasourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSourceFactory", new EarthView.World.Spatial.GeoDataset.IdatasourcefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IDataSourceFactoryProxy", new EarthView.World.Spatial.GeoDataset.IdatasourcefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator", new EarthView.World.Spatial.GeoDataset.DataSourceFactoryEnumeratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDBAccessor", new EarthView.World.Spatial.Accessor.IdbaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IDBAccessorProxy", new EarthView.World.Spatial.Accessor.IdbaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplay2D", new EarthView.World.Display.Idisplay2dClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplay2DProxy", new EarthView.World.Display.Idisplay2dClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ICacheInfo", new EarthView.World.Spatial.Atlas.IcacheinfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ICacheInfoProxy", new EarthView.World.Spatial.Atlas.IcacheinfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IDisplayCache", new EarthView.World.Spatial.Atlas.IdisplaycacheClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IDisplayCacheProxy", new EarthView.World.Spatial.Atlas.IdisplaycacheClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplayOptions", new EarthView.World.Display.IdisplayoptionsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IDisplayOptionsProxy", new EarthView.World.Display.IdisplayoptionsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IElement", new EarthView.World.Spatial.Carto.IelementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IElementProxy", new EarthView.World.Spatial.Carto.IelementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEnvelope", new EarthView.World.Spatial.Geometry.IenvelopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEnvelopeProxy", new EarthView.World.Spatial.Geometry.IenvelopeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeature", new EarthView.World.Spatial.GeoDataset.IfeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureProxy", new EarthView.World.Spatial.GeoDataset.IfeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureClass", new EarthView.World.Spatial.GeoDataset.IfeatureclassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureClassProxy", new EarthView.World.Spatial.GeoDataset.IfeatureclassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ISpatialIndexParam", new EarthView.World.Spatial.GeoDataset.IspatialindexparamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ISpatialIndexParamProxy", new EarthView.World.Spatial.GeoDataset.IspatialindexparamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureClass2", new EarthView.World.Spatial.GeoDataset.Ifeatureclass2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureClass2Proxy", new EarthView.World.Spatial.GeoDataset.Ifeatureclass2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureIterator", new EarthView.World.Spatial.GeoDataset.IfeatureiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureIteratorProxy", new EarthView.World.Spatial.GeoDataset.IfeatureiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Display::IFeatureRenderer", new EarthView.World.Spatial2D.Display.IfeaturerendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Display::IFeatureRendererProxy", new EarthView.World.Spatial2D.Display.IfeaturerendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureSelection", new EarthView.World.Spatial.GeoDataset.IfeatureselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFeatureSelectionProxy", new EarthView.World.Spatial.GeoDataset.IfeatureselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IField", new EarthView.World.Spatial.GeoDataset.IfieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFieldProxy", new EarthView.World.Spatial.GeoDataset.IfieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFields", new EarthView.World.Spatial.GeoDataset.IfieldsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IFieldsProxy", new EarthView.World.Spatial.GeoDataset.IfieldsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IFileAccessor", new EarthView.World.Spatial.Accessor.IfileaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IFileAccessorProxy", new EarthView.World.Spatial.Accessor.IfileaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IGeometry", new EarthView.World.Spatial.Geometry.IgeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IGeometryProxy", new EarthView.World.Spatial.Geometry.IgeometryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IGeometryField", new EarthView.World.Spatial.GeoDataset.IgeometryfieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IGeometryFieldProxy", new EarthView.World.Spatial.GeoDataset.IgeometryfieldClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IGeometryInsert", new EarthView.World.Spatial.Carto.IgeometryinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IGeometryInsertProxy", new EarthView.World.Spatial.Carto.IgeometryinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IGroupLayer", new EarthView.World.Spatial.Atlas.IgrouplayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IGroupLayerProxy", new EarthView.World.Spatial.Atlas.IgrouplayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelEngine", new EarthView.World.Spatial.Display.IlabelengineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelEngineProxy", new EarthView.World.Spatial.Display.IlabelengineClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CSubLabelElement", new EarthView.World.Spatial.Display.SubLabelElementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CLabelElement", new EarthView.World.Spatial.Display.LabelElementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::CLabelElements", new EarthView.World.Spatial.Display.LabelElementsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelProperty", new EarthView.World.Spatial.Display.IlabelpropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelPropertyProxy", new EarthView.World.Spatial.Display.IlabelpropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelRenderer", new EarthView.World.Spatial.Display.IlabelrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ILabelRendererProxy", new EarthView.World.Spatial.Display.IlabelrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayer", new EarthView.World.Spatial.Atlas.IlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayerProxy", new EarthView.World.Spatial.Atlas.IlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayerFactory", new EarthView.World.Spatial.Atlas.IlayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayerFactoryProxy", new EarthView.World.Spatial.Atlas.IlayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::CLayerFactoryEnumerator", new EarthView.World.Spatial.Atlas.LayerFactoryEnumeratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayerSelection", new EarthView.World.Spatial.Atlas.IlayerselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ILayerSelectionProxy", new EarthView.World.Spatial.Atlas.IlayerselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegend", new EarthView.World.Spatial.Carto.IlegendClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegendProxy", new EarthView.World.Spatial.Carto.IlegendClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegendItem", new EarthView.World.Spatial.Carto.IlegenditemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegendItemProxy", new EarthView.World.Spatial.Carto.IlegenditemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegendItemVector", new EarthView.World.Spatial.Carto.IlegenditemvectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ILegendItemVectorProxy", new EarthView.World.Spatial.Carto.IlegenditemvectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapListener", new EarthView.World.Spatial.Atlas.ImaplistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapListenerProxy", new EarthView.World.Spatial.Atlas.ImaplistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IRenderInformation", new EarthView.World.Spatial.Atlas.IrenderinformationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IRenderInformationProxy", new EarthView.World.Spatial.Atlas.IrenderinformationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMap", new EarthView.World.Spatial.Atlas.ImapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapProxy", new EarthView.World.Spatial.Atlas.ImapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapFactory", new EarthView.World.Spatial.Atlas.ImapfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapFactoryProxy", new EarthView.World.Spatial.Atlas.ImapfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapFrame", new EarthView.World.Spatial.Carto.ImapframeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapFrameProxy", new EarthView.World.Spatial.Carto.ImapframeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapSelection", new EarthView.World.Spatial.Atlas.ImapselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IMapSelectionProxy", new EarthView.World.Spatial.Atlas.ImapselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapSurround", new EarthView.World.Spatial.Carto.ImapsurroundClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapSurroundProxy", new EarthView.World.Spatial.Carto.ImapsurroundClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapTitle", new EarthView.World.Spatial.Carto.ImaptitleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMapTitleProxy", new EarthView.World.Spatial.Carto.ImaptitleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMarkNorthArrow", new EarthView.World.Spatial.Carto.ImarknortharrowClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IMarkNorthArrowProxy", new EarthView.World.Spatial.Carto.ImarknortharrowClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPage", new EarthView.World.Spatial.Carto.IpageClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPageProxy", new EarthView.World.Spatial.Carto.IpageClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPageLayout", new EarthView.World.Spatial.Carto.IpagelayoutClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPageLayoutProxy", new EarthView.World.Spatial.Carto.IpagelayoutClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IPaintDevice", new EarthView.World.Display.IpaintdeviceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Display::IPaintDeviceProxy", new EarthView.World.Display.IpaintdeviceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPictureInsert", new EarthView.World.Spatial.Carto.IpictureinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IPictureInsertProxy", new EarthView.World.Spatial.Carto.IpictureinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IPropertySet", new EarthView.World.Spatial.GeoDataset.IpropertysetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IPropertySetProxy", new EarthView.World.Spatial.GeoDataset.IpropertysetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IQueryFilter", new EarthView.World.Spatial.GeoDataset.IqueryfilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IQueryFilterProxy", new EarthView.World.Spatial.GeoDataset.IqueryfilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IRangeTheme", new EarthView.World.Spatial.Theme.IrangethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IRangeThemeProxy", new EarthView.World.Spatial.Theme.IrangethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::IRasterBlock", new EarthView.World.Spatial2D.Raster.IrasterblockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::IRasterBlockProxy", new EarthView.World.Spatial2D.Raster.IrasterblockClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CAffineTransform", new EarthView.World.Spatial2D.Raster.AffineTransformClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IRasterDataset", new EarthView.World.Spatial.GeoDataset.IrasterdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::IRasterDatasetProxy", new EarthView.World.Spatial.GeoDataset.IrasterdatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IRasterLayer", new EarthView.World.Spatial.Atlas.IrasterlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IRasterLayerProxy", new EarthView.World.Spatial.Atlas.IrasterlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::IRasterRenderer", new EarthView.World.Spatial2D.Raster.IrasterrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::IRasterRendererProxy", new EarthView.World.Spatial2D.Raster.IrasterrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IRenderer", new EarthView.World.Spatial.Display.IrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::IRendererProxy", new EarthView.World.Spatial.Display.IrendererClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IScaleBar", new EarthView.World.Spatial.Carto.IscalebarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IScaleBarProxy", new EarthView.World.Spatial.Carto.IscalebarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IScaleText", new EarthView.World.Spatial.Carto.IscaletextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::IScaleTextProxy", new EarthView.World.Spatial.Carto.IscaletextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IScene", new EarthView.World.Spatial.Atlas.IsceneClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISceneProxy", new EarthView.World.Spatial.Atlas.IsceneClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISceneFactory", new EarthView.World.Spatial.Atlas.IscenefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISceneFactoryProxy", new EarthView.World.Spatial.Atlas.IscenefactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::ISimpleTheme", new EarthView.World.Spatial.Theme.IsimplethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::ISimpleThemeProxy", new EarthView.World.Spatial.Theme.IsimplethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialDisplay", new EarthView.World.Spatial.Display.IspatialdisplayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialDisplayProxy", new EarthView.World.Spatial.Display.IspatialdisplayClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ISpatialFilter", new EarthView.World.Spatial.GeoDataset.IspatialfilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ISpatialFilterProxy", new EarthView.World.Spatial.GeoDataset.IspatialfilterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEllipseSpheriod", new EarthView.World.Spatial.Geometry.IellipsespheriodClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::IEllipseSpheriodProxy", new EarthView.World.Spatial.Geometry.IellipsespheriodClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::ISpatialReference", new EarthView.World.Spatial.Geometry.IspatialreferenceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Geometry::ISpatialReferenceProxy", new EarthView.World.Spatial.Geometry.IspatialreferenceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialScale", new EarthView.World.Spatial.Atlas.IspatialscaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialScaleProxy", new EarthView.World.Spatial.Atlas.IspatialscaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialThemeScale", new EarthView.World.Spatial.Atlas.IspatialthemescaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialThemeScaleProxy", new EarthView.World.Spatial.Atlas.IspatialthemescaleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialTransformer", new EarthView.World.Spatial.Display.IspatialtransformerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISpatialTransformerProxy", new EarthView.World.Spatial.Display.IspatialtransformerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ISquareGrid", new EarthView.World.Spatial.Carto.IsquaregridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ISquareGridProxy", new EarthView.World.Spatial.Carto.IsquaregridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IStatisticsTheme", new EarthView.World.Spatial.Theme.IstatisticsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IStatisticsThemeProxy", new EarthView.World.Spatial.Theme.IstatisticsthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbol", new EarthView.World.Spatial.Display.IsymbolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolProxy", new EarthView.World.Spatial.Display.IsymbolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolFactory", new EarthView.World.Spatial.Display.IsymbolfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolFactoryProxy", new EarthView.World.Spatial.Display.IsymbolfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ITableProxy", new EarthView.World.Spatial.GeoDataset.ItableproxyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::GeoDataset::ITableProxyProxy", new EarthView.World.Spatial.GeoDataset.ItableproxyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ITextInsert", new EarthView.World.Spatial.Carto.ItextinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::ITextInsertProxy", new EarthView.World.Spatial.Carto.ItextinsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::ITheme", new EarthView.World.Spatial.Theme.IthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IThemeProxy", new EarthView.World.Spatial.Theme.IthemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IUniqueTheme", new EarthView.World.Spatial.Theme.IuniquethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Theme::IUniqueThemeProxy", new EarthView.World.Spatial.Theme.IuniquethemeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IVectorLayer", new EarthView.World.Spatial.Atlas.IvectorlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::IVectorLayerProxy", new EarthView.World.Spatial.Atlas.IvectorlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IWebAccessor", new EarthView.World.Spatial.Accessor.IwebaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Accessor::IWebAccessorProxy", new EarthView.World.Spatial.Accessor.IwebaccessorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::LayerRenderOrderController", new EarthView.World.Spatial.Atlas.LayerRenderOrderControllerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::LayerRenderOrderControllerProxy", new EarthView.World.Spatial.Atlas.LayerRenderOrderControllerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Raster::CProgressInfo", new EarthView.World.Spatial2D.Raster.ProgressInfoClassFactory());
	}
}

