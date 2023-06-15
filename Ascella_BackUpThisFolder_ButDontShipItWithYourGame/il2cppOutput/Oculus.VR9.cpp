#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<OVRCameraRig>
struct Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler>
struct EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct KeyCollection_t3CD0D6331A5AECDB84A4B9837420F0C50AA8F4F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit>
struct List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>[]
struct EntryU5BU5D_tD6E39CDF844AFC3D70C8C36A17734FEA6F4ED2AA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Assets.OVR.Scripts.FixMethodDelegate
struct FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F;
// Assets.OVR.Scripts.FixRecord
struct FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC;
// Meta.XR.MetaXRFeature
struct MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// OVRCursor
struct OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A;
// UnityEngine.EventSystems.OVRInputModule
struct OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A;
// UnityEngine.EventSystems.OVRPhysicsRaycaster
struct OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7;
// UnityEngine.EventSystems.OVRPointerEventData
struct OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D;
// OVRRaycaster
struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556;
// Assets.OVR.Scripts.RangedRecord
struct RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699;
// Assets.OVR.Scripts.Record
struct Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral38D4303DAB31C0B46AD6FEA71AE3015604BBFFCB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8FB92F9A7623BBED6D312A6048883060D75AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral68D7334B328E9233B67476A69217C796D0012E9B;
IL2CPP_EXTERN_C String_t* _stringLiteral69B113727E0D936C93A74FF172AA5CD6A0A7FFA4;
IL2CPP_EXTERN_C String_t* _stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8F4E1B8373DF6DEFF0CA227D126CD0F2969274;
IL2CPP_EXTERN_C String_t* _stringLiteral8547198FCD4CBEF1644DE037D71CAB719C5682EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8CC90267359228BBF3FD4EFA7C6B63E4F4D4C76E;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
IL2CPP_EXTERN_C String_t* _stringLiteralAA84FE0643CDCFA240F65110401D6C5BFA23CA16;
IL2CPP_EXTERN_C String_t* _stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951;
IL2CPP_EXTERN_C String_t* _stringLiteralAF181C430C588D40EAFF0993844E32B36A56034B;
IL2CPP_EXTERN_C String_t* _stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37;
IL2CPP_EXTERN_C String_t* _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
IL2CPP_EXTERN_C String_t* _stringLiteralC1DB26724C2C52E64A4139D74063E4F6F9F5AD0E;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B58AE8DE14B5638FD59D9E4695BD116DC49871;
IL2CPP_EXTERN_C String_t* _stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735;
IL2CPP_EXTERN_C String_t* _stringLiteralE73EEE9D297AB0D06F89C521B58BA8DD8209C55C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD6E39CDF844AFC3D70C8C36A17734FEA6F4ED2AA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3CD0D6331A5AECDB84A4B9837420F0C50AA8F4F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ____dictionary_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59  : public RuntimeObject
{
};

// UnityEngine.EventSystems.PointerEventDataExtension
struct PointerEventDataExtension_t4335B94AF6A64806EED176B63B67CAD2BB98E0EA  : public RuntimeObject
{
};

// Assets.OVR.Scripts.Record
struct Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2  : public RuntimeObject
{
	// System.Int32 Assets.OVR.Scripts.Record::sortOrder
	int32_t ___sortOrder_0;
	// System.String Assets.OVR.Scripts.Record::category
	String_t* ___category_1;
	// System.String Assets.OVR.Scripts.Record::message
	String_t* ___message_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D  : public RuntimeObject
{
};

// OVRPlugin/UnityOpenXR
struct UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E  : public RuntimeObject
{
};

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___m_EventData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonState
	int32_t ___buttonState_0;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___buttonData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3* ___m_TrackedButtons_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>
struct Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ____currentValue_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Assets.OVR.Scripts.FixRecord
struct FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D  : public Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2
{
	// Assets.OVR.Scripts.FixMethodDelegate Assets.OVR.Scripts.FixRecord::fixMethod
	FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* ___fixMethod_3;
	// UnityEngine.Object Assets.OVR.Scripts.FixRecord::targetObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___targetObject_4;
	// System.String[] Assets.OVR.Scripts.FixRecord::buttonNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___buttonNames_5;
	// System.Boolean Assets.OVR.Scripts.FixRecord::editModeRequired
	bool ___editModeRequired_6;
	// System.Boolean Assets.OVR.Scripts.FixRecord::complete
	bool ___complete_7;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// Assets.OVR.Scripts.RangedRecord
struct RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699  : public Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2
{
	// System.Single Assets.OVR.Scripts.RangedRecord::value
	float ___value_3;
	// System.Single Assets.OVR.Scripts.RangedRecord::min
	float ___min_4;
	// System.Single Assets.OVR.Scripts.RangedRecord::max
	float ___max_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t58C883C8C382061E815728EB76201441261E187E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t58C883C8C382061E815728EB76201441261E187E__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t32AB77CF0834C032E00FC52D42A0E968D2C7FB68 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t32AB77CF0834C032E00FC52D42A0E968D2C7FB68__padding[32];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8CCC1D019897BE2F4568BD89DEABE32FE4F8114C  : public RuntimeObject
{
};

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Assets.OVR.Scripts.FixMethodDelegate
struct FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.OVRPointerEventData
struct OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D  : public PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB
{
	// UnityEngine.Ray UnityEngine.EventSystems.OVRPointerEventData::worldSpaceRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___worldSpaceRay_33;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPointerEventData::swipeStart
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___swipeStart_34;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.XR.MetaXRFeature
struct MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform OVRCameraRig::<trackingSpace>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackingSpaceU3Ek__BackingField_4;
	// UnityEngine.Transform OVRCameraRig::<leftEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftEyeAnchorU3Ek__BackingField_5;
	// UnityEngine.Transform OVRCameraRig::<centerEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CcenterEyeAnchorU3Ek__BackingField_6;
	// UnityEngine.Transform OVRCameraRig::<rightEyeAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightEyeAnchorU3Ek__BackingField_7;
	// UnityEngine.Transform OVRCameraRig::<leftHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftHandAnchorU3Ek__BackingField_8;
	// UnityEngine.Transform OVRCameraRig::<rightHandAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightHandAnchorU3Ek__BackingField_9;
	// UnityEngine.Transform OVRCameraRig::<leftControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CleftControllerAnchorU3Ek__BackingField_10;
	// UnityEngine.Transform OVRCameraRig::<rightControllerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrightControllerAnchorU3Ek__BackingField_11;
	// UnityEngine.Transform OVRCameraRig::<trackerAnchor>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackerAnchorU3Ek__BackingField_12;
	// System.Action`1<OVRCameraRig> OVRCameraRig::UpdatedAnchors
	Action_1_t88CC03E8C305DA991BBBCEBE79519B58D52F577F* ___UpdatedAnchors_13;
	// System.Action`1<UnityEngine.Transform> OVRCameraRig::TrackingSpaceChanged
	Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D* ___TrackingSpaceChanged_14;
	// System.Boolean OVRCameraRig::usePerEyeCameras
	bool ___usePerEyeCameras_15;
	// System.Boolean OVRCameraRig::useFixedUpdateForTracking
	bool ___useFixedUpdateForTracking_16;
	// System.Boolean OVRCameraRig::disableEyeAnchorCameras
	bool ___disableEyeAnchorCameras_17;
	// System.Boolean OVRCameraRig::_skipUpdate
	bool ____skipUpdate_18;
	// System.String OVRCameraRig::trackingSpaceName
	String_t* ___trackingSpaceName_19;
	// System.String OVRCameraRig::trackerAnchorName
	String_t* ___trackerAnchorName_20;
	// System.String OVRCameraRig::leftEyeAnchorName
	String_t* ___leftEyeAnchorName_21;
	// System.String OVRCameraRig::centerEyeAnchorName
	String_t* ___centerEyeAnchorName_22;
	// System.String OVRCameraRig::rightEyeAnchorName
	String_t* ___rightEyeAnchorName_23;
	// System.String OVRCameraRig::leftHandAnchorName
	String_t* ___leftHandAnchorName_24;
	// System.String OVRCameraRig::rightHandAnchorName
	String_t* ___rightHandAnchorName_25;
	// System.String OVRCameraRig::leftControllerAnchorName
	String_t* ___leftControllerAnchorName_26;
	// System.String OVRCameraRig::rightControllerAnchorName
	String_t* ___rightControllerAnchorName_27;
	// UnityEngine.Camera OVRCameraRig::_centerEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____centerEyeCamera_28;
	// UnityEngine.Camera OVRCameraRig::_leftEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____leftEyeCamera_29;
	// UnityEngine.Camera OVRCameraRig::_rightEyeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____rightEyeCamera_30;
	// UnityEngine.Matrix4x4 OVRCameraRig::_previousTrackingSpaceTransform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____previousTrackingSpaceTransform_31;
};

// OVRCursor
struct OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

// UnityEngine.EventSystems.OVRPhysicsRaycaster
struct OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// UnityEngine.LayerMask UnityEngine.EventSystems.OVRPhysicsRaycaster::m_EventMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_EventMask_6;
	// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::sortOrder
	int32_t ___sortOrder_7;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.EventSystems.OVRInputModule
struct OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// UnityEngine.Transform UnityEngine.EventSystems.OVRInputModule::rayTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rayTransform_17;
	// OVRCursor UnityEngine.EventSystems.OVRInputModule::m_Cursor
	OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* ___m_Cursor_18;
	// OVRInput/Button UnityEngine.EventSystems.OVRInputModule::joyPadClickButton
	int32_t ___joyPadClickButton_19;
	// UnityEngine.KeyCode UnityEngine.EventSystems.OVRInputModule::gazeClickKey
	int32_t ___gazeClickKey_20;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::performSphereCastForGazepointer
	bool ___performSphereCastForGazepointer_21;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::useRightStickScroll
	bool ___useRightStickScroll_22;
	// System.Single UnityEngine.EventSystems.OVRInputModule::rightStickDeadZone
	float ___rightStickDeadZone_23;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::useSwipeScroll
	bool ___useSwipeScroll_24;
	// System.Single UnityEngine.EventSystems.OVRInputModule::swipeDragThreshold
	float ___swipeDragThreshold_25;
	// System.Single UnityEngine.EventSystems.OVRInputModule::swipeDragScale
	float ___swipeDragScale_26;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::InvertSwipeXAxis
	bool ___InvertSwipeXAxis_27;
	// OVRRaycaster UnityEngine.EventSystems.OVRInputModule::activeGraphicRaycaster
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* ___activeGraphicRaycaster_28;
	// System.Single UnityEngine.EventSystems.OVRInputModule::angleDragThreshold
	float ___angleDragThreshold_29;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_SpherecastRadius
	float ___m_SpherecastRadius_30;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_NextAction
	float ___m_NextAction_31;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_32;
	// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_33;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_34;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_35;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_36;
	// System.String UnityEngine.EventSystems.OVRInputModule::m_CancelButton
	String_t* ___m_CancelButton_37;
	// System.Single UnityEngine.EventSystems.OVRInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_38;
	// System.Boolean UnityEngine.EventSystems.OVRInputModule::m_AllowActivationOnMobileDevice
	bool ___m_AllowActivationOnMobileDevice_39;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData> UnityEngine.EventSystems.OVRInputModule::m_VRRayPointerData
	Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* ___m_VRRayPointerData_40;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_41;
};

// OVRRaycaster
struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182  : public GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B
{
	// UnityEngine.GameObject OVRRaycaster::pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointer_12;
	// System.Int32 OVRRaycaster::sortOrder
	int32_t ___sortOrder_13;
	// UnityEngine.Canvas OVRRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> OVRRaycaster::m_RaycastResults
	List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97* ___m_RaycastResults_15;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields
{
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerMoveHandler
	EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06* ___s_PointerMoveHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9* ___s_PointerEnterHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* ___s_PointerExitHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___s_PointerDownHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___s_PointerUpHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___s_PointerClickHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___s_InitializePotentialDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___s_BeginDragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___s_DragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___s_EndDragHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___s_DropHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ___s_ScrollHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___s_UpdateSelectedHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA* ___s_SelectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690* ___s_DeselectHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ___s_MoveHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ___s_SubmitHandler_16;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ___s_CancelHandler_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___s_InternalTransformList_18;
};

// UnityEngine.EventSystems.ExecuteEvents

// UnityEngine.EventSystems.PointerEventDataExtension

// UnityEngine.EventSystems.PointerEventDataExtension

// Assets.OVR.Scripts.Record

// Assets.OVR.Scripts.Record

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
struct U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields
{
	// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9
	U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9__15_0
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___U3CU3E9__15_0_1;
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<>9__16_0
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___U3CU3E9__16_0_2;
};

// UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c

// OVRPlugin/UnityOpenXR
struct UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_StaticFields
{
	// System.Boolean OVRPlugin/UnityOpenXR::Enabled
	bool ___Enabled_0;
};

// OVRPlugin/UnityOpenXR

// UnityEngine.EventSystems.PointerInputModule/ButtonState

// UnityEngine.EventSystems.PointerInputModule/ButtonState

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData

// UnityEngine.EventSystems.PointerInputModule/MouseState

// UnityEngine.EventSystems.PointerInputModule/MouseState

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// Assets.OVR.Scripts.FixRecord

// Assets.OVR.Scripts.FixRecord

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Assets.OVR.Scripts.RangedRecord

// Assets.OVR.Scripts.RangedRecord

// System.Single

// System.Single

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8CCC1D019897BE2F4568BD89DEABE32FE4F8114C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
	__StaticArrayInitTypeSizeU3D28_t58C883C8C382061E815728EB76201441261E187E ___039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C359EF0A8686595384C3B3146514BBE87254ED622B7D936E88D651407C8535F0
	__StaticArrayInitTypeSizeU3D32_t32AB77CF0834C032E00FC52D42A0E968D2C7FB68 ___C359EF0A8686595384C3B3146514BBE87254ED622B7D936E88D651407C8535F0_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
	__StaticArrayInitTypeSizeU3D24_tB80B93638C5B131A2ECBFB2B90A6F7C524560B75 ___CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_2;
};

// <PrivateImplementationDetails>

// UnityEngine.EventSystems.AxisEventData

// UnityEngine.EventSystems.AxisEventData

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.Comparison`1<UnityEngine.RaycastHit>

// System.Comparison`1<UnityEngine.RaycastHit>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// Assets.OVR.Scripts.FixMethodDelegate

// Assets.OVR.Scripts.FixMethodDelegate

// UnityEngine.EventSystems.OVRPointerEventData

// UnityEngine.EventSystems.OVRPointerEventData

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// Meta.XR.MetaXRFeature

// Meta.XR.MetaXRFeature

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// OVRCameraRig

// OVRCameraRig

// OVRCursor

// OVRCursor

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.BaseInputModule

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.BaseRaycaster

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.EventSystems.OVRPhysicsRaycaster

// UnityEngine.EventSystems.OVRPhysicsRaycaster

// UnityEngine.EventSystems.PointerInputModule

// UnityEngine.EventSystems.PointerInputModule

// UnityEngine.EventSystems.OVRInputModule

// UnityEngine.EventSystems.OVRInputModule

// OVRRaycaster
struct OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_StaticFields
{
	// System.Collections.Generic.List`1<OVRRaycaster/RaycastHit> OVRRaycaster::s_SortedGraphics
	List_1_t9F19053F72A3E5B96604F70A14B49B27869D5C97* ___s_SortedGraphics_16;
};

// OVRRaycaster
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 m_Items[1];

	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___2_functor, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___2_callbackFunction, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared (ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C_gshared (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.RaycastHit>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_gshared (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0_array, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___1_comparison, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Assets.OVR.Scripts.Record::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3 (Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2* __this, int32_t ___0_order, String_t* ___1_cat, String_t* ___2_msg, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::.ctor()
inline void Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState__ctor_mF4A8041A86E50D91202770E73CE0DAF12BB207D9 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_mAD77FFD987CD5B998AFAD4DAECADBC76034026BF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_ActivateModule_m2C693E95727E13FDF06D54FA8762A040175AC3BA (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selected, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_pointer, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ExecuteEvents_get_submitHandler_mDCAAA40F0F6AEA385B375C1839B4DC37E5FC4A7A_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISubmitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ExecuteEvents_get_cancelHandler_mBCDFD10C95FC2BBC5DC5A512FEA1BBEECC2DAE12_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ICancelHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::AllowMoveEventProcessing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___0_time, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline (AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ExecuteEvents_get_moveHandler_mF717824AB0018BBED3C2DF3C67486E3B2B3836D2_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IMoveHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ExecuteEvents_get_updateSelectedHandler_m8AF7543437082AD4F5690AAA77F2623AE28C3D09_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::PressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventDataExtension::IsVRPointer(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventDataExtension::SetSwipeStart(UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_start, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_currentOverGo, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_pointerEvent, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___2_callbackFunction, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___0_root, ___1_eventData, ___2_callbackFunction, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___0_root, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___0_root, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ExecuteEvents_get_initializePotentialDrag_m16F4CD40448FB1B78F6683AA26A9CC574F48AFBD_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IInitializePotentialDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::ReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51 (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m8E00FA7361DE68780ACEB365E6B14206A2180D03_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IDropHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___2_callbackFunction, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___0_root, ___1_eventData, ___2_callbackFunction, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_mE78FEEEAE114635E416FF1FE33C851E62B60555B_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_currentPointerData, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_newEnterTarget, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseState_AnyPressesThisFrame_m4887FF61D58D641496B95C83710C8A4E841970F3 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseState_AnyReleasesThisFrame_m4FBA37A12735418AD0970F11BC44850517B05E93 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline (ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710 (bool ___0_pressed, bool ___1_released, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___2_pointerData, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___0_data, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_m86588AD6FDDC9670CE26E5111D23F49B821330C5_gshared)(___0_root, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::get_scrollHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ExecuteEvents_get_scrollHandler_m51E902070611D3F81AD5F1F5762AE2C48E84AFE2_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IScrollHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_root, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ___2_callbackFunction, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m47C22A77611C31042CA566EE345A4A1017A40A65_gshared)(___0_root, ___1_eventData, ___2_callbackFunction, method);
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m8BA21E58E633B2C5B477E49DAABAD3C97A8158AF_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___0_mouseData, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetCanvasPointerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* OVRInputModule_GetCanvasPointerData_mA781BE0613EB11DCE69F0ECC0079443A7DCB15E4 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsPointerMoving(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEvent, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, int32_t ___0_key, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, int32_t, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.EventSystems.OVRPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, int32_t ___0_key, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, int32_t, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
inline ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* (*) (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
inline Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC (ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 (*) (ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
inline void Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86 (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
inline PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_inline (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	return ((  PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
inline bool Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58 (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::get_Values()
inline ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429 (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* (*) (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*, const RuntimeMethod*))Dictionary_2_get_Values_mC5B06C3C3FA89D62D6035C5B4C5E64A08FCF4DB9_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::GetEnumerator()
inline Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA (ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 (*) (ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB*, const RuntimeMethod*))ValueCollection_GetEnumerator_mDC2BD0AFDA087B7E7C23A8077E612664DFA8A152_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::Dispose()
inline void Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3 (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_Dispose_m0647C4F434347E47D544621901E49835DF51F22B_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::get_Current()
inline OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_inline (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	return ((  OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,UnityEngine.EventSystems.OVRPointerEventData>::MoveNext()
inline bool Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392*, const RuntimeMethod*))Enumerator_MoveNext_mF45CB0E0D7475963B61017A024634F60CF48548A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
inline void Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9 (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.OVRPointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, int32_t ___0_id, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___1_data, bool ___2_create, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetExtraScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_raycastResults, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5 (List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___0_candidates, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
inline void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRRaycaster::GetScreenPosition(UnityEngine.EventSystems.RaycastResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A (OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_raycastResult, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.EventSystems.OVRInputModule::GetRectTransformNormal(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Spherecast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_resultAppendList, float ___2_radius, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, int32_t, const RuntimeMethod*))List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPhysicsRaycaster::GetScreenPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData,UnityEngine.EventSystems.OVRPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___0_from, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___1_to, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, int32_t ___0_button, int32_t ___1_stateForMouseButton, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___2_data, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.PointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, int32_t ___0_id, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB** ___1_data, bool ___2_create, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Void OVRRaycaster::RaycastPointer(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRRaycaster_RaycastPointer_m5ECFC6B6EF2F57D5DE2C07AD91CEB698CE29E4BB (OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_resultAppendList, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_from, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___1_to, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule::StateForMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, int32_t ___0_buttonId, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventData_IsPointerMoving_m281B3698E618D116F3D1E7473BADFAE5B67C834E (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldStartDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEvent, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::SwipeAdjustedPosition(UnityEngine.Vector2,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_originalPosition, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___1_pointerEvent, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ExecuteEvents_get_beginDragHandler_mB0BEAC09E4A8F31438B07FE68A5BF7267FF8C2FC_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ExecuteEvents_get_dragHandler_m9193926B9685C80C0560C2E105FF6150C4EAE507_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___1_eventData, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___2_functor, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mDC4455B743BE4A6BA46DD741D0E0AB150FF1209A_gshared)(___0_target, ___1_eventData, ___2_functor, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetDown(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7 (int32_t ___0_virtualMask, int32_t ___1_controllerMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean OVRInput::GetUp(OVRInput/Button,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInput_GetUp_m66B13613FF16CBAB8B0A77A5ADCFD1A3A68F3898 (int32_t ___0_virtualMask, int32_t ___1_controllerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector2 OVRInput::Get(OVRInput/Axis2D,OVRInput/Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8 (int32_t ___0_virtualMask, int32_t ___1_controllerMask, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRCameraRig>()
inline OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera OVRCameraRig::get_leftEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OVRCameraRig_get_leftEyeCamera_m1C1CA12F69226BE8B0AC3142DAF77BDED7DF27CD (OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.EventSystems.PointerEventDataExtension::GetRay(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_maxDistance, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Array::Sort<UnityEngine.RaycastHit>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673 (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___0_array, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* ___1_comparison, const RuntimeMethod* method)
{
	((  void (*) (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*, Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*, const RuntimeMethod*))Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_gshared)(___0_array, ___1_comparison, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
inline void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Ray,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_m0886C4624531C71A2CC6A3196B9EAEE108C17CB5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_radius, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Ray::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Ray_ToString_m06274331D92120539B4C6E0D3747EE620DB468E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::SetClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_SetClientVersion_m4090E8C9C4B6DCE29E0B4947BCEB6F943C1E14A5 (const RuntimeMethod* method) ;
// System.IntPtr OVRPlugin/UnityOpenXR::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityOpenXR_HookGetInstanceProcAddr_m47D995F8D369E3C5128B927468F0ABD95352EFD4 (intptr_t ___0_func, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin/UnityOpenXR::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityOpenXR_OnInstanceCreate_mD8C51F81DF5B66595890F4D53FD5C11B066E3AF5 (uint64_t ___0_xrInstance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnInstanceDestroy_m434D377978F23755AEA67D5A447614023E0802CF (uint64_t ___0_xrInstance, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionCreate_m1AC2B5B77ACF1FD2BDB44AD92902B86724284D1F (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnAppSpaceChange_m75150D53FE36E1F1063AB0C95AB5418BF155AD06 (uint64_t ___0_xrSpace, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionStateChange_m0C99770FA4B4B984958C15BB609D093A8C9B0F46 (int32_t ___0_oldState, int32_t ___1_newState, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionBegin_m0422580F20229CC217DB02155FC2DC0D867F74CE (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionEnd_mEC2BB76CD260EC200996264B816F8715C04EA755 (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionExiting(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1 (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void OVRPlugin/UnityOpenXR::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityOpenXR_OnSessionDestroy_mE22528F3A18F2409377CD0862CC005D7F07442BD (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.OVR.Scripts.Record::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3 (Record_tFCAFE4978EFDAA014AA055159BD349F2F52CE2D2* __this, int32_t ___0_order, String_t* ___1_cat, String_t* ___2_msg, const RuntimeMethod* method) 
{
	{
		// public Record(int order, string cat, string msg)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// sortOrder = order;
		int32_t L_0 = ___0_order;
		__this->___sortOrder_0 = L_0;
		// category = cat;
		String_t* L_1 = ___1_cat;
		__this->___category_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___category_1), (void*)L_1);
		// message = msg;
		String_t* L_2 = ___2_msg;
		__this->___message_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_2), (void*)L_2);
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
// System.Void Assets.OVR.Scripts.RangedRecord::.ctor(System.Int32,System.String,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangedRecord__ctor_mB5CBC3362E784E17401E590E1973C6302806A4DD (RangedRecord_t25D9982F58541F843CB54DC4E4B246EFCBD29699* __this, int32_t ___0_order, String_t* ___1_cat, String_t* ___2_msg, float ___3_val, float ___4_minVal, float ___5_maxVal, const RuntimeMethod* method) 
{
	{
		// : base(order, cat, msg)
		int32_t L_0 = ___0_order;
		String_t* L_1 = ___1_cat;
		String_t* L_2 = ___2_msg;
		Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3(__this, L_0, L_1, L_2, NULL);
		// value = val;
		float L_3 = ___3_val;
		__this->___value_3 = L_3;
		// min = minVal;
		float L_4 = ___4_minVal;
		__this->___min_4 = L_4;
		// max = maxVal;
		float L_5 = ___5_maxVal;
		__this->___max_5 = L_5;
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
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_Multicast(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* currentDelegate = reinterpret_cast<FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_obj, ___1_isLastInSet, ___2_selectedIndex, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInst(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	typedef void (*FunctionPointerType) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, ___1_isLastInSet, ___2_selectedIndex, method);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStatic(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_obj, ___1_isLastInSet, ___2_selectedIndex, method);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStaticInvoker(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_ClosedStaticInvoker(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenVirtual(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	VirtualActionInvoker2< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInterface(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	InterfaceActionInvoker2< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericVirtual(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericVirtualActionInvoker2< bool, int32_t >::Invoke(method, ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericInterface(FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	GenericInterfaceActionInvoker2< bool, int32_t >::Invoke(method, ___0_obj, ___1_isLastInSet, ___2_selectedIndex);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_obj' to native representation
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ____0_obj_marshaled = {};
	if (___0_obj != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(*___0_obj, ____0_obj_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___0_obj != NULL ? (&____0_obj_marshaled) : NULL, static_cast<int32_t>(___1_isLastInSet), ___2_selectedIndex);

	// Marshaling of parameter '___0_obj' back from native representation
	if (___0_obj != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(____0_obj_marshaled, *___0_obj);
	}

	// Marshaling cleanup of parameter '___0_obj' native representation
	if ((&____0_obj_marshaled) != NULL)
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(____0_obj_marshaled);
	}

}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate__ctor_mFF496697BF82692D0FCB79A67301C14F3DBD4CF1 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5_Multicast;
}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::Invoke(UnityEngine.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate_Invoke_m6532678AFF1BFF608BB04A3FAB2349F54A1F38A5 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, ___1_isLastInSet, ___2_selectedIndex, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Assets.OVR.Scripts.FixMethodDelegate::BeginInvoke(UnityEngine.Object,System.Boolean,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixMethodDelegate_BeginInvoke_m5EB11FFD92C55A12BDAB5A2A8531C0BEE8E057B1 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, bool ___1_isLastInSet, int32_t ___2_selectedIndex, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_obj;
	__d_args[1] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___1_isLastInSet);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_selectedIndex);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Assets.OVR.Scripts.FixMethodDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixMethodDelegate_EndInvoke_mE4151F7DD68F41D8ED32D08435959029124EFF07 (FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Assets.OVR.Scripts.FixRecord::.ctor(System.Int32,System.String,System.String,Assets.OVR.Scripts.FixMethodDelegate,UnityEngine.Object,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixRecord__ctor_m855B11D45BA913A08C1D0ABE5BF3726A4313C059 (FixRecord_tA9619245BB76F73A6E03002DD6C237812E79254D* __this, int32_t ___0_order, String_t* ___1_cat, String_t* ___2_msg, FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* ___3_fix, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___4_target, bool ___5_editRequired, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___6_buttons, const RuntimeMethod* method) 
{
	{
		// : base(order, cat, msg)
		int32_t L_0 = ___0_order;
		String_t* L_1 = ___1_cat;
		String_t* L_2 = ___2_msg;
		Record__ctor_m737CDD176B83A2905E1D1A6D8BC7C01430161BF3(__this, L_0, L_1, L_2, NULL);
		// buttonNames = buttons;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___6_buttons;
		__this->___buttonNames_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonNames_5), (void*)L_3);
		// fixMethod = fix;
		FixMethodDelegate_t1ABFD1D51A08108AB0FF4995D1725EBA67975A6F* L_4 = ___3_fix;
		__this->___fixMethod_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fixMethod_3), (void*)L_4);
		// targetObject = target;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___4_target;
		__this->___targetObject_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObject_4), (void*)L_5);
		// editModeRequired = editRequired;
		bool L_6 = ___5_editRequired;
		__this->___editModeRequired_6 = L_6;
		// complete = false;
		__this->___complete_7 = (bool)0;
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
// System.Void UnityEngine.EventSystems.OVRInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule__ctor_m9F284E36BA8F046C6BB76C7C7A1D5246609DE102 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OVRInput.Button joyPadClickButton = OVRInput.Button.One;
		__this->___joyPadClickButton_19 = 1;
		// public KeyCode gazeClickKey = KeyCode.Space;
		__this->___gazeClickKey_20 = ((int32_t)32);
		// public bool useRightStickScroll = true;
		__this->___useRightStickScroll_22 = (bool)1;
		// public float rightStickDeadZone = 0.15f;
		__this->___rightStickDeadZone_23 = (0.150000006f);
		// public bool useSwipeScroll = true;
		__this->___useSwipeScroll_24 = (bool)1;
		// public float swipeDragThreshold = 2;
		__this->___swipeDragThreshold_25 = (2.0f);
		// public float swipeDragScale = 1f;
		__this->___swipeDragScale_26 = (1.0f);
		// public float angleDragThreshold = 1;
		__this->___angleDragThreshold_29 = (1.0f);
		// private float m_SpherecastRadius = 1.0f;
		__this->___m_SpherecastRadius_30 = (1.0f);
		// private string m_HorizontalAxis = "Horizontal";
		__this->___m_HorizontalAxis_34 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalAxis_34), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// private string m_VerticalAxis = "Vertical";
		__this->___m_VerticalAxis_35 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalAxis_35), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// private string m_SubmitButton = "Submit";
		__this->___m_SubmitButton_36 = _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SubmitButton_36), (void*)_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		// private string m_CancelButton = "Cancel";
		__this->___m_CancelButton_37 = _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelButton_37), (void*)_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		// private float m_InputActionsPerSecond = 10;
		__this->___m_InputActionsPerSecond_38 = (10.0f);
		// protected Dictionary<int, OVRPointerEventData> m_VRRayPointerData = new Dictionary<int, OVRPointerEventData>();
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_0 = (Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B*)il2cpp_codegen_object_new(Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989(L_0, Dictionary_2__ctor_m945703AD572432985F6A555BBE2C516D84D78989_RuntimeMethod_var);
		__this->___m_VRRayPointerData_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VRRayPointerData_40), (void*)L_0);
		// private readonly MouseState m_MouseState = new MouseState();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_1 = (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09*)il2cpp_codegen_object_new(MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MouseState__ctor_mF4A8041A86E50D91202770E73CE0DAF12BB207D9(L_1, NULL);
		__this->___m_MouseState_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MouseState_41), (void*)L_1);
		// protected OVRInputModule()
		PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.EventSystems.OVRInputModule/InputMode UnityEngine.EventSystems.OVRInputModule::get_inputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRInputModule_get_inputMode_m703F87EE86EB8904C748AAB9F3845AE4E27C0449 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return InputMode.Mouse; }
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::get_allowActivationOnMobileDevice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_get_allowActivationOnMobileDevice_m01129453E7D13735211F8F975C7CE4344A3292DA (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_AllowActivationOnMobileDevice; }
		bool L_0 = __this->___m_AllowActivationOnMobileDevice_39;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_allowActivationOnMobileDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_allowActivationOnMobileDevice_m6299794725C1183B18933AFC121512F941696F96 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_AllowActivationOnMobileDevice = value; }
		bool L_0 = ___0_value;
		__this->___m_AllowActivationOnMobileDevice_39 = L_0;
		// set { m_AllowActivationOnMobileDevice = value; }
		return;
	}
}
// System.Single UnityEngine.EventSystems.OVRInputModule::get_inputActionsPerSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OVRInputModule_get_inputActionsPerSecond_m1D908DC9F877C2174C2F7286C2EE0C1F3152AD67 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InputActionsPerSecond; }
		float L_0 = __this->___m_InputActionsPerSecond_38;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_inputActionsPerSecond(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_inputActionsPerSecond_m40445C073981556ACCEB8A9FB364837D7AA8E32E (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_InputActionsPerSecond = value; }
		float L_0 = ___0_value;
		__this->___m_InputActionsPerSecond_38 = L_0;
		// set { m_InputActionsPerSecond = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_horizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_horizontalAxis_m2ABAD368719FD1D795E539046FF537781A94FDEB (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_HorizontalAxis; }
		String_t* L_0 = __this->___m_HorizontalAxis_34;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_horizontalAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_horizontalAxis_mC1ACF279E38A74A00E39AC82457FD67016CE5FDC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_HorizontalAxis = value; }
		String_t* L_0 = ___0_value;
		__this->___m_HorizontalAxis_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalAxis_34), (void*)L_0);
		// set { m_HorizontalAxis = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_verticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_verticalAxis_m4D38ADE8D09F62B65DD7C6D2DAFE7B4CAC0772F1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_VerticalAxis; }
		String_t* L_0 = __this->___m_VerticalAxis_35;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_verticalAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_verticalAxis_m0FD387FB0CA03DBD7673389702497B3A5D582B69 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_VerticalAxis = value; }
		String_t* L_0 = ___0_value;
		__this->___m_VerticalAxis_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalAxis_35), (void*)L_0);
		// set { m_VerticalAxis = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_submitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_submitButton_mB419D3F4EB6BEA013A8258423BECCE1C53F8592A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_SubmitButton; }
		String_t* L_0 = __this->___m_SubmitButton_36;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_submitButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_submitButton_m79894AD3C370FA5E3762E7B99B212CD7CFC6488B (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_SubmitButton = value; }
		String_t* L_0 = ___0_value;
		__this->___m_SubmitButton_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SubmitButton_36), (void*)L_0);
		// set { m_SubmitButton = value; }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRInputModule::get_cancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRInputModule_get_cancelButton_m75EA72B209DF45390BC74319C81BD2E7F61D0B3D (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CancelButton; }
		String_t* L_0 = __this->___m_CancelButton_37;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::set_cancelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_set_cancelButton_m439529CB954D799F5548E0E3C9E1ADEBBA130172 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_CancelButton = value; }
		String_t* L_0 = ___0_value;
		__this->___m_CancelButton_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CancelButton_37), (void*)L_0);
		// set { m_CancelButton = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::UpdateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_UpdateModule_m1FE521EFA9268EDD9FDE4B2F1AAE33ED56AEF66E (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// m_LastMousePosition = m_MousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_MousePosition_33;
		__this->___m_LastMousePosition_32 = L_0;
		// m_MousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___m_MousePosition_33 = L_2;
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsModuleSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsModuleSupported_m7B9DE0BA7E25485387B5C2E3D9F4ECC3B0573251 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// return m_AllowActivationOnMobileDevice || Input.mousePresent;
		bool L_0 = __this->___m_AllowActivationOnMobileDevice_39;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		bool L_1;
		L_1 = Input_get_mousePresent_mAD77FFD987CD5B998AFAD4DAECADBC76034026BF(NULL);
		return L_1;
	}

IL_000e:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldActivateModule_mA012158257C8F2608D97BD3F4754BA8F9DF5AFED (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!base.ShouldActivateModule())
		bool L_0;
		L_0 = BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// var shouldActivate = Input.GetButtonDown(m_SubmitButton);
		String_t* L_1 = __this->___m_SubmitButton_36;
		bool L_2;
		L_2 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_1, NULL);
		// shouldActivate |= Input.GetButtonDown(m_CancelButton);
		String_t* L_3 = __this->___m_CancelButton_37;
		bool L_4;
		L_4 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_3, NULL);
		// shouldActivate |= !Mathf.Approximately(Input.GetAxisRaw(m_HorizontalAxis), 0.0f);
		String_t* L_5 = __this->___m_HorizontalAxis_34;
		float L_6;
		L_6 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_5, NULL);
		bool L_7;
		L_7 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_6, (0.0f), NULL);
		// shouldActivate |= !Mathf.Approximately(Input.GetAxisRaw(m_VerticalAxis), 0.0f);
		String_t* L_8 = __this->___m_VerticalAxis_35;
		float L_9;
		L_9 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_8, NULL);
		bool L_10;
		L_10 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_9, (0.0f), NULL);
		// shouldActivate |= (m_MousePosition - m_LastMousePosition).sqrMagnitude > 0.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___m_MousePosition_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___m_LastMousePosition_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_12, NULL);
		V_0 = L_13;
		float L_14;
		L_14 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		// shouldActivate |= Input.GetMouseButtonDown(0);
		bool L_15;
		L_15 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		// return shouldActivate;
		return (bool)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_2|(int32_t)L_4))|((((int32_t)L_7) == ((int32_t)0))? 1 : 0)))|((((int32_t)L_10) == ((int32_t)0))? 1 : 0)))|((((float)L_14) > ((float)(0.0f)))? 1 : 0)))|(int32_t)L_15));
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ActivateModule_m62AF1A8B1D2224058DB2E7BC312BEAE28DCCBAC3 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// base.ActivateModule();
		BaseInputModule_ActivateModule_m2C693E95727E13FDF06D54FA8762A040175AC3BA(__this, NULL);
		// m_MousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_0, NULL);
		__this->___m_MousePosition_33 = L_1;
		// m_LastMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		__this->___m_LastMousePosition_32 = L_3;
		// var toSelect = eventSystem.currentSelectedGameObject;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_4, NULL);
		V_0 = L_5;
		// if (toSelect == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// toSelect = eventSystem.firstSelectedGameObject;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8;
		L_8 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline(L_8, NULL);
		V_0 = L_9;
	}

IL_0047:
	{
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10;
		L_10 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_12;
		L_12 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		NullCheck(L_10);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_DeactivateModule_m57CD320E3D3BA8D6B64BD69F15F5B35E6E2597DB (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	{
		// base.DeactivateModule();
		BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D(__this, NULL);
		// ClearSelection();
		OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendSubmitEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// var data = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_3;
		L_3 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_3;
		// if (Input.GetButtonDown(m_SubmitButton))
		String_t* L_4 = __this->___m_SubmitButton_36;
		bool L_5;
		L_5 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_4, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_6, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* L_9;
		L_9 = ExecuteEvents_get_submitHandler_mDCAAA40F0F6AEA385B375C1839B4DC37E5FC4A7A_inline(NULL);
		bool L_10;
		L_10 = ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC(L_7, L_8, L_9, ExecuteEvents_Execute_TisISubmitHandler_t284A0ACB300A060611C40F4E200B378CED930B75_mA153EBDD6059AC5FF4C3ADD0A0628D816CD112CC_RuntimeMethod_var);
	}

IL_0040:
	{
		// if (Input.GetButtonDown(m_CancelButton))
		String_t* L_11 = __this->___m_CancelButton_37;
		bool L_12;
		L_12 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_11, NULL);
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_13;
		L_13 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_13, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* L_16;
		L_16 = ExecuteEvents_get_cancelHandler_mBCDFD10C95FC2BBC5DC5A512FEA1BBEECC2DAE12_inline(NULL);
		bool L_17;
		L_17 = ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0(L_14, L_15, L_16, ExecuteEvents_Execute_TisICancelHandler_t38E5C3314DB0B186ED23AC3FD6A774EDEC323244_m6BCE3E1FAE7620DC9F22722FA5CCE5AB35BAA5B0_RuntimeMethod_var);
	}

IL_0064:
	{
		// return data.used;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_18);
		return L_19;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::AllowMoveEventProcessing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, float ___0_time, const RuntimeMethod* method) 
{
	{
		// bool allow = Input.GetButtonDown(m_HorizontalAxis);
		String_t* L_0 = __this->___m_HorizontalAxis_34;
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_0, NULL);
		// allow |= Input.GetButtonDown(m_VerticalAxis);
		String_t* L_2 = __this->___m_VerticalAxis_35;
		bool L_3;
		L_3 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_2, NULL);
		// allow |= (time > m_NextAction);
		float L_4 = ___0_time;
		float L_5 = __this->___m_NextAction_31;
		// return allow;
		return (bool)((int32_t)(((int32_t)((int32_t)L_1|(int32_t)L_3))|((((float)L_4) > ((float)L_5))? 1 : 0)));
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetRawMoveVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 move = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// move.x = Input.GetAxisRaw(m_HorizontalAxis);
		String_t* L_1 = __this->___m_HorizontalAxis_34;
		float L_2;
		L_2 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_1, NULL);
		(&V_0)->___x_0 = L_2;
		// move.y = Input.GetAxisRaw(m_VerticalAxis);
		String_t* L_3 = __this->___m_VerticalAxis_35;
		float L_4;
		L_4 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_3, NULL);
		(&V_0)->___y_1 = L_4;
		// if (Input.GetButtonDown(m_HorizontalAxis))
		String_t* L_5 = __this->___m_HorizontalAxis_34;
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_5, NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		// if (move.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___x_0;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->___x_0 = (-1.0f);
	}

IL_0050:
	{
		// if (move.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->___x_0 = (1.0f);
	}

IL_0069:
	{
		// if (Input.GetButtonDown(m_VerticalAxis))
		String_t* L_11 = __this->___m_VerticalAxis_35;
		bool L_12;
		L_12 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_11, NULL);
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		// if (move.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->___y_1 = (-1.0f);
	}

IL_008f:
	{
		// if (move.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___y_1;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->___y_1 = (1.0f);
	}

IL_00a8:
	{
		// return move;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendMoveEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* V_2 = NULL;
	{
		// float time = Time.unscaledTime;
		float L_0;
		L_0 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		V_0 = L_0;
		// if (!AllowMoveEventProcessing(time))
		float L_1 = V_0;
		bool L_2;
		L_2 = OVRInputModule_AllowMoveEventProcessing_mCE84D054A5F4C27EFBACAAD16D1EDCA6F524F508(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// Vector2 movement = GetRawMoveVector();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = OVRInputModule_GetRawMoveVector_mAD07DA87FE40D256FAD36721214E8E5F554BC605(__this, NULL);
		V_1 = L_3;
		// var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		float L_7 = L_6.___y_1;
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_8;
		L_8 = VirtualFuncInvoker3< AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938*, float, float, float >::Invoke(18 /* UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single) */, __this, L_5, L_7, (0.600000024f));
		V_2 = L_8;
		// if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
		//     || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_9 = V_2;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline(L_9, NULL);
		float L_11 = L_10.___x_0;
		bool L_12;
		L_12 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_11, (0.0f), NULL);
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_13 = V_2;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline(L_13, NULL);
		float L_15 = L_14.___y_1;
		bool L_16;
		L_16 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_15, (0.0f), NULL);
		if (L_16)
		{
			goto IL_0075;
		}
	}

IL_005e:
	{
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_17;
		L_17 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_17, NULL);
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* L_20;
		L_20 = ExecuteEvents_get_moveHandler_mF717824AB0018BBED3C2DF3C67486E3B2B3836D2_inline(NULL);
		bool L_21;
		L_21 = ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA(L_18, L_19, L_20, ExecuteEvents_Execute_TisIMoveHandler_t6C9BB42118BAEEDF258B967391CCCD6A5C7976AB_m77205DFCC4110B95CC241F556BE89F612EFFD2CA_RuntimeMethod_var);
	}

IL_0075:
	{
		// m_NextAction = time + 1f / m_InputActionsPerSecond;
		float L_22 = V_0;
		float L_23 = __this->___m_InputActionsPerSecond_38;
		__this->___m_NextAction_31 = ((float)il2cpp_codegen_add(L_22, ((float)((1.0f)/L_23))));
		// return axisEventData.used;
		AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* L_24 = V_2;
		NullCheck(L_24);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_24);
		return L_25;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::SendUpdateEventToSelectedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// var data = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_3;
		L_3 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_3;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_4, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* L_7;
		L_7 = ExecuteEvents_get_updateSelectedHandler_m8AF7543437082AD4F5690AAA77F2623AE28C3D09_inline(NULL);
		bool L_8;
		L_8 = ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E(L_5, L_6, L_7, ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m8AFB13536731ABE80F6AE964DA907EE6B27F055E_RuntimeMethod_var);
		// return data.used;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_9);
		return L_10;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	{
		// var pointerEvent = data.buttonData;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_0 = ___0_data;
		NullCheck(L_0);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = L_0->___buttonData_1;
		V_0 = L_1;
		// var currentOverGo = pointerEvent.pointerCurrentRaycast.gameObject;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		NullCheck(L_2);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_3;
		L_3 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_2, NULL);
		V_2 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_2), NULL);
		V_1 = L_4;
		// if (data.PressedThisFrame())
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_5 = ___0_data;
		NullCheck(L_5);
		bool L_6;
		L_6 = MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D(L_5, NULL);
		if (!L_6)
		{
			goto IL_0129;
		}
	}
	{
		// pointerEvent.eligibleForClick = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = V_0;
		NullCheck(L_7);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_7, (bool)1, NULL);
		// pointerEvent.delta = Vector2.zero;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_8);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_8, L_9, NULL);
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_0;
		NullCheck(L_10);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_10, (bool)0, NULL);
		// pointerEvent.useDragThreshold = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = V_0;
		NullCheck(L_11);
		PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline(L_11, (bool)1, NULL);
		// pointerEvent.pressPosition = pointerEvent.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = V_0;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_13, NULL);
		NullCheck(L_12);
		PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_12, L_14, NULL);
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = V_0;
		bool L_16;
		L_16 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_15, NULL);
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		// pointerEvent.SetSwipeStart(Input.mousePosition);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5(L_17, L_19, NULL);
	}

IL_0065:
	{
		// pointerEvent.pointerPressRaycast = pointerEvent.pointerCurrentRaycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_20 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_21 = V_0;
		NullCheck(L_21);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_22;
		L_22 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_21, NULL);
		NullCheck(L_20);
		PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline(L_20, L_22, NULL);
		// DeselectIfSelectionChanged(currentOverGo, pointerEvent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = V_0;
		PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B(__this, L_23, L_24, NULL);
		// var newPressed =
		//     ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.pointerDownHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_27;
		L_27 = ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C(L_25, L_26, L_27, ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mF031AC46543C02039764EDB1B0673DFA36B1F58C_RuntimeMethod_var);
		V_3 = L_28;
		// if (newPressed == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_0096;
		}
	}
	{
		// newPressed = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E(L_31, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		V_3 = L_32;
	}

IL_0096:
	{
		// float time = Time.unscaledTime;
		float L_33;
		L_33 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		V_4 = L_33;
		// if (newPressed == pointerEvent.lastPress)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_3;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_35 = V_0;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00e0;
		}
	}
	{
		// var diffTime = time - pointerEvent.clickTime;
		float L_38 = V_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_39 = V_0;
		NullCheck(L_39);
		float L_40;
		L_40 = PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline(L_39, NULL);
		// if (diffTime < 0.3f)
		if ((!(((float)((float)il2cpp_codegen_subtract(L_38, L_40))) < ((float)(0.300000012f)))))
		{
			goto IL_00cf;
		}
	}
	{
		// ++pointerEvent.clickCount;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_41 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline(L_42, NULL);
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		NullCheck(L_42);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_42, L_44, NULL);
		goto IL_00d6;
	}

IL_00cf:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_45 = V_0;
		NullCheck(L_45);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_45, 1, NULL);
	}

IL_00d6:
	{
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_46 = V_0;
		float L_47 = V_4;
		NullCheck(L_46);
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_46, L_47, NULL);
		goto IL_00e7;
	}

IL_00e0:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_48 = V_0;
		NullCheck(L_48);
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_48, 1, NULL);
	}

IL_00e7:
	{
		// pointerEvent.pointerPress = newPressed;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_49 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_3;
		NullCheck(L_49);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_49, L_50, NULL);
		// pointerEvent.rawPointerPress = currentOverGo;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_51 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_1;
		NullCheck(L_51);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_51, L_52, NULL);
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_53 = V_0;
		float L_54 = V_4;
		NullCheck(L_53);
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_53, L_54, NULL);
		// pointerEvent.pointerDrag = ExecuteEvents.GetEventHandler<IDragHandler>(currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_55 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA(L_56, ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m9AA4E18082F53C60962F70D75570F1D400C37FBA_RuntimeMethod_var);
		NullCheck(L_55);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_55, L_57, NULL);
		// if (pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_58 = V_0;
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59;
		L_59 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_58, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0129;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent,
		//     ExecuteEvents.initializePotentialDrag);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_61 = V_0;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_61, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_63 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* L_64;
		L_64 = ExecuteEvents_get_initializePotentialDrag_m16F4CD40448FB1B78F6683AA26A9CC574F48AFBD_inline(NULL);
		bool L_65;
		L_65 = ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C(L_62, L_63, L_64, ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mABD9E1ECC8C04235760B3855DF03F2308F62071C_RuntimeMethod_var);
	}

IL_0129:
	{
		// if (data.ReleasedThisFrame())
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_66 = ___0_data;
		NullCheck(L_66);
		bool L_67;
		L_67 = MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51(L_66, NULL);
		if (!L_67)
		{
			goto IL_01fd;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerUpHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_68 = V_0;
		NullCheck(L_68);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(L_68, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_70 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_71;
		L_71 = ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline(NULL);
		bool L_72;
		L_72 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6(L_69, L_70, L_71, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		// var pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E(L_73, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m3363BED905E60A4545A8CA5B8C68BA709E99536E_RuntimeMethod_var);
		V_6 = L_74;
		// if (pointerEvent.pointerPress == pointerUpHandler && pointerEvent.eligibleForClick)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_75 = V_0;
		NullCheck(L_75);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(L_75, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_76, L_77, NULL);
		if (!L_78)
		{
			goto IL_0179;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_79 = V_0;
		NullCheck(L_79);
		bool L_80;
		L_80 = PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline(L_79, NULL);
		if (!L_80)
		{
			goto IL_0179;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerClickHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_81 = V_0;
		NullCheck(L_81);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(L_81, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_83 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_84;
		L_84 = ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline(NULL);
		bool L_85;
		L_85 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6(L_82, L_83, L_84, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m024FB23AA1DBB1B7A5E1935FA35A1E4FF57AC5F6_RuntimeMethod_var);
		goto IL_0194;
	}

IL_0179:
	{
		// else if (pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_86 = V_0;
		NullCheck(L_86);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87;
		L_87 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_87, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_88)
		{
			goto IL_0194;
		}
	}
	{
		// ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.dropHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_90 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_91;
		L_91 = ExecuteEvents_get_dropHandler_m8E00FA7361DE68780ACEB365E6B14206A2180D03_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57(L_89, L_90, L_91, ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m0C0E2A729F88D6AB5AC2B4FD9C4E33D181A52A57_RuntimeMethod_var);
	}

IL_0194:
	{
		// pointerEvent.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_93 = V_0;
		NullCheck(L_93);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_93, (bool)0, NULL);
		// pointerEvent.pointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_94 = V_0;
		NullCheck(L_94);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_94, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// pointerEvent.rawPointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_95 = V_0;
		NullCheck(L_95);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_95, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// if (pointerEvent.pointerDrag != null && pointerEvent.dragging)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_96 = V_0;
		NullCheck(L_96);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97;
		L_97 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_96, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_97, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_98)
		{
			goto IL_01d1;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_99 = V_0;
		NullCheck(L_99);
		bool L_100;
		L_100 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_99, NULL);
		if (!L_100)
		{
			goto IL_01d1;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.endDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_101 = V_0;
		NullCheck(L_101);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102;
		L_102 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_101, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_103 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_104;
		L_104 = ExecuteEvents_get_endDragHandler_mE78FEEEAE114635E416FF1FE33C851E62B60555B_inline(NULL);
		bool L_105;
		L_105 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E(L_102, L_103, L_104, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m6AA443D4F53AF0FEBAC269F761A158635243467E_RuntimeMethod_var);
	}

IL_01d1:
	{
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_106 = V_0;
		NullCheck(L_106);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_106, (bool)0, NULL);
		// pointerEvent.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_107 = V_0;
		NullCheck(L_107);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_107, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// if (currentOverGo != pointerEvent.pointerEnter)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_109 = V_0;
		NullCheck(L_109);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110;
		L_110 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_109, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_111;
		L_111 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_108, L_110, NULL);
		if (!L_111)
		{
			goto IL_01fd;
		}
	}
	{
		// HandlePointerExitAndEnter(pointerEvent, null);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_112 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_112, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// HandlePointerExitAndEnter(pointerEvent, currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_113 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114 = V_1;
		BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_113, L_114, NULL);
	}

IL_01fd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessMouseEvent(UnityEngine.EventSystems.PointerInputModule/MouseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___0_mouseData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var pressed = mouseData.AnyPressesThisFrame();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_0 = ___0_mouseData;
		NullCheck(L_0);
		bool L_1;
		L_1 = MouseState_AnyPressesThisFrame_m4887FF61D58D641496B95C83710C8A4E841970F3(L_0, NULL);
		// var released = mouseData.AnyReleasesThisFrame();
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_2 = ___0_mouseData;
		NullCheck(L_2);
		bool L_3;
		L_3 = MouseState_AnyReleasesThisFrame_m4FBA37A12735418AD0970F11BC44850517B05E93(L_2, NULL);
		V_0 = L_3;
		// var leftButtonData = mouseData.GetButtonState(PointerEventData.InputButton.Left).eventData;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_4 = ___0_mouseData;
		NullCheck(L_4);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_5;
		L_5 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_4, 0, NULL);
		NullCheck(L_5);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_6;
		L_6 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline(L_5, NULL);
		V_1 = L_6;
		// if (!UseMouse(pressed, released, leftButtonData.buttonData))
		bool L_7 = V_0;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_8 = V_1;
		NullCheck(L_8);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = L_8->___buttonData_1;
		bool L_10;
		L_10 = OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710(L_1, L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// ProcessMousePress(leftButtonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_11 = V_1;
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_11, NULL);
		// ProcessMove(leftButtonData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_12 = V_1;
		NullCheck(L_12);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = L_12->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(29 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData) */, __this, L_13);
		// ProcessDrag(leftButtonData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_14 = V_1;
		NullCheck(L_14);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = L_14->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_15);
		// ProcessMousePress(mouseData.GetButtonState(PointerEventData.InputButton.Right).eventData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_16 = ___0_mouseData;
		NullCheck(L_16);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_17;
		L_17 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_16, 1, NULL);
		NullCheck(L_17);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_18;
		L_18 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline(L_17, NULL);
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_18, NULL);
		// ProcessDrag(mouseData.GetButtonState(PointerEventData.InputButton.Right).eventData.buttonData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_19 = ___0_mouseData;
		NullCheck(L_19);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_20;
		L_20 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_19, 1, NULL);
		NullCheck(L_20);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_21;
		L_21 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline(L_20, NULL);
		NullCheck(L_21);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_22 = L_21->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_22);
		// ProcessMousePress(mouseData.GetButtonState(PointerEventData.InputButton.Middle).eventData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_23 = ___0_mouseData;
		NullCheck(L_23);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_24;
		L_24 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_23, 2, NULL);
		NullCheck(L_24);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_25;
		L_25 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline(L_24, NULL);
		OVRInputModule_ProcessMousePress_m8FB12642E4586D7C5F71ECFA5E56ABE3FFE834E9(__this, L_25, NULL);
		// ProcessDrag(mouseData.GetButtonState(PointerEventData.InputButton.Middle).eventData.buttonData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_26 = ___0_mouseData;
		NullCheck(L_26);
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_27;
		L_27 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_26, 2, NULL);
		NullCheck(L_27);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_28;
		L_28 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline(L_27, NULL);
		NullCheck(L_28);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_29 = L_28->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_29);
		// if (!Mathf.Approximately(leftButtonData.buttonData.scrollDelta.sqrMagnitude, 0.0f))
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_30 = V_1;
		NullCheck(L_30);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_31 = L_30->___buttonData_1;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_31, NULL);
		V_2 = L_32;
		float L_33;
		L_33 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_2), NULL);
		bool L_34;
		L_34 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_33, (0.0f), NULL);
		if (L_34)
		{
			goto IL_00e2;
		}
	}
	{
		// var scrollHandler = ExecuteEvents.GetEventHandler<IScrollHandler>(
		//     leftButtonData.buttonData.pointerCurrentRaycast.gameObject);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_35 = V_1;
		NullCheck(L_35);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_36 = L_35->___buttonData_1;
		NullCheck(L_36);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_37;
		L_37 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_36, NULL);
		V_3 = L_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_3), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E(L_38, ExecuteEvents_GetEventHandler_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m3BFE4214B6075DAE2F291E508DC912DC72262D2E_RuntimeMethod_var);
		// ExecuteEvents.ExecuteHierarchy(scrollHandler, leftButtonData.buttonData, ExecuteEvents.scrollHandler);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_40 = V_1;
		NullCheck(L_40);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_41 = L_40->___buttonData_1;
		EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* L_42;
		L_42 = ExecuteEvents_get_scrollHandler_m51E902070611D3F81AD5F1F5762AE2C48E84AFE2_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9(L_39, L_41, L_42, ExecuteEvents_ExecuteHierarchy_TisIScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F_m764A9EE16005FFF9BB7A28EF762E6EB9CFDDA7B9_RuntimeMethod_var);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_Process_mAD086AA91AE7346006E455F117A91170045BB53A (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool usedEvent = SendUpdateEventToSelectedObject();
		bool L_0;
		L_0 = OVRInputModule_SendUpdateEventToSelectedObject_mF799E28F265830EDBFC991825BEB97D3448472C1(__this, NULL);
		V_0 = L_0;
		// if (eventSystem.sendNavigationEvents)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSystem_get_sendNavigationEvents_m8BA21E58E633B2C5B477E49DAABAD3C97A8158AF_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if (!usedEvent)
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// usedEvent |= SendMoveEventToSelectedObject();
		bool L_4 = V_0;
		bool L_5;
		L_5 = OVRInputModule_SendMoveEventToSelectedObject_mF3C86101342F589244CDA3984DAAEC291C693081(__this, NULL);
		V_0 = (bool)((int32_t)((int32_t)L_4|(int32_t)L_5));
	}

IL_0020:
	{
		// if (!usedEvent)
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_002a;
		}
	}
	{
		// SendSubmitEventToSelectedObject();
		bool L_7;
		L_7 = OVRInputModule_SendSubmitEventToSelectedObject_mBCBAAAC7FE36D0C8AC77C333EC6376C0BA13A00A(__this, NULL);
	}

IL_002a:
	{
		// ProcessMouseEvent(GetGazePointerData());
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_8;
		L_8 = VirtualFuncInvoker0< MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* >::Invoke(31 /* UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetGazePointerData() */, __this);
		OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF(__this, L_8, NULL);
		// ProcessMouseEvent(GetCanvasPointerData());
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_9;
		L_9 = OVRInputModule_GetCanvasPointerData_mA781BE0613EB11DCE69F0ECC0079443A7DCB15E4(__this, NULL);
		OVRInputModule_ProcessMouseEvent_mEF8F3DCD9DEBD00901217A431B8ADD2D15C007BF(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_UseMouse_mF84F562B4F48BD85BC13A20D9C231DDEF0C9B710 (bool ___0_pressed, bool ___1_released, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___2_pointerData, const RuntimeMethod* method) 
{
	{
		// if (pressed || released || IsPointerMoving(pointerData) || pointerData.IsScrolling())
		bool L_0 = ___0_pressed;
		bool L_1 = ___1_released;
		if (((int32_t)((int32_t)L_0|(int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___2_pointerData;
		bool L_3;
		L_3 = OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186(L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___2_pointerData;
		NullCheck(L_4);
		bool L_5;
		L_5 = PointerEventData_IsScrolling_mFB78E050A248CDF5221482334808B82500D0A564(L_4, NULL);
		if (!L_5)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return true;
		return (bool)1;
	}

IL_0017:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.OVRPointerEventData,UnityEngine.EventSystems.OVRPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___0_from, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* ___1_to, const RuntimeMethod* method) 
{
	{
		// @to.position = @from.position;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_0 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = ___0_from;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		NullCheck(L_0);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_0, L_2, NULL);
		// @to.delta = @from.delta;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_3 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_4 = ___0_from;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		NullCheck(L_3);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_3, L_5, NULL);
		// @to.scrollDelta = @from.scrollDelta;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_6 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_7 = ___0_from;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_7, NULL);
		NullCheck(L_6);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_6, L_8, NULL);
		// @to.pointerCurrentRaycast = @from.pointerCurrentRaycast;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_9 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10 = ___0_from;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_10, NULL);
		NullCheck(L_9);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_9, L_11, NULL);
		// @to.pointerEnter = @from.pointerEnter;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_12 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_13 = ___0_from;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_13, NULL);
		NullCheck(L_12);
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_12, L_14, NULL);
		// @to.worldSpaceRay = @from.worldSpaceRay;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_15 = ___1_to;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_16 = ___0_from;
		NullCheck(L_16);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16->___worldSpaceRay_33;
		NullCheck(L_15);
		L_15->___worldSpaceRay_33 = L_17;
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::CopyFromTo(UnityEngine.EventSystems.PointerEventData,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_from, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___1_to, const RuntimeMethod* method) 
{
	{
		// @to.position = @from.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___1_to;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_from;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		NullCheck(L_0);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_0, L_2, NULL);
		// @to.delta = @from.delta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___1_to;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_from;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		NullCheck(L_3);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_3, L_5, NULL);
		// @to.scrollDelta = @from.scrollDelta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___1_to;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___0_from;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline(L_7, NULL);
		NullCheck(L_6);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_6, L_8, NULL);
		// @to.pointerCurrentRaycast = @from.pointerCurrentRaycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___1_to;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___0_from;
		NullCheck(L_10);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_11;
		L_11 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_10, NULL);
		NullCheck(L_9);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_9, L_11, NULL);
		// @to.pointerEnter = @from.pointerEnter;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___1_to;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___0_from;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_13, NULL);
		NullCheck(L_12);
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::GetPointerData(System.Int32,UnityEngine.EventSystems.OVRPointerEventData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, int32_t ___0_id, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** ___1_data, bool ___2_create, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VRRayPointerData.TryGetValue(id, out data) && create)
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_0 = __this->___m_VRRayPointerData_40;
		int32_t L_1 = ___0_id;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_2 = ___1_data;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447(L_0, L_1, L_2, Dictionary_2_TryGetValue_m2A24573C40622EB90B3DEFD32113AABC59940447_RuntimeMethod_var);
		bool L_4 = ___2_create;
		if (!((int32_t)(((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_0038;
		}
	}
	{
		// data = new OVRPointerEventData(eventSystem)
		// {
		//     pointerId = id,
		// };
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_5 = ___1_data;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_7 = (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)il2cpp_codegen_object_new(OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9(L_7, L_6, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_8 = L_7;
		int32_t L_9 = ___0_id;
		NullCheck(L_8);
		PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline(L_8, L_9, NULL);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_8);
		// m_VRRayPointerData.Add(id, data);
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_10 = __this->___m_VRRayPointerData_40;
		int32_t L_11 = ___0_id;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D** L_12 = ___1_data;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_13 = *((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D**)L_12);
		NullCheck(L_10);
		Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA(L_10, L_11, L_13, Dictionary_2_Add_m512E97E36FC083FBFAFE025842BE8237F6350ADA_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ClearSelection_m8BB4DB17CCE3F2897281E77858D85C9A8E218906 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* V_0 = NULL;
	Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 V_3;
	memset((&V_3), 0, sizeof(V_3));
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_4 = NULL;
	{
		// var baseEventData = GetBaseEventData();
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0;
		L_0 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_0 = L_0;
		// foreach (var pointer in m_PointerData.Values)
		Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* L_1 = ((PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556*)__this)->___m_PointerData_15;
		NullCheck(L_1);
		ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* L_2;
		L_2 = Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC(L_1, Dictionary_2_get_Values_m3B581D1E2D9D47BCC3513DC77CC6C6F8718F13DC_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t148E30607578AED3ECC6FF3C89DD895C757B1294 L_3;
		L_3 = ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC(L_2, ValueCollection_GetEnumerator_m0124B7611A2B03F480EB52872F7A1B24F0CA6EDC_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86((&V_1), Enumerator_Dispose_m9FC32AA198E53E701EEAF271527A221A8F363A86_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002a_1;
			}

IL_001a_1:
			{
				// foreach (var pointer in m_PointerData.Values)
				PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4;
				L_4 = Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_inline((&V_1), Enumerator_get_Current_m8515E9D5662F47A89C296550439BBD4DA548AE6A_RuntimeMethod_var);
				V_2 = L_4;
				// HandlePointerExitAndEnter(pointer, null);
				PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = V_2;
				BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_5, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_002a_1:
			{
				// foreach (var pointer in m_PointerData.Values)
				bool L_6;
				L_6 = Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58((&V_1), Enumerator_MoveNext_mA415C7B94AC3728AFA7791318E9210FC5EEFAB58_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// foreach (var pointer in m_VRRayPointerData.Values)
		Dictionary_2_t9422155976AA5669B953F2FA792954DC4DFD250B* L_7 = __this->___m_VRRayPointerData_40;
		NullCheck(L_7);
		ValueCollection_t7F9AC80C05B75661CEC6285A1325DAA197C47EBB* L_8;
		L_8 = Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429(L_7, Dictionary_2_get_Values_m1E6873716F54341B48F90A1BAD7909BF8DF33429_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_tDDE6CAEF0ADF428095B69601CCBB13807ACC0392 L_9;
		L_9 = ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA(L_8, ValueCollection_GetEnumerator_m1F9346AEC811FD3F8FF694F13BAED581F93252EA_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3((&V_3), Enumerator_Dispose_m1CF97DE800C326E6EF6C7599AA385EC109C21ED3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_0056_1:
			{
				// foreach (var pointer in m_VRRayPointerData.Values)
				OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10;
				L_10 = Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_inline((&V_3), Enumerator_get_Current_mA8B955F9BDD498641D4406EF93DD9B4325F2D642_RuntimeMethod_var);
				V_4 = L_10;
				// HandlePointerExitAndEnter(pointer, null);
				OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_11 = V_4;
				BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_11, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
			}

IL_0068_1:
			{
				// foreach (var pointer in m_VRRayPointerData.Values)
				bool L_12;
				L_12 = Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B((&V_3), Enumerator_MoveNext_m66996C54FC3C3A499A738BD4A3E50CE3EAD5082B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0056_1;
				}
			}
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		// m_PointerData.Clear();
		Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* L_13 = ((PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556*)__this)->___m_PointerData_15;
		NullCheck(L_13);
		Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9(L_13, Dictionary_2_Clear_mBB95A511CAA4D6BCF1D6EC54722BCA4DA4B37CF9_RuntimeMethod_var);
		// eventSystem.SetSelectedGameObject(null, baseEventData);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14;
		L_14 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_15 = V_0;
		NullCheck(L_14);
		EventSystem_SetSelectedGameObject_m9675415B7B3FE13B35E2CCB220F0C8AF04ECA173(L_14, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, L_15, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.EventSystems.OVRInputModule::GetRectTransformNormal(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rectTransform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3[] corners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// rectTransform.GetWorldCorners(corners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___0_rectTransform;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		NullCheck(L_1);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_1, L_2, NULL);
		// Vector3 BottomEdge = corners[3] - corners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		// Vector3 LeftEdge = corners[1] - corners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_15, NULL);
		V_1 = L_16;
		// rectTransform.GetWorldCorners(corners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = ___0_rectTransform;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		NullCheck(L_17);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_17, L_18, NULL);
		// return Vector3.Cross(BottomEdge, LeftEdge).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_9, L_19, NULL);
		V_2 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		return L_21;
	}
}
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetGazePointerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* OVRInputModule_GetGazePointerData_m2F1B5254C796E2677281553493A295B0AD89857F (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_0 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* V_2 = NULL;
	OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* V_3 = NULL;
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_4 = NULL;
	OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* V_5 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_10 = NULL;
	{
		// GetPointerData(kMouseLeftId, out leftData, true);
		bool L_0;
		L_0 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, (-1), (&V_0), (bool)1, NULL);
		// leftData.Reset();
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_1);
		// leftData.worldSpaceRay = new Ray(rayTransform.position, rayTransform.forward);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___rayTransform_17;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___rayTransform_17;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->___worldSpaceRay_33 = L_7;
		// leftData.scrollDelta = GetExtraScrollDelta();
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5(__this, NULL);
		NullCheck(L_8);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_8, L_9, NULL);
		// leftData.button = PointerEventData.InputButton.Left;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_10 = V_0;
		NullCheck(L_10);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_10, 0, NULL);
		// leftData.useDragThreshold = true;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_11 = V_0;
		NullCheck(L_11);
		PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline(L_11, (bool)1, NULL);
		// eventSystem.RaycastAll(leftData, m_RaycastResultCache);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_13 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_14 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_12);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_12, L_13, L_14, NULL);
		// var raycast = FindFirstRaycast(m_RaycastResultCache);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_15 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_16;
		L_16 = BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5(L_15, NULL);
		V_1 = L_16;
		// leftData.pointerCurrentRaycast = raycast;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_17 = V_0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_18 = V_1;
		NullCheck(L_17);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_17, L_18, NULL);
		// m_RaycastResultCache.Clear();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_19 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_19);
		List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline(L_19, List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		// m_Cursor.SetCursorRay(rayTransform);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_20 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___rayTransform_17;
		NullCheck(L_20);
		VirtualActionInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(4 /* System.Void OVRCursor::SetCursorRay(UnityEngine.Transform) */, L_20, L_21);
		// OVRRaycaster ovrRaycaster = raycast.module as OVRRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_22 = V_1;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_23 = L_22.___module_1;
		V_2 = ((OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182*)IsInstClass((RuntimeObject*)L_23, OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var));
		// if (ovrRaycaster)
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_00f1;
		}
	}
	{
		// leftData.position = ovrRaycaster.GetScreenPosition(raycast);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_26 = V_0;
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_27 = V_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_28 = V_1;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A(L_27, L_28, NULL);
		NullCheck(L_26);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_26, L_29, NULL);
		// RectTransform graphicRect = raycast.gameObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_1), NULL);
		NullCheck(L_30);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31;
		L_31 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_30, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		V_6 = L_31;
		// if (graphicRect != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00f1;
		}
	}
	{
		// Vector3 worldPos = raycast.worldPosition;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34.___worldPosition_9;
		V_7 = L_35;
		// Vector3 normal = GetRectTransformNormal(graphicRect);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = OVRInputModule_GetRectTransformNormal_mF03B37932F37A309381C3EBF51CAA0FE7C1BF348(L_36, NULL);
		V_8 = L_37;
		// m_Cursor.SetCursorStartDest(rayTransform.position, worldPos, normal);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_38 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___rayTransform_17;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
		NullCheck(L_38);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, L_38, L_40, L_41, L_42);
	}

IL_00f1:
	{
		// OVRPhysicsRaycaster physicsRaycaster = raycast.module as OVRPhysicsRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_43 = V_1;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_44 = L_43.___module_1;
		V_3 = ((OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7*)IsInstClass((RuntimeObject*)L_44, OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7_il2cpp_TypeInfo_var));
		// if (physicsRaycaster)
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_45 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_45, NULL);
		if (!L_46)
		{
			goto IL_018c;
		}
	}
	{
		// Vector3 position = raycast.worldPosition;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_47 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = L_47.___worldPosition_9;
		V_9 = L_48;
		// if (performSphereCastForGazepointer)
		bool L_49 = __this->___performSphereCastForGazepointer_21;
		if (!L_49)
		{
			goto IL_015c;
		}
	}
	{
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_50 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_50, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_10 = L_50;
		// physicsRaycaster.Spherecast(leftData, results, m_SpherecastRadius);
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_51 = V_3;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_52 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_53 = V_10;
		float L_54 = __this->___m_SpherecastRadius_30;
		NullCheck(L_51);
		OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945(L_51, L_52, L_53, L_54, NULL);
		// if (results.Count > 0 && results[0].distance < raycast.distance)
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_55 = V_10;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_55, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_015c;
		}
	}
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_57 = V_10;
		NullCheck(L_57);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_58;
		L_58 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_57, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		float L_59 = L_58.___distance_2;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_60 = V_1;
		float L_61 = L_60.___distance_2;
		if ((!(((float)L_59) < ((float)L_61))))
		{
			goto IL_015c;
		}
	}
	{
		// position = results[0].worldPosition;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_62 = V_10;
		NullCheck(L_62);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_63;
		L_63 = List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA(L_62, 0, List_1_get_Item_mD1048CD848E8C4A91EE63478805C4EF923CA82CA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = L_63.___worldPosition_9;
		V_9 = L_64;
	}

IL_015c:
	{
		// leftData.position = physicsRaycaster.GetScreenPos(raycast.worldPosition);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_65 = V_0;
		OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* L_66 = V_3;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_67 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = L_67.___worldPosition_9;
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84(L_66, L_68, NULL);
		NullCheck(L_65);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_65, L_69, NULL);
		// m_Cursor.SetCursorStartDest(rayTransform.position, position, raycast.worldNormal);
		OVRCursor_tC9427BFBD60354F4A80BD9129257DE67BE597E9A* L_70 = __this->___m_Cursor_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = __this->___rayTransform_17;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_9;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_74 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = L_74.___worldNormal_10;
		NullCheck(L_70);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5 /* System.Void OVRCursor::SetCursorStartDest(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3) */, L_70, L_72, L_73, L_75);
	}

IL_018c:
	{
		// GetPointerData(kMouseRightId, out rightData, true);
		bool L_76;
		L_76 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, ((int32_t)-2), (&V_4), (bool)1, NULL);
		// CopyFromTo(leftData, rightData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_77 = V_0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_78 = V_4;
		OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(__this, L_77, L_78, NULL);
		// rightData.button = PointerEventData.InputButton.Right;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_79 = V_4;
		NullCheck(L_79);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_79, 1, NULL);
		// GetPointerData(kMouseMiddleId, out middleData, true);
		bool L_80;
		L_80 = OVRInputModule_GetPointerData_m1D35FE2BEC6DF0322E533EE623C57D5D476C19D0(__this, ((int32_t)-3), (&V_5), (bool)1, NULL);
		// CopyFromTo(leftData, middleData);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_81 = V_0;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_82 = V_5;
		OVRInputModule_CopyFromTo_m7469C2E36FBE72A7109BC094DC3B19651698A691(__this, L_81, L_82, NULL);
		// middleData.button = PointerEventData.InputButton.Middle;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_83 = V_5;
		NullCheck(L_83);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_83, 2, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Left,
		//     GetGazeButtonState(), leftData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_84 = __this->___m_MouseState_41;
		int32_t L_85;
		L_85 = VirtualFuncInvoker0< int32_t >::Invoke(32 /* UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.OVRInputModule::GetGazeButtonState() */, __this);
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_86 = V_0;
		NullCheck(L_84);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_84, 0, L_85, L_86, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Right,
		//     PointerEventData.FramePressState.NotChanged, rightData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_87 = __this->___m_MouseState_41;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_88 = V_4;
		NullCheck(L_87);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_87, 1, 3, L_88, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Middle,
		//     PointerEventData.FramePressState.NotChanged, middleData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_89 = __this->___m_MouseState_41;
		OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* L_90 = V_5;
		NullCheck(L_89);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_89, 2, 3, L_90, NULL);
		// return m_MouseState;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_91 = __this->___m_MouseState_41;
		return L_91;
	}
}
// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.OVRInputModule::GetCanvasPointerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* OVRInputModule_GetCanvasPointerData_mA781BE0613EB11DCE69F0ECC0079443A7DCB15E4 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_1 = NULL;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* V_4 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// GetPointerData(kMouseLeftId, out leftData, true);
		bool L_0;
		L_0 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, (-1), (&V_0), (bool)1, NULL);
		// leftData.Reset();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_1);
		// leftData.position = Vector2.zero;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_2, L_3, NULL);
		// leftData.scrollDelta = Input.mouseScrollDelta;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		NullCheck(L_4);
		PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline(L_4, L_5, NULL);
		// leftData.button = PointerEventData.InputButton.Left;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = V_0;
		NullCheck(L_6);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_6, 0, NULL);
		// if (activeGraphicRaycaster)
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_7 = __this->___activeGraphicRaycaster_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (!L_8)
		{
			goto IL_00a6;
		}
	}
	{
		// activeGraphicRaycaster.RaycastPointer(leftData, m_RaycastResultCache);
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_9 = __this->___activeGraphicRaycaster_28;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_9);
		OVRRaycaster_RaycastPointer_m5ECFC6B6EF2F57D5DE2C07AD91CEB698CE29E4BB(L_9, L_10, L_11, NULL);
		// var raycast = FindFirstRaycast(m_RaycastResultCache);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_12 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_13;
		L_13 = BaseInputModule_FindFirstRaycast_mE07BDA14A7C9A8E3DFBFDAF449E5896597C9F6F5(L_12, NULL);
		V_3 = L_13;
		// leftData.pointerCurrentRaycast = raycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = V_0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_15 = V_3;
		NullCheck(L_14);
		PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_14, L_15, NULL);
		// m_RaycastResultCache.Clear();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_16 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
		NullCheck(L_16);
		List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline(L_16, List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		// OVRRaycaster ovrRaycaster = raycast.module as OVRRaycaster;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_17 = V_3;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_18 = L_17.___module_1;
		V_4 = ((OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182*)IsInstClass((RuntimeObject*)L_18, OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182_il2cpp_TypeInfo_var));
		// if (ovrRaycaster) // raycast may not actually contain a result
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		if (!L_20)
		{
			goto IL_00a6;
		}
	}
	{
		// Vector2 position = ovrRaycaster.GetScreenPosition(raycast);
		OVRRaycaster_t7F1DE085FFCC5957E5F9D6DDA71FA9670EFDE182* L_21 = V_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_22 = V_3;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = OVRRaycaster_GetScreenPosition_mE54FD696C615E1CFF7E7AE19F0F9B95AB084617A(L_21, L_22, NULL);
		V_5 = L_23;
		// leftData.delta = position - leftData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_5;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_26 = V_0;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_25, L_27, NULL);
		NullCheck(L_24);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_24, L_28, NULL);
		// leftData.position = position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_29 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_5;
		NullCheck(L_29);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_29, L_30, NULL);
	}

IL_00a6:
	{
		// GetPointerData(kMouseRightId, out rightData, true);
		bool L_31;
		L_31 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, ((int32_t)-2), (&V_1), (bool)1, NULL);
		// CopyFromTo(leftData, rightData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_32 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_33 = V_1;
		OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8(__this, L_32, L_33, NULL);
		// rightData.button = PointerEventData.InputButton.Right;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_34 = V_1;
		NullCheck(L_34);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_34, 1, NULL);
		// GetPointerData(kMouseMiddleId, out middleData, true);
		bool L_35;
		L_35 = PointerInputModule_GetPointerData_m8D1C52EE44136560312932072786A2B5AA2C8BE5(__this, ((int32_t)-3), (&V_2), (bool)1, NULL);
		// CopyFromTo(leftData, middleData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_36 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_37 = V_2;
		OVRInputModule_CopyFromTo_m37C59AD69F91D8C3A407B94FC6D182F9B2F035C8(__this, L_36, L_37, NULL);
		// middleData.button = PointerEventData.InputButton.Middle;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = V_2;
		NullCheck(L_38);
		PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline(L_38, 2, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Left, StateForMouseButton(0), leftData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_39 = __this->___m_MouseState_41;
		int32_t L_40;
		L_40 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 0, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_41 = V_0;
		NullCheck(L_39);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_39, 0, L_40, L_41, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Right, StateForMouseButton(1), rightData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_42 = __this->___m_MouseState_41;
		int32_t L_43;
		L_43 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_44 = V_1;
		NullCheck(L_42);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_42, 1, L_43, L_44, NULL);
		// m_MouseState.SetButtonState(PointerEventData.InputButton.Middle, StateForMouseButton(2), middleData);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_45 = __this->___m_MouseState_41;
		int32_t L_46;
		L_46 = PointerInputModule_StateForMouseButton_mED5B48F98F706160F97A26511FB82BD84DBAB0CF(__this, 2, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_47 = V_2;
		NullCheck(L_45);
		MouseState_SetButtonState_m72DA468C8D10E76923FA5F993BBDBCFFF57E4326(L_45, 2, L_46, L_47, NULL);
		// return m_MouseState;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_48 = __this->___m_MouseState_41;
		return L_48;
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::ShouldStartDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEvent, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!pointerEvent.useDragThreshold)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEvent;
		NullCheck(L_0);
		bool L_1;
		L_1 = PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (!pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_pointerEvent;
		bool L_3;
		L_3 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_2, NULL);
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		// return (pointerEvent.pressPosition - pointerEvent.position).sqrMagnitude >=
		//        eventSystem.pixelDragThreshold * eventSystem.pixelDragThreshold;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_pointerEvent;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline(L_4, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_pointerEvent;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_5, L_7, NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_10;
		L_10 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3_inline(L_10, NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
		L_12 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3_inline(L_12, NULL);
		return (bool)((((int32_t)((!(((float)L_9) >= ((float)((float)((int32_t)il2cpp_codegen_multiply(L_11, L_13))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0049:
	{
		// Vector3 cameraPos = pointerEvent.pressEventCamera.transform.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = ___0_pointerEvent;
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		V_1 = L_17;
		// Vector3 pressDir = (pointerEvent.pointerPressRaycast.worldPosition - cameraPos).normalized;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_18 = ___0_pointerEvent;
		NullCheck(L_18);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_19;
		L_19 = PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___worldPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		V_3 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		// Vector3 currentDir = (pointerEvent.pointerCurrentRaycast.worldPosition - cameraPos).normalized;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = ___0_pointerEvent;
		NullCheck(L_24);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_25;
		L_25 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25.___worldPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_27, NULL);
		V_3 = L_28;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_29;
		// return Vector3.Dot(pressDir, currentDir) < Mathf.Cos(Mathf.Deg2Rad * (angleDragThreshold));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		float L_31;
		L_31 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_23, L_30, NULL);
		float L_32 = __this->___angleDragThreshold_29;
		float L_33;
		L_33 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), L_32)));
		return (bool)((((float)L_31) < ((float)L_33))? 1 : 0);
	}
}
// System.Boolean UnityEngine.EventSystems.OVRInputModule::IsPointerMoving(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEvent, const RuntimeMethod* method) 
{
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEvent;
		bool L_1;
		L_1 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// return pointerEvent.IsPointerMoving();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_pointerEvent;
		NullCheck(L_2);
		bool L_3;
		L_3 = PointerEventData_IsPointerMoving_m281B3698E618D116F3D1E7473BADFAE5B67C834E(L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::SwipeAdjustedPosition(UnityEngine.Vector2,UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_originalPosition, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___1_pointerEvent, const RuntimeMethod* method) 
{
	{
		// return originalPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_originalPosition;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInputModule_ProcessDrag_m2782747DF3402E604A05276895FA5BA518D34F40 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Vector2 originalPosition = pointerEvent.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEvent;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_0, NULL);
		V_0 = L_1;
		// bool moving = IsPointerMoving(pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_pointerEvent;
		bool L_3;
		L_3 = OVRInputModule_IsPointerMoving_m5D57E25B238B95FDD5BE45DA3A377529345FD186(L_2, NULL);
		V_1 = L_3;
		// if (moving && pointerEvent.pointerDrag != null
		//            && !pointerEvent.dragging
		//            && ShouldStartDrag(pointerEvent))
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___0_pointerEvent;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___0_pointerEvent;
		NullCheck(L_8);
		bool L_9;
		L_9 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___0_pointerEvent;
		bool L_11;
		L_11 = OVRInputModule_ShouldStartDrag_mCF231D4DB00DDD77F5A5DCA8D35FBC1F47844AF6(__this, L_10, NULL);
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___0_pointerEvent;
		bool L_13;
		L_13 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_12, NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		// pointerEvent.position = SwipeAdjustedPosition(originalPosition, pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = ___0_pointerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_16 = ___0_pointerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC(__this, L_15, L_16, NULL);
		NullCheck(L_14);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_14, L_17, NULL);
	}

IL_0046:
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.beginDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_18 = ___0_pointerEvent;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_18, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_20 = ___0_pointerEvent;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_21;
		L_21 = ExecuteEvents_get_beginDragHandler_mB0BEAC09E4A8F31438B07FE68A5BF7267FF8C2FC_inline(NULL);
		bool L_22;
		L_22 = ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87(L_19, L_20, L_21, ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m1543843C77436B385445DCDE0E472112C8E40F87_RuntimeMethod_var);
		// pointerEvent.dragging = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_23 = ___0_pointerEvent;
		NullCheck(L_23);
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_23, (bool)1, NULL);
	}

IL_005f:
	{
		// if (pointerEvent.dragging && moving && pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = ___0_pointerEvent;
		NullCheck(L_24);
		bool L_25;
		L_25 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_24, NULL);
		bool L_26 = V_1;
		if (!((int32_t)((int32_t)L_25&(int32_t)L_26)))
		{
			goto IL_00d9;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_27 = ___0_pointerEvent;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00d9;
		}
	}
	{
		// if (pointerEvent.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_30 = ___0_pointerEvent;
		bool L_31;
		L_31 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_30, NULL);
		if (!L_31)
		{
			goto IL_008d;
		}
	}
	{
		// pointerEvent.position = SwipeAdjustedPosition(originalPosition, pointerEvent);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_32 = ___0_pointerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_34 = ___0_pointerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = OVRInputModule_SwipeAdjustedPosition_mA47A3CED9DE48B6338F6DF0D0D43245705962EEC(__this, L_33, L_34, NULL);
		NullCheck(L_32);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_32, L_35, NULL);
	}

IL_008d:
	{
		// if (pointerEvent.pointerPress != pointerEvent.pointerDrag)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_36 = ___0_pointerEvent;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(L_36, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = ___0_pointerEvent;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00c7;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerUpHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_41 = ___0_pointerEvent;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(L_41, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_43 = ___0_pointerEvent;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_44;
		L_44 = ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline(NULL);
		bool L_45;
		L_45 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6(L_42, L_43, L_44, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_mBB70745D5D17BF6402CABEFF0F52911F88C197A6_RuntimeMethod_var);
		// pointerEvent.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_46 = ___0_pointerEvent;
		NullCheck(L_46);
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_46, (bool)0, NULL);
		// pointerEvent.pointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_47 = ___0_pointerEvent;
		NullCheck(L_47);
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_47, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// pointerEvent.rawPointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_48 = ___0_pointerEvent;
		NullCheck(L_48);
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_48, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_00c7:
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.dragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_49 = ___0_pointerEvent;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_49, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_51 = ___0_pointerEvent;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_52;
		L_52 = ExecuteEvents_get_dragHandler_m9193926B9685C80C0560C2E105FF6150C4EAE507_inline(NULL);
		bool L_53;
		L_53 = ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8(L_50, L_51, L_52, ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mAE71323F63A667FE0A4F8B9B0E27C6012B28FFE8_RuntimeMethod_var);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.OVRInputModule::GetGazeButtonState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// var pressed = Input.GetKeyDown(gazeClickKey) || OVRInput.GetDown(joyPadClickButton);
		int32_t L_0 = __this->___gazeClickKey_20;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = __this->___joyPadClickButton_19;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(L_2, ((int32_t)-2147483648LL), NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		// var released = Input.GetKeyUp(gazeClickKey) || OVRInput.GetUp(joyPadClickButton);
		int32_t L_4 = __this->___gazeClickKey_20;
		bool L_5;
		L_5 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(L_4, NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6 = __this->___joyPadClickButton_19;
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = OVRInput_GetUp_m66B13613FF16CBAB8B0A77A5ADCFD1A3A68F3898(L_6, ((int32_t)-2147483648LL), NULL);
		G_B6_0 = ((int32_t)(L_7));
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		V_1 = (bool)G_B6_0;
		// if (pressed && released)
		bool L_8 = V_0;
		bool L_9 = V_1;
		if (!((int32_t)((int32_t)L_8&(int32_t)L_9)))
		{
			goto IL_0049;
		}
	}
	{
		// return PointerEventData.FramePressState.PressedAndReleased;
		return (int32_t)(2);
	}

IL_0049:
	{
		// if (pressed)
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// return PointerEventData.FramePressState.Pressed;
		return (int32_t)(0);
	}

IL_004e:
	{
		// if (released)
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		// return PointerEventData.FramePressState.Released;
		return (int32_t)(1);
	}

IL_0053:
	{
		// return PointerEventData.FramePressState.NotChanged;
		return (int32_t)(3);
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRInputModule::GetExtraScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRInputModule_GetExtraScrollDelta_mE441287D8A96D1E47BF5B28F8E61CF9CEA888AC5 (OVRInputModule_tA57D6FB43C84C28A9A6300E1B97F01703A87FD8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 scrollDelta = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// if (useRightStickScroll)
		bool L_0 = __this->___useRightStickScroll_22;
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		// Vector2 s = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = OVRInput_Get_mF4EA350D5898449529C641C72B7D440DF81180C8(2, ((int32_t)-2147483648LL), NULL);
		V_1 = L_1;
		// if (Mathf.Abs(s.x) < rightStickDeadZone) s.x = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_1;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = __this->___rightStickDeadZone_23;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		// if (Mathf.Abs(s.x) < rightStickDeadZone) s.x = 0;
		(&V_1)->___x_0 = (0.0f);
	}

IL_003b:
	{
		// if (Mathf.Abs(s.y) < rightStickDeadZone) s.y = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		float L_7 = L_6.___y_1;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9 = __this->___rightStickDeadZone_23;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_005a;
		}
	}
	{
		// if (Mathf.Abs(s.y) < rightStickDeadZone) s.y = 0;
		(&V_1)->___y_1 = (0.0f);
	}

IL_005a:
	{
		// scrollDelta = s;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		V_0 = L_10;
	}

IL_005c:
	{
		// return scrollDelta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
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
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster__ctor_m71618373897E4446CFD05055A56A540B3CB56ECD (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	{
		// protected LayerMask m_EventMask = kNoEventMaskSet;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___m_EventMask_6 = L_0;
		// protected OVRPhysicsRaycaster()
		BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Camera UnityEngine.EventSystems.OVRPhysicsRaycaster::get_eventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* OVRPhysicsRaycaster_get_eventCamera_mE2D5CE0073AD9C33B9BD5B763ADA1D878EFB9A6D (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetComponent<OVRCameraRig>().leftEyeCamera; }
		OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* L_0;
		L_0 = Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62(__this, Component_GetComponent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m077B7F6A5755E612BD0ACA0BAD8F8FCAA9FB6E62_RuntimeMethod_var);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = OVRCameraRig_get_leftEyeCamera_m1C1CA12F69226BE8B0AC3142DAF77BDED7DF27CD(L_0, NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_depth_m02C0C48F9F2D963B850188AF4FF0246C44C3464E (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return (eventCamera != null) ? (int)eventCamera.depth : 0xFFFFFF; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return ((int32_t)16777215);
	}

IL_0014:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_2, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_sortOrderPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_sortOrderPriority_m72C941C67B30A4ED8B280EB2BEB0140EE5FFC1C5 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	{
		// get { return sortOrder; }
		int32_t L_0 = __this->___sortOrder_7;
		return L_0;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return (eventCamera != null) ? eventCamera.cullingMask & m_EventMask : kNoEventMaskSet; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}

IL_0010:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___m_EventMask_6;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		return ((int32_t)(L_3&L_5));
	}
}
// UnityEngine.LayerMask UnityEngine.EventSystems.OVRPhysicsRaycaster::get_eventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB OVRPhysicsRaycaster_get_eventMask_m0B52D9DC406E35C7EEBD2ED2205CC8589DAD9AA3 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EventMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_EventMask_6;
		return L_0;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_set_eventMask_m29EBF0CDD59910195F49BD8A1609BC3DD1DC3B0D (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_EventMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		__this->___m_EventMask_6 = L_0;
		// set { m_EventMask = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Raycast_m843259975D6BF5E0BF69D226F6229BAE21488DE5 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_resultAppendList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B7_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B7_1 = NULL;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B6_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B6_1 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (!eventData.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		bool L_3;
		L_3 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// var ray = eventData.GetRay();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99(L_4, NULL);
		// float dist = eventCamera.farClipPlane - eventCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		// var hits = Physics.RaycastAll(ray, dist, finalEventMask);
		float L_10 = V_0;
		int32_t L_11;
		L_11 = OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2(__this, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_12;
		L_12 = Physics_RaycastAll_m4055619E0F7EFA04620EAA0517F8393C4EBCFE87(L_5, L_10, L_11, NULL);
		V_1 = L_12;
		// if (hits.Length > 1)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) <= ((int32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_15 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_16 = L_15;
		G_B6_0 = L_16;
		G_B6_1 = L_14;
		if (L_16)
		{
			G_B7_0 = L_16;
			G_B7_1 = L_14;
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_17 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_18 = (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*)il2cpp_codegen_object_new(Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF_RuntimeMethod_var), NULL);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_19 = L_18;
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_19);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_1;
	}

IL_0069:
	{
		Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673(G_B7_1, G_B7_0, Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
	}

IL_006e:
	{
		// if (hits.Length != 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_20 = V_1;
		NullCheck(L_20);
		if (!(((RuntimeArray*)L_20)->max_length))
		{
			goto IL_0103;
		}
	}
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		V_2 = 0;
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_21 = V_1;
		NullCheck(L_21);
		V_3 = ((int32_t)(((RuntimeArray*)L_21)->max_length));
		goto IL_00fc;
	}

IL_007d:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = hits[b].collider.gameObject,
		//     module = this,
		//     distance = hits[b].distance,
		//     index = resultAppendList.Count,
		//     worldPosition = hits[0].point,
		//     worldNormal = hits[0].normal,
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_24;
		L_24 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_inline((&V_5), L_25, NULL);
		(&V_5)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___module_1), (void*)__this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		float L_28;
		L_28 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), NULL);
		(&V_5)->___distance_2 = L_28;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_29 = ___1_resultAppendList;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_29, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_5)->___index_3 = ((float)L_30);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_31 = V_1;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_5)->___worldPosition_9 = L_32;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_33 = V_1;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_5)->___worldNormal_10 = L_34;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_35 = V_5;
		V_4 = L_35;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_36 = ___1_resultAppendList;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_37 = V_4;
		NullCheck(L_36);
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_36, L_37, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00fc:
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_007d;
		}
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster::Spherecast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPhysicsRaycaster_Spherecast_m5C0B2A941C9D1F9C92A2AD1026510DC5D64E9945 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_resultAppendList, float ___2_radius, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B7_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B7_1 = NULL;
	Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* G_B6_0 = NULL;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* G_B6_1 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (!eventData.IsVRPointer())
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		bool L_3;
		L_3 = PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5(L_2, NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		return;
	}

IL_0018:
	{
		// var ray = eventData.GetRay();
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___0_eventData;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99(L_4, NULL);
		// float dist = eventCamera.farClipPlane - eventCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_6, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_8, NULL);
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		// var hits = Physics.SphereCastAll(ray, radius, dist, finalEventMask);
		float L_10 = ___2_radius;
		float L_11 = V_0;
		int32_t L_12;
		L_12 = OVRPhysicsRaycaster_get_finalEventMask_m0870F8AB5B0021AB7BFE8A1CE5CC729E680484E2(__this, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13;
		L_13 = Physics_SphereCastAll_m0886C4624531C71A2CC6A3196B9EAEE108C17CB5(L_5, L_10, L_11, L_12, NULL);
		V_1 = L_13;
		// if (hits.Length > 1)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_16 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_17 = L_16;
		G_B6_0 = L_17;
		G_B6_1 = L_15;
		if (L_17)
		{
			G_B7_0 = L_17;
			G_B7_1 = L_15;
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_18 = ((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_19 = (Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7*)il2cpp_codegen_object_new(Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Comparison_1__ctor_m36EAA21C7F6D0230006DB0A6024580A54685757C(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B_RuntimeMethod_var), NULL);
		Comparison_1_t5A3269D71CFF48B1462FED00091AE93BBABC91E7* L_20 = L_19;
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2), (void*)L_20);
		G_B7_0 = L_20;
		G_B7_1 = G_B6_1;
	}

IL_006a:
	{
		Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673(G_B7_1, G_B7_0, Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_mFD3F5417D4D2204CE375C95CC2288AB4F5B8E673_RuntimeMethod_var);
	}

IL_006f:
	{
		// if (hits.Length != 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_21 = V_1;
		NullCheck(L_21);
		if (!(((RuntimeArray*)L_21)->max_length))
		{
			goto IL_0104;
		}
	}
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		V_2 = 0;
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_22 = V_1;
		NullCheck(L_22);
		V_3 = ((int32_t)(((RuntimeArray*)L_22)->max_length));
		goto IL_00fd;
	}

IL_007e:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = hits[b].collider.gameObject,
		//     module = this,
		//     distance = hits[b].distance,
		//     index = resultAppendList.Count,
		//     worldPosition = hits[0].point,
		//     worldNormal = hits[0].normal,
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25;
		L_25 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_inline((&V_5), L_26, NULL);
		(&V_5)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___module_1), (void*)__this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		float L_29;
		L_29 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), NULL);
		(&V_5)->___distance_2 = L_29;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_30 = ___1_resultAppendList;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_30, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_5)->___index_3 = ((float)L_31);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_32 = V_1;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_5)->___worldPosition_9 = L_33;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_34 = V_1;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		(&V_5)->___worldNormal_10 = L_35;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_36 = V_5;
		V_4 = L_36;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_37 = ___1_resultAppendList;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_38 = V_4;
		NullCheck(L_37);
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_37, L_38, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00fd:
	{
		// for (int b = 0, bmax = hits.Length; b < bmax; ++b)
		int32_t L_40 = V_2;
		int32_t L_41 = V_3;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_007e;
		}
	}

IL_0104:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.OVRPhysicsRaycaster::GetScreenPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OVRPhysicsRaycaster_GetScreenPos_mAD6CC9D4FC2F01C2CBFA281660E8BC7B3C3C0A84 (OVRPhysicsRaycaster_t1F411E5D373213271255DCD0AC8BB8B5A6D15EB7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) 
{
	{
		// return eventCamera.WorldToScreenPoint(worldPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_worldPosition;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		return L_3;
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
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA489E90CFBC65EE9F35B42C72ECA8037362EF497 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* L_0 = (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D*)il2cpp_codegen_object_new(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A(L_0, NULL);
		((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC1568EC2B965777FBA11D46651A32FB41491E2A (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<Raycast>b__15_0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRaycastU3Eb__15_0_mEFC66B60EE677A040D1C002373D4CF3C5DFF97FF (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_r1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___1_r2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		float L_0;
		L_0 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___0_r1), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___1_r2), NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c::<Spherecast>b__16_0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSpherecastU3Eb__16_0_m01ADCEABB9904FA2BE7802AEA7CD76AEADC96D7B (U3CU3Ec_t682782D0E83E1C6EAB4F75B276D4EC4DFEF13B1D* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_r1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___1_r2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// System.Array.Sort(hits, (r1, r2) => r1.distance.CompareTo(r2.distance));
		float L_0;
		L_0 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___0_r1), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___1_r2), NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_1, NULL);
		return L_2;
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
// System.Void UnityEngine.EventSystems.OVRPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRPointerEventData__ctor_mF3624D599F08C10D0D2E14CB8E8016AEC1FFA1B9 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) 
{
	{
		// : base(eventSystem)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = ___0_eventSystem;
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.EventSystems.OVRPointerEventData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OVRPointerEventData_ToString_m37BD8F9E0912E8BD6F215B28D5C662BD60AA5261 (OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	StringBuilder_t* G_B2_2 = NULL;
	StringBuilder_t* G_B2_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	StringBuilder_t* G_B1_2 = NULL;
	StringBuilder_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	StringBuilder_t* G_B3_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	StringBuilder_t* G_B5_2 = NULL;
	StringBuilder_t* G_B5_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	StringBuilder_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	StringBuilder_t* G_B6_2 = NULL;
	StringBuilder_t* G_B6_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	StringBuilder_t* G_B8_2 = NULL;
	StringBuilder_t* G_B8_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	StringBuilder_t* G_B7_2 = NULL;
	StringBuilder_t* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	StringBuilder_t* G_B9_2 = NULL;
	StringBuilder_t* G_B9_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	StringBuilder_t* G_B11_2 = NULL;
	StringBuilder_t* G_B11_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	StringBuilder_t* G_B10_2 = NULL;
	StringBuilder_t* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	StringBuilder_t* G_B12_2 = NULL;
	StringBuilder_t* G_B12_3 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		// sb.AppendLine("<b>Position</b>: " + position);
		StringBuilder_t* L_1 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(__this, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAAD329BEE4AA4299DC498EF86EE4D802F5F77951, L_3, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_4, NULL);
		// sb.AppendLine("<b>delta</b>: " + delta);
		StringBuilder_t* L_6 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDB1334B07CE2A0153E77054CF8FA3829A2097735, L_8, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, L_9, NULL);
		// sb.AppendLine("<b>eligibleForClick</b>: " + eligibleForClick);
		StringBuilder_t* L_11 = L_6;
		bool L_12;
		L_12 = PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline(__this, NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB4705CCB6B015DADE9B7063D15E59D6BAE057C37, L_13, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_11, L_14, NULL);
		// sb.AppendLine("<b>pointerEnter</b>: " + pointerEnter);
		StringBuilder_t* L_16 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
		G_B1_0 = L_18;
		G_B1_1 = _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
		G_B1_2 = L_16;
		G_B1_3 = L_16;
		if (L_18)
		{
			G_B2_0 = L_18;
			G_B2_1 = _stringLiteral9C5CA5F3D440697E7CE47F45B0AE3B6DB74C2054;
			G_B2_2 = L_16;
			G_B2_3 = L_16;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0086;
	}

IL_0081:
	{
		NullCheck(G_B2_0);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_19;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0086:
	{
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_2);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B3_2, L_20, NULL);
		// sb.AppendLine("<b>pointerPress</b>: " + pointerPress);
		StringBuilder_t* L_22 = G_B3_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23;
		G_B4_0 = L_24;
		G_B4_1 = _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
		G_B4_2 = L_22;
		G_B4_3 = L_22;
		if (L_24)
		{
			G_B5_0 = L_24;
			G_B5_1 = _stringLiteralBC250738CF6553169DE970EACBEDFB060B58A41B;
			G_B5_2 = L_22;
			G_B5_3 = L_22;
			goto IL_00a4;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_00a9;
	}

IL_00a4:
	{
		NullCheck(G_B5_0);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_25;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_00a9:
	{
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B6_2, L_26, NULL);
		// sb.AppendLine("<b>lastPointerPress</b>: " + lastPress);
		StringBuilder_t* L_28 = G_B6_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29;
		G_B7_0 = L_30;
		G_B7_1 = _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
		G_B7_2 = L_28;
		G_B7_3 = L_28;
		if (L_30)
		{
			G_B8_0 = L_30;
			G_B8_1 = _stringLiteral1EC5A90CC65C8BDA58643C956BA4E6F8E4436A5A;
			G_B8_2 = L_28;
			G_B8_3 = L_28;
			goto IL_00c7;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_00cc;
	}

IL_00c7:
	{
		NullCheck(G_B8_0);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_31;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_00cc:
	{
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		NullCheck(G_B9_2);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B9_2, L_32, NULL);
		// sb.AppendLine("<b>pointerDrag</b>: " + pointerDrag);
		StringBuilder_t* L_34 = G_B9_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = L_35;
		G_B10_0 = L_36;
		G_B10_1 = _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
		G_B10_2 = L_34;
		G_B10_3 = L_34;
		if (L_36)
		{
			G_B11_0 = L_36;
			G_B11_1 = _stringLiteral06A17D93E6D67BEA37EBBF3A9D7FC06B40689CD1;
			G_B11_2 = L_34;
			G_B11_3 = L_34;
			goto IL_00ea;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00ef;
	}

IL_00ea:
	{
		NullCheck(G_B11_0);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
		G_B12_0 = L_37;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00ef:
	{
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B12_1, G_B12_0, NULL);
		NullCheck(G_B12_2);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B12_2, L_38, NULL);
		// sb.AppendLine("<b>worldSpaceRay</b>: " + worldSpaceRay);
		StringBuilder_t* L_40 = G_B12_3;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_41 = __this->___worldSpaceRay_33;
		V_2 = L_41;
		String_t* L_42;
		L_42 = Ray_ToString_m06274331D92120539B4C6E0D3747EE620DB468E5((&V_2), NULL);
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1FF1E10A290EC11AB4C6B8CA7BD71BA07C515124, L_42, NULL);
		NullCheck(L_40);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_40, L_43, NULL);
		// sb.AppendLine("<b>swipeStart</b>: " + swipeStart);
		StringBuilder_t* L_45 = L_40;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = __this->___swipeStart_34;
		V_0 = L_46;
		String_t* L_47;
		L_47 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral97949C809FAE8AD49BF4DA35A46951F99B00E5E1, L_47, NULL);
		NullCheck(L_45);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_45, L_48, NULL);
		// sb.AppendLine("<b>Use Drag Threshold</b>: " + useDragThreshold);
		StringBuilder_t* L_50 = L_45;
		bool L_51;
		L_51 = PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline(__this, NULL);
		V_1 = L_51;
		String_t* L_52;
		L_52 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral709C1BE385364BF7215290F6C80B9E13ED6C07AB, L_52, NULL);
		NullCheck(L_50);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_50, L_53, NULL);
		// return sb.ToString();
		NullCheck(L_50);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		return L_55;
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
// System.Boolean UnityEngine.EventSystems.PointerEventDataExtension::IsVRPointer(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventDataExtension_IsVRPointer_m630294B1887266CFC4779146B4D066B6EBF4DCD5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (pointerEventData is OVRPointerEventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEventData;
		return (bool)((!(((RuntimeObject*)(OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// UnityEngine.Ray UnityEngine.EventSystems.PointerEventDataExtension::GetRay(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PointerEventDataExtension_GetRay_m8C036451341B0C37A138E9D3BB509B9DFDCADD99 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEventData;
		// return vrPointerEventData.worldSpaceRay;
		NullCheck(((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var)));
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var))->___worldSpaceRay_33;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventDataExtension::GetSwipeStart(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventDataExtension_GetSwipeStart_m09ED39DC9E87EDFB80926815E29A3B130E3CA586 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEventData;
		// return vrPointerEventData.swipeStart;
		NullCheck(((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var))->___swipeStart_34;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.PointerEventDataExtension::SetSwipeStart(UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventDataExtension_SetSwipeStart_m3FD15231D3C0B9BC95B84E7048FF8289CF4359C5 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_pointerEventData, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_start, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRPointerEventData vrPointerEventData = pointerEventData as OVRPointerEventData;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_pointerEventData;
		// vrPointerEventData.swipeStart = start;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_start;
		NullCheck(((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var)));
		((OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D*)IsInstClass((RuntimeObject*)L_0, OVRPointerEventData_t16F6545720F0956B5AAA7A38FA81CF02E7F37B6D_il2cpp_TypeInfo_var))->___swipeStart_34 = L_1;
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
// System.IntPtr Meta.XR.MetaXRFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MetaXRFeature_HookGetInstanceProcAddr_mAA15F1B6D4239073F1909897B2CB400107A91A0E (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, intptr_t ___0_func, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8FB92F9A7623BBED6D312A6048883060D75AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8F4E1B8373DF6DEFF0CA227D126CD0F2969274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OVRPlugin.UnityOpenXR.Enabled = true;
		((UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_StaticFields*)il2cpp_codegen_static_fields_for(UnityOpenXR_tBE61966A5EA8E0DA3190F5309575D0B3EF7ECB3E_il2cpp_TypeInfo_var))->___Enabled_0 = (bool)1;
		// Debug.Log($"[MetaXRFeature] HookGetInstanceProcAddr: {func}");
		intptr_t L_0 = ___0_func;
		intptr_t L_1 = L_0;
		RuntimeObject* L_2 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4F8FB92F9A7623BBED6D312A6048883060D75AAB, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// Debug.Log($"[MetaXRFeature] SetClientVersion");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7F8F4E1B8373DF6DEFF0CA227D126CD0F2969274, NULL);
		// OVRPlugin.UnityOpenXR.SetClientVersion();
		UnityOpenXR_SetClientVersion_m4090E8C9C4B6DCE29E0B4947BCEB6F943C1E14A5(NULL);
		// return OVRPlugin.UnityOpenXR.HookGetInstanceProcAddr(func);
		intptr_t L_4 = ___0_func;
		intptr_t L_5;
		L_5 = UnityOpenXR_HookGetInstanceProcAddr_m47D995F8D369E3C5128B927468F0ABD95352EFD4(L_4, NULL);
		return L_5;
	}
}
// System.Boolean Meta.XR.MetaXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetaXRFeature_OnInstanceCreate_m21A5A294E099796307A195F6B59A130F57BCA311 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF181C430C588D40EAFF0993844E32B36A56034B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE73EEE9D297AB0D06F89C521B58BA8DD8209C55C);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// Debug.Log($"[MetaXRFeature] OnInstanceCreate: {xrInstance}");
		uint64_t L_0 = ___0_xrInstance;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE73EEE9D297AB0D06F89C521B58BA8DD8209C55C, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// bool result = OVRPlugin.UnityOpenXR.OnInstanceCreate(xrInstance);
		uint64_t L_4 = ___0_xrInstance;
		bool L_5;
		L_5 = UnityOpenXR_OnInstanceCreate_mD8C51F81DF5B66595890F4D53FD5C11B066E3AF5(L_4, NULL);
		// if (!result)
		bool L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0028;
		}
	}
	{
		// Debug.LogWarning("[MetaXRFeature] OnInstanceCreate returned an error. If you are using Quest Link, please verify if it's started.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralAF181C430C588D40EAFF0993844E32B36A56034B, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0028:
	{
		// return result;
		return G_B2_0;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnInstanceDestroy_mCC36B68F5CD5114410F7E0019054C7CDFDB87E99 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8547198FCD4CBEF1644DE037D71CAB719C5682EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnInstanceDestroy: {xrInstance}");
		uint64_t L_0 = ___0_xrInstance;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8547198FCD4CBEF1644DE037D71CAB719C5682EB, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnInstanceDestroy(xrInstance);
		uint64_t L_4 = ___0_xrInstance;
		UnityOpenXR_OnInstanceDestroy_m434D377978F23755AEA67D5A447614023E0802CF(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionCreate_m56C121A18F3DF9CCAF6194C7007E21E79BBB7930 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69B113727E0D936C93A74FF172AA5CD6A0A7FFA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionCreate: {xrSession}");
		uint64_t L_0 = ___0_xrSession;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral69B113727E0D936C93A74FF172AA5CD6A0A7FFA4, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionCreate(xrSession);
		uint64_t L_4 = ___0_xrSession;
		UnityOpenXR_OnSessionCreate_m1AC2B5B77ACF1FD2BDB44AD92902B86724284D1F(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnAppSpaceChange_m797E87D002609C1C320B4C848E17042576944EC6 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B58AE8DE14B5638FD59D9E4695BD116DC49871);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnAppSpaceChange: {xrSpace}");
		uint64_t L_0 = ___0_xrSpace;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC3B58AE8DE14B5638FD59D9E4695BD116DC49871, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnAppSpaceChange(xrSpace);
		uint64_t L_4 = ___0_xrSpace;
		UnityOpenXR_OnAppSpaceChange_m75150D53FE36E1F1063AB0C95AB5418BF155AD06(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionStateChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionStateChange_m2243FE75EDC0BDDFF62F0DE307EDD48D5A539DBB (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, int32_t ___0_oldState, int32_t ___1_newState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D4303DAB31C0B46AD6FEA71AE3015604BBFFCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionStateChange: {oldState} -> {newState}");
		int32_t L_0 = ___0_oldState;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___1_newState;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral38D4303DAB31C0B46AD6FEA71AE3015604BBFFCB, L_2, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionStateChange(oldState, newState);
		int32_t L_7 = ___0_oldState;
		int32_t L_8 = ___1_newState;
		UnityOpenXR_OnSessionStateChange_m0C99770FA4B4B984958C15BB609D093A8C9B0F46(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionBegin_mB65D042BD49F1B4753A1127AB7DF0BABAFA6359B (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D7334B328E9233B67476A69217C796D0012E9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionBegin: {xrSession}");
		uint64_t L_0 = ___0_xrSession;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral68D7334B328E9233B67476A69217C796D0012E9B, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionBegin(xrSession);
		uint64_t L_4 = ___0_xrSession;
		UnityOpenXR_OnSessionBegin_m0422580F20229CC217DB02155FC2DC0D867F74CE(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionEnd_mFA57212690BE6BFE667064BEC498801BF5A16BE7 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CC90267359228BBF3FD4EFA7C6B63E4F4D4C76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionEnd: {xrSession}");
		uint64_t L_0 = ___0_xrSession;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8CC90267359228BBF3FD4EFA7C6B63E4F4D4C76E, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionEnd(xrSession);
		uint64_t L_4 = ___0_xrSession;
		UnityOpenXR_OnSessionEnd_mEC2BB76CD260EC200996264B816F8715C04EA755(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionExiting(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionExiting_mCCDA171A30336B3CCEF2E0A540C5FC00DAF7F42C (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1DB26724C2C52E64A4139D74063E4F6F9F5AD0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionExiting: {xrSession}");
		uint64_t L_0 = ___0_xrSession;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC1DB26724C2C52E64A4139D74063E4F6F9F5AD0E, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionExiting(xrSession);
		uint64_t L_4 = ___0_xrSession;
		UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature_OnSessionDestroy_m232B8E2FCC785F002CD181AE2B36DF52018AE473 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA84FE0643CDCFA240F65110401D6C5BFA23CA16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"[MetaXRFeature] OnSessionDestroy: {xrSession}");
		uint64_t L_0 = ___0_xrSession;
		uint64_t L_1 = L_0;
		RuntimeObject* L_2 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAA84FE0643CDCFA240F65110401D6C5BFA23CA16, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// OVRPlugin.UnityOpenXR.OnSessionDestroy(xrSession);
		uint64_t L_4 = ___0_xrSession;
		UnityOpenXR_OnSessionDestroy_mE22528F3A18F2409377CD0862CC005D7F07442BD(L_4, NULL);
		// }
		return;
	}
}
// System.Void Meta.XR.MetaXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaXRFeature__ctor_mCC8D3701561523559B7D5A0FB37F491BE3AB3DF5 (MetaXRFeature_tC11EFE3887B7C014E9942C403EC4F6AEC5A19B6D* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EventSystem; }
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->___m_EventSystem_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_firstSelectedGameObject_m15FB056EE7A99D8DD5891D40A6E3EF18719F0553_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FirstSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_FirstSelected_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ExecuteEvents_get_submitHandler_mDCAAA40F0F6AEA385B375C1839B4DC37E5FC4A7A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_SubmitHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_SubmitHandler_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ExecuteEvents_get_cancelHandler_mBCDFD10C95FC2BBC5DC5A512FEA1BBEECC2DAE12_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_CancelHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_CancelHandler_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 AxisEventData_get_moveVector_m7979B5CF62B6B3B0C5F2DA8B328C499ED80ECC41_inline (AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 moveVector { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmoveVectorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ExecuteEvents_get_moveHandler_mF717824AB0018BBED3C2DF3C67486E3B2B3836D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_MoveHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_MoveHandler_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ExecuteEvents_get_updateSelectedHandler_m8AF7543437082AD4F5690AAA77F2623AE28C3D09_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_UpdateSelectedHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_UpdateSelectedHandler_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CeligibleForClickU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CdeltaU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CdraggingU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CuseDragThresholdU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___0_value;
		__this->___U3CpointerPressRaycastU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mA67CE33D32540939A273DB88D6456C7FE43C13EF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerDownHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerDownHandler_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject lastPress { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3ClastPressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = __this->___U3CclickTimeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = ___0_value;
		__this->___U3CclickTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject rawPointerPress { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CrawPointerPressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrawPointerPressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CpointerDragU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerDragU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerDragU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ExecuteEvents_get_initializePotentialDrag_m16F4CD40448FB1B78F6683AA26A9CC574F48AFBD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_InitializePotentialDragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_InitializePotentialDragHandler_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PointerPress; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PointerPress_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_m51B83B4AD7498D6F7A2CBD5F2331E91A37AE4CF2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerUpHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerUpHandler_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = __this->___U3CeligibleForClickU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m0017F9D1EAF7C02CDDB4C148C92D6685D88EA8D5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerClickHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerClickHandler_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m8E00FA7361DE68780ACEB365E6B14206A2180D03_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DropHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_DropHandler_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = __this->___U3CdraggingU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_mE78FEEEAE114635E416FF1FE33C851E62B60555B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_EndDragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_EndDragHandler_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerEnterU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F_inline (ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EventData; }
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_0 = __this->___m_EventData_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_scrollDelta_m38C419C3E84811D17D1A42973AF7B3A457B316EA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CscrollDeltaU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ExecuteEvents_get_scrollHandler_m51E902070611D3F81AD5F1F5762AE2C48E84AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_ScrollHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_ScrollHandler_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m8BA21E58E633B2C5B477E49DAABAD3C97A8158AF_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_sendNavigationEvents; }
		bool L_0 = __this->___m_sendNavigationEvents_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_scrollDelta_m58007CAE9A9B333B82C36B9E5431FBD926CB556C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 scrollDelta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CscrollDeltaU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___0_value;
		__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CpointerEnterU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerEnterU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerId_m5B5FF54AB1DE7BD4454022A7C0535C618049BD9B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CpointerIdU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_button_m77DA0291BA43CB813FE83752D826AF3982C81601_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField_23 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_useDragThreshold_m3ED1F39E71630C9AB1F340C92F8FA39AA489E1C5_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = __this->___U3CuseDragThresholdU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_pressPosition_m8A6788DA6BF81481E4EBCBA2ED1838F786EBAE63_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpressPositionU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSystem_get_pixelDragThreshold_m2F7B0D1B5ACC63EB507FD7CCFE74F2B2804FF2E3_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_DragThreshold; }
		int32_t L_0 = __this->___m_DragThreshold_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerPressRaycastU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ExecuteEvents_get_beginDragHandler_mB0BEAC09E4A8F31438B07FE68A5BF7267FF8C2FC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_BeginDragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_BeginDragHandler_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ExecuteEvents_get_dragHandler_m9193926B9685C80C0560C2E105FF6150C4EAE507_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_DragHandler_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_GameObject = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_GameObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)L_0);
		// set { m_GameObject = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m1412A508E37D95E08FB60E8976FB75714BE934C1_gshared_inline (Enumerator_tC17DB73F53085145D57EE2A8168426239B0B569D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_3 = (RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_item, const RuntimeMethod* method) 
{
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_1 = (RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023)L_8);
		return;
	}

IL_0034:
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = ___0_item;
		((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
