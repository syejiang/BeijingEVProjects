package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 点填充面类提供方法如下：获取与设置水平偏移量X、垂直偏移量Y、点水平与垂直间隔大小、填充风格、填充的点风格对象获取符号类型、获取流、获取SLD深度copy风格对象、判断两个Symbol是否属性相同、将Symbol属性写入XML元素从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
 */
public class MarkerFillSymbol extends com.earthview.world.spatial.display.FillSymbol {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::CMarkerFillSymbol", new MarkerFillSymbolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JCMarkerFillSymbolProxy", new MarkerFillSymbolClassFactory());
	}

	/**
	 * 默认构造函数
	 * @param  
	 */
	public MarkerFillSymbol() {
		super(CreatedWhenConstruct.CWC_NotToCreate);
		Create("JCMarkerFillSymbolProxy", null, true);
		this.registerCallback();
		if (!"com.earthview.world.spatial.display.MarkerFillSymbol".equals(this.getClass().getName()))
		{
			this.setCustomExtend(true);
		}
	}

	native private double getOffsetX_void(long pNativeObject);
	/**
	 * 获取水平偏移量X
	 * @param  
	 * @return 偏移量
	 */
	public double getOffsetX()
	{
		double returnValue = getOffsetX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOffsetX_ev_real64(long pNativeObject, double value);
	/**
	 * 设置水平偏移量X
	 * @param value 偏移量
	 */
	public void setOffsetX(double value)
	{
		double valueParamValue = value;
		setOffsetX_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private double getOffsetY_void(long pNativeObject);
	/**
	 * 获取垂直偏移量Y
	 * @param  
	 * @return 偏移量
	 */
	public double getOffsetY()
	{
		double returnValue = getOffsetY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setOffsetY_ev_real64(long pNativeObject, double value);
	/**
	 * 设置垂直偏移量Y
	 * @param value 偏移量
	 */
	public void setOffsetY(double value)
	{
		double valueParamValue = value;
		setOffsetY_ev_real64(this.nativeObject.pointer, valueParamValue);
	}
	native private void setIntervalX_ev_real64(long pNativeObject, double interval);
	/**
	 * 设置点水平间隔大小
	 * @param interval 间隔大小
	 */
	public void setIntervalX(double interval)
	{
		double intervalParamValue = interval;
		setIntervalX_ev_real64(this.nativeObject.pointer, intervalParamValue);
	}
	native private double getIntervalX_void(long pNativeObject);
	/**
	 * 获取点水平间隔大小
	 * @param  
	 * @return 间隔大小
	 */
	public double getIntervalX()
	{
		double returnValue = getIntervalX_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private void setIntervalY_ev_real64(long pNativeObject, double interval);
	/**
	 * 设置点垂直间隔大小
	 * @param interval 间隔大小
	 */
	public void setIntervalY(double interval)
	{
		double intervalParamValue = interval;
		setIntervalY_ev_real64(this.nativeObject.pointer, intervalParamValue);
	}
	native private double getIntervalY_void(long pNativeObject);
	/**
	 * 获取点垂直间隔大小
	 * @param  
	 * @return 间隔大小
	 */
	public double getIntervalY()
	{
		double returnValue = getIntervalY_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getMarkerFillStyle_void(long pNativeObject);
	/**
	 * 获取填充风格
	 * @param  
	 * @return 风格
	 */
	public com.earthview.world.spatial.display.EVMarkerFillStyle getMarkerFillStyle()
	{
		int returnValue = getMarkerFillStyle_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.display.EVMarkerFillStyle.toEnum(returnValue);
	}
	native private void setMarkerFillStyle_EVMarkerFillStyle(long pNativeObject, int nType);
	/**
	 * 设置填充风格
	 * @param nType 填充风格
	 */
	public void setMarkerFillStyle(com.earthview.world.spatial.display.EVMarkerFillStyle nType)
	{
		int nTypeParamValue = nType.getValue();
		setMarkerFillStyle_EVMarkerFillStyle(this.nativeObject.pointer, nTypeParamValue);
	}
	native private long getMarkerSymbol_void(long pNativeObject);
	/**
	 * 获取填充的点风格对象
	 * @param  
	 * @return 点风格对象
	 */
	public com.earthview.world.spatial.display.Isymbol getMarkerSymbol()
	{
		long returnValue = getMarkerSymbol_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		__returnValue.setDelegate(true);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.setDelegate(true);
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private void setMarkerSymbol_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置填充的点风格
	 * @param symbol 点风格
	 */
	public void setMarkerSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setMarkerSymbol_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private int getSymbolType_void(long pNativeObject);
	/**
	 * 获取符号类型
	 * @param  
	 * @return 符号类型
	 */
	public int getSymbolType()
	{
		int returnValue = getSymbolType_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private int getSymbolType_void_NoVirtual(long pNativeObject);
	protected int getSymbolType_NoVirtual()
	{
		int returnValue = getSymbolType_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private long ev_clone_void(long pNativeObject);
	/**
	 * 深度copy风格对象
	 * @param  
	 * @return 风格对象
	 */
	public com.earthview.world.spatial.display.Isymbol ev_clone()
	{
		long returnValue = ev_clone_void(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}
	native private long ev_clone_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol ev_clone_NoVirtual()
	{
		long returnValue = ev_clone_void_NoVirtual(this.nativeObject.pointer);
		if(returnValue == 0L) {
			return null;
		}
		com.earthview.world.spatial.display.Isymbol __returnValue = new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate, "ISymbol");
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.setInstancePointer(__instancePointer);
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.spatial.display.Isymbol)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "ISymbol");
		}
		return __returnValue;
	}

	native private void toStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 获取流
	 * @param stream 流对象
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void toStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void toStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		toStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	native private String toSLD_void(long pNativeObject);
	/**
	 * 获取SLD
	 * @param  
	 * @return SLD字符串
	 */
	public String toSLD()
	{
		String returnValue = toSLD_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String toSLD_void_NoVirtual(long pNativeObject);
	protected String toSLD_NoVirtual()
	{
		String returnValue = toSLD_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	native private void fromXmlElement_CXmlElement(long pNativeObject, long element);
	/**
	 * 从XML元素中恢复Symbol属性
	 * @param xml XML字符串
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement(this.nativeObject.pointer, elementParamValue);
	}
	native private void fromXmlElement_CXmlElement_NoVirtual(long pNativeObject, long element);
	protected void fromXmlElement_NoVirtual(com.earthview.world.core.XmlElement element)
	{
		long elementParamValue = element.nativeObject.pointer;
		fromXmlElement_CXmlElement_NoVirtual(this.nativeObject.pointer, elementParamValue);
	}

	native private long toXmlElement_void(long pNativeObject);
	/**
	 * 将Symbol属性写入XML元素
	 * @param xml XML字符串
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		long returnValue = toXmlElement_void(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}
	native private long toXmlElement_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.core.XmlElement toXmlElement_NoVirtual()
	{
		long returnValue = toXmlElement_void_NoVirtual(this.nativeObject.pointer);
		com.earthview.world.core.XmlElement __returnValue = new com.earthview.world.core.XmlElement(CreatedWhenConstruct.CWC_NotToCreate);
		InstancePointer __instancePointer = new InstancePointer(returnValue);
		__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		__returnValue.createNativeObjectPointer(__instancePointer);
		IClassFactory __returnValueClassFactory = GlobalClassFactoryMap.get(__returnValue.getCppInstanceTypeName());
		if (__returnValueClassFactory != null)
		{
			__returnValue.setDelegate(true);
			__returnValue = (com.earthview.world.core.XmlElement)__returnValueClassFactory.create();
			__returnValue.bindNativeObject(__instancePointer, "CXmlElement");
		}
		return __returnValue;
	}

	native private boolean equal_ISymbol(long pNativeObject, long pSymbol);
	/**
	 * 判断两个Symbol是否属性相同
	 * @param pSymbol Symbol对象
	 */
	public boolean equal(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}
	native private boolean equal_ISymbol_NoVirtual(long pNativeObject, long pSymbol);
	protected boolean equal_NoVirtual(com.earthview.world.spatial.display.Isymbol pSymbol)
	{
		long pSymbolParamValue = (pSymbol == null ? 0L : pSymbol.nativeObject.pointer);
		boolean returnValue = equal_ISymbol_NoVirtual(this.nativeObject.pointer, pSymbolParamValue);
		return returnValue;
	}

	native private void fromSLD_EVString(long pNativeObject, long sld);
	/**
	 * 从SLD恢复Symbol属性
	 * @param sld SLD字符串
	 */
	public void fromSLD(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString(this.nativeObject.pointer, sldParamValue);
	}
	native private void fromSLD_EVString_NoVirtual(long pNativeObject, long sld);
	protected void fromSLD_NoVirtual(StringPointer sld)
	{
		long sldParamValue = sld.nativeObject.pointer;
		fromSLD_EVString_NoVirtual(this.nativeObject.pointer, sldParamValue);
	}

	native private void fromStream_CDataStream(long pNativeObject, long stream);
	/**
	 * 从数据流恢复Symbol属性
	 * @param stream 流对象
	 */
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream(this.nativeObject.pointer, streamParamValue);
	}
	native private void fromStream_CDataStream_NoVirtual(long pNativeObject, long stream);
	protected void fromStream_NoVirtual(com.earthview.world.core.DataStream stream)
	{
		long streamParamValue = stream.nativeObject.pointer;
		fromStream_CDataStream_NoVirtual(this.nativeObject.pointer, streamParamValue);
	}

	public MarkerFillSymbol(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public MarkerFillSymbol(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 获取外边框对象
	 * @param  
	 * @return 外边框
	 */
	public com.earthview.world.spatial.display.Isymbol getOutline()
	{
		return super.getOutline_NoVirtual();
	}
	/**
	 * 设置外边框对象
	 * @param outline 外边框指针
	 */
	public void setOutline(com.earthview.world.spatial.display.Isymbol outline)
	{
		super.setOutline_NoVirtual(outline);
	}
	/**
	 * 是否使用外边框
	 * @param  
	 * @return 如果使用，则返回true；否则，返回false
	 */
	public boolean isUseOutline()
	{
		return super.isUseOutline_NoVirtual();
	}
	/**
	 * 设置是否使用外边框
	 * @param bUse 是否使用
	 */
	public void setUseOutline(boolean bUse)
	{
		super.setUseOutline_NoVirtual(bUse);
	}
	/**
	 * 是否填充
	 * @param  
	 * @return 如果填充，则返回true；否则，返回false
	 */
	public boolean isFill()
	{
		return super.isFill_NoVirtual();
	}
	/**
	 * 设置是否填充
	 * @param bUse 是否填充
	 */
	public void setFill(boolean bFill)
	{
		super.setFill_NoVirtual(bFill);
	}
	/**
	 * 获取符号大小
	 * @param  
	 * @return 返回符号大小
	 */
	public double getSize()
	{
		return super.getSize_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColorRef()
	{
		return super.getColorRef_NoVirtual();
	}
	/**
	 * 获取符号颜色
	 * @param  
	 * @return 返回颜色
	 */
	public com.earthview.world.spatial.display.Icolor getColor()
	{
		return super.getColor_NoVirtual();
	}
	/**
	 * 设置符号颜色
	 * @param color 颜色
	 */
	public void setColor(com.earthview.world.spatial.display.Icolor color)
	{
		super.setColor_NoVirtual(color);
	}
	/**
	 * 符号知否包含图像
	 * @param  
	 * @return 如果包含返回true；否则返回false
	 */
	public boolean hasImage()
	{
		return super.hasImage_NoVirtual();
	}
	/**
	 * 获取包含图像数量
	 * @param  
	 * @return 返回包含图像数量
	 */
	public long getImageCount()
	{
		return super.getImageCount_NoVirtual();
	}
	/**
	 * 获取指定索引处图像ID
	 * @param index 指定位置
	 * @return 返回图像ID
	 */
	public String getImageID(long index)
	{
		return super.getImageID_NoVirtual(index);
	}
	/**
	 * 以内存流的形式获取指定索引处图像
	 * @param index 指定位置
	 * @return 返回图像流
	 */
	public com.earthview.world.core.MemoryDataStreamPtr getImage(long index)
	{
		return super.getImage_NoVirtual(index);
	}
	/**
	 * 设置指定索引的图像
	 * @param index 指定位置
	 * @param imageID 输出，图像
	 * @param stream 输入，流
	 */
	public void setImage(long index, String imageID, com.earthview.world.core.MemoryDataStreamPtr stream)
	{
		super.setImage_NoVirtual(index, imageID, stream);
	}
	/**
	 * 获取符号名称
	 * @param  
	 * @return 返回符号名称
	 */
	public String getName()
	{
		return super.getName_NoVirtual();
	}
	/**
	 * 设置符号名称
	 * @param szName 符号名称
	 */
	public void setName(String szName)
	{
		super.setName_NoVirtual(szName);
	}
	
	native protected void register_getOutline_void(long pNativeObject, String method);
	native protected void register_setOutline_ISymbol(long pNativeObject, String method);
	native protected void register_isUseOutline_void(long pNativeObject, String method);
	native protected void register_setUseOutline_ev_bool(long pNativeObject, String method);
	native protected void register_isFill_void(long pNativeObject, String method);
	native protected void register_setFill_ev_bool(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_getSize_void(long pNativeObject, String method);
	native protected void register_getColorRef_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toSLD_void(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_getColor_void(long pNativeObject, String method);
	native protected void register_setColor_IColor(long pNativeObject, String method);
	native protected void register_getSymbolType_void(long pNativeObject, String method);
	native protected void register_hasImage_void(long pNativeObject, String method);
	native protected void register_getImageCount_void(long pNativeObject, String method);
	native protected void register_getImageID_ev_uint32(long pNativeObject, String method);
	native protected void register_getImage_ev_uint32(long pNativeObject, String method);
	native protected void register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(long pNativeObject, String method);
	native protected void register_equal_ISymbol(long pNativeObject, String method);
	native protected void register_getName_void(long pNativeObject, String method);
	native protected void register_setName_EVString(long pNativeObject, String method);
	native protected void register_fromSLD_EVString(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_getOutline_void(this.nativeObject.pointer, "getOutline_void_callback");
			this.register_setOutline_ISymbol(this.nativeObject.pointer, "setOutline_ISymbol_callback");
			this.register_isUseOutline_void(this.nativeObject.pointer, "isUseOutline_void_callback");
			this.register_setUseOutline_ev_bool(this.nativeObject.pointer, "setUseOutline_ev_bool_callback");
			this.register_isFill_void(this.nativeObject.pointer, "isFill_void_callback");
			this.register_setFill_ev_bool(this.nativeObject.pointer, "setFill_ev_bool_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_getSize_void(this.nativeObject.pointer, "getSize_void_callback");
			this.register_getColorRef_void(this.nativeObject.pointer, "getColorRef_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toSLD_void(this.nativeObject.pointer, "toSLD_void_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_getColor_void(this.nativeObject.pointer, "getColor_void_callback");
			this.register_setColor_IColor(this.nativeObject.pointer, "setColor_IColor_callback");
			this.register_getSymbolType_void(this.nativeObject.pointer, "getSymbolType_void_callback");
			this.register_hasImage_void(this.nativeObject.pointer, "hasImage_void_callback");
			this.register_getImageCount_void(this.nativeObject.pointer, "getImageCount_void_callback");
			this.register_getImageID_ev_uint32(this.nativeObject.pointer, "getImageID_ev_uint32_callback");
			this.register_getImage_ev_uint32(this.nativeObject.pointer, "getImage_ev_uint32_callback");
			this.register_setImage_ev_uint32_EVString_MemoryDataStreamPtr(this.nativeObject.pointer, "setImage_ev_uint32_EVString_MemoryDataStreamPtr_callback");
			this.register_equal_ISymbol(this.nativeObject.pointer, "equal_ISymbol_callback");
			this.register_getName_void(this.nativeObject.pointer, "getName_void_callback");
			this.register_setName_EVString(this.nativeObject.pointer, "setName_EVString_callback");
			this.register_fromSLD_EVString(this.nativeObject.pointer, "fromSLD_EVString_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static MarkerFillSymbol fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		MarkerFillSymbol obj = null;
 		if(baseObj instanceof MarkerFillSymbol)
		{
			obj = (MarkerFillSymbol)baseObj;
		} else {
			obj = new MarkerFillSymbol(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "CMarkerFillSymbol");
			obj.increaseCast();
		}

		return obj;
	}
}
