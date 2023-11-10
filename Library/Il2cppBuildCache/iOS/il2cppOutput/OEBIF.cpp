#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<cakeslice.Outline,System.Collections.Generic.LinkedListNode`1<cakeslice.Outline>>
struct Dictionary_2_t7C4EED26279249CC55A8301C97CD03C38B2E69D0;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<cakeslice.Outline>
struct IEnumerator_1_tEF1310AA2F3111CA448F3FF927B24E1F9BB97079;
// System.Collections.Generic.LinkedList`1<cakeslice.Outline>
struct LinkedList_1_t56B170F9B08A35C69CEFA5F235EC13298719FFC3;
// cakeslice.LinkedSet`1<System.Object>
struct LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865;
// cakeslice.LinkedSet`1<cakeslice.Outline>
struct LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// cakeslice.Outline[]
struct OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// cakeslice.MaterialSwitcher
struct MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// cakeslice.Outline
struct Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014;
// cakeslice.OutlineAnimation
struct OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907;
// cakeslice.OutlineEffect
struct OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// cakeslice.Rotate
struct Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// cakeslice.Toggle
struct Toggle_t346904174812132E6059B0C46EAD6A10DFDD14A5;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tEF1310AA2F3111CA448F3FF927B24E1F9BB97079_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068881FB33767CEB76E6645E28EA400B92FEA4C8;
IL2CPP_EXTERN_C String_t* _stringLiteral2A0ED5A8A6262BAA1F3F005AE18A4AA19A4009C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38C64887AB82F5BC82217C8F11DDB0313813CA67;
IL2CPP_EXTERN_C String_t* _stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral59339BB84CE1750F39F4F47B805E8E40A633C093;
IL2CPP_EXTERN_C String_t* _stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE05BAB247508293F306885400634ED250BFC88;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2DF2962AAED14C03C5D097CD61F1E48224BBBF;
IL2CPP_EXTERN_C String_t* _stringLiteral71383EA9D9D2BB710814E8746E4AE8EDC7C52A74;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A21BCB5A789AAABF99055CB2A641E6FACF19C97;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6E1CD01F554DCDDEA365F9ADC7D6661E58581B;
IL2CPP_EXTERN_C String_t* _stringLiteral802DF0EAAF6E20E8A7B8B9F6E855FF60FDC396D7;
IL2CPP_EXTERN_C String_t* _stringLiteral918B3F9950378B5DD5250E788EE4A661FA638F2B;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C30C54A1DA762106B8DD55101B9D230EB58E83;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BD65B6B4CC9D714B0EA8D282C17DBF7F9D00B8;
IL2CPP_EXTERN_C String_t* _stringLiteralE6530F1104219070539CB974D38292D5BDA72C27;
IL2CPP_EXTERN_C String_t* _stringLiteralF129061F856AB5478F4E8BE1D2687725F95F5E37;
IL2CPP_EXTERN_C String_t* _stringLiteralF504504F67F404AF2822046B4C2E211A9FDC9336;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF9D534EDEEA8B6743A581A1280C55FFF9FA817;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE0D856C5CABA94D008A5B75DBC4D28E83C83089A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1_Contains_m058B444AF4791AC6F626D25CDE826E48C591971B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1_GetEnumerator_m6ACE622646046DC6A0B2850B92351B8B205ABA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1_Remove_m4DC69B45B0B3B195D45E9C1AAF3C5B66F0E6E04B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1__ctor_m55F6D45F48CDD6D46A131FF74DA2D324D0DCB688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinkedSet_1_get_Count_m5A731CE114430CEAFE81FFC5B734CD71BE02B0DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m3144D7661D2F030679098C4A93205490D7CD854B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OutlineEffect_Awake_m4F7277350642A9251DF26D3BA34ABD9FD315FF16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t33934BA47DBBAD89517C2B6893F1A72F16AB5E45 
{
public:

public:
};


// System.Object


// cakeslice.LinkedSet`1<cakeslice.Outline>
struct LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559  : public RuntimeObject
{
public:
	// System.Collections.Generic.LinkedList`1<T> cakeslice.LinkedSet`1::list
	LinkedList_1_t56B170F9B08A35C69CEFA5F235EC13298719FFC3 * ___list_0;
	// System.Collections.Generic.Dictionary`2<T,System.Collections.Generic.LinkedListNode`1<T>> cakeslice.LinkedSet`1::dictionary
	Dictionary_2_t7C4EED26279249CC55A8301C97CD03C38B2E69D0 * ___dictionary_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559, ___list_0)); }
	inline LinkedList_1_t56B170F9B08A35C69CEFA5F235EC13298719FFC3 * get_list_0() const { return ___list_0; }
	inline LinkedList_1_t56B170F9B08A35C69CEFA5F235EC13298719FFC3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(LinkedList_1_t56B170F9B08A35C69CEFA5F235EC13298719FFC3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_dictionary_1() { return static_cast<int32_t>(offsetof(LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559, ___dictionary_1)); }
	inline Dictionary_2_t7C4EED26279249CC55A8301C97CD03C38B2E69D0 * get_dictionary_1() const { return ___dictionary_1; }
	inline Dictionary_2_t7C4EED26279249CC55A8301C97CD03C38B2E69D0 ** get_address_of_dictionary_1() { return &___dictionary_1; }
	inline void set_dictionary_1(Dictionary_2_t7C4EED26279249CC55A8301C97CD03C38B2E69D0 * value)
	{
		___dictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_1), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
struct Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___list_0)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_list_0() const { return ___list_0; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___current_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_current_3() const { return ___current_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraEvent
struct CameraEvent_tFB94407637890549849BC824FA13432BA83CB520 
{
public:
	// System.Int32 UnityEngine.Rendering.CameraEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraEvent_tFB94407637890549849BC824FA13432BA83CB520, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderingPath
struct RenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F 
{
public:
	// System.Int32 UnityEngine.RenderingPath::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderingPath_tABF5DB8481D7ACC45810288B4FADFA569A664B0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.StereoTargetEyeMask
struct StereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66 
{
public:
	// System.Int32 UnityEngine.StereoTargetEyeMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoTargetEyeMask_tD03182A6532F0CA3CD452D11CC0FBC2126306A66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_0;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_2;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_3;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_4;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_5;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_6;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_NameID_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_1)); }
	inline int32_t get_m_NameID_1() const { return ___m_NameID_1; }
	inline int32_t* get_address_of_m_NameID_1() { return &___m_NameID_1; }
	inline void set_m_NameID_1(int32_t value)
	{
		___m_NameID_1 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_2)); }
	inline int32_t get_m_InstanceID_2() const { return ___m_InstanceID_2; }
	inline int32_t* get_address_of_m_InstanceID_2() { return &___m_InstanceID_2; }
	inline void set_m_InstanceID_2(int32_t value)
	{
		___m_InstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_3)); }
	inline intptr_t get_m_BufferPointer_3() const { return ___m_BufferPointer_3; }
	inline intptr_t* get_address_of_m_BufferPointer_3() { return &___m_BufferPointer_3; }
	inline void set_m_BufferPointer_3(intptr_t value)
	{
		___m_BufferPointer_3 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_4)); }
	inline int32_t get_m_MipLevel_4() const { return ___m_MipLevel_4; }
	inline int32_t* get_address_of_m_MipLevel_4() { return &___m_MipLevel_4; }
	inline void set_m_MipLevel_4(int32_t value)
	{
		___m_MipLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_5)); }
	inline int32_t get_m_CubeFace_5() const { return ___m_CubeFace_5; }
	inline int32_t* get_address_of_m_CubeFace_5() { return &___m_CubeFace_5; }
	inline void set_m_CubeFace_5(int32_t value)
	{
		___m_CubeFace_5 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_6)); }
	inline int32_t get_m_DepthSlice_6() const { return ___m_DepthSlice_6; }
	inline int32_t* get_address_of_m_DepthSlice_6() { return &___m_DepthSlice_6; }
	inline void set_m_DepthSlice_6(int32_t value)
	{
		___m_DepthSlice_6 = value;
	}
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// cakeslice.MaterialSwitcher
struct MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material cakeslice.MaterialSwitcher::target
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___target_4;
	// System.Int32 cakeslice.MaterialSwitcher::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA, ___target_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_target_4() const { return ___target_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// cakeslice.Outline
struct Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Renderer cakeslice.Outline::<Renderer>k__BackingField
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___U3CRendererU3Ek__BackingField_4;
	// UnityEngine.SpriteRenderer cakeslice.Outline::<SpriteRenderer>k__BackingField
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___U3CSpriteRendererU3Ek__BackingField_5;
	// UnityEngine.SkinnedMeshRenderer cakeslice.Outline::<SkinnedMeshRenderer>k__BackingField
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___U3CSkinnedMeshRendererU3Ek__BackingField_6;
	// UnityEngine.MeshFilter cakeslice.Outline::<MeshFilter>k__BackingField
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CMeshFilterU3Ek__BackingField_7;
	// System.Int32 cakeslice.Outline::color
	int32_t ___color_8;
	// System.Boolean cakeslice.Outline::eraseRenderer
	bool ___eraseRenderer_9;
	// UnityEngine.Material[] cakeslice.Outline::_SharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____SharedMaterials_10;

public:
	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___U3CRendererU3Ek__BackingField_4)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_U3CRendererU3Ek__BackingField_4() const { return ___U3CRendererU3Ek__BackingField_4; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_U3CRendererU3Ek__BackingField_4() { return &___U3CRendererU3Ek__BackingField_4; }
	inline void set_U3CRendererU3Ek__BackingField_4(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___U3CRendererU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSpriteRendererU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___U3CSpriteRendererU3Ek__BackingField_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_U3CSpriteRendererU3Ek__BackingField_5() const { return ___U3CSpriteRendererU3Ek__BackingField_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_U3CSpriteRendererU3Ek__BackingField_5() { return &___U3CSpriteRendererU3Ek__BackingField_5; }
	inline void set_U3CSpriteRendererU3Ek__BackingField_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___U3CSpriteRendererU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpriteRendererU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSkinnedMeshRendererU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___U3CSkinnedMeshRendererU3Ek__BackingField_6)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_U3CSkinnedMeshRendererU3Ek__BackingField_6() const { return ___U3CSkinnedMeshRendererU3Ek__BackingField_6; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_U3CSkinnedMeshRendererU3Ek__BackingField_6() { return &___U3CSkinnedMeshRendererU3Ek__BackingField_6; }
	inline void set_U3CSkinnedMeshRendererU3Ek__BackingField_6(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___U3CSkinnedMeshRendererU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSkinnedMeshRendererU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshFilterU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___U3CMeshFilterU3Ek__BackingField_7)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CMeshFilterU3Ek__BackingField_7() const { return ___U3CMeshFilterU3Ek__BackingField_7; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CMeshFilterU3Ek__BackingField_7() { return &___U3CMeshFilterU3Ek__BackingField_7; }
	inline void set_U3CMeshFilterU3Ek__BackingField_7(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CMeshFilterU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshFilterU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_color_8() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___color_8)); }
	inline int32_t get_color_8() const { return ___color_8; }
	inline int32_t* get_address_of_color_8() { return &___color_8; }
	inline void set_color_8(int32_t value)
	{
		___color_8 = value;
	}

	inline static int32_t get_offset_of_eraseRenderer_9() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ___eraseRenderer_9)); }
	inline bool get_eraseRenderer_9() const { return ___eraseRenderer_9; }
	inline bool* get_address_of_eraseRenderer_9() { return &___eraseRenderer_9; }
	inline void set_eraseRenderer_9(bool value)
	{
		___eraseRenderer_9 = value;
	}

	inline static int32_t get_offset_of__SharedMaterials_10() { return static_cast<int32_t>(offsetof(Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014, ____SharedMaterials_10)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__SharedMaterials_10() const { return ____SharedMaterials_10; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__SharedMaterials_10() { return &____SharedMaterials_10; }
	inline void set__SharedMaterials_10(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____SharedMaterials_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SharedMaterials_10), (void*)value);
	}
};


// cakeslice.OutlineAnimation
struct OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean cakeslice.OutlineAnimation::pingPong
	bool ___pingPong_4;

public:
	inline static int32_t get_offset_of_pingPong_4() { return static_cast<int32_t>(offsetof(OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907, ___pingPong_4)); }
	inline bool get_pingPong_4() const { return ___pingPong_4; }
	inline bool* get_address_of_pingPong_4() { return &___pingPong_4; }
	inline void set_pingPong_4(bool value)
	{
		___pingPong_4 = value;
	}
};


// cakeslice.OutlineEffect
struct OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// cakeslice.LinkedSet`1<cakeslice.Outline> cakeslice.OutlineEffect::outlines
	LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * ___outlines_5;
	// System.Single cakeslice.OutlineEffect::lineThickness
	float ___lineThickness_6;
	// System.Single cakeslice.OutlineEffect::lineIntensity
	float ___lineIntensity_7;
	// System.Single cakeslice.OutlineEffect::fillAmount
	float ___fillAmount_8;
	// UnityEngine.Color cakeslice.OutlineEffect::lineColor0
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lineColor0_9;
	// UnityEngine.Color cakeslice.OutlineEffect::lineColor1
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lineColor1_10;
	// UnityEngine.Color cakeslice.OutlineEffect::lineColor2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lineColor2_11;
	// System.Boolean cakeslice.OutlineEffect::additiveRendering
	bool ___additiveRendering_12;
	// System.Boolean cakeslice.OutlineEffect::backfaceCulling
	bool ___backfaceCulling_13;
	// UnityEngine.Color cakeslice.OutlineEffect::fillColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fillColor_14;
	// System.Boolean cakeslice.OutlineEffect::useFillColor
	bool ___useFillColor_15;
	// System.Boolean cakeslice.OutlineEffect::cornerOutlines
	bool ___cornerOutlines_16;
	// System.Boolean cakeslice.OutlineEffect::addLinesBetweenColors
	bool ___addLinesBetweenColors_17;
	// System.Boolean cakeslice.OutlineEffect::scaleWithScreenSize
	bool ___scaleWithScreenSize_18;
	// System.Single cakeslice.OutlineEffect::alphaCutoff
	float ___alphaCutoff_19;
	// System.Boolean cakeslice.OutlineEffect::flipY
	bool ___flipY_20;
	// UnityEngine.Camera cakeslice.OutlineEffect::sourceCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___sourceCamera_21;
	// System.Boolean cakeslice.OutlineEffect::autoEnableOutlines
	bool ___autoEnableOutlines_22;
	// UnityEngine.Camera cakeslice.OutlineEffect::outlineCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___outlineCamera_23;
	// UnityEngine.Material cakeslice.OutlineEffect::outline1Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outline1Material_24;
	// UnityEngine.Material cakeslice.OutlineEffect::outline2Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outline2Material_25;
	// UnityEngine.Material cakeslice.OutlineEffect::outline3Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outline3Material_26;
	// UnityEngine.Material cakeslice.OutlineEffect::outlineEraseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outlineEraseMaterial_27;
	// UnityEngine.Shader cakeslice.OutlineEffect::outlineShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___outlineShader_28;
	// UnityEngine.Shader cakeslice.OutlineEffect::outlineBufferShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___outlineBufferShader_29;
	// UnityEngine.Material cakeslice.OutlineEffect::outlineShaderMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___outlineShaderMaterial_30;
	// UnityEngine.RenderTexture cakeslice.OutlineEffect::renderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture_31;
	// UnityEngine.RenderTexture cakeslice.OutlineEffect::extraRenderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___extraRenderTexture_32;
	// UnityEngine.Rendering.CommandBuffer cakeslice.OutlineEffect::commandBuffer
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___commandBuffer_33;
	// System.Collections.Generic.List`1<UnityEngine.Material> cakeslice.OutlineEffect::materialBuffer
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___materialBuffer_34;
	// System.Boolean cakeslice.OutlineEffect::RenderTheNextFrame
	bool ___RenderTheNextFrame_35;

public:
	inline static int32_t get_offset_of_outlines_5() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlines_5)); }
	inline LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * get_outlines_5() const { return ___outlines_5; }
	inline LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 ** get_address_of_outlines_5() { return &___outlines_5; }
	inline void set_outlines_5(LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * value)
	{
		___outlines_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlines_5), (void*)value);
	}

	inline static int32_t get_offset_of_lineThickness_6() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___lineThickness_6)); }
	inline float get_lineThickness_6() const { return ___lineThickness_6; }
	inline float* get_address_of_lineThickness_6() { return &___lineThickness_6; }
	inline void set_lineThickness_6(float value)
	{
		___lineThickness_6 = value;
	}

	inline static int32_t get_offset_of_lineIntensity_7() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___lineIntensity_7)); }
	inline float get_lineIntensity_7() const { return ___lineIntensity_7; }
	inline float* get_address_of_lineIntensity_7() { return &___lineIntensity_7; }
	inline void set_lineIntensity_7(float value)
	{
		___lineIntensity_7 = value;
	}

	inline static int32_t get_offset_of_fillAmount_8() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___fillAmount_8)); }
	inline float get_fillAmount_8() const { return ___fillAmount_8; }
	inline float* get_address_of_fillAmount_8() { return &___fillAmount_8; }
	inline void set_fillAmount_8(float value)
	{
		___fillAmount_8 = value;
	}

	inline static int32_t get_offset_of_lineColor0_9() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___lineColor0_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lineColor0_9() const { return ___lineColor0_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lineColor0_9() { return &___lineColor0_9; }
	inline void set_lineColor0_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lineColor0_9 = value;
	}

	inline static int32_t get_offset_of_lineColor1_10() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___lineColor1_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lineColor1_10() const { return ___lineColor1_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lineColor1_10() { return &___lineColor1_10; }
	inline void set_lineColor1_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lineColor1_10 = value;
	}

	inline static int32_t get_offset_of_lineColor2_11() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___lineColor2_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lineColor2_11() const { return ___lineColor2_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lineColor2_11() { return &___lineColor2_11; }
	inline void set_lineColor2_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lineColor2_11 = value;
	}

	inline static int32_t get_offset_of_additiveRendering_12() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___additiveRendering_12)); }
	inline bool get_additiveRendering_12() const { return ___additiveRendering_12; }
	inline bool* get_address_of_additiveRendering_12() { return &___additiveRendering_12; }
	inline void set_additiveRendering_12(bool value)
	{
		___additiveRendering_12 = value;
	}

	inline static int32_t get_offset_of_backfaceCulling_13() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___backfaceCulling_13)); }
	inline bool get_backfaceCulling_13() const { return ___backfaceCulling_13; }
	inline bool* get_address_of_backfaceCulling_13() { return &___backfaceCulling_13; }
	inline void set_backfaceCulling_13(bool value)
	{
		___backfaceCulling_13 = value;
	}

	inline static int32_t get_offset_of_fillColor_14() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___fillColor_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fillColor_14() const { return ___fillColor_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fillColor_14() { return &___fillColor_14; }
	inline void set_fillColor_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fillColor_14 = value;
	}

	inline static int32_t get_offset_of_useFillColor_15() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___useFillColor_15)); }
	inline bool get_useFillColor_15() const { return ___useFillColor_15; }
	inline bool* get_address_of_useFillColor_15() { return &___useFillColor_15; }
	inline void set_useFillColor_15(bool value)
	{
		___useFillColor_15 = value;
	}

	inline static int32_t get_offset_of_cornerOutlines_16() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___cornerOutlines_16)); }
	inline bool get_cornerOutlines_16() const { return ___cornerOutlines_16; }
	inline bool* get_address_of_cornerOutlines_16() { return &___cornerOutlines_16; }
	inline void set_cornerOutlines_16(bool value)
	{
		___cornerOutlines_16 = value;
	}

	inline static int32_t get_offset_of_addLinesBetweenColors_17() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___addLinesBetweenColors_17)); }
	inline bool get_addLinesBetweenColors_17() const { return ___addLinesBetweenColors_17; }
	inline bool* get_address_of_addLinesBetweenColors_17() { return &___addLinesBetweenColors_17; }
	inline void set_addLinesBetweenColors_17(bool value)
	{
		___addLinesBetweenColors_17 = value;
	}

	inline static int32_t get_offset_of_scaleWithScreenSize_18() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___scaleWithScreenSize_18)); }
	inline bool get_scaleWithScreenSize_18() const { return ___scaleWithScreenSize_18; }
	inline bool* get_address_of_scaleWithScreenSize_18() { return &___scaleWithScreenSize_18; }
	inline void set_scaleWithScreenSize_18(bool value)
	{
		___scaleWithScreenSize_18 = value;
	}

	inline static int32_t get_offset_of_alphaCutoff_19() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___alphaCutoff_19)); }
	inline float get_alphaCutoff_19() const { return ___alphaCutoff_19; }
	inline float* get_address_of_alphaCutoff_19() { return &___alphaCutoff_19; }
	inline void set_alphaCutoff_19(float value)
	{
		___alphaCutoff_19 = value;
	}

	inline static int32_t get_offset_of_flipY_20() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___flipY_20)); }
	inline bool get_flipY_20() const { return ___flipY_20; }
	inline bool* get_address_of_flipY_20() { return &___flipY_20; }
	inline void set_flipY_20(bool value)
	{
		___flipY_20 = value;
	}

	inline static int32_t get_offset_of_sourceCamera_21() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___sourceCamera_21)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_sourceCamera_21() const { return ___sourceCamera_21; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_sourceCamera_21() { return &___sourceCamera_21; }
	inline void set_sourceCamera_21(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___sourceCamera_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceCamera_21), (void*)value);
	}

	inline static int32_t get_offset_of_autoEnableOutlines_22() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___autoEnableOutlines_22)); }
	inline bool get_autoEnableOutlines_22() const { return ___autoEnableOutlines_22; }
	inline bool* get_address_of_autoEnableOutlines_22() { return &___autoEnableOutlines_22; }
	inline void set_autoEnableOutlines_22(bool value)
	{
		___autoEnableOutlines_22 = value;
	}

	inline static int32_t get_offset_of_outlineCamera_23() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlineCamera_23)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_outlineCamera_23() const { return ___outlineCamera_23; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_outlineCamera_23() { return &___outlineCamera_23; }
	inline void set_outlineCamera_23(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___outlineCamera_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineCamera_23), (void*)value);
	}

	inline static int32_t get_offset_of_outline1Material_24() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outline1Material_24)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outline1Material_24() const { return ___outline1Material_24; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outline1Material_24() { return &___outline1Material_24; }
	inline void set_outline1Material_24(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outline1Material_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outline1Material_24), (void*)value);
	}

	inline static int32_t get_offset_of_outline2Material_25() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outline2Material_25)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outline2Material_25() const { return ___outline2Material_25; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outline2Material_25() { return &___outline2Material_25; }
	inline void set_outline2Material_25(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outline2Material_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outline2Material_25), (void*)value);
	}

	inline static int32_t get_offset_of_outline3Material_26() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outline3Material_26)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outline3Material_26() const { return ___outline3Material_26; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outline3Material_26() { return &___outline3Material_26; }
	inline void set_outline3Material_26(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outline3Material_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outline3Material_26), (void*)value);
	}

	inline static int32_t get_offset_of_outlineEraseMaterial_27() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlineEraseMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outlineEraseMaterial_27() const { return ___outlineEraseMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outlineEraseMaterial_27() { return &___outlineEraseMaterial_27; }
	inline void set_outlineEraseMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outlineEraseMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineEraseMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_outlineShader_28() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlineShader_28)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_outlineShader_28() const { return ___outlineShader_28; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_outlineShader_28() { return &___outlineShader_28; }
	inline void set_outlineShader_28(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___outlineShader_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineShader_28), (void*)value);
	}

	inline static int32_t get_offset_of_outlineBufferShader_29() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlineBufferShader_29)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_outlineBufferShader_29() const { return ___outlineBufferShader_29; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_outlineBufferShader_29() { return &___outlineBufferShader_29; }
	inline void set_outlineBufferShader_29(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___outlineBufferShader_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineBufferShader_29), (void*)value);
	}

	inline static int32_t get_offset_of_outlineShaderMaterial_30() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___outlineShaderMaterial_30)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_outlineShaderMaterial_30() const { return ___outlineShaderMaterial_30; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_outlineShaderMaterial_30() { return &___outlineShaderMaterial_30; }
	inline void set_outlineShaderMaterial_30(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___outlineShaderMaterial_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outlineShaderMaterial_30), (void*)value);
	}

	inline static int32_t get_offset_of_renderTexture_31() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___renderTexture_31)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_renderTexture_31() const { return ___renderTexture_31; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_renderTexture_31() { return &___renderTexture_31; }
	inline void set_renderTexture_31(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___renderTexture_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTexture_31), (void*)value);
	}

	inline static int32_t get_offset_of_extraRenderTexture_32() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___extraRenderTexture_32)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_extraRenderTexture_32() const { return ___extraRenderTexture_32; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_extraRenderTexture_32() { return &___extraRenderTexture_32; }
	inline void set_extraRenderTexture_32(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___extraRenderTexture_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraRenderTexture_32), (void*)value);
	}

	inline static int32_t get_offset_of_commandBuffer_33() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___commandBuffer_33)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_commandBuffer_33() const { return ___commandBuffer_33; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_commandBuffer_33() { return &___commandBuffer_33; }
	inline void set_commandBuffer_33(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___commandBuffer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandBuffer_33), (void*)value);
	}

	inline static int32_t get_offset_of_materialBuffer_34() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___materialBuffer_34)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_materialBuffer_34() const { return ___materialBuffer_34; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_materialBuffer_34() { return &___materialBuffer_34; }
	inline void set_materialBuffer_34(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___materialBuffer_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materialBuffer_34), (void*)value);
	}

	inline static int32_t get_offset_of_RenderTheNextFrame_35() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195, ___RenderTheNextFrame_35)); }
	inline bool get_RenderTheNextFrame_35() const { return ___RenderTheNextFrame_35; }
	inline bool* get_address_of_RenderTheNextFrame_35() { return &___RenderTheNextFrame_35; }
	inline void set_RenderTheNextFrame_35(bool value)
	{
		___RenderTheNextFrame_35 = value;
	}
};

struct OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields
{
public:
	// cakeslice.OutlineEffect cakeslice.OutlineEffect::<Instance>k__BackingField
	OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// cakeslice.Rotate
struct Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single cakeslice.Rotate::timer
	float ___timer_4;

public:
	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}
};


// cakeslice.Toggle
struct Toggle_t346904174812132E6059B0C46EAD6A10DFDD14A5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// cakeslice.Outline[]
struct OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * m_Items[1];

public:
	inline Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 cakeslice.LinkedSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LinkedSet_1_get_Count_mCC4A9DA92C3AAB400571E50A94DDDC520B5CDEB5_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> cakeslice.LinkedSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinkedSet_1_GetEnumerator_mC1378D92DB640BB0E314DC18238CA78E97521009_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Boolean cakeslice.LinkedSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedSet_1_Contains_mD3B74F5C4C63B02AA28986FD760F008BE69DB30C_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, RuntimeObject * ___t0, const RuntimeMethod* method);
// System.Boolean cakeslice.LinkedSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedSet_1_Add_m5A04D8DDF5951F510BACEA1C20D8967933753661_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, RuntimeObject * ___t0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean cakeslice.LinkedSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinkedSet_1_Remove_mD5D1A7D235195261720682237E8B335248938D68_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, RuntimeObject * ___t0, const RuntimeMethod* method);
// System.Void cakeslice.LinkedSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinkedSet_1__ctor_m1B18ACA4197ED68BAE08F3B27AD1E786E5E89D4E_gshared (LinkedSet_1_t35B6F8BDC6A86D8FD2A2F53ECBC1C08FA689F865 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_materials_m96CCC6CDACF2D131E18C7E0E70DE9F3AEA9E9E44 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_materials_mF25CCE14D0F008A45DC73043BFF69113C485A629 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void cakeslice.Outline::set_Renderer(UnityEngine.Renderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_Renderer_m227CD0A255A15DDA6F467AF62FE509A0BF28EBDF_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void cakeslice.Outline::set_SkinnedMeshRenderer(UnityEngine.SkinnedMeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_SkinnedMeshRenderer_m8CE414D2CFC2BAB6DE0491F217BB03C7C1712B34_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void cakeslice.Outline::set_SpriteRenderer(UnityEngine.SpriteRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_SpriteRenderer_m1D449078EDE345EA58BD5F69F0AC678E5282FC05_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void cakeslice.Outline::set_MeshFilter(UnityEngine.MeshFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_MeshFilter_mADAEE914451D8D3B517B2E41BCC48ED3C5214B5B_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___value0, const RuntimeMethod* method);
// cakeslice.OutlineEffect cakeslice.OutlineEffect::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA_inline (const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::AddOutline(cakeslice.Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_AddOutline_mD5F3C04F77B9984D56826520A2723223F445F285 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___outline0, const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::RemoveOutline(cakeslice.Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_RemoveOutline_mB0B29C11A46CC143427CD7FBCCAF973A6633EBD6 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___outline0, const RuntimeMethod* method);
// UnityEngine.Renderer cakeslice.Outline::get_Renderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method);
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<cakeslice.OutlineEffect>()
inline OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::UpdateMaterialsPublicProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::set_Instance(cakeslice.OutlineEffect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OutlineEffect_set_Instance_m371649F7FA14F47C5C15BB4FE9287887941D7330_inline (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * ___value0, const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::CreateMaterialsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_CreateMaterialsIfNeeded_m86C85DC827DD9AE16585A409BD59B61C13310D60 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Camera>()
inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* Component_GetComponentsInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE0D856C5CABA94D008A5B75DBC4D28E83C83089A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method);
// System.Void cakeslice.OutlineEffect::UpdateOutlineCameraFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_UpdateOutlineCameraFromSource_m1EACF7999977A8D0113773DF2C5CBFDCC69F073A (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_mB7E1174EB3B4E2E53BCC6532840AB55ECE6D06CF (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::AddCommandBuffer(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_AddCommandBuffer_m8F88C5009AC9676BCD0AD1AE4AA655D5BF71CB2F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___evt0, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___buffer1, const RuntimeMethod* method);
// System.Int32 cakeslice.LinkedSet`1<cakeslice.Outline>::get_Count()
inline int32_t LinkedSet_1_get_Count_m5A731CE114430CEAFE81FFC5B734CD71BE02B0DD (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, const RuntimeMethod*))LinkedSet_1_get_Count_mCC4A9DA92C3AAB400571E50A94DDDC520B5CDEB5_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___rt0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_mDE798ACE9294B43B9387A6B06E43B3D4A30A7092 (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> cakeslice.LinkedSet`1<cakeslice.Outline>::GetEnumerator()
inline RuntimeObject* LinkedSet_1_GetEnumerator_m6ACE622646046DC6A0B2850B92351B8B205ABA9A (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, const RuntimeMethod*))LinkedSet_1_GetEnumerator_mC1378D92DB640BB0E314DC18238CA78E97521009_gshared)(__this, method);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Material[] cakeslice.Outline::get_SharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
inline Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::get_Current()
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Material cakeslice.OutlineEffect::GetMaterialFromID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * OutlineEffect_GetMaterialFromID_m8DE676E46868B8D20A557093350C9522A7B8E401 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, int32_t ___ID0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::MoveNext()
inline bool Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4 (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::Dispose()
inline void Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.MeshFilter cakeslice.Outline::get_MeshFilter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Outline_get_MeshFilter_m21F64CA92404B80A1F79805D533AB31C1B8A5FB5_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method);
// UnityEngine.SkinnedMeshRenderer cakeslice.Outline::get_SkinnedMeshRenderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * Outline_get_SkinnedMeshRenderer_mCA54535938671B6C0C3BA8B6BD1108E0C32793CD_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method);
// UnityEngine.SpriteRenderer cakeslice.Outline::get_SpriteRenderer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Outline_get_SpriteRenderer_m9A161F999709E154F7C544A018B38973116FF51B_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_mA9D02A67366918F78472CCCDC98A5E9020CB63AC (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___renderer0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2 (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<cakeslice.Outline>()
inline OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* Object_FindObjectsOfType_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m3144D7661D2F030679098C4A93205490D7CD854B (const RuntimeMethod* method)
{
	return ((  OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Boolean cakeslice.LinkedSet`1<cakeslice.Outline>::Contains(T)
inline bool LinkedSet_1_Contains_m058B444AF4791AC6F626D25CDE826E48C591971B (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___t0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 *, const RuntimeMethod*))LinkedSet_1_Contains_mD3B74F5C4C63B02AA28986FD760F008BE69DB30C_gshared)(__this, ___t0, method);
}
// System.Boolean cakeslice.LinkedSet`1<cakeslice.Outline>::Add(T)
inline bool LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___t0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 *, const RuntimeMethod*))LinkedSet_1_Add_m5A04D8DDF5951F510BACEA1C20D8967933753661_gshared)(__this, ___t0, method);
}
// System.Void cakeslice.OutlineEffect::DestroyMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_DestroyMaterials_m71BA3F82A2F55D07C64A781F33214D4CDD4F0282 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, int32_t ___pass3, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Shader>(System.String)
inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared)(___path0, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Material cakeslice.OutlineEffect::CreateMaterial(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___emissionColor0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_isDeviceActive_m8A54A2D4D91CA2BC1B1554576B2FACFE5F65B087 (const RuntimeMethod* method);
// UnityEngine.StereoTargetEyeMask UnityEngine.Camera::get_stereoTargetEye()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_stereoTargetEye_m45A05163D160C04B54EF3F23BD12F2A10F37818B (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mD653B388A2C2E91C323FDA07C9D9FA295738A420 (String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyFrom_m8289D4C4041F4E1D886F5AF40E1C60C14707AD52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_renderingPath_mCB2BAB2434EEAE5C3B44083403B8D620414DFD86 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_allowHDR_m66B6DEF38F2C8F946674F25A789E2ABD132ECF32 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean cakeslice.LinkedSet`1<cakeslice.Outline>::Remove(T)
inline bool LinkedSet_1_Remove_m4DC69B45B0B3B195D45E9C1AAF3C5B66F0E6E04B (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___t0, const RuntimeMethod* method)
{
	return ((  bool (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 *, const RuntimeMethod*))LinkedSet_1_Remove_mD5D1A7D235195261720682237E8B335248938D68_gshared)(__this, ___t0, method);
}
// System.Void cakeslice.LinkedSet`1<cakeslice.Outline>::.ctor()
inline void LinkedSet_1__ctor_m55F6D45F48CDD6D46A131FF74DA2D324D0DCB688 (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * __this, const RuntimeMethod* method)
{
	((  void (*) (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *, const RuntimeMethod*))LinkedSet_1__ctor_m1B18ACA4197ED68BAE08F3B27AD1E786E5E89D4E_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<cakeslice.Outline>()
inline Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
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
// System.Void cakeslice.MaterialSwitcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialSwitcher_Update_mE2132E858B06C564D7DCD71CE67B1301C6C23C23 (MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.M))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)109), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// Material[] materials = GetComponent<Renderer>().materials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_1);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2;
		L_2 = Renderer_get_materials_m96CCC6CDACF2D131E18C7E0E70DE9F3AEA9E9E44(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// materials[index] = target;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3 = V_0;
		int32_t L_4 = __this->get_index_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_target_4();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)L_5);
		// GetComponent<Renderer>().materials = materials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_6;
		L_6 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_7 = V_0;
		NullCheck(L_6);
		Renderer_set_materials_mF25CCE14D0F008A45DC73043BFF69113C485A629(L_6, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void cakeslice.MaterialSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialSwitcher__ctor_m84EC5F8B74CB2A17C3B0C1021F22F0974922786E (MaterialSwitcher_tC92BF96F6B90602D00AF56EE5F28B5DD43A5AFCA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Renderer cakeslice.Outline::get_Renderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public Renderer Renderer { get; private set; }
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = __this->get_U3CRendererU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void cakeslice.Outline::set_Renderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_Renderer_m227CD0A255A15DDA6F467AF62FE509A0BF28EBDF (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___value0, const RuntimeMethod* method)
{
	{
		// public Renderer Renderer { get; private set; }
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___value0;
		__this->set_U3CRendererU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.SpriteRenderer cakeslice.Outline::get_SpriteRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Outline_get_SpriteRenderer_m9A161F999709E154F7C544A018B38973116FF51B (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public SpriteRenderer SpriteRenderer { get; private set; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_U3CSpriteRendererU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void cakeslice.Outline::set_SpriteRenderer(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_SpriteRenderer_m1D449078EDE345EA58BD5F69F0AC678E5282FC05 (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___value0, const RuntimeMethod* method)
{
	{
		// public SpriteRenderer SpriteRenderer { get; private set; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = ___value0;
		__this->set_U3CSpriteRendererU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.SkinnedMeshRenderer cakeslice.Outline::get_SkinnedMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * Outline_get_SkinnedMeshRenderer_mCA54535938671B6C0C3BA8B6BD1108E0C32793CD (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public SkinnedMeshRenderer SkinnedMeshRenderer { get; private set; }
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_U3CSkinnedMeshRendererU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void cakeslice.Outline::set_SkinnedMeshRenderer(UnityEngine.SkinnedMeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_SkinnedMeshRenderer_m8CE414D2CFC2BAB6DE0491F217BB03C7C1712B34 (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___value0, const RuntimeMethod* method)
{
	{
		// public SkinnedMeshRenderer SkinnedMeshRenderer { get; private set; }
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = ___value0;
		__this->set_U3CSkinnedMeshRendererU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.MeshFilter cakeslice.Outline::get_MeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Outline_get_MeshFilter_m21F64CA92404B80A1F79805D533AB31C1B8A5FB5 (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter MeshFilter { get; private set; }
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = __this->get_U3CMeshFilterU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void cakeslice.Outline::set_MeshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_set_MeshFilter_mADAEE914451D8D3B517B2E41BCC48ED3C5214B5B (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter MeshFilter { get; private set; }
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___value0;
		__this->set_U3CMeshFilterU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void cakeslice.Outline::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_Awake_m5F4077AD63CC4C9AB9090C88EE467BD96345233D (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Renderer = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		Outline_set_Renderer_m227CD0A255A15DDA6F467AF62FE509A0BF28EBDF_inline(__this, L_0, /*hidden argument*/NULL);
		// SkinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_1;
		L_1 = Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3(__this, /*hidden argument*/Component_GetComponent_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m48EF3D17CF12700CC28C88CEFBB6741D6E1FFFE3_RuntimeMethod_var);
		Outline_set_SkinnedMeshRenderer_m8CE414D2CFC2BAB6DE0491F217BB03C7C1712B34_inline(__this, L_1, /*hidden argument*/NULL);
		// SpriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Outline_set_SpriteRenderer_m1D449078EDE345EA58BD5F69F0AC678E5282FC05_inline(__this, L_2, /*hidden argument*/NULL);
		// MeshFilter = GetComponent<MeshFilter>();
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_3;
		L_3 = Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var);
		Outline_set_MeshFilter_mADAEE914451D8D3B517B2E41BCC48ED3C5214B5B_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.Outline::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnEnable_mD01998DC98B8446A17C26C56E33E5433B62774CE (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * G_B2_0 = NULL;
	OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * G_B1_0 = NULL;
	{
		// OutlineEffect.Instance?.AddOutline(this);
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0;
		L_0 = OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA_inline(/*hidden argument*/NULL);
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		OutlineEffect_AddOutline_mD5F3C04F77B9984D56826520A2723223F445F285(G_B2_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.Outline::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline_OnDisable_m0C2CEBC6BFEFF1C7CDD1C4D79DC983438C57BC98 (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * G_B2_0 = NULL;
	OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * G_B1_0 = NULL;
	{
		// OutlineEffect.Instance?.RemoveOutline(this);
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0;
		L_0 = OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA_inline(/*hidden argument*/NULL);
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		OutlineEffect_RemoveOutline_mB0B29C11A46CC143427CD7FBCCAF973A6633EBD6(G_B2_0, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Material[] cakeslice.Outline::get_SharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// if (_SharedMaterials == null)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get__SharedMaterials_10();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// _SharedMaterials = Renderer.sharedMaterials;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2;
		L_2 = Renderer_get_sharedMaterials_m9B2D432CA8AD8CEC4348E61789CC1BB0C3A00AFD(L_1, /*hidden argument*/NULL);
		__this->set__SharedMaterials_10(L_2);
	}

IL_0019:
	{
		// return _SharedMaterials;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3 = __this->get__SharedMaterials_10();
		return L_3;
	}
}
// System.Void cakeslice.Outline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Outline__ctor_m3AA69BE9D767476E1A4E1438D1FF65BD4078F6EE (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void cakeslice.OutlineAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineAnimation_Start_m95B85CC50E5E8359C7768F1AF5DDEC33907E53DC (OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void cakeslice.OutlineAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineAnimation_Update_mCED2E9FE754ED4B3EF094907CF6D37262C95920B (OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color c = GetComponent<OutlineEffect>().lineColor0;
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0;
		L_0 = Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87(__this, /*hidden argument*/Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87_RuntimeMethod_var);
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = L_0->get_lineColor0_9();
		V_0 = L_1;
		// if(pingPong)
		bool L_2 = __this->get_pingPong_4();
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// c.a += Time.deltaTime;
		float* L_3 = (&V_0)->get_address_of_a_3();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_4) = (float)((float)il2cpp_codegen_add((float)L_5, (float)L_6));
		// if(c.a >= 1)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = V_0;
		float L_8 = L_7.get_a_3();
		if ((!(((float)L_8) >= ((float)(1.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// pingPong = false;
		__this->set_pingPong_4((bool)0);
		// }
		goto IL_005e;
	}

IL_003a:
	{
		// c.a -= Time.deltaTime;
		float* L_9 = (&V_0)->get_address_of_a_3();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_10) = (float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12));
		// if(c.a <= 0)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = V_0;
		float L_14 = L_13.get_a_3();
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// pingPong = true;
		__this->set_pingPong_4((bool)1);
	}

IL_005e:
	{
		// c.a = Mathf.Clamp01(c.a);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = V_0;
		float L_16 = L_15.get_a_3();
		float L_17;
		L_17 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_16, /*hidden argument*/NULL);
		(&V_0)->set_a_3(L_17);
		// GetComponent<OutlineEffect>().lineColor0 = c;
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_18;
		L_18 = Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87(__this, /*hidden argument*/Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = V_0;
		NullCheck(L_18);
		L_18->set_lineColor0_9(L_19);
		// GetComponent<OutlineEffect>().UpdateMaterialsPublicProperties();
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_20;
		L_20 = Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87(__this, /*hidden argument*/Component_GetComponent_TisOutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_m13C8398E990213F894A0920A6DDC09F685EFAD87_RuntimeMethod_var);
		NullCheck(L_20);
		OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269(L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineAnimation__ctor_mE8C063ABA4BA9DFA2D154F56DFB61E1680B0861B (OutlineAnimation_t167455153DC18CC6EE9CDB97297808F865EFD907 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// cakeslice.OutlineEffect cakeslice.OutlineEffect::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OutlineEffect Instance { get; private set; }
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0 = ((OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields*)il2cpp_codegen_static_fields_for(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void cakeslice.OutlineEffect::set_Instance(cakeslice.OutlineEffect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_set_Instance_m371649F7FA14F47C5C15BB4FE9287887941D7330 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OutlineEffect Instance { get; private set; }
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0 = ___value0;
		((OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields*)il2cpp_codegen_static_fields_for(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Material cakeslice.OutlineEffect::GetMaterialFromID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * OutlineEffect_GetMaterialFromID_m8DE676E46868B8D20A557093350C9522A7B8E401 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, int32_t ___ID0, const RuntimeMethod* method)
{
	{
		// if (ID == 0)
		int32_t L_0 = ___ID0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return outline1Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_outline1Material_24();
		return L_1;
	}

IL_000a:
	{
		// else if (ID == 1)
		int32_t L_2 = ___ID0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return outline2Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_outline2Material_25();
		return L_3;
	}

IL_0015:
	{
		// else if (ID == 2)
		int32_t L_4 = ___ID0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		// return outline3Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_outline3Material_26();
		return L_5;
	}

IL_0020:
	{
		// return outline1Material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_outline1Material_24();
		return L_6;
	}
}
// UnityEngine.Material cakeslice.OutlineEffect::CreateMaterial(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___emissionColor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Material m = new Material(outlineBufferShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_outlineBufferShader_29();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_1, L_0, /*hidden argument*/NULL);
		// m.SetColor("_Color", emissionColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___emissionColor0;
		NullCheck(L_2);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_2, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_3, /*hidden argument*/NULL);
		// m.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_2;
		NullCheck(L_4);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_4, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, /*hidden argument*/NULL);
		// m.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = L_4;
		NullCheck(L_5);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_5, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), /*hidden argument*/NULL);
		// m.SetInt("_ZWrite", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = L_5;
		NullCheck(L_6);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_6, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
		// m.DisableKeyword("_ALPHATEST_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = L_6;
		NullCheck(L_7);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_7, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
		// m.EnableKeyword("_ALPHABLEND_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = L_7;
		NullCheck(L_8);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_8, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
		// m.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = L_8;
		NullCheck(L_9);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_9, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
		// m.renderQueue = 3000;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = L_9;
		NullCheck(L_10);
		Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_10, ((int32_t)3000), /*hidden argument*/NULL);
		// return m;
		return L_10;
	}
}
// System.Void cakeslice.OutlineEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_Awake_m4F7277350642A9251DF26D3BA34ABD9FD315FF16 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null)
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0;
		L_0 = OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// throw new System.Exception("you can only have one outline camera in the scene");
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCF9D534EDEEA8B6743A581A1280C55FFF9FA817)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutlineEffect_Awake_m4F7277350642A9251DF26D3BA34ABD9FD315FF16_RuntimeMethod_var)));
	}

IL_001e:
	{
		// Instance = this;
		OutlineEffect_set_Instance_m371649F7FA14F47C5C15BB4FE9287887941D7330_inline(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_Start_m71B311AB4905FD4AFED70CBEAE124741E1D8DC75 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE0D856C5CABA94D008A5B75DBC4D28E83C83089A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A21BCB5A789AAABF99055CB2A641E6FACF19C97);
		s_Il2CppMethodInitialized = true;
	}
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* V_0 = NULL;
	int32_t V_1 = 0;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// CreateMaterialsIfNeeded();
		OutlineEffect_CreateMaterialsIfNeeded_m86C85DC827DD9AE16585A409BD59B61C13310D60(__this, /*hidden argument*/NULL);
		// UpdateMaterialsPublicProperties();
		OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269(__this, /*hidden argument*/NULL);
		// if (sourceCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_sourceCamera_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// sourceCamera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_sourceCamera_21(L_2);
		// if (sourceCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_sourceCamera_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// sourceCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_sourceCamera_21(L_5);
	}

IL_003f:
	{
		// if (outlineCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_outlineCamera_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00d2;
		}
	}
	{
		// foreach (Camera c in GetComponentsInChildren<Camera>())
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_8;
		L_8 = Component_GetComponentsInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE0D856C5CABA94D008A5B75DBC4D28E83C83089A(__this, /*hidden argument*/Component_GetComponentsInChildren_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE0D856C5CABA94D008A5B75DBC4D28E83C83089A_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0085;
	}

IL_005b:
	{
		// foreach (Camera c in GetComponentsInChildren<Camera>())
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (c.name == "Outline Camera")
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral7A21BCB5A789AAABF99055CB2A641E6FACF19C97, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// outlineCamera = c;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = V_2;
		__this->set_outlineCamera_23(L_16);
		// c.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = V_2;
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_008b;
	}

IL_0081:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0085:
	{
		// foreach (Camera c in GetComponentsInChildren<Camera>())
		int32_t L_19 = V_1;
		CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_008b:
	{
		// if (outlineCamera == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_outlineCamera_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// GameObject cameraGameObject = new GameObject("Outline Camera");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_23, _stringLiteral7A21BCB5A789AAABF99055CB2A641E6FACF19C97, /*hidden argument*/NULL);
		V_3 = L_23;
		// cameraGameObject.transform.parent = sourceCamera.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_3;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_26 = __this->get_sourceCamera_21();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_25, L_27, /*hidden argument*/NULL);
		// outlineCamera = cameraGameObject.AddComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_3;
		NullCheck(L_28);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_29;
		L_29 = GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C(L_28, /*hidden argument*/GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var);
		__this->set_outlineCamera_23(L_29);
		// outlineCamera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = __this->get_outlineCamera_23();
		NullCheck(L_30);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_30, (bool)0, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// if (renderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = __this->get_renderTexture_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00eb;
		}
	}
	{
		// renderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_33 = __this->get_renderTexture_31();
		NullCheck(L_33);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_33, /*hidden argument*/NULL);
	}

IL_00eb:
	{
		// if (extraRenderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_34 = __this->get_extraRenderTexture_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_0104;
		}
	}
	{
		// renderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_36 = __this->get_renderTexture_31();
		NullCheck(L_36);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_36, /*hidden argument*/NULL);
	}

IL_0104:
	{
		// renderTexture = new RenderTexture(sourceCamera.pixelWidth, sourceCamera.pixelHeight, 16, RenderTextureFormat.Default);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_37 = __this->get_sourceCamera_21();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_37, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_39 = __this->get_sourceCamera_21();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_39, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_41 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_41, L_38, L_40, ((int32_t)16), 7, /*hidden argument*/NULL);
		__this->set_renderTexture_31(L_41);
		// extraRenderTexture = new RenderTexture(sourceCamera.pixelWidth, sourceCamera.pixelHeight, 16, RenderTextureFormat.Default);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42 = __this->get_sourceCamera_21();
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_42, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44 = __this->get_sourceCamera_21();
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_44, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_46 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_46, L_43, L_45, ((int32_t)16), 7, /*hidden argument*/NULL);
		__this->set_extraRenderTexture_32(L_46);
		// UpdateOutlineCameraFromSource();
		OutlineEffect_UpdateOutlineCameraFromSource_m1EACF7999977A8D0113773DF2C5CBFDCC69F073A(__this, /*hidden argument*/NULL);
		// commandBuffer = new CommandBuffer();
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_47 = (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *)il2cpp_codegen_object_new(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29_il2cpp_TypeInfo_var);
		CommandBuffer__ctor_mB7E1174EB3B4E2E53BCC6532840AB55ECE6D06CF(L_47, /*hidden argument*/NULL);
		__this->set_commandBuffer_33(L_47);
		// outlineCamera.AddCommandBuffer(CameraEvent.BeforeImageEffects, commandBuffer);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48 = __this->get_outlineCamera_23();
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_49 = __this->get_commandBuffer_33();
		NullCheck(L_48);
		Camera_AddCommandBuffer_m8F88C5009AC9676BCD0AD1AE4AA655D5BF71CB2F(L_48, ((int32_t)18), L_49, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_OnPreRender_m4AB222EA88A40EEC46748A441B4B22CF037FC787 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tEF1310AA2F3111CA448F3FF927B24E1F9BB97079_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_GetEnumerator_m6ACE622646046DC6A0B2850B92351B8B205ABA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_get_Count_m5A731CE114430CEAFE81FFC5B734CD71BE02B0DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6530F1104219070539CB974D38292D5BDA72C27);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * V_1 = NULL;
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_4 = NULL;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_5 = NULL;
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * V_6 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_7 = NULL;
	Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (commandBuffer == null)
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_0 = __this->get_commandBuffer_33();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (outlines.Count == 0)
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_1 = __this->get_outlines_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = LinkedSet_1_get_Count_m5A731CE114430CEAFE81FFC5B734CD71BE02B0DD(L_1, /*hidden argument*/LinkedSet_1_get_Count_m5A731CE114430CEAFE81FFC5B734CD71BE02B0DD_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// if (!RenderTheNextFrame)
		bool L_3 = __this->get_RenderTheNextFrame_35();
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return;
		return;
	}

IL_001f:
	{
		// RenderTheNextFrame = false;
		__this->set_RenderTheNextFrame_35((bool)0);
		// }
		goto IL_002f;
	}

IL_0028:
	{
		// RenderTheNextFrame = true;
		__this->set_RenderTheNextFrame_35((bool)1);
	}

IL_002f:
	{
		// CreateMaterialsIfNeeded();
		OutlineEffect_CreateMaterialsIfNeeded_m86C85DC827DD9AE16585A409BD59B61C13310D60(__this, /*hidden argument*/NULL);
		// if (renderTexture == null || renderTexture.width != sourceCamera.pixelWidth || renderTexture.height != sourceCamera.pixelHeight)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = __this->get_renderTexture_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0076;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = __this->get_renderTexture_31();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_sourceCamera_21();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0076;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = __this->get_renderTexture_31();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_sourceCamera_21();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0101;
		}
	}

IL_0076:
	{
		// if (renderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14 = __this->get_renderTexture_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// renderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = __this->get_renderTexture_31();
		NullCheck(L_16);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_16, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// if (extraRenderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = __this->get_extraRenderTexture_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// renderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_19 = __this->get_renderTexture_31();
		NullCheck(L_19);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_19, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// renderTexture = new RenderTexture(sourceCamera.pixelWidth, sourceCamera.pixelHeight, 16, RenderTextureFormat.Default);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20 = __this->get_sourceCamera_21();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_20, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_22 = __this->get_sourceCamera_21();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_22, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_24, L_21, L_23, ((int32_t)16), 7, /*hidden argument*/NULL);
		__this->set_renderTexture_31(L_24);
		// extraRenderTexture = new RenderTexture(sourceCamera.pixelWidth, sourceCamera.pixelHeight, 16, RenderTextureFormat.Default);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_sourceCamera_21();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Camera_get_pixelWidth_m7DC2EF816FA7AB52EEE991E054FC7B1F31982802(L_25, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = __this->get_sourceCamera_21();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Camera_get_pixelHeight_m7A18CEE2D95835EB95156E88D4D27EA018404201(L_27, /*hidden argument*/NULL);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_29 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m8E4220FDA652BA3CACE60FBA59D868B921C0F533(L_29, L_26, L_28, ((int32_t)16), 7, /*hidden argument*/NULL);
		__this->set_extraRenderTexture_32(L_29);
		// outlineCamera.targetTexture = renderTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_30 = __this->get_outlineCamera_23();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = __this->get_renderTexture_31();
		NullCheck(L_30);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_30, L_31, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// UpdateMaterialsPublicProperties();
		OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269(__this, /*hidden argument*/NULL);
		// UpdateOutlineCameraFromSource();
		OutlineEffect_UpdateOutlineCameraFromSource_m1EACF7999977A8D0113773DF2C5CBFDCC69F073A(__this, /*hidden argument*/NULL);
		// outlineCamera.targetTexture = renderTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_32 = __this->get_outlineCamera_23();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_33 = __this->get_renderTexture_31();
		NullCheck(L_32);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_32, L_33, /*hidden argument*/NULL);
		// commandBuffer.SetRenderTarget(renderTexture);
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_34 = __this->get_commandBuffer_33();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_35 = __this->get_renderTexture_31();
		RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  L_36;
		L_36 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840(L_34, L_36, /*hidden argument*/NULL);
		// commandBuffer.Clear();
		CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_37 = __this->get_commandBuffer_33();
		NullCheck(L_37);
		CommandBuffer_Clear_mDE798ACE9294B43B9387A6B06E43B3D4A30A7092(L_37, /*hidden argument*/NULL);
		// foreach (Outline outline in outlines)
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_38 = __this->get_outlines_5();
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = LinkedSet_1_GetEnumerator_m6ACE622646046DC6A0B2850B92351B8B205ABA9A(L_38, /*hidden argument*/LinkedSet_1_GetEnumerator_m6ACE622646046DC6A0B2850B92351B8B205ABA9A_RuntimeMethod_var);
		V_0 = L_39;
	}

IL_014b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03e1;
		}

IL_0150:
		{
			// foreach (Outline outline in outlines)
			RuntimeObject* L_40 = V_0;
			NullCheck(L_40);
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_41;
			L_41 = InterfaceFuncInvoker0< Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<cakeslice.Outline>::get_Current() */, IEnumerator_1_tEF1310AA2F3111CA448F3FF927B24E1F9BB97079_il2cpp_TypeInfo_var, L_40);
			V_1 = L_41;
			// LayerMask l = sourceCamera.cullingMask;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42 = __this->get_sourceCamera_21();
			NullCheck(L_42);
			int32_t L_43;
			L_43 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_42, /*hidden argument*/NULL);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_44;
			L_44 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(L_43, /*hidden argument*/NULL);
			V_2 = L_44;
			// if (outline != null && l == (l | (1 << outline.gameObject.layer)))
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_45 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_46;
			L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_03e1;
			}
		}

IL_0174:
		{
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_47 = V_2;
			int32_t L_48;
			L_48 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_47, /*hidden argument*/NULL);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_49 = V_2;
			int32_t L_50;
			L_50 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_49, /*hidden argument*/NULL);
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_51 = V_1;
			NullCheck(L_51);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
			L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_51, /*hidden argument*/NULL);
			NullCheck(L_52);
			int32_t L_53;
			L_53 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_52, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)((int32_t)L_50|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))))))))))
			{
				goto IL_03e1;
			}
		}

IL_0196:
		{
			// for (int v = 0; v < outline.SharedMaterials.Length; v++)
			V_3 = 0;
			goto IL_03d3;
		}

IL_019d:
		{
			// Material m = null;
			V_4 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
			// if (outline.SharedMaterials[v].HasProperty("_MainTex") && outline.SharedMaterials[v].mainTexture != null && outline.SharedMaterials[v])
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_54 = V_1;
			NullCheck(L_54);
			MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_55;
			L_55 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_54, /*hidden argument*/NULL);
			int32_t L_56 = V_3;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			NullCheck(L_58);
			bool L_59;
			L_59 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_58, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
			if (!L_59)
			{
				goto IL_02d6;
			}
		}

IL_01b7:
		{
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_60 = V_1;
			NullCheck(L_60);
			MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_61;
			L_61 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_60, /*hidden argument*/NULL);
			int32_t L_62 = V_3;
			NullCheck(L_61);
			int32_t L_63 = L_62;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
			NullCheck(L_64);
			Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_65;
			L_65 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_64, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_66;
			L_66 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_65, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_66)
			{
				goto IL_02d6;
			}
		}

IL_01cf:
		{
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_67 = V_1;
			NullCheck(L_67);
			MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_68;
			L_68 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_67, /*hidden argument*/NULL);
			int32_t L_69 = V_3;
			NullCheck(L_68);
			int32_t L_70 = L_69;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_72;
			L_72 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_71, /*hidden argument*/NULL);
			if (!L_72)
			{
				goto IL_02d6;
			}
		}

IL_01e1:
		{
			// foreach (Material g in materialBuffer)
			List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_73 = __this->get_materialBuffer_34();
			NullCheck(L_73);
			Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  L_74;
			L_74 = List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C(L_73, /*hidden argument*/List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
			V_8 = L_74;
		}

IL_01ee:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0266;
			}

IL_01f0:
			{
				// foreach (Material g in materialBuffer)
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_75;
				L_75 = Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
				V_9 = L_75;
				// if (g.mainTexture == outline.SharedMaterials[v].mainTexture)
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76 = V_9;
				NullCheck(L_76);
				Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_77;
				L_77 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_76, /*hidden argument*/NULL);
				Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_78 = V_1;
				NullCheck(L_78);
				MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_79;
				L_79 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_78, /*hidden argument*/NULL);
				int32_t L_80 = V_3;
				NullCheck(L_79);
				int32_t L_81 = L_80;
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
				NullCheck(L_82);
				Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_83;
				L_83 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_82, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_84;
				L_84 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_77, L_83, /*hidden argument*/NULL);
				if (!L_84)
				{
					goto IL_0266;
				}
			}

IL_0214:
			{
				// if (outline.eraseRenderer && g.color == outlineEraseMaterial.color)
				Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_85 = V_1;
				NullCheck(L_85);
				bool L_86 = L_85->get_eraseRenderer_9();
				if (!L_86)
				{
					goto IL_023b;
				}
			}

IL_021c:
			{
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_87 = V_9;
				NullCheck(L_87);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_88;
				L_88 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_87, /*hidden argument*/NULL);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_89 = __this->get_outlineEraseMaterial_27();
				NullCheck(L_89);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_90;
				L_90 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_89, /*hidden argument*/NULL);
				bool L_91;
				L_91 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_88, L_90, /*hidden argument*/NULL);
				if (!L_91)
				{
					goto IL_023b;
				}
			}

IL_0235:
			{
				// m = g;
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_92 = V_9;
				V_4 = L_92;
				goto IL_0266;
			}

IL_023b:
			{
				// else if (!outline.eraseRenderer && g.color == GetMaterialFromID(outline.color).color)
				Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_93 = V_1;
				NullCheck(L_93);
				bool L_94 = L_93->get_eraseRenderer_9();
				if (L_94)
				{
					goto IL_0266;
				}
			}

IL_0243:
			{
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_95 = V_9;
				NullCheck(L_95);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96;
				L_96 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_95, /*hidden argument*/NULL);
				Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_97 = V_1;
				NullCheck(L_97);
				int32_t L_98 = L_97->get_color_8();
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_99;
				L_99 = OutlineEffect_GetMaterialFromID_m8DE676E46868B8D20A557093350C9522A7B8E401(__this, L_98, /*hidden argument*/NULL);
				NullCheck(L_99);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_100;
				L_100 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_99, /*hidden argument*/NULL);
				bool L_101;
				L_101 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_96, L_100, /*hidden argument*/NULL);
				if (!L_101)
				{
					goto IL_0266;
				}
			}

IL_0262:
			{
				// m = g;
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_102 = V_9;
				V_4 = L_102;
			}

IL_0266:
			{
				// foreach (Material g in materialBuffer)
				bool L_103;
				L_103 = Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
				if (L_103)
				{
					goto IL_01f0;
				}
			}

IL_026f:
			{
				IL2CPP_LEAVE(0x27F, FINALLY_0271);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0271;
		}

FINALLY_0271:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_8), /*hidden argument*/Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
			IL2CPP_END_FINALLY(625)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(625)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x27F, IL_027f)
		}

IL_027f:
		{
			// if (m == null)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_104 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_105;
			L_105 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_104, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_105)
			{
				goto IL_02f6;
			}
		}

IL_0289:
		{
			// if (outline.eraseRenderer)
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_106 = V_1;
			NullCheck(L_106);
			bool L_107 = L_106->get_eraseRenderer_9();
			if (!L_107)
			{
				goto IL_02a0;
			}
		}

IL_0291:
		{
			// m = new Material(outlineEraseMaterial);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_108 = __this->get_outlineEraseMaterial_27();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_109 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
			Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_109, L_108, /*hidden argument*/NULL);
			V_4 = L_109;
			goto IL_02b3;
		}

IL_02a0:
		{
			// m = new Material(GetMaterialFromID(outline.color));
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_110 = V_1;
			NullCheck(L_110);
			int32_t L_111 = L_110->get_color_8();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_112;
			L_112 = OutlineEffect_GetMaterialFromID_m8DE676E46868B8D20A557093350C9522A7B8E401(__this, L_111, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_113 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
			Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_113, L_112, /*hidden argument*/NULL);
			V_4 = L_113;
		}

IL_02b3:
		{
			// m.mainTexture = outline.SharedMaterials[v].mainTexture;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_114 = V_4;
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_115 = V_1;
			NullCheck(L_115);
			MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_116;
			L_116 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_115, /*hidden argument*/NULL);
			int32_t L_117 = V_3;
			NullCheck(L_116);
			int32_t L_118 = L_117;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
			NullCheck(L_119);
			Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_120;
			L_120 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_119, /*hidden argument*/NULL);
			NullCheck(L_114);
			Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_114, L_120, /*hidden argument*/NULL);
			// materialBuffer.Add(m);
			List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_121 = __this->get_materialBuffer_34();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_122 = V_4;
			NullCheck(L_121);
			List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_121, L_122, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
			// }
			goto IL_02f6;
		}

IL_02d6:
		{
			// if (outline.eraseRenderer)
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_123 = V_1;
			NullCheck(L_123);
			bool L_124 = L_123->get_eraseRenderer_9();
			if (!L_124)
			{
				goto IL_02e8;
			}
		}

IL_02de:
		{
			// m = outlineEraseMaterial;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_125 = __this->get_outlineEraseMaterial_27();
			V_4 = L_125;
			goto IL_02f6;
		}

IL_02e8:
		{
			// m = GetMaterialFromID(outline.color);
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_126 = V_1;
			NullCheck(L_126);
			int32_t L_127 = L_126->get_color_8();
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_128;
			L_128 = OutlineEffect_GetMaterialFromID_m8DE676E46868B8D20A557093350C9522A7B8E401(__this, L_127, /*hidden argument*/NULL);
			V_4 = L_128;
		}

IL_02f6:
		{
			// if (backfaceCulling)
			bool L_129 = __this->get_backfaceCulling_13();
			if (!L_129)
			{
				goto IL_030d;
			}
		}

IL_02fe:
		{
			// m.SetInt("_Culling", (int)UnityEngine.Rendering.CullMode.Back);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_130 = V_4;
			NullCheck(L_130);
			Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_130, _stringLiteralE6530F1104219070539CB974D38292D5BDA72C27, 2, /*hidden argument*/NULL);
			goto IL_031a;
		}

IL_030d:
		{
			// m.SetInt("_Culling", (int)UnityEngine.Rendering.CullMode.Off);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_131 = V_4;
			NullCheck(L_131);
			Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_131, _stringLiteralE6530F1104219070539CB974D38292D5BDA72C27, 0, /*hidden argument*/NULL);
		}

IL_031a:
		{
			// MeshFilter mL = outline.MeshFilter;
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_132 = V_1;
			NullCheck(L_132);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_133;
			L_133 = Outline_get_MeshFilter_m21F64CA92404B80A1F79805D533AB31C1B8A5FB5_inline(L_132, /*hidden argument*/NULL);
			V_5 = L_133;
			// SkinnedMeshRenderer sMR = outline.SkinnedMeshRenderer;
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_134 = V_1;
			NullCheck(L_134);
			SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_135;
			L_135 = Outline_get_SkinnedMeshRenderer_mCA54535938671B6C0C3BA8B6BD1108E0C32793CD_inline(L_134, /*hidden argument*/NULL);
			V_6 = L_135;
			// SpriteRenderer sR = outline.SpriteRenderer;
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_136 = V_1;
			NullCheck(L_136);
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_137;
			L_137 = Outline_get_SpriteRenderer_m9A161F999709E154F7C544A018B38973116FF51B_inline(L_136, /*hidden argument*/NULL);
			V_7 = L_137;
			// if (mL)
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_138 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_139;
			L_139 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_138, /*hidden argument*/NULL);
			if (!L_139)
			{
				goto IL_0373;
			}
		}

IL_033b:
		{
			// if (mL.sharedMesh != null)
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_140 = V_5;
			NullCheck(L_140);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_141;
			L_141 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_140, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_142;
			L_142 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_141, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_142)
			{
				goto IL_03cf;
			}
		}

IL_034d:
		{
			// if (v < mL.sharedMesh.subMeshCount)
			int32_t L_143 = V_3;
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_144 = V_5;
			NullCheck(L_144);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_145;
			L_145 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E(L_144, /*hidden argument*/NULL);
			NullCheck(L_145);
			int32_t L_146;
			L_146 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_145, /*hidden argument*/NULL);
			if ((((int32_t)L_143) >= ((int32_t)L_146)))
			{
				goto IL_03cf;
			}
		}

IL_035c:
		{
			// commandBuffer.DrawRenderer(outline.Renderer, m, v, 0);
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_147 = __this->get_commandBuffer_33();
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_148 = V_1;
			NullCheck(L_148);
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_149;
			L_149 = Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline(L_148, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_150 = V_4;
			int32_t L_151 = V_3;
			NullCheck(L_147);
			CommandBuffer_DrawRenderer_mA9D02A67366918F78472CCCDC98A5E9020CB63AC(L_147, L_149, L_150, L_151, 0, /*hidden argument*/NULL);
			// }
			goto IL_03cf;
		}

IL_0373:
		{
			// else if (sMR)
			SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_152 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_153;
			L_153 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_152, /*hidden argument*/NULL);
			if (!L_153)
			{
				goto IL_03b1;
			}
		}

IL_037c:
		{
			// if (sMR.sharedMesh != null)
			SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_154 = V_6;
			NullCheck(L_154);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_155;
			L_155 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_154, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_156;
			L_156 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_155, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_156)
			{
				goto IL_03cf;
			}
		}

IL_038b:
		{
			// if (v < sMR.sharedMesh.subMeshCount)
			int32_t L_157 = V_3;
			SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_158 = V_6;
			NullCheck(L_158);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_159;
			L_159 = SkinnedMeshRenderer_get_sharedMesh_mFD55E307943C1C4B2E2E8632F15B41CCBD8D91F2(L_158, /*hidden argument*/NULL);
			NullCheck(L_159);
			int32_t L_160;
			L_160 = Mesh_get_subMeshCount_m60E2BCBFEEF21260C70D06EAEC3A2A51D80796FF(L_159, /*hidden argument*/NULL);
			if ((((int32_t)L_157) >= ((int32_t)L_160)))
			{
				goto IL_03cf;
			}
		}

IL_039a:
		{
			// commandBuffer.DrawRenderer(outline.Renderer, m, v, 0);
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_161 = __this->get_commandBuffer_33();
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_162 = V_1;
			NullCheck(L_162);
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_163;
			L_163 = Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline(L_162, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_164 = V_4;
			int32_t L_165 = V_3;
			NullCheck(L_161);
			CommandBuffer_DrawRenderer_mA9D02A67366918F78472CCCDC98A5E9020CB63AC(L_161, L_163, L_164, L_165, 0, /*hidden argument*/NULL);
			// }
			goto IL_03cf;
		}

IL_03b1:
		{
			// else if (sR)
			SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_166 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_167;
			L_167 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_166, /*hidden argument*/NULL);
			if (!L_167)
			{
				goto IL_03cf;
			}
		}

IL_03ba:
		{
			// commandBuffer.DrawRenderer(outline.Renderer, m, v, 0);
			CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * L_168 = __this->get_commandBuffer_33();
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_169 = V_1;
			NullCheck(L_169);
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_170;
			L_170 = Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline(L_169, /*hidden argument*/NULL);
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_171 = V_4;
			int32_t L_172 = V_3;
			NullCheck(L_168);
			CommandBuffer_DrawRenderer_mA9D02A67366918F78472CCCDC98A5E9020CB63AC(L_168, L_170, L_171, L_172, 0, /*hidden argument*/NULL);
		}

IL_03cf:
		{
			// for (int v = 0; v < outline.SharedMaterials.Length; v++)
			int32_t L_173 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1));
		}

IL_03d3:
		{
			// for (int v = 0; v < outline.SharedMaterials.Length; v++)
			int32_t L_174 = V_3;
			Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_175 = V_1;
			NullCheck(L_175);
			MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_176;
			L_176 = Outline_get_SharedMaterials_mBFA72A6ABE8B95480620009A239D0F5F92C72F8A(L_175, /*hidden argument*/NULL);
			NullCheck(L_176);
			if ((((int32_t)L_174) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_176)->max_length))))))
			{
				goto IL_019d;
			}
		}

IL_03e1:
		{
			// foreach (Outline outline in outlines)
			RuntimeObject* L_177 = V_0;
			NullCheck(L_177);
			bool L_178;
			L_178 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_177);
			if (L_178)
			{
				goto IL_0150;
			}
		}

IL_03ec:
		{
			IL2CPP_LEAVE(0x3F8, FINALLY_03ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03ee;
	}

FINALLY_03ee:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_179 = V_0;
			if (!L_179)
			{
				goto IL_03f7;
			}
		}

IL_03f1:
		{
			RuntimeObject* L_180 = V_0;
			NullCheck(L_180);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_180);
		}

IL_03f7:
		{
			IL2CPP_END_FINALLY(1006)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1006)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F8, IL_03f8)
	}

IL_03f8:
	{
		// outlineCamera.Render();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_181 = __this->get_outlineCamera_23();
		NullCheck(L_181);
		Camera_Render_m2D9749799AAC91A3725044A6CF5594E1F5D68D61(L_181, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_OnEnable_mBCD46EDC07B4CDAE16FEB10377ECC81EABE0DFF1 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_Contains_m058B444AF4791AC6F626D25CDE826E48C591971B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m3144D7661D2F030679098C4A93205490D7CD854B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* V_0 = NULL;
	OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* V_1 = NULL;
	int32_t V_2 = 0;
	Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * V_3 = NULL;
	{
		// Outline[] o = FindObjectsOfType<Outline>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_0;
		L_0 = Object_FindObjectsOfType_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m3144D7661D2F030679098C4A93205490D7CD854B(/*hidden argument*/Object_FindObjectsOfType_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m3144D7661D2F030679098C4A93205490D7CD854B_RuntimeMethod_var);
		V_0 = L_0;
		// if (autoEnableOutlines)
		bool L_1 = __this->get_autoEnableOutlines_22();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		// foreach (Outline oL in o)
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0028;
	}

IL_0014:
	{
		// foreach (Outline oL in o)
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// oL.enabled = false;
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_7 = L_6;
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)0, /*hidden argument*/NULL);
		// oL.enabled = true;
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		// foreach (Outline oL in o)
		int32_t L_9 = V_2;
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}

IL_002f:
	{
		// foreach (Outline oL in o)
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_11 = V_0;
		V_1 = L_11;
		V_2 = 0;
		goto IL_0058;
	}

IL_0035:
	{
		// foreach (Outline oL in o)
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		// if (!outlines.Contains(oL))
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_16 = __this->get_outlines_5();
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_17 = V_3;
		NullCheck(L_16);
		bool L_18;
		L_18 = LinkedSet_1_Contains_m058B444AF4791AC6F626D25CDE826E48C591971B(L_16, L_17, /*hidden argument*/LinkedSet_1_Contains_m058B444AF4791AC6F626D25CDE826E48C591971B_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_0054;
		}
	}
	{
		// outlines.Add(oL);
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_19 = __this->get_outlines_5();
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_20 = V_3;
		NullCheck(L_19);
		bool L_21;
		L_21 = LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB(L_19, L_20, /*hidden argument*/LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB_RuntimeMethod_var);
	}

IL_0054:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0058:
	{
		// foreach (Outline oL in o)
		int32_t L_23 = V_2;
		OutlineU5BU5D_t3C708B6622C1E056373C558ADF87446E94C6840A* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_OnDestroy_m5A6E786950E25B77FAC3B4CFEEF60276EEA16323 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (renderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = __this->get_renderTexture_31();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// renderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = __this->get_renderTexture_31();
		NullCheck(L_2);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// if (extraRenderTexture != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_extraRenderTexture_32();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// extraRenderTexture.Release();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = __this->get_extraRenderTexture_32();
		NullCheck(L_5);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// DestroyMaterials();
		OutlineEffect_DestroyMaterials_m71BA3F82A2F55D07C64A781F33214D4CDD4F0282(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_OnRenderImage_mABB1807B5535EFC2D129EE0D242A05EAA63B4281 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral802DF0EAAF6E20E8A7B8B9F6E855FF60FDC396D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outlineShaderMaterial != null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// outlineShaderMaterial.SetTexture("_OutlineSource", renderTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_outlineShaderMaterial_30();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = __this->get_renderTexture_31();
		NullCheck(L_2);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_2, _stringLiteral802DF0EAAF6E20E8A7B8B9F6E855FF60FDC396D7, L_3, /*hidden argument*/NULL);
		// if (addLinesBetweenColors)
		bool L_4 = __this->get_addLinesBetweenColors_17();
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// Graphics.Blit(source, extraRenderTexture, outlineShaderMaterial, 0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = __this->get_extraRenderTexture_32();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_5, L_6, L_7, 0, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetTexture("_OutlineSource", extraRenderTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_outlineShaderMaterial_30();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9 = __this->get_extraRenderTexture_32();
		NullCheck(L_8);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_8, _stringLiteral802DF0EAAF6E20E8A7B8B9F6E855FF60FDC396D7, L_9, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// Graphics.Blit(source, destination, outlineShaderMaterial, 1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_mF7AA319E24D980D0E560A721966B87186392C3DD(L_10, L_11, L_12, 1, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::CreateMaterialsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_CreateMaterialsIfNeeded_m86C85DC827DD9AE16585A409BD59B61C13310D60 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C64887AB82F5BC82217C8F11DDB0313813CA67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59339BB84CE1750F39F4F47B805E8E40A633C093);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outlineShader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_outlineShader_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// outlineShader = Resources.Load<Shader>("OutlineShader");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001(_stringLiteral59339BB84CE1750F39F4F47B805E8E40A633C093, /*hidden argument*/Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001_RuntimeMethod_var);
		__this->set_outlineShader_28(L_2);
	}

IL_001e:
	{
		// if (outlineBufferShader == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = __this->get_outlineBufferShader_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// outlineBufferShader = Resources.Load<Shader>("OutlineBufferShader");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5;
		L_5 = Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001(_stringLiteral38C64887AB82F5BC82217C8F11DDB0313813CA67, /*hidden argument*/Resources_Load_TisShader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39_m957A0295FB707054CC7AFC54DA4657C145FC9001_RuntimeMethod_var);
		__this->set_outlineBufferShader_29(L_5);
	}

IL_003c:
	{
		// if (outlineShaderMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// outlineShaderMaterial = new Material(outlineShader);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_8 = __this->get_outlineShader_28();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_9, L_8, /*hidden argument*/NULL);
		__this->set_outlineShaderMaterial_30(L_9);
		// outlineShaderMaterial.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_10);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_10, ((int32_t)61), /*hidden argument*/NULL);
		// UpdateMaterialsPublicProperties();
		OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// if (outlineEraseMaterial == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_outlineEraseMaterial_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a1;
		}
	}
	{
		// outlineEraseMaterial = CreateMaterial(new Color(0, 0, 0, 0));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_13), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A(__this, L_13, /*hidden argument*/NULL);
		__this->set_outlineEraseMaterial_27(L_14);
	}

IL_00a1:
	{
		// if (outline1Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_outline1Material_24();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d4;
		}
	}
	{
		// outline1Material = CreateMaterial(new Color(1, 0, 0, 0));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18;
		L_18 = OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A(__this, L_17, /*hidden argument*/NULL);
		__this->set_outline1Material_24(L_18);
	}

IL_00d4:
	{
		// if (outline2Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_outline2Material_25();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0107;
		}
	}
	{
		// outline2Material = CreateMaterial(new Color(0, 1, 0, 0));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_21), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22;
		L_22 = OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A(__this, L_21, /*hidden argument*/NULL);
		__this->set_outline2Material_25(L_22);
	}

IL_0107:
	{
		// if (outline3Material == null)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_23 = __this->get_outline3Material_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_013a;
		}
	}
	{
		// outline3Material = CreateMaterial(new Color(0, 0, 1, 0));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_25), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26;
		L_26 = OutlineEffect_CreateMaterial_m84177152DC291978189C583CD382DF834769155A(__this, L_25, /*hidden argument*/NULL);
		__this->set_outline3Material_26(L_26);
	}

IL_013a:
	{
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::DestroyMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_DestroyMaterials_m71BA3F82A2F55D07C64A781F33214D4CDD4F0282 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Material m in materialBuffer)
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = __this->get_materialBuffer_34();
		NullCheck(L_0);
		Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  L_1;
		L_1 = List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C(L_0, /*hidden argument*/List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000e:
		{
			// foreach (Material m in materialBuffer)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
			L_2 = Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
			// DestroyImmediate(m);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// foreach (Material m in materialBuffer)
			bool L_3;
			L_3 = Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// materialBuffer.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = __this->get_materialBuffer_34();
		NullCheck(L_4);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_4, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// DestroyImmediate(outlineShaderMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_5, /*hidden argument*/NULL);
		// DestroyImmediate(outlineEraseMaterial);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_outlineEraseMaterial_27();
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_6, /*hidden argument*/NULL);
		// DestroyImmediate(outline1Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_outline1Material_24();
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_7, /*hidden argument*/NULL);
		// DestroyImmediate(outline2Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_outline2Material_25();
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_8, /*hidden argument*/NULL);
		// DestroyImmediate(outline3Material);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_outline3Material_26();
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_9, /*hidden argument*/NULL);
		// outlineShader = null;
		__this->set_outlineShader_28((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)NULL);
		// outlineBufferShader = null;
		__this->set_outlineBufferShader_29((Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *)NULL);
		// outlineShaderMaterial = null;
		__this->set_outlineShaderMaterial_30((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// outlineEraseMaterial = null;
		__this->set_outlineEraseMaterial_27((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// outline1Material = null;
		__this->set_outline1Material_24((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// outline2Material = null;
		__this->set_outline2Material_25((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// outline3Material = null;
		__this->set_outline3Material_26((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::UpdateMaterialsPublicProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_UpdateMaterialsPublicProperties_mFE51D29C7B51E595A7F34A9139C718B0525D9269 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068881FB33767CEB76E6645E28EA400B92FEA4C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A0ED5A8A6262BAA1F3F005AE18A4AA19A4009C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE05BAB247508293F306885400634ED250BFC88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2DF2962AAED14C03C5D097CD61F1E48224BBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71383EA9D9D2BB710814E8746E4AE8EDC7C52A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F6E1CD01F554DCDDEA365F9ADC7D6661E58581B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918B3F9950378B5DD5250E788EE4A661FA638F2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C30C54A1DA762106B8DD55101B9D230EB58E83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5BD65B6B4CC9D714B0EA8D282C17DBF7F9D00B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF129061F856AB5478F4E8BE1D2687725F95F5E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF504504F67F404AF2822046B4C2E211A9FDC9336);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	String_t* G_B15_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	String_t* G_B16_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B16_2 = NULL;
	{
		// if (outlineShaderMaterial)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_outlineShaderMaterial_30();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_032f;
		}
	}
	{
		// float scalingFactor = 1;
		V_0 = (1.0f);
		// if (scaleWithScreenSize)
		bool L_2 = __this->get_scaleWithScreenSize_18();
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// scalingFactor = Screen.height / 360.0f;
		int32_t L_3;
		L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_0 = ((float)((float)((float)((float)L_3))/(float)(360.0f)));
	}

IL_002b:
	{
		// if (scaleWithScreenSize && scalingFactor < 1)
		bool L_4 = __this->get_scaleWithScreenSize_18();
		if (!L_4)
		{
			goto IL_00ff;
		}
	}
	{
		float L_5 = V_0;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_00ff;
		}
	}
	{
		// if (UnityEngine.XR.XRSettings.isDeviceActive && sourceCamera.stereoTargetEye != StereoTargetEyeMask.None)
		bool L_6;
		L_6 = XRSettings_get_isDeviceActive_m8A54A2D4D91CA2BC1B1554576B2FACFE5F65B087(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00aa;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = __this->get_sourceCamera_21();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Camera_get_stereoTargetEye_m45A05163D160C04B54EF3F23BD12F2A10F37818B(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		// outlineShaderMaterial.SetFloat("_LineThicknessX", (1 / 1000.0f) * (1.0f / UnityEngine.XR.XRSettings.eyeTextureWidth) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = __this->get_outlineShaderMaterial_30();
		int32_t L_10;
		L_10 = XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860(/*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_9, _stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)((float)((float)(1.0f)/(float)((float)((float)L_10)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_LineThicknessY", (1 / 1000.0f) * (1.0f / UnityEngine.XR.XRSettings.eyeTextureHeight) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_outlineShaderMaterial_30();
		int32_t L_12;
		L_12 = XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A(/*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)((float)((float)(1.0f)/(float)((float)((float)L_12)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// }
		goto IL_01d9;
	}

IL_00aa:
	{
		// outlineShaderMaterial.SetFloat("_LineThicknessX", (1 / 1000.0f) * (1.0f / Screen.width) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_outlineShaderMaterial_30();
		int32_t L_14;
		L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_13, _stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)((float)((float)(1.0f)/(float)((float)((float)L_14)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_LineThicknessY", (1 / 1000.0f) * (1.0f / Screen.height) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = __this->get_outlineShaderMaterial_30();
		int32_t L_16;
		L_16 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		NullCheck(L_15);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_15, _stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.00100000005f), (float)((float)((float)(1.0f)/(float)((float)((float)L_16)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// }
		goto IL_01d9;
	}

IL_00ff:
	{
		// if (UnityEngine.XR.XRSettings.isDeviceActive && sourceCamera.stereoTargetEye != StereoTargetEyeMask.None)
		bool L_17;
		L_17 = XRSettings_get_isDeviceActive_m8A54A2D4D91CA2BC1B1554576B2FACFE5F65B087(/*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0177;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_sourceCamera_21();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Camera_get_stereoTargetEye_m45A05163D160C04B54EF3F23BD12F2A10F37818B(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0177;
		}
	}
	{
		// outlineShaderMaterial.SetFloat("_LineThicknessX", scalingFactor * (lineThickness / 1000.0f) * (1.0f / UnityEngine.XR.XRSettings.eyeTextureWidth) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_outlineShaderMaterial_30();
		float L_21 = V_0;
		float L_22 = __this->get_lineThickness_6();
		int32_t L_23;
		L_23 = XRSettings_get_eyeTextureWidth_m6202CB8B350531730FAFBBC6CF64EECCA3CBD860(/*hidden argument*/NULL);
		NullCheck(L_20);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_20, _stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_21, (float)((float)((float)L_22/(float)(1000.0f))))), (float)((float)((float)(1.0f)/(float)((float)((float)L_23)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_LineThicknessY", scalingFactor * (lineThickness / 1000.0f) * (1.0f / UnityEngine.XR.XRSettings.eyeTextureHeight) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = __this->get_outlineShaderMaterial_30();
		float L_25 = V_0;
		float L_26 = __this->get_lineThickness_6();
		int32_t L_27;
		L_27 = XRSettings_get_eyeTextureHeight_m045874DF2D8935D59582C65D8EA9A0A3D96D091A(/*hidden argument*/NULL);
		NullCheck(L_24);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_24, _stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)((float)((float)L_26/(float)(1000.0f))))), (float)((float)((float)(1.0f)/(float)((float)((float)L_27)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// }
		goto IL_01d9;
	}

IL_0177:
	{
		// outlineShaderMaterial.SetFloat("_LineThicknessX", scalingFactor * (lineThickness / 1000.0f) * (1.0f / Screen.width) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_outlineShaderMaterial_30();
		float L_29 = V_0;
		float L_30 = __this->get_lineThickness_6();
		int32_t L_31;
		L_31 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_28, _stringLiteral612E66CA9DC1D45033AFB69B026D5F06335425C5, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_29, (float)((float)((float)L_30/(float)(1000.0f))))), (float)((float)((float)(1.0f)/(float)((float)((float)L_31)))))), (float)(1000.0f))), /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_LineThicknessY", scalingFactor * (lineThickness / 1000.0f) * (1.0f / Screen.height) * 1000.0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = __this->get_outlineShaderMaterial_30();
		float L_33 = V_0;
		float L_34 = __this->get_lineThickness_6();
		int32_t L_35;
		L_35 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		NullCheck(L_32);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_32, _stringLiteral40102E36E8B1B4C1EE8BAB8B3660F23FD5933519, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_33, (float)((float)((float)L_34/(float)(1000.0f))))), (float)((float)((float)(1.0f)/(float)((float)((float)L_35)))))), (float)(1000.0f))), /*hidden argument*/NULL);
	}

IL_01d9:
	{
		// outlineShaderMaterial.SetFloat("_LineIntensity", lineIntensity);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_36 = __this->get_outlineShaderMaterial_30();
		float L_37 = __this->get_lineIntensity_7();
		NullCheck(L_36);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_36, _stringLiteralF504504F67F404AF2822046B4C2E211A9FDC9336, L_37, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_FillAmount", fillAmount);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_38 = __this->get_outlineShaderMaterial_30();
		float L_39 = __this->get_fillAmount_8();
		NullCheck(L_38);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_38, _stringLiteralE5BD65B6B4CC9D714B0EA8D282C17DBF7F9D00B8, L_39, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetColor("_FillColor", fillColor);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_40 = __this->get_outlineShaderMaterial_30();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41 = __this->get_fillColor_14();
		NullCheck(L_40);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_40, _stringLiteralF129061F856AB5478F4E8BE1D2687725F95F5E37, L_41, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetFloat("_UseFillColor", useFillColor ? 1 : 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = __this->get_outlineShaderMaterial_30();
		bool L_43 = __this->get_useFillColor_15();
		G_B14_0 = _stringLiteral7F6E1CD01F554DCDDEA365F9ADC7D6661E58581B;
		G_B14_1 = L_42;
		if (L_43)
		{
			G_B15_0 = _stringLiteral7F6E1CD01F554DCDDEA365F9ADC7D6661E58581B;
			G_B15_1 = L_42;
			goto IL_0231;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_0232;
	}

IL_0231:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_0232:
	{
		NullCheck(G_B16_2);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(G_B16_2, G_B16_1, ((float)((float)G_B16_0)), /*hidden argument*/NULL);
		// outlineShaderMaterial.SetColor("_LineColor1", lineColor0 * lineColor0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = __this->get_outlineShaderMaterial_30();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_45 = __this->get_lineColor0_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = __this->get_lineColor0_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47;
		L_47 = Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_44, _stringLiteral068881FB33767CEB76E6645E28EA400B92FEA4C8, L_47, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetColor("_LineColor2", lineColor1 * lineColor1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48 = __this->get_outlineShaderMaterial_30();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = __this->get_lineColor1_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50 = __this->get_lineColor1_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51;
		L_51 = Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_48, _stringLiteralA8C30C54A1DA762106B8DD55101B9D230EB58E83, L_51, /*hidden argument*/NULL);
		// outlineShaderMaterial.SetColor("_LineColor3", lineColor2 * lineColor2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_52 = __this->get_outlineShaderMaterial_30();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_53 = __this->get_lineColor2_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = __this->get_lineColor2_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = Color_op_Multiply_mFD03CB228034C2D37F326B7AFF27C861E95447B7(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_52, _stringLiteral6E2DF2962AAED14C03C5D097CD61F1E48224BBBF, L_55, /*hidden argument*/NULL);
		// if (flipY)
		bool L_56 = __this->get_flipY_20();
		if (!L_56)
		{
			goto IL_02b6;
		}
	}
	{
		// outlineShaderMaterial.SetInt("_FlipY", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_57);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_57, _stringLiteral71383EA9D9D2BB710814E8746E4AE8EDC7C52A74, 1, /*hidden argument*/NULL);
		goto IL_02c7;
	}

IL_02b6:
	{
		// outlineShaderMaterial.SetInt("_FlipY", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_58 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_58);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_58, _stringLiteral71383EA9D9D2BB710814E8746E4AE8EDC7C52A74, 0, /*hidden argument*/NULL);
	}

IL_02c7:
	{
		// if (!additiveRendering)
		bool L_59 = __this->get_additiveRendering_12();
		if (L_59)
		{
			goto IL_02e2;
		}
	}
	{
		// outlineShaderMaterial.SetInt("_Dark", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_60 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_60);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_60, _stringLiteral2A0ED5A8A6262BAA1F3F005AE18A4AA19A4009C7, 1, /*hidden argument*/NULL);
		goto IL_02f3;
	}

IL_02e2:
	{
		// outlineShaderMaterial.SetInt("_Dark", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_61 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_61);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_61, _stringLiteral2A0ED5A8A6262BAA1F3F005AE18A4AA19A4009C7, 0, /*hidden argument*/NULL);
	}

IL_02f3:
	{
		// if (cornerOutlines)
		bool L_62 = __this->get_cornerOutlines_16();
		if (!L_62)
		{
			goto IL_030e;
		}
	}
	{
		// outlineShaderMaterial.SetInt("_CornerOutlines", 1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_63 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_63);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_63, _stringLiteral6DE05BAB247508293F306885400634ED250BFC88, 1, /*hidden argument*/NULL);
		goto IL_031f;
	}

IL_030e:
	{
		// outlineShaderMaterial.SetInt("_CornerOutlines", 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_64 = __this->get_outlineShaderMaterial_30();
		NullCheck(L_64);
		Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_64, _stringLiteral6DE05BAB247508293F306885400634ED250BFC88, 0, /*hidden argument*/NULL);
	}

IL_031f:
	{
		// Shader.SetGlobalFloat("_OutlineAlphaCutoff", alphaCutoff);
		float L_65 = __this->get_alphaCutoff_19();
		Shader_SetGlobalFloat_mD653B388A2C2E91C323FDA07C9D9FA295738A420(_stringLiteral918B3F9950378B5DD5250E788EE4A661FA638F2B, L_65, /*hidden argument*/NULL);
	}

IL_032f:
	{
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::UpdateOutlineCameraFromSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_UpdateOutlineCameraFromSource_m1EACF7999977A8D0113773DF2C5CBFDCC69F073A (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	{
		// outlineCamera.CopyFrom(sourceCamera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_outlineCamera_23();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_sourceCamera_21();
		NullCheck(L_0);
		Camera_CopyFrom_m8289D4C4041F4E1D886F5AF40E1C60C14707AD52(L_0, L_1, /*hidden argument*/NULL);
		// outlineCamera.renderingPath = RenderingPath.Forward;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_outlineCamera_23();
		NullCheck(L_2);
		Camera_set_renderingPath_mCB2BAB2434EEAE5C3B44083403B8D620414DFD86(L_2, 1, /*hidden argument*/NULL);
		// outlineCamera.backgroundColor = new Color(0.0f, 0.0f, 0.0f, 0.0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_outlineCamera_23();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_3, L_4, /*hidden argument*/NULL);
		// outlineCamera.clearFlags = CameraClearFlags.SolidColor;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_outlineCamera_23();
		NullCheck(L_5);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_5, 2, /*hidden argument*/NULL);
		// outlineCamera.rect = new Rect(0, 0, 1, 1);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = __this->get_outlineCamera_23();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_7), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_6, L_7, /*hidden argument*/NULL);
		// outlineCamera.cullingMask = 0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_outlineCamera_23();
		NullCheck(L_8);
		Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_8, 0, /*hidden argument*/NULL);
		// outlineCamera.targetTexture = renderTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_outlineCamera_23();
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_10 = __this->get_renderTexture_31();
		NullCheck(L_9);
		Camera_set_targetTexture_m200B05665D1F5C62D9016C2DD20955755BAB4596(L_9, L_10, /*hidden argument*/NULL);
		// outlineCamera.enabled = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_outlineCamera_23();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)0, /*hidden argument*/NULL);
		// outlineCamera.allowHDR = false;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_outlineCamera_23();
		NullCheck(L_12);
		Camera_set_allowHDR_m66B6DEF38F2C8F946674F25A789E2ABD132ECF32(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cakeslice.OutlineEffect::AddOutline(cakeslice.Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_AddOutline_mD5F3C04F77B9984D56826520A2723223F445F285 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___outline0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => outlines.Add(outline);
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_0 = __this->get_outlines_5();
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_1 = ___outline0;
		NullCheck(L_0);
		bool L_2;
		L_2 = LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB(L_0, L_1, /*hidden argument*/LinkedSet_1_Add_m537197FCFCBCE0F00443A13EDB73947D00771DCB_RuntimeMethod_var);
		return;
	}
}
// System.Void cakeslice.OutlineEffect::RemoveOutline(cakeslice.Outline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect_RemoveOutline_mB0B29C11A46CC143427CD7FBCCAF973A6633EBD6 (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * ___outline0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_Remove_m4DC69B45B0B3B195D45E9C1AAF3C5B66F0E6E04B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => outlines.Remove(outline);
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_0 = __this->get_outlines_5();
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_1 = ___outline0;
		NullCheck(L_0);
		bool L_2;
		L_2 = LinkedSet_1_Remove_m4DC69B45B0B3B195D45E9C1AAF3C5B66F0E6E04B(L_0, L_1, /*hidden argument*/LinkedSet_1_Remove_m4DC69B45B0B3B195D45E9C1AAF3C5B66F0E6E04B_RuntimeMethod_var);
		return;
	}
}
// System.Void cakeslice.OutlineEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlineEffect__ctor_mB2C9595B2EAD84DC919E816220938923D6A91CDC (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1__ctor_m55F6D45F48CDD6D46A131FF74DA2D324D0DCB688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly LinkedSet<Outline> outlines = new LinkedSet<Outline>();
		LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 * L_0 = (LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559 *)il2cpp_codegen_object_new(LinkedSet_1_t465C1874E37CA6AD72B09496603CAD1BDC150559_il2cpp_TypeInfo_var);
		LinkedSet_1__ctor_m55F6D45F48CDD6D46A131FF74DA2D324D0DCB688(L_0, /*hidden argument*/LinkedSet_1__ctor_m55F6D45F48CDD6D46A131FF74DA2D324D0DCB688_RuntimeMethod_var);
		__this->set_outlines_5(L_0);
		// public float lineThickness = 1.25f;
		__this->set_lineThickness_6((1.25f));
		// public float lineIntensity = .5f;
		__this->set_lineIntensity_7((0.5f));
		// public float fillAmount = 0.2f;
		__this->set_fillAmount_8((0.200000003f));
		// public Color lineColor0 = Color.red;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		__this->set_lineColor0_9(L_1);
		// public Color lineColor1 = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_lineColor1_10(L_2);
		// public Color lineColor2 = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		__this->set_lineColor2_11(L_3);
		// public bool backfaceCulling = true;
		__this->set_backfaceCulling_13((bool)1);
		// public Color fillColor = Color.blue;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		__this->set_fillColor_14(L_4);
		// public bool scaleWithScreenSize = true;
		__this->set_scaleWithScreenSize_18((bool)1);
		// public float alphaCutoff = .5f;
		__this->set_alphaCutoff_19((0.5f));
		// List<Material> materialBuffer = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_5 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_5, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		__this->set_materialBuffer_34(L_5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void cakeslice.Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_m1DC0458A9686B8687D50C84A934CB19DFAAAF13B (Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void cakeslice.Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m833EA7AB776A136E10320BA1B40B1CD553A23BD7 (Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.up, Time.deltaTime * 20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_0, L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)(20.0f))), /*hidden argument*/NULL);
		// timer -= Time.deltaTime;
		float L_3 = __this->get_timer_4();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_4(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		// if(timer < 0)
		float L_5 = __this->get_timer_4();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// timer = time;
		__this->set_timer_4((1.0f));
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void cakeslice.Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mE869455DA118902842C530619DD4F20CBFD706D7 (Rotate_t2AF1CC163D63C391C3232B2608206824874A46EA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void cakeslice.Toggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Start_mD397B5E147126C104229C61D34BE040447D37F57 (Toggle_t346904174812132E6059B0C46EAD6A10DFDD14A5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void cakeslice.Toggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_Update_m880D36D5CCCEF5B6AA6AEB0D27274C669B529C17 (Toggle_t346904174812132E6059B0C46EAD6A10DFDD14A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.K))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)107), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// GetComponent<Outline>().enabled = !GetComponent<Outline>().enabled;
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_1;
		L_1 = Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6(__this, /*hidden argument*/Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6_RuntimeMethod_var);
		Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * L_2;
		L_2 = Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6(__this, /*hidden argument*/Component_GetComponent_TisOutline_tFFD564EB44AA05779CEAE811795587F23AAB0014_m698971DC6772F31C1DDE3F8F0D50C03C7885D9E6_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void cakeslice.Toggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle__ctor_m53107C548A2C89A3E7D7E463416F0BE1F07B427B (Toggle_t346904174812132E6059B0C46EAD6A10DFDD14A5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_Renderer_m227CD0A255A15DDA6F467AF62FE509A0BF28EBDF_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___value0, const RuntimeMethod* method)
{
	{
		// public Renderer Renderer { get; private set; }
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___value0;
		__this->set_U3CRendererU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_SkinnedMeshRenderer_m8CE414D2CFC2BAB6DE0491F217BB03C7C1712B34_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___value0, const RuntimeMethod* method)
{
	{
		// public SkinnedMeshRenderer SkinnedMeshRenderer { get; private set; }
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = ___value0;
		__this->set_U3CSkinnedMeshRendererU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_SpriteRenderer_m1D449078EDE345EA58BD5F69F0AC678E5282FC05_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___value0, const RuntimeMethod* method)
{
	{
		// public SpriteRenderer SpriteRenderer { get; private set; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = ___value0;
		__this->set_U3CSpriteRendererU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Outline_set_MeshFilter_mADAEE914451D8D3B517B2E41BCC48ED3C5214B5B_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___value0, const RuntimeMethod* method)
{
	{
		// public MeshFilter MeshFilter { get; private set; }
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = ___value0;
		__this->set_U3CMeshFilterU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * OutlineEffect_get_Instance_m24AB54B01AAF9020B3A3C2384A69895317C7C3DA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OutlineEffect Instance { get; private set; }
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0 = ((OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields*)il2cpp_codegen_static_fields_for(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Outline_get_Renderer_m2A2B7D344F6D0C7CB4166BA9D219FA3010894B1E_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public Renderer Renderer { get; private set; }
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = __this->get_U3CRendererU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OutlineEffect_set_Instance_m371649F7FA14F47C5C15BB4FE9287887941D7330_inline (OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OutlineEffect Instance { get; private set; }
		OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195 * L_0 = ___value0;
		((OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_StaticFields*)il2cpp_codegen_static_fields_for(OutlineEffect_t64CFD04EB66B5479AD41CC0DCE79EFA00A8C5195_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * Outline_get_MeshFilter_m21F64CA92404B80A1F79805D533AB31C1B8A5FB5_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public MeshFilter MeshFilter { get; private set; }
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_0 = __this->get_U3CMeshFilterU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * Outline_get_SkinnedMeshRenderer_mCA54535938671B6C0C3BA8B6BD1108E0C32793CD_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public SkinnedMeshRenderer SkinnedMeshRenderer { get; private set; }
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_0 = __this->get_U3CSkinnedMeshRendererU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Outline_get_SpriteRenderer_m9A161F999709E154F7C544A018B38973116FF51B_inline (Outline_tFFD564EB44AA05779CEAE811795587F23AAB0014 * __this, const RuntimeMethod* method)
{
	{
		// public SpriteRenderer SpriteRenderer { get; private set; }
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_U3CSpriteRendererU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
