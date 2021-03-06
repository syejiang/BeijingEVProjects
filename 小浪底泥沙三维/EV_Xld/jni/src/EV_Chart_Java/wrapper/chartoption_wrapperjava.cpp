/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartoption.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				class JCChartOptionProxy : public EarthView::World::Spatial::Display::CChartOption
				{
				 private:
					EarthView::World::Core::ev_string m_getChartPointType_void_callback;
					EarthView::World::Core::ev_string m_setChartPointType_EVChartLookUpType_callback;
					EarthView::World::Core::ev_string m_getChartAreaType_void_callback;
					EarthView::World::Core::ev_string m_setChartAreaType_EVChartLookUpType_callback;
					EarthView::World::Core::ev_string m_getCartoAssistLineType_void_callback;
					EarthView::World::Core::ev_string m_setCartoAssistLineType_EVChartSimpleLineType_callback;
					EarthView::World::Core::ev_string m_setColorType_EVChartColorType_callback;
					EarthView::World::Core::ev_string m_getColorType_void_callback;
					EarthView::World::Core::ev_string m_getDisplayCategory_void_callback;
					EarthView::World::Core::ev_string m_setDisplayCategory_EVChartDisplayCategory_callback;
					EarthView::World::Core::ev_string m_getSafetyDeep_void_callback;
					EarthView::World::Core::ev_string m_setSafetyDeep_ev_real64_callback;
					EarthView::World::Core::ev_string m_getSafetyContour_void_callback;
					EarthView::World::Core::ev_string m_setSafetyContour_ev_real64_callback;
					EarthView::World::Core::ev_string m_getShallowContour_void_callback;
					EarthView::World::Core::ev_string m_setShallowContour_ev_real64_callback;
					EarthView::World::Core::ev_string m_getDeepContour_void_callback;
					EarthView::World::Core::ev_string m_setDeepContour_ev_real64_callback;
					EarthView::World::Core::ev_string m_isTwoShadesOn_void_callback;
					EarthView::World::Core::ev_string m_setTwoShadesValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShallowPatternOn_void_callback;
					EarthView::World::Core::ev_string m_setShallowPatternValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShipOutlineOn_void_callback;
					EarthView::World::Core::ev_string m_setShipOutlineValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isFullSectorsOn_void_callback;
					EarthView::World::Core::ev_string m_setFullSectorsValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_getDistanceTag_void_callback;
					EarthView::World::Core::ev_string m_setDistanceTag_ev_real64_callback;
					EarthView::World::Core::ev_string m_getTimeTags_void_callback;
					EarthView::World::Core::ev_string m_setTimeTages_ev_int32_callback;
					EarthView::World::Core::ev_string m_getSymbolGroup_void_callback;
					EarthView::World::Core::ev_string m_setSymbolGroup_ev_int32_callback;
					EarthView::World::Core::ev_string m_getTextGroup_void_callback;
					EarthView::World::Core::ev_string m_setTextGroup_ev_int32_callback;
					EarthView::World::Core::ev_string m_getChartScale_void_callback;
					EarthView::World::Core::ev_string m_setChartScale_ev_real64_callback;
					EarthView::World::Core::ev_string m_isShowOtherVessel_void_callback;
					EarthView::World::Core::ev_string m_setShowOtherVesselValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShowCourseSpeedVessel_void_callback;
					EarthView::World::Core::ev_string m_setShowCourseSpeedVesselValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShowBeamBearingLine_void_callback;
					EarthView::World::Core::ev_string m_setShowBeamBearingLineValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShowStabilization_void_callback;
					EarthView::World::Core::ev_string m_setShowStabilizationValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShowTimeMarks_void_callback;
					EarthView::World::Core::ev_string m_setShowTimeMarksValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_isShowHeadingLine_void_callback;
					EarthView::World::Core::ev_string m_setShowHeadingLineValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_getShipBeamLengthValue_void_callback;
					EarthView::World::Core::ev_string m_setShipBeamLengthValue_ev_int32_callback;
					EarthView::World::Core::ev_string m_insertVRMRadius_ev_real64_callback;
					EarthView::World::Core::ev_string m_getVRMRadiusNum_void_callback;
					EarthView::World::Core::ev_string m_getVRMRadiusValue_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeVRMRadius_ev_uint32_callback;
					EarthView::World::Core::ev_string m_clearVRMRadius_void_callback;
					EarthView::World::Core::ev_string m_isUseVRMEBLSymbolA_void_callback;
					EarthView::World::Core::ev_string m_setUseVRMEBLSymbolAValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_getEBLLength_void_callback;
					EarthView::World::Core::ev_string m_setEBLLength_ev_real64_callback;
					EarthView::World::Core::ev_string m_getEBLAngle_void_callback;
					EarthView::World::Core::ev_string m_setEBLAngle_ev_real64_callback;
					EarthView::World::Core::ev_string m_setUseEnglishValue_ev_bool_callback;
					EarthView::World::Core::ev_string m_getUseEnglishValue_void_callback;
					EarthView::World::Core::ev_string m_setUseBlurSpatialRelation_ev_bool_callback;
					EarthView::World::Core::ev_string m_isUseBlurSpatialRelation_void_callback;
					EarthView::World::Core::ev_string m_setGeneralizeSoundgPoints_ev_bool_callback;
					EarthView::World::Core::ev_string m_isGeneralizeSoundgPoints_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCChartOptionProxy(EarthView::World::Core::CNameValuePairList *pList) : CChartOption(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getChartPointType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartPointType_void_callback = __method;
					}
					void register_setChartPointType_EVChartLookUpType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartPointType_EVChartLookUpType_callback = __method;
					}
					void register_getChartAreaType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartAreaType_void_callback = __method;
					}
					void register_setChartAreaType_EVChartLookUpType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartAreaType_EVChartLookUpType_callback = __method;
					}
					void register_getCartoAssistLineType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCartoAssistLineType_void_callback = __method;
					}
					void register_setCartoAssistLineType_EVChartSimpleLineType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCartoAssistLineType_EVChartSimpleLineType_callback = __method;
					}
					void register_setColorType_EVChartColorType_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setColorType_EVChartColorType_callback = __method;
					}
					void register_getColorType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getColorType_void_callback = __method;
					}
					void register_getDisplayCategory_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDisplayCategory_void_callback = __method;
					}
					void register_setDisplayCategory_EVChartDisplayCategory_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDisplayCategory_EVChartDisplayCategory_callback = __method;
					}
					void register_getSafetyDeep_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSafetyDeep_void_callback = __method;
					}
					void register_setSafetyDeep_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSafetyDeep_ev_real64_callback = __method;
					}
					void register_getSafetyContour_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSafetyContour_void_callback = __method;
					}
					void register_setSafetyContour_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSafetyContour_ev_real64_callback = __method;
					}
					void register_getShallowContour_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShallowContour_void_callback = __method;
					}
					void register_setShallowContour_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShallowContour_ev_real64_callback = __method;
					}
					void register_getDeepContour_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDeepContour_void_callback = __method;
					}
					void register_setDeepContour_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDeepContour_ev_real64_callback = __method;
					}
					void register_isTwoShadesOn_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isTwoShadesOn_void_callback = __method;
					}
					void register_setTwoShadesValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTwoShadesValue_ev_bool_callback = __method;
					}
					void register_isShallowPatternOn_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShallowPatternOn_void_callback = __method;
					}
					void register_setShallowPatternValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShallowPatternValue_ev_bool_callback = __method;
					}
					void register_isShipOutlineOn_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShipOutlineOn_void_callback = __method;
					}
					void register_setShipOutlineValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShipOutlineValue_ev_bool_callback = __method;
					}
					void register_isFullSectorsOn_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isFullSectorsOn_void_callback = __method;
					}
					void register_setFullSectorsValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setFullSectorsValue_ev_bool_callback = __method;
					}
					void register_getDistanceTag_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDistanceTag_void_callback = __method;
					}
					void register_setDistanceTag_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDistanceTag_ev_real64_callback = __method;
					}
					void register_getTimeTags_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTimeTags_void_callback = __method;
					}
					void register_setTimeTages_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTimeTages_ev_int32_callback = __method;
					}
					void register_getSymbolGroup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSymbolGroup_void_callback = __method;
					}
					void register_setSymbolGroup_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSymbolGroup_ev_int32_callback = __method;
					}
					void register_getTextGroup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextGroup_void_callback = __method;
					}
					void register_setTextGroup_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTextGroup_ev_int32_callback = __method;
					}
					void register_getChartScale_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChartScale_void_callback = __method;
					}
					void register_setChartScale_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChartScale_ev_real64_callback = __method;
					}
					void register_isShowOtherVessel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowOtherVessel_void_callback = __method;
					}
					void register_setShowOtherVesselValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowOtherVesselValue_ev_bool_callback = __method;
					}
					void register_isShowCourseSpeedVessel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowCourseSpeedVessel_void_callback = __method;
					}
					void register_setShowCourseSpeedVesselValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowCourseSpeedVesselValue_ev_bool_callback = __method;
					}
					void register_isShowBeamBearingLine_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowBeamBearingLine_void_callback = __method;
					}
					void register_setShowBeamBearingLineValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowBeamBearingLineValue_ev_bool_callback = __method;
					}
					void register_isShowStabilization_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowStabilization_void_callback = __method;
					}
					void register_setShowStabilizationValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowStabilizationValue_ev_bool_callback = __method;
					}
					void register_isShowTimeMarks_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowTimeMarks_void_callback = __method;
					}
					void register_setShowTimeMarksValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowTimeMarksValue_ev_bool_callback = __method;
					}
					void register_isShowHeadingLine_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isShowHeadingLine_void_callback = __method;
					}
					void register_setShowHeadingLineValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShowHeadingLineValue_ev_bool_callback = __method;
					}
					void register_getShipBeamLengthValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShipBeamLengthValue_void_callback = __method;
					}
					void register_setShipBeamLengthValue_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setShipBeamLengthValue_ev_int32_callback = __method;
					}
					void register_insertVRMRadius_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_insertVRMRadius_ev_real64_callback = __method;
					}
					void register_getVRMRadiusNum_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVRMRadiusNum_void_callback = __method;
					}
					void register_getVRMRadiusValue_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVRMRadiusValue_ev_uint32_callback = __method;
					}
					void register_removeVRMRadius_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeVRMRadius_ev_uint32_callback = __method;
					}
					void register_clearVRMRadius_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearVRMRadius_void_callback = __method;
					}
					void register_isUseVRMEBLSymbolA_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isUseVRMEBLSymbolA_void_callback = __method;
					}
					void register_setUseVRMEBLSymbolAValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseVRMEBLSymbolAValue_ev_bool_callback = __method;
					}
					void register_getEBLLength_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEBLLength_void_callback = __method;
					}
					void register_setEBLLength_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEBLLength_ev_real64_callback = __method;
					}
					void register_getEBLAngle_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEBLAngle_void_callback = __method;
					}
					void register_setEBLAngle_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEBLAngle_ev_real64_callback = __method;
					}
					void register_setUseEnglishValue_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseEnglishValue_ev_bool_callback = __method;
					}
					void register_getUseEnglishValue_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getUseEnglishValue_void_callback = __method;
					}
					void register_setUseBlurSpatialRelation_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUseBlurSpatialRelation_ev_bool_callback = __method;
					}
					void register_isUseBlurSpatialRelation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isUseBlurSpatialRelation_void_callback = __method;
					}
					void register_setGeneralizeSoundgPoints_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setGeneralizeSoundgPoints_ev_bool_callback = __method;
					}
					void register_isGeneralizeSoundgPoints_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isGeneralizeSoundgPoints_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::EVChartLookUpType getChartPointType() const
					{
						if (this->_gRef != NULL && this->m_getChartPointType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getChartPointType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVChartLookUpType __values1 = (EarthView::World::Spatial::Display::EVChartLookUpType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getChartPointType();
						}
					}
					virtual void setChartPointType(EarthView::World::Spatial::Display::EVChartLookUpType type)
					{
						if (this->_gRef != NULL && this->m_setChartPointType_EVChartLookUpType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setChartPointType_EVChartLookUpType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setChartPointType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::EVChartLookUpType getChartAreaType() const
					{
						if (this->_gRef != NULL && this->m_getChartAreaType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getChartAreaType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVChartLookUpType __values1 = (EarthView::World::Spatial::Display::EVChartLookUpType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getChartAreaType();
						}
					}
					virtual void setChartAreaType(EarthView::World::Spatial::Display::EVChartLookUpType type)
					{
						if (this->_gRef != NULL && this->m_setChartAreaType_EVChartLookUpType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setChartAreaType_EVChartLookUpType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setChartAreaType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::EVChartSimpleLineType getCartoAssistLineType() const
					{
						if (this->_gRef != NULL && this->m_getCartoAssistLineType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getCartoAssistLineType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVChartSimpleLineType __values1 = (EarthView::World::Spatial::Display::EVChartSimpleLineType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getCartoAssistLineType();
						}
					}
					virtual void setCartoAssistLineType(EarthView::World::Spatial::Display::EVChartSimpleLineType type)
					{
						if (this->_gRef != NULL && this->m_setCartoAssistLineType_EVChartSimpleLineType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setCartoAssistLineType_EVChartSimpleLineType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setCartoAssistLineType(type);
						}
					}
					virtual void setColorType(EarthView::World::Spatial::Display::EVChartColorType type)
					{
						if (this->_gRef != NULL && this->m_setColorType_EVChartColorType_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint type_j = (jint) type;
							jmethodID __method = __gr->getMethod("setColorType_EVChartColorType_callback");
							__env->CallVoidMethod(__obj, __method , type_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setColorType(type);
						}
					}
					virtual EarthView::World::Spatial::Display::EVChartColorType getColorType() const
					{
						if (this->_gRef != NULL && this->m_getColorType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getColorType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVChartColorType __values1 = (EarthView::World::Spatial::Display::EVChartColorType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getColorType();
						}
					}
					virtual EarthView::World::Spatial::Display::EVChartDisplayCategory getDisplayCategory() const
					{
						if (this->_gRef != NULL && this->m_getDisplayCategory_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDisplayCategory_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::EVChartDisplayCategory __values1 = (EarthView::World::Spatial::Display::EVChartDisplayCategory) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getDisplayCategory();
						}
					}
					virtual void setDisplayCategory(EarthView::World::Spatial::Display::EVChartDisplayCategory category)
					{
						if (this->_gRef != NULL && this->m_setDisplayCategory_EVChartDisplayCategory_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint category_j = (jint) category;
							jmethodID __method = __gr->getMethod("setDisplayCategory_EVChartDisplayCategory_callback");
							__env->CallVoidMethod(__obj, __method , category_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setDisplayCategory(category);
						}
					}
					virtual ev_real64 getSafetyDeep() const
					{
						if (this->_gRef != NULL && this->m_getSafetyDeep_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSafetyDeep_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getSafetyDeep();
						}
					}
					virtual void setSafetyDeep(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setSafetyDeep_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setSafetyDeep_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setSafetyDeep(value);
						}
					}
					virtual ev_real64 getSafetyContour() const
					{
						if (this->_gRef != NULL && this->m_getSafetyContour_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSafetyContour_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getSafetyContour();
						}
					}
					virtual void setSafetyContour(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setSafetyContour_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setSafetyContour_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setSafetyContour(value);
						}
					}
					virtual ev_real64 getShallowContour() const
					{
						if (this->_gRef != NULL && this->m_getShallowContour_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getShallowContour_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getShallowContour();
						}
					}
					virtual void setShallowContour(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setShallowContour_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setShallowContour_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShallowContour(value);
						}
					}
					virtual ev_real64 getDeepContour() const
					{
						if (this->_gRef != NULL && this->m_getDeepContour_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDeepContour_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getDeepContour();
						}
					}
					virtual void setDeepContour(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setDeepContour_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setDeepContour_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setDeepContour(value);
						}
					}
					virtual ev_bool isTwoShadesOn() const
					{
						if (this->_gRef != NULL && this->m_isTwoShadesOn_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isTwoShadesOn_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isTwoShadesOn();
						}
					}
					virtual void setTwoShadesValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setTwoShadesValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setTwoShadesValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setTwoShadesValue(value);
						}
					}
					virtual ev_bool isShallowPatternOn() const
					{
						if (this->_gRef != NULL && this->m_isShallowPatternOn_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShallowPatternOn_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShallowPatternOn();
						}
					}
					virtual void setShallowPatternValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShallowPatternValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShallowPatternValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShallowPatternValue(value);
						}
					}
					virtual ev_bool isShipOutlineOn() const
					{
						if (this->_gRef != NULL && this->m_isShipOutlineOn_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShipOutlineOn_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShipOutlineOn();
						}
					}
					virtual void setShipOutlineValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShipOutlineValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShipOutlineValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShipOutlineValue(value);
						}
					}
					virtual ev_bool isFullSectorsOn() const
					{
						if (this->_gRef != NULL && this->m_isFullSectorsOn_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isFullSectorsOn_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isFullSectorsOn();
						}
					}
					virtual void setFullSectorsValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setFullSectorsValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setFullSectorsValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setFullSectorsValue(value);
						}
					}
					virtual ev_real64 getDistanceTag() const
					{
						if (this->_gRef != NULL && this->m_getDistanceTag_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDistanceTag_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getDistanceTag();
						}
					}
					virtual void setDistanceTag(ev_real64 value)
					{
						if (this->_gRef != NULL && this->m_setDistanceTag_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble value_j = (jdouble) value;
							jmethodID __method = __gr->getMethod("setDistanceTag_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setDistanceTag(value);
						}
					}
					virtual ev_int32 getTimeTags() const
					{
						if (this->_gRef != NULL && this->m_getTimeTags_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTimeTags_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getTimeTags();
						}
					}
					virtual void setTimeTages(ev_int32 value)
					{
						if (this->_gRef != NULL && this->m_setTimeTages_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint value_j = (jint) value;
							jmethodID __method = __gr->getMethod("setTimeTages_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setTimeTages(value);
						}
					}
					virtual ev_int32 getSymbolGroup() const
					{
						if (this->_gRef != NULL && this->m_getSymbolGroup_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSymbolGroup_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getSymbolGroup();
						}
					}
					virtual void setSymbolGroup(ev_int32 value)
					{
						if (this->_gRef != NULL && this->m_setSymbolGroup_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint value_j = (jint) value;
							jmethodID __method = __gr->getMethod("setSymbolGroup_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setSymbolGroup(value);
						}
					}
					virtual ev_int32 getTextGroup() const
					{
						if (this->_gRef != NULL && this->m_getTextGroup_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTextGroup_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getTextGroup();
						}
					}
					virtual void setTextGroup(ev_int32 group)
					{
						if (this->_gRef != NULL && this->m_setTextGroup_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint group_j = (jint) group;
							jmethodID __method = __gr->getMethod("setTextGroup_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , group_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setTextGroup(group);
						}
					}
					virtual ev_real64 getChartScale() const
					{
						if (this->_gRef != NULL && this->m_getChartScale_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getChartScale_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getChartScale();
						}
					}
					virtual void setChartScale(ev_real64 scale)
					{
						if (this->_gRef != NULL && this->m_setChartScale_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble scale_j = (jdouble) scale;
							jmethodID __method = __gr->getMethod("setChartScale_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , scale_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setChartScale(scale);
						}
					}
					virtual ev_bool isShowOtherVessel() const
					{
						if (this->_gRef != NULL && this->m_isShowOtherVessel_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowOtherVessel_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowOtherVessel();
						}
					}
					virtual void setShowOtherVesselValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowOtherVesselValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowOtherVesselValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowOtherVesselValue(value);
						}
					}
					virtual ev_bool isShowCourseSpeedVessel() const
					{
						if (this->_gRef != NULL && this->m_isShowCourseSpeedVessel_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowCourseSpeedVessel_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowCourseSpeedVessel();
						}
					}
					virtual void setShowCourseSpeedVesselValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowCourseSpeedVesselValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowCourseSpeedVesselValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowCourseSpeedVesselValue(value);
						}
					}
					virtual ev_bool isShowBeamBearingLine() const
					{
						if (this->_gRef != NULL && this->m_isShowBeamBearingLine_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowBeamBearingLine_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowBeamBearingLine();
						}
					}
					virtual void setShowBeamBearingLineValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowBeamBearingLineValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowBeamBearingLineValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowBeamBearingLineValue(value);
						}
					}
					virtual ev_bool isShowStabilization() const
					{
						if (this->_gRef != NULL && this->m_isShowStabilization_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowStabilization_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowStabilization();
						}
					}
					virtual void setShowStabilizationValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowStabilizationValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowStabilizationValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowStabilizationValue(value);
						}
					}
					virtual ev_bool isShowTimeMarks() const
					{
						if (this->_gRef != NULL && this->m_isShowTimeMarks_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowTimeMarks_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowTimeMarks();
						}
					}
					virtual void setShowTimeMarksValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowTimeMarksValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowTimeMarksValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowTimeMarksValue(value);
						}
					}
					virtual ev_bool isShowHeadingLine() const
					{
						if (this->_gRef != NULL && this->m_isShowHeadingLine_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isShowHeadingLine_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isShowHeadingLine();
						}
					}
					virtual void setShowHeadingLineValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setShowHeadingLineValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setShowHeadingLineValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShowHeadingLineValue(value);
						}
					}
					virtual ev_int32 getShipBeamLengthValue() const
					{
						if (this->_gRef != NULL && this->m_getShipBeamLengthValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getShipBeamLengthValue_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getShipBeamLengthValue();
						}
					}
					virtual void setShipBeamLengthValue(ev_int32 value)
					{
						if (this->_gRef != NULL && this->m_setShipBeamLengthValue_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint value_j = (jint) value;
							jmethodID __method = __gr->getMethod("setShipBeamLengthValue_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setShipBeamLengthValue(value);
						}
					}
					virtual void insertVRMRadius(ev_real64 radius)
					{
						if (this->_gRef != NULL && this->m_insertVRMRadius_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble radius_j = (jdouble) radius;
							jmethodID __method = __gr->getMethod("insertVRMRadius_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , radius_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::insertVRMRadius(radius);
						}
					}
					virtual ev_uint32 getVRMRadiusNum() const
					{
						if (this->_gRef != NULL && this->m_getVRMRadiusNum_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getVRMRadiusNum_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getVRMRadiusNum();
						}
					}
					virtual ev_real64 getVRMRadiusValue(ev_uint32 index) const
					{
						if (this->_gRef != NULL && this->m_getVRMRadiusValue_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("getVRMRadiusValue_ev_uint32_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getVRMRadiusValue(index);
						}
					}
					virtual void removeVRMRadius(ev_uint32 index)
					{
						if (this->_gRef != NULL && this->m_removeVRMRadius_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong index_j = (jlong) index;
							jmethodID __method = __gr->getMethod("removeVRMRadius_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , index_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::removeVRMRadius(index);
						}
					}
					virtual void clearVRMRadius()
					{
						if (this->_gRef != NULL && this->m_clearVRMRadius_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("clearVRMRadius_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::clearVRMRadius();
						}
					}
					virtual ev_bool isUseVRMEBLSymbolA() const
					{
						if (this->_gRef != NULL && this->m_isUseVRMEBLSymbolA_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isUseVRMEBLSymbolA_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isUseVRMEBLSymbolA();
						}
					}
					virtual void setUseVRMEBLSymbolAValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setUseVRMEBLSymbolAValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setUseVRMEBLSymbolAValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setUseVRMEBLSymbolAValue(value);
						}
					}
					virtual ev_real64 getEBLLength() const
					{
						if (this->_gRef != NULL && this->m_getEBLLength_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEBLLength_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getEBLLength();
						}
					}
					virtual void setEBLLength(ev_real64 length)
					{
						if (this->_gRef != NULL && this->m_setEBLLength_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble length_j = (jdouble) length;
							jmethodID __method = __gr->getMethod("setEBLLength_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , length_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setEBLLength(length);
						}
					}
					virtual ev_real64 getEBLAngle() const
					{
						if (this->_gRef != NULL && this->m_getEBLAngle_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEBLAngle_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getEBLAngle();
						}
					}
					virtual void setEBLAngle(ev_real64 angle)
					{
						if (this->_gRef != NULL && this->m_setEBLAngle_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble angle_j = (jdouble) angle;
							jmethodID __method = __gr->getMethod("setEBLAngle_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , angle_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setEBLAngle(angle);
						}
					}
					virtual void setUseEnglishValue(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setUseEnglishValue_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setUseEnglishValue_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setUseEnglishValue(value);
						}
					}
					virtual ev_bool getUseEnglishValue() const
					{
						if (this->_gRef != NULL && this->m_getUseEnglishValue_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getUseEnglishValue_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::getUseEnglishValue();
						}
					}
					virtual void setUseBlurSpatialRelation(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setUseBlurSpatialRelation_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setUseBlurSpatialRelation_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setUseBlurSpatialRelation(value);
						}
					}
					virtual ev_bool isUseBlurSpatialRelation() const
					{
						if (this->_gRef != NULL && this->m_isUseBlurSpatialRelation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isUseBlurSpatialRelation_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isUseBlurSpatialRelation();
						}
					}
					virtual void setGeneralizeSoundgPoints(ev_bool value)
					{
						if (this->_gRef != NULL && this->m_setGeneralizeSoundgPoints_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean value_j = (jboolean) value;
							jmethodID __method = __gr->getMethod("setGeneralizeSoundgPoints_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , value_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CChartOption::setGeneralizeSoundgPoints(value);
						}
					}
					virtual ev_bool isGeneralizeSoundgPoints() const
					{
						if (this->_gRef != NULL && this->m_isGeneralizeSoundgPoints_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isGeneralizeSoundgPoints_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::isGeneralizeSoundgPoints();
						}
					}
					virtual EarthView::World::Spatial::Display::IChartOption* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::IChartOption *__values1 = (EarthView::World::Spatial::Display::IChartOption*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CChartOption::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCChartOptionProxy);
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartPointType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartPointType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->getChartPointType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getChartPointType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartPointType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartPointType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartPointType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartPointType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartPointType_1EVChartLookUpType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartLookUpType type = (EarthView::World::Spatial::Display::EVChartLookUpType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartPointType(type);
					}
					else
					{
						pObjectX->setChartPointType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setChartPointType_1EVChartLookUpType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartPointType_EVChartLookUpType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartPointType_EVChartLookUpType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartPointType_1EVChartLookUpType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartLookUpType type = (EarthView::World::Spatial::Display::EVChartLookUpType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartPointType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartAreaType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartAreaType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->getChartAreaType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getChartAreaType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartAreaType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartAreaType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartAreaType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::EVChartLookUpType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartAreaType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartAreaType_1EVChartLookUpType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartLookUpType type = (EarthView::World::Spatial::Display::EVChartLookUpType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartAreaType(type);
					}
					else
					{
						pObjectX->setChartAreaType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setChartAreaType_1EVChartLookUpType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartAreaType_EVChartLookUpType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartAreaType_EVChartLookUpType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartAreaType_1EVChartLookUpType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartLookUpType type = (EarthView::World::Spatial::Display::EVChartLookUpType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartAreaType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getCartoAssistLineType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::EVChartSimpleLineType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getCartoAssistLineType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVChartSimpleLineType __values1 = pObjectX->getCartoAssistLineType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getCartoAssistLineType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCartoAssistLineType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCartoAssistLineType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getCartoAssistLineType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::EVChartSimpleLineType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getCartoAssistLineType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setCartoAssistLineType_1EVChartSimpleLineType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartSimpleLineType type = (EarthView::World::Spatial::Display::EVChartSimpleLineType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setCartoAssistLineType(type);
					}
					else
					{
						pObjectX->setCartoAssistLineType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setCartoAssistLineType_1EVChartSimpleLineType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCartoAssistLineType_EVChartSimpleLineType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCartoAssistLineType_EVChartSimpleLineType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setCartoAssistLineType_1EVChartSimpleLineType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartSimpleLineType type = (EarthView::World::Spatial::Display::EVChartSimpleLineType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setCartoAssistLineType(type);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setColorType_1EVChartColorType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartColorType type = (EarthView::World::Spatial::Display::EVChartColorType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setColorType(type);
					}
					else
					{
						pObjectX->setColorType(type);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setColorType_1EVChartColorType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setColorType_EVChartColorType_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setColorType_EVChartColorType_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setColorType_1EVChartColorType_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Display::EVChartColorType type = (EarthView::World::Spatial::Display::EVChartColorType) type_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setColorType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getColorType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::EVChartColorType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getColorType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVChartColorType __values1 = pObjectX->getColorType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getColorType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getColorType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getColorType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getColorType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::EVChartColorType __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getColorType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDisplayCategory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::EVChartDisplayCategory __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDisplayCategory();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::EVChartDisplayCategory __values1 = pObjectX->getDisplayCategory();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getDisplayCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDisplayCategory_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDisplayCategory_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDisplayCategory_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::EVChartDisplayCategory __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDisplayCategory();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDisplayCategory_1EVChartDisplayCategory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint category_j)
				{
					EarthView::World::Spatial::Display::EVChartDisplayCategory category = (EarthView::World::Spatial::Display::EVChartDisplayCategory) category_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setDisplayCategory(category);
					}
					else
					{
						pObjectX->setDisplayCategory(category);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setDisplayCategory_1EVChartDisplayCategory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDisplayCategory_EVChartDisplayCategory_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDisplayCategory_EVChartDisplayCategory_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDisplayCategory_1EVChartDisplayCategory_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint category_j)
				{
					EarthView::World::Spatial::Display::EVChartDisplayCategory category = (EarthView::World::Spatial::Display::EVChartDisplayCategory) category_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setDisplayCategory(category);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSafetyDeep_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSafetyDeep();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getSafetyDeep();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getSafetyDeep_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSafetyDeep_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSafetyDeep_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSafetyDeep_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSafetyDeep();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSafetyDeep_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setSafetyDeep(value);
					}
					else
					{
						pObjectX->setSafetyDeep(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setSafetyDeep_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSafetyDeep_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSafetyDeep_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSafetyDeep_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setSafetyDeep(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSafetyContour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSafetyContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getSafetyContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getSafetyContour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSafetyContour_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSafetyContour_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSafetyContour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSafetyContour();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSafetyContour_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setSafetyContour(value);
					}
					else
					{
						pObjectX->setSafetyContour(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setSafetyContour_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSafetyContour_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSafetyContour_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSafetyContour_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setSafetyContour(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getShallowContour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getShallowContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getShallowContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getShallowContour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShallowContour_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShallowContour_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getShallowContour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getShallowContour();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShallowContour_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShallowContour(value);
					}
					else
					{
						pObjectX->setShallowContour(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShallowContour_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShallowContour_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShallowContour_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShallowContour_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShallowContour(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDeepContour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDeepContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDeepContour();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getDeepContour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDeepContour_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDeepContour_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDeepContour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDeepContour();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDeepContour_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setDeepContour(value);
					}
					else
					{
						pObjectX->setDeepContour(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setDeepContour_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDeepContour_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDeepContour_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDeepContour_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setDeepContour(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isTwoShadesOn_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isTwoShadesOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isTwoShadesOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isTwoShadesOn_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isTwoShadesOn_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isTwoShadesOn_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isTwoShadesOn_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isTwoShadesOn();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTwoShadesValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setTwoShadesValue(value);
					}
					else
					{
						pObjectX->setTwoShadesValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setTwoShadesValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTwoShadesValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTwoShadesValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTwoShadesValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setTwoShadesValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShallowPatternOn_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShallowPatternOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShallowPatternOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShallowPatternOn_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShallowPatternOn_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShallowPatternOn_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShallowPatternOn_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShallowPatternOn();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShallowPatternValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShallowPatternValue(value);
					}
					else
					{
						pObjectX->setShallowPatternValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShallowPatternValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShallowPatternValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShallowPatternValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShallowPatternValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShallowPatternValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShipOutlineOn_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShipOutlineOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShipOutlineOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShipOutlineOn_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShipOutlineOn_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShipOutlineOn_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShipOutlineOn_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShipOutlineOn();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShipOutlineValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShipOutlineValue(value);
					}
					else
					{
						pObjectX->setShipOutlineValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShipOutlineValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShipOutlineValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShipOutlineValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShipOutlineValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShipOutlineValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isFullSectorsOn_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isFullSectorsOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isFullSectorsOn();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isFullSectorsOn_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isFullSectorsOn_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isFullSectorsOn_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isFullSectorsOn_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isFullSectorsOn();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setFullSectorsValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setFullSectorsValue(value);
					}
					else
					{
						pObjectX->setFullSectorsValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setFullSectorsValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setFullSectorsValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setFullSectorsValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setFullSectorsValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setFullSectorsValue(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDistanceTag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDistanceTag();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getDistanceTag();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getDistanceTag_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDistanceTag_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDistanceTag_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getDistanceTag_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getDistanceTag();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDistanceTag_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setDistanceTag(value);
					}
					else
					{
						pObjectX->setDistanceTag(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setDistanceTag_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setDistanceTag_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setDistanceTag_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setDistanceTag_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setDistanceTag(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getTimeTags_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getTimeTags();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getTimeTags();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getTimeTags_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTimeTags_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTimeTags_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getTimeTags_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getTimeTags();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTimeTages_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setTimeTages(value);
					}
					else
					{
						pObjectX->setTimeTages(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setTimeTages_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTimeTages_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTimeTages_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTimeTages_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setTimeTages(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSymbolGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSymbolGroup();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getSymbolGroup();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getSymbolGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSymbolGroup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSymbolGroup_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getSymbolGroup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getSymbolGroup();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSymbolGroup_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setSymbolGroup(value);
					}
					else
					{
						pObjectX->setSymbolGroup(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setSymbolGroup_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSymbolGroup_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSymbolGroup_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setSymbolGroup_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setSymbolGroup(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getTextGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getTextGroup();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getTextGroup();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getTextGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextGroup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextGroup_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getTextGroup_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getTextGroup();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTextGroup_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint group_j)
				{
					ev_int32 group = (ev_int32) group_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setTextGroup(group);
					}
					else
					{
						pObjectX->setTextGroup(group);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setTextGroup_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTextGroup_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTextGroup_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setTextGroup_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint group_j)
				{
					ev_int32 group = (ev_int32) group_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setTextGroup(group);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getChartScale();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getChartScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChartScale_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChartScale_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getChartScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getChartScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartScale(scale);
					}
					else
					{
						pObjectX->setChartScale(scale);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setChartScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChartScale_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChartScale_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setChartScale_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setChartScale(scale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowOtherVessel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowOtherVessel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowOtherVessel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowOtherVessel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowOtherVessel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowOtherVessel_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowOtherVessel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowOtherVessel();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowOtherVesselValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowOtherVesselValue(value);
					}
					else
					{
						pObjectX->setShowOtherVesselValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowOtherVesselValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowOtherVesselValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowOtherVesselValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowOtherVesselValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowOtherVesselValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowCourseSpeedVessel_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowCourseSpeedVessel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowCourseSpeedVessel();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowCourseSpeedVessel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowCourseSpeedVessel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowCourseSpeedVessel_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowCourseSpeedVessel_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowCourseSpeedVessel();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowCourseSpeedVesselValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowCourseSpeedVesselValue(value);
					}
					else
					{
						pObjectX->setShowCourseSpeedVesselValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowCourseSpeedVesselValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowCourseSpeedVesselValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowCourseSpeedVesselValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowCourseSpeedVesselValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowCourseSpeedVesselValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowBeamBearingLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowBeamBearingLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowBeamBearingLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowBeamBearingLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowBeamBearingLine_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowBeamBearingLine_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowBeamBearingLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowBeamBearingLine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowBeamBearingLineValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowBeamBearingLineValue(value);
					}
					else
					{
						pObjectX->setShowBeamBearingLineValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowBeamBearingLineValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowBeamBearingLineValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowBeamBearingLineValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowBeamBearingLineValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowBeamBearingLineValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowStabilization_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowStabilization();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowStabilization();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowStabilization_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowStabilization_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowStabilization_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowStabilization_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowStabilization();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowStabilizationValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowStabilizationValue(value);
					}
					else
					{
						pObjectX->setShowStabilizationValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowStabilizationValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowStabilizationValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowStabilizationValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowStabilizationValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowStabilizationValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowTimeMarks_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowTimeMarks();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowTimeMarks();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowTimeMarks_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowTimeMarks_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowTimeMarks_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowTimeMarks_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowTimeMarks();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowTimeMarksValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowTimeMarksValue(value);
					}
					else
					{
						pObjectX->setShowTimeMarksValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowTimeMarksValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowTimeMarksValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowTimeMarksValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowTimeMarksValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowTimeMarksValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowHeadingLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowHeadingLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isShowHeadingLine();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isShowHeadingLine_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isShowHeadingLine_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isShowHeadingLine_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isShowHeadingLine_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isShowHeadingLine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowHeadingLineValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowHeadingLineValue(value);
					}
					else
					{
						pObjectX->setShowHeadingLineValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShowHeadingLineValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShowHeadingLineValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShowHeadingLineValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShowHeadingLineValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShowHeadingLineValue(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getShipBeamLengthValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getShipBeamLengthValue();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getShipBeamLengthValue();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getShipBeamLengthValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShipBeamLengthValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShipBeamLengthValue_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_display_ChartOption_getShipBeamLengthValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getShipBeamLengthValue();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShipBeamLengthValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setShipBeamLengthValue(value);
					}
					else
					{
						pObjectX->setShipBeamLengthValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setShipBeamLengthValue_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setShipBeamLengthValue_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setShipBeamLengthValue_ev_int32_callback", "(I)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setShipBeamLengthValue_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					ev_int32 value = (ev_int32) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setShipBeamLengthValue(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_insertVRMRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::insertVRMRadius(radius);
					}
					else
					{
						pObjectX->insertVRMRadius(radius);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1insertVRMRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_insertVRMRadius_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"insertVRMRadius_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_insertVRMRadius_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					ev_real64 radius = (ev_real64) radius_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::insertVRMRadius(radius);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ChartOption_getVRMRadiusNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getVRMRadiusNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getVRMRadiusNum();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getVRMRadiusNum_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVRMRadiusNum_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVRMRadiusNum_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ChartOption_getVRMRadiusNum_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getVRMRadiusNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getVRMRadiusValue_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getVRMRadiusValue(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getVRMRadiusValue(index);
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getVRMRadiusValue_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVRMRadiusValue_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVRMRadiusValue_ev_uint32_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getVRMRadiusValue_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getVRMRadiusValue(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_removeVRMRadius_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::removeVRMRadius(index);
					}
					else
					{
						pObjectX->removeVRMRadius(index);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1removeVRMRadius_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeVRMRadius_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeVRMRadius_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_removeVRMRadius_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::removeVRMRadius(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_clearVRMRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::clearVRMRadius();
					}
					else
					{
						pObjectX->clearVRMRadius();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1clearVRMRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearVRMRadius_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearVRMRadius_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_clearVRMRadius_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::clearVRMRadius();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isUseVRMEBLSymbolA_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isUseVRMEBLSymbolA();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isUseVRMEBLSymbolA();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isUseVRMEBLSymbolA_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isUseVRMEBLSymbolA_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isUseVRMEBLSymbolA_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isUseVRMEBLSymbolA_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isUseVRMEBLSymbolA();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseVRMEBLSymbolAValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseVRMEBLSymbolAValue(value);
					}
					else
					{
						pObjectX->setUseVRMEBLSymbolAValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setUseVRMEBLSymbolAValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseVRMEBLSymbolAValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseVRMEBLSymbolAValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseVRMEBLSymbolAValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseVRMEBLSymbolAValue(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getEBLLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getEBLLength();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getEBLLength();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getEBLLength_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEBLLength_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEBLLength_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getEBLLength_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getEBLLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setEBLLength_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble length_j)
				{
					ev_real64 length = (ev_real64) length_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setEBLLength(length);
					}
					else
					{
						pObjectX->setEBLLength(length);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setEBLLength_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEBLLength_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEBLLength_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setEBLLength_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble length_j)
				{
					ev_real64 length = (ev_real64) length_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setEBLLength(length);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getEBLAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getEBLAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getEBLAngle();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getEBLAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEBLAngle_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEBLAngle_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_ChartOption_getEBLAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getEBLAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setEBLAngle_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setEBLAngle(angle);
					}
					else
					{
						pObjectX->setEBLAngle(angle);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setEBLAngle_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEBLAngle_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEBLAngle_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setEBLAngle_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setEBLAngle(angle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseEnglishValue_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseEnglishValue(value);
					}
					else
					{
						pObjectX->setUseEnglishValue(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setUseEnglishValue_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseEnglishValue_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseEnglishValue_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseEnglishValue_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseEnglishValue(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_getUseEnglishValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getUseEnglishValue();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getUseEnglishValue();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1getUseEnglishValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getUseEnglishValue_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getUseEnglishValue_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_getUseEnglishValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::getUseEnglishValue();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseBlurSpatialRelation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseBlurSpatialRelation(value);
					}
					else
					{
						pObjectX->setUseBlurSpatialRelation(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setUseBlurSpatialRelation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUseBlurSpatialRelation_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUseBlurSpatialRelation_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setUseBlurSpatialRelation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setUseBlurSpatialRelation(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isUseBlurSpatialRelation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isUseBlurSpatialRelation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isUseBlurSpatialRelation();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isUseBlurSpatialRelation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isUseBlurSpatialRelation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isUseBlurSpatialRelation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isUseBlurSpatialRelation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isUseBlurSpatialRelation();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setGeneralizeSoundgPoints_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						pObjectX->EarthView::World::Spatial::Display::CChartOption::setGeneralizeSoundgPoints(value);
					}
					else
					{
						pObjectX->setGeneralizeSoundgPoints(value);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1setGeneralizeSoundgPoints_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setGeneralizeSoundgPoints_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setGeneralizeSoundgPoints_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_setGeneralizeSoundgPoints_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					ev_bool value = (ev_bool) value_j;
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Display::CChartOption::setGeneralizeSoundgPoints(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isGeneralizeSoundgPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isGeneralizeSoundgPoints();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isGeneralizeSoundgPoints();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1isGeneralizeSoundgPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isGeneralizeSoundgPoints_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isGeneralizeSoundgPoints_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_ChartOption_isGeneralizeSoundgPoints_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::isGeneralizeSoundgPoints();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ChartOption_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCChartOptionProxy))
					{
						EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->clone();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_ChartOption_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCChartOptionProxy *pObjectX = (JCChartOptionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_ChartOption_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CChartOption *pObjectX = (EarthView::World::Spatial::Display::CChartOption*) pObjXXXX;
					EarthView::World::Spatial::Display::IChartOption* __values1 = pObjectX->EarthView::World::Spatial::Display::CChartOption::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
