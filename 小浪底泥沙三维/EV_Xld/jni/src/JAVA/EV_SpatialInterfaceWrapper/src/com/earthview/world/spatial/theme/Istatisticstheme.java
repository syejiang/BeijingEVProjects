package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 统计类型专题图基类
 */
public class Istatisticstheme extends com.earthview.world.spatial.theme.Itheme {
	
	static {
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::IStatisticsTheme", new IstatisticsthemeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Theme::JIStatisticsThemeProxy", new IstatisticsthemeClassFactory());
	}

	protected  void addField_EVString_ISymbol_callback(String field, long symbol)
	{
		String fieldParamValue = field;
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		addField(fieldParamValue, symbolParamValue);
	}

	native private void addField_EVString_ISymbol(long pNativeObject, String field, long symbol);
	/**
	 * 添加字段
	 * @param field 字段
	 * @param symbol 符号
	 */
	public void addField(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addField_EVString_ISymbol(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}
	native private void addField_EVString_ISymbol_NoVirtual(long pNativeObject, String field, long symbol);
	protected void addField_NoVirtual(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		addField_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}

	protected  void deleteField_EVString_callback(String field)
	{
		String fieldParamValue = field;
		deleteField(fieldParamValue);
	}

	native private void deleteField_EVString(long pNativeObject, String field);
	/**
	 * 删除字段
	 * @param field 字段
	 */
	public void deleteField(String field)
	{
		String fieldParamValue = field;
		deleteField_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void deleteField_EVString_NoVirtual(long pNativeObject, String field);
	protected void deleteField_NoVirtual(String field)
	{
		String fieldParamValue = field;
		deleteField_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	protected  void deleteAllField_void_callback()
	{
		deleteAllField();
	}

	native private void deleteAllField_void(long pNativeObject);
	/**
	 * 删除所有字段
	 */
	public void deleteAllField()
	{
		deleteAllField_void(this.nativeObject.pointer);
	}
	native private void deleteAllField_void_NoVirtual(long pNativeObject);
	protected void deleteAllField_NoVirtual()
	{
		deleteAllField_void_NoVirtual(this.nativeObject.pointer);
	}

	protected  long getFieldCount_void_callback()
	{
		long returnValue = getFieldCount();
		long __returnValue = returnValue;
		return __returnValue;
	}

	native private long getFieldCount_void(long pNativeObject);
	/**
	 * 获取字段个数
	 * @return 返回字段个数
	 */
	public long getFieldCount()
	{
		long returnValue = getFieldCount_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private long getFieldCount_void_NoVirtual(long pNativeObject);
	protected long getFieldCount_NoVirtual()
	{
		long returnValue = getFieldCount_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  String getFieldName_ev_uint32_callback(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName(indexParamValue);
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getFieldName_ev_uint32(long pNativeObject, long index);
	/**
	 * 根据索引获取字段名
	 * @param index 索引位置
	 * @return 返回字段名
	 */
	public String getFieldName(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName_ev_uint32(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}
	native private String getFieldName_ev_uint32_NoVirtual(long pNativeObject, long index);
	protected String getFieldName_NoVirtual(long index)
	{
		long indexParamValue = index;
		String returnValue = getFieldName_ev_uint32_NoVirtual(this.nativeObject.pointer, indexParamValue);
		return returnValue;
	}

	protected  void moveField_ev_uint32_ev_uint32_callback(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveField(oldIndexParamValue, newIndexParamValue);
	}

	native private void moveField_ev_uint32_ev_uint32(long pNativeObject, long oldIndex, long newIndex);
	/**
	 * 移动字段位置
	 * @param oldIndex 原始位置
	 * @param newIndex 目标位置
	 */
	public void moveField(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}
	native private void moveField_ev_uint32_ev_uint32_NoVirtual(long pNativeObject, long oldIndex, long newIndex);
	protected void moveField_NoVirtual(long oldIndex, long newIndex)
	{
		long oldIndexParamValue = oldIndex;
		long newIndexParamValue = newIndex;
		moveField_ev_uint32_ev_uint32_NoVirtual(this.nativeObject.pointer, oldIndexParamValue, newIndexParamValue);
	}

	protected  long getBackground_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getBackground();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getBackground_void(long pNativeObject);
	/**
	 * 获取背景符号
	 * @param  
	 */
	public com.earthview.world.spatial.display.Isymbol getBackground()
	{
		long returnValue = getBackground_void(this.nativeObject.pointer);
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
	native private long getBackground_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getBackground_NoVirtual()
	{
		long returnValue = getBackground_void_NoVirtual(this.nativeObject.pointer);
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

	protected  void setBackground_ISymbol_callback(long symbol)
	{
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setBackground(symbolParamValue);
	}

	native private void setBackground_ISymbol(long pNativeObject, long symbol);
	/**
	 * 设置背景符号
	 * @param symbol 背景符号
	 */
	public void setBackground(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setBackground_ISymbol(this.nativeObject.pointer, symbolParamValue);
	}
	native private void setBackground_ISymbol_NoVirtual(long pNativeObject, long symbol);
	protected void setBackground_NoVirtual(com.earthview.world.spatial.display.Isymbol symbol)
	{
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setBackground_ISymbol_NoVirtual(this.nativeObject.pointer, symbolParamValue);
	}

	protected  long getFieldSymbol_EVString_callback(String field)
	{
		String fieldParamValue = field;
		com.earthview.world.spatial.display.Isymbol returnValue = getFieldSymbol(fieldParamValue);
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getFieldSymbol_EVString(long pNativeObject, String field);
	/**
	 * 获取指定字段符号
	 * @param field 字段
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getFieldSymbol(String field)
	{
		String fieldParamValue = field;
		long returnValue = getFieldSymbol_EVString(this.nativeObject.pointer, fieldParamValue);
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
	native private long getFieldSymbol_EVString_NoVirtual(long pNativeObject, String field);
	protected com.earthview.world.spatial.display.Isymbol getFieldSymbol_NoVirtual(String field)
	{
		String fieldParamValue = field;
		long returnValue = getFieldSymbol_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
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

	protected  void setFieldSymbol_EVString_ISymbol_callback(String field, long symbol)
	{
		String fieldParamValue = field;
		com.earthview.world.spatial.display.Isymbol symbolParamValue = (symbol == 0L ? null : new com.earthview.world.spatial.display.Isymbol(CreatedWhenConstruct.CWC_NotToCreate));
		if(symbolParamValue != null)
		{
		symbolParamValue.setDelegate(true);
		symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		IClassFactory symbolParamValueClassFactory = GlobalClassFactoryMap.get(symbolParamValue.getCppInstanceTypeName());
		if (symbolParamValueClassFactory != null)
		{
			symbolParamValue.setDelegate(true);
			symbolParamValue = (com.earthview.world.spatial.display.Isymbol)symbolParamValueClassFactory.create();
			symbolParamValue.setDelegate(true);
			symbolParamValue.setInstancePointer(new InstancePointer(symbol));
		}
		}
		setFieldSymbol(fieldParamValue, symbolParamValue);
	}

	native private void setFieldSymbol_EVString_ISymbol(long pNativeObject, String field, long symbol);
	/**
	 * 设置指定字段符号
	 * @param field 字段
	 * @param symbol 符号
	 */
	public void setFieldSymbol(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFieldSymbol_EVString_ISymbol(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}
	native private void setFieldSymbol_EVString_ISymbol_NoVirtual(long pNativeObject, String field, long symbol);
	protected void setFieldSymbol_NoVirtual(String field, com.earthview.world.spatial.display.Isymbol symbol)
	{
		String fieldParamValue = field;
		long symbolParamValue = (symbol == null ? 0L : symbol.nativeObject.pointer);
		setFieldSymbol_EVString_ISymbol_NoVirtual(this.nativeObject.pointer, fieldParamValue, symbolParamValue);
	}

	protected  int getStatisticsType_void_callback()
	{
		com.earthview.world.spatial.theme.EVStatisticsThemeType returnValue = getStatisticsType();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getStatisticsType_void(long pNativeObject);
	/**
	 * 获取统计类型
	 * @return 返回统计类型
	 */
	public com.earthview.world.spatial.theme.EVStatisticsThemeType getStatisticsType()
	{
		int returnValue = getStatisticsType_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVStatisticsThemeType.toEnum(returnValue);
	}
	native private int getStatisticsType_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.EVStatisticsThemeType getStatisticsType_NoVirtual()
	{
		int returnValue = getStatisticsType_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVStatisticsThemeType.toEnum(returnValue);
	}

	protected  void setStatisticsType_EVStatisticsThemeType_callback(int type)
	{
		com.earthview.world.spatial.theme.EVStatisticsThemeType typeParamValue = com.earthview.world.spatial.theme.EVStatisticsThemeType.toEnum(type);
		setStatisticsType(typeParamValue);
	}

	native private void setStatisticsType_EVStatisticsThemeType(long pNativeObject, int type);
	/**
	 * 设置统计类型
	 * @param type 类型
	 */
	public void setStatisticsType(com.earthview.world.spatial.theme.EVStatisticsThemeType type)
	{
		int typeParamValue = type.getValue();
		setStatisticsType_EVStatisticsThemeType(this.nativeObject.pointer, typeParamValue);
	}
	native private void setStatisticsType_EVStatisticsThemeType_NoVirtual(long pNativeObject, int type);
	protected void setStatisticsType_NoVirtual(com.earthview.world.spatial.theme.EVStatisticsThemeType type)
	{
		int typeParamValue = type.getValue();
		setStatisticsType_EVStatisticsThemeType_NoVirtual(this.nativeObject.pointer, typeParamValue);
	}

	protected  long getStatisticsSymbol_void_callback()
	{
		com.earthview.world.spatial.display.Isymbol returnValue = getStatisticsSymbol();
		if(returnValue == null) {
			return 0L;
		}
		returnValue.setDelegate(true);
		long __returnValue = returnValue.nativeObject.pointer;
		return __returnValue;
	}

	native private long getStatisticsSymbol_void(long pNativeObject);
	/**
	 * 获取统计符号
	 * @param  
	 * @return 返回符号
	 */
	public com.earthview.world.spatial.display.Isymbol getStatisticsSymbol()
	{
		long returnValue = getStatisticsSymbol_void(this.nativeObject.pointer);
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
	native private long getStatisticsSymbol_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.display.Isymbol getStatisticsSymbol_NoVirtual()
	{
		long returnValue = getStatisticsSymbol_void_NoVirtual(this.nativeObject.pointer);
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

	protected  int getPieSizePolicy_void_callback()
	{
		com.earthview.world.spatial.theme.EVPieSizePolicy returnValue = getPieSizePolicy();
		int __returnValue = returnValue.getValue();
		return __returnValue;
	}

	native private int getPieSizePolicy_void(long pNativeObject);
	/**
	 * 获取饼图大小策略
	 * @param  
	 * @return 饼图大小策略
	 */
	public com.earthview.world.spatial.theme.EVPieSizePolicy getPieSizePolicy()
	{
		int returnValue = getPieSizePolicy_void(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVPieSizePolicy.toEnum(returnValue);
	}
	native private int getPieSizePolicy_void_NoVirtual(long pNativeObject);
	protected com.earthview.world.spatial.theme.EVPieSizePolicy getPieSizePolicy_NoVirtual()
	{
		int returnValue = getPieSizePolicy_void_NoVirtual(this.nativeObject.pointer);
		return com.earthview.world.spatial.theme.EVPieSizePolicy.toEnum(returnValue);
	}

	protected  void setPieSizePolicy_EVPieSizePolicy_callback(int policy)
	{
		com.earthview.world.spatial.theme.EVPieSizePolicy policyParamValue = com.earthview.world.spatial.theme.EVPieSizePolicy.toEnum(policy);
		setPieSizePolicy(policyParamValue);
	}

	native private void setPieSizePolicy_EVPieSizePolicy(long pNativeObject, int policy);
	/**
	 * 设置饼图大小策略
	 * @param policy 饼图大小策略
	 */
	public void setPieSizePolicy(com.earthview.world.spatial.theme.EVPieSizePolicy policy)
	{
		int policyParamValue = policy.getValue();
		setPieSizePolicy_EVPieSizePolicy(this.nativeObject.pointer, policyParamValue);
	}
	native private void setPieSizePolicy_EVPieSizePolicy_NoVirtual(long pNativeObject, int policy);
	protected void setPieSizePolicy_NoVirtual(com.earthview.world.spatial.theme.EVPieSizePolicy policy)
	{
		int policyParamValue = policy.getValue();
		setPieSizePolicy_EVPieSizePolicy_NoVirtual(this.nativeObject.pointer, policyParamValue);
	}

	protected  String getProportionField_void_callback()
	{
		String returnValue = getProportionField();
		String __returnValue = returnValue;
		return __returnValue;
	}

	native private String getProportionField_void(long pNativeObject);
	/**
	 * 获取比例字段
	 * @param  
	 * @return 返回字段名
	 */
	public String getProportionField()
	{
		String returnValue = getProportionField_void(this.nativeObject.pointer);
		return returnValue;
	}
	native private String getProportionField_void_NoVirtual(long pNativeObject);
	protected String getProportionField_NoVirtual()
	{
		String returnValue = getProportionField_void_NoVirtual(this.nativeObject.pointer);
		return returnValue;
	}

	protected  void setProportionField_EVString_callback(String field)
	{
		String fieldParamValue = field;
		setProportionField(fieldParamValue);
	}

	native private void setProportionField_EVString(long pNativeObject, String field);
	/**
	 * 设置比例字段
	 * @param field 比例字段
	 */
	public void setProportionField(String field)
	{
		String fieldParamValue = field;
		setProportionField_EVString(this.nativeObject.pointer, fieldParamValue);
	}
	native private void setProportionField_EVString_NoVirtual(long pNativeObject, String field);
	protected void setProportionField_NoVirtual(String field)
	{
		String fieldParamValue = field;
		setProportionField_EVString_NoVirtual(this.nativeObject.pointer, fieldParamValue);
	}

	public Istatisticstheme(CreatedWhenConstruct cwc) {
		super(CreatedWhenConstruct.CWC_NotToCreate);
	}
	public Istatisticstheme(CreatedWhenConstruct cwc, String classNameStr) {
		super(CreatedWhenConstruct.CWC_NotToCreate, classNameStr);
	}
	
	/**
	 * 鑾峰彇涓撻鍥剧被鍨�
	 * @param  
	 * @return 杩斿洖涓撻鍥剧被鍨�
	 */
	public com.earthview.world.spatial.theme.EVThemeType getType()
	{
		return super.getType_NoVirtual();
	}
	/**
	 * 鑾峰彇鏍囬
	 * @param  
	 * @return 杩斿洖鏍囬
	 */
	public String getCaption()
	{
		return super.getCaption_NoVirtual();
	}
	/**
	 * 璁剧疆鏍囬
	 * @param caption 鏍囬
	 */
	public void setCaption(String caption)
	{
		super.setCaption_NoVirtual(caption);
	}
	/**
	 * 鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param  
	 * @return 濡傛灉鏄繑鍥瀟rue锛涘惁鍒欒繑鍥瀎alse
	 */
	public boolean useDefaultSymbol()
	{
		return super.useDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鏄惁涓虹敤鎴疯嚜瀹氫箟绗﹀彿
	 * @param usable 鏄惁鐢ㄦ埛鑷畾涔�
	 */
	public void setUseDefaultSymbol(boolean usable)
	{
		super.setUseDefaultSymbol_NoVirtual(usable);
	}
	/**
	 * 鑾峰彇鑷畾涔夌鍙�
	 * @param  
	 * @return 杩斿洖绗﹀彿
	 */
	public com.earthview.world.spatial.display.Isymbol getDefaultSymbol()
	{
		return super.getDefaultSymbol_NoVirtual();
	}
	/**
	 * 璁剧疆鑷畾涔夌鍙�
	 * @param symbol 鑷畾涔夌鍙�
	 */
	public void setDefaultSymbol(com.earthview.world.spatial.display.Isymbol symbol)
	{
		super.setDefaultSymbol_NoVirtual(symbol);
	}
	/**
	 * 鏄惁涓庢寚瀹氫笓棰樺浘鐩稿悓
	 * @param theme 鎸囧畾鐨勪笓棰樺浘
	 * @return 濡傛灉鏄繑鍥瀟rue锛涘惁鍒欒繑鍥瀎alse
	 */
	public boolean ev_equals(com.earthview.world.spatial.theme.Itheme theme)
	{
		return super.ev_equals_NoVirtual(theme);
	}
	/**
	 * 澶嶅埗涓撻鍥�
	 * @param  
	 * @return 杩斿洖澶嶅埗鐨勪笓棰樺浘
	 */
	public com.earthview.world.spatial.theme.Itheme ev_clone()
	{
		return super.ev_clone_NoVirtual();
	}
	/**
	 * 灏嗕笓棰樺浘杈撳嚭鍒版祦
	 * @param stream 杈撳嚭鍙傛暟锛屾祦
	 */
	public void toStream(com.earthview.world.core.DataStream stream)
	{
		super.toStream_NoVirtual(stream);
	}
	/**
	 * 灏嗕笓棰樺浘杈撳嚭涓篍arthView::World::Core::CXmlElement
	 * @param  
	 * @return 杩斿洖EarthView::World::Core::CXmlElement
	 */
	public com.earthview.world.core.XmlElement toXmlElement()
	{
		return super.toXmlElement_NoVirtual();
	}
	/**
	 * 浠嶦arthView::World::Core::CXmlElement璇诲彇涓撻鍥�
	 * @param element 鎸囧畾鐨凟arthView::World::Core::CXmlElement
	 */
	public void fromXmlElement(com.earthview.world.core.XmlElement element)
	{
		super.fromXmlElement_NoVirtual(element);
	}
	public void onBeforeQuery(com.earthview.world.spatial.geodataset.Ifeatureclass fc, com.earthview.world.spatial.geodataset.Iqueryfilter filter)
	{
		super.onBeforeQuery_NoVirtual(fc, filter);
	}
	public void onAfterQuery(com.earthview.world.spatial.geodataset.Ifeatureselection fs, com.earthview.world.spatial.geometry.Igeometry dst)
	{
		super.onAfterQuery_NoVirtual(fs, dst);
	}
	public void fromStream(com.earthview.world.core.DataStream stream)
	{
		super.fromStream_NoVirtual(stream);
	}
	
	native protected void register_addField_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_deleteField_EVString(long pNativeObject, String method);
	native protected void register_deleteAllField_void(long pNativeObject, String method);
	native protected void register_getFieldCount_void(long pNativeObject, String method);
	native protected void register_getFieldName_ev_uint32(long pNativeObject, String method);
	native protected void register_moveField_ev_uint32_ev_uint32(long pNativeObject, String method);
	native protected void register_getBackground_void(long pNativeObject, String method);
	native protected void register_setBackground_ISymbol(long pNativeObject, String method);
	native protected void register_getFieldSymbol_EVString(long pNativeObject, String method);
	native protected void register_setFieldSymbol_EVString_ISymbol(long pNativeObject, String method);
	native protected void register_getStatisticsType_void(long pNativeObject, String method);
	native protected void register_setStatisticsType_EVStatisticsThemeType(long pNativeObject, String method);
	native protected void register_getStatisticsSymbol_void(long pNativeObject, String method);
	native protected void register_getPieSizePolicy_void(long pNativeObject, String method);
	native protected void register_setPieSizePolicy_EVPieSizePolicy(long pNativeObject, String method);
	native protected void register_getProportionField_void(long pNativeObject, String method);
	native protected void register_setProportionField_EVString(long pNativeObject, String method);
	native protected void register_getType_void(long pNativeObject, String method);
	native protected void register_getCaption_void(long pNativeObject, String method);
	native protected void register_setCaption_EVString(long pNativeObject, String method);
	native protected void register_useDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setUseDefaultSymbol_ev_bool(long pNativeObject, String method);
	native protected void register_getDefaultSymbol_void(long pNativeObject, String method);
	native protected void register_setDefaultSymbol_ISymbol(long pNativeObject, String method);
	native protected void register_ev_equals_ITheme(long pNativeObject, String method);
	native protected void register_ev_clone_void(long pNativeObject, String method);
	native protected void register_toStream_CDataStream(long pNativeObject, String method);
	native protected void register_toXmlElement_void(long pNativeObject, String method);
	native protected void register_fromXmlElement_CXmlElement(long pNativeObject, String method);
	native protected void register_onBeforeQuery_IFeatureClass_IQueryFilter(long pNativeObject, String method);
	native protected void register_onAfterQuery_IFeatureSelection_IGeometry(long pNativeObject, String method);
	native protected void register_fromStream_CDataStream(long pNativeObject, String method);
	
	public void registerCallback(){
		if (!this.nativeObject.equals(InstancePointer.ZERO)){
			this.register_addField_EVString_ISymbol(this.nativeObject.pointer, "addField_EVString_ISymbol_callback");
			this.register_deleteField_EVString(this.nativeObject.pointer, "deleteField_EVString_callback");
			this.register_deleteAllField_void(this.nativeObject.pointer, "deleteAllField_void_callback");
			this.register_getFieldCount_void(this.nativeObject.pointer, "getFieldCount_void_callback");
			this.register_getFieldName_ev_uint32(this.nativeObject.pointer, "getFieldName_ev_uint32_callback");
			this.register_moveField_ev_uint32_ev_uint32(this.nativeObject.pointer, "moveField_ev_uint32_ev_uint32_callback");
			this.register_getBackground_void(this.nativeObject.pointer, "getBackground_void_callback");
			this.register_setBackground_ISymbol(this.nativeObject.pointer, "setBackground_ISymbol_callback");
			this.register_getFieldSymbol_EVString(this.nativeObject.pointer, "getFieldSymbol_EVString_callback");
			this.register_setFieldSymbol_EVString_ISymbol(this.nativeObject.pointer, "setFieldSymbol_EVString_ISymbol_callback");
			this.register_getStatisticsType_void(this.nativeObject.pointer, "getStatisticsType_void_callback");
			this.register_setStatisticsType_EVStatisticsThemeType(this.nativeObject.pointer, "setStatisticsType_EVStatisticsThemeType_callback");
			this.register_getStatisticsSymbol_void(this.nativeObject.pointer, "getStatisticsSymbol_void_callback");
			this.register_getPieSizePolicy_void(this.nativeObject.pointer, "getPieSizePolicy_void_callback");
			this.register_setPieSizePolicy_EVPieSizePolicy(this.nativeObject.pointer, "setPieSizePolicy_EVPieSizePolicy_callback");
			this.register_getProportionField_void(this.nativeObject.pointer, "getProportionField_void_callback");
			this.register_setProportionField_EVString(this.nativeObject.pointer, "setProportionField_EVString_callback");
			this.register_getType_void(this.nativeObject.pointer, "getType_void_callback");
			this.register_getCaption_void(this.nativeObject.pointer, "getCaption_void_callback");
			this.register_setCaption_EVString(this.nativeObject.pointer, "setCaption_EVString_callback");
			this.register_useDefaultSymbol_void(this.nativeObject.pointer, "useDefaultSymbol_void_callback");
			this.register_setUseDefaultSymbol_ev_bool(this.nativeObject.pointer, "setUseDefaultSymbol_ev_bool_callback");
			this.register_getDefaultSymbol_void(this.nativeObject.pointer, "getDefaultSymbol_void_callback");
			this.register_setDefaultSymbol_ISymbol(this.nativeObject.pointer, "setDefaultSymbol_ISymbol_callback");
			this.register_ev_equals_ITheme(this.nativeObject.pointer, "ev_equals_ITheme_callback");
			this.register_ev_clone_void(this.nativeObject.pointer, "ev_clone_void_callback");
			this.register_toStream_CDataStream(this.nativeObject.pointer, "toStream_CDataStream_callback");
			this.register_toXmlElement_void(this.nativeObject.pointer, "toXmlElement_void_callback");
			this.register_fromXmlElement_CXmlElement(this.nativeObject.pointer, "fromXmlElement_CXmlElement_callback");
			this.register_onBeforeQuery_IFeatureClass_IQueryFilter(this.nativeObject.pointer, "onBeforeQuery_IFeatureClass_IQueryFilter_callback");
			this.register_onAfterQuery_IFeatureSelection_IGeometry(this.nativeObject.pointer, "onAfterQuery_IFeatureSelection_IGeometry_callback");
			this.register_fromStream_CDataStream(this.nativeObject.pointer, "fromStream_CDataStream_callback");
		}
	}
	
	public static Istatisticstheme fromBaseObject(BaseObject baseObj)
	{
		if (baseObj == null || InstancePointer.ZERO.equals(baseObj.nativeObject))
		{
			return null;
		}
		Istatisticstheme obj = null;
 		if(baseObj instanceof Istatisticstheme)
		{
			obj = (Istatisticstheme)baseObj;
		} else {
			obj = new Istatisticstheme(CreatedWhenConstruct.CWC_NotToCreate);
			obj.bindNativeObject(baseObj.nativeObject, "IStatisticsTheme");
			obj.increaseCast();
		}

		return obj;
	}
}
