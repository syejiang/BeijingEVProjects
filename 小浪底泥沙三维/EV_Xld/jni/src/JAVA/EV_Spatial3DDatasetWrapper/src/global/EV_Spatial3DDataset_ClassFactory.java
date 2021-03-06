package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial3DDataset_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator", new com.earthview.world.spatial3d.dataset.EffectDataSetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSetIteratorProxy", new com.earthview.world.spatial3d.dataset.EffectDataSetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSet", new com.earthview.world.spatial3d.dataset.EffectDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSetProxy", new com.earthview.world.spatial3d.dataset.EffectDataSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectGeometryField", new com.earthview.world.spatial3d.dataset.EffectGeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectGeometryFieldProxy", new com.earthview.world.spatial3d.dataset.EffectGeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSource", new com.earthview.world.spatial3d.dataset.EffectDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSourceProxy", new com.earthview.world.spatial3d.dataset.EffectDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectDataSourceFactory", new com.earthview.world.spatial3d.dataset.EffectDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectDataSourceFactoryProxy", new com.earthview.world.spatial3d.dataset.EffectDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectFeature", new com.earthview.world.spatial3d.dataset.EffectFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectFeatureProxy", new com.earthview.world.spatial3d.dataset.EffectFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectFeatureIterator", new com.earthview.world.spatial3d.dataset.EffectFeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEffectFeatureIteratorProxy", new com.earthview.world.spatial3d.dataset.EffectFeatureIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInstance", new com.earthview.world.spatial3d.dataset.EffectInstanceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInstanceVector", new com.earthview.world.spatial3d.dataset.EffectInstanceVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo", new com.earthview.world.spatial3d.dataset.EffectUserTypeInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector", new com.earthview.world.spatial3d.dataset.EffectUserTypeInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectRefInfo", new com.earthview.world.spatial3d.dataset.EffectRefInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectRefInfoVector", new com.earthview.world.spatial3d.dataset.EffectRefInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectResourceInfo", new com.earthview.world.spatial3d.dataset.EffectResourceInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectResourceInfoVector", new com.earthview.world.spatial3d.dataset.EffectResourceInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectFeatureVector", new com.earthview.world.spatial3d.dataset.EffectFeatureVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree", new com.earthview.world.spatial3d.dataset.EffectUserTypeTreeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityDataset", new com.earthview.world.spatial3d.dataset.EntityDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityDatasetProxy", new com.earthview.world.spatial3d.dataset.EntityDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::ModelEditOperation", new com.earthview.world.spatial3d.dataset.ModelEditOperationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityDatasetIterator", new com.earthview.world.spatial3d.dataset.EntityDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityDatasetIteratorProxy", new com.earthview.world.spatial3d.dataset.EntityDatasetIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityFeature", new com.earthview.world.spatial3d.dataset.EntityFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityFeatureProxy", new com.earthview.world.spatial3d.dataset.EntityFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityGeometry", new com.earthview.world.spatial3d.dataset.EntityGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityGeometryProxy", new com.earthview.world.spatial3d.dataset.EntityGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory", new com.earthview.world.spatial3d.dataset.EntityGeometryFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntityIterator", new com.earthview.world.spatial3d.dataset.EntityIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntityIteratorProxy", new com.earthview.world.spatial3d.dataset.EntityIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEntitySelection", new com.earthview.world.spatial3d.dataset.EntitySelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCEntitySelectionProxy", new com.earthview.world.spatial3d.dataset.EntitySelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CFeatureSelection3D", new com.earthview.world.spatial3d.dataset.FeatureSelection3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCFeatureSelection3DProxy", new com.earthview.world.spatial3d.dataset.FeatureSelection3DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo", new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector", new com.earthview.world.spatial3d.dataset.MeshEffectRefInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager", new com.earthview.world.spatial3d.dataset.MeshEffectRefManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset", new com.earthview.world.spatial3d.dataset.MeshTemplateDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCMeshTemplateDatasetProxy", new com.earthview.world.spatial3d.dataset.MeshTemplateDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateFeature", new com.earthview.world.spatial3d.dataset.MeshTemplateFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCMeshTemplateFeatureProxy", new com.earthview.world.spatial3d.dataset.MeshTemplateFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry", new com.earthview.world.spatial3d.dataset.MeshTemplateGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCMeshTemplateGeometryProxy", new com.earthview.world.spatial3d.dataset.MeshTemplateGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory", new com.earthview.world.spatial3d.dataset.MeshTemplateGeometryFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CMeshTemplateIterator", new com.earthview.world.spatial3d.dataset.MeshTemplateIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCMeshTemplateIteratorProxy", new com.earthview.world.spatial3d.dataset.MeshTemplateIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelCacheUtility", new com.earthview.world.spatial3d.dataset.ModelCacheUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDataset", new com.earthview.world.spatial3d.dataset.ModelDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelDatasetProxy", new com.earthview.world.spatial3d.dataset.ModelDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent", new com.earthview.world.spatial3d.dataset.ModelDatasetEditEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDatasetUtility", new com.earthview.world.spatial3d.dataset.ModelDatasetUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelGeometryField", new com.earthview.world.spatial3d.dataset.ModelGeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelGeometryFieldProxy", new com.earthview.world.spatial3d.dataset.ModelGeometryFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDataSource", new com.earthview.world.spatial3d.dataset.ModelDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelDataSourceProxy", new com.earthview.world.spatial3d.dataset.ModelDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelDataSourceFactory", new com.earthview.world.spatial3d.dataset.ModelDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCModelDataSourceFactoryProxy", new com.earthview.world.spatial3d.dataset.ModelDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelEventUtility", new com.earthview.world.spatial3d.dataset.ModelEventUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelFeatureUtility", new com.earthview.world.spatial3d.dataset.ModelFeatureUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CModelOctreeManager", new com.earthview.world.spatial3d.dataset.ModelOctreeManagerClassFactory());
		GlobalClassFactoryMap.put("CResourceData", new ResourceDataClassFactory());
		GlobalClassFactoryMap.put("CResourceDataList", new ResourceDataListClassFactory());
		GlobalClassFactoryMap.put("CModelData", new ModelDataClassFactory());
		GlobalClassFactoryMap.put("IModelTemplatePlugin", new ImodeltemplatepluginClassFactory());
		GlobalClassFactoryMap.put("JIModelTemplatePluginProxy", new ImodeltemplatepluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CObjectIDList", new com.earthview.world.spatial3d.dataset.ObjectIDListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CPropertyManager", new com.earthview.world.spatial3d.dataset.PropertyManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceDataset", new com.earthview.world.spatial3d.dataset.ResourceDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCResourceDatasetProxy", new com.earthview.world.spatial3d.dataset.ResourceDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceFeature", new com.earthview.world.spatial3d.dataset.ResourceFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCResourceFeatureProxy", new com.earthview.world.spatial3d.dataset.ResourceFeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceGeometry", new com.earthview.world.spatial3d.dataset.ResourceGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCResourceGeometryProxy", new com.earthview.world.spatial3d.dataset.ResourceGeometryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory", new com.earthview.world.spatial3d.dataset.ResourceGeometryFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CResourceIterator", new com.earthview.world.spatial3d.dataset.ResourceIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCResourceIteratorProxy", new com.earthview.world.spatial3d.dataset.ResourceIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::TextureStreamItem", new com.earthview.world.spatial3d.dataset.TextureStreamItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::TextureStreamVector", new com.earthview.world.spatial3d.dataset.TextureStreamVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::FeatureVector", new com.earthview.world.spatial3d.dataset.FeatureVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::IntMap", new com.earthview.world.spatial3d.dataset.IntMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInfo", new com.earthview.world.spatial3d.dataset.EffectInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CEffectInfoVector", new com.earthview.world.spatial3d.dataset.EffectInfoVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::DataSetVector", new com.earthview.world.spatial3d.dataset.DataSetVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeInfo", new com.earthview.world.spatial3d.dataset.UserTypeInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeTree", new com.earthview.world.spatial3d.dataset.UserTypeTreeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeInfoList", new com.earthview.world.spatial3d.dataset.UserTypeInfoListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap", new com.earthview.world.spatial3d.dataset.NodecodeAndTypeMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CUserTypeManager", new com.earthview.world.spatial3d.dataset.UserTypeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset", new com.earthview.world.spatial3d.dataset.VectorOctreeDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDatasetProxy", new com.earthview.world.spatial3d.dataset.VectorOctreeDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSource", new com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataSourceProxy", new com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataSourceFactory", new com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataSourceFactoryProxy", new com.earthview.world.spatial3d.dataset.VectorOctreeDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CVectorOctreeDataMetaInfo", new com.earthview.world.spatial3d.dataset.VectorOctreeDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCVectorOctreeDataMetaInfoProxy", new com.earthview.world.spatial3d.dataset.VectorOctreeDataMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CWebEntityDataset", new com.earthview.world.spatial3d.dataset.WebEntityDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCWebEntityDatasetProxy", new com.earthview.world.spatial3d.dataset.WebEntityDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CWebEntityIterator", new com.earthview.world.spatial3d.dataset.WebEntityIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCWebEntityIteratorProxy", new com.earthview.world.spatial3d.dataset.WebEntityIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset", new com.earthview.world.spatial3d.dataset.WebMeshTemplateDatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::Dataset::JCWebMeshTemplateDatasetProxy", new com.earthview.world.spatial3d.dataset.WebMeshTemplateDatasetClassFactory());
	}
}

