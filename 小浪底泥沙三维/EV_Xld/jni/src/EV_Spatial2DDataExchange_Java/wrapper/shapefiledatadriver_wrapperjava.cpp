/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/shapefiledatadriver.h"
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
			namespace Convertor
			{
				class JCShapefileDataDriverProxy : public EarthView::World::Spatial::Convertor::CShapefileDataDriver
				{
				 private:
					EarthView::World::Core::ev_string m_finishWrite_void_callback;
					EarthView::World::Core::ev_string m_close_void_callback;
					EarthView::World::Core::ev_string m_canRead_void_callback;
					EarthView::World::Core::ev_string m_canWrite_void_callback;
					EarthView::World::Core::ev_string m_read_ev_uint32_CDataStream_callback;
					EarthView::World::Core::ev_string m_write_ev_uint32_CDataStream_callback;
					EarthView::World::Core::ev_string m_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback;
					EarthView::World::Core::ev_string m_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback;
				public:
					JCShapefileDataDriverProxy(EarthView::World::Core::CNameValuePairList *pList) : CShapefileDataDriver(pList)
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
					void register_finishWrite_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_finishWrite_void_callback = __method;
					}
					void register_close_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_close_void_callback = __method;
					}
					void register_canRead_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canRead_void_callback = __method;
					}
					void register_canWrite_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_canWrite_void_callback = __method;
					}
					void register_read_ev_uint32_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_read_ev_uint32_CDataStream_callback = __method;
					}
					void register_write_ev_uint32_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_write_ev_uint32_CDataStream_callback = __method;
					}
					void register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback = __method;
					}
					void register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback = __method;
					}
					virtual void finishWrite()
					{
						if (this->_gRef != NULL && this->m_finishWrite_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("finishWrite_void_callback");
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
							return this->CShapefileDataDriver::finishWrite();
						}
					}
					virtual void close()
					{
						if (this->_gRef != NULL && this->m_close_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("close_void_callback");
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
							return this->CShapefileDataDriver::close();
						}
					}
					virtual ev_int32 read(ev_uint32 index, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_read_ev_uint32_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("read_ev_uint32_CDataStream_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , index_j, stream_j);
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
							return this->CShapefileDataDriver::read(index, stream);
						}
					}
					virtual ev_int32 write(ev_uint32 index, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_write_ev_uint32_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("write_ev_uint32_CDataStream_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , index_j, stream_j);
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
							return this->CShapefileDataDriver::write(index, stream);
						}
					}
					virtual ev_int32 open(EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet, EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, ev_uint32& featurecount, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong pPropertySet_j = (jlong) pPropertySet;
							jint mode_j = (jint) mode;
							jlong ref_param_j = (jlong) ref_param;
							jlong featurecount_j = (jlong) &featurecount;
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , pPropertySet_j, mode_j, ref_param_j, featurecount_j, stream_j);
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
							return this->CShapefileDataDriver::open(pPropertySet, mode, ref_param, featurecount, stream);
						}
					}
					virtual ev_int32 open(EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, const EVString& dataname, EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode, const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param, ev_uint32& featurecount, EarthView::World::Core::CDataStream& stream)
					{
						if (this->_gRef != NULL && this->m_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback != "" && this->isCustomExtend())
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
							jlong ref_dataSource_j = (jlong) ref_dataSource;
							EarthView::World::Core::ev_wstring dataname_wch = dataname;
							jstring dataname_j = __env->NewString((const jchar*)dataname_wch.getString(), dataname_wch.size());
							jint mode_j = (jint) mode;
							jlong ref_param_j = (jlong) ref_param;
							jlong featurecount_j = (jlong) &featurecount;
							jlong stream_j = (jlong) &stream;
							jmethodID __method = __gr->getMethod("open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , ref_dataSource_j, dataname_j, mode_j, ref_param_j, featurecount_j, stream_j);
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
							return this->CShapefileDataDriver::open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
						}
					}
					virtual ev_bool canRead()
					{
						if (this->_gRef != NULL && this->m_canRead_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canRead_void_callback");
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
							return this->CShapefileDataDriver::canRead();
						}
					}
					virtual ev_bool canWrite()
					{
						if (this->_gRef != NULL && this->m_canWrite_void_callback != "" && this->isCustomExtend())
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
							jmethodID __method = __gr->getMethod("canWrite_void_callback");
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
							return this->CShapefileDataDriver::canWrite();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCShapefileDataDriverProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_finishWrite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::finishWrite();
					}
					else
					{
						pObjectX->finishWrite();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1finishWrite_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_finishWrite_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"finishWrite_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_finishWrite_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::finishWrite();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::close();
					}
					else
					{
						pObjectX->close();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1close_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_close_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"close_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_close_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::close();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_read_1ev_1uint32_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::read(index, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->read(index, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1read_1ev_1uint32_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_read_ev_uint32_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"read_ev_uint32_CDataStream_callback", "(JJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_read_1ev_1uint32_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::read(index, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_write_1ev_1uint32_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::write(index, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->write(index, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1write_1ev_1uint32_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_write_ev_uint32_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"write_ev_uint32_CDataStream_callback", "(JJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_write_1ev_1uint32_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong stream_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::write(index, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_open_1IPropertySet_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPropertySet_j, jint mode_j, jlong ref_param_j, jlong featurecount_j, jlong stream_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pPropertySet = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pPropertySet_j;
					EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode = (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode) mode_j;
					const EarthView::World::Spatial::Convertor::CDataExchangeParam *ref_param = (const EarthView::World::Spatial::Convertor::CDataExchangeParam*) ref_param_j;
					ev_uint32 &featurecount = *(ev_uint32*) featurecount_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(pPropertySet, mode, ref_param, featurecount, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->open(pPropertySet, mode, ref_param, featurecount, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1open_1IPropertySet_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"open_IPropertySet_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback", "(JIJJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_open_1IPropertySet_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pPropertySet_j, jint mode_j, jlong ref_param_j, jlong featurecount_j, jlong stream_j)
				{
					EarthView::World::Spatial::GeoDataset::IPropertySet *pPropertySet = (EarthView::World::Spatial::GeoDataset::IPropertySet*) pPropertySet_j;
					EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode = (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode) mode_j;
					const EarthView::World::Spatial::Convertor::CDataExchangeParam *ref_param = (const EarthView::World::Spatial::Convertor::CDataExchangeParam*) ref_param_j;
					ev_uint32 &featurecount = *(ev_uint32*) featurecount_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(pPropertySet, mode, ref_param, featurecount, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_open_1IDataSource_1EVString_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jstring dataname_j, jint mode_j, jlong ref_param_j, jlong featurecount_j, jlong stream_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dataname_ch = (const ev_char*)__env->GetStringUTFChars(dataname_j,JNI_FALSE);
					const EVString dataname = dataname_ch;
					__env->ReleaseStringUTFChars(dataname_j, (const char *)dataname_ch);
					#else
					const ev_wchar* dataname_ch = (const ev_wchar*)__env->GetStringChars(dataname_j,JNI_FALSE);
					const EVString dataname = dataname_ch;
					__env->ReleaseStringChars(dataname_j, (const jchar *)dataname_ch);
					#endif
					EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode = (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode) mode_j;
					const EarthView::World::Spatial::Convertor::CDataExchangeParam *ref_param = (const EarthView::World::Spatial::Convertor::CDataExchangeParam*) ref_param_j;
					ev_uint32 &featurecount = *(ev_uint32*) featurecount_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShapefileDataDriverProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1open_1IDataSource_1EVString_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"open_IDataSource_EVString_EVDataExchangeOperateMode_CDataExchangeParam_ev_uint32_CDataStream_callback", "(JLjava/lang/String;IJJJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_open_1IDataSource_1EVString_1EVDataExchangeOperateMode_1CDataExchangeParam_1ev_1uint32_1CDataStream_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_dataSource_j, jstring dataname_j, jint mode_j, jlong ref_param_j, jlong featurecount_j, jlong stream_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource *ref_dataSource = (EarthView::World::Spatial::GeoDataset::IDataSource*) ref_dataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* dataname_ch = (const ev_char*)__env->GetStringUTFChars(dataname_j,JNI_FALSE);
					const EVString dataname = dataname_ch;
					__env->ReleaseStringUTFChars(dataname_j, (const char *)dataname_ch);
					#else
					const ev_wchar* dataname_ch = (const ev_wchar*)__env->GetStringChars(dataname_j,JNI_FALSE);
					const EVString dataname = dataname_ch;
					__env->ReleaseStringChars(dataname_j, (const jchar *)dataname_ch);
					#endif
					EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode = (EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode) mode_j;
					const EarthView::World::Spatial::Convertor::CDataExchangeParam *ref_param = (const EarthView::World::Spatial::Convertor::CDataExchangeParam*) ref_param_j;
					ev_uint32 &featurecount = *(ev_uint32*) featurecount_j;
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial::Convertor::CShapefileDataDriver *pObjectX = (EarthView::World::Spatial::Convertor::CShapefileDataDriver*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::Convertor::CShapefileDataDriver::open(ref_dataSource, dataname, mode, ref_param, featurecount, stream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1canRead_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canRead_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canRead_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_convertor_ShapefileDataDriver_register_1canWrite_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShapefileDataDriverProxy *pObjectX = (JCShapefileDataDriverProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_canWrite_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"canWrite_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
