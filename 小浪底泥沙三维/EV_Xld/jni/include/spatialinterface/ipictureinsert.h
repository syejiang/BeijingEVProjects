﻿#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IPICTUREINSERT_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IPICTUREINSERT_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ispatialdisplay.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/imapsurrround.h"
#include "core/xml.h"
#include "spatialinterface/imap.h"
#include "spatialinterface/igeometry.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_INTERFACE_DLL IPictureInsert : public IMapSurround
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name="c"></param>
					/// <returns></returns>
					virtual ~IPictureInsert();
				public:

					/// <summary>
					/// 获取元素类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素类型</returns>
					virtual EVElementType getElementType() const;

					/// <summary>
					/// 获取图片路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片路径</returns>	   
					virtual EVString getPath() const;

					/// <summary>
					///设置图片路径
					/// </summary>
					/// <param name="name">图片路径</param>
					/// <returns></returns>
					virtual ev_void setPath(EVString strPath);

					/// <summary>
					///获取元素边框范围
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>元素边框范围</returns>
					virtual  EarthView::World::Spatial::Geometry::IEnvelope* getEnvelope() const;

					/// <summary>
					///设置元素边框范围
					/// </summary>
					/// <param name="pEnvelope">元素边框范围</param>
					/// <returns></returns>
					virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);

					/// <summary>
					/// 设置比例尺背景颜色
					/// </summary>
					/// <param name="symbol">比例尺背景颜色</param>
					/// <returns></returns>
					virtual ev_void setBackgroundColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取比例尺背景颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺背景颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getBackgroundColor() const;

					/// <summary>
					/// 设置是否图例背景色
					/// </summary>
					/// <param name="bDraw">是否图例背景色</param>
					/// <returns></returns>
					virtual ev_void setDrawBackground(bool bDraw);

					/// <summary>
					/// 获取是否图例背景色
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否图例背景色</returns>
					virtual ev_bool isDrawBackground() const;

					/// <summary>
					/// 设置阴影颜色
					/// </summary>
					/// <param name="symbol">阴影颜色</param>
					/// <returns></returns>
					virtual ev_void setShadowColor(const EarthView::World::Spatial::Display::IColor* pColor);

					/// <summary>
					/// 获取阴影颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>阴影颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getShadowColor() const;

					/// <summary>
					/// 设置是否绘制阴影
					/// </summary>
					/// <param name="bDraw">是否绘制阴影</param>
					/// <returns></returns>
					virtual ev_void setDrawShadow(bool bDraw);

					/// <summary>
					/// 获取是否绘制阴影
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制阴影</returns>
					virtual ev_bool isDrawShadow() const;

					/// <summary>
					/// 设置边框风格
					/// </summary>
					/// <param name="pSymbol">边框风格</param>
					/// <returns></returns>
					virtual ev_void setFrameSymbol( const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 获取边框风格
					/// </summary>
					/// <param name="pSymbol"></param>
					/// <returns>边框风格</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* getFrameSymbol() const;

					/// <summary>
					/// 设置是否绘制边框
					/// </summary>
					/// <param name=" bDraw">是否绘制边框</param>
					/// <returns></returns>
					virtual ev_void setIsDrawFrame(const ev_bool bDraw);

					/// <summary>
					/// 获取是否绘制边框
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否绘制边框</returns>
					virtual ev_bool isDrawFrame() const;

					/// <summary>
					/// 获取元素是否被选中
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否被选中</returns>
					virtual ev_bool isSelected();

					/// <summary>
					/// 设置元素是否被选中
					/// </summary>
					/// <param name="bSelected">是否被选中</param>
					/// <returns></returns>
					virtual ev_void setSelected(ev_bool bSelected);

					/// <summary>
					/// 获取图片长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片长度</returns>
					virtual ev_real64 getWidth() const;

					/// <summary>
					/// 设置图片长度
					/// </summary>
					/// <param name="nWidth">图片长度</param>
					/// <returns></returns>
					virtual ev_void  setWidth(const ev_real64 dWidth);

					/// <summary>
					/// 获取图片高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片高度</returns>
					virtual ev_real64 getHeight() const;

					/// <summary>
					/// 设置图片高度
					/// </summary>
					/// <param name="nHeight">图片长度</param>
					/// <returns></returns>
					virtual ev_void setHeight(const ev_real64 nHeight);

					/// <summary>
					///获取图片
					/// </summary>
					/// <param name="symbol"></param>
					/// <returns>图片</returns>
					virtual EarthView::World::Display::IBitmap* getPicture() const;

					/// <summary>
					///设置图片
					/// </summary>
					/// <param name="symbol">图片</param>
					/// <returns></returns>
					virtual ev_void setPicture(EarthView::World::Display::IBitmap* pBmp);

					/// <summary>
					/// 绘制图片准备
					/// </summary>
					/// <param name="pDisplay">指定设备</param>
					/// <returns></returns>
					virtual ev_bool drawPrepare(EarthView::World::Spatial::Display::ISpatialDisplay* pDisplay);

					/// <summary>
					/// 绘制图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void draw();

					/// <summary>
					/// 绘制结束后续处理
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void drawOver();
					/// <summary>
					/// 创建比例尺的克隆体
					/// </summary>
					/// <param name=""></param>
					/// <returns>比例尺的克隆体</returns>
					virtual EarthView::World::Spatial::Carto::IElement * clone() const;

					/// <summary>
					/// 将地图的配置以流的方式导出
					/// </summary>
					/// <param name="stream">导出的流</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;

					/// <summary>
					/// 将地图的配置以XML的方式导出
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml</returns>
					virtual EVString toXML() const;
					/// <summary>
					/// 从xml元素中恢复指北针的配置
					/// </summary>
					/// <param name="element">xml元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 把比例尺的配置保存到xml元素中
					/// </summary>
					/// <param name=""></param>
					/// <returns>xml元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
ev_internal:
					virtual ev_void fromStream( _in EarthView::World::Core::CDataStream& stream );	
				protected:
					IPictureInsert();
ev_private:
					IPictureInsert( EarthView::World::Core::CNameValuePairList *pList );
				private:
					IPictureInsert(IPictureInsert & obj);
				};
			}
		}
	}
}
#endif
