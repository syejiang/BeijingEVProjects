package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Core_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Core::FileInfo", new com.earthview.world.core.FileInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::FileInfoList", new com.earthview.world.core.FileInfoListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::FileInfoListPtr", new com.earthview.world.core.FileInfoListPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchive", new com.earthview.world.core.ArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCArchiveProxy", new com.earthview.world.core.ArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveFactory", new com.earthview.world.core.ArchiveFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCArchiveFactoryProxy", new com.earthview.world.core.ArchiveFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager", new com.earthview.world.core.ArchiveManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveFactoryMap", new com.earthview.world.core.ArchiveManager.ArchiveFactoryMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMap", new com.earthview.world.core.ArchiveManager.ArchiveMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMapPair", new com.earthview.world.core.ArchiveManager.ArchiveMapPairClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CArchiveManager::ArchiveMapIterator", new com.earthview.world.core.ArchiveManager.ArchiveMapIteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CAtomicInt", new com.earthview.world.core.AtomicIntClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CBaseTcpServerJob", new com.earthview.world.core.BaseTcpServerJobClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBaseTcpServerJobProxy", new com.earthview.world.core.BaseTcpServerJobClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CommonStringPairList", new com.earthview.world.core.CommonStringPairListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::IntVector", new com.earthview.world.core.IntVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::IntPairVector", new com.earthview.world.core.IntPairVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::Int3Vector", new com.earthview.world.core.Int3VectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::RealVector", new com.earthview.world.core.RealVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::RealList", new com.earthview.world.core.RealListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStream", new com.earthview.world.core.DataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDataStreamProxy", new com.earthview.world.core.DataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStreamReader", new com.earthview.world.core.DataStreamReaderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDataStreamWriter", new com.earthview.world.core.DataStreamWriterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::DataStreamPtr", new com.earthview.world.core.DataStreamPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::DataStreamList", new com.earthview.world.core.DataStreamListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::DataStreamListPtr", new com.earthview.world.core.DataStreamListPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CMemoryDataStream", new com.earthview.world.core.MemoryDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCMemoryDataStreamProxy", new com.earthview.world.core.MemoryDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::MemoryDataStreamPtr", new com.earthview.world.core.MemoryDataStreamPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileStreamDataStream", new com.earthview.world.core.FileStreamDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileStreamDataStreamProxy", new com.earthview.world.core.FileStreamDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CBufferDataStream", new com.earthview.world.core.BufferDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBufferDataStreamProxy", new com.earthview.world.core.BufferDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileHandleDataStream", new com.earthview.world.core.FileHandleDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileHandleDataStreamProxy", new com.earthview.world.core.FileHandleDataStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CSqlBlobStream", new com.earthview.world.core.SqlBlobStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCSqlBlobStreamProxy", new com.earthview.world.core.SqlBlobStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::MemoryDataStreamVector", new com.earthview.world.core.MemoryDataStreamVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueue", new com.earthview.world.core.DefaultWorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDefaultWorkQueueProxy", new com.earthview.world.core.DefaultWorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDeviceUtility", new com.earthview.world.core.DeviceUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDirectory", new com.earthview.world.core.DirectoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDynLib", new com.earthview.world.core.DynLibClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDynLibManager", new com.earthview.world.core.DynLibManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CLogger", new com.earthview.world.core.LoggerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CSemaphore", new com.earthview.world.core.SemaphoreClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCSemaphoreProxy", new com.earthview.world.core.SemaphoreClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CStringUtil", new com.earthview.world.core.StringUtilClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CCoreTime", new com.earthview.world.core.CoreTimeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslator", new com.earthview.world.core.EvTranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEvTranslatorProxy", new com.earthview.world.core.EvTranslatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslatorListener", new com.earthview.world.core.EvTranslatorListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEvTranslatorListenerProxy", new com.earthview.world.core.EvTranslatorListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvTranslatorManager", new com.earthview.world.core.EvTranslatorManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEvent", new com.earthview.world.core.EventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CTimerEvent", new com.earthview.world.core.TimerEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEventDispatcher", new com.earthview.world.core.EventDispatcherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEventDispatcherProxy", new com.earthview.world.core.EventDispatcherClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFile", new com.earthview.world.core.FileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::FileAttributes", new com.earthview.world.core.FileAttributesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileMapping", new com.earthview.world.core.FileMappingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileSystemArchive", new com.earthview.world.core.FileSystemArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileSystemArchiveProxy", new com.earthview.world.core.FileSystemArchiveClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileSystemArchiveFactory", new com.earthview.world.core.FileSystemArchiveFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileSystemArchiveFactoryProxy", new com.earthview.world.core.FileSystemArchiveFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CException", new com.earthview.world.core.EVExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCExceptionProxy", new com.earthview.world.core.EVExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CUnimplementedException", new com.earthview.world.core.UnimplementedExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCUnimplementedExceptionProxy", new com.earthview.world.core.UnimplementedExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CNotLicensedException", new com.earthview.world.core.NotLicensedExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCNotLicensedExceptionProxy", new com.earthview.world.core.NotLicensedExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CFileNotFoundException", new com.earthview.world.core.FileNotFoundExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCFileNotFoundExceptionProxy", new com.earthview.world.core.FileNotFoundExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CIOException", new com.earthview.world.core.IoexceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCIOExceptionProxy", new com.earthview.world.core.IoexceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CInvalidStateException", new com.earthview.world.core.InvalidStateExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCInvalidStateExceptionProxy", new com.earthview.world.core.InvalidStateExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CInvalidParametersException", new com.earthview.world.core.InvalidParametersExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCInvalidParametersExceptionProxy", new com.earthview.world.core.InvalidParametersExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CItemIdentityException", new com.earthview.world.core.ItemIdentityExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCItemIdentityExceptionProxy", new com.earthview.world.core.ItemIdentityExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CInternalErrorException", new com.earthview.world.core.InternalErrorExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCInternalErrorExceptionProxy", new com.earthview.world.core.InternalErrorExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CRenderingAPIException", new com.earthview.world.core.RenderingAPIExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCRenderingAPIExceptionProxy", new com.earthview.world.core.RenderingAPIExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CRuntimeAssertionException", new com.earthview.world.core.RuntimeAssertionExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCRuntimeAssertionExceptionProxy", new com.earthview.world.core.RuntimeAssertionExceptionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::GUID", new com.earthview.world.core.GuidClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CAllocatedObject", new com.earthview.world.core.AllocatedObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CMutex", new com.earthview.world.core.MutexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CRecursiveMutex", new com.earthview.world.core.RecursiveMutexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CMutexLocker", new com.earthview.world.core.MutexLockerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CCondition", new com.earthview.world.core.ConditionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CEventObject", new com.earthview.world.core.EventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCEventObjectProxy", new com.earthview.world.core.EventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CPlugin", new com.earthview.world.core.PluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCPluginProxy", new com.earthview.world.core.PluginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CReadWriteLock", new com.earthview.world.core.ReadWriteLockClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CReadLocker", new com.earthview.world.core.ReadLockerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWriteLocker", new com.earthview.world.core.WriteLockerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CStringArray", new com.earthview.world.core.StringArrayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWStringArray", new com.earthview.world.core.WstringarrayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CParameterDef", new com.earthview.world.core.ParameterDefClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::ParameterList", new com.earthview.world.core.ParameterListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CParamCommand", new com.earthview.world.core.ParamCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCParamCommandProxy", new com.earthview.world.core.ParamCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::ParamCommandMap", new com.earthview.world.core.ParamCommandMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CParamDictionary", new com.earthview.world.core.ParamDictionaryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::ParamDictionaryMap", new com.earthview.world.core.ParamDictionaryMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::IStringInterfaceObserver", new com.earthview.world.core.IstringinterfaceobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JIStringInterfaceObserverProxy", new com.earthview.world.core.IstringinterfaceobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CStringInterface", new com.earthview.world.core.StringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCStringInterfaceProxy", new com.earthview.world.core.StringInterfaceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::StringVector", new com.earthview.world.core.StringVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::StringVectorPtr", new com.earthview.world.core.StringVectorPtrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CTcpClient", new com.earthview.world.core.TcpClientClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCTcpClientProxy", new com.earthview.world.core.TcpClientClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CTcpServer", new com.earthview.world.core.TcpServerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCTcpServerProxy", new com.earthview.world.core.TcpServerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CThreadFunc", new com.earthview.world.core.ThreadFuncClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCThreadFuncProxy", new com.earthview.world.core.ThreadFuncClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CThread", new com.earthview.world.core.EVThreadClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCThreadProxy", new com.earthview.world.core.EVThreadClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CVariant", new com.earthview.world.core.VariantClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CVariantArray", new com.earthview.world.core.VariantArrayClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueueChannelListener", new com.earthview.world.core.WorkQueueChannelListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCWorkQueueChannelListenerProxy", new com.earthview.world.core.WorkQueueChannelListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue", new com.earthview.world.core.WorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCWorkQueueProxy", new com.earthview.world.core.WorkQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::RequestPara", new com.earthview.world.core.WorkQueue.RequestParaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JRequestParaProxy", new com.earthview.world.core.WorkQueue.RequestParaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::ResponsePara", new com.earthview.world.core.WorkQueue.ResponseParaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JResponseParaProxy", new com.earthview.world.core.WorkQueue.ResponseParaClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CRequest", new com.earthview.world.core.WorkQueue.RequestClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CResponse", new com.earthview.world.core.WorkQueue.ResponseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CRequestHandler", new com.earthview.world.core.WorkQueue.RequestHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JCRequestHandlerProxy", new com.earthview.world.core.WorkQueue.RequestHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::CResponseHandler", new com.earthview.world.core.WorkQueue.ResponseHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CWorkQueue::JCResponseHandlerProxy", new com.earthview.world.core.WorkQueue.ResponseHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueueBase", new com.earthview.world.core.DefaultWorkQueueBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCDefaultWorkQueueBaseProxy", new com.earthview.world.core.DefaultWorkQueueBaseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CDefaultWorkQueueBase::CRequestHandlerHolder", new com.earthview.world.core.DefaultWorkQueueBase.RequestHandlerHolderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CBackgroundQueue", new com.earthview.world.core.BackgroundQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::JCBackgroundQueueProxy", new com.earthview.world.core.BackgroundQueueClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CBackgroundQueueManager", new com.earthview.world.core.BackgroundQueueManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CXmlFile", new com.earthview.world.core.XmlFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Core::CXmlElement", new com.earthview.world.core.XmlElementClassFactory());
	}
}

