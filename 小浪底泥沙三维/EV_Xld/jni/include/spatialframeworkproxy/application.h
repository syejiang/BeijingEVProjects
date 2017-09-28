﻿#ifndef APPLICATION_H
#define APPLICATION_H

#include "frameworkproxy_config.h"
#include "core/object.h"
#include "core/mutex.h"
#include "spatialinterface/idisplayoptions.h"
#include "graphic/root.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace SystemUI{
				class IActionFactory;
				class IToolBar;
				class IMenu;
			}}}}


class CViewManager;
class CCommandPool;
namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CCamera;
			class CViewport;
			class CSceneManager;
			class CRenderWindow;
		}
		namespace Core{
			class EV_FRAMEWORKPROXY_DLL CApplication : public EarthView::World::Core::CEventObject
			{
ev_private:
				CApplication(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				~CApplication();

			public:

				/// <summary>
				/// 获取EarthView::World::Core::CApplication的单例对象。
				/// </summary>
				/// <returns>EarthView::World::Core::CApplication对象</returns>
				static EarthView::World::Core::CApplication* getSingletonPtr();

				/// <summary>
				/// 初始化。
				/// 如果在渲染开始前不调用此函数，会产生错误。
				/// </summary>
				/// <returns></returns>
				bool init();

				/// <summary>
				/// 释放资源
				/// </summary>
				/// <returns></returns>
				void unInit();

				/// <summary>
				/// 处理事件，并且渲染三维窗口。
				/// 需要把此函数放置在程序主线程中。
				/// </summary>
				/// <returns></returns>
				void processEvents();

				/// <summary>
				/// 获取视图管理类单例对象，也可以通过CViewManager::getSingleton()获取。
				/// </summary>
				/// <returns>CViewManager对象。</returns>
				CViewManager* getViewManager() const;

				/// <summary>
				/// 获取CCommandPool对象。
				/// </summary>
				/// <returns>CCommandPool对象。</returns>
				CCommandPool* getCommandPool() const;
				/// <summary>
				/// 检测是否已经做过初始化
				/// </summary>
				/// <param name=""></param>
				/// <returns>如果已经做过初始化则返回true,反之则否</returns>
				/// <memo></memo>
				ev_bool isInitialized() const;
				/// <summary>
				/// 获取菜单个数
				/// </summary>
				/// <param name=""></param>
				/// <returns>菜单个数</returns>
				/// <memo></memo>
				ev_uint32 getMenuCount() const;
				/// <summary>
				/// 获取指定类型的菜单
				/// </summary>
				/// <param name="type">菜单类型</param>
				/// <returns>菜单</returns>
				/// <memo></memo>
				EarthView::World::Spatial::SystemUI::IMenu* getMenu( ev_uint32 type ) const;
				/// <summary>
				/// 添加菜单
				/// </summary>
				/// <param name="menu">待添加的菜单</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void addMenu( EarthView::World::Spatial::SystemUI::IMenu* ref_menu );
				/// <summary>
				/// 移除菜单
				/// </summary>
				/// <param name="index">待移除的菜单索引</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void removeMenu( ev_uint32 index ); 
				/// <summary>
				/// 获取工具栏的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>数量</returns>
				/// <memo></memo>
				ev_uint32 getToolBarCount() const;
				/// <summary>
				/// 获取指定类型的工具栏
				/// </summary>
				/// <param name="type">工具栏类型</param>
				/// <returns>工具栏</returns>
				/// <memo></memo>
				EarthView::World::Spatial::SystemUI::IToolBar* getToolBar( ev_uint32 type ) const;
				/// <summary>
				/// 添加工具栏
				/// </summary>
				/// <param name="bar">待添加的工具栏</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void addToolBar( EarthView::World::Spatial::SystemUI::IToolBar* ref_bar );
				/// <summary>
				/// 移除工具栏
				/// </summary>
				/// <param name="index">待移除的工具栏的索引</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void removeToolBar( ev_uint32 index );
				/// <summary>
				/// 设置命令工厂
				/// </summary>
				/// <param name="facotry">命令工厂</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setActionFactory( EarthView::World::Spatial::SystemUI::IActionFactory* ref_factory );
				/// <summary>
				/// 获取命令工厂
				/// </summary>
				/// <param name=""></param>
				/// <returns>命令工厂</returns>
				/// <memo></memo>
				EarthView::World::Spatial::SystemUI::IActionFactory* getActionFactory() const;

				void init1();
				void init2();

				/// <summary>
				/// 设置二维文字绘制的质量
				/// </summary>
				/// <param name="textRenderingHint">TRH_AntiAlias表示抗锯齿，TRH_SystemDefault是默认不抗锯齿</param>
				/// <returns></returns>
				/// <memo></memo>
				static void setTextRenderingHint(EarthView::World::Display::EVTextRenderingHint textRenderingHint);
				/// <summary>
				/// 获取二维文字绘制的质量
				/// </summary>
				/// <returns>TRH_AntiAlias表示抗锯齿，TRH_SystemDefault表示默认不抗锯齿</returns>
				/// <memo></memo>
				static EarthView::World::Display::EVTextRenderingHint getTextRenderingHint();
				/// <summary>
				/// 设置二维图形绘制的质量
				/// </summary>
				/// <param name="smoothingMode">SM_AntiAlias表示抗锯齿，SM_Default表示默认不抗锯齿</param>
				/// <returns></returns>
				/// <memo></memo>
				static void setSmoothingMode(EarthView::World::Display::EVSmoothingMode smoothingMode);
				/// <summary>
				/// 获取二维图形绘制的质量
				/// </summary>
				/// <returns>SM_AntiAlias表示抗锯齿，SM_Default表示默认不抗锯齿</returns>
				/// <memo></memo>
				static EarthView::World::Display::EVSmoothingMode getSmoothingMode();
				/// <summary>
				/// 设置二维绘制引擎
				/// </summary>
				/// <param name="name">绘制引擎的名字，目前有两个："GDI+"和"AGG"</param>
				/// <returns></returns>
				/// <memo></memo>
				static void set2DEngineName(const EVString& name);
				/// <summary>
				/// 获取当前二维绘制引擎的名字
				/// </summary>
				/// <returns>绘制引擎的名字，目前有两种情况："GDI+"和"AGG"</returns>
				/// <memo></memo>
				static EVString get2DEngineName();

				/// <summary>
				/// Android系统下需要调用的初始化函数
				/// </summary>
				/// <param name="surfaceHandle">窗口句柄</param>
				/// <returns></returns>
				/// <memo></memo>
				void initForAndroid(EVString surfaceHandle);
ev_internal:

				ev_bool onEvent(_in EarthView::World::Core::CEvent *e);

ev_private:
				/// <summary>
				/// 获得Android三维渲染窗口
				/// </summary>
				/// <returns>Android三维渲染窗口</returns>
				/// <memo></memo>
				EarthView::World::Graphic::CRenderWindow* getAndroidRenderWindow();
	private:	
				CApplication();
				void createOpenGLWindow32();
				class CApplicationHelper;
				CApplicationHelper* helper;

				static EarthView::World::Core::CApplication* mpInstance;
				static EarthView::World::Display::EVTextRenderingHint mTextRenderingHint;
				static EarthView::World::Display::EVSmoothingMode mSmoothingMode;
				static EVString mEngineName;

				EarthView::World::Graphic::CCamera* mCamera;
				EarthView::World::Graphic::CViewport* mViewport;
				EarthView::World::Graphic::CSceneManager* msceneManager;
				EarthView::World::Graphic::CRenderWindow* mWindow;
			};
		}}}
#endif

