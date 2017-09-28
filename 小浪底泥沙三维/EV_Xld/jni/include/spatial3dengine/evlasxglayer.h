﻿#ifndef EARTHVIEW_WORLD_SPATIAL3D_ATLAS_LASXGLAYER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ATLAS_LASXGLAYER_H

#include "spatial3dengine/obliquemodellayer.h"
#include "spatial3dengine/evlasutility.h"
#include "spatialinterface/ifeatureselection.h"
#include "geometry3d/layerselection3d.h"
#include "spatialinterface/icolor.h"

namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeatureClass;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				class CEVLasXGLayerFactory;
				class EV_Spatial3DEngine_DLL CEVLasXGLayer : public CObliqueModelLayer
				{
					friend class CEVLasXGLayerFactory;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEVLasXGLayer(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CEVLasXGLayer();
					CEVLasXGLayer(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
				public:
					virtual ~CEVLasXGLayer();

					/// <summary>
					/// 设置点云图层显示时的颜色类型
					/// </summary>
					/// <param name="type">颜色类型</param>
					/// <returns></returns>
					void setColorType(LASCOLORTYPE type);
					/// <summary>
					/// 获取点云图层显示时的颜色类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色类型</returns>
					LASCOLORTYPE getColorType() const;
					/// <summary>
					/// 设置是否使用默认颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setUseDefaultColor(ev_bool value);
					/// <summary>
					/// 获取是否使用默认颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getUseDefaultColor() const;

					/// --------------------------LCT_General-----------------------
					/// <summary>
					/// 设置简单类型的转换颜色
					/// </summary>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setGeneralColor(const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取简单类型的转换颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getGeneralColor() const;
					/// <summary>
					/// 获取默认简单类型的转换颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultGeneralColor() const;

					/// --------------------------LCT_Elevation-----------------------
					/// <summary>
					/// 设置ElevationColor对应的色带上的stopcolor
					/// </summary>
					/// <param name="value">value值</param>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setElevationColor(ev_real32 value,const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取ElevationColor对应的色带上的stopcolor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getElevationColor(ev_real32 value) const;
					/// <summary>
					/// 获取ElevationColor对应的色带上的stopcolor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getElevationColor(ev_uint32 index,ev_real32& value) const;
					/// <summary>
					/// 获取ElevationColor对应的色带上的stopcolor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getElevationColorCount() const;
					/// <summary>
					/// 清空ElevationColor
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clearElevationColor();
					/// <summary>
					/// 获取默认ElevationColor对应的色带上的stopcolor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultElevationColor(ev_real32 value) const;
					/// <summary>
					/// 获取默认ElevationColor对应的色带上的stopcolor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultElevationColor(ev_uint32 index,ev_real32& value) const;
					/// <summary>
					/// 获取默认ElevationColor对应的色带上的stopcolor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getDefaultElevationColorCount() const;

					/// --------------------------LCT_Intensity-----------------------
					/// <summary>
					/// 设置IntensityColor
					/// </summary>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setIntensityColor(const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取IntensityColor
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getIntensityColor() const;
					/// <summary>
					/// 获取默认IntensityColor
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultIntensityColor() const;

					/// --------------------------LCT_Classification-----------------------
					/// <summary>
					/// 设置ClassificationColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setClassificationColor(ev_int32 value,const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取ClassificationColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getClassificationColor(ev_int32 value) const;
					/// <summary>
					/// 获取ClassificationColor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getClassificationColor(ev_uint32 index,ev_int32& value) const;
					/// <summary>
					/// 获取ClassificationColor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getClassificationColorCount() const;
					/// <summary>
					/// 清空ClassificationColor
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clearClassificationColor();
					/// <summary>
					/// 获取默认ClassificationColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultClassificationColor(ev_int32 value) const;
					/// <summary>
					/// 获取默认ClassificationColor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultClassificationColor(ev_uint32 index,ev_int32& value) const;
					/// <summary>
					/// 获取默认ClassificationColor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getDefaultClassificationColorCount() const;

					/// --------------------------LCT_ReturnNumber-----------------------
					/// <summary>
					/// 设置ReturnNumberColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					void setReturnNumberColor(ev_int32 value,const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取ReturnNumberColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getReturnNumberColor(ev_int32 value) const;
					/// <summary>
					/// 获取ReturnNumberColor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getReturnNumberColor(ev_uint32 index,ev_int32& value) const;
					/// <summary>
					/// 获取ReturnNumberColor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getReturnNumberColorCount() const;
					/// <summary>
					/// 清空ReturnNumberColor
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clearReturnNumberColor();
					/// <summary>
					/// 获取默认ReturnNumberColor
					/// </summary>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultReturnNumberColor(ev_int32 value) const;
					/// <summary>
					/// 获取默认ReturnNumberColor
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">value值</param>
					/// <returns>颜色</returns>
					EarthView::World::Spatial::Display::IColor* getDefaultReturnNumberColor(ev_uint32 index,ev_int32& value) const;
					/// <summary>
					/// 获取默认ReturnNumberColor数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					ev_uint32 getDefaultReturnNumberColorCount() const;

					/// <summary>
					/// 设置转换时点大小
					/// </summary>
					/// <param name="size">点大小</param>
					/// <returns></returns>
					void setPointSize(ev_uint32 size);
					/// <summary>
					/// 获取转换时点大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>点大小</returns>
					ev_uint32 getPointSize() const;

					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层的类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;

					/// <summary>
					/// 图层克隆
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Atlas::ILayer * clone() const;

					/// <summary>
					/// Globe加载一个图层之后调用的函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);

					/// <summary>
					/// xml反序列化
					/// </summary>
					/// <param name="element">xml元素</param>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml元素
					/// </summary>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 根据LASCOLORTYPE更新图层渲染效果
					/// </summary>
					/// <returns></returns>
					ev_void updateLasImage();

					EarthView::World::Spatial::GeoDataset::IFeatureClass* getRecordFeatureClass();

					/// <summary>
					/// 图层选择
					/// </summary>
					/// <param name="filter">选择过滤条件</param>
					/// <param name="type">选择类型</param>
					/// <returns></returns>
					virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清空图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 设置图层的选择集
					/// </summary>
					/// <param name="selection">图层的选择集</param>
					/// <returns></returns>
					virtual ev_void setLayerSelection(EarthView::World::Spatial::Atlas::ILayerSelection* selection);

					/// <summary>
					/// 获取图层选择
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层选择</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					/// <summary>
					/// 设置模型可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void setRecordObjectVisible(ev_uint32 id, ev_bool flag);
					void setRecordObjectVisible(const EarthView::World::Core::IntVector& ids, ev_bool flag);

					/// <summary>
					/// 获取模型可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getRecordObjectVisible(ev_uint32 id);

					/// <summary>
					/// 获取在内存中meshx的位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localOrientation">局部旋转</param>
					/// <returns></returns>
					ev_bool getObjectPosition(ev_uint32 id, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out  EarthView::World::Spatial::Math::CQuaternion& localOrientation);

					/// <summary>
					/// 在内存中修改meshx的位置
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localOrientation">局部旋转</param>
					/// <returns></returns>
					ev_bool changeObjectPosition(ev_uint32 id, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation);

					/// <summary>
					/// 在内存中添加一个meshx
					/// </summary>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localOrientation">局部旋转</param>
					/// <returns></returns>
					ev_bool addNewObject(const EVString& meshxfile, ev_uint32 id, ev_real64 lat, ev_real64 lon, ev_real64 alt, const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CQuaternion& localOrientation);

					/// <summary>
					/// 删除内存对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool deleteObject(ev_uint32 id);

					/// <summary>
					/// 设置点选高亮
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="flag">true高亮，false不高亮</param>
					/// <returns></returns>
					void setHighLight(ev_uint32 id, ev_bool flag);
					ev_bool getHighLight(ev_uint32 id);
					void clearHightLight();

					/// <summary>
					/// 设置组件高亮
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="compName">组件名</param>
					/// <param name="flag">true高亮，false不高亮</param>
					/// <returns></returns>
					void setComponentHighLight(ev_uint32 id, const EVString& compName, ev_bool flag);
					ev_bool getComponentHighLight(ev_uint32 id, const EVString& compName);
					void clearComponentHightLight();

					/// <summary>
					/// 获取被选择的组件名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="submeshIndex">submesh索引</param>
					/// <param name="instanceIndex">submesh复用索引</param>
					/// <param name="segmentIndex">段号</param>
					/// <param name="outComp">组件</param>
					/// <param name="parentLevel">根据当前查到的subEntity向上找parentLevel级父组件，默认没有parentLevel参数的接口parentLevel=0</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedComponent(ev_uint32 id, ev_uint64 objectHandle, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, _out EarthView::World::Spatial3D::CComponent& outComp);
					ev_bool getSelectedComponent(ev_uint32 id, ev_uint64 objectHandle, ev_int32 submeshIndex, ev_int32 instanceIndex, ev_int32 segmentIndex, ev_uint32 parentLevel, _out EarthView::World::Spatial3D::CComponent& outComp);
					/// <summary>
					/// 获取被选择的对象名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="name">对象名</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedObjectName(ev_uint32 id, ev_uint64 objectHandle, _out EVString& name);

					/// <summary>
					/// 获取被选择的对象名，下列参数都可从tool监听参数中取出
					/// </summary>
					/// <param name="id">图层中对象ID</param>
					/// <param name="objectHandle">选中的对象handle，从tool监听参数的userdata中取出</param>
					/// <param name="lat">纬度</param>
					/// <param name="lon">经度</param>
					/// <param name="alt">高度</param>
					/// <param name="localScale">局部缩放</param>
					/// <param name="localOrientation">局部旋转</param>
					/// <returns>true找到，false没找到</returns>
					ev_bool getSelectedObjectPosition(ev_uint32 id, ev_uint64 objectHandle, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& localScale, _out  EarthView::World::Spatial::Math::CQuaternion& localOrientation);
				protected:
					ev_void initColor();
					ev_void createTextureImage(EarthView::World::Core::MemoryDataStreamPtr& texPtr);
					/// <summary>
					/// 选择模型
					/// </summary>
					/// <param name="pSelection">被选择的要素id构成的要素选择器</param>
					/// <returns></returns>
					virtual void _selectModel(EarthView::World::Spatial::GeoDataset::IFeatureSelection* pSelection);

					EarthView::World::Spatial::Atlas::ILayerSelection* m_pSelectionSet;

					LASCOLORTYPE mType;

					EarthView::World::Spatial::Display::IColor* mGeneralColor;
					map<ev_real32,EarthView::World::Spatial::Display::IColor*> mElevationColorMap;
					EarthView::World::Spatial::Display::IColor* mIntensityColor;
					map<ev_int32,EarthView::World::Spatial::Display::IColor*> mClassificationColorMap;
					map<ev_int32,EarthView::World::Spatial::Display::IColor*> mReturnNumberColorMap;

					ev_bool mbUseDefaultColor;
					EarthView::World::Spatial::Display::IColor* mDefaultGeneralColor;
					map<ev_real32,EarthView::World::Spatial::Display::IColor*> mDefaultElevationColorMap;
					EarthView::World::Spatial::Display::IColor* mDefaultIntensityColor;
					map<ev_int32,EarthView::World::Spatial::Display::IColor*> mDefaultClassificationColorMap;
					map<ev_int32,EarthView::World::Spatial::Display::IColor*> mDefaultReturnNumberColorMap;

					ev_uint32 mPointSize;

					double mElevationMaxZ;
					double mElevationMinZ;
				};

				/// <summary>
				/// 类工厂
				/// </summary>
				class EV_Spatial3DEngine_DLL CEVLasXGLayerFactory : public  EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEVLasXGLayerFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEVLasXGLayerFactory();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEVLasXGLayerFactory();
				public:
					/// <summary>
					/// 返回单例的图层工厂
					/// </summary>
					static EarthView::World::Spatial3D::Atlas::CEVLasXGLayerFactory* getSingletonPtr();
					/// <summary>
					/// 释放单例的kml图层工厂
					/// </summary>
					/// <returns></returns>
					static ev_void releaseSingletonPtr();
					/// <summary>
					/// 获取图层的类型
					/// </summary>
					/// <returns>Globe图层的类型</returns>
					EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <param name="name">图层的名称</param>
					/// <param name="ds">数据集对象</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& name, EarthView::World::Spatial::GeoDataset::IDataset* ds);
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 创建一个GlobeLayer图层实例
					/// </summary>
					/// <returns>Globe工厂的产品</returns>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					/// <summary>
					/// 销毁一个Globe图层
					/// </summary>
					/// <param name="layer">销毁工厂的产品</param>
					/// <returns>是否成功</returns>
					ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);

				public:
					static const EVString msLasXGLayerFactoryName;
				private:
					static EarthView::World::Spatial3D::Atlas::CEVLasXGLayerFactory* mSingletonPtr;
				};


			}
		}
	}
}
#endif

