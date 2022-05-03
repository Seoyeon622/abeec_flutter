#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// NativeGallery/MediaPickCallback
struct MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D;
// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileNotFoundException
struct FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0019D066900F59755D17F357AFB6B86C15E0603D;
IL2CPP_EXTERN_C String_t* _stringLiteral0A3CF76AA4D046F4E79CDE3341E93210C22D0D9E;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDCDCF2385ABDDA6EA48557BFDE007F3900F8A5;
IL2CPP_EXTERN_C String_t* _stringLiteral25F7337D4332BEF251FDC48A8892B4EFA4BD9747;
IL2CPP_EXTERN_C String_t* _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083;
IL2CPP_EXTERN_C String_t* _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0;
IL2CPP_EXTERN_C String_t* _stringLiteral340EEBA9101EFDE3932296B6E2FC2958C30EA544;
IL2CPP_EXTERN_C String_t* _stringLiteral34D71611DCE9C30419B3C3EA42DC9426E931CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteral35CAA81643B9DF64290110F4DF8DBD552D14C946;
IL2CPP_EXTERN_C String_t* _stringLiteral377ED966B3A8FCCD3BE787DDE011557F2EC947F9;
IL2CPP_EXTERN_C String_t* _stringLiteral462ED37FD7697B48AA45CEA0C4407CFBA5810C29;
IL2CPP_EXTERN_C String_t* _stringLiteral48022311225DF803178B78ACBDB71930DBF6C39C;
IL2CPP_EXTERN_C String_t* _stringLiteral4902F935220E52075E3BCE3CC7C930562138C110;
IL2CPP_EXTERN_C String_t* _stringLiteral4CCBEFEEDADEDC4ABB85D0C8ADEF1A3BD2CF85B7;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF66E78A14E0F2CEDCEDD3904B1D699436320FF;
IL2CPP_EXTERN_C String_t* _stringLiteral6086A9E1FB0848F6D06CBF4F123D6CCC58A06F0D;
IL2CPP_EXTERN_C String_t* _stringLiteral60C283FF6EF6CAD8B67415AE1A3C6BABD3477040;
IL2CPP_EXTERN_C String_t* _stringLiteral64CC1194405FA366D9AE015C627F4609DEAC4879;
IL2CPP_EXTERN_C String_t* _stringLiteral65679DE1D219F353C0B8F13D040AAE43D36C7BEA;
IL2CPP_EXTERN_C String_t* _stringLiteral680C002DD68BA7790878A280403262AF039049BE;
IL2CPP_EXTERN_C String_t* _stringLiteral7D65788C5CE6ABCABF195863EEDDF508BC37FD6A;
IL2CPP_EXTERN_C String_t* _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD20BABC29399AC23CC2FAD89C409D47A1AA74F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DAB055BE6FC3DFC1BE60E2532729C9F6891796D;
IL2CPP_EXTERN_C String_t* _stringLiteral9396C555ED6F4114FE93CC622496F6970B922A31;
IL2CPP_EXTERN_C String_t* _stringLiteral94D6A6A95D604C88AC795D66235A6C9EDF2D412B;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA91952CBB0F931695F22F2850D11436745CE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986;
IL2CPP_EXTERN_C String_t* _stringLiteralA04667285B0D56FA5C9AD66F9249C0C461B42CCD;
IL2CPP_EXTERN_C String_t* _stringLiteralA6E98DBB2BD82CB83A4EB01F4DFB5062494F8E28;
IL2CPP_EXTERN_C String_t* _stringLiteralB130FDA69D1FEDEAE059C90E064D5CB0CF6968D9;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F0D81387C1211E197E16C94BFDA6583BC874F9;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4481BD2213B34AD62DA1B520D57E6CFEAC9F53;
IL2CPP_EXTERN_C String_t* _stringLiteralC68C6D5E83DA7C25F2861D5D19720D87BB3436B4;
IL2CPP_EXTERN_C String_t* _stringLiteralD006243EF4D037E0849ABC4F6DF2B053181FD194;
IL2CPP_EXTERN_C String_t* _stringLiteralDBDE7B610BA82DCB92EBC33013A2A7B7F66F3C05;
IL2CPP_EXTERN_C String_t* _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E0FF79A43EEC764F39ADD4A7ED4FB494EEF4FC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16425C70B0BF8A4323B323DF6C309092ED0409B;
IL2CPP_EXTERN_C String_t* _stringLiteralE35B1258A7DF335EB03C6AFAF41FE620F875441F;
IL2CPP_EXTERN_C String_t* _stringLiteralED1B9C7D34799A52C40EA5152BBC17A14FA41632;
IL2CPP_EXTERN_C String_t* _stringLiteralFACB855C9CEF68CF9733F539BDE2B57586848293;
IL2CPP_EXTERN_C String_t* _stringLiteralFC9C6859C89D2066E1ECACA953784B1C8474910F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4EE4B1723AD8666E01605377F86ACAF7F1AB88A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC_mDC29622CE342F06F5412C8B6C12615091DEF114C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mFAC0AE4684AFD4EEB1563436150DCAEC2213A1FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_mB3016DF41AF03C4F21D494FD4F972F497438EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mCFF899042A3F29379F655FD1149663C5DFCBDABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_m67409CD62241272CECA79F66FE8DA81A942FB7B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m79C899684939523D0C231CF9429DBACED4FCF575_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MediaSaveCallback_BeginInvoke_mC904FBB03BA6A2CAAD0E2D2F5115CB0585797703_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGCallbackHelper_Awake_m87BF614D7A26B331D168D0069EA06B5499D5825A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGMediaReceiveCallbackAndroid_MediaReceiveCallback_m33F62EB0F16F6EF1655DAF412ACFC498DD7A0748_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m8E46473DBCBDC3A8AD1F630F83154EF66ACE5CA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGMediaReceiveCallbackAndroid_OnMediaReceived_m2D51DAE602B5E0ED4FCBD97DB68CA6CFDE7D8EF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m33031BF4DDD9229385BBAD18440D7495081327DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NGPermissionCallbackAndroid__ctor_m5779DC8D082B3908BD54C58E1282247C73A18BF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_CanSelectMultipleFilesFromGallery_mE58D2CD0C2508C325B6527BBED764018FAAC9FE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_CanSelectMultipleMediaTypesFromGallery_m6E1C29F635F70737F71F9FFD98D63B0F9C56447E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_CheckPermission_m6CBB87E6602B4B6BEAACADBCFAEBA442C7EEC4DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetAudioFromGallery_m8CCD929F4856F2705FB2D033B46E4F69B22F3178_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetAudiosFromGallery_m96045E2BF7C17B334FC7D57AC0775AE91CE2739F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetImageFromGallery_m34B7FD256E30889952404A3053483338642C88BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetImageProperties_mFAC0AE4684AFD4EEB1563436150DCAEC2213A1FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetImagesFromGallery_mDD4F69AC90181D4AB16F0A0792C52E139278EF25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetMediaTypeOfFile_m1C15D9895690AB7472D5F46EFAA759A0C0119D80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetMixedMediaFromGallery_mC830637DF5C4EB4CE3ABE77113499D72A80479CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetMixedMediasFromGallery_m678B2A387D2BD88D51799E828CA2CA7FCC377C0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetVideoFromGallery_mDC8AC11A07FC10BF7159F2C6A3172FD2263ED14A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetVideoProperties_mB3016DF41AF03C4F21D494FD4F972F497438EE7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetVideoThumbnail_m93B9DBD89C842AF1FBDD852009C928C646E93615_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_GetVideosFromGallery_m5E7829C13996F9FF28DFCFBAD083E054ED4E6D79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_OpenSettings_mDF5FCD1D6B6172BB10C7E1665BFC8656E3DAF23B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveAudioToGallery_mEAA4265210D11DF5AE311E737D23613E1F77DED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveAudioToGallery_mF03512D8A004AA4F250506E15F8F3598A3481474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveImageToGallery_m4C26C662BF3314E43771461296252470BD1B3823_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveImageToGallery_m53F332A434FCC54EC7A4EB5A7D56F5A8B564187F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveImageToGallery_mCFF899042A3F29379F655FD1149663C5DFCBDABF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveVideoToGallery_m6620BFEA48AE760BB5A9BBF9853AD046608FAA8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_SaveVideoToGallery_mFF57908485F7A75B019C3314962C3A80F8071500_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_TryExtendLimitedAccessPermission_m56C17224DD6CA31287FE09AF871DEC3B5E727ABF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0052C22E4FB735ED719736815E5E1162805A360B 
{
public:

public:
};


// System.Object


// NativeGallery
struct NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87  : public RuntimeObject
{
public:

public:
};

struct NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_3;

public:
	inline static int32_t get_offset_of_m_ajc_0() { return static_cast<int32_t>(offsetof(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields, ___m_ajc_0)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_m_ajc_0() const { return ___m_ajc_0; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_m_ajc_0() { return &___m_ajc_0; }
	inline void set_m_ajc_0(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___m_ajc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ajc_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields, ___m_context_1)); }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * get_m_context_1() const { return ___m_context_1; }
	inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D ** get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_context_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_temporaryImagePath_2() { return static_cast<int32_t>(offsetof(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields, ___m_temporaryImagePath_2)); }
	inline String_t* get_m_temporaryImagePath_2() const { return ___m_temporaryImagePath_2; }
	inline String_t** get_address_of_m_temporaryImagePath_2() { return &___m_temporaryImagePath_2; }
	inline void set_m_temporaryImagePath_2(String_t* value)
	{
		___m_temporaryImagePath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_temporaryImagePath_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedMediaPath_3() { return static_cast<int32_t>(offsetof(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields, ___m_selectedMediaPath_3)); }
	inline String_t* get_m_selectedMediaPath_3() const { return ___m_selectedMediaPath_3; }
	inline String_t** get_address_of_m_selectedMediaPath_3() { return &___m_selectedMediaPath_3; }
	inline void set_m_selectedMediaPath_3(String_t* value)
	{
		___m_selectedMediaPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedMediaPath_3), (void*)value);
	}
};


// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<>4__this
	NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * ___U3CU3E4__this_0;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::path
	String_t* ___path_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_1), (void*)value);
	}
};


// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361  : public RuntimeObject
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<>4__this
	NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * ___U3CU3E4__this_0;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::result
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361, ___U3CU3E4__this_0)); }
	inline NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361, ___result_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_result_1() const { return ___result_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// NativeGallery/VideoProperties
struct VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409 
{
public:
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409, ___duration_2)); }
	inline int64_t get_duration_2() const { return ___duration_2; }
	inline int64_t* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(int64_t value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE  : public AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D
{
public:

public:
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// NativeGallery/ImageOrientation
struct ImageOrientation_t4ABAD4A3AB26BEA5A239C6EAF63739EA28A31F96 
{
public:
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageOrientation_t4ABAD4A3AB26BEA5A239C6EAF63739EA28A31F96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/MediaType
struct MediaType_t5F50A393020647D0092C70BB38B27B727E30DA47 
{
public:
	// System.Int32 NativeGallery/MediaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaType_t5F50A393020647D0092C70BB38B27B727E30DA47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/Permission
struct Permission_t6341CFA53A1724F8BB0232672375D0B2FB1DA36E 
{
public:
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Permission_t6341CFA53A1724F8BB0232672375D0B2FB1DA36E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/PermissionType
struct PermissionType_t924CA3D19EB0C2002B791DBC72CE045175AECF97 
{
public:
	// System.Int32 NativeGallery/PermissionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionType_t924CA3D19EB0C2002B791DBC72CE045175AECF97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___javaInterface_0)); }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t2B9FA8DBBC53F0C0E0B57ACDC0FA9967CFB22DD0 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TextureFormat
struct TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/ImageProperties
struct ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD 
{
public:
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_mimeType_2() { return static_cast<int32_t>(offsetof(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD, ___mimeType_2)); }
	inline String_t* get_mimeType_2() const { return ___mimeType_2; }
	inline String_t** get_address_of_mimeType_2() { return &___mimeType_2; }
	inline void set_mimeType_2(String_t* value)
	{
		___mimeType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimeType_2), (void*)value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA  : public AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D
{
public:
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callback
	MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback_4;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackMultiple
	MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callbackMultiple_5;
	// NativeGalleryNamespace.NGCallbackHelper NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::callbackHelper
	NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * ___callbackHelper_6;

public:
	inline static int32_t get_offset_of_callback_4() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA, ___callback_4)); }
	inline MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * get_callback_4() const { return ___callback_4; }
	inline MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B ** get_address_of_callback_4() { return &___callback_4; }
	inline void set_callback_4(MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * value)
	{
		___callback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_4), (void*)value);
	}

	inline static int32_t get_offset_of_callbackMultiple_5() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA, ___callbackMultiple_5)); }
	inline MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * get_callbackMultiple_5() const { return ___callbackMultiple_5; }
	inline MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C ** get_address_of_callbackMultiple_5() { return &___callbackMultiple_5; }
	inline void set_callbackMultiple_5(MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * value)
	{
		___callbackMultiple_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMultiple_5), (void*)value);
	}

	inline static int32_t get_offset_of_callbackHelper_6() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA, ___callbackHelper_6)); }
	inline NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * get_callbackHelper_6() const { return ___callbackHelper_6; }
	inline NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC ** get_address_of_callbackHelper_6() { return &___callbackHelper_6; }
	inline void set_callbackHelper_6(NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * value)
	{
		___callbackHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackHelper_6), (void*)value);
	}
};


// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72  : public AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D
{
public:
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject * ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_threadLock_4() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72, ___threadLock_4)); }
	inline RuntimeObject * get_threadLock_4() const { return ___threadLock_4; }
	inline RuntimeObject ** get_address_of_threadLock_4() { return &___threadLock_4; }
	inline void set_threadLock_4(RuntimeObject * value)
	{
		___threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threadLock_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72, ___U3CResultU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
	}
};


// System.IO.MonoIOStat
struct MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28  : public Exception_t
{
public:

public:
};


// NativeGallery/MediaPickCallback
struct MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// NativeGalleryNamespace.NGCallbackHelper
struct NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action NativeGalleryNamespace.NGCallbackHelper::mainThreadAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mainThreadAction_4;

public:
	inline static int32_t get_offset_of_mainThreadAction_4() { return static_cast<int32_t>(offsetof(NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC, ___mainThreadAction_4)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mainThreadAction_4() const { return ___mainThreadAction_4; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mainThreadAction_4() { return &___mainThreadAction_4; }
	inline void set_mainThreadAction_4(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mainThreadAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainThreadAction_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m0C18F3D9CC20E1C25F1AF9B96723BAECF6B947E6_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8 (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4EE4B1723AD8666E01605377F86ACAF7F1AB88A7 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m0C18F3D9CC20E1C25F1AF9B96723BAECF6B947E6_gshared)(__this, ___fieldName0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644 (const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m5779DC8D082B3908BD54C58E1282247C73A18BF0 (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::Wait(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monitor_Wait_m5743CC940EE03B2E5355412B2D234B7D3627E347 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m6CC1FE22D4B10AC819F55802D725BE17EA2AD37B (const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_mA4FED4EA9BB612EB41E8330225CA2E6CB6B47C47 (const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E_gshared)(__this, ___methodName0, ___args1, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B (String_t* ___path0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E (String_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92 (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mC00F70734976E6B3DD8281EB6EBC457B19762E9F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941 (int32_t ___permissionType0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594 (String_t* ___path0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes1, const RuntimeMethod* method);
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858 (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m42EEC6C53F171AD23C837EAD48905F11D94C04BF (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2 (String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mDA047FC947FF711EE6134C2EC6408AE9F530A7D6 (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callbackMultiple1, const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798 (const RuntimeMethod* method);
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_mE58D2CD0C2508C325B6527BBED764018FAAC9FE2 (const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m0EA4707EDB3DDDCCFEA1761DE00CEB4DCA9F1B27 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_GetTemporary_m02547EA84CDEB9038FCF1EEDD283AF24114C735F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113 (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___source0, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___temp0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m10A8228B83EE161D0DCCB9FB01279C245C47D0E3 (const RuntimeMethod* method);
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m01B7AF7873AA43495B8216926C1768FEDDF4CE64 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_mFB317291362399115F8D112D8CE9E8C1BF454C29 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, bool ___markNonReadable2, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mA7EA851C62137F23B43E4EF0D95BC83A0A9EF89F (ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9 (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method);
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m3264DD4A0638F1CBC1CB4B6F17D1495906B8C97B (VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A (AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGCallbackHelper>()
inline NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * GameObject_AddComponent_TisNGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC_mDC29622CE342F06F5412C8B6C12615091DEF114C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5E749F0272C2B86CCB9E40A2847E5D3CFEDF055F (U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m8E20F01A670A2B68A5491FE7EE7AEC40A62CD6F8_inline (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___function0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9616CC6234DC76E11471A5E4B51BC6E410BFA614 (U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * __this, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_mB9D4ED65BEFC10BB41CDBE411DD062917A2AFC53 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_m33F62EB0F16F6EF1655DAF412ACFC498DD7A0748 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m8E46473DBCBDC3A8AD1F630F83154EF66ACE5CA9 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE7ED8D9A90268E12E8B27BD3032183F0B061C03E_inline (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Pulse(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Pulse_mA4885CDA903E733894EB46D7D4CA9F40C95FEE08 (RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_ajc_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeGallery" );
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_1, _stringLiteralBE4481BD2213B34AD62DA1B520D57E6CFEAC9F53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->set_m_ajc_0(L_1);
	}

IL_0016:
	{
		// return m_ajc;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_2 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_ajc_0();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( m_context == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_0 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_context_1();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_1 = (AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE *)il2cpp_codegen_object_new(AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mAE416E812DB3911279C0FE87A7760247CE1BBFA8(L_1, _stringLiteralA004F7A71A664C60394CBEBEC2BC71B669D9F986, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4EE4B1723AD8666E01605377F86ACAF7F1AB88A7(L_2, _stringLiteral32EAF9220C696B2C222E361F16ACA8FB08EC6083, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D_m4EE4B1723AD8666E01605377F86ACAF7F1AB88A7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->set_m_context_1(L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_4 = V_0;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// return m_context;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_6 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_context_1();
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralA04667285B0D56FA5C9AD66F9249C0C461B42CCD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->set_m_temporaryImagePath_2(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_4 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		return L_4;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_3();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteral680C002DD68BA7790878A280403262AF039049BE, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->set_m_selectedMediaPath_3(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_4 = ((NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_3();
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m6CBB87E6602B4B6BEAACADBCFAEBA442C7EEC4DB (int32_t ___permissionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_CheckPermission_m6CBB87E6602B4B6BEAACADBCFAEBA442C7EEC4DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = (Permission) AJC.CallStatic<int>( "CheckPermission", Context, permissionType == PermissionType.Read );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		int32_t L_5 = ___permissionType0;
		bool L_6 = ((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_7 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		NullCheck(L_0);
		int32_t L_8 = AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF(L_0, _stringLiteral9AA91952CBB0F931695F22F2850D11436745CE5D, L_4, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m90D39A3F3725F8BD3F782614FA0101D563DA9CCF_RuntimeMethod_var);
		V_0 = L_8;
		// if( result == Permission.Denied && (Permission) PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) == Permission.ShouldAsk )
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral5DF66E78A14E0F2CEDCEDD3904B1D699436320FF, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_003d;
		}
	}
	{
		// result = Permission.ShouldAsk;
		V_0 = 2;
	}

IL_003d:
	{
		// return result;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941 (int32_t ___permissionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// object threadLock = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// lock( threadLock )
		RuntimeObject * L_1 = V_0;
		V_1 = L_1;
		V_2 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_2), /*hidden argument*/NULL);
			// NGPermissionCallbackAndroid nativeCallback = new NGPermissionCallbackAndroid( threadLock );
			RuntimeObject * L_3 = V_0;
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_4 = (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 *)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72_il2cpp_TypeInfo_var);
			NGPermissionCallbackAndroid__ctor_m5779DC8D082B3908BD54C58E1282247C73A18BF0(L_4, L_3, /*hidden argument*/NULL);
			V_3 = L_4;
			// AJC.CallStatic( "RequestPermission", Context, nativeCallback, permissionType == PermissionType.Read, PlayerPrefs.GetInt( "NativeGalleryPermission", (int) Permission.ShouldAsk ) );
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
			AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_5 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
			AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_10 = V_3;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
			int32_t L_12 = ___permissionType0;
			bool L_13 = ((bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0));
			RuntimeObject * L_14 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_14);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
			int32_t L_16 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral5DF66E78A14E0F2CEDCEDD3904B1D699436320FF, 2, /*hidden argument*/NULL);
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_18);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
			NullCheck(L_5);
			AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_5, _stringLiteral35CAA81643B9DF64290110F4DF8DBD552D14C946, L_15, /*hidden argument*/NULL);
			// if( nativeCallback.Result == -1 )
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_19 = V_3;
			NullCheck(L_19);
			int32_t L_20 = NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline(L_19, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
			{
				goto IL_0069;
			}
		}

IL_0062:
		{
			// System.Threading.Monitor.Wait( threadLock );
			RuntimeObject * L_21 = V_0;
			Monitor_Wait_m5743CC940EE03B2E5355412B2D234B7D3627E347(L_21, /*hidden argument*/NULL);
		}

IL_0069:
		{
			// if( (Permission) nativeCallback.Result != Permission.ShouldAsk && PlayerPrefs.GetInt( "NativeGalleryPermission", -1 ) != nativeCallback.Result )
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_22 = V_3;
			NullCheck(L_22);
			int32_t L_23 = NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline(L_22, /*hidden argument*/NULL);
			if ((((int32_t)L_23) == ((int32_t)2)))
			{
				goto IL_009a;
			}
		}

IL_0072:
		{
			int32_t L_24 = PlayerPrefs_GetInt_m1CBBA4989F15BA668EE24950D3C6B56E2ED20BD6(_stringLiteral5DF66E78A14E0F2CEDCEDD3904B1D699436320FF, (-1), /*hidden argument*/NULL);
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_25 = V_3;
			NullCheck(L_25);
			int32_t L_26 = NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline(L_25, /*hidden argument*/NULL);
			if ((((int32_t)L_24) == ((int32_t)L_26)))
			{
				goto IL_009a;
			}
		}

IL_0085:
		{
			// PlayerPrefs.SetInt( "NativeGalleryPermission", nativeCallback.Result );
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_27 = V_3;
			NullCheck(L_27);
			int32_t L_28 = NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline(L_27, /*hidden argument*/NULL);
			PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral5DF66E78A14E0F2CEDCEDD3904B1D699436320FF, L_28, /*hidden argument*/NULL);
			// PlayerPrefs.Save();
			PlayerPrefs_Save_m6CC1FE22D4B10AC819F55802D725BE17EA2AD37B(/*hidden argument*/NULL);
		}

IL_009a:
		{
			// return (Permission) nativeCallback.Result;
			NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * L_29 = V_3;
			NullCheck(L_29);
			int32_t L_30 = NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline(L_29, /*hidden argument*/NULL);
			V_4 = L_30;
			IL2CPP_LEAVE(0xAE, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		{
			bool L_31 = V_2;
			if (!L_31)
			{
				goto IL_00ad;
			}
		}

IL_00a7:
		{
			RuntimeObject * L_32 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_32, /*hidden argument*/NULL);
		}

IL_00ad:
		{
			IL2CPP_END_FINALLY(164)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
	}

IL_00ae:
	{
		// }
		int32_t L_33 = V_4;
		return L_33;
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_m56C17224DD6CA31287FE09AF871DEC3B5E727ABF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_TryExtendLimitedAccessPermission_m56C17224DD6CA31287FE09AF871DEC3B5E727ABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsMediaPickerBusy() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		NativeGallery_IsMediaPickerBusy_mA4FED4EA9BB612EB41E8330225CA2E6CB6B47C47(/*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mD798C5079FEA33A6EC4197D514CA3EB026AF4ED1 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mDF5FCD1D6B6172BB10C7E1665BFC8656E3DAF23B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_OpenSettings_mDF5FCD1D6B6172BB10C7E1665BFC8656E3DAF23B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AJC.CallStatic( "OpenSettings", Context );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_0, _stringLiteralB130FDA69D1FEDEAE059C90E064D5CB0CF6968D9, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m53F332A434FCC54EC7A4EB5A7D56F5A8B564187F (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_m53F332A434FCC54EC7A4EB5A7D56F5A8B564187F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m4C26C662BF3314E43771461296252470BD1B3823 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_m4C26C662BF3314E43771461296252470BD1B3823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mCFF899042A3F29379F655FD1149663C5DFCBDABF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_mCFF899042A3F29379F655FD1149663C5DFCBDABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral4CCBEFEEDADEDC4ABB85D0C8ADEF1A3BD2CF85B7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NativeGallery_SaveImageToGallery_mCFF899042A3F29379F655FD1149663C5DFCBDABF_RuntimeMethod_var);
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___filename2;
		NullCheck(L_3);
		bool L_4 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_3, _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC, 5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___filename2;
		NullCheck(L_5);
		bool L_6 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_5, _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80, 5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4(L_7, (bool)1, /*hidden argument*/NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_11 = ___callback3;
		int32_t L_12 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_8, L_9, L_10, 1, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		bool L_14 = String_EndsWith_m80B198568050D692B70AD8949AC6EDC3044ED811(L_13, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, 5, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4(L_15, (bool)0, /*hidden argument*/NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_19 = ___callback3;
		int32_t L_20 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_16, L_17, L_18, 1, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4(L_21, (bool)0, /*hidden argument*/NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filename2;
		String_t* L_25 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_24, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, /*hidden argument*/NULL);
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_26 = ___callback3;
		int32_t L_27 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_22, L_23, L_25, 1, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_mFF57908485F7A75B019C3314962C3A80F8071500 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveVideoToGallery_mFF57908485F7A75B019C3314962C3A80F8071500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m6620BFEA48AE760BB5A9BBF9853AD046608FAA8B (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveVideoToGallery_m6620BFEA48AE760BB5A9BBF9853AD046608FAA8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mEAA4265210D11DF5AE311E737D23613E1F77DED2 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveAudioToGallery_mEAA4265210D11DF5AE311E737D23613E1F77DED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mF03512D8A004AA4F250506E15F8F3598A3481474 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveAudioToGallery_mF03512D8A004AA4F250506E15F8F3598A3481474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_mE58D2CD0C2508C325B6527BBED764018FAAC9FE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_CanSelectMultipleFilesFromGallery_mE58D2CD0C2508C325B6527BBED764018FAAC9FE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMedia" );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E(L_0, _stringLiteral340EEBA9101EFDE3932296B6E2FC2958C30EA544, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m6E1C29F635F70737F71F9FFD98D63B0F9C56447E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_CanSelectMultipleMediaTypesFromGallery_m6E1C29F635F70737F71F9FFD98D63B0F9C56447E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AJC.CallStatic<bool>( "CanSelectMultipleMediaTypes" );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E(L_0, _stringLiteral0019D066900F59755D17F357AFB6B86C15E0603D, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m1F84B3515F82CAA3D5A1C187A3B4347CCEDDA14E_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m34B7FD256E30889952404A3053483338642C88BC (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImageFromGallery_m34B7FD256E30889952404A3053483338642C88BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mDC8AC11A07FC10BF7159F2C6A3172FD2263ED14A (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideoFromGallery_mDC8AC11A07FC10BF7159F2C6A3172FD2263ED14A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_m8CCD929F4856F2705FB2D033B46E4F69B22F3178 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetAudioFromGallery_m8CCD929F4856F2705FB2D033B46E4F69B22F3178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_mC830637DF5C4EB4CE3ABE77113499D72A80479CD (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMixedMediaFromGallery_mC830637DF5C4EB4CE3ABE77113499D72A80479CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61(L_0, L_1, _stringLiteralFACB855C9CEF68CF9733F539BDE2B57586848293, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_mDD4F69AC90181D4AB16F0A0792C52E139278EF25 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImagesFromGallery_mDD4F69AC90181D4AB16F0A0792C52E139278EF25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m5E7829C13996F9FF28DFCFBAD083E054ED4E6D79 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideosFromGallery_m5E7829C13996F9FF28DFCFBAD083E054ED4E6D79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_m96045E2BF7C17B334FC7D57AC0775AE91CE2739F (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetAudiosFromGallery_m96045E2BF7C17B334FC7D57AC0775AE91CE2739F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_m678B2A387D2BD88D51799E828CA2CA7FCC377C0A (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMixedMediasFromGallery_m678B2A387D2BD88D51799E828CA2CA7FCC377C0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644(L_0, L_1, _stringLiteralFACB855C9CEF68CF9733F539BDE2B57586848293, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_mA4FED4EA9BB612EB41E8330225CA2E6CB6B47C47 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_m1C15D9895690AB7472D5F46EFAA759A0C0119D80 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMediaTypeOfFile_m1C15D9895690AB7472D5F46EFAA759A0C0119D80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_10, 1, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// string mime = AJC.CallStatic<string>( "GetMimeTypeFromExtension", extension.ToLowerInvariant() );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_12 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_13;
		String_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		NullCheck(L_12);
		String_t* L_17 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_12, _stringLiteral4902F935220E52075E3BCE3CC7C930562138C110, L_14, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_1 = L_17;
		// if( string.IsNullOrEmpty( mime ) )
		String_t* L_18 = V_1;
		bool L_19 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0062;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0062:
	{
		// else if( mime.StartsWith( "image/" ) )
		String_t* L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_20, _stringLiteral25F7337D4332BEF251FDC48A8892B4EFA4BD9747, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		// return MediaType.Image;
		return (int32_t)(1);
	}

IL_0071:
	{
		// else if( mime.StartsWith( "video/" ) )
		String_t* L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_22, _stringLiteral65679DE1D219F353C0B8F13D040AAE43D36C7BEA, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0080;
		}
	}
	{
		// return MediaType.Video;
		return (int32_t)(2);
	}

IL_0080:
	{
		// else if( mime.StartsWith( "audio/" ) )
		String_t* L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_24, _stringLiteralDBDE7B610BA82DCB92EBC33013A2A7B7F66F3C05, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008f;
		}
	}
	{
		// return MediaType.Audio;
		return (int32_t)(4);
	}

IL_008f:
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941(1, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B13_0 = L_1;
			goto IL_0075;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___mediaBytes0;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___mediaBytes0;
		NullCheck(L_3);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001c;
		}
	}

IL_0011:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_4, _stringLiteral9396C555ED6F4114FE93CC622496F6970B922A31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_RuntimeMethod_var);
	}

IL_001c:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_5 = ___album1;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___album1;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}

IL_0027:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_8 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_8, _stringLiteralE16425C70B0BF8A4323B323DF6C309092ED0409B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_RuntimeMethod_var);
	}

IL_0032:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_9 = ___filename2;
		G_B8_0 = G_B7_0;
		if (!L_9)
		{
			G_B9_0 = G_B7_0;
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___filename2;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_10, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0048;
		}
	}

IL_003d:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_12 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_12, _stringLiteral94D6A6A95D604C88AC795D66235A6C9EDF2D412B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NativeGallery_SaveToGallery_mE435C19013830F12598B9FB8D164D112D44CF228_RuntimeMethod_var);
	}

IL_0048:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_13 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_14 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_13, /*hidden argument*/NULL);
		bool L_15 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_14, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_005f;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC68C6D5E83DA7C25F2861D5D19720D87BB3436B4, /*hidden argument*/NULL);
		G_B12_0 = G_B11_0;
	}

IL_005f:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_16 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_17 = NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7(L_16, /*hidden argument*/NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_18 = L_17;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___mediaBytes0;
		File_WriteAllBytes_m07F13C1CA0BD0960392C78AB99E0F19564F9B594(L_18, L_19, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_20 = ___album1;
		int32_t L_21 = ___mediaType3;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_22 = ___callback4;
		NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161(L_18, L_20, L_21, L_22, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
	}

IL_0075:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941(1, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B14_0 = L_1;
			goto IL_009c;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_2 = ___existingMediaPath0;
		bool L_3 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_4 = ___existingMediaPath0;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0A3CF76AA4D046F4E79CDE3341E93210C22D0D9E, L_4, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_6 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_RuntimeMethod_var);
	}

IL_0026:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_7 = ___album1;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = ___album1;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_003c;
		}
	}

IL_0031:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_10, _stringLiteralE16425C70B0BF8A4323B323DF6C309092ED0409B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_RuntimeMethod_var);
	}

IL_003c:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_11 = ___filename2;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___filename2;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (L_13)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}

IL_0047:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_14 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_14, _stringLiteral94D6A6A95D604C88AC795D66235A6C9EDF2D412B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NativeGallery_SaveToGallery_mC5BEF488127E4136E18EB90F8BA228A86FDA7B57_RuntimeMethod_var);
	}

IL_0052:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_15 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_16 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_15, /*hidden argument*/NULL);
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		if (!L_17)
		{
			G_B13_0 = G_B9_0;
			goto IL_0083;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_18 = ___existingMediaPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_19 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_20 = V_1;
		bool L_21 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_20, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_21)
		{
			G_B12_0 = G_B10_0;
			goto IL_007a;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC68C6D5E83DA7C25F2861D5D19720D87BB3436B4, /*hidden argument*/NULL);
		G_B13_0 = G_B11_0;
		goto IL_0083;
	}

IL_007a:
	{
		// filename += originalExtension;
		String_t* L_22 = ___filename2;
		String_t* L_23 = V_1;
		String_t* L_24 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_22, L_23, /*hidden argument*/NULL);
		___filename2 = L_24;
		G_B13_0 = G_B12_0;
	}

IL_0083:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_25 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		String_t* L_26 = NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_27 = ___existingMediaPath0;
		String_t* L_28 = V_0;
		File_Copy_m42EEC6C53F171AD23C837EAD48905F11D94C04BF(L_27, L_28, (bool)1, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_29 = V_0;
		String_t* L_30 = ___album1;
		int32_t L_31 = ___mediaType3;
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_32 = ___callback4;
		NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161(L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		G_B14_0 = G_B13_0;
	}

IL_009c:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGalleryInternal_mE87329465A09F55110F283DB93BA4E3507A58161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string savePath = AJC.CallStatic<string>( "SaveMedia", Context, (int) mediaType, path, album );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_0 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_3 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		int32_t L_5 = ___mediaType2;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		String_t* L_9 = ___path0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_8;
		String_t* L_11 = ___album1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		NullCheck(L_0);
		String_t* L_12 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_0, _stringLiteral462ED37FD7697B48AA45CEA0C4407CFBA5810C29, L_10, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_0 = L_12;
		// File.Delete( path );
		String_t* L_13 = ___path0;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_13, /*hidden argument*/NULL);
		// if( callback != null )
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_14 = ___callback3;
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		// callback( !string.IsNullOrEmpty( savePath ), savePath );
		MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * L_15 = ___callback3;
		String_t* L_16 = V_0;
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		NullCheck(L_15);
		MediaSaveCallback_Invoke_mDA047FC947FF711EE6134C2EC6408AE9F530A7D6(L_15, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), L_18, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetTemporarySavePath_m114A975542060AFA440A6BB07214AEDDE63810D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, _stringLiteralE35B1258A7DF335EB03C6AFAF41FE620F875441F, /*hidden argument*/NULL);
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = L_1;
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_2, /*hidden argument*/NULL);
		// return Path.Combine( saveDir, filename );
		String_t* L_3 = ___filename0;
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMediaFromGallery_m2FCEBD9CE43D43AF37D45B9B46CE6A20D5269E61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941(0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		bool L_2 = NativeGallery_IsMediaPickerBusy_mA4FED4EA9BB612EB41E8330225CA2E6CB6B47C47(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( callback, null ), (int) mediaType, false, SelectedMediaPath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_3 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_6 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_8 = ___callback0;
		NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * L_9 = (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750(L_9, L_8, (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C *)NULL, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_7;
		int32_t L_11 = ___mediaType1;
		int32_t L_12 = ((int32_t)L_11);
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_10;
		bool L_15 = ((bool)0);
		RuntimeObject * L_16 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_14;
		String_t* L_18 = NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798(/*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_17;
		String_t* L_20 = ___mime2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_19;
		String_t* L_22 = ___title3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_22);
		NullCheck(L_3);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_3, _stringLiteralE0E0FF79A43EEC764F39ADD4A7ED4FB494EEF4FC, L_21, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// return result;
		int32_t L_23 = V_0;
		return L_23;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMultipleMediaFromGallery_mFD17C2B27DF7FA57C0358C495B40CEDC1446E644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_mEADB867EE50805E34462DBB0D1D342DB237E7941(0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		bool L_2 = NativeGallery_IsMediaPickerBusy_mA4FED4EA9BB612EB41E8330225CA2E6CB6B47C47(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_006e;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		bool L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_mE58D2CD0C2508C325B6527BBED764018FAAC9FE2(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		// AJC.CallStatic( "PickMedia", Context, new NGMediaReceiveCallbackAndroid( null, callback ), (int) mediaType, true, SelectedMediaPath, mime, title );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_4 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_7 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_9 = ___callback0;
		NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * L_10 = (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA_il2cpp_TypeInfo_var);
		NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750(L_10, (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B *)NULL, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		int32_t L_12 = ___mediaType1;
		int32_t L_13 = ((int32_t)L_12);
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		bool L_16 = ((bool)1);
		RuntimeObject * L_17 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_15;
		String_t* L_19 = NativeGallery_get_SelectedMediaPath_m874A1EBCB51D9C28E066F7CBA95A7E0BA7485798(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_18;
		String_t* L_21 = ___mime2;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_20;
		String_t* L_23 = ___title3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_m12D78F5584C63F5D8B2344CBA8611EFBDDA669AF(L_4, _stringLiteralE0E0FF79A43EEC764F39ADD4A7ED4FB494EEF4FC, L_22, /*hidden argument*/NULL);
		// }
		goto IL_006e;
	}

IL_0064:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_24 = ___callback0;
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_25 = ___callback0;
		NullCheck(L_25);
		MediaPickMultipleCallback_Invoke_m0EA4707EDB3DDDCCFEA1761DE00CEB4DCA9F1B27(L_25, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// return result;
		int32_t L_26 = V_0;
		return L_26;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetTextureBytes_mA5997481080BACE26787336CEC806C5FB32BCBC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ___texture0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ___texture0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (UnityException_t513F7D97037DB40AE78D7C3AAA2F9E011D050C28_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0016;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0021;
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_002c;
	} // end catch (depth: 1)

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetTextureBytesFromCopy_mE68EFBA1213B23D869C9D0E5E6AE6BB2C71226DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_0 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_1 = NULL;
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral6086A9E1FB0848F6D06CBF4F123D6CCC58A06F0D, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_4 = RenderTexture_GetTemporary_m02547EA84CDEB9038FCF1EEDD283AF24114C735F(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = RenderTexture_get_active_m670416A37BF4239DE5A55F6138CAA1FEEF184957(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// Graphics.Blit( texture, rt );
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = ___texture0;
				RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Graphics_t6FB7A5D4561F3AB3C34BF334BB0BD8061BE763B1_il2cpp_TypeInfo_var);
				Graphics_Blit_mB042EC04307A5617038DA4210DE7BA4B3E529113(L_6, L_7, /*hidden argument*/NULL);
				// RenderTexture.active = rt;
				RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_8 = V_1;
				RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_8, /*hidden argument*/NULL);
				// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_9 = ___texture0;
				NullCheck(L_9);
				int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = ___texture0;
				NullCheck(L_11);
				int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
				bool L_13 = ___isJpeg1;
				G_B2_0 = L_12;
				G_B2_1 = L_10;
				if (L_13)
				{
					G_B3_0 = L_12;
					G_B3_1 = L_10;
					goto IL_0043;
				}
			}

IL_0040:
			{
				G_B4_0 = 4;
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				goto IL_0044;
			}

IL_0043:
			{
				G_B4_0 = 3;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
			}

IL_0044:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
				Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_14, G_B4_2, G_B4_1, G_B4_0, (bool)0, /*hidden argument*/NULL);
				V_0 = L_14;
				// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_15 = V_0;
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = ___texture0;
				NullCheck(L_16);
				int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_18 = ___texture0;
				NullCheck(L_18);
				int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
				Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_20;
				memset((&L_20), 0, sizeof(L_20));
				Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_20), (0.0f), (0.0f), (((float)((float)L_17))), (((float)((float)L_19))), /*hidden argument*/NULL);
				NullCheck(L_15);
				Texture2D_ReadPixels_m5664E184458C64BA89450F80F47705A2241E9BFE(L_15, L_20, 0, 0, (bool)0, /*hidden argument*/NULL);
				// sourceTexReadable.Apply( false, false );
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = V_0;
				NullCheck(L_21);
				Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1(L_21, (bool)0, (bool)0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x97, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_007b;
			throw e;
		}

CATCH_007b:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// Object.DestroyImmediate( sourceTexReadable );
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_22, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_008a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_23 = V_2;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_23, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rt );
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_mFBA6F18138965049AA901D62A0080B1A087A38EA(L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_0097:
	{
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
				bool L_25 = ___isJpeg1;
				if (L_25)
				{
					goto IL_00a3;
				}
			}

IL_009b:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_26 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_26, /*hidden argument*/NULL);
				G_B11_0 = L_27;
				goto IL_00ab;
			}

IL_00a3:
			{
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_28 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = ImageConversion_EncodeToJPG_mE289598FD45B6658A645B2CE359C4E6FC97BF875(L_28, ((int32_t)100), /*hidden argument*/NULL);
				G_B11_0 = L_29;
			}

IL_00ab:
			{
				V_3 = G_B11_0;
				IL2CPP_LEAVE(0xBE, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00ae;
			throw e;
		}

CATCH_00ae:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
			IL2CPP_LEAVE(0xBE, FINALLY_00b7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate( sourceTexReadable );
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_30, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_3 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, _stringLiteral377ED966B3A8FCCD3BE787DDE011557F2EC947F9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289_RuntimeMethod_var);
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0A3CF76AA4D046F4E79CDE3341E93210C22D0D9E, L_5, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_7 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289_RuntimeMethod_var);
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9 = SystemInfo_get_maxTextureSize_m10A8228B83EE161D0DCCB9FB01279C245C47D0E3(/*hidden argument*/NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = AJC.CallStatic<string>( "LoadImageAtPath", Context, imagePath, TemporaryImagePath, maxSize );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_10 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_13 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_12;
		String_t* L_15 = ___imagePath0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_14;
		String_t* L_17 = NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_16;
		int32_t L_19 = ___maxSize1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		NullCheck(L_10);
		String_t* L_22 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_10, _stringLiteralD006243EF4D037E0849ABC4F6DF2B053181FD194, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_0 = L_22;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_23 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_24 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25 = String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_26 = V_1;
		bool L_27 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_26, _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_28, _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0093;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0094;
	}

IL_0093:
	{
		G_B10_0 = 3;
	}

IL_0094:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_30 = V_2;
		bool L_31 = ___generateMipmaps3;
		bool L_32 = ___linearColorSpace4;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_33 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m01B7AF7873AA43495B8216926C1768FEDDF4CE64(L_33, 2, 2, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_34 = V_3;
				String_t* L_35 = V_0;
				ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = File_ReadAllBytes_mF29468CED0B7B3B7C0971ACEBB16A38683718BEC(L_35, /*hidden argument*/NULL);
				bool L_37 = ___markTextureNonReadable2;
				bool L_38 = ImageConversion_LoadImage_mFB317291362399115F8D112D8CE9E8C1BF454C29(L_34, L_36, L_37, /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_00bb;
				}
			}

IL_00b0:
			{
				// Object.DestroyImmediate( result );
				Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_39, /*hidden argument*/NULL);
				// return null;
				V_4 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
				IL2CPP_LEAVE(0xE4, FINALLY_00cd);
			}

IL_00bb:
			{
				// }
				IL2CPP_LEAVE(0xE2, FINALLY_00cd);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00bd;
			throw e;
		}

CATCH_00bd:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogException_mBAA6702C240E37B2A834AA74E4FDC15A3A5589A9(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// Object.DestroyImmediate( result );
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_40 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_40, /*hidden argument*/NULL);
			// return null;
			V_4 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
			IL2CPP_LEAVE(0xE4, FINALLY_00cd);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		{
			// if( loadPath != imagePath )
			String_t* L_41 = V_0;
			String_t* L_42 = ___imagePath0;
			bool L_43 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_41, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_00e1;
			}
		}

IL_00d6:
		try
		{ // begin try (depth: 2)
			// File.Delete( loadPath );
			String_t* L_44 = V_0;
			File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_44, /*hidden argument*/NULL);
			// }
			goto IL_00e1;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00de;
			throw e;
		}

CATCH_00de:
		{ // begin catch(System.Object)
			// catch { }
			// catch { }
			goto IL_00e1;
		} // end catch (depth: 2)

IL_00e1:
		{
			// }
			IL2CPP_END_FINALLY(205)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
	}

IL_00e2:
	{
		// return result;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_45 = V_3;
		return L_45;
	}

IL_00e4:
	{
		// }
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_46 = V_4;
		return L_46;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * NativeGallery_GetVideoThumbnail_m93B9DBD89C842AF1FBDD852009C928C646E93615 (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideoThumbnail_m93B9DBD89C842AF1FBDD852009C928C646E93615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___maxSize1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1 = SystemInfo_get_maxTextureSize_m10A8228B83EE161D0DCCB9FB01279C245C47D0E3(/*hidden argument*/NULL);
		___maxSize1 = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = AJC.CallStatic<string>( "GetVideoThumbnail", Context, videoPath, TemporaryImagePath + ".png", false, maxSize, captureTimeInSeconds );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_2 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_5 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		String_t* L_7 = ___videoPath0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		String_t* L_9 = NativeGallery_get_TemporaryImagePath_m73A08BA5F2C68CE6CD2019BA9B3615C53A5A4C9E(/*hidden argument*/NULL);
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		bool L_12 = ((bool)0);
		RuntimeObject * L_13 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_11;
		int32_t L_15 = ___maxSize1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_14;
		double L_19 = ___captureTimeInSeconds2;
		double L_20 = L_19;
		RuntimeObject * L_21 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		NullCheck(L_2);
		String_t* L_22 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_2, _stringLiteralED1B9C7D34799A52C40EA5152BBC17A14FA41632, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_0 = L_22;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_23 = V_0;
		bool L_24 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable );
		String_t* L_25 = V_0;
		int32_t L_26 = ___maxSize1;
		bool L_27 = ___markTextureNonReadable3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_28 = NativeGallery_LoadImageAtPath_m88889A02BE584CCB6482604E6B96848CA35F3289(L_25, L_26, L_27, (bool)1, (bool)0, /*hidden argument*/NULL);
		return L_28;
	}

IL_006d:
	{
		// return null;
		return (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD  NativeGallery_GetImageProperties_mFAC0AE4684AFD4EEB1563436150DCAEC2213A1FD (String_t* ___imagePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImageProperties_mFAC0AE4684AFD4EEB1563436150DCAEC2213A1FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0A3CF76AA4D046F4E79CDE3341E93210C22D0D9E, L_2, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_4 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NativeGallery_GetImageProperties_mFAC0AE4684AFD4EEB1563436150DCAEC2213A1FD_RuntimeMethod_var);
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetImageProperties", Context, imagePath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_5 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		String_t* L_10 = ___imagePath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_5, _stringLiteral8AD20BABC29399AC23CC2FAD89C409D47A1AA74F, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0138;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0138;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))) < ((int32_t)4)))
		{
			goto IL_0138;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_22, /*hidden argument*/NULL);
		bool L_24 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0087;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0087:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_27, /*hidden argument*/NULL);
		bool L_29 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009b;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_009b:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		// if( mimeType.Length == 0 )
		String_t* L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0122;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_36 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_37 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38 = String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		// if( extension == ".png" )
		String_t* L_39 = V_7;
		bool L_40 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_39, _stringLiteral339F5868588CFC8FDA4A1EC94EAD8F737C5FCFC0, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00d0;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral34D71611DCE9C30419B3C3EA42DC9426E931CDDE;
		goto IL_0122;
	}

IL_00d0:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_41 = V_7;
		bool L_42 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_41, _stringLiteralDCDFD41CB6E96E78736DEB5F5ADD6F6311DA8E80, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_43 = V_7;
		bool L_44 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_43, _stringLiteral801DC5C3610D303D73C37E27B3D6F5AC9F7661DC, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00f4;
		}
	}

IL_00ec:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral60C283FF6EF6CAD8B67415AE1A3C6BABD3477040;
		goto IL_0122;
	}

IL_00f4:
	{
		// else if( extension == ".gif" )
		String_t* L_45 = V_7;
		bool L_46 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_45, _stringLiteral64CC1194405FA366D9AE015C627F4609DEAC4879, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_010a;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralB3F0D81387C1211E197E16C94BFDA6583BC874F9;
		goto IL_0122;
	}

IL_010a:
	{
		// else if( extension == ".bmp" )
		String_t* L_47 = V_7;
		bool L_48 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_47, _stringLiteral48022311225DF803178B78ACBDB71930DBF6C39C, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0120;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralA6E98DBB2BD82CB83A4EB01F4DFB5062494F8E28;
		goto IL_0122;
	}

IL_0120:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_0122:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_49 = V_5;
		NullCheck(L_49);
		int32_t L_50 = 3;
		String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_51, /*hidden argument*/NULL);
		bool L_53 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_52, (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0138;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_54 = V_6;
		V_4 = L_54;
	}

IL_0138:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		String_t* L_57 = V_3;
		int32_t L_58 = V_4;
		ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD  L_59;
		memset((&L_59), 0, sizeof(L_59));
		ImageProperties__ctor_mA7EA851C62137F23B43E4EF0D95BC83A0A9EF89F((&L_59), L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409  NativeGallery_GetVideoProperties_mB3016DF41AF03C4F21D494FD4F972F497438EE7D (String_t* ___videoPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideoProperties_mB3016DF41AF03C4F21D494FD4F972F497438EE7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral0A3CF76AA4D046F4E79CDE3341E93210C22D0D9E, L_2, /*hidden argument*/NULL);
		FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 * L_4 = (FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431 *)il2cpp_codegen_object_new(FileNotFoundException_t0B3F0AE5C94A781A7E2ABBD786F91C229B703431_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_mA72DAA77008E903BC162A8D32FDE7F874B27E858(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NativeGallery_GetVideoProperties_mB3016DF41AF03C4F21D494FD4F972F497438EE7D_RuntimeMethod_var);
	}

IL_0019:
	{
		// string value = AJC.CallStatic<string>( "GetVideoProperties", Context, videoPath );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t90106A8880BA5F109729987632572E633A0CDA87_il2cpp_TypeInfo_var);
		AndroidJavaClass_t799D386229C77D27C7E129BEF7A79AFD426084EE * L_5 = NativeGallery_get_AJC_m6E37F8A8EF970433771355250CCF9C42ACC39644(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		AndroidJavaObject_t31F4DD4D4523A77B8AF16FE422B7426248E3093D * L_8 = NativeGallery_get_Context_m5FFDDA945B9C2DF7F88CA32FC24A511980B0E24C(/*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		String_t* L_10 = ___videoPath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11 = AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92(L_5, _stringLiteral7D65788C5CE6ABCABF195863EEDDF508BC37FD6A, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m002D032EB174A74F664D671FD0FEDDDD94D1CA92_RuntimeMethod_var);
		V_0 = L_11;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = (((int64_t)((int64_t)0)));
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_12 = V_0;
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00db;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_14 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_15 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = V_5;
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))) < ((int32_t)4)))
		{
			goto IL_00db;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_22, /*hidden argument*/NULL);
		bool L_24 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0086;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0086:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_27, /*hidden argument*/NULL);
		bool L_29 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_009a;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_009a:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_32, /*hidden argument*/NULL);
		bool L_34 = Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95(L_33, (int64_t*)(&V_3), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00af;
		}
	}
	{
		// duration = 0L;
		V_3 = (((int64_t)((int64_t)0)));
	}

IL_00af:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 3;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39 = String_Replace_m276641366A463205C185A9B3DC0E24ECB95122C9(L_38, ((int32_t)44), ((int32_t)46), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_40 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_41 = Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744(L_39, ((int32_t)167), L_40, (float*)(&V_4), /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00db;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00db:
	{
		// if( rotation == -90f )
		float L_42 = V_4;
		if ((!(((float)L_42) == ((float)(-90.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00eb:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		int64_t L_45 = V_3;
		float L_46 = V_4;
		VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409  L_47;
		memset((&L_47), 0, sizeof(L_47));
		VideoProperties__ctor_m3264DD4A0638F1CBC1CB4B6F17D1495906B8C97B((&L_47), L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
// System.Void NativeGallery::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__cctor_mED61E535263503A12730A0694E5BDE9A404D623A (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke(const ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD& unmarshaled, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_back(const ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_pinvoke& marshaled, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_pinvoke_cleanup(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_com(const ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD& unmarshaled, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_com_back(const ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_com& marshaled, ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshal_com_cleanup(ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mA7EA851C62137F23B43E4EF0D95BC83A0A9EF89F (ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->set_mimeType_2(L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->set_orientation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_mA7EA851C62137F23B43E4EF0D95BC83A0A9EF89F_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD * _thisAdjusted = reinterpret_cast<ImageProperties_t4DA708E8E70CE3231F7E847959B135125D49CEBD *>(__this + _offset);
	ImageProperties__ctor_mA7EA851C62137F23B43E4EF0D95BC83A0A9EF89F(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_mB67FD460D95DAF27F370271299F24153E52BAC56 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_mB9D4ED65BEFC10BB41CDBE411DD062917A2AFC53 (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, String_t* ___path0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___path0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___path0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___path0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___path0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___path0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m5CFB5F9A46EB3164B4F3CC78D57B9BA0F7586B9D (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, String_t* ___path0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_mE2D644EDEF1AD085613C818BB53794E29DB85F8A (MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m29943F178B930B2B459E7B79E9B10EDB676397E6 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m0EA4707EDB3DDDCCFEA1761DE00CEB4DCA9F1B27 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___paths0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___paths0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(targetMethod, targetThis, ___paths0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(targetMethod, targetThis, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___paths0);
					else
						VirtActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___paths0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paths0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m18FDD5F327F34EBDCD99641A397FF698119EB948 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_mBF22617FF36078830D13FA6887BBB6E5DD8E5086 (MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___path1' to native representation
	char* ____path1_marshaled = NULL;
	____path1_marshaled = il2cpp_codegen_marshal_string(___path1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____path1_marshaled);

	// Marshaling cleanup of parameter '___path1' native representation
	il2cpp_codegen_marshal_free(____path1_marshaled);
	____path1_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_m3E8C46DE2ED46BC523E207FBEEF7A7AB8FC16A80 (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_mDA047FC947FF711EE6134C2EC6408AE9F530A7D6 (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___path1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
					else
						GenericVirtActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___path1);
					else
						VirtActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___path1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___success0) - 1), ___path1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_mC904FBB03BA6A2CAAD0E2D2F5115CB0585797703 (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, bool ___success0, String_t* ___path1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MediaSaveCallback_BeginInvoke_mC904FBB03BA6A2CAAD0E2D2F5115CB0585797703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_m19447DE5B70175FA8AE99BCB8B24E70878CDA0F7 (MediaSaveCallback_tB112A30BAF7BB21A3F1057DA1835FD93C329058D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m3264DD4A0638F1CBC1CB4B6F17D1495906B8C97B (VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->set_duration_2(L_2);
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->set_rotation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m3264DD4A0638F1CBC1CB4B6F17D1495906B8C97B_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409 * _thisAdjusted = reinterpret_cast<VideoProperties_t3F6D823A49ED4974B6CBF9B267BA6165DE2A8409 *>(__this + _offset);
	VideoProperties__ctor_m3264DD4A0638F1CBC1CB4B6F17D1495906B8C97B(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Awake_m87BF614D7A26B331D168D0069EA06B5499D5825A (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGCallbackHelper_Awake_m87BF614D7A26B331D168D0069EA06B5499D5825A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_Update_m45CBA57FF992E7C5A7496789985177F8D4F79EBE (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, const RuntimeMethod* method)
{
	{
		// if( mainThreadAction != null )
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_mainThreadAction_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// System.Action temp = mainThreadAction;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = __this->get_mainThreadAction_4();
		// mainThreadAction = null;
		__this->set_mainThreadAction_4((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL);
		// temp();
		NullCheck(L_1);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::CallOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m8E20F01A670A2B68A5491FE7EE7AEC40A62CD6F8 (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGCallbackHelper__ctor_m09B197821A2CBCA4F4606BDFF0CC587907D5A057 (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * ___callback0, MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * ___callbackMultiple1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid__ctor_mF27850136AF22F210EEA35896C3247C74F446750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGMediaReceiveCallbackAndroid( NativeGallery.MediaPickCallback callback, NativeGallery.MediaPickMultipleCallback callbackMultiple ) : base( "com.yasirkula.unity.NativeGalleryMediaReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A(__this, _stringLiteral8DAB055BE6FC3DFC1BE60E2532729C9F6891796D, /*hidden argument*/NULL);
		// this.callback = callback;
		MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_0 = ___callback0;
		__this->set_callback_4(L_0);
		// this.callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_1 = ___callbackMultiple1;
		__this->set_callbackMultiple_5(L_1);
		// callbackHelper = new GameObject( "NGCallbackHelper" ).AddComponent<NGCallbackHelper>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteralFC9C6859C89D2066E1ECACA953784B1C8474910F, /*hidden argument*/NULL);
		NullCheck(L_2);
		NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * L_3 = GameObject_AddComponent_TisNGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC_mDC29622CE342F06F5412C8B6C12615091DEF114C(L_2, /*hidden argument*/GameObject_AddComponent_TisNGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC_mDC29622CE342F06F5412C8B6C12615091DEF114C_RuntimeMethod_var);
		__this->set_callbackHelper_6(L_3);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m2D51DAE602B5E0ED4FCBD97DB68CA6CFDE7D8EF6 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid_OnMediaReceived_m2D51DAE602B5E0ED4FCBD97DB68CA6CFDE7D8EF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * L_0 = (U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m5E749F0272C2B86CCB9E40A2847E5D3CFEDF055F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * L_2 = V_0;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->set_path_1(L_3);
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * L_4 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_m67409CD62241272CECA79F66FE8DA81A942FB7B0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NGCallbackHelper_CallOnMainThread_m8E20F01A670A2B68A5491FE7EE7AEC40A62CD6F8_inline(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m33031BF4DDD9229385BBAD18440D7495081327DC (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m33031BF4DDD9229385BBAD18440D7495081327DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * L_0 = (U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m9616CC6234DC76E11471A5E4B51BC6E410BFA614(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		// string[] result = null;
		U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_result_1((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL);
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_3 = ___paths0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_00a1;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_5 = ___paths0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_0049;
	}

IL_0037:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0045;
		}
	}
	{
		// validPathCount++;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0045:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0049:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_16 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_18 = V_2;
		if (L_18)
		{
			goto IL_005b;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_19;
		goto IL_009a;
	}

IL_005b:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_20 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_009a;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_22 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_4 = L_23;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_0090;
	}

IL_0071:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		String_t* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		bool L_28 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_008a;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = V_4;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = V_1;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		String_t* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_35);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_35);
	}

IL_008a:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_0090:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_37 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
		{
			goto IL_0071;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_39 = V_4;
		V_1 = L_39;
	}

IL_009a:
	{
		// result = pathsSplit;
		U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * L_40 = V_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_41 = V_1;
		NullCheck(L_40);
		L_40->set_result_1(L_41);
	}

IL_00a1:
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * L_42 = __this->get_callbackHelper_6();
		U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * L_43 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_44 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_44, L_43, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m79C899684939523D0C231CF9429DBACED4FCF575_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		NGCallbackHelper_CallOnMainThread_m8E20F01A670A2B68A5491FE7EE7AEC40A62CD6F8_inline(L_42, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveCallback(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveCallback_m33F62EB0F16F6EF1655DAF412ACFC498DD7A0748 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid_MediaReceiveCallback_m33F62EB0F16F6EF1655DAF412ACFC498DD7A0748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// path = null;
		___path0 = (String_t*)NULL;
	}

IL_000b:
	{
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// if( callback != null )
			MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_2 = __this->get_callback_4();
			if (!L_2)
			{
				goto IL_0020;
			}
		}

IL_0014:
		{
			// callback( path );
			MediaPickCallback_tEB6DF9DBF07DFCE70B19B5F7F900A8E1D1A24C0B * L_3 = __this->get_callback_4();
			String_t* L_4 = ___path0;
			NullCheck(L_3);
			MediaPickCallback_Invoke_mB9D4ED65BEFC10BB41CDBE411DD062917A2AFC53(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0020:
		{
			// }
			IL2CPP_LEAVE(0x33, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		// Object.Destroy( callbackHelper.gameObject );
		NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * L_5 = __this->get_callbackHelper_6();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::MediaReceiveMultipleCallback(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m8E46473DBCBDC3A8AD1F630F83154EF66ACE5CA9 (NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m8E46473DBCBDC3A8AD1F630F83154EF66ACE5CA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if( paths != null && paths.Length == 0 )
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___paths0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___paths0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// paths = null;
		___paths0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL;
	}

IL_000a:
	{
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			// if( callbackMultiple != null )
			MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_2 = __this->get_callbackMultiple_5();
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			// callbackMultiple( paths );
			MediaPickMultipleCallback_t94C832404A22FC87CA4D16514282CB5E75D3EF9C * L_3 = __this->get_callbackMultiple_5();
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = ___paths0;
			NullCheck(L_3);
			MediaPickMultipleCallback_Invoke_m0EA4707EDB3DDDCCFEA1761DE00CEB4DCA9F1B27(L_3, L_4, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// }
			IL2CPP_LEAVE(0x32, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		// Object.Destroy( callbackHelper.gameObject );
		NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * L_5 = __this->get_callbackHelper_6();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5E749F0272C2B86CCB9E40A2847E5D3CFEDF055F (U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass4_0::<OnMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnMediaReceivedU3Eb__0_m67409CD62241272CECA79F66FE8DA81A942FB7B0 (U3CU3Ec__DisplayClass4_0_tD612F8105055A1F6AC8CEBBF093DCFD58EC4D60B * __this, const RuntimeMethod* method)
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveCallback( path ) );
		NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_path_1();
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveCallback_m33F62EB0F16F6EF1655DAF412ACFC498DD7A0748(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m9616CC6234DC76E11471A5E4B51BC6E410BFA614 (U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid/<>c__DisplayClass5_0::<OnMultipleMediaReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnMultipleMediaReceivedU3Eb__0_m79C899684939523D0C231CF9429DBACED4FCF575 (U3CU3Ec__DisplayClass5_0_tE12A7FFF94E28684E105B2A76D15F02D86AB2361 * __this, const RuntimeMethod* method)
{
	{
		// callbackHelper.CallOnMainThread( () => MediaReceiveMultipleCallback( result ) );
		NGMediaReceiveCallbackAndroid_t2669B8E07A738C523AD295A74C8632CAEEC08ACA * L_0 = __this->get_U3CU3E4__this_0();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get_result_1();
		NullCheck(L_0);
		NGMediaReceiveCallbackAndroid_MediaReceiveMultipleCallback_m8E46473DBCBDC3A8AD1F630F83154EF66ACE5CA9(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247 (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE7ED8D9A90268E12E8B27BD3032183F0B061C03E (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m5779DC8D082B3908BD54C58E1282247C73A18BF0 (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGPermissionCallbackAndroid__ctor_m5779DC8D082B3908BD54C58E1282247C73A18BF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NGPermissionCallbackAndroid( object threadLock ) : base( "com.yasirkula.unity.NativeGalleryPermissionReceiver" )
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t72F996A75B4B771B9572C3770CF2D2C7A5B4783D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m159565DEF4041D92C0763D1F4A0684140241CD9A(__this, _stringLiteral0EDCDCF2385ABDDA6EA48557BFDE007F3900F8A5, /*hidden argument*/NULL);
		// Result = -1;
		NGPermissionCallbackAndroid_set_Result_mE7ED8D9A90268E12E8B27BD3032183F0B061C03E_inline(__this, (-1), /*hidden argument*/NULL);
		// this.threadLock = threadLock;
		RuntimeObject * L_0 = ___threadLock0;
		__this->set_threadLock_4(L_0);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_m50555323BCCD9938285CD5C2BCD7553262546D10 (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// Result = result;
		int32_t L_0 = ___result0;
		NGPermissionCallbackAndroid_set_Result_mE7ED8D9A90268E12E8B27BD3032183F0B061C03E_inline(__this, L_0, /*hidden argument*/NULL);
		// lock( threadLock )
		RuntimeObject * L_1 = __this->get_threadLock_4();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// Monitor.Pulse( threadLock );
		RuntimeObject * L_3 = __this->get_threadLock_4();
		Monitor_Pulse_mA4885CDA903E733894EB46D7D4CA9F40C95FEE08(L_3, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x2F, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_mC05AF5C95C57FB056EAA7AE30D5D6EAE3FC81247_inline (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NGCallbackHelper_CallOnMainThread_m8E20F01A670A2B68A5491FE7EE7AEC40A62CD6F8_inline (NGCallbackHelper_t806936789A1CE48713C776CE1F0D895C945C0BFC * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___function0, const RuntimeMethod* method)
{
	{
		// mainThreadAction = function;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = ___function0;
		__this->set_mainThreadAction_4(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_mE7ED8D9A90268E12E8B27BD3032183F0B061C03E_inline (NGPermissionCallbackAndroid_tC6D9A6826434D66AAEDF0D1A38AEB8D6BB7A4C72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
