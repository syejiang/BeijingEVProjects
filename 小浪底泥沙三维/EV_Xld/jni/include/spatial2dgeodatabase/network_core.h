﻿#ifndef _NETWORK_CORE_H_H_
#define _NETWORK_CORE_H_H_



namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

///<summary>
///网络数据集用途类型枚举
///</summary>
enum EVUsageType
{
	UST_COST			= 1,//成本
	UST_RESTRICTION		= 2,//限制区
	UST_HIERACHY		= 3,//等级
	UST_DESCRIPTOR		= 4//描述符
};
///<summary>
///网络数据集属性单位
///</summary>
enum EVUnitType
{
    UNT_UNKNOWN     = 0,//未知
	UNT_METER       = 1,//米
    UNT_CENTIMETER  = 2,//厘米
    UNT_MINUTE      = 3//分钟

};
///<summary>
///网络要素类型
///</summary>		
enum EVElementType
{
    ET_JUNCTION  = 1,//节点
    ET_EDGE      = 2,//边
    ET_TURN      = 3//转弯要素
};
			

///<summary>
///网络方向
///</summary>		
enum EVDirectionType
{
    DT_FT = 1,//from point 至to point
    DT_TF = 2//to point 至 from point
};
            
/// <summary>
///联通策略枚举
/// </summary>
enum EVConnectivityPolicy
{
	/// <summary>
	///端点联通
	/// </summary>
    CT_ENDPIONT    = 1,
	/// <summary>
	///任意节点联通
	/// </summary>
    CT_ANYVERTEX   = 2
};
/// <summary>
///数据类型枚举
/// </summary>
enum EVDataValueType
{
	/// <summary>
	///字段类型
	/// </summary>
	VT_FIELD	= 1,
	/// <summary>
	///常量类型
	/// </summary>
	VT_CONSTANT = 2,
	/// <summary>
	///函数类型
	/// </summary>
	VT_FUNCTION = 3
};

}}}} // End of namespaces

#endif //_NETWORK_CORE_H_H_
