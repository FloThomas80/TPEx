#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>
struct Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A;
// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Raycasting.Cast
struct Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer
struct HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Raycasting.PositionRelative
struct PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B;
// Raycasting.RayCast
struct RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Raycasting.SphereCast
struct SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects
struct HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439;
IL2CPP_EXTERN_C String_t* _stringLiteral4A4955D176516025430352DFFE6DF5974DEB47AB;
IL2CPP_EXTERN_C String_t* _stringLiteralA669C5E797F155D12E27827640DACC40DA825122;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5;
IL2CPP_EXTERN_C String_t* _stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF2458B71582F60B7E001C41A6507376AEFDEDDC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mBF49B8350B7C5FE4D5501DD0FB822F43BFBE235B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Raycasting.Cast
struct Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807  : public RuntimeObject
{
	// Raycasting.PositionRelative Raycasting.Cast::origin
	PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* ___origin_0;
	// Raycasting.PositionRelative Raycasting.Cast::end
	PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* ___end_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects
struct HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_HandRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_HandRoot_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_DrawJointsParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DrawJointsParent_1;
	// UnityEngine.Transform[] UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_JointXforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_JointXforms_2;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_DrawJoints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_DrawJoints_3;
	// UnityEngine.GameObject[] UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_VelocityParents
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_VelocityParents_4;
	// UnityEngine.LineRenderer[] UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_Lines
	LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* ___m_Lines_5;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_DrawMesh
	bool ___m_DrawMesh_6;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_DebugDrawJoints
	bool ___m_DebugDrawJoints_7;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_VelocityType
	int32_t ___m_VelocityType_8;
	// UnityEngine.Vector3[] UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::m_LinePointsReuse
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_LinePointsReuse_9;
};

// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>
struct NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// Raycasting.RayCast
struct RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC  : public Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Raycasting.SphereCast
struct SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E  : public Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807
{
	// System.Single Raycasting.SphereCast::radius
	float ___radius_2;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B 
{
	// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0::<>4__this
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* ___U3CU3E4__this_0;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0::debugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab_1;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0::velocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab_2;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Raycasting.PositionRelative
struct PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B  : public RuntimeObject
{
	// UnityEngine.Vector3 Raycasting.PositionRelative::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Transform Raycasting.PositionRelative::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 
{
	// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint> UnityEngine.XR.Hands.XRHand::m_Joints
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::m_RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::m_Handedness
	int32_t ___m_Handedness_2;
	// System.Boolean UnityEngine.XR.Hands.XRHand::<isTracked>k__BackingField
	bool ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};

// UnityEngine.XR.Hands.XRHandJoint
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::m_Id
	int32_t ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHandJoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.Hands.XRHandJoint::m_Radius
	float ___m_Radius_2;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_LinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity_3;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_4;
	// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::m_TrackingState
	int32_t ___m_TrackingState_5;
};

struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_StaticFields
{
	// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHandJoint::willNeverBeValid
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___willNeverBeValid_6;
};

// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752  : public MulticastDelegate_t
{
};

// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxEventBytesPerUpdate
	int32_t ___m_MaxEventBytesPerUpdate_6;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxQueuedEventsPerUpdate
	int32_t ___m_MaxQueuedEventsPerUpdate_7;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_8;
	// UnityEngine.InputSystem.InputSettings/BackgroundBehavior UnityEngine.InputSystem.InputSettings::m_BackgroundBehavior
	int32_t ___m_BackgroundBehavior_9;
	// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode UnityEngine.InputSystem.InputSettings::m_EditorInputBehaviorInPlayMode
	int32_t ___m_EditorInputBehaviorInPlayMode_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_ButtonReleaseThreshold
	float ___m_ButtonReleaseThreshold_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_15;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_16;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_17;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_18;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_19;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_DisableRedundantEventsMerging
	bool ___m_DisableRedundantEventsMerging_20;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_ShortcutKeysConsumeInputs
	bool ___m_ShortcutKeysConsumeInputs_21;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.InputSystem.InputSettings::m_FeatureFlags
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_FeatureFlags_22;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C  : public SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2
{
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_LeftHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_LeftHand_4;
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_RightHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_RightHand_5;
	// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::m_JointsInLayout
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_JointsInLayout_6;
	// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::updatedHands
	Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* ___updatedHands_7;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingAcquired
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingAcquired_8;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingLost
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingLost_9;
	// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::handsUpdated
	Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* ___handsUpdated_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer
struct HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_UseOptimizedControls
	bool ___m_UseOptimizedControls_4;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_Origin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_Origin_5;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_LeftHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftHandMesh_6;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_RightHandMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightHandMesh_7;
	// UnityEngine.Material UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_HandMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_HandMeshMaterial_8;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_DrawMeshes
	bool ___m_DrawMeshes_9;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_DebugDrawPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_DebugDrawPrefab_10;
	// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_DebugDrawJoints
	bool ___m_DebugDrawJoints_11;
	// UnityEngine.GameObject UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_VelocityPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_VelocityPrefab_12;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_VelocityType
	int32_t ___m_VelocityType_13;
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_14;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_LeftHandGameObjects
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* ___m_LeftHandGameObjects_15;
	// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::m_RightHandGameObjects
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* ___m_RightHandGameObjects_16;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LineRenderer[]
struct LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A  : public RuntimeArray
{
	ALIGN_FIELD (8) LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* m_Items[1];

	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* value)
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


// System.Void System.Action`1<UnityEngine.XR.Hands.XRHand>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC_gshared (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m7EB2124968FA6CF7D296DEF84B56419B5D879A3D_gshared (Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleRenderers<System.Object>(System.Boolean,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleRenderers_TisRuntimeObject_m3022397E136E89C24806105072A10F43486886B8_gshared (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Raycasting.PositionRelative::setWorldPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Raycasting.PositionRelative::getWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void Raycasting.PositionRelative::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Raycasting.PositionRelative::.ctor(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Raycasting.Cast::getDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Raycasting.PositionRelative::setParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative_setParent_m7DF9522C944A0D2A9B051CE72E21AD0FD7FC7960 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Raycasting.Cast::getOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Raycasting.Cast::getEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getEnd_m84DEC8DC425449FF20DA2DDD3417EBB8868E79FA (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) ;
// System.Void Raycasting.Cast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m0DD9F2DA1B7DDB65D488D565AB76BC5ECB5E5AEE (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) ;
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m29331AB56757D1EC99EC474607114FCDB7CE5838 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, const RuntimeMethod* method) ;
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_mF3A1F010BC05BBDBA9EABBAE1CD1AE28426E23A8 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, const RuntimeMethod* method) ;
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_mE49D6EF4464446A08B6C2033FDA58C6EDB0AAE39 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd4, const RuntimeMethod* method) ;
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m2E452FADBF32B214B5E81FE68FB713C1EDC13B76 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m8B7FB8419A65BEE78927D0EE84916E8DBE7ECD34 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// System.Void Raycasting.SphereCast::setRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast_setRadius_mD101C6ACB4DB11381C205DEAF3C2590B3BDADE3F (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, float ___m_radius0, const RuntimeMethod* method) ;
// UnityEngine.Transform Raycasting.PositionRelative::getParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Raycasting.SphereCast::getRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCast_getRadius_mDBB90ED60C17820936E7FD96658DF3912C749F4C (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, int32_t ___layerMask5, int32_t ___queryTriggerInteraction6, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_mE651DDBD29BBBBC4E3D33BBDE3C9C082ACFCB91C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method) ;
// System.Void DebugShapes::DrawSphereRay(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugShapes_DrawSphereRay_m6F30D17F3CFE821685DC2A1227004FB2ABECF983 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, float ___radius2, int32_t ___amount3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col4, float ___duration5, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_m18BC1822E2ED3491763263316059C643A16FADEA (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m749C9ABC2021AA41B889F811299E49FD3A7B5AAC (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_m08DD81D0B70B2361C0E23B719E966977CBECBD40 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSettings::SetInternalFeatureFlag(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSettings_SetInternalFeatureFlag_mF593642B414A97107C5F4835FDFB2F185F1933E0 (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, String_t* ___featureName0, bool ___enabled1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::TryEnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandVisualizer_TryEnsureInitialized_m45333AF6092C9A6916F872FFE5492BFC7C9FCC9B (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnEnable_mAAADFF61F0C8611FAA69878EB0074E6126C075EB (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Hands.XRHand>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m7EB2124968FA6CF7D296DEF84B56419B5D879A3D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDisable_m5C5BA503FEEAFDB115192791D60BC10FBDFB1CCD (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_mBE89E1B0A9B41D3ACCB22C33A3CEBF49324ACB51 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_leftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHand::get_isTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::.ctor(System.Boolean,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___isLeft0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceSetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_rightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_mBEFC94F23B1194A808CAA45E243891465B457672 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_m7CEACDF09D7AA64D4C29658D87665241E9C94BC4 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___origin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___jointId0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|11_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B* p3, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetFrontJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313 (int32_t ___fingerId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetBackJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F (int32_t ___fingerId0, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDrawMeshNoCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDrawMeshNoCache_m3D1CC5FC5B42EAFB754BC88627A3749F736223E5 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDebugDrawJointsNoCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDebugDrawJointsNoCache_m9FC70422C9D297A3828FFACDF1E8011CAE8B8180 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceSetVelocityTypeNoCache(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceSetVelocityTypeNoCache_mBA2EB47E8BD4F24803983F0E539BD79847CC9848 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.SkinnedMeshRenderer>(T&)
inline bool Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.MeshRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mBF49B8350B7C5FE4D5501DD0FB822F43BFBE235B (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_m3022397E136E89C24806105072A10F43486886B8_gshared)(___toggle0, ___xform1, method);
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleRenderers<UnityEngine.LineRenderer>(System.Boolean,UnityEngine.Transform)
inline void HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF2458B71582F60B7E001C41A6507376AEFDEDDC4 (bool ___toggle0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___xform1, const RuntimeMethod* method)
{
	((  void (*) (bool, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))HandGameObjects_ToggleRenderers_TisRuntimeObject_m3022397E136E89C24806105072A10F43486886B8_gshared)(___toggle0, ___xform1, method);
}
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateJoint(UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_mC3ED8938CD592EB84422940B923D2A4D7FFB4DEA (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose0, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose2, bool ___cacheParentPose3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___lhs0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.LineRenderer>(T&)
inline bool GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___linearVelocity0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___angularVelocity0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Raycasting.PositionRelative::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, const RuntimeMethod* method) 
{
	{
		// public PositionRelative(Vector3 m_position) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// position = m_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_position0;
		__this->___position_0 = L_0;
		// parent = null;
		__this->___parent_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// }
		return;
	}
}
// System.Void Raycasting.PositionRelative::.ctor(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent1, const RuntimeMethod* method) 
{
	{
		// public PositionRelative(Vector3 m_position, Transform m_parent) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// parent = m_parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___m_parent1;
		__this->___parent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_0);
		// setWorldPosition(m_position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_position0;
		PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Raycasting.PositionRelative::getWorldPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 getWorldPosition() { return (parent == null) ? position : parent.TransformPoint(position); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parent_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___parent_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___position_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_3, NULL);
		return L_4;
	}

IL_0020:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___position_0;
		return L_5;
	}
}
// UnityEngine.Vector3 Raycasting.PositionRelative::getLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionRelative_getLocalPosition_m446E963B1C57569DD33C060220A9E59FFC06B74A (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 getLocalPosition() { return position; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_0;
		return L_0;
	}
}
// UnityEngine.Transform Raycasting.PositionRelative::getParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) 
{
	{
		// public Transform getParent() { return parent; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parent_1;
		return L_0;
	}
}
// System.Void Raycasting.PositionRelative::setWorldPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* G_B2_0 = NULL;
	PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* G_B3_1 = NULL;
	{
		// public void setWorldPosition(Vector3 m_position) { position = (parent == null) ? m_position : parent.InverseTransformPoint(m_position); }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parent_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_001d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___parent_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___m_position0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_2, L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___m_position0;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___position_0 = G_B3_0;
		// public void setWorldPosition(Vector3 m_position) { position = (parent == null) ? m_position : parent.InverseTransformPoint(m_position); }
		return;
	}
}
// System.Void Raycasting.PositionRelative::setLocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative_setLocalPosition_m61C43131EBB07482D779B8F1B2CFDBF7463033F6 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_position0, const RuntimeMethod* method) 
{
	{
		// public void setLocalPosition(Vector3 m_position) { position = m_position; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_position0;
		__this->___position_0 = L_0;
		// public void setLocalPosition(Vector3 m_position) { position = m_position; }
		return;
	}
}
// System.Void Raycasting.PositionRelative::setParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionRelative_setParent_m7DF9522C944A0D2A9B051CE72E21AD0FD7FC7960 (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 old_Position = getWorldPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD(__this, NULL);
		V_0 = L_0;
		// parent = m_parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___m_parent0;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// setWorldPosition(old_Position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497(__this, L_2, NULL);
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
// System.Void Raycasting.Cast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m0DD9F2DA1B7DDB65D488D565AB76BC5ECB5E5AEE (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cast() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// origin = new PositionRelative(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_1 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_1, L_0, NULL);
		__this->___origin_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_0), (void*)L_1);
		// end = new PositionRelative(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_3 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_3, L_2, NULL);
		__this->___end_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___end_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m29331AB56757D1EC99EC474607114FCDB7CE5838 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cast(Vector3 m_origin, Vector3 m_direction, float m_distance) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// origin = new PositionRelative(m_origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_1 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_1, L_0, NULL);
		__this->___origin_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_0), (void*)L_1);
		// end = new PositionRelative(m_origin + m_direction.normalized * m_distance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___m_direction1), NULL);
		float L_4 = ___m_distance2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_7 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_7, L_6, NULL);
		__this->___end_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___end_1), (void*)L_7);
		// }
		return;
	}
}
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_mF3A1F010BC05BBDBA9EABBAE1CD1AE28426E23A8 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cast(Vector3 m_origin, Vector3 m_end) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// origin = new PositionRelative(m_origin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_1 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_1, L_0, NULL);
		__this->___origin_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_0), (void*)L_1);
		// end = new PositionRelative(m_end);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___m_end1;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_3 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PositionRelative__ctor_m107428209AA4D3B51440C5A20E76DCC946C8DE59(L_3, L_2, NULL);
		__this->___end_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___end_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_mE49D6EF4464446A08B6C2033FDA58C6EDB0AAE39 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cast(Vector3 m_origin, Vector3 m_direction, float m_distance, Transform m_parentOrigin, Transform m_parentEnd) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// origin = new PositionRelative(m_origin, m_parentOrigin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___m_parentOrigin3;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_2 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2(L_2, L_0, L_1, NULL);
		__this->___origin_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_0), (void*)L_2);
		// end = new PositionRelative(m_origin + m_direction.normalized * m_distance, m_parentEnd);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___m_direction1), NULL);
		float L_5 = ___m_distance2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___m_parentEnd4;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_9 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2(L_9, L_7, L_8, NULL);
		__this->___end_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___end_1), (void*)L_9);
		// }
		return;
	}
}
// System.Void Raycasting.Cast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast__ctor_m2E452FADBF32B214B5E81FE68FB713C1EDC13B76 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Cast(Vector3 m_origin, Vector3 m_end, Transform m_parentOrigin, Transform m_parentEnd) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// origin = new PositionRelative(m_origin, m_parentOrigin);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___m_parentOrigin2;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_2 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2(L_2, L_0, L_1, NULL);
		__this->___origin_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___origin_0), (void*)L_2);
		// end = new PositionRelative(m_end, m_parentEnd);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___m_end1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___m_parentEnd3;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_5 = (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B*)il2cpp_codegen_object_new(PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PositionRelative__ctor_m5A156B9BD1FA6F1842F948131658A8472EEBE0D2(L_5, L_3, L_4, NULL);
		__this->___end_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___end_1), (void*)L_5);
		// }
		return;
	}
}
// UnityEngine.Vector3 Raycasting.Cast::getOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 getOrigin() { return origin.getWorldPosition(); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___origin_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Raycasting.Cast::getDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 getDirection() { return (end.getWorldPosition() - origin.getWorldPosition()); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___end_1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD(L_0, NULL);
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_2 = __this->___origin_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Single Raycasting.Cast::getDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Cast_getDistance_mA37E02D8E19CFA62DE65BB21F0CE0F2BE8DED45C (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float getDistance() { return getDirection().magnitude; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 Raycasting.Cast::getEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Cast_getEnd_m84DEC8DC425449FF20DA2DDD3417EBB8868E79FA (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 getEnd() { return end.getWorldPosition(); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___end_1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = PositionRelative_getWorldPosition_mDE6FD0013DF699C7DDE3DAFDD253642393525DAD(L_0, NULL);
		return L_1;
	}
}
// System.Void Raycasting.Cast::setParentOrigin(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast_setParentOrigin_m94C9777410F4D59B31853D084064A49ACDEC7026 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent0, const RuntimeMethod* method) 
{
	{
		// public void setParentOrigin(Transform m_parent) { origin.setParent(m_parent); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___origin_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___m_parent0;
		NullCheck(L_0);
		PositionRelative_setParent_m7DF9522C944A0D2A9B051CE72E21AD0FD7FC7960(L_0, L_1, NULL);
		// public void setParentOrigin(Transform m_parent) { origin.setParent(m_parent); }
		return;
	}
}
// System.Void Raycasting.Cast::setParentEnd(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast_setParentEnd_m0CD4591101E0D811ACE84CAEB55D1F89110018C2 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parent0, const RuntimeMethod* method) 
{
	{
		// public void setParentEnd(Transform m_parent) { end.setParent(m_parent); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___end_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___m_parent0;
		NullCheck(L_0);
		PositionRelative_setParent_m7DF9522C944A0D2A9B051CE72E21AD0FD7FC7960(L_0, L_1, NULL);
		// public void setParentEnd(Transform m_parent) { end.setParent(m_parent); }
		return;
	}
}
// System.Void Raycasting.Cast::setOrigin(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast_setOrigin_mBED5BEB75DA8E13712E25799BEFE65A19C49ACB0 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin0, const RuntimeMethod* method) 
{
	{
		// public void setOrigin(Vector3 m_Origin) { origin.setWorldPosition(m_Origin); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___origin_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_Origin0;
		NullCheck(L_0);
		PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497(L_0, L_1, NULL);
		// public void setOrigin(Vector3 m_Origin) { origin.setWorldPosition(m_Origin); }
		return;
	}
}
// System.Void Raycasting.Cast::setEnd(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast_setEnd_m8DD3EC425BF29CB13B4ABF3BCFFD78F74A3FCF75 (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end0, const RuntimeMethod* method) 
{
	{
		// public void setEnd(Vector3 m_end) { end.setWorldPosition(m_end); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = __this->___end_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_end0;
		NullCheck(L_0);
		PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497(L_0, L_1, NULL);
		// public void setEnd(Vector3 m_end) { end.setWorldPosition(m_end); }
		return;
	}
}
// System.Void Raycasting.Cast::setDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cast_setDistance_m8F8AB4A798BFEE229D8854484023092D6731577D (Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807* __this, float ___m_distance0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public void setDistance(float m_distance) { Vector3 p = getOrigin(); end.setWorldPosition(p + (getEnd() - p).normalized * m_distance); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		V_0 = L_0;
		// public void setDistance(float m_distance) { Vector3 p = getOrigin(); end.setWorldPosition(p + (getEnd() - p).normalized * m_distance); }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_1 = __this->___end_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Cast_getEnd_m84DEC8DC425449FF20DA2DDD3417EBB8868E79FA(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_7 = ___m_distance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_8, NULL);
		NullCheck(L_1);
		PositionRelative_setWorldPosition_m94CC5250BE906F02DD0023282BE1E03336952497(L_1, L_9, NULL);
		// public void setDistance(float m_distance) { Vector3 p = getOrigin(); end.setWorldPosition(p + (getEnd() - p).normalized * m_distance); }
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
// System.Void Raycasting.RayCast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast__ctor_m69E4AA20C54CECEEC97FF873105DE5066DB00A7B (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, const RuntimeMethod* method) 
{
	{
		// public RayCast() : base() { }
		Cast__ctor_m0DD9F2DA1B7DDB65D488D565AB76BC5ECB5E5AEE(__this, NULL);
		// public RayCast() : base() { }
		return;
	}
}
// System.Void Raycasting.RayCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast__ctor_m29CFBCED63840A43E9E14ECC615A577C029A7117 (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, const RuntimeMethod* method) 
{
	{
		// public RayCast(Vector3 m_origin, Vector3 m_direction, float m_distance) : base(m_origin, m_direction, m_distance) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_direction1;
		float L_2 = ___m_distance2;
		Cast__ctor_m29331AB56757D1EC99EC474607114FCDB7CE5838(__this, L_0, L_1, L_2, NULL);
		// public RayCast(Vector3 m_origin, Vector3 m_direction, float m_distance) : base(m_origin, m_direction, m_distance) { }
		return;
	}
}
// System.Void Raycasting.RayCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast__ctor_mAFFFB079A9D6BE307AACEB1E7207246F6F66D5FF (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, const RuntimeMethod* method) 
{
	{
		// public RayCast(Vector3 m_origin, Vector3 m_end) : base(m_origin, m_end) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_end1;
		Cast__ctor_mF3A1F010BC05BBDBA9EABBAE1CD1AE28426E23A8(__this, L_0, L_1, NULL);
		// public RayCast(Vector3 m_origin, Vector3 m_end) : base(m_origin, m_end) { }
		return;
	}
}
// System.Void Raycasting.RayCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast__ctor_m93716C5EEFAF5531E097BC7453EEBDD483E3F696 (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd4, const RuntimeMethod* method) 
{
	{
		// public RayCast(Vector3 m_origin, Vector3 m_direction, float m_distance, Transform m_parentOrigin, Transform m_parentEnd) : base(m_origin, m_direction, m_distance, m_parentOrigin, m_parentEnd) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_direction1;
		float L_2 = ___m_distance2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___m_parentOrigin3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___m_parentEnd4;
		Cast__ctor_mE49D6EF4464446A08B6C2033FDA58C6EDB0AAE39(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// public RayCast(Vector3 m_origin, Vector3 m_direction, float m_distance, Transform m_parentOrigin, Transform m_parentEnd) : base(m_origin, m_direction, m_distance, m_parentOrigin, m_parentEnd) { }
		return;
	}
}
// System.Void Raycasting.RayCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast__ctor_m387BC17A1F131FBDEA8239D82AFC3179563B783B (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd3, const RuntimeMethod* method) 
{
	{
		// public RayCast(Vector3 m_origin, Vector3 m_end, Transform m_parentOrigin, Transform m_parentEnd) : base(m_origin, m_end, m_parentOrigin, m_parentEnd) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_end1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___m_parentOrigin2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___m_parentEnd3;
		Cast__ctor_m2E452FADBF32B214B5E81FE68FB713C1EDC13B76(__this, L_0, L_1, L_2, L_3, NULL);
		// public RayCast(Vector3 m_origin, Vector3 m_end, Transform m_parentOrigin, Transform m_parentEnd) : base(m_origin, m_end, m_parentOrigin, m_parentEnd) { }
		return;
	}
}
// System.Boolean Raycasting.RayCast::castRay(UnityEngine.RaycastHit&,UnityEngine.LayerMask,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RayCast_castRay_m80D8F7533CAD7923458670C6BFBAC7C4B8DB957F (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask1, int32_t ___q2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = getDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394(__this, NULL);
		V_0 = L_0;
		// return Physics.Raycast(getOrigin(), v.normalized, out hitInfo, v.magnitude, layerMask, q);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = ___hitInfo0;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = ___layerMask1;
		int32_t L_6;
		L_6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_5, NULL);
		int32_t L_7 = ___q2;
		bool L_8;
		L_8 = Physics_Raycast_mA782767AD4F149FBEA32C71460DFF061B7563688(L_1, L_2, L_3, L_4, L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.RaycastHit[] Raycasting.RayCast::castRayAll(UnityEngine.LayerMask,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* RayCast_castRayAll_m068EC68E1C5DB97FEBCF4E4A43C429C2C6C35921 (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, int32_t ___q1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = getDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394(__this, NULL);
		V_0 = L_0;
		// return Physics.RaycastAll(getOrigin(), v, v.magnitude, layerMask, q);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = ___layerMask0;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_4, NULL);
		int32_t L_6 = ___q1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7;
		L_7 = Physics_RaycastAll_m8B7FB8419A65BEE78927D0EE84916E8DBE7ECD34(L_1, L_2, L_3, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void Raycasting.RayCast::draw(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayCast_draw_m28350DC31C1B490FFFCB7A9F6B5599D19A586CFC (RayCast_tFC67E587E1814BFB9F531A5701904C23BFA52FCC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawLine(getOrigin(), getEnd(), col,duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getEnd_m84DEC8DC425449FF20DA2DDD3417EBB8868E79FA(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___col0;
		float L_3 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_0, L_1, L_2, L_3, NULL);
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
// System.Void Raycasting.SphereCast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_m50D4E59686578F52A1350AC746418387B756B051 (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, const RuntimeMethod* method) 
{
	{
		// public SphereCast() : base() {
		Cast__ctor_m0DD9F2DA1B7DDB65D488D565AB76BC5ECB5E5AEE(__this, NULL);
		// radius = 1.0f;
		__this->___radius_2 = (1.0f);
		// }
		return;
	}
}
// System.Void Raycasting.SphereCast::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_mC85216547C12579EA6132D887B7EDEE9BBABC6CE (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, float ___m_radius0, const RuntimeMethod* method) 
{
	{
		// public SphereCast(float m_radius) : base() {
		Cast__ctor_m0DD9F2DA1B7DDB65D488D565AB76BC5ECB5E5AEE(__this, NULL);
		// radius = m_radius;
		float L_0 = ___m_radius0;
		__this->___radius_2 = L_0;
		// }
		return;
	}
}
// System.Void Raycasting.SphereCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_mAC1D3D312C70FC422D03975CEAB9D13D972380C4 (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, float ___m_radius3, const RuntimeMethod* method) 
{
	{
		// public SphereCast(Vector3 m_origin, Vector3 m_direction, float m_distance, float m_radius) : base(m_origin, m_direction, m_distance) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_direction1;
		float L_2 = ___m_distance2;
		Cast__ctor_m29331AB56757D1EC99EC474607114FCDB7CE5838(__this, L_0, L_1, L_2, NULL);
		// radius = m_radius;
		float L_3 = ___m_radius3;
		__this->___radius_2 = L_3;
		// }
		return;
	}
}
// System.Void Raycasting.SphereCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_m30A7FAC3838AAC24E361A0CABB302F9F0CE4AB3A (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, float ___m_radius2, const RuntimeMethod* method) 
{
	{
		// public SphereCast(Vector3 m_origin, Vector3 m_end, float m_radius) : base(m_origin, m_end) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_end1;
		Cast__ctor_mF3A1F010BC05BBDBA9EABBAE1CD1AE28426E23A8(__this, L_0, L_1, NULL);
		// radius = m_radius;
		float L_2 = ___m_radius2;
		__this->___radius_2 = L_2;
		// }
		return;
	}
}
// System.Void Raycasting.SphereCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_mAF44374B69E3BE0AD07DA76ED9CD4BD1DB42C3D2 (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_direction1, float ___m_distance2, float ___m_radius3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin4, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd5, const RuntimeMethod* method) 
{
	{
		// public SphereCast(Vector3 m_origin, Vector3 m_direction, float m_distance, float m_radius,Transform m_parentOrigin, Transform m_parentEnd) : base(m_origin, m_direction, m_distance, m_parentOrigin, m_parentEnd) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_direction1;
		float L_2 = ___m_distance2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___m_parentOrigin4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___m_parentEnd5;
		Cast__ctor_mE49D6EF4464446A08B6C2033FDA58C6EDB0AAE39(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// setRadius(m_radius);
		float L_5 = ___m_radius3;
		SphereCast_setRadius_mD101C6ACB4DB11381C205DEAF3C2590B3BDADE3F(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Raycasting.SphereCast::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast__ctor_m7CA80A479CED3E65EFFAC3658F25F280E543EAED (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_end1, float ___m_radius2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentOrigin3, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_parentEnd4, const RuntimeMethod* method) 
{
	{
		// public SphereCast(Vector3 m_origin, Vector3 m_end, float m_radius, Transform m_parentOrigin,Transform m_parentEnd) : base(m_origin, m_end, m_parentOrigin, m_parentEnd) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___m_origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___m_end1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___m_parentOrigin3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___m_parentEnd4;
		Cast__ctor_m2E452FADBF32B214B5E81FE68FB713C1EDC13B76(__this, L_0, L_1, L_2, L_3, NULL);
		// setRadius(m_radius);
		float L_4 = ___m_radius2;
		SphereCast_setRadius_mD101C6ACB4DB11381C205DEAF3C2590B3BDADE3F(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Single Raycasting.SphereCast::getRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCast_getRadius_mDBB90ED60C17820936E7FD96658DF3912C749F4C (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float getRadius() { return (origin.getParent() == null) ? radius : origin.getParent().lossyScale.z * radius; }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = ((Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807*)__this)->___origin_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_3 = ((Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807*)__this)->___origin_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_4, NULL);
		float L_6 = L_5.___z_4;
		float L_7 = __this->___radius_2;
		return ((float)il2cpp_codegen_multiply(L_6, L_7));
	}

IL_0030:
	{
		float L_8 = __this->___radius_2;
		return L_8;
	}
}
// System.Void Raycasting.SphereCast::setRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast_setRadius_mD101C6ACB4DB11381C205DEAF3C2590B3BDADE3F (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, float ___m_radius0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* G_B2_0 = NULL;
	SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* G_B3_1 = NULL;
	{
		// public void setRadius(float m_radius) { radius = (origin.getParent() == null) ? m_radius : m_radius / origin.getParent().lossyScale.z; }
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_0 = ((Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807*)__this)->___origin_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		float L_3 = ___m_radius0;
		PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* L_4 = ((Cast_t51E61F7E7CB3A5A5F0988706FF89A9C53A60B807*)__this)->___origin_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_5, NULL);
		float L_7 = L_6.___z_4;
		G_B3_0 = ((float)(L_3/L_7));
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_002d:
	{
		float L_8 = ___m_radius0;
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___radius_2 = G_B3_0;
		// public void setRadius(float m_radius) { radius = (origin.getParent() == null) ? m_radius : m_radius / origin.getParent().lossyScale.z; }
		return;
	}
}
// System.Boolean Raycasting.SphereCast::castRay(UnityEngine.RaycastHit&,UnityEngine.LayerMask,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereCast_castRay_m87962A09CBA3F4E90C600424839CA32BB9590418 (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo0, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask1, int32_t ___q2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = getDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394(__this, NULL);
		V_0 = L_0;
		// return Physics.SphereCast(getOrigin(), getRadius(), v.normalized, out hitInfo, v.magnitude, layerMask, q);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		float L_2;
		L_2 = SphereCast_getRadius_mDBB90ED60C17820936E7FD96658DF3912C749F4C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = ___hitInfo0;
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_6 = ___layerMask1;
		int32_t L_7;
		L_7 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_6, NULL);
		int32_t L_8 = ___q2;
		bool L_9;
		L_9 = Physics_SphereCast_mDB2140FE8561D0CE870037527DACC44AB18A346D(L_1, L_2, L_3, L_4, L_5, L_7, L_8, NULL);
		return L_9;
	}
}
// UnityEngine.RaycastHit[] Raycasting.SphereCast::castRayAll(UnityEngine.LayerMask,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* SphereCast_castRayAll_m5CFB5957DF0F6AF93D59009E30B15C3A778642B4 (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask0, int32_t ___q1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 v = getDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getDirection_m1C8DEEE629B92CEDBD2CC297626A850EAC559394(__this, NULL);
		V_0 = L_0;
		// return Physics.SphereCastAll(getOrigin(), getRadius(), v.normalized, v.magnitude, layerMask, q);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		float L_2;
		L_2 = SphereCast_getRadius_mDBB90ED60C17820936E7FD96658DF3912C749F4C(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = ___layerMask0;
		int32_t L_6;
		L_6 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_5, NULL);
		int32_t L_7 = ___q1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_8;
		L_8 = Physics_SphereCastAll_mE651DDBD29BBBBC4E3D33BBDE3C9C082ACFCB91C(L_1, L_2, L_3, L_4, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void Raycasting.SphereCast::draw(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCast_draw_mDC6CE71217D5A9E8553F744E51A936B12217AACC (SphereCast_t36ABE7FDB3939C1E4AC6F53C78B275026AC2096E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___col0, float ___duration1, const RuntimeMethod* method) 
{
	{
		// DebugShapes.DrawSphereRay(getOrigin(), getEnd(), getRadius(), 5, col,duration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Cast_getOrigin_m66E6E050B52173E5BDF833BD89A91E1D965D2C4E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Cast_getEnd_m84DEC8DC425449FF20DA2DDD3417EBB8868E79FA(__this, NULL);
		float L_2;
		L_2 = SphereCast_getRadius_mDBB90ED60C17820936E7FD96658DF3912C749F4C(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___col0;
		float L_4 = ___duration1;
		DebugShapes_DrawSphereRay_m6F30D17F3CFE821685DC2A1227004FB2ABECF983(L_0, L_1, L_2, 5, L_3, L_4, NULL);
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
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::get_drawMeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandVisualizer_get_drawMeshes_mEBD536228E24E3D46356C9A35F32388A6951F73D (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DrawMeshes;
		bool L_0 = __this->___m_DrawMeshes_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::set_drawMeshes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_set_drawMeshes_mFC97C01F6F83B52DA5B96EB72033045D0784B2FB (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_DrawMeshes = value;
		bool L_0 = ___value0;
		__this->___m_DrawMeshes_9 = L_0;
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_1 = __this->___m_LeftHandGameObjects_15;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDrawMesh(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_LeftHandGameObjects_15;
		bool L_3 = ___value0;
		NullCheck(L_2);
		HandGameObjects_ToggleDrawMesh_m18BC1822E2ED3491763263316059C643A16FADEA(L_2, L_3, NULL);
	}

IL_001b:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_4 = __this->___m_RightHandGameObjects_16;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// m_RightHandGameObjects.ToggleDrawMesh(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_5 = __this->___m_RightHandGameObjects_16;
		bool L_6 = ___value0;
		NullCheck(L_5);
		HandGameObjects_ToggleDrawMesh_m18BC1822E2ED3491763263316059C643A16FADEA(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::get_debugDrawJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandVisualizer_get_debugDrawJoints_m50CAA5EEC5BA2ACC500BA0A7FA9D0A3178F24CFB (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DebugDrawJoints;
		bool L_0 = __this->___m_DebugDrawJoints_11;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::set_debugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_set_debugDrawJoints_mB4DE9003EA532788DB19B9B0E08AF72638B9BC5C (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_DebugDrawJoints = value;
		bool L_0 = ___value0;
		__this->___m_DebugDrawJoints_11 = L_0;
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_1 = __this->___m_LeftHandGameObjects_15;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_LeftHandGameObjects.ToggleDebugDrawJoints(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_LeftHandGameObjects_15;
		bool L_3 = ___value0;
		NullCheck(L_2);
		HandGameObjects_ToggleDebugDrawJoints_m749C9ABC2021AA41B889F811299E49FD3A7B5AAC(L_2, L_3, NULL);
	}

IL_001b:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_4 = __this->___m_RightHandGameObjects_16;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// m_RightHandGameObjects.ToggleDebugDrawJoints(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_5 = __this->___m_RightHandGameObjects_16;
		bool L_6 = ___value0;
		NullCheck(L_5);
		HandGameObjects_ToggleDebugDrawJoints_m749C9ABC2021AA41B889F811299E49FD3A7B5AAC(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::get_velocityType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandVisualizer_get_velocityType_mC772311B2897BBD9DA230D9EB0A45518D6B936A6 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// get => m_VelocityType;
		int32_t L_0 = __this->___m_VelocityType_13;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::set_velocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_set_velocityType_mC931B474F132557D5BC37DD3DA8B37C390012597 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// m_VelocityType = value;
		int32_t L_0 = ___value0;
		__this->___m_VelocityType_13 = L_0;
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_1 = __this->___m_LeftHandGameObjects_15;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_LeftHandGameObjects.SetVelocityType(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_LeftHandGameObjects_15;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		HandGameObjects_SetVelocityType_m08DD81D0B70B2361C0E23B719E966977CBECBD40(L_2, L_3, NULL);
	}

IL_001b:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_4 = __this->___m_RightHandGameObjects_16;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// m_RightHandGameObjects.SetVelocityType(value);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_5 = __this->___m_RightHandGameObjects_16;
		int32_t L_6 = ___value0;
		NullCheck(L_5);
		HandGameObjects_SetVelocityType_m08DD81D0B70B2361C0E23B719E966977CBECBD40(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_Awake_m68C346DAC8FB921B95D0478247D32D26A093A6BD (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UseOptimizedControls)
		bool L_0 = __this->___m_UseOptimizedControls_4;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// InputSystem.InputSystem.settings.SetInternalFeatureFlag("USE_OPTIMIZED_CONTROLS", true);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_1;
		L_1 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		NullCheck(L_1);
		InputSettings_SetInternalFeatureFlag_mF593642B414A97107C5F4835FDFB2F185F1933E0(L_1, _stringLiteralE16EED961058125D81E09FCA0B5A362770A7CAB5, (bool)1, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_Update_m2663BD142BCB7B06D0A91B1405BA43CFDFE25F26 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// void Update() => TryEnsureInitialized();
		bool L_0;
		L_0 = HandVisualizer_TryEnsureInitialized_m45333AF6092C9A6916F872FFE5492BFC7C9FCC9B(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnEnable_m7B256CADEA420C148464C32AC380B86352FCEE6B (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B2_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B1_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B5_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B4_0 = NULL;
	{
		// m_LeftHandGameObjects?.OnEnable();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_0 = __this->___m_LeftHandGameObjects_15;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		HandGameObjects_OnEnable_mAAADFF61F0C8611FAA69878EB0074E6126C075EB(G_B2_0, NULL);
	}

IL_0011:
	{
		// m_RightHandGameObjects?.OnEnable();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_RightHandGameObjects_16;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B5_0);
		HandGameObjects_OnEnable_mAAADFF61F0C8611FAA69878EB0074E6126C075EB(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnDisable_m224056E408532877FA530ED927A1903C3EB6ECB9 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B4_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B3_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B7_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B6_0 = NULL;
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_14;
		if (!L_0)
		{
			goto IL_0084;
		}
	}
	{
		// m_Subsystem.trackingAcquired -= OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_1 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = L_1;
		NullCheck(L_2);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_3 = L_2->___trackingAcquired_8;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_4 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_4, __this, (intptr_t)((void*)HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___trackingAcquired_8 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_5, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___trackingAcquired_8), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_5, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost -= OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_6 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7 = L_6;
		NullCheck(L_7);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_8 = L_7->___trackingLost_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_9 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_9, __this, (intptr_t)((void*)HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		NullCheck(L_7);
		L_7->___trackingLost_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_10, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___trackingLost_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_10, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands -= OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_11 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_12 = L_11;
		NullCheck(L_12);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_13 = L_12->___updatedHands_7;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_14 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_14, __this, (intptr_t)((void*)HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495_RuntimeMethod_var), NULL);
		Delegate_t* L_15;
		L_15 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_13, L_14, NULL);
		NullCheck(L_12);
		L_12->___updatedHands_7 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_15, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___updatedHands_7), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_15, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		// m_Subsystem = null;
		__this->___m_Subsystem_14 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_14), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
	}

IL_0084:
	{
		// m_LeftHandGameObjects?.OnDisable();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_16 = __this->___m_LeftHandGameObjects_15;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_17 = L_16;
		G_B3_0 = L_17;
		if (L_17)
		{
			G_B4_0 = L_17;
			goto IL_0090;
		}
	}
	{
		goto IL_0095;
	}

IL_0090:
	{
		NullCheck(G_B4_0);
		HandGameObjects_OnDisable_m5C5BA503FEEAFDB115192791D60BC10FBDFB1CCD(G_B4_0, NULL);
	}

IL_0095:
	{
		// m_RightHandGameObjects?.OnDisable();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_18 = __this->___m_RightHandGameObjects_16;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_19 = L_18;
		G_B6_0 = L_19;
		if (L_19)
		{
			G_B7_0 = L_19;
			goto IL_00a0;
		}
	}
	{
		return;
	}

IL_00a0:
	{
		NullCheck(G_B7_0);
		HandGameObjects_OnDisable_m5C5BA503FEEAFDB115192791D60BC10FBDFB1CCD(G_B7_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnDestroy_m512D9DE081C65D90CDA767542BC2FA3362B4DC7E (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// if (m_LeftHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_0 = __this->___m_LeftHandGameObjects_15;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// m_LeftHandGameObjects.OnDestroy();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_1 = __this->___m_LeftHandGameObjects_15;
		NullCheck(L_1);
		HandGameObjects_OnDestroy_mBE89E1B0A9B41D3ACCB22C33A3CEBF49324ACB51(L_1, NULL);
		// m_LeftHandGameObjects = null;
		__this->___m_LeftHandGameObjects_15 = (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_15), (void*)(HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)NULL);
	}

IL_001a:
	{
		// if (m_RightHandGameObjects != null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_RightHandGameObjects_16;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// m_RightHandGameObjects.OnDestroy();
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_3 = __this->___m_RightHandGameObjects_16;
		NullCheck(L_3);
		HandGameObjects_OnDestroy_mBE89E1B0A9B41D3ACCB22C33A3CEBF49324ACB51(L_3, NULL);
		// m_RightHandGameObjects = null;
		__this->___m_RightHandGameObjects_16 = (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_16), (void*)(HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::TryEnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandVisualizer_TryEnsureInitialized_m45333AF6092C9A6916F872FFE5492BFC7C9FCC9B (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B4_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B4_1 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B3_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B3_1 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B9_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B9_1 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B6_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B6_1 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B5_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B5_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B8_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B8_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B7_0 = NULL;
	HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* G_B7_1 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B14_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B15_1 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B19_0 = NULL;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* G_B20_1 = NULL;
	{
		// if (m_Subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_14;
		if (!L_0)
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
		// m_Subsystem = XRGeneralSettings.Instance?.Manager?.activeLoader?.GetLoadedSubsystem<XRHandSubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1;
		L_1 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2 = L_1;
		G_B3_0 = L_2;
		G_B3_1 = __this;
		if (L_2)
		{
			G_B4_0 = L_2;
			G_B4_1 = __this;
			goto IL_0017;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		G_B9_1 = G_B3_1;
		goto IL_0034;
	}

IL_0017:
	{
		NullCheck(G_B4_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(G_B4_0, NULL);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4 = L_3;
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
		if (L_4)
		{
			G_B6_0 = L_4;
			G_B6_1 = G_B4_1;
			goto IL_0023;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		G_B9_1 = G_B5_1;
		goto IL_0034;
	}

IL_0023:
	{
		NullCheck(G_B6_0);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(G_B6_0, NULL);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_6 = L_5;
		G_B7_0 = L_6;
		G_B7_1 = G_B6_1;
		if (L_6)
		{
			G_B8_0 = L_6;
			G_B8_1 = G_B6_1;
			goto IL_002f;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_0034;
	}

IL_002f:
	{
		NullCheck(G_B8_0);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7;
		L_7 = GenericVirtualFuncInvoker0< XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var, G_B8_0);
		G_B9_0 = L_7;
		G_B9_1 = G_B8_1;
	}

IL_0034:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_Subsystem_14 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_Subsystem_14), (void*)G_B9_0);
		// if (m_Subsystem == null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = __this->___m_Subsystem_14;
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// if (m_LeftHandGameObjects == null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_9 = __this->___m_LeftHandGameObjects_15;
		if (L_9)
		{
			goto IL_00c6;
		}
	}
	{
		// var leftHandTracked = m_Subsystem.leftHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_10 = __this->___m_Subsystem_14;
		NullCheck(L_10);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_11;
		L_11 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_10, NULL);
		V_2 = L_11;
		bool L_12;
		L_12 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_2), NULL);
		V_1 = L_12;
		// m_LeftHandGameObjects = new HandGameObjects(true, transform, m_LeftHandMesh, m_HandMeshMaterial, m_DebugDrawPrefab, m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftHandMesh_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_DebugDrawPrefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___m_VelocityPrefab_12;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_18 = (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)il2cpp_codegen_object_new(HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B(L_18, (bool)1, L_13, L_14, L_15, L_16, L_17, NULL);
		__this->___m_LeftHandGameObjects_15 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LeftHandGameObjects_15), (void*)L_18);
		// m_LeftHandGameObjects.ForceToggleDrawMesh(m_DrawMeshes && leftHandTracked);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_19 = __this->___m_LeftHandGameObjects_15;
		bool L_20 = __this->___m_DrawMeshes_9;
		bool L_21 = V_1;
		NullCheck(L_19);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_19, (bool)((int32_t)((int32_t)L_20&(int32_t)L_21)), NULL);
		// m_LeftHandGameObjects.ForceToggleDebugDrawJoints(m_DebugDrawJoints && leftHandTracked);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_22 = __this->___m_LeftHandGameObjects_15;
		bool L_23 = __this->___m_DebugDrawJoints_11;
		bool L_24 = V_1;
		NullCheck(L_22);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_22, (bool)((int32_t)((int32_t)L_23&(int32_t)L_24)), NULL);
		// m_LeftHandGameObjects.ForceSetVelocityType(leftHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_25 = __this->___m_LeftHandGameObjects_15;
		bool L_26 = V_1;
		G_B13_0 = L_25;
		if (L_26)
		{
			G_B14_0 = L_25;
			goto IL_00bb;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		goto IL_00c1;
	}

IL_00bb:
	{
		int32_t L_27 = __this->___m_VelocityType_13;
		G_B15_0 = ((int32_t)(L_27));
		G_B15_1 = G_B14_0;
	}

IL_00c1:
	{
		NullCheck(G_B15_1);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(G_B15_1, G_B15_0, NULL);
	}

IL_00c6:
	{
		// var rightHandTracked = m_Subsystem.rightHand.isTracked;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_28 = __this->___m_Subsystem_14;
		NullCheck(L_28);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_29;
		L_29 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_28, NULL);
		V_2 = L_29;
		bool L_30;
		L_30 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline((&V_2), NULL);
		V_0 = L_30;
		// if (m_RightHandGameObjects == null)
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_31 = __this->___m_RightHandGameObjects_16;
		if (L_31)
		{
			goto IL_0149;
		}
	}
	{
		// m_RightHandGameObjects = new HandGameObjects(false, transform, m_RightHandMesh, m_HandMeshMaterial, m_DebugDrawPrefab, m_VelocityPrefab);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___m_RightHandMesh_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34 = __this->___m_HandMeshMaterial_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___m_DebugDrawPrefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___m_VelocityPrefab_12;
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_37 = (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01*)il2cpp_codegen_object_new(HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B(L_37, (bool)0, L_32, L_33, L_34, L_35, L_36, NULL);
		__this->___m_RightHandGameObjects_16 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RightHandGameObjects_16), (void*)L_37);
		// m_RightHandGameObjects.ForceToggleDrawMesh(m_DrawMeshes && rightHandTracked);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_38 = __this->___m_RightHandGameObjects_16;
		bool L_39 = __this->___m_DrawMeshes_9;
		bool L_40 = V_0;
		NullCheck(L_38);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_38, (bool)((int32_t)((int32_t)L_39&(int32_t)L_40)), NULL);
		// m_RightHandGameObjects.ForceToggleDebugDrawJoints(m_DebugDrawJoints && rightHandTracked);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_41 = __this->___m_RightHandGameObjects_16;
		bool L_42 = __this->___m_DebugDrawJoints_11;
		bool L_43 = V_0;
		NullCheck(L_41);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_41, (bool)((int32_t)((int32_t)L_42&(int32_t)L_43)), NULL);
		// m_RightHandGameObjects.ForceSetVelocityType(rightHandTracked ? m_VelocityType : VelocityType.None);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_44 = __this->___m_RightHandGameObjects_16;
		bool L_45 = V_0;
		G_B18_0 = L_44;
		if (L_45)
		{
			G_B19_0 = L_44;
			goto IL_013e;
		}
	}
	{
		G_B20_0 = 2;
		G_B20_1 = G_B18_0;
		goto IL_0144;
	}

IL_013e:
	{
		int32_t L_46 = __this->___m_VelocityType_13;
		G_B20_0 = ((int32_t)(L_46));
		G_B20_1 = G_B19_0;
	}

IL_0144:
	{
		NullCheck(G_B20_1);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(G_B20_1, G_B20_0, NULL);
	}

IL_0149:
	{
		// m_Subsystem.trackingAcquired += OnTrackingAcquired;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_47 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_48 = L_47;
		NullCheck(L_48);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_49 = L_48->___trackingAcquired_8;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_50 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_50, __this, (intptr_t)((void*)HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC_RuntimeMethod_var), NULL);
		Delegate_t* L_51;
		L_51 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_49, L_50, NULL);
		NullCheck(L_48);
		L_48->___trackingAcquired_8 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_51, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___trackingAcquired_8), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_51, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.trackingLost += OnTrackingLost;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_52 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_53 = L_52;
		NullCheck(L_53);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_54 = L_53->___trackingLost_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_55 = (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)il2cpp_codegen_object_new(Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action_1__ctor_m853F8C94BDD185D55096797BC53A6FF2038389BC(L_55, __this, (intptr_t)((void*)HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87_RuntimeMethod_var), NULL);
		Delegate_t* L_56;
		L_56 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_54, L_55, NULL);
		NullCheck(L_53);
		L_53->___trackingLost_9 = ((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_56, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___trackingLost_9), (void*)((Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*)Castclass((RuntimeObject*)L_56, Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752_il2cpp_TypeInfo_var)));
		// m_Subsystem.updatedHands += OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_57 = __this->___m_Subsystem_14;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_58 = L_57;
		NullCheck(L_58);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_59 = L_58->___updatedHands_7;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_60 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_60, __this, (intptr_t)((void*)HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495_RuntimeMethod_var), NULL);
		Delegate_t* L_61;
		L_61 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_59, L_60, NULL);
		NullCheck(L_58);
		L_58->___updatedHands_7 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_61, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_58->___updatedHands_7), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_61, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnTrackingAcquired(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnTrackingAcquired_mA39180291D6E4174ABE47901D1B77C19F15A5FFC (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0011:
	{
		// m_LeftHandGameObjects.ForceToggleDrawMesh(m_DrawMeshes);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_3 = __this->___m_LeftHandGameObjects_15;
		bool L_4 = __this->___m_DrawMeshes_9;
		NullCheck(L_3);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_3, L_4, NULL);
		// m_LeftHandGameObjects.ForceToggleDebugDrawJoints(m_DebugDrawJoints);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_5 = __this->___m_LeftHandGameObjects_15;
		bool L_6 = __this->___m_DebugDrawJoints_11;
		NullCheck(L_5);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_5, L_6, NULL);
		// m_LeftHandGameObjects.ForceSetVelocityType(m_VelocityType);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_7 = __this->___m_LeftHandGameObjects_15;
		int32_t L_8 = __this->___m_VelocityType_13;
		NullCheck(L_7);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(L_7, L_8, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// m_RightHandGameObjects.ForceToggleDrawMesh(m_DrawMeshes);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_9 = __this->___m_RightHandGameObjects_16;
		bool L_10 = __this->___m_DrawMeshes_9;
		NullCheck(L_9);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_9, L_10, NULL);
		// m_RightHandGameObjects.ForceToggleDebugDrawJoints(m_DebugDrawJoints);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_11 = __this->___m_RightHandGameObjects_16;
		bool L_12 = __this->___m_DebugDrawJoints_11;
		NullCheck(L_11);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_11, L_12, NULL);
		// m_RightHandGameObjects.ForceSetVelocityType(m_VelocityType);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_13 = __this->___m_RightHandGameObjects_16;
		int32_t L_14 = __this->___m_VelocityType_13;
		NullCheck(L_13);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnTrackingLost(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnTrackingLost_m252559EA64532D315A85615AE2E0B622586E2F87 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (hand.handedness)
		int32_t L_0;
		L_0 = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline((&___hand0), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}

IL_0011:
	{
		// m_LeftHandGameObjects.ForceToggleDrawMesh(false);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_3 = __this->___m_LeftHandGameObjects_15;
		NullCheck(L_3);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_3, (bool)0, NULL);
		// m_LeftHandGameObjects.ForceToggleDebugDrawJoints(false);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_4 = __this->___m_LeftHandGameObjects_15;
		NullCheck(L_4);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_4, (bool)0, NULL);
		// m_LeftHandGameObjects.ForceSetVelocityType(VelocityType.None);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_5 = __this->___m_LeftHandGameObjects_15;
		NullCheck(L_5);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(L_5, 2, NULL);
		// break;
		return;
	}

IL_0036:
	{
		// m_RightHandGameObjects.ForceToggleDrawMesh(false);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_6 = __this->___m_RightHandGameObjects_16;
		NullCheck(L_6);
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(L_6, (bool)0, NULL);
		// m_RightHandGameObjects.ForceToggleDebugDrawJoints(false);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_7 = __this->___m_RightHandGameObjects_16;
		NullCheck(L_7);
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(L_7, (bool)0, NULL);
		// m_RightHandGameObjects.ForceSetVelocityType(VelocityType.None);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_8 = __this->___m_RightHandGameObjects_16;
		NullCheck(L_8);
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(L_8, 2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer_OnUpdatedHands_mC19059B8988F08838A51B9EB2896846D4B8CD495 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___subsystem0, int32_t ___updateSuccessFlags1, int32_t ___updateType2, const RuntimeMethod* method) 
{
	{
		// if (updateType == XRHandSubsystem.UpdateType.Dynamic)
		int32_t L_0 = ___updateType2;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose) != XRHandSubsystem.UpdateSuccessFlags.None)
		int32_t L_1 = ___updateSuccessFlags1;
		if (!((int32_t)((int32_t)L_1&1)))
		{
			goto IL_001a;
		}
	}
	{
		// m_LeftHandGameObjects.UpdateRootPose(subsystem.leftHand);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_2 = __this->___m_LeftHandGameObjects_15;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = ___subsystem0;
		NullCheck(L_3);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_4;
		L_4 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_3, NULL);
		NullCheck(L_2);
		HandGameObjects_UpdateRootPose_mBEFC94F23B1194A808CAA45E243891465B457672(L_2, L_4, NULL);
	}

IL_001a:
	{
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints) != XRHandSubsystem.UpdateSuccessFlags.None)
		int32_t L_5 = ___updateSuccessFlags1;
		if (!((int32_t)((int32_t)L_5&2)))
		{
			goto IL_003b;
		}
	}
	{
		// m_LeftHandGameObjects.UpdateJoints(m_Origin, m_Subsystem.leftHand);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_6 = __this->___m_LeftHandGameObjects_15;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = __this->___m_Subsystem_14;
		NullCheck(L_8);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_9;
		L_9 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_8, NULL);
		NullCheck(L_6);
		HandGameObjects_UpdateJoints_m7CEACDF09D7AA64D4C29658D87665241E9C94BC4(L_6, L_7, L_9, NULL);
	}

IL_003b:
	{
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose) != XRHandSubsystem.UpdateSuccessFlags.None)
		int32_t L_10 = ___updateSuccessFlags1;
		if (!((int32_t)((int32_t)L_10&4)))
		{
			goto IL_0051;
		}
	}
	{
		// m_RightHandGameObjects.UpdateRootPose(subsystem.rightHand);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_11 = __this->___m_RightHandGameObjects_16;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_12 = ___subsystem0;
		NullCheck(L_12);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_13;
		L_13 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_12, NULL);
		NullCheck(L_11);
		HandGameObjects_UpdateRootPose_mBEFC94F23B1194A808CAA45E243891465B457672(L_11, L_13, NULL);
	}

IL_0051:
	{
		// if ((updateSuccessFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandJoints) != XRHandSubsystem.UpdateSuccessFlags.None)
		int32_t L_14 = ___updateSuccessFlags1;
		if (!((int32_t)((int32_t)L_14&8)))
		{
			goto IL_0072;
		}
	}
	{
		// m_RightHandGameObjects.UpdateJoints(m_Origin, m_Subsystem.rightHand);
		HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* L_15 = __this->___m_RightHandGameObjects_16;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_16 = __this->___m_Origin_5;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_17 = __this->___m_Subsystem_14;
		NullCheck(L_17);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_18;
		L_18 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_17, NULL);
		NullCheck(L_15);
		HandGameObjects_UpdateJoints_m7CEACDF09D7AA64D4C29658D87665241E9C94BC4(L_15, L_16, L_18, NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisualizer__ctor_m00A312DDB1A4D6EB7E7BA9A19446D91B23241735 (HandVisualizer_tFBA51A79E9A63BDACDF20AA6E101ED7F6E1E1205* __this, const RuntimeMethod* method) 
{
	{
		// bool m_UseOptimizedControls = true;
		__this->___m_UseOptimizedControls_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::.ctor(System.Boolean,UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Material,UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___isLeft0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meshPrefab2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___meshMaterial3, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___debugDrawPrefab4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___velocityPrefab5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4955D176516025430352DFFE6DF5974DEB47AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_1 = NULL;
	{
		// Transform[] m_JointXforms = new Transform[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_JointXforms_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JointXforms_2), (void*)L_1);
		// GameObject[] m_DrawJoints = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___m_DrawJoints_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJoints_3), (void*)L_3);
		// GameObject[] m_VelocityParents = new GameObject[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_4;
		L_4 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___m_VelocityParents_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VelocityParents_4), (void*)L_5);
		// LineRenderer[] m_Lines = new LineRenderer[XRHandJointID.EndMarker.ToIndex()];
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_7 = (LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A*)SZArrayNew(LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___m_Lines_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Lines_5), (void*)L_7);
		// Vector3[] m_LinePointsReuse = new Vector3[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_LinePointsReuse_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LinePointsReuse_9), (void*)L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___debugDrawPrefab4;
		(&V_0)->___debugDrawPrefab_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___debugDrawPrefab_1), (void*)L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___velocityPrefab5;
		(&V_0)->___velocityPrefab_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___velocityPrefab_2), (void*)L_10);
		// public HandGameObjects(
		//     bool isLeft,
		//     Transform parent,
		//     GameObject meshPrefab,
		//     Material meshMaterial,
		//     GameObject debugDrawPrefab,
		//     GameObject velocityPrefab)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		(&V_0)->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_0), (void*)__this);
		// m_HandRoot = GameObject.Instantiate(meshPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___meshPrefab2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___m_HandRoot_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)L_12);
		// m_HandRoot.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_HandRoot_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___parent1;
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_15, NULL);
		// m_HandRoot.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_HandRoot_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_18, NULL);
		// m_HandRoot.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_HandRoot_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_21, NULL);
		// Transform wristRootXform = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_2 = 0;
		goto IL_0121;
	}

IL_00c1:
	{
		// var child = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_HandRoot_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, L_24, NULL);
		V_3 = L_25;
		// if (child.gameObject.name.EndsWith(XRHandJointID.Wrist.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_3;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		V_4 = 1;
		Il2CppFakeBox<int32_t> L_29(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_30;
		L_30 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_29), NULL);
		NullCheck(L_28);
		bool L_31;
		L_31 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00f9;
		}
	}
	{
		// wristRootXform = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_3;
		V_1 = L_32;
		goto IL_011d;
	}

IL_00f9:
	{
		// else if (child.gameObject.name.EndsWith("Hand"))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_3;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		NullCheck(L_35);
		bool L_36;
		L_36 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_35, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_36)
		{
			goto IL_011d;
		}
	}
	{
		// child.GetComponent<SkinnedMeshRenderer>().sharedMaterial = meshMaterial;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_3;
		NullCheck(L_37);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_38;
		L_38 = Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0(L_37, Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = ___meshMaterial3;
		NullCheck(L_38);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_38, L_39, NULL);
	}

IL_011d:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0121:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_41 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___m_HandRoot_0;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_43, NULL);
		if ((((int32_t)L_41) < ((int32_t)L_44)))
		{
			goto IL_00c1;
		}
	}
	{
		// m_DrawJointsParent = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_45, NULL);
		__this->___m_DrawJointsParent_1 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)L_45);
		// m_DrawJointsParent.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___m_DrawJointsParent_1;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = ___parent1;
		NullCheck(L_47);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_47, L_48, NULL);
		// m_DrawJointsParent.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___m_DrawJointsParent_1;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_50);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_50, L_51, NULL);
		// m_DrawJointsParent.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___m_DrawJointsParent_1;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_53);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_53, L_54, NULL);
		// m_DrawJointsParent.name = (isLeft ? "Left" : "Right") + "HandDebugDrawJoints";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___m_DrawJointsParent_1;
		bool L_56 = ___isLeft0;
		G_B8_0 = L_55;
		if (L_56)
		{
			G_B9_0 = L_55;
			goto IL_018a;
		}
	}
	{
		G_B10_0 = _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
		G_B10_1 = G_B8_0;
		goto IL_018f;
	}

IL_018a:
	{
		G_B10_0 = _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
		G_B10_1 = G_B9_0;
	}

IL_018f:
	{
		String_t* L_57;
		L_57 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B10_0, _stringLiteral4A4955D176516025430352DFFE6DF5974DEB47AB, NULL);
		NullCheck(G_B10_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B10_1, L_57, NULL);
		// AssignJoint(XRHandJointID.Wrist, wristRootXform, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___m_DrawJointsParent_1;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F(__this, 1, L_58, L_60, (&V_0), NULL);
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		V_5 = 0;
		goto IL_034a;
	}

IL_01bb:
	{
		// var child = wristRootXform.GetChild(childIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = V_1;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_61, L_62, NULL);
		V_6 = L_63;
		// if (child.name.EndsWith(XRHandJointID.Palm.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64 = V_6;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_64, NULL);
		V_4 = 2;
		Il2CppFakeBox<int32_t> L_66(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_67;
		L_67 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_66), NULL);
		NullCheck(L_65);
		bool L_68;
		L_68 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01fe;
		}
	}
	{
		// AssignJoint(XRHandJointID.Palm, child, m_DrawJointsParent.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69 = V_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = __this->___m_DrawJointsParent_1;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F(__this, 2, L_69, L_71, (&V_0), NULL);
		// continue;
		goto IL_0344;
	}

IL_01fe:
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_7 = 0;
		goto IL_033c;
	}

IL_0206:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_72 = V_7;
		V_8 = L_72;
		// var jointIdFront = fingerId.GetFrontJointID();
		int32_t L_73 = V_8;
		int32_t L_74;
		L_74 = XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313(L_73, NULL);
		V_9 = L_74;
		// if (!child.name.EndsWith(jointIdFront.ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = V_6;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_75, NULL);
		Il2CppFakeBox<int32_t> L_77(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_9));
		String_t* L_78;
		L_78 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_77), NULL);
		NullCheck(L_76);
		bool L_79;
		L_79 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_76, L_78, NULL);
		if (!L_79)
		{
			goto IL_0336;
		}
	}
	{
		// AssignJoint(jointIdFront, child, m_DrawJointsParent.transform);
		int32_t L_80 = V_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81 = V_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = __this->___m_DrawJointsParent_1;
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F(__this, L_80, L_81, L_83, (&V_0), NULL);
		// var lastChild = child;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = V_6;
		V_10 = L_84;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_85 = V_8;
		int32_t L_86;
		L_86 = XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F(L_85, NULL);
		int32_t L_87;
		L_87 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_86, NULL);
		V_11 = L_87;
		// for (int jointIndex = jointIdFront.ToIndex() + 1;
		int32_t L_88 = V_9;
		int32_t L_89;
		L_89 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_88, NULL);
		V_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_032d;
	}

IL_026a:
	{
		// Transform nextChild = null;
		V_13 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		V_15 = 0;
		goto IL_02ad;
	}

IL_0272:
	{
		// nextChild = lastChild.GetChild(nextChildIndex);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90 = V_10;
		int32_t L_91 = V_15;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_90, L_91, NULL);
		V_13 = L_92;
		// if (nextChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_13;
		NullCheck(L_93);
		String_t* L_94;
		L_94 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_93, NULL);
		int32_t L_95 = V_12;
		int32_t L_96;
		L_96 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_95, NULL);
		V_4 = L_96;
		Il2CppFakeBox<int32_t> L_97(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_98;
		L_98 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_97), NULL);
		NullCheck(L_94);
		bool L_99;
		L_99 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_94, L_98, NULL);
		if (!L_99)
		{
			goto IL_02a7;
		}
	}
	{
		// lastChild = nextChild;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = V_13;
		V_10 = L_100;
		// break;
		goto IL_02b8;
	}

IL_02a7:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_101 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_02ad:
	{
		// for (int nextChildIndex = 0; nextChildIndex < lastChild.childCount; ++nextChildIndex)
		int32_t L_102 = V_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = V_10;
		NullCheck(L_103);
		int32_t L_104;
		L_104 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_103, NULL);
		if ((((int32_t)L_102) < ((int32_t)L_104)))
		{
			goto IL_0272;
		}
	}

IL_02b8:
	{
		// if (!lastChild.name.EndsWith(XRHandJointIDUtility.FromIndex(jointIndex).ToString()))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105 = V_10;
		NullCheck(L_105);
		String_t* L_106;
		L_106 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_105, NULL);
		int32_t L_107 = V_12;
		int32_t L_108;
		L_108 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_107, NULL);
		V_4 = L_108;
		Il2CppFakeBox<int32_t> L_109(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_110;
		L_110 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_109), NULL);
		NullCheck(L_106);
		bool L_111;
		L_111 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_106, L_110, NULL);
		if (L_111)
		{
			goto IL_0307;
		}
	}
	{
		// throw new InvalidOperationException("Hand transform hierarchy not set correctly - couldn't find " + XRHandJointIDUtility.FromIndex(jointIndex).ToString() + " joint!");
		int32_t L_112 = V_12;
		int32_t L_113;
		L_113 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_112, NULL);
		V_4 = L_113;
		Il2CppFakeBox<int32_t> L_114(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var)), (&V_4));
		String_t* L_115;
		L_115 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_114), NULL);
		String_t* L_116;
		L_116 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA669C5E797F155D12E27827640DACC40DA825122)), L_115, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_117 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_117);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_117, L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HandGameObjects__ctor_mF8DCFE87CC258F3B4C7247A1CEB19FDE1E942D1B_RuntimeMethod_var)));
	}

IL_0307:
	{
		// var jointId = XRHandJointIDUtility.FromIndex(jointIndex);
		int32_t L_118 = V_12;
		int32_t L_119;
		L_119 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_118, NULL);
		V_14 = L_119;
		// AssignJoint(jointId, lastChild, m_DrawJointsParent.transform);
		int32_t L_120 = V_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = V_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___m_DrawJointsParent_1;
		NullCheck(L_122);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F(__this, L_120, L_121, L_123, (&V_0), NULL);
		// ++jointIndex)
		int32_t L_124 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_032d:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_125 = V_12;
		int32_t L_126 = V_11;
		if ((((int32_t)L_125) <= ((int32_t)L_126)))
		{
			goto IL_026a;
		}
	}

IL_0336:
	{
		// ++fingerIndex)
		int32_t L_127 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_033c:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_128 = V_7;
		if ((((int32_t)L_128) <= ((int32_t)4)))
		{
			goto IL_0206;
		}
	}

IL_0344:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_129 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_129, 1));
	}

IL_034a:
	{
		// for (int childIndex = 0; childIndex < wristRootXform.childCount; ++childIndex)
		int32_t L_130 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131 = V_1;
		NullCheck(L_131);
		int32_t L_132;
		L_132 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_131, NULL);
		if ((((int32_t)L_130) < ((int32_t)L_132)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_16 = 0;
		goto IL_03a2;
	}

IL_035c:
	{
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_133 = V_16;
		// var jointId = fingerId.GetFrontJointID();
		int32_t L_134;
		L_134 = XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313(L_133, NULL);
		V_17 = L_134;
		// if (m_JointXforms[jointId.ToIndex()] == null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_135 = __this->___m_JointXforms_2;
		int32_t L_136 = V_17;
		int32_t L_137;
		L_137 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_136, NULL);
		NullCheck(L_135);
		int32_t L_138 = L_137;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_140;
		L_140 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_139, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_140)
		{
			goto IL_039c;
		}
	}
	{
		// Debug.LogWarning("Hand transform hierarchy not set correctly - couldn't find " + jointId.ToString() + " joint!");
		Il2CppFakeBox<int32_t> L_141(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&V_17));
		String_t* L_142;
		L_142 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_141), NULL);
		String_t* L_143;
		L_143 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA669C5E797F155D12E27827640DACC40DA825122, L_142, _stringLiteralE701633D0984E9EE2E9F6B182E7BDB4FFF845CA5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_143, NULL);
	}

IL_039c:
	{
		// ++fingerIndex)
		int32_t L_144 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_03a2:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_145 = V_16;
		if ((((int32_t)L_145) <= ((int32_t)4)))
		{
			goto IL_035c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDestroy_mBE89E1B0A9B41D3ACCB22C33A3CEBF49324ACB51 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// GameObject.Destroy(m_HandRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// m_HandRoot = null;
		__this->___m_HandRoot_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HandRoot_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0030;
	}

IL_0016:
	{
		// GameObject.Destroy(m_DrawJoints[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// m_DrawJoints[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, NULL);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0030:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___m_DrawJoints_3;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_1 = 0;
		goto IL_0059;
	}

IL_003f:
	{
		// GameObject.Destroy(m_VelocityParents[jointIndex]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_VelocityParents_4;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// m_VelocityParents[jointIndex] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___m_VelocityParents_4;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, NULL);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0059:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_17 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___m_VelocityParents_4;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// GameObject.Destroy(m_DrawJointsParent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_DrawJointsParent_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		// m_DrawJointsParent = null;
		__this->___m_DrawJointsParent_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DrawJointsParent_1), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnEnable_mAAADFF61F0C8611FAA69878EB0074E6126C075EB (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) 
{
	{
		// if (m_DrawMesh)
		bool L_0 = __this->___m_DrawMesh_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// ForceToggleDrawMeshNoCache(true);
		HandGameObjects_ForceToggleDrawMeshNoCache_m3D1CC5FC5B42EAFB754BC88627A3749F736223E5(__this, (bool)1, NULL);
	}

IL_000f:
	{
		// if (m_DebugDrawJoints)
		bool L_1 = __this->___m_DebugDrawJoints_7;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// ForceToggleDebugDrawJointsNoCache(true);
		HandGameObjects_ForceToggleDebugDrawJointsNoCache_m9FC70422C9D297A3828FFACDF1E8011CAE8B8180(__this, (bool)1, NULL);
	}

IL_001e:
	{
		// if (m_VelocityType != VelocityType.None)
		int32_t L_2 = __this->___m_VelocityType_8;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0033;
		}
	}
	{
		// ForceSetVelocityTypeNoCache(m_VelocityType);
		int32_t L_3 = __this->___m_VelocityType_8;
		HandGameObjects_ForceSetVelocityTypeNoCache_mBA2EB47E8BD4F24803983F0E539BD79847CC9848(__this, L_3, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_OnDisable_m5C5BA503FEEAFDB115192791D60BC10FBDFB1CCD (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, const RuntimeMethod* method) 
{
	{
		// if (m_DrawMesh)
		bool L_0 = __this->___m_DrawMesh_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// ForceToggleDrawMeshNoCache(false);
		HandGameObjects_ForceToggleDrawMeshNoCache_m3D1CC5FC5B42EAFB754BC88627A3749F736223E5(__this, (bool)0, NULL);
	}

IL_000f:
	{
		// if (m_DebugDrawJoints)
		bool L_1 = __this->___m_DebugDrawJoints_7;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// ForceToggleDebugDrawJointsNoCache(false);
		HandGameObjects_ForceToggleDebugDrawJointsNoCache_m9FC70422C9D297A3828FFACDF1E8011CAE8B8180(__this, (bool)0, NULL);
	}

IL_001e:
	{
		// if (m_VelocityType != VelocityType.None)
		int32_t L_2 = __this->___m_VelocityType_8;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		// ForceSetVelocityTypeNoCache(VelocityType.None);
		HandGameObjects_ForceSetVelocityTypeNoCache_mBA2EB47E8BD4F24803983F0E539BD79847CC9848(__this, 2, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDrawMesh_m18BC1822E2ED3491763263316059C643A16FADEA (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) 
{
	{
		// if (drawMesh != m_DrawMesh)
		bool L_0 = ___drawMesh0;
		bool L_1 = __this->___m_DrawMesh_6;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// ForceToggleDrawMesh(drawMesh);
		bool L_2 = ___drawMesh0;
		HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3(__this, L_2, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDrawMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDrawMesh_m633FA25EAC5DBAD3771F599C01BFA10011F671E3 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) 
{
	{
		// m_DrawMesh = drawMesh;
		bool L_0 = ___drawMesh0;
		__this->___m_DrawMesh_6 = L_0;
		// ForceToggleDrawMeshNoCache(drawMesh);
		bool L_1 = ___drawMesh0;
		HandGameObjects_ForceToggleDrawMeshNoCache_m3D1CC5FC5B42EAFB754BC88627A3749F736223E5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDrawMeshNoCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDrawMeshNoCache_m3D1CC5FC5B42EAFB754BC88627A3749F736223E5 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___drawMesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_1 = NULL;
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// var xform = m_HandRoot.transform.GetChild(childIndex);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_HandRoot_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		// if (xform.TryGetComponent<SkinnedMeshRenderer>(out var renderer))
		NullCheck(L_3);
		bool L_4;
		L_4 = Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63(L_3, (&V_1), Component_TryGetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m95CEC209AB48BA4465F3CB2C9453CCA6322D2A63_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// renderer.enabled = drawMesh;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_5 = V_1;
		bool L_6 = ___drawMesh0;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, L_6, NULL);
	}

IL_0025:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0029:
	{
		// for (int childIndex = 0; childIndex < m_HandRoot.transform.childCount; ++childIndex)
		int32_t L_8 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_HandRoot_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_10, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ToggleDebugDrawJoints_m749C9ABC2021AA41B889F811299E49FD3A7B5AAC (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) 
{
	{
		// if (debugDrawJoints != m_DebugDrawJoints)
		bool L_0 = ___debugDrawJoints0;
		bool L_1 = __this->___m_DebugDrawJoints_7;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// ForceToggleDebugDrawJoints(debugDrawJoints);
		bool L_2 = ___debugDrawJoints0;
		HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75(__this, L_2, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDebugDrawJoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDebugDrawJoints_mF4E691D9AF1DA09FBD5DE50D882B72FF37F70E75 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) 
{
	{
		// m_DebugDrawJoints = debugDrawJoints;
		bool L_0 = ___debugDrawJoints0;
		__this->___m_DebugDrawJoints_7 = L_0;
		// ForceToggleDebugDrawJointsNoCache(debugDrawJoints);
		bool L_1 = ___debugDrawJoints0;
		HandGameObjects_ForceToggleDebugDrawJointsNoCache_m9FC70422C9D297A3828FFACDF1E8011CAE8B8180(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceToggleDebugDrawJointsNoCache(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceToggleDebugDrawJointsNoCache_m9FC70422C9D297A3828FFACDF1E8011CAE8B8180 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, bool ___debugDrawJoints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mBF49B8350B7C5FE4D5501DD0FB822F43BFBE235B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// ToggleRenderers<MeshRenderer>(debugDrawJoints, m_DrawJoints[jointIndex].transform);
		bool L_0 = ___debugDrawJoints0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_DrawJoints_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mBF49B8350B7C5FE4D5501DD0FB822F43BFBE235B(L_0, L_5, HandGameObjects_ToggleRenderers_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mBF49B8350B7C5FE4D5501DD0FB822F43BFBE235B_RuntimeMethod_var);
		// m_Lines[jointIndex].enabled = debugDrawJoints;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_6 = __this->___m_Lines_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = ___debugDrawJoints0;
		NullCheck(L_9);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, L_10, NULL);
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0029:
	{
		// for (int jointIndex = 0; jointIndex < m_DrawJoints.Length; ++jointIndex)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___m_DrawJoints_3;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// m_Lines[0].enabled = false;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_14 = __this->___m_Lines_5;
		NullCheck(L_14);
		int32_t L_15 = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_16, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::SetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_SetVelocityType_m08DD81D0B70B2361C0E23B719E966977CBECBD40 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) 
{
	{
		// if (velocityType != m_VelocityType)
		int32_t L_0 = ___velocityType0;
		int32_t L_1 = __this->___m_VelocityType_8;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// ForceSetVelocityType(velocityType);
		int32_t L_2 = ___velocityType0;
		HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81(__this, L_2, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceSetVelocityType(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceSetVelocityType_mCB631CD7A99820950F1B84C0DCFAA9DA0DD0ED81 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) 
{
	{
		// m_VelocityType = velocityType;
		int32_t L_0 = ___velocityType0;
		__this->___m_VelocityType_8 = L_0;
		// ForceSetVelocityTypeNoCache(velocityType);
		int32_t L_1 = ___velocityType0;
		HandGameObjects_ForceSetVelocityTypeNoCache_mBA2EB47E8BD4F24803983F0E539BD79847CC9848(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::ForceSetVelocityTypeNoCache(UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/VelocityType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_ForceSetVelocityTypeNoCache_mBA2EB47E8BD4F24803983F0E539BD79847CC9848 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___velocityType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF2458B71582F60B7E001C41A6507376AEFDEDDC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// ToggleRenderers<LineRenderer>(velocityType != VelocityType.None, m_VelocityParents[jointIndex].transform);
		int32_t L_0 = ___velocityType0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___m_VelocityParents_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF2458B71582F60B7E001C41A6507376AEFDEDDC4((bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_5, HandGameObjects_ToggleRenderers_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF2458B71582F60B7E001C41A6507376AEFDEDDC4_RuntimeMethod_var);
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		// for (int jointIndex = 0; jointIndex < m_VelocityParents.Length; ++jointIndex)
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___m_VelocityParents_4;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateRootPose(UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateRootPose_mBEFC94F23B1194A808CAA45E243891465B457672 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand0, const RuntimeMethod* method) 
{
	{
		// var xform = m_JointXforms[XRHandJointID.Wrist.ToIndex()];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___m_JointXforms_2;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(1, NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		// xform.localPosition = hand.rootPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_0;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_6, NULL);
		// xform.localRotation = hand.rootPose.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline((&___hand0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_1;
		NullCheck(L_4);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateJoints(Unity.XR.CoreUtils.XROrigin,UnityEngine.XR.Hands.XRHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoints_m7CEACDF09D7AA64D4C29658D87665241E9C94BC4 (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___origin0, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___hand1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var originPose = new Pose(origin.transform.position, origin.transform.rotation);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = ___origin0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3 = ___origin0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_0), L_2, L_5, NULL);
		// var wristPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		V_1 = L_6;
		// UpdateJoint(originPose, hand.GetJoint(XRHandJointID.Wrist), ref wristPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_8;
		L_8 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 1, NULL);
		HandGameObjects_UpdateJoint_mC3ED8938CD592EB84422940B923D2A4D7FFB4DEA(__this, L_7, L_8, (&V_1), (bool)1, NULL);
		// UpdateJoint(originPose, hand.GetJoint(XRHandJointID.Palm), ref wristPose, false);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9 = V_0;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_10;
		L_10 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), 2, NULL);
		HandGameObjects_UpdateJoint_mC3ED8938CD592EB84422940B923D2A4D7FFB4DEA(__this, L_9, L_10, (&V_1), (bool)0, NULL);
		// for (int fingerIndex = (int)XRHandFingerID.Thumb;
		V_2 = 0;
		goto IL_00a2;
	}

IL_004b:
	{
		// var parentPose = wristPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_1;
		V_3 = L_11;
		// var fingerId = (XRHandFingerID)fingerIndex;
		int32_t L_12 = V_2;
		// int jointIndexBack = fingerId.GetBackJointID().ToIndex();
		int32_t L_13 = L_12;
		int32_t L_14;
		L_14 = XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F(L_13, NULL);
		int32_t L_15;
		L_15 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_14, NULL);
		V_4 = L_15;
		// for (int jointIndex = fingerId.GetFrontJointID().ToIndex();
		int32_t L_16;
		L_16 = XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313(L_13, NULL);
		int32_t L_17;
		L_17 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_16, NULL);
		V_5 = L_17;
		goto IL_0098;
	}

IL_0069:
	{
		// if (m_JointXforms[jointIndex] != null)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_18 = __this->___m_JointXforms_2;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0092;
		}
	}
	{
		// UpdateJoint(originPose, hand.GetJoint(XRHandJointIDUtility.FromIndex(jointIndex)), ref parentPose);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = V_0;
		int32_t L_24 = V_5;
		int32_t L_25;
		L_25 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_24, NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_26;
		L_26 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&___hand1), L_25, NULL);
		HandGameObjects_UpdateJoint_mC3ED8938CD592EB84422940B923D2A4D7FFB4DEA(__this, L_23, L_26, (&V_3), (bool)1, NULL);
	}

IL_0092:
	{
		// ++jointIndex)
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0098:
	{
		// jointIndex <= jointIndexBack;
		int32_t L_28 = V_5;
		int32_t L_29 = V_4;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_0069;
		}
	}
	{
		// ++fingerIndex)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a2:
	{
		// fingerIndex <= (int)XRHandFingerID.Little;
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)4)))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::UpdateJoint(UnityEngine.Pose,UnityEngine.XR.Hands.XRHandJoint,UnityEngine.Pose&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_UpdateJoint_mC3ED8938CD592EB84422940B923D2A4D7FFB4DEA (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___originPose0, XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 ___joint1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___parentPose2, bool ___cacheParentPose3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// int jointIndex = joint.id.ToIndex();
		int32_t L_0;
		L_0 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline((&___joint1), NULL);
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_0, NULL);
		V_0 = L_1;
		// var xform = m_JointXforms[jointIndex];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (xform == null || !joint.TryGetPose(out var pose))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		bool L_8;
		L_8 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&___joint1), (&V_2), NULL);
		if (L_8)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// m_DrawJoints[jointIndex].transform.localPosition = pose.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___m_DrawJoints_3;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_0;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// m_DrawJoints[jointIndex].transform.localRotation = pose.rotation;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___m_DrawJoints_3;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = L_21.___rotation_1;
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_22, NULL);
		// if (m_DebugDrawJoints && joint.id != XRHandJointID.Wrist)
		bool L_23 = __this->___m_DebugDrawJoints_7;
		if (!L_23)
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_24;
		L_24 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline((&___joint1), NULL);
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		// m_LinePointsReuse[0] = parentPose.GetTransformedBy(originPose).position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = __this->___m_LinePointsReuse_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_26 = ___parentPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27 = ___originPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28;
		L_28 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28.___position_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// m_LinePointsReuse[1] = pose.GetTransformedBy(originPose).position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = __this->___m_LinePointsReuse_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_31 = ___originPose0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32;
		L_32 = Pose_GetTransformedBy_m8B18A1ED205791F95CDC1D1F2A08A42D6DA02CBF((&V_2), L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32.___position_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_33);
		// m_Lines[jointIndex].SetPositions(m_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_34 = __this->___m_Lines_5;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = __this->___m_LinePointsReuse_9;
		NullCheck(L_37);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_37, L_38, NULL);
	}

IL_00b1:
	{
		// var inverseParentRotation = Quaternion.Inverse(parentPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_39 = ___parentPose2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = L_39->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41;
		L_41 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_40, NULL);
		V_3 = L_41;
		// xform.localPosition = inverseParentRotation * (pose.position - parentPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_46 = ___parentPose2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = L_46->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_45, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_48, NULL);
		NullCheck(L_42);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_42, L_49, NULL);
		// xform.localRotation = inverseParentRotation * pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_52 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = L_52.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54;
		L_54 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_51, L_53, NULL);
		NullCheck(L_50);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_50, L_54, NULL);
		// if (cacheParentPose)
		bool L_55 = ___cacheParentPose3;
		if (!L_55)
		{
			goto IL_00f7;
		}
	}
	{
		// parentPose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_56 = ___parentPose2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57 = V_2;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_56 = L_57;
	}

IL_00f7:
	{
		// if (m_VelocityType != VelocityType.None && m_VelocityParents[jointIndex].TryGetComponent<LineRenderer>(out var renderer))
		int32_t L_58 = __this->___m_VelocityType_8;
		if ((((int32_t)L_58) == ((int32_t)2)))
		{
			goto IL_01f5;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_59 = __this->___m_VelocityParents_4;
		int32_t L_60 = V_0;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		bool L_63;
		L_63 = GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC(L_62, (&V_4), GameObject_TryGetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m919DC9D848A0522F28DB3039F8C2F06147A76AFC_RuntimeMethod_var);
		if (!L_63)
		{
			goto IL_01f5;
		}
	}
	{
		// m_VelocityParents[jointIndex].transform.localPosition = Vector3.zero;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_64 = __this->___m_VelocityParents_4;
		int32_t L_65 = V_0;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_68);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_68, L_69, NULL);
		// m_VelocityParents[jointIndex].transform.localRotation = Quaternion.identity;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_70 = __this->___m_VelocityParents_4;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_73, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_74);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_74, L_75, NULL);
		// m_LinePointsReuse[0] = m_LinePointsReuse[1] = m_VelocityParents[jointIndex].transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = __this->___m_LinePointsReuse_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = __this->___m_LinePointsReuse_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_78 = __this->___m_VelocityParents_4;
		int32_t L_79 = V_0;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = L_83;
		V_5 = L_84;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_5;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_85);
		// if (m_VelocityType == VelocityType.Linear)
		int32_t L_86 = __this->___m_VelocityType_8;
		if (L_86)
		{
			goto IL_01a7;
		}
	}
	{
		// if (joint.TryGetLinearVelocity(out var velocity))
		bool L_87;
		L_87 = XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B((&___joint1), (&V_6), NULL);
		if (!L_87)
		{
			goto IL_01e8;
		}
	}
	{
		// m_LinePointsReuse[1] += velocity;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = __this->___m_LinePointsReuse_9;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_89 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_90, L_91, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_89 = L_92;
		goto IL_01e8;
	}

IL_01a7:
	{
		// else if (m_VelocityType == VelocityType.Angular)
		int32_t L_93 = __this->___m_VelocityType_8;
		if ((!(((uint32_t)L_93) == ((uint32_t)1))))
		{
			goto IL_01e8;
		}
	}
	{
		// if (joint.TryGetAngularVelocity(out var velocity))
		bool L_94;
		L_94 = XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63((&___joint1), (&V_7), NULL);
		if (!L_94)
		{
			goto IL_01e8;
		}
	}
	{
		// m_LinePointsReuse[1] += 0.05f * velocity.normalized;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = __this->___m_LinePointsReuse_9;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96 = ((L_95)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.0500000007f), L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_97, L_99, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96 = L_100;
	}

IL_01e8:
	{
		// renderer.SetPositions(m_LinePointsReuse);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_101 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = __this->___m_LinePointsReuse_9;
		NullCheck(L_101);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_101, L_102, NULL);
	}

IL_01f5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects::<.ctor>g__AssignJoint|11_0(UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Transform,UnityEngine.Transform,UnityEngine.XR.Hands.Samples.VisualizerSample.HandVisualizer/HandGameObjects/<>c__DisplayClass11_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGameObjects_U3C_ctorU3Eg__AssignJointU7C11_0_mBC3C1A4B3EDFF6E6F5736119DFAAE2488CC3A81F (HandGameObjects_t1D0FE8DBE6963189C7293D3D8146F0D7FABDCB01* __this, int32_t ___jointId0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___jointXform1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___drawJointsParent2, U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B* p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int jointIndex = jointId.ToIndex();
		int32_t L_0 = ___jointId0;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_0, NULL);
		V_0 = L_1;
		// m_JointXforms[jointIndex] = jointXform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___m_JointXforms_2;
		int32_t L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___jointXform1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_4);
		// m_DrawJoints[jointIndex] = GameObject.Instantiate(debugDrawPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_DrawJoints_3;
		int32_t L_6 = V_0;
		U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B* L_7 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___debugDrawPrefab_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_9);
		// m_DrawJoints[jointIndex].transform.parent = drawJointsParent;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___m_DrawJoints_3;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___drawJointsParent2;
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, L_15, NULL);
		// m_DrawJoints[jointIndex].name = jointId.ToString();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___m_DrawJoints_3;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Il2CppFakeBox<int32_t> L_20(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, (&___jointId0));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_19);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_19, L_21, NULL);
		// m_VelocityParents[jointIndex] = GameObject.Instantiate(velocityPrefab);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___m_VelocityParents_4;
		int32_t L_23 = V_0;
		U3CU3Ec__DisplayClass11_0_tE42F4FB7BCB0617E598E10B26F7DAE6ADCA29F2B* L_24 = p3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___velocityPrefab_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_26);
		// m_VelocityParents[jointIndex].transform.parent = jointXform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___m_VelocityParents_4;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = ___jointXform1;
		NullCheck(L_31);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_31, L_32, NULL);
		// m_Lines[jointIndex] = m_DrawJoints[jointIndex].GetComponent<LineRenderer>();
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_33 = __this->___m_Lines_5;
		int32_t L_34 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___m_DrawJoints_3;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_39;
		L_39 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_38, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_39);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D*)L_39);
		// m_Lines[jointIndex].startWidth = m_Lines[jointIndex].endWidth = k_LineWidth;
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_40 = __this->___m_Lines_5;
		int32_t L_41 = V_0;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_44 = __this->___m_Lines_5;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48 = (0.00499999989f);
		V_1 = L_48;
		NullCheck(L_47);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_47, L_48, NULL);
		float L_49 = V_1;
		NullCheck(L_43);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_43, L_49, NULL);
		// m_LinePointsReuse[0] = m_LinePointsReuse[1] = jointXform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = __this->___m_LinePointsReuse_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = __this->___m_LinePointsReuse_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = ___jointXform1;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53;
		V_2 = L_54;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_55);
		// m_Lines[jointIndex].SetPositions(m_LinePointsReuse);
		LineRendererU5BU5D_t5AA0E11EC99A18A11BCCCABDF088C854E50D394A* L_56 = __this->___m_Lines_5;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = __this->___m_LinePointsReuse_9;
		NullCheck(L_59);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_59, L_60, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PositionRelative_getParent_m1D234D9D8D9620AA9EABD8EB57E8DBCE76C381EB_inline (PositionRelative_tAD4E2F56105CB576721C01C93AE8A1B1CE4AA99B* __this, const RuntimeMethod* method) 
{
	{
		// public Transform getParent() { return parent; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___parent_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand leftHand => m_LeftHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_LeftHand_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = __this->___U3CisTrackedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand rightHand => m_RightHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_RightHand_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointID id => m_Id;
		int32_t L_0 = __this->___m_Id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
