﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Animation[]
struct AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[]
struct AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[]
struct ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings[]
struct LightSettingsU5BU5D_t54FF583E9D4004DE60BAE699F64368AA3D8047B4;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings[]
struct MaterialSettingsU5BU5D_t882E1B340733B80FDDDBEA58C3D7140600AF2A01;
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[]
struct SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[]
struct CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Cubemap
struct Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// ToonyColorsPro.Demo.TCP2_Demo
struct TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142;
// TCP2_Demo_AutoRotate
struct TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE;
// ToonyColorsPro.Demo.TCP2_Demo_Camera
struct TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB;
// ToonyColorsPro.Demo.TCP2_Demo_Cat
struct TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear
struct TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E;
// ToonyColorsPro.Demo.TCP2_Demo_PBS
struct TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0;
// ToonyColorsPro.Demo.TCP2_Demo_PBS_View
struct TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8;
// ToonyColorsPro.Demo.TCP2_Demo_View
struct TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience
struct Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle
struct ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings
struct LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F;
// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings
struct MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF;
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting
struct SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46;
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings
struct CharacterSettings_tB498BC3778242208665870BD5C8F925903860992;

IL2CPP_EXTERN_C RuntimeClass* AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00591519A649DB10EE10C734428876B5B61C2590;
IL2CPP_EXTERN_C String_t* _stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56;
IL2CPP_EXTERN_C String_t* _stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4;
IL2CPP_EXTERN_C String_t* _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D;
IL2CPP_EXTERN_C String_t* _stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7;
IL2CPP_EXTERN_C String_t* _stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4;
IL2CPP_EXTERN_C String_t* _stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
IL2CPP_EXTERN_C String_t* _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433;
IL2CPP_EXTERN_C String_t* _stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564;
IL2CPP_EXTERN_C String_t* _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8;
IL2CPP_EXTERN_C String_t* _stringLiteral392A6984A677064B849A1004944E4A648C7301C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531;
IL2CPP_EXTERN_C String_t* _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
IL2CPP_EXTERN_C String_t* _stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6;
IL2CPP_EXTERN_C String_t* _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
IL2CPP_EXTERN_C String_t* _stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7;
IL2CPP_EXTERN_C String_t* _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B;
IL2CPP_EXTERN_C String_t* _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
IL2CPP_EXTERN_C String_t* _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
IL2CPP_EXTERN_C String_t* _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B;
IL2CPP_EXTERN_C String_t* _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D;
IL2CPP_EXTERN_C String_t* _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC1BD2D2846995B2539A796563845CF33838719;
IL2CPP_EXTERN_C String_t* _stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782;
IL2CPP_EXTERN_C String_t* _stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B;
IL2CPP_EXTERN_C String_t* _stringLiteralB491229C21663462214F90086EA80637221C891D;
IL2CPP_EXTERN_C String_t* _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39;
IL2CPP_EXTERN_C String_t* _stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68;
IL2CPP_EXTERN_C String_t* _stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22;
IL2CPP_EXTERN_C String_t* _stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17_mE4BA16E2C507CC05B87F1189ED077D6E4C208493_RuntimeMethod_var;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400;
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489;
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
struct AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F;
struct ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9;
struct SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033;
struct CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE519827CDD74F1D1379BFC12312D0BFB44D62A45 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
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

// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience
struct Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30  : public RuntimeObject
{
public:
	// System.String ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::name
	String_t* ___name_0;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::activate
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___activate_1;
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::skybox
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___skybox_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_activate_1() { return static_cast<int32_t>(offsetof(Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30, ___activate_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_activate_1() const { return ___activate_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_activate_1() { return &___activate_1; }
	inline void set_activate_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___activate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activate_1), (void*)value);
	}

	inline static int32_t get_offset_of_skybox_2() { return static_cast<int32_t>(offsetof(Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30, ___skybox_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_skybox_2() const { return ___skybox_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_skybox_2() { return &___skybox_2; }
	inline void set_skybox_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___skybox_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skybox_2), (void*)value);
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle
struct ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD  : public RuntimeObject
{
public:
	// System.String ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::name
	String_t* ___name_0;
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[] ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::settings
	CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* ___settings_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD, ___settings_1)); }
	inline CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* get_settings_1() const { return ___settings_1; }
	inline CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_1), (void*)value);
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings
struct LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F  : public RuntimeObject
{
public:
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::light
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___light_0;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::gammaIntensity
	float ___gammaIntensity_1;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::linearIntensity
	float ___linearIntensity_2;

public:
	inline static int32_t get_offset_of_light_0() { return static_cast<int32_t>(offsetof(LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F, ___light_0)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_light_0() const { return ___light_0; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_light_0() { return &___light_0; }
	inline void set_light_0(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___light_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___light_0), (void*)value);
	}

	inline static int32_t get_offset_of_gammaIntensity_1() { return static_cast<int32_t>(offsetof(LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F, ___gammaIntensity_1)); }
	inline float get_gammaIntensity_1() const { return ___gammaIntensity_1; }
	inline float* get_address_of_gammaIntensity_1() { return &___gammaIntensity_1; }
	inline void set_gammaIntensity_1(float value)
	{
		___gammaIntensity_1 = value;
	}

	inline static int32_t get_offset_of_linearIntensity_2() { return static_cast<int32_t>(offsetof(LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F, ___linearIntensity_2)); }
	inline float get_linearIntensity_2() const { return ___linearIntensity_2; }
	inline float* get_address_of_linearIntensity_2() { return &___linearIntensity_2; }
	inline void set_linearIntensity_2(float value)
	{
		___linearIntensity_2 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings
struct CharacterSettings_tB498BC3778242208665870BD5C8F925903860992  : public RuntimeObject
{
public:
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_0;
	// UnityEngine.Renderer[] ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::renderers
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* ___renderers_1;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(CharacterSettings_tB498BC3778242208665870BD5C8F925903860992, ___material_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_0() const { return ___material_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_0), (void*)value);
	}

	inline static int32_t get_offset_of_renderers_1() { return static_cast<int32_t>(offsetof(CharacterSettings_tB498BC3778242208665870BD5C8F925903860992, ___renderers_1)); }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* get_renderers_1() const { return ___renderers_1; }
	inline RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7** get_address_of_renderers_1() { return &___renderers_1; }
	inline void set_renderers_1(RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* value)
	{
		___renderers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderers_1), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.ColorSpace
struct ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAD694F94295170CB332A0F99BBE086F4AC8C15BA, ___value___2)); }
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


// UnityEngine.LightShadows
struct LightShadows_t8AC632778179F556C3A091B93FC24F92375DCD67 
{
public:
	// System.Int32 UnityEngine.LightShadows::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightShadows_t8AC632778179F556C3A091B93FC24F92375DCD67, ___value___2)); }
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

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings
struct MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF  : public RuntimeObject
{
public:
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_0;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::gammaColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___gammaColor_1;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::linearColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___linearColor_2;

public:
	inline static int32_t get_offset_of_material_0() { return static_cast<int32_t>(offsetof(MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF, ___material_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_0() const { return ___material_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_0() { return &___material_0; }
	inline void set_material_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_0), (void*)value);
	}

	inline static int32_t get_offset_of_gammaColor_1() { return static_cast<int32_t>(offsetof(MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF, ___gammaColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_gammaColor_1() const { return ___gammaColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_gammaColor_1() { return &___gammaColor_1; }
	inline void set_gammaColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___gammaColor_1 = value;
	}

	inline static int32_t get_offset_of_linearColor_2() { return static_cast<int32_t>(offsetof(MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF, ___linearColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_linearColor_2() const { return ___linearColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_linearColor_2() { return &___linearColor_2; }
	inline void set_linearColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___linearColor_2 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting
struct SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46  : public RuntimeObject
{
public:
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::SkyMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___SkyMaterial_0;
	// UnityEngine.Color ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::lightColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lightColor_1;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::DirLightEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___DirLightEuler_2;

public:
	inline static int32_t get_offset_of_SkyMaterial_0() { return static_cast<int32_t>(offsetof(SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46, ___SkyMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_SkyMaterial_0() const { return ___SkyMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_SkyMaterial_0() { return &___SkyMaterial_0; }
	inline void set_SkyMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___SkyMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkyMaterial_0), (void*)value);
	}

	inline static int32_t get_offset_of_lightColor_1() { return static_cast<int32_t>(offsetof(SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46, ___lightColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_lightColor_1() const { return ___lightColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_lightColor_1() { return &___lightColor_1; }
	inline void set_lightColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___lightColor_1 = value;
	}

	inline static int32_t get_offset_of_DirLightEuler_2() { return static_cast<int32_t>(offsetof(SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46, ___DirLightEuler_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_DirLightEuler_2() const { return ___DirLightEuler_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_DirLightEuler_2() { return &___DirLightEuler_2; }
	inline void set_DirLightEuler_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___DirLightEuler_2 = value;
	}
};


// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD  : public TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Cubemap
struct Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
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


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// ToonyColorsPro.Demo.TCP2_Demo
struct TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material[] ToonyColorsPro.Demo.TCP2_Demo::AffectedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___AffectedMaterials_4;
	// UnityEngine.Texture2D[] ToonyColorsPro.Demo.TCP2_Demo::RampTextures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___RampTextures_5;
	// UnityEngine.GUISkin ToonyColorsPro.Demo.TCP2_Demo::GuiSkin
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___GuiSkin_6;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo::DirLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___DirLight_7;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo::Robot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Robot_8;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo::Ethan
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ethan_9;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mUnityShader
	bool ___mUnityShader_10;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderSpecular
	bool ___mShaderSpecular_11;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderBump
	bool ___mShaderBump_12;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderReflection
	bool ___mShaderReflection_13;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderRim
	bool ___mShaderRim_14;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderRimOutline
	bool ___mShaderRimOutline_15;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mShaderOutline
	bool ___mShaderOutline_16;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRimMin
	float ___mRimMin_17;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRimMax
	float ___mRimMax_18;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mRampTextureFlag
	bool ___mRampTextureFlag_19;
	// UnityEngine.Texture2D ToonyColorsPro.Demo.TCP2_Demo::mRampTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mRampTexture_20;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mRampSmoothing
	float ___mRampSmoothing_21;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mLightRotationX
	float ___mLightRotationX_22;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo::mLightRotationY
	float ___mLightRotationY_23;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mViewRobot
	bool ___mViewRobot_24;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo::mRobotOutlineNormals
	bool ___mRobotOutlineNormals_25;
	// ToonyColorsPro.Demo.TCP2_Demo_View ToonyColorsPro.Demo.TCP2_Demo::DemoView
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * ___DemoView_26;

public:
	inline static int32_t get_offset_of_AffectedMaterials_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___AffectedMaterials_4)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_AffectedMaterials_4() const { return ___AffectedMaterials_4; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_AffectedMaterials_4() { return &___AffectedMaterials_4; }
	inline void set_AffectedMaterials_4(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___AffectedMaterials_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AffectedMaterials_4), (void*)value);
	}

	inline static int32_t get_offset_of_RampTextures_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___RampTextures_5)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_RampTextures_5() const { return ___RampTextures_5; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_RampTextures_5() { return &___RampTextures_5; }
	inline void set_RampTextures_5(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___RampTextures_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampTextures_5), (void*)value);
	}

	inline static int32_t get_offset_of_GuiSkin_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___GuiSkin_6)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_GuiSkin_6() const { return ___GuiSkin_6; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_GuiSkin_6() { return &___GuiSkin_6; }
	inline void set_GuiSkin_6(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___GuiSkin_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuiSkin_6), (void*)value);
	}

	inline static int32_t get_offset_of_DirLight_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___DirLight_7)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_DirLight_7() const { return ___DirLight_7; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_DirLight_7() { return &___DirLight_7; }
	inline void set_DirLight_7(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___DirLight_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirLight_7), (void*)value);
	}

	inline static int32_t get_offset_of_Robot_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___Robot_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Robot_8() const { return ___Robot_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Robot_8() { return &___Robot_8; }
	inline void set_Robot_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Robot_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Robot_8), (void*)value);
	}

	inline static int32_t get_offset_of_Ethan_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___Ethan_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ethan_9() const { return ___Ethan_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ethan_9() { return &___Ethan_9; }
	inline void set_Ethan_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ethan_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ethan_9), (void*)value);
	}

	inline static int32_t get_offset_of_mUnityShader_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mUnityShader_10)); }
	inline bool get_mUnityShader_10() const { return ___mUnityShader_10; }
	inline bool* get_address_of_mUnityShader_10() { return &___mUnityShader_10; }
	inline void set_mUnityShader_10(bool value)
	{
		___mUnityShader_10 = value;
	}

	inline static int32_t get_offset_of_mShaderSpecular_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderSpecular_11)); }
	inline bool get_mShaderSpecular_11() const { return ___mShaderSpecular_11; }
	inline bool* get_address_of_mShaderSpecular_11() { return &___mShaderSpecular_11; }
	inline void set_mShaderSpecular_11(bool value)
	{
		___mShaderSpecular_11 = value;
	}

	inline static int32_t get_offset_of_mShaderBump_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderBump_12)); }
	inline bool get_mShaderBump_12() const { return ___mShaderBump_12; }
	inline bool* get_address_of_mShaderBump_12() { return &___mShaderBump_12; }
	inline void set_mShaderBump_12(bool value)
	{
		___mShaderBump_12 = value;
	}

	inline static int32_t get_offset_of_mShaderReflection_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderReflection_13)); }
	inline bool get_mShaderReflection_13() const { return ___mShaderReflection_13; }
	inline bool* get_address_of_mShaderReflection_13() { return &___mShaderReflection_13; }
	inline void set_mShaderReflection_13(bool value)
	{
		___mShaderReflection_13 = value;
	}

	inline static int32_t get_offset_of_mShaderRim_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderRim_14)); }
	inline bool get_mShaderRim_14() const { return ___mShaderRim_14; }
	inline bool* get_address_of_mShaderRim_14() { return &___mShaderRim_14; }
	inline void set_mShaderRim_14(bool value)
	{
		___mShaderRim_14 = value;
	}

	inline static int32_t get_offset_of_mShaderRimOutline_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderRimOutline_15)); }
	inline bool get_mShaderRimOutline_15() const { return ___mShaderRimOutline_15; }
	inline bool* get_address_of_mShaderRimOutline_15() { return &___mShaderRimOutline_15; }
	inline void set_mShaderRimOutline_15(bool value)
	{
		___mShaderRimOutline_15 = value;
	}

	inline static int32_t get_offset_of_mShaderOutline_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mShaderOutline_16)); }
	inline bool get_mShaderOutline_16() const { return ___mShaderOutline_16; }
	inline bool* get_address_of_mShaderOutline_16() { return &___mShaderOutline_16; }
	inline void set_mShaderOutline_16(bool value)
	{
		___mShaderOutline_16 = value;
	}

	inline static int32_t get_offset_of_mRimMin_17() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRimMin_17)); }
	inline float get_mRimMin_17() const { return ___mRimMin_17; }
	inline float* get_address_of_mRimMin_17() { return &___mRimMin_17; }
	inline void set_mRimMin_17(float value)
	{
		___mRimMin_17 = value;
	}

	inline static int32_t get_offset_of_mRimMax_18() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRimMax_18)); }
	inline float get_mRimMax_18() const { return ___mRimMax_18; }
	inline float* get_address_of_mRimMax_18() { return &___mRimMax_18; }
	inline void set_mRimMax_18(float value)
	{
		___mRimMax_18 = value;
	}

	inline static int32_t get_offset_of_mRampTextureFlag_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRampTextureFlag_19)); }
	inline bool get_mRampTextureFlag_19() const { return ___mRampTextureFlag_19; }
	inline bool* get_address_of_mRampTextureFlag_19() { return &___mRampTextureFlag_19; }
	inline void set_mRampTextureFlag_19(bool value)
	{
		___mRampTextureFlag_19 = value;
	}

	inline static int32_t get_offset_of_mRampTexture_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRampTexture_20)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mRampTexture_20() const { return ___mRampTexture_20; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mRampTexture_20() { return &___mRampTexture_20; }
	inline void set_mRampTexture_20(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mRampTexture_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRampTexture_20), (void*)value);
	}

	inline static int32_t get_offset_of_mRampSmoothing_21() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRampSmoothing_21)); }
	inline float get_mRampSmoothing_21() const { return ___mRampSmoothing_21; }
	inline float* get_address_of_mRampSmoothing_21() { return &___mRampSmoothing_21; }
	inline void set_mRampSmoothing_21(float value)
	{
		___mRampSmoothing_21 = value;
	}

	inline static int32_t get_offset_of_mLightRotationX_22() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mLightRotationX_22)); }
	inline float get_mLightRotationX_22() const { return ___mLightRotationX_22; }
	inline float* get_address_of_mLightRotationX_22() { return &___mLightRotationX_22; }
	inline void set_mLightRotationX_22(float value)
	{
		___mLightRotationX_22 = value;
	}

	inline static int32_t get_offset_of_mLightRotationY_23() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mLightRotationY_23)); }
	inline float get_mLightRotationY_23() const { return ___mLightRotationY_23; }
	inline float* get_address_of_mLightRotationY_23() { return &___mLightRotationY_23; }
	inline void set_mLightRotationY_23(float value)
	{
		___mLightRotationY_23 = value;
	}

	inline static int32_t get_offset_of_mViewRobot_24() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mViewRobot_24)); }
	inline bool get_mViewRobot_24() const { return ___mViewRobot_24; }
	inline bool* get_address_of_mViewRobot_24() { return &___mViewRobot_24; }
	inline void set_mViewRobot_24(bool value)
	{
		___mViewRobot_24 = value;
	}

	inline static int32_t get_offset_of_mRobotOutlineNormals_25() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___mRobotOutlineNormals_25)); }
	inline bool get_mRobotOutlineNormals_25() const { return ___mRobotOutlineNormals_25; }
	inline bool* get_address_of_mRobotOutlineNormals_25() { return &___mRobotOutlineNormals_25; }
	inline void set_mRobotOutlineNormals_25(bool value)
	{
		___mRobotOutlineNormals_25 = value;
	}

	inline static int32_t get_offset_of_DemoView_26() { return static_cast<int32_t>(offsetof(TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142, ___DemoView_26)); }
	inline TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * get_DemoView_26() const { return ___DemoView_26; }
	inline TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 ** get_address_of_DemoView_26() { return &___DemoView_26; }
	inline void set_DemoView_26(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * value)
	{
		___DemoView_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DemoView_26), (void*)value);
	}
};


// TCP2_Demo_AutoRotate
struct TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 TCP2_Demo_AutoRotate::axis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis_4;
	// System.Single TCP2_Demo_AutoRotate::Speed
	float ___Speed_5;

public:
	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE, ___axis_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_axis_4() const { return ___axis_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___axis_4 = value;
	}

	inline static int32_t get_offset_of_Speed_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE, ___Speed_5)); }
	inline float get_Speed_5() const { return ___Speed_5; }
	inline float* get_address_of_Speed_5() { return &___Speed_5; }
	inline void set_Speed_5(float value)
	{
		___Speed_5 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_Camera
struct TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_Camera::Pivot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Pivot_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::OrbitStrg
	float ___OrbitStrg_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::OrbitClamp
	float ___OrbitClamp_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::PanStrgMin
	float ___PanStrgMin_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::PanStrgMax
	float ___PanStrgMax_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomStrg
	float ___ZoomStrg_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomClamp
	float ___ZoomClamp_10;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomDistMin
	float ___ZoomDistMin_11;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::ZoomDistMax
	float ___ZoomDistMax_12;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::Decceleration
	float ___Decceleration_13;
	// UnityEngine.RectTransform ToonyColorsPro.Demo.TCP2_Demo_Camera::ignoreMouseRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___ignoreMouseRect_14;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mouseDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mouseDelta_15;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::orbitAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___orbitAcceleration_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::panAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___panAcceleration_17;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::moveAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAcceleration_18;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::zoomAcceleration
	float ___zoomAcceleration_19;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Camera::zoomDistance
	float ___zoomDistance_20;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetCamPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamPos_23;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetPivotPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetPivotPos_24;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetCamRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamRot_25;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_Camera::mResetPivotRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetPivotRot_26;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::leftMouseHeld
	bool ___leftMouseHeld_27;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::rightMouseHeld
	bool ___rightMouseHeld_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Camera::middleMouseHeld
	bool ___middleMouseHeld_29;

public:
	inline static int32_t get_offset_of_Pivot_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___Pivot_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Pivot_4() const { return ___Pivot_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Pivot_4() { return &___Pivot_4; }
	inline void set_Pivot_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Pivot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pivot_4), (void*)value);
	}

	inline static int32_t get_offset_of_OrbitStrg_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___OrbitStrg_5)); }
	inline float get_OrbitStrg_5() const { return ___OrbitStrg_5; }
	inline float* get_address_of_OrbitStrg_5() { return &___OrbitStrg_5; }
	inline void set_OrbitStrg_5(float value)
	{
		___OrbitStrg_5 = value;
	}

	inline static int32_t get_offset_of_OrbitClamp_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___OrbitClamp_6)); }
	inline float get_OrbitClamp_6() const { return ___OrbitClamp_6; }
	inline float* get_address_of_OrbitClamp_6() { return &___OrbitClamp_6; }
	inline void set_OrbitClamp_6(float value)
	{
		___OrbitClamp_6 = value;
	}

	inline static int32_t get_offset_of_PanStrgMin_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___PanStrgMin_7)); }
	inline float get_PanStrgMin_7() const { return ___PanStrgMin_7; }
	inline float* get_address_of_PanStrgMin_7() { return &___PanStrgMin_7; }
	inline void set_PanStrgMin_7(float value)
	{
		___PanStrgMin_7 = value;
	}

	inline static int32_t get_offset_of_PanStrgMax_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___PanStrgMax_8)); }
	inline float get_PanStrgMax_8() const { return ___PanStrgMax_8; }
	inline float* get_address_of_PanStrgMax_8() { return &___PanStrgMax_8; }
	inline void set_PanStrgMax_8(float value)
	{
		___PanStrgMax_8 = value;
	}

	inline static int32_t get_offset_of_ZoomStrg_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___ZoomStrg_9)); }
	inline float get_ZoomStrg_9() const { return ___ZoomStrg_9; }
	inline float* get_address_of_ZoomStrg_9() { return &___ZoomStrg_9; }
	inline void set_ZoomStrg_9(float value)
	{
		___ZoomStrg_9 = value;
	}

	inline static int32_t get_offset_of_ZoomClamp_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___ZoomClamp_10)); }
	inline float get_ZoomClamp_10() const { return ___ZoomClamp_10; }
	inline float* get_address_of_ZoomClamp_10() { return &___ZoomClamp_10; }
	inline void set_ZoomClamp_10(float value)
	{
		___ZoomClamp_10 = value;
	}

	inline static int32_t get_offset_of_ZoomDistMin_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___ZoomDistMin_11)); }
	inline float get_ZoomDistMin_11() const { return ___ZoomDistMin_11; }
	inline float* get_address_of_ZoomDistMin_11() { return &___ZoomDistMin_11; }
	inline void set_ZoomDistMin_11(float value)
	{
		___ZoomDistMin_11 = value;
	}

	inline static int32_t get_offset_of_ZoomDistMax_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___ZoomDistMax_12)); }
	inline float get_ZoomDistMax_12() const { return ___ZoomDistMax_12; }
	inline float* get_address_of_ZoomDistMax_12() { return &___ZoomDistMax_12; }
	inline void set_ZoomDistMax_12(float value)
	{
		___ZoomDistMax_12 = value;
	}

	inline static int32_t get_offset_of_Decceleration_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___Decceleration_13)); }
	inline float get_Decceleration_13() const { return ___Decceleration_13; }
	inline float* get_address_of_Decceleration_13() { return &___Decceleration_13; }
	inline void set_Decceleration_13(float value)
	{
		___Decceleration_13 = value;
	}

	inline static int32_t get_offset_of_ignoreMouseRect_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___ignoreMouseRect_14)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_ignoreMouseRect_14() const { return ___ignoreMouseRect_14; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_ignoreMouseRect_14() { return &___ignoreMouseRect_14; }
	inline void set_ignoreMouseRect_14(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___ignoreMouseRect_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignoreMouseRect_14), (void*)value);
	}

	inline static int32_t get_offset_of_mouseDelta_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___mouseDelta_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mouseDelta_15() const { return ___mouseDelta_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mouseDelta_15() { return &___mouseDelta_15; }
	inline void set_mouseDelta_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mouseDelta_15 = value;
	}

	inline static int32_t get_offset_of_orbitAcceleration_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___orbitAcceleration_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_orbitAcceleration_16() const { return ___orbitAcceleration_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_orbitAcceleration_16() { return &___orbitAcceleration_16; }
	inline void set_orbitAcceleration_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___orbitAcceleration_16 = value;
	}

	inline static int32_t get_offset_of_panAcceleration_17() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___panAcceleration_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_panAcceleration_17() const { return ___panAcceleration_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_panAcceleration_17() { return &___panAcceleration_17; }
	inline void set_panAcceleration_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___panAcceleration_17 = value;
	}

	inline static int32_t get_offset_of_moveAcceleration_18() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___moveAcceleration_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAcceleration_18() const { return ___moveAcceleration_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAcceleration_18() { return &___moveAcceleration_18; }
	inline void set_moveAcceleration_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAcceleration_18 = value;
	}

	inline static int32_t get_offset_of_zoomAcceleration_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___zoomAcceleration_19)); }
	inline float get_zoomAcceleration_19() const { return ___zoomAcceleration_19; }
	inline float* get_address_of_zoomAcceleration_19() { return &___zoomAcceleration_19; }
	inline void set_zoomAcceleration_19(float value)
	{
		___zoomAcceleration_19 = value;
	}

	inline static int32_t get_offset_of_zoomDistance_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___zoomDistance_20)); }
	inline float get_zoomDistance_20() const { return ___zoomDistance_20; }
	inline float* get_address_of_zoomDistance_20() { return &___zoomDistance_20; }
	inline void set_zoomDistance_20(float value)
	{
		___zoomDistance_20 = value;
	}

	inline static int32_t get_offset_of_mResetCamPos_23() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___mResetCamPos_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamPos_23() const { return ___mResetCamPos_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamPos_23() { return &___mResetCamPos_23; }
	inline void set_mResetCamPos_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamPos_23 = value;
	}

	inline static int32_t get_offset_of_mResetPivotPos_24() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___mResetPivotPos_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetPivotPos_24() const { return ___mResetPivotPos_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetPivotPos_24() { return &___mResetPivotPos_24; }
	inline void set_mResetPivotPos_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetPivotPos_24 = value;
	}

	inline static int32_t get_offset_of_mResetCamRot_25() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___mResetCamRot_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamRot_25() const { return ___mResetCamRot_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamRot_25() { return &___mResetCamRot_25; }
	inline void set_mResetCamRot_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamRot_25 = value;
	}

	inline static int32_t get_offset_of_mResetPivotRot_26() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___mResetPivotRot_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetPivotRot_26() const { return ___mResetPivotRot_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetPivotRot_26() { return &___mResetPivotRot_26; }
	inline void set_mResetPivotRot_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetPivotRot_26 = value;
	}

	inline static int32_t get_offset_of_leftMouseHeld_27() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___leftMouseHeld_27)); }
	inline bool get_leftMouseHeld_27() const { return ___leftMouseHeld_27; }
	inline bool* get_address_of_leftMouseHeld_27() { return &___leftMouseHeld_27; }
	inline void set_leftMouseHeld_27(bool value)
	{
		___leftMouseHeld_27 = value;
	}

	inline static int32_t get_offset_of_rightMouseHeld_28() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___rightMouseHeld_28)); }
	inline bool get_rightMouseHeld_28() const { return ___rightMouseHeld_28; }
	inline bool* get_address_of_rightMouseHeld_28() { return &___rightMouseHeld_28; }
	inline void set_rightMouseHeld_28(bool value)
	{
		___rightMouseHeld_28 = value;
	}

	inline static int32_t get_offset_of_middleMouseHeld_29() { return static_cast<int32_t>(offsetof(TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB, ___middleMouseHeld_29)); }
	inline bool get_middleMouseHeld_29() const { return ___middleMouseHeld_29; }
	inline bool* get_address_of_middleMouseHeld_29() { return &___middleMouseHeld_29; }
	inline void set_middleMouseHeld_29(bool value)
	{
		___middleMouseHeld_29 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_Cat
struct TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[] ToonyColorsPro.Demo.TCP2_Demo_Cat::ambiences
	AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* ___ambiences_4;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::amb
	int32_t ___amb_5;
	// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[] ToonyColorsPro.Demo.TCP2_Demo_Cat::styles
	ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* ___styles_6;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::style
	int32_t ___style_7;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::shadedGroup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shadedGroup_8;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::flatGroup
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___flatGroup_9;
	// UnityEngine.Animation[] ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnimation
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* ___catAnimation_10;
	// UnityEngine.Animation[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanAnimation
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* ___unityChanAnimation_11;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat::cats
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___cats_12;
	// UnityEngine.GameObject[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChans
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___unityChans_13;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanCopyright
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___unityChanCopyright_14;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_Cat::catDirLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___catDirLight_15;
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanDirLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___unityChanDirLight_16;
	// UnityEngine.AnimationClip[] ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnimations
	AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* ___catAnimations_17;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::catAnim
	int32_t ___catAnim_18;
	// UnityEngine.AnimationClip[] ToonyColorsPro.Demo.TCP2_Demo_Cat::unityChanAnimations
	AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* ___unityChanAnimations_19;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_Cat::uchanAnim
	int32_t ___uchanAnim_20;
	// UnityEngine.Light[] ToonyColorsPro.Demo.TCP2_Demo_Cat::dirLights
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___dirLights_21;
	// UnityEngine.Light[] ToonyColorsPro.Demo.TCP2_Demo_Cat::otherLights
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___otherLights_22;
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_Cat::rotatingPointLights
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___rotatingPointLights_23;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::<rotateLights>k__BackingField
	bool ___U3CrotateLightsU3Ek__BackingField_24;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::<rotatePointLights>k__BackingField
	bool ___U3CrotatePointLightsU3Ek__BackingField_25;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::ambiencesButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___ambiencesButtons_26;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::stylesButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___stylesButtons_27;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::characterButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___characterButtons_28;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::textureButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___textureButtons_29;
	// UnityEngine.UI.Button[] ToonyColorsPro.Demo.TCP2_Demo_Cat::animationButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___animationButtons_30;
	// UnityEngine.Canvas ToonyColorsPro.Demo.TCP2_Demo_Cat::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_31;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::animationPaused
	bool ___animationPaused_32;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_Cat::playingSpeed
	float ___playingSpeed_33;

public:
	inline static int32_t get_offset_of_ambiences_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___ambiences_4)); }
	inline AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* get_ambiences_4() const { return ___ambiences_4; }
	inline AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F** get_address_of_ambiences_4() { return &___ambiences_4; }
	inline void set_ambiences_4(AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* value)
	{
		___ambiences_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ambiences_4), (void*)value);
	}

	inline static int32_t get_offset_of_amb_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___amb_5)); }
	inline int32_t get_amb_5() const { return ___amb_5; }
	inline int32_t* get_address_of_amb_5() { return &___amb_5; }
	inline void set_amb_5(int32_t value)
	{
		___amb_5 = value;
	}

	inline static int32_t get_offset_of_styles_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___styles_6)); }
	inline ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* get_styles_6() const { return ___styles_6; }
	inline ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9** get_address_of_styles_6() { return &___styles_6; }
	inline void set_styles_6(ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* value)
	{
		___styles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___styles_6), (void*)value);
	}

	inline static int32_t get_offset_of_style_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___style_7)); }
	inline int32_t get_style_7() const { return ___style_7; }
	inline int32_t* get_address_of_style_7() { return &___style_7; }
	inline void set_style_7(int32_t value)
	{
		___style_7 = value;
	}

	inline static int32_t get_offset_of_shadedGroup_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___shadedGroup_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shadedGroup_8() const { return ___shadedGroup_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shadedGroup_8() { return &___shadedGroup_8; }
	inline void set_shadedGroup_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shadedGroup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shadedGroup_8), (void*)value);
	}

	inline static int32_t get_offset_of_flatGroup_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___flatGroup_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_flatGroup_9() const { return ___flatGroup_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_flatGroup_9() { return &___flatGroup_9; }
	inline void set_flatGroup_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___flatGroup_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flatGroup_9), (void*)value);
	}

	inline static int32_t get_offset_of_catAnimation_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___catAnimation_10)); }
	inline AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* get_catAnimation_10() const { return ___catAnimation_10; }
	inline AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400** get_address_of_catAnimation_10() { return &___catAnimation_10; }
	inline void set_catAnimation_10(AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* value)
	{
		___catAnimation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catAnimation_10), (void*)value);
	}

	inline static int32_t get_offset_of_unityChanAnimation_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___unityChanAnimation_11)); }
	inline AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* get_unityChanAnimation_11() const { return ___unityChanAnimation_11; }
	inline AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400** get_address_of_unityChanAnimation_11() { return &___unityChanAnimation_11; }
	inline void set_unityChanAnimation_11(AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* value)
	{
		___unityChanAnimation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChanAnimation_11), (void*)value);
	}

	inline static int32_t get_offset_of_cats_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___cats_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_cats_12() const { return ___cats_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_cats_12() { return &___cats_12; }
	inline void set_cats_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___cats_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cats_12), (void*)value);
	}

	inline static int32_t get_offset_of_unityChans_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___unityChans_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_unityChans_13() const { return ___unityChans_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_unityChans_13() { return &___unityChans_13; }
	inline void set_unityChans_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___unityChans_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChans_13), (void*)value);
	}

	inline static int32_t get_offset_of_unityChanCopyright_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___unityChanCopyright_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_unityChanCopyright_14() const { return ___unityChanCopyright_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_unityChanCopyright_14() { return &___unityChanCopyright_14; }
	inline void set_unityChanCopyright_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___unityChanCopyright_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChanCopyright_14), (void*)value);
	}

	inline static int32_t get_offset_of_catDirLight_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___catDirLight_15)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_catDirLight_15() const { return ___catDirLight_15; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_catDirLight_15() { return &___catDirLight_15; }
	inline void set_catDirLight_15(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___catDirLight_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catDirLight_15), (void*)value);
	}

	inline static int32_t get_offset_of_unityChanDirLight_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___unityChanDirLight_16)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_unityChanDirLight_16() const { return ___unityChanDirLight_16; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_unityChanDirLight_16() { return &___unityChanDirLight_16; }
	inline void set_unityChanDirLight_16(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___unityChanDirLight_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChanDirLight_16), (void*)value);
	}

	inline static int32_t get_offset_of_catAnimations_17() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___catAnimations_17)); }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* get_catAnimations_17() const { return ___catAnimations_17; }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489** get_address_of_catAnimations_17() { return &___catAnimations_17; }
	inline void set_catAnimations_17(AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* value)
	{
		___catAnimations_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___catAnimations_17), (void*)value);
	}

	inline static int32_t get_offset_of_catAnim_18() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___catAnim_18)); }
	inline int32_t get_catAnim_18() const { return ___catAnim_18; }
	inline int32_t* get_address_of_catAnim_18() { return &___catAnim_18; }
	inline void set_catAnim_18(int32_t value)
	{
		___catAnim_18 = value;
	}

	inline static int32_t get_offset_of_unityChanAnimations_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___unityChanAnimations_19)); }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* get_unityChanAnimations_19() const { return ___unityChanAnimations_19; }
	inline AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489** get_address_of_unityChanAnimations_19() { return &___unityChanAnimations_19; }
	inline void set_unityChanAnimations_19(AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* value)
	{
		___unityChanAnimations_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityChanAnimations_19), (void*)value);
	}

	inline static int32_t get_offset_of_uchanAnim_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___uchanAnim_20)); }
	inline int32_t get_uchanAnim_20() const { return ___uchanAnim_20; }
	inline int32_t* get_address_of_uchanAnim_20() { return &___uchanAnim_20; }
	inline void set_uchanAnim_20(int32_t value)
	{
		___uchanAnim_20 = value;
	}

	inline static int32_t get_offset_of_dirLights_21() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___dirLights_21)); }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* get_dirLights_21() const { return ___dirLights_21; }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9** get_address_of_dirLights_21() { return &___dirLights_21; }
	inline void set_dirLights_21(LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* value)
	{
		___dirLights_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirLights_21), (void*)value);
	}

	inline static int32_t get_offset_of_otherLights_22() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___otherLights_22)); }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* get_otherLights_22() const { return ___otherLights_22; }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9** get_address_of_otherLights_22() { return &___otherLights_22; }
	inline void set_otherLights_22(LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* value)
	{
		___otherLights_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___otherLights_22), (void*)value);
	}

	inline static int32_t get_offset_of_rotatingPointLights_23() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___rotatingPointLights_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_rotatingPointLights_23() const { return ___rotatingPointLights_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_rotatingPointLights_23() { return &___rotatingPointLights_23; }
	inline void set_rotatingPointLights_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___rotatingPointLights_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotatingPointLights_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrotateLightsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___U3CrotateLightsU3Ek__BackingField_24)); }
	inline bool get_U3CrotateLightsU3Ek__BackingField_24() const { return ___U3CrotateLightsU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CrotateLightsU3Ek__BackingField_24() { return &___U3CrotateLightsU3Ek__BackingField_24; }
	inline void set_U3CrotateLightsU3Ek__BackingField_24(bool value)
	{
		___U3CrotateLightsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CrotatePointLightsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___U3CrotatePointLightsU3Ek__BackingField_25)); }
	inline bool get_U3CrotatePointLightsU3Ek__BackingField_25() const { return ___U3CrotatePointLightsU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CrotatePointLightsU3Ek__BackingField_25() { return &___U3CrotatePointLightsU3Ek__BackingField_25; }
	inline void set_U3CrotatePointLightsU3Ek__BackingField_25(bool value)
	{
		___U3CrotatePointLightsU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_ambiencesButtons_26() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___ambiencesButtons_26)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_ambiencesButtons_26() const { return ___ambiencesButtons_26; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_ambiencesButtons_26() { return &___ambiencesButtons_26; }
	inline void set_ambiencesButtons_26(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___ambiencesButtons_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ambiencesButtons_26), (void*)value);
	}

	inline static int32_t get_offset_of_stylesButtons_27() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___stylesButtons_27)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_stylesButtons_27() const { return ___stylesButtons_27; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_stylesButtons_27() { return &___stylesButtons_27; }
	inline void set_stylesButtons_27(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___stylesButtons_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stylesButtons_27), (void*)value);
	}

	inline static int32_t get_offset_of_characterButtons_28() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___characterButtons_28)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_characterButtons_28() const { return ___characterButtons_28; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_characterButtons_28() { return &___characterButtons_28; }
	inline void set_characterButtons_28(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___characterButtons_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterButtons_28), (void*)value);
	}

	inline static int32_t get_offset_of_textureButtons_29() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___textureButtons_29)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_textureButtons_29() const { return ___textureButtons_29; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_textureButtons_29() { return &___textureButtons_29; }
	inline void set_textureButtons_29(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___textureButtons_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textureButtons_29), (void*)value);
	}

	inline static int32_t get_offset_of_animationButtons_30() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___animationButtons_30)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_animationButtons_30() const { return ___animationButtons_30; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_animationButtons_30() { return &___animationButtons_30; }
	inline void set_animationButtons_30(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___animationButtons_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationButtons_30), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_31() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___canvas_31)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_31() const { return ___canvas_31; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_31() { return &___canvas_31; }
	inline void set_canvas_31(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_31), (void*)value);
	}

	inline static int32_t get_offset_of_animationPaused_32() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___animationPaused_32)); }
	inline bool get_animationPaused_32() const { return ___animationPaused_32; }
	inline bool* get_address_of_animationPaused_32() { return &___animationPaused_32; }
	inline void set_animationPaused_32(bool value)
	{
		___animationPaused_32 = value;
	}

	inline static int32_t get_offset_of_playingSpeed_33() { return static_cast<int32_t>(offsetof(TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D, ___playingSpeed_33)); }
	inline float get_playingSpeed_33() const { return ___playingSpeed_33; }
	inline float* get_address_of_playingSpeed_33() { return &___playingSpeed_33; }
	inline void set_playingSpeed_33(float value)
	{
		___playingSpeed_33 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear
struct TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings[] ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::lights
	LightSettingsU5BU5D_t54FF583E9D4004DE60BAE699F64368AA3D8047B4* ___lights_4;
	// ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings[] ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::materials
	MaterialSettingsU5BU5D_t882E1B340733B80FDDDBEA58C3D7140600AF2A01* ___materials_5;
	// UnityEngine.ColorSpace ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::lastColorSpace
	int32_t ___lastColorSpace_6;

public:
	inline static int32_t get_offset_of_lights_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E, ___lights_4)); }
	inline LightSettingsU5BU5D_t54FF583E9D4004DE60BAE699F64368AA3D8047B4* get_lights_4() const { return ___lights_4; }
	inline LightSettingsU5BU5D_t54FF583E9D4004DE60BAE699F64368AA3D8047B4** get_address_of_lights_4() { return &___lights_4; }
	inline void set_lights_4(LightSettingsU5BU5D_t54FF583E9D4004DE60BAE699F64368AA3D8047B4* value)
	{
		___lights_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lights_4), (void*)value);
	}

	inline static int32_t get_offset_of_materials_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E, ___materials_5)); }
	inline MaterialSettingsU5BU5D_t882E1B340733B80FDDDBEA58C3D7140600AF2A01* get_materials_5() const { return ___materials_5; }
	inline MaterialSettingsU5BU5D_t882E1B340733B80FDDDBEA58C3D7140600AF2A01** get_address_of_materials_5() { return &___materials_5; }
	inline void set_materials_5(MaterialSettingsU5BU5D_t882E1B340733B80FDDDBEA58C3D7140600AF2A01* value)
	{
		___materials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastColorSpace_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E, ___lastColorSpace_6)); }
	inline int32_t get_lastColorSpace_6() const { return ___lastColorSpace_6; }
	inline int32_t* get_address_of_lastColorSpace_6() { return &___lastColorSpace_6; }
	inline void set_lastColorSpace_6(int32_t value)
	{
		___lastColorSpace_6 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_PBS
struct TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Light ToonyColorsPro.Demo.TCP2_Demo_PBS::DirLight
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___DirLight_4;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_PBS::PointLights
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PointLights_5;
	// UnityEngine.MeshRenderer ToonyColorsPro.Demo.TCP2_Demo_PBS::Robot
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___Robot_6;
	// UnityEngine.GameObject ToonyColorsPro.Demo.TCP2_Demo_PBS::Canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Canvas_7;
	// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[] ToonyColorsPro.Demo.TCP2_Demo_PBS::SkySettings
	SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* ___SkySettings_8;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::FlipLight
	bool ___FlipLight_9;
	// UnityEngine.Texture2D[] ToonyColorsPro.Demo.TCP2_Demo_PBS::RampTextures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___RampTextures_10;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::SmoothnessSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___SmoothnessSlider_11;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::SmoothnessValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SmoothnessValue_12;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::MetallicSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___MetallicSlider_13;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::MetallicValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___MetallicValue_14;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::BumpScaleValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BumpScaleValue_15;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::ShaderText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ShaderText_16;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::SkyboxValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SkyboxValue_17;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RampValue_18;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampThresholdSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___RampThresholdSlider_19;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampThresholdValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RampThresholdValue_20;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___RampSmoothSlider_21;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RampSmoothValue_22;
	// UnityEngine.UI.Slider ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothAddSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___RampSmoothAddSlider_23;
	// UnityEngine.UI.Text ToonyColorsPro.Demo.TCP2_Demo_PBS::RampSmoothAddValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RampSmoothAddValue_24;
	// UnityEngine.UI.RawImage ToonyColorsPro.Demo.TCP2_Demo_PBS::RampImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___RampImage_25;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_PBS::currentSky
	int32_t ___currentSky_26;
	// System.Int32 ToonyColorsPro.Demo.TCP2_Demo_PBS::currentRamp
	int32_t ___currentRamp_27;
	// UnityEngine.Material ToonyColorsPro.Demo.TCP2_Demo_PBS::robotMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___robotMaterial_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::mUseOutline
	bool ___mUseOutline_29;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::mRotatePointLights
	bool ___mRotatePointLights_30;

public:
	inline static int32_t get_offset_of_DirLight_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___DirLight_4)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_DirLight_4() const { return ___DirLight_4; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_DirLight_4() { return &___DirLight_4; }
	inline void set_DirLight_4(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___DirLight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirLight_4), (void*)value);
	}

	inline static int32_t get_offset_of_PointLights_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___PointLights_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PointLights_5() const { return ___PointLights_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PointLights_5() { return &___PointLights_5; }
	inline void set_PointLights_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PointLights_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointLights_5), (void*)value);
	}

	inline static int32_t get_offset_of_Robot_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___Robot_6)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_Robot_6() const { return ___Robot_6; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_Robot_6() { return &___Robot_6; }
	inline void set_Robot_6(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___Robot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Robot_6), (void*)value);
	}

	inline static int32_t get_offset_of_Canvas_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___Canvas_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Canvas_7() const { return ___Canvas_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Canvas_7() { return &___Canvas_7; }
	inline void set_Canvas_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Canvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Canvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_SkySettings_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___SkySettings_8)); }
	inline SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* get_SkySettings_8() const { return ___SkySettings_8; }
	inline SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033** get_address_of_SkySettings_8() { return &___SkySettings_8; }
	inline void set_SkySettings_8(SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* value)
	{
		___SkySettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkySettings_8), (void*)value);
	}

	inline static int32_t get_offset_of_FlipLight_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___FlipLight_9)); }
	inline bool get_FlipLight_9() const { return ___FlipLight_9; }
	inline bool* get_address_of_FlipLight_9() { return &___FlipLight_9; }
	inline void set_FlipLight_9(bool value)
	{
		___FlipLight_9 = value;
	}

	inline static int32_t get_offset_of_RampTextures_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampTextures_10)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_RampTextures_10() const { return ___RampTextures_10; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_RampTextures_10() { return &___RampTextures_10; }
	inline void set_RampTextures_10(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___RampTextures_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampTextures_10), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothnessSlider_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___SmoothnessSlider_11)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_SmoothnessSlider_11() const { return ___SmoothnessSlider_11; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_SmoothnessSlider_11() { return &___SmoothnessSlider_11; }
	inline void set_SmoothnessSlider_11(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___SmoothnessSlider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmoothnessSlider_11), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothnessValue_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___SmoothnessValue_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SmoothnessValue_12() const { return ___SmoothnessValue_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SmoothnessValue_12() { return &___SmoothnessValue_12; }
	inline void set_SmoothnessValue_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SmoothnessValue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmoothnessValue_12), (void*)value);
	}

	inline static int32_t get_offset_of_MetallicSlider_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___MetallicSlider_13)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_MetallicSlider_13() const { return ___MetallicSlider_13; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_MetallicSlider_13() { return &___MetallicSlider_13; }
	inline void set_MetallicSlider_13(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___MetallicSlider_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetallicSlider_13), (void*)value);
	}

	inline static int32_t get_offset_of_MetallicValue_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___MetallicValue_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_MetallicValue_14() const { return ___MetallicValue_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_MetallicValue_14() { return &___MetallicValue_14; }
	inline void set_MetallicValue_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___MetallicValue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetallicValue_14), (void*)value);
	}

	inline static int32_t get_offset_of_BumpScaleValue_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___BumpScaleValue_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BumpScaleValue_15() const { return ___BumpScaleValue_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BumpScaleValue_15() { return &___BumpScaleValue_15; }
	inline void set_BumpScaleValue_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BumpScaleValue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BumpScaleValue_15), (void*)value);
	}

	inline static int32_t get_offset_of_ShaderText_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___ShaderText_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ShaderText_16() const { return ___ShaderText_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ShaderText_16() { return &___ShaderText_16; }
	inline void set_ShaderText_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ShaderText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShaderText_16), (void*)value);
	}

	inline static int32_t get_offset_of_SkyboxValue_17() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___SkyboxValue_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SkyboxValue_17() const { return ___SkyboxValue_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SkyboxValue_17() { return &___SkyboxValue_17; }
	inline void set_SkyboxValue_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SkyboxValue_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkyboxValue_17), (void*)value);
	}

	inline static int32_t get_offset_of_RampValue_18() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampValue_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RampValue_18() const { return ___RampValue_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RampValue_18() { return &___RampValue_18; }
	inline void set_RampValue_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RampValue_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampValue_18), (void*)value);
	}

	inline static int32_t get_offset_of_RampThresholdSlider_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampThresholdSlider_19)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_RampThresholdSlider_19() const { return ___RampThresholdSlider_19; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_RampThresholdSlider_19() { return &___RampThresholdSlider_19; }
	inline void set_RampThresholdSlider_19(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___RampThresholdSlider_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampThresholdSlider_19), (void*)value);
	}

	inline static int32_t get_offset_of_RampThresholdValue_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampThresholdValue_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RampThresholdValue_20() const { return ___RampThresholdValue_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RampThresholdValue_20() { return &___RampThresholdValue_20; }
	inline void set_RampThresholdValue_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RampThresholdValue_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampThresholdValue_20), (void*)value);
	}

	inline static int32_t get_offset_of_RampSmoothSlider_21() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampSmoothSlider_21)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_RampSmoothSlider_21() const { return ___RampSmoothSlider_21; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_RampSmoothSlider_21() { return &___RampSmoothSlider_21; }
	inline void set_RampSmoothSlider_21(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___RampSmoothSlider_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampSmoothSlider_21), (void*)value);
	}

	inline static int32_t get_offset_of_RampSmoothValue_22() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampSmoothValue_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RampSmoothValue_22() const { return ___RampSmoothValue_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RampSmoothValue_22() { return &___RampSmoothValue_22; }
	inline void set_RampSmoothValue_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RampSmoothValue_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampSmoothValue_22), (void*)value);
	}

	inline static int32_t get_offset_of_RampSmoothAddSlider_23() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampSmoothAddSlider_23)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_RampSmoothAddSlider_23() const { return ___RampSmoothAddSlider_23; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_RampSmoothAddSlider_23() { return &___RampSmoothAddSlider_23; }
	inline void set_RampSmoothAddSlider_23(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___RampSmoothAddSlider_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampSmoothAddSlider_23), (void*)value);
	}

	inline static int32_t get_offset_of_RampSmoothAddValue_24() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampSmoothAddValue_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RampSmoothAddValue_24() const { return ___RampSmoothAddValue_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RampSmoothAddValue_24() { return &___RampSmoothAddValue_24; }
	inline void set_RampSmoothAddValue_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RampSmoothAddValue_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampSmoothAddValue_24), (void*)value);
	}

	inline static int32_t get_offset_of_RampImage_25() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___RampImage_25)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_RampImage_25() const { return ___RampImage_25; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_RampImage_25() { return &___RampImage_25; }
	inline void set_RampImage_25(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___RampImage_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RampImage_25), (void*)value);
	}

	inline static int32_t get_offset_of_currentSky_26() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___currentSky_26)); }
	inline int32_t get_currentSky_26() const { return ___currentSky_26; }
	inline int32_t* get_address_of_currentSky_26() { return &___currentSky_26; }
	inline void set_currentSky_26(int32_t value)
	{
		___currentSky_26 = value;
	}

	inline static int32_t get_offset_of_currentRamp_27() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___currentRamp_27)); }
	inline int32_t get_currentRamp_27() const { return ___currentRamp_27; }
	inline int32_t* get_address_of_currentRamp_27() { return &___currentRamp_27; }
	inline void set_currentRamp_27(int32_t value)
	{
		___currentRamp_27 = value;
	}

	inline static int32_t get_offset_of_robotMaterial_28() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___robotMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_robotMaterial_28() const { return ___robotMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_robotMaterial_28() { return &___robotMaterial_28; }
	inline void set_robotMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___robotMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robotMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_mUseOutline_29() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___mUseOutline_29)); }
	inline bool get_mUseOutline_29() const { return ___mUseOutline_29; }
	inline bool* get_address_of_mUseOutline_29() { return &___mUseOutline_29; }
	inline void set_mUseOutline_29(bool value)
	{
		___mUseOutline_29 = value;
	}

	inline static int32_t get_offset_of_mRotatePointLights_30() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0, ___mRotatePointLights_30)); }
	inline bool get_mRotatePointLights_30() const { return ___mRotatePointLights_30; }
	inline bool* get_address_of_mRotatePointLights_30() { return &___mRotatePointLights_30; }
	inline void set_mRotatePointLights_30(bool value)
	{
		___mRotatePointLights_30 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_PBS_View
struct TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Pivot
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Pivot_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OrbitStrg
	float ___OrbitStrg_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OrbitClamp
	float ___OrbitClamp_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::PanStrg
	float ___PanStrg_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::PanClamp
	float ___PanClamp_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::yMin
	float ___yMin_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::yMax
	float ___yMax_10;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomStrg
	float ___ZoomStrg_11;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomClamp
	float ___ZoomClamp_12;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomDistMin
	float ___ZoomDistMin_13;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ZoomDistMax
	float ___ZoomDistMax_14;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Decceleration
	float ___Decceleration_15;
	// UnityEngine.Rect ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ignoreMouseRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___ignoreMouseRect_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mouseDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mouseDelta_17;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::orbitAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___orbitAcceleration_18;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::panAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___panAcceleration_19;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::moveAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAcceleration_20;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_PBS_View::zoomAcceleration
	float ___zoomAcceleration_21;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetCamPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamPos_24;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetPivotPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetPivotPos_25;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetCamRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamRot_26;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_PBS_View::mResetPivotRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetPivotRot_27;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::leftMouseHeld
	bool ___leftMouseHeld_28;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::rightMouseHeld
	bool ___rightMouseHeld_29;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS_View::middleMouseHeld
	bool ___middleMouseHeld_30;

public:
	inline static int32_t get_offset_of_Pivot_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___Pivot_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Pivot_4() const { return ___Pivot_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Pivot_4() { return &___Pivot_4; }
	inline void set_Pivot_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Pivot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pivot_4), (void*)value);
	}

	inline static int32_t get_offset_of_OrbitStrg_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___OrbitStrg_5)); }
	inline float get_OrbitStrg_5() const { return ___OrbitStrg_5; }
	inline float* get_address_of_OrbitStrg_5() { return &___OrbitStrg_5; }
	inline void set_OrbitStrg_5(float value)
	{
		___OrbitStrg_5 = value;
	}

	inline static int32_t get_offset_of_OrbitClamp_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___OrbitClamp_6)); }
	inline float get_OrbitClamp_6() const { return ___OrbitClamp_6; }
	inline float* get_address_of_OrbitClamp_6() { return &___OrbitClamp_6; }
	inline void set_OrbitClamp_6(float value)
	{
		___OrbitClamp_6 = value;
	}

	inline static int32_t get_offset_of_PanStrg_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___PanStrg_7)); }
	inline float get_PanStrg_7() const { return ___PanStrg_7; }
	inline float* get_address_of_PanStrg_7() { return &___PanStrg_7; }
	inline void set_PanStrg_7(float value)
	{
		___PanStrg_7 = value;
	}

	inline static int32_t get_offset_of_PanClamp_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___PanClamp_8)); }
	inline float get_PanClamp_8() const { return ___PanClamp_8; }
	inline float* get_address_of_PanClamp_8() { return &___PanClamp_8; }
	inline void set_PanClamp_8(float value)
	{
		___PanClamp_8 = value;
	}

	inline static int32_t get_offset_of_yMin_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___yMin_9)); }
	inline float get_yMin_9() const { return ___yMin_9; }
	inline float* get_address_of_yMin_9() { return &___yMin_9; }
	inline void set_yMin_9(float value)
	{
		___yMin_9 = value;
	}

	inline static int32_t get_offset_of_yMax_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___yMax_10)); }
	inline float get_yMax_10() const { return ___yMax_10; }
	inline float* get_address_of_yMax_10() { return &___yMax_10; }
	inline void set_yMax_10(float value)
	{
		___yMax_10 = value;
	}

	inline static int32_t get_offset_of_ZoomStrg_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___ZoomStrg_11)); }
	inline float get_ZoomStrg_11() const { return ___ZoomStrg_11; }
	inline float* get_address_of_ZoomStrg_11() { return &___ZoomStrg_11; }
	inline void set_ZoomStrg_11(float value)
	{
		___ZoomStrg_11 = value;
	}

	inline static int32_t get_offset_of_ZoomClamp_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___ZoomClamp_12)); }
	inline float get_ZoomClamp_12() const { return ___ZoomClamp_12; }
	inline float* get_address_of_ZoomClamp_12() { return &___ZoomClamp_12; }
	inline void set_ZoomClamp_12(float value)
	{
		___ZoomClamp_12 = value;
	}

	inline static int32_t get_offset_of_ZoomDistMin_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___ZoomDistMin_13)); }
	inline float get_ZoomDistMin_13() const { return ___ZoomDistMin_13; }
	inline float* get_address_of_ZoomDistMin_13() { return &___ZoomDistMin_13; }
	inline void set_ZoomDistMin_13(float value)
	{
		___ZoomDistMin_13 = value;
	}

	inline static int32_t get_offset_of_ZoomDistMax_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___ZoomDistMax_14)); }
	inline float get_ZoomDistMax_14() const { return ___ZoomDistMax_14; }
	inline float* get_address_of_ZoomDistMax_14() { return &___ZoomDistMax_14; }
	inline void set_ZoomDistMax_14(float value)
	{
		___ZoomDistMax_14 = value;
	}

	inline static int32_t get_offset_of_Decceleration_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___Decceleration_15)); }
	inline float get_Decceleration_15() const { return ___Decceleration_15; }
	inline float* get_address_of_Decceleration_15() { return &___Decceleration_15; }
	inline void set_Decceleration_15(float value)
	{
		___Decceleration_15 = value;
	}

	inline static int32_t get_offset_of_ignoreMouseRect_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___ignoreMouseRect_16)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_ignoreMouseRect_16() const { return ___ignoreMouseRect_16; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_ignoreMouseRect_16() { return &___ignoreMouseRect_16; }
	inline void set_ignoreMouseRect_16(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___ignoreMouseRect_16 = value;
	}

	inline static int32_t get_offset_of_mouseDelta_17() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___mouseDelta_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mouseDelta_17() const { return ___mouseDelta_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mouseDelta_17() { return &___mouseDelta_17; }
	inline void set_mouseDelta_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mouseDelta_17 = value;
	}

	inline static int32_t get_offset_of_orbitAcceleration_18() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___orbitAcceleration_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_orbitAcceleration_18() const { return ___orbitAcceleration_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_orbitAcceleration_18() { return &___orbitAcceleration_18; }
	inline void set_orbitAcceleration_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___orbitAcceleration_18 = value;
	}

	inline static int32_t get_offset_of_panAcceleration_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___panAcceleration_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_panAcceleration_19() const { return ___panAcceleration_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_panAcceleration_19() { return &___panAcceleration_19; }
	inline void set_panAcceleration_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___panAcceleration_19 = value;
	}

	inline static int32_t get_offset_of_moveAcceleration_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___moveAcceleration_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAcceleration_20() const { return ___moveAcceleration_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAcceleration_20() { return &___moveAcceleration_20; }
	inline void set_moveAcceleration_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAcceleration_20 = value;
	}

	inline static int32_t get_offset_of_zoomAcceleration_21() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___zoomAcceleration_21)); }
	inline float get_zoomAcceleration_21() const { return ___zoomAcceleration_21; }
	inline float* get_address_of_zoomAcceleration_21() { return &___zoomAcceleration_21; }
	inline void set_zoomAcceleration_21(float value)
	{
		___zoomAcceleration_21 = value;
	}

	inline static int32_t get_offset_of_mResetCamPos_24() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___mResetCamPos_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamPos_24() const { return ___mResetCamPos_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamPos_24() { return &___mResetCamPos_24; }
	inline void set_mResetCamPos_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamPos_24 = value;
	}

	inline static int32_t get_offset_of_mResetPivotPos_25() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___mResetPivotPos_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetPivotPos_25() const { return ___mResetPivotPos_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetPivotPos_25() { return &___mResetPivotPos_25; }
	inline void set_mResetPivotPos_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetPivotPos_25 = value;
	}

	inline static int32_t get_offset_of_mResetCamRot_26() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___mResetCamRot_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamRot_26() const { return ___mResetCamRot_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamRot_26() { return &___mResetCamRot_26; }
	inline void set_mResetCamRot_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamRot_26 = value;
	}

	inline static int32_t get_offset_of_mResetPivotRot_27() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___mResetPivotRot_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetPivotRot_27() const { return ___mResetPivotRot_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetPivotRot_27() { return &___mResetPivotRot_27; }
	inline void set_mResetPivotRot_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetPivotRot_27 = value;
	}

	inline static int32_t get_offset_of_leftMouseHeld_28() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___leftMouseHeld_28)); }
	inline bool get_leftMouseHeld_28() const { return ___leftMouseHeld_28; }
	inline bool* get_address_of_leftMouseHeld_28() { return &___leftMouseHeld_28; }
	inline void set_leftMouseHeld_28(bool value)
	{
		___leftMouseHeld_28 = value;
	}

	inline static int32_t get_offset_of_rightMouseHeld_29() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___rightMouseHeld_29)); }
	inline bool get_rightMouseHeld_29() const { return ___rightMouseHeld_29; }
	inline bool* get_address_of_rightMouseHeld_29() { return &___rightMouseHeld_29; }
	inline void set_rightMouseHeld_29(bool value)
	{
		___rightMouseHeld_29 = value;
	}

	inline static int32_t get_offset_of_middleMouseHeld_30() { return static_cast<int32_t>(offsetof(TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8, ___middleMouseHeld_30)); }
	inline bool get_middleMouseHeld_30() const { return ___middleMouseHeld_30; }
	inline bool* get_address_of_middleMouseHeld_30() { return &___middleMouseHeld_30; }
	inline void set_middleMouseHeld_30(bool value)
	{
		___middleMouseHeld_30 = value;
	}
};


// ToonyColorsPro.Demo.TCP2_Demo_View
struct TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::OrbitStrg
	float ___OrbitStrg_4;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::OrbitClamp
	float ___OrbitClamp_5;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::PanStrg
	float ___PanStrg_6;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::PanClamp
	float ___PanClamp_7;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::ZoomStrg
	float ___ZoomStrg_8;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::ZoomClamp
	float ___ZoomClamp_9;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::Decceleration
	float ___Decceleration_10;
	// UnityEngine.Transform ToonyColorsPro.Demo.TCP2_Demo_View::CharacterTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___CharacterTransform_11;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mouseDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mouseDelta_12;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::orbitAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___orbitAcceleration_13;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::panAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___panAcceleration_14;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::moveAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveAcceleration_15;
	// System.Single ToonyColorsPro.Demo.TCP2_Demo_View::zoomAcceleration
	float ___zoomAcceleration_16;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mResetCamPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamPos_19;
	// UnityEngine.Vector3 ToonyColorsPro.Demo.TCP2_Demo_View::mResetCamRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mResetCamRot_20;
	// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_View::mMouseDown
	bool ___mMouseDown_21;

public:
	inline static int32_t get_offset_of_OrbitStrg_4() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___OrbitStrg_4)); }
	inline float get_OrbitStrg_4() const { return ___OrbitStrg_4; }
	inline float* get_address_of_OrbitStrg_4() { return &___OrbitStrg_4; }
	inline void set_OrbitStrg_4(float value)
	{
		___OrbitStrg_4 = value;
	}

	inline static int32_t get_offset_of_OrbitClamp_5() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___OrbitClamp_5)); }
	inline float get_OrbitClamp_5() const { return ___OrbitClamp_5; }
	inline float* get_address_of_OrbitClamp_5() { return &___OrbitClamp_5; }
	inline void set_OrbitClamp_5(float value)
	{
		___OrbitClamp_5 = value;
	}

	inline static int32_t get_offset_of_PanStrg_6() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___PanStrg_6)); }
	inline float get_PanStrg_6() const { return ___PanStrg_6; }
	inline float* get_address_of_PanStrg_6() { return &___PanStrg_6; }
	inline void set_PanStrg_6(float value)
	{
		___PanStrg_6 = value;
	}

	inline static int32_t get_offset_of_PanClamp_7() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___PanClamp_7)); }
	inline float get_PanClamp_7() const { return ___PanClamp_7; }
	inline float* get_address_of_PanClamp_7() { return &___PanClamp_7; }
	inline void set_PanClamp_7(float value)
	{
		___PanClamp_7 = value;
	}

	inline static int32_t get_offset_of_ZoomStrg_8() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___ZoomStrg_8)); }
	inline float get_ZoomStrg_8() const { return ___ZoomStrg_8; }
	inline float* get_address_of_ZoomStrg_8() { return &___ZoomStrg_8; }
	inline void set_ZoomStrg_8(float value)
	{
		___ZoomStrg_8 = value;
	}

	inline static int32_t get_offset_of_ZoomClamp_9() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___ZoomClamp_9)); }
	inline float get_ZoomClamp_9() const { return ___ZoomClamp_9; }
	inline float* get_address_of_ZoomClamp_9() { return &___ZoomClamp_9; }
	inline void set_ZoomClamp_9(float value)
	{
		___ZoomClamp_9 = value;
	}

	inline static int32_t get_offset_of_Decceleration_10() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___Decceleration_10)); }
	inline float get_Decceleration_10() const { return ___Decceleration_10; }
	inline float* get_address_of_Decceleration_10() { return &___Decceleration_10; }
	inline void set_Decceleration_10(float value)
	{
		___Decceleration_10 = value;
	}

	inline static int32_t get_offset_of_CharacterTransform_11() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___CharacterTransform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_CharacterTransform_11() const { return ___CharacterTransform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_CharacterTransform_11() { return &___CharacterTransform_11; }
	inline void set_CharacterTransform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___CharacterTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_mouseDelta_12() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___mouseDelta_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mouseDelta_12() const { return ___mouseDelta_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mouseDelta_12() { return &___mouseDelta_12; }
	inline void set_mouseDelta_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mouseDelta_12 = value;
	}

	inline static int32_t get_offset_of_orbitAcceleration_13() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___orbitAcceleration_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_orbitAcceleration_13() const { return ___orbitAcceleration_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_orbitAcceleration_13() { return &___orbitAcceleration_13; }
	inline void set_orbitAcceleration_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___orbitAcceleration_13 = value;
	}

	inline static int32_t get_offset_of_panAcceleration_14() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___panAcceleration_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_panAcceleration_14() const { return ___panAcceleration_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_panAcceleration_14() { return &___panAcceleration_14; }
	inline void set_panAcceleration_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___panAcceleration_14 = value;
	}

	inline static int32_t get_offset_of_moveAcceleration_15() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___moveAcceleration_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveAcceleration_15() const { return ___moveAcceleration_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveAcceleration_15() { return &___moveAcceleration_15; }
	inline void set_moveAcceleration_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveAcceleration_15 = value;
	}

	inline static int32_t get_offset_of_zoomAcceleration_16() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___zoomAcceleration_16)); }
	inline float get_zoomAcceleration_16() const { return ___zoomAcceleration_16; }
	inline float* get_address_of_zoomAcceleration_16() { return &___zoomAcceleration_16; }
	inline void set_zoomAcceleration_16(float value)
	{
		___zoomAcceleration_16 = value;
	}

	inline static int32_t get_offset_of_mResetCamPos_19() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___mResetCamPos_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamPos_19() const { return ___mResetCamPos_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamPos_19() { return &___mResetCamPos_19; }
	inline void set_mResetCamPos_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamPos_19 = value;
	}

	inline static int32_t get_offset_of_mResetCamRot_20() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___mResetCamRot_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mResetCamRot_20() const { return ___mResetCamRot_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mResetCamRot_20() { return &___mResetCamRot_20; }
	inline void set_mResetCamRot_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mResetCamRot_20 = value;
	}

	inline static int32_t get_offset_of_mMouseDown_21() { return static_cast<int32_t>(offsetof(TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17, ___mMouseDown_21)); }
	inline bool get_mMouseDown_21() const { return ___mMouseDown_21; }
	inline bool* get_address_of_mMouseDown_21() { return &___mMouseDown_21; }
	inline void set_mMouseDown_21(bool value)
	{
		___mMouseDown_21 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tA2F349FE839781469A0344CF6039B51512394275 * m_Items[1];

public:
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience[]
struct AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * m_Items[1];

public:
	inline Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings[]
struct CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * m_Items[1];

public:
	inline CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * m_Items[1];

public:
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle[]
struct ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * m_Items[1];

public:
	inline ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Animation[]
struct AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * m_Items[1];

public:
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * m_Items[1];

public:
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting[]
struct SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * m_Items[1];

public:
	inline SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_mE83AB53310ED3C554CC03D01B145BED5A0EF5601_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, RuntimeObject * ___value1, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<ToonyColorsPro.Demo.TCP2_Demo_View>()
inline TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * Component_GetComponent_TisTCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17_mE4BA16E2C507CC05B87F1189ED077D6E4C208493 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UpdateShader_m4541EC3313CF33CF1549C09F477857B6DE48C41F (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RestoreRimColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RestoreRimColors_m877F087A20B24CA184214A4186B2F1ED102D7E12 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661 (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA (String_t* ___str0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m85F01F7AC3C111C05DAB83250F11FD4911D01140 (String_t* ___text0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB (bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF (String_t* ___text0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetLastRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUILayoutUtility_GetLastRect_m008A74AF10E8DA5DB4680782C088884E4CB56BB8 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::DecreaseLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_DecreaseLevel_m4F6022036371C420606CD426D300176A1F1E94FC (bool ___applyExpensiveChanges0, const RuntimeMethod* method);
// System.String[] UnityEngine.QualitySettings::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* QualitySettings_get_names_mBE61BC830197E73E5E236B86AB1BDF8A9D300A52 (const RuntimeMethod* method);
// System.Int32 UnityEngine.QualitySettings::GetQualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_GetQualityLevel_m0C44BD36C023D6D00BA989E483AC40EA393AF72A (const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::IncreaseLevel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_IncreaseLevel_mBEE6E2ACC6D39DC4326F3D63498C644E6E47EB9A (bool ___applyExpensiveChanges0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD (float ___pixels0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150 (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_enabled_mD49D19789253D9EE373BE0FD9F7CFD06557A6A91 (const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RimOutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RimOutlineColor_mDF85AB73BD9B9339B957FF61A666C00431AE021F (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D (float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options3, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_ExpandWidth_m6A1F7C7E400309F44A3D1AF91CC31FB6D49857D6 (bool ___expand0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUILayoutUtility_GetRect_m002E171EF872AE6B8530EBBC2CAEE29127497274 (float ___width0, float ___height1, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PrevRamp_mD2CEFE1CB10E31FD11868556B9436CD1FE09DBCA (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_NextRamp_m6E8B49272BCB679A6071492EA23FD08BE0F5BDC0 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::get_changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_get_changed_m4CECD613B60F4ADCF5F4D36412CF78EFBDC25309 (const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UnityDiffuseShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UnityDiffuseShader_mFC38158861DDEAFB13E92AEA9538239D8D39CD53 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// UnityEngine.Shader ToonyColorsPro.Runtime.TCP2_RuntimeUtils::GetShaderWithKeywords(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * TCP2_RuntimeUtils_GetShaderWithKeywords_m58B7E36376E15FB45F681A5CA62F75FF374ACC2F (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String[] UnityEngine.Material::get_shaderKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Material_get_shaderKeywords_mDAD743C090C3CEE0B2883140B244853D71C5E9E0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<UnityEngine.Texture2D>(!!0[],!!0)
inline int32_t Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B (Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___array0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316*, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_mE83AB53310ED3C554CC03D01B145BED5A0EF5601_gshared)(___array0, ___value1, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_ResetView_mA64D01C4B48EB2021658C8AC29D30A7B91813637 (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m3B18F08276BB86827D21F01E099B74FD6AD80800 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___relativeTo1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotatePointLights(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_mE775ADB148AB1FC2EC6C4650E1D74D6758F047A6_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotateLights(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4ADB805A8DEB2F2D60F4E6DD77C058D44613D6F8_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAmbience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAmbience_mCAD7DC5F14DAFC4E3CFEDBEBB2ED214C8C44EDC3 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetCat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetCat_m3CC826543A30C9CB82C06DE847749CC576DCFA61 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___cat0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetFlat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetFlat_m78DFBFD770CB696FE51FBBCA5B76FE48AE8F56DC (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___flat0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimation_m5EA943B4F026D809AD107E937B2CF4C40A51F169 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotateLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m9259F09C910D62F42E8B15FAC748989506EF2021_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotatePointLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_m7F5CA31EF08389D8542F79CCDDD1A5049E2CA020_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DynamicGI::UpdateEnvironment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicGI_UpdateEnvironment_m1834BA636911736CCD70FE2B6B1310ABC5165AB2 (const RuntimeMethod* method);
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationState::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_normalizedTime_m8A2339D72C9BE34C50F12233D21DF45347210520 (AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PlayCurrentAnimation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PlayCurrentAnimation_mC30B0E3691E80AB8402E0A689EFBDDC23C93652D (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, float ___time0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadows_mC464AA4717DB55512DC06B3DFB95C8839F16C20B (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_mCEC582FF8FE05B1F41E2BAC2C33E60D643C1E211 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::UpdateAnimSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_UpdateAnimSpeed_m04527C2B417791BBB7BB36EFFEBD49D9A5FEC89F (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m7F0049CCE49D9F5963AFB5552CDEAD51793891F7 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m54AF12C004F2253228DA25B9E21774184A77271D (AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationState::set_normalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_normalizedTime_m7662455F89FEC645F59C175375190B8F98FBBF20 (AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowTCP2Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowTCP2Shader_m1AEB13AABB1F316CD28B5CE5460A0256AFE62A53 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateSky_m411A9F39E24226DAABC9CD83EDAC745DCEE34B4B (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateRamp_m9A6981FEA428C7E4C1189E01C02A83611D6F260A (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextSky_mD810585888EC4653F82FF13D7FFF6E4DD200CDDA (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevSky_mFC2CCA01338C5D551AA8DC18AAD9B319E59C37EF (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowUnityStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowUnityStandardShader_m609233CAD1C795F1350282FFB7D3A6FF4A97E8B2 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m12614C5FABB1F4A9A6800EE65BBFDB433D6D804D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderSettings::set_customReflection(UnityEngine.Cubemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_customReflection_mB1741F9FDF8D9ED94804F86F99EA45C5F5B1BE20 (Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 * ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_ResetView_m5A38FA7EE15C985CA90B25855FC12B5C43333907 (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_ResetView_mBA5CA74008085B726D254DE746756AFDCF99CFED (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Awake_m0CD651C36A68487FCB5DF86AE3E37DFC0935B2E2 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17_mE4BA16E2C507CC05B87F1189ED077D6E4C208493_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DemoView = GetComponent<TCP2_Demo_View>();
		TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * L_0;
		L_0 = Component_GetComponent_TisTCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17_mE4BA16E2C507CC05B87F1189ED077D6E4C208493(__this, /*hidden argument*/Component_GetComponent_TisTCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17_mE4BA16E2C507CC05B87F1189ED077D6E4C208493_RuntimeMethod_var);
		__this->set_DemoView_26(L_0);
		// mRampTexture = RampTextures[0];
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_1 = __this->get_RampTextures_5();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_mRampTexture_20(L_3);
		// UpdateShader();
		TCP2_Demo_UpdateShader_m4541EC3313CF33CF1549C09F477857B6DE48C41F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_OnDestroy_m50C9E7666FBBEFD3D7CEB7293B20AC0DD55532CB (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	{
		// RestoreRimColors();
		TCP2_Demo_RestoreRimColors_m877F087A20B24CA184214A4186B2F1ED102D7E12(__this, /*hidden argument*/NULL);
		// UpdateShader();
		TCP2_Demo_UpdateShader_m4541EC3313CF33CF1549C09F477857B6DE48C41F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_OnGUI_m7ABA0BF1BD10EFB243ABAD439D54DA1E64649260 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00591519A649DB10EE10C734428876B5B61C2590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC1BD2D2846995B2539A796563845CF33838719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B18_0 = NULL;
	bool G_B18_1 = false;
	TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * G_B18_2 = NULL;
	String_t* G_B17_0 = NULL;
	bool G_B17_1 = false;
	TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * G_B17_2 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	bool G_B19_2 = false;
	TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * G_B19_3 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B32_0 = 0;
	bool G_B38_0 = false;
	bool G_B37_0 = false;
	int32_t G_B39_0 = 0;
	bool G_B39_1 = false;
	{
		// GUI.skin = GuiSkin;
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = __this->get_GuiSkin_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(L_0, /*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 310, 20, 310 - 20, 30)));
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)310))))), (20.0f), (290.0f), (30.0f), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((&L_3), L_2, /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_3, /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_4, /*hidden argument*/NULL);
		// GUILayout.Label("Demo Character:");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_5;
		L_5 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralBE6AB823F7084F7CBF78D277DAFD12654914A8C8, L_5, /*hidden argument*/NULL);
		// if (GUILayout.Button("Ethan", mViewRobot ? "Button" : "ButtonOn"))
		bool L_6 = __this->get_mViewRobot_24();
		G_B1_0 = _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
		if (L_6)
		{
			G_B2_0 = _stringLiteralB86C9F9659F38AE2BD7F54572A61AE96A9C3FCA0;
			goto IL_0062;
		}
	}
	{
		G_B3_0 = _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
		G_B3_1 = G_B1_0;
		goto IL_0067;
	}

IL_0062:
	{
		G_B3_0 = _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
		G_B3_1 = G_B2_0;
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_7;
		L_7 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(G_B3_0, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_8;
		L_8 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_9;
		L_9 = GUILayout_Button_m85F01F7AC3C111C05DAB83250F11FD4911D01140(G_B3_1, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		// mViewRobot = false;
		__this->set_mViewRobot_24((bool)0);
		// Robot.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_Robot_8();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// Ethan.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_Ethan_9();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// DemoView.CharacterTransform = Ethan.transform;
		TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * L_12 = __this->get_DemoView_26();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_Ethan_9();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_CharacterTransform_11(L_14);
	}

IL_00ad:
	{
		// if (GUILayout.Button("Robot Kyle", !mViewRobot ? "Button" : "ButtonOn"))
		bool L_15 = __this->get_mViewRobot_24();
		G_B6_0 = _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
		if (!L_15)
		{
			G_B7_0 = _stringLiteral737A27C87A7D3DBCC56EBA72331D08B8C60A5951;
			goto IL_00c1;
		}
	}
	{
		G_B8_0 = _stringLiteral67207BF3EBFAB21E540E989AB0DCB1653EA4223B;
		G_B8_1 = G_B6_0;
		goto IL_00c6;
	}

IL_00c1:
	{
		G_B8_0 = _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
		G_B8_1 = G_B7_0;
	}

IL_00c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16;
		L_16 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(G_B8_0, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_17;
		L_17 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_18;
		L_18 = GUILayout_Button_m85F01F7AC3C111C05DAB83250F11FD4911D01140(G_B8_1, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_010c;
		}
	}
	{
		// mViewRobot = true;
		__this->set_mViewRobot_24((bool)1);
		// Robot.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_Robot_8();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// Ethan.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Ethan_9();
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		// DemoView.CharacterTransform = Robot.transform;
		TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * L_21 = __this->get_DemoView_26();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_Robot_8();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_CharacterTransform_11(L_23);
	}

IL_010c:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 310, 55, 310 - 20, Screen.height - 40 - 90)));
		int32_t L_24;
		L_24 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_25;
		L_25 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_26), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)310))))), (55.0f), (290.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)40))), (int32_t)((int32_t)90))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((&L_27), L_26, /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_27, /*hidden argument*/NULL);
		// if (mViewRobot)
		bool L_28 = __this->get_mViewRobot_24();
		if (!L_28)
		{
			goto IL_01cc;
		}
	}
	{
		// GUILayout.Label("Outline Normals");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_29;
		L_29 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral0648F8C66A66147DD1B2F9ECD5E95407B0ACCCB4, L_29, /*hidden argument*/NULL);
		// mRobotOutlineNormals = !GUILayout.Toggle(!mRobotOutlineNormals, "Regular Normals");
		bool L_30 = __this->get_mRobotOutlineNormals_25();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_31;
		L_31 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_32;
		L_32 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB((bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0), _stringLiteral4B0C91AA0C2A70C33F4E2EB87FB069D2581AFB8A, L_31, /*hidden argument*/NULL);
		__this->set_mRobotOutlineNormals_25((bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0));
		// mRobotOutlineNormals = GUILayout.Toggle(mRobotOutlineNormals, "TCP2's Encoded Smoothed Normals");
		bool L_33 = __this->get_mRobotOutlineNormals_25();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_34;
		L_34 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_35;
		L_35 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_33, _stringLiteral4C1425A12C76741D239D3C562A0BA6342AC393AF, L_34, /*hidden argument*/NULL);
		__this->set_mRobotOutlineNormals_25(L_35);
		// GUILayout.Label("Toony Colors Pro 2 introduces an innovative way to fix broken outline caused by hard-edge shading.\nRead the documentation to learn more!", "SmallLabelShadow");
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_36;
		L_36 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_37;
		L_37 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF(_stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE, L_36, L_37, /*hidden argument*/NULL);
		// var r2 = GUILayoutUtility.GetLastRect();
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_38;
		L_38 = GUILayoutUtility_GetLastRect_m008A74AF10E8DA5DB4680782C088884E4CB56BB8(/*hidden argument*/NULL);
		// GUI.Label(r2, "Toony Colors Pro 2 introduces an innovative way to fix broken outline caused by hard-edge shading.\nRead the documentation to learn more!", "SmallLabel");
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_39;
		L_39 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_38, _stringLiteral99332043FDBA17B09740E63931A2E0134ADE7FEE, L_39, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(new Rect(Screen.width - 210, Screen.height - 60, 210 - 20, 50)));
		int32_t L_40;
		L_40 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_41;
		L_41 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_42), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)210))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)((int32_t)60))))), (190.0f), (50.0f), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Rect__ctor_m4976D69877F052A2BF4FDC3558F5697412BE08C3((&L_43), L_42, /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_43, /*hidden argument*/NULL);
		// GUILayout.Label("Quality Settings:");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_44;
		L_44 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralE7B160578F0649E829CB123ADDC922E00D92B79D, L_44, /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_45;
		L_45 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_45, /*hidden argument*/NULL);
		// if (GUILayout.Button("<", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_46 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_47 = L_46;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_48;
		L_48 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((26.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_48);
		bool L_49;
		L_49 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_47, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_023d;
		}
	}
	{
		// QualitySettings.DecreaseLevel(true);
		QualitySettings_DecreaseLevel_m4F6022036371C420606CD426D300176A1F1E94FC((bool)1, /*hidden argument*/NULL);
	}

IL_023d:
	{
		// GUILayout.Label(QualitySettings.names[QualitySettings.GetQualityLevel()], "LabelCenter");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50;
		L_50 = QualitySettings_get_names_mBE61BC830197E73E5E236B86AB1BDF8A9D300A52(/*hidden argument*/NULL);
		int32_t L_51;
		L_51 = QualitySettings_GetQualityLevel_m0C44BD36C023D6D00BA989E483AC40EA393AF72A(/*hidden argument*/NULL);
		NullCheck(L_50);
		int32_t L_52 = L_51;
		String_t* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_54;
		L_54 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral4B4DDE598D0D9173EDEAD684456B35B04B4CF3E8, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_55;
		L_55 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF(L_53, L_54, L_55, /*hidden argument*/NULL);
		// if (GUILayout.Button(">", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_56 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_57 = L_56;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_58;
		L_58 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((26.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_58);
		bool L_59;
		L_59 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_57, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0281;
		}
	}
	{
		// QualitySettings.IncreaseLevel(true);
		QualitySettings_IncreaseLevel_mBEE6E2ACC6D39DC4326F3D63498C644E6E47EB9A((bool)1, /*hidden argument*/NULL);
	}

IL_0281:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// GUILayout.BeginArea(new Rect(20, 20 + 90, Screen.width - 40, Screen.height - 40));
		int32_t L_60;
		L_60 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_61;
		L_61 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_62), (20.0f), (110.0f), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)40))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)((int32_t)40))))), /*hidden argument*/NULL);
		GUILayout_BeginArea_m95BE97450201032DF5B0C18A422C25CD86FD46A0(L_62, /*hidden argument*/NULL);
		// mUnityShader = GUILayout.Toggle(mUnityShader, "View with Unity " + (mViewRobot ? "\"Diffuse Specular\"" : "\"Bumped Specular\""));
		bool L_63 = __this->get_mUnityShader_10();
		bool L_64 = __this->get_mViewRobot_24();
		G_B17_0 = _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
		G_B17_1 = L_63;
		G_B17_2 = __this;
		if (L_64)
		{
			G_B18_0 = _stringLiteral60AD33E176C4CFD1E4240B214BBB79DF8CFADA47;
			G_B18_1 = L_63;
			G_B18_2 = __this;
			goto IL_02cc;
		}
	}
	{
		G_B19_0 = _stringLiteral480E63850583A9D2BD7056EA22C85B700D87E4C1;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_02d1;
	}

IL_02cc:
	{
		G_B19_0 = _stringLiteral4FE7DA292DB895F89F103A7848931C4DE77A4FFE;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_02d1:
	{
		String_t* L_65;
		L_65 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B19_1, G_B19_0, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_66;
		L_66 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_67;
		L_67 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(G_B19_2, L_65, L_66, /*hidden argument*/NULL);
		NullCheck(G_B19_3);
		G_B19_3->set_mUnityShader_10(L_67);
		// GUILayout.Space(10);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((10.0f), /*hidden argument*/NULL);
		// GUI.enabled = !mUnityShader;
		bool L_68 = __this->get_mUnityShader_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// GUILayout.Label("Toony Colors Pro 2 Settings");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_69;
		L_69 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral3726FE30E477BCCFE5CF0D5E2EA25EBA49DB6564, L_69, /*hidden argument*/NULL);
		// mShaderSpecular = GUILayout.Toggle(mShaderSpecular, "Specular");
		bool L_70 = __this->get_mShaderSpecular_11();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_71;
		L_71 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_72;
		L_72 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_70, _stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433, L_71, /*hidden argument*/NULL);
		__this->set_mShaderSpecular_11(L_72);
		// GUI.enabled = !mViewRobot;
		bool L_73 = __this->get_mViewRobot_24();
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if (GUI.enabled)
		bool L_74;
		L_74 = GUI_get_enabled_mD49D19789253D9EE373BE0FD9F7CFD06557A6A91(/*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_0359;
		}
	}
	{
		// mShaderBump = GUILayout.Toggle(mShaderBump, "Bump");
		bool L_75 = __this->get_mShaderBump_12();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_76;
		L_76 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_77;
		L_77 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_75, _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B, L_76, /*hidden argument*/NULL);
		__this->set_mShaderBump_12(L_77);
		goto IL_036a;
	}

IL_0359:
	{
		// GUILayout.Toggle(false, "Bump");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_78;
		L_78 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_79;
		L_79 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB((bool)0, _stringLiteral893E855CB52E129F22805ACDDEE418621B588B6B, L_78, /*hidden argument*/NULL);
	}

IL_036a:
	{
		// GUI.enabled = !mUnityShader;
		bool L_80 = __this->get_mUnityShader_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((((int32_t)L_80) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// mShaderReflection = GUILayout.Toggle(mShaderReflection, "Reflection");
		bool L_81 = __this->get_mShaderReflection_13();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_82;
		L_82 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_83;
		L_83 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_81, _stringLiteral71E2151BF75F822D32529B598E65CB2CF534C8BD, L_82, /*hidden argument*/NULL);
		__this->set_mShaderReflection_13(L_83);
		// var changed = mShaderRim;
		bool L_84 = __this->get_mShaderRim_14();
		// mShaderRim = GUILayout.Toggle(mShaderRim, "Rim Lighting");
		bool L_85 = __this->get_mShaderRim_14();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_86;
		L_86 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_87;
		L_87 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_85, _stringLiteral24A467CD3B78A23BD564F99467EDCDAF8DC8F2D6, L_86, /*hidden argument*/NULL);
		__this->set_mShaderRim_14(L_87);
		// changed = changed != mShaderRim;
		bool L_88 = __this->get_mShaderRim_14();
		// if (changed && mShaderRim && mShaderRimOutline)
		int32_t L_89 = ((((int32_t)((((int32_t)L_84) == ((int32_t)L_88))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B23_0 = L_89;
		if (!L_89)
		{
			G_B26_0 = L_89;
			goto IL_03d9;
		}
	}
	{
		bool L_90 = __this->get_mShaderRim_14();
		G_B24_0 = G_B23_0;
		if (!L_90)
		{
			G_B26_0 = G_B23_0;
			goto IL_03d9;
		}
	}
	{
		bool L_91 = __this->get_mShaderRimOutline_15();
		G_B25_0 = G_B24_0;
		if (!L_91)
		{
			G_B26_0 = G_B24_0;
			goto IL_03d9;
		}
	}
	{
		// mShaderRimOutline = false;
		__this->set_mShaderRimOutline_15((bool)0);
		G_B26_0 = G_B25_0;
	}

IL_03d9:
	{
		// if (changed && mShaderRim)
		if (!G_B26_0)
		{
			goto IL_03e9;
		}
	}
	{
		bool L_92 = __this->get_mShaderRim_14();
		if (!L_92)
		{
			goto IL_03e9;
		}
	}
	{
		// RestoreRimColors();
		TCP2_Demo_RestoreRimColors_m877F087A20B24CA184214A4186B2F1ED102D7E12(__this, /*hidden argument*/NULL);
	}

IL_03e9:
	{
		// changed = mShaderRimOutline;
		bool L_93 = __this->get_mShaderRimOutline_15();
		// mShaderRimOutline = GUILayout.Toggle(mShaderRimOutline, "Rim Outline");
		bool L_94 = __this->get_mShaderRimOutline_15();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_95;
		L_95 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_96;
		L_96 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_94, _stringLiteralDF775A570E3BDA7D05C2B90A37EEAC03168B63A1, L_95, /*hidden argument*/NULL);
		__this->set_mShaderRimOutline_15(L_96);
		// changed = changed != mShaderRimOutline;
		bool L_97 = __this->get_mShaderRimOutline_15();
		// if (changed && mShaderRimOutline && mShaderRim)
		int32_t L_98 = ((((int32_t)((((int32_t)L_93) == ((int32_t)L_97))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B30_0 = L_98;
		if (!L_98)
		{
			G_B33_0 = L_98;
			goto IL_042f;
		}
	}
	{
		bool L_99 = __this->get_mShaderRimOutline_15();
		G_B31_0 = G_B30_0;
		if (!L_99)
		{
			G_B33_0 = G_B30_0;
			goto IL_042f;
		}
	}
	{
		bool L_100 = __this->get_mShaderRim_14();
		G_B32_0 = G_B31_0;
		if (!L_100)
		{
			G_B33_0 = G_B31_0;
			goto IL_042f;
		}
	}
	{
		// mShaderRim = false;
		__this->set_mShaderRim_14((bool)0);
		G_B33_0 = G_B32_0;
	}

IL_042f:
	{
		// if (changed && mShaderRimOutline)
		if (!G_B33_0)
		{
			goto IL_043f;
		}
	}
	{
		bool L_101 = __this->get_mShaderRimOutline_15();
		if (!L_101)
		{
			goto IL_043f;
		}
	}
	{
		// RimOutlineColor();
		TCP2_Demo_RimOutlineColor_mDF85AB73BD9B9339B957FF61A666C00431AE021F(__this, /*hidden argument*/NULL);
	}

IL_043f:
	{
		// GUI.enabled &= mShaderRim || mShaderRimOutline;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = GUI_get_enabled_mD49D19789253D9EE373BE0FD9F7CFD06557A6A91(/*hidden argument*/NULL);
		bool L_103 = __this->get_mShaderRim_14();
		G_B37_0 = L_102;
		if (L_103)
		{
			G_B38_0 = L_102;
			goto IL_0454;
		}
	}
	{
		bool L_104 = __this->get_mShaderRimOutline_15();
		G_B39_0 = ((int32_t)(L_104));
		G_B39_1 = G_B37_0;
		goto IL_0455;
	}

IL_0454:
	{
		G_B39_0 = 1;
		G_B39_1 = G_B38_0;
	}

IL_0455:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((int32_t)((int32_t)G_B39_1&(int32_t)G_B39_0)), /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_105;
		L_105 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_105, /*hidden argument*/NULL);
		// GUILayout.Label("Rim Min", GUILayout.Width(70));
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_106 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_107 = L_106;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_108;
		L_108 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((70.0f), /*hidden argument*/NULL);
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_108);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_108);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralB30DEC10E8090DB33FCCD62C4D0838D8282ECE8B, L_107, /*hidden argument*/NULL);
		// mRimMin = GUILayout.HorizontalSlider(mRimMin, 0f, 1f, GUILayout.Width(130f));
		float L_109 = __this->get_mRimMin_17();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_110 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_111 = L_110;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_112;
		L_112 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((130.0f), /*hidden argument*/NULL);
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_112);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_112);
		float L_113;
		L_113 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_109, (0.0f), (1.0f), L_111, /*hidden argument*/NULL);
		__this->set_mRimMin_17(L_113);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_114;
		L_114 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_114, /*hidden argument*/NULL);
		// GUILayout.Label("Rim Max", GUILayout.Width(70));
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_115 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_116 = L_115;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_117;
		L_117 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((70.0f), /*hidden argument*/NULL);
		NullCheck(L_116);
		ArrayElementTypeCheck (L_116, L_117);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_117);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralAEC1BD2D2846995B2539A796563845CF33838719, L_116, /*hidden argument*/NULL);
		// mRimMax = GUILayout.HorizontalSlider(mRimMax, 0f, 1f, GUILayout.Width(130f));
		float L_118 = __this->get_mRimMax_18();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_119 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_120 = L_119;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_121;
		L_121 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((130.0f), /*hidden argument*/NULL);
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, L_121);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_121);
		float L_122;
		L_122 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_118, (0.0f), (1.0f), L_120, /*hidden argument*/NULL);
		__this->set_mRimMax_18(L_122);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUI.enabled = !mUnityShader;
		bool L_123 = __this->get_mUnityShader_10();
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((((int32_t)L_123) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// mShaderOutline = GUILayout.Toggle(mShaderOutline, "Outline");
		bool L_124 = __this->get_mShaderOutline_16();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_125;
		L_125 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_126;
		L_126 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_124, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, L_125, /*hidden argument*/NULL);
		__this->set_mShaderOutline_16(L_126);
		// GUILayout.Space(6);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((6.0f), /*hidden argument*/NULL);
		// GUILayout.Label("Ramp Settings");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_127;
		L_127 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralC33602B5DFE627CB474161C86379865E502BCBD4, L_127, /*hidden argument*/NULL);
		// mRampTextureFlag = GUILayout.Toggle(mRampTextureFlag, "Textured Ramp");
		bool L_128 = __this->get_mRampTextureFlag_19();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_129;
		L_129 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_130;
		L_130 = GUILayout_Toggle_m5388FD56AEAB5F72BCA655760BD157DC1ABB63BB(L_128, _stringLiteral00591519A649DB10EE10C734428876B5B61C2590, L_129, /*hidden argument*/NULL);
		__this->set_mRampTextureFlag_19(L_130);
		// GUI.enabled &= mRampTextureFlag;
		bool L_131;
		L_131 = GUI_get_enabled_mD49D19789253D9EE373BE0FD9F7CFD06557A6A91(/*hidden argument*/NULL);
		bool L_132 = __this->get_mRampTextureFlag_19();
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((int32_t)((int32_t)L_131&(int32_t)L_132)), /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_133;
		L_133 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_133, /*hidden argument*/NULL);
		// var r = GUILayoutUtility.GetRect(200, 20, GUILayout.ExpandWidth(false));
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_134 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_135 = L_134;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_136;
		L_136 = GUILayout_ExpandWidth_m6A1F7C7E400309F44A3D1AF91CC31FB6D49857D6((bool)0, /*hidden argument*/NULL);
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, L_136);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_136);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_137;
		L_137 = GUILayoutUtility_GetRect_m002E171EF872AE6B8530EBBC2CAEE29127497274((200.0f), (20.0f), L_135, /*hidden argument*/NULL);
		V_0 = L_137;
		// r.y += 4;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_138 = (&V_0);
		float L_139;
		L_139 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_138, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_138, ((float)il2cpp_codegen_add((float)L_139, (float)(4.0f))), /*hidden argument*/NULL);
		// GUI.DrawTexture(r, mRampTexture);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_140 = V_0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_141 = __this->get_mRampTexture_20();
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_140, L_141, /*hidden argument*/NULL);
		// if (GUILayout.Button("<", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_142 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_143 = L_142;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_144;
		L_144 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((26.0f), /*hidden argument*/NULL);
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, L_144);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_144);
		bool L_145;
		L_145 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_143, /*hidden argument*/NULL);
		if (!L_145)
		{
			goto IL_05ea;
		}
	}
	{
		// PrevRamp();
		TCP2_Demo_PrevRamp_mD2CEFE1CB10E31FD11868556B9436CD1FE09DBCA(__this, /*hidden argument*/NULL);
	}

IL_05ea:
	{
		// if (GUILayout.Button(">", GUILayout.Width(26)))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_146 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_147 = L_146;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_148;
		L_148 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((26.0f), /*hidden argument*/NULL);
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, L_148);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_148);
		bool L_149;
		L_149 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, L_147, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_060f;
		}
	}
	{
		// NextRamp();
		TCP2_Demo_NextRamp_m6E8B49272BCB679A6071492EA23FD08BE0F5BDC0(__this, /*hidden argument*/NULL);
	}

IL_060f:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUI.enabled = !mUnityShader;
		bool L_150 = __this->get_mUnityShader_10();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((((int32_t)L_150) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// GUI.enabled &= !mRampTextureFlag;
		bool L_151;
		L_151 = GUI_get_enabled_mD49D19789253D9EE373BE0FD9F7CFD06557A6A91(/*hidden argument*/NULL);
		bool L_152 = __this->get_mRampTextureFlag_19();
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)((int32_t)((int32_t)L_151&(int32_t)((((int32_t)L_152) == ((int32_t)0))? 1 : 0))), /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_153;
		L_153 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_153, /*hidden argument*/NULL);
		// GUILayout.Label("Smoothing", GUILayout.Width(85));
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_154 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_155 = L_154;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_156;
		L_156 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((85.0f), /*hidden argument*/NULL);
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_156);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral575427C94F4C16CF1DD82F5D117CA2A61F427691, L_155, /*hidden argument*/NULL);
		// mRampSmoothing = GUILayout.HorizontalSlider(mRampSmoothing, 0.01f, 1f, GUILayout.Width(115f));
		float L_157 = __this->get_mRampSmoothing_21();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_158 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_159 = L_158;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_160;
		L_160 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((115.0f), /*hidden argument*/NULL);
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_160);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_160);
		float L_161;
		L_161 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_157, (0.00999999978f), (1.0f), L_159, /*hidden argument*/NULL);
		__this->set_mRampSmoothing_21(L_161);
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// if (GUI.changed)
		bool L_162;
		L_162 = GUI_get_changed_m4CECD613B60F4ADCF5F4D36412CF78EFBDC25309(/*hidden argument*/NULL);
		if (!L_162)
		{
			goto IL_06ad;
		}
	}
	{
		// if (mUnityShader)
		bool L_163 = __this->get_mUnityShader_10();
		if (!L_163)
		{
			goto IL_06a7;
		}
	}
	{
		// UnityDiffuseShader();
		TCP2_Demo_UnityDiffuseShader_mFC38158861DDEAFB13E92AEA9538239D8D39CD53(__this, /*hidden argument*/NULL);
		goto IL_06ad;
	}

IL_06a7:
	{
		// UpdateShader();
		TCP2_Demo_UpdateShader_m4541EC3313CF33CF1549C09F477857B6DE48C41F(__this, /*hidden argument*/NULL);
	}

IL_06ad:
	{
		// GUI.enabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)1, /*hidden argument*/NULL);
		// GUILayout.Space(10);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((10.0f), /*hidden argument*/NULL);
		// GUILayout.Label("Light Rotation");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_164;
		L_164 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteralE112731AEE6E840B814A256CB0B3BEE7C62EEE58, L_164, /*hidden argument*/NULL);
		// mLightRotationX = GUILayout.HorizontalSlider(mLightRotationX, 0f, 360f, GUILayout.Width(200f));
		float L_165 = __this->get_mLightRotationX_22();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_166 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_167 = L_166;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_168;
		L_168 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((200.0f), /*hidden argument*/NULL);
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, L_168);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_168);
		float L_169;
		L_169 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_165, (0.0f), (360.0f), L_167, /*hidden argument*/NULL);
		__this->set_mLightRotationX_22(L_169);
		// mLightRotationY = GUILayout.HorizontalSlider(mLightRotationY, 0f, 360f, GUILayout.Width(200f));
		float L_170 = __this->get_mLightRotationY_23();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_171 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_172 = L_171;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_173;
		L_173 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((200.0f), /*hidden argument*/NULL);
		NullCheck(L_172);
		ArrayElementTypeCheck (L_172, L_173);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_173);
		float L_174;
		L_174 = GUILayout_HorizontalSlider_m03D4AF69A1F1EA05236AB10FAD393580F2A3DC3D(L_170, (0.0f), (360.0f), L_172, /*hidden argument*/NULL);
		__this->set_mLightRotationY_23(L_174);
		// GUILayout.Space(4);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((4.0f), /*hidden argument*/NULL);
		// GUILayout.Label("Hold Left mouse button to rotate character", "SmallLabelShadow");
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_175;
		L_175 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_176;
		L_176 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF(_stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782, L_175, L_176, /*hidden argument*/NULL);
		// r = GUILayoutUtility.GetLastRect();
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_tC8DDF719E399EA119E2889EFB47816B34CA58F5A_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_177;
		L_177 = GUILayoutUtility_GetLastRect_m008A74AF10E8DA5DB4680782C088884E4CB56BB8(/*hidden argument*/NULL);
		V_0 = L_177;
		// GUI.Label(r, "Hold Left mouse button to rotate character", "SmallLabel");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_178 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_179;
		L_179 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, /*hidden argument*/NULL);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_178, _stringLiteralB012C3EFD67D7EBDDC616FC770347CA29BDB6782, L_179, /*hidden argument*/NULL);
		// GUILayout.Label("Hold Right/Middle mouse button to scroll", "SmallLabelShadow");
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_180;
		L_180 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_181;
		L_181 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF(_stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7, L_180, L_181, /*hidden argument*/NULL);
		// r = GUILayoutUtility.GetLastRect();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_182;
		L_182 = GUILayoutUtility_GetLastRect_m008A74AF10E8DA5DB4680782C088884E4CB56BB8(/*hidden argument*/NULL);
		V_0 = L_182;
		// GUI.Label(r, "Hold Right/Middle mouse button to scroll", "SmallLabel");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_183 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_184;
		L_184 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, /*hidden argument*/NULL);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_183, _stringLiteral687578E5DEA8E6F20E51390626FA51D3E4DFE8D7, L_184, /*hidden argument*/NULL);
		// GUILayout.Label("Use mouse scroll wheel or up/down keys to zoom", "SmallLabelShadow");
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_185;
		L_185 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral6401D48B6D46E41D3349B0B759FDFC600611A5F6, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_186;
		L_186 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m93AF505DE8D8EC39C3D62E64F486AB7B07D09BDF(_stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7, L_185, L_186, /*hidden argument*/NULL);
		// r = GUILayoutUtility.GetLastRect();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_187;
		L_187 = GUILayoutUtility_GetLastRect_m008A74AF10E8DA5DB4680782C088884E4CB56BB8(/*hidden argument*/NULL);
		V_0 = L_187;
		// GUI.Label(r, "Use mouse scroll wheel or up/down keys to zoom", "SmallLabel");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_188 = V_0;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_189;
		L_189 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral1C11ECE12488753320DBB41A15096982281DDBC2, /*hidden argument*/NULL);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_188, _stringLiteral28F6816E44407FAADA899AEA5F04EFCD3FAB7AF7, L_189, /*hidden argument*/NULL);
		// if (GUI.changed)
		bool L_190;
		L_190 = GUI_get_changed_m4CECD613B60F4ADCF5F4D36412CF78EFBDC25309(/*hidden argument*/NULL);
		if (!L_190)
		{
			goto IL_0811;
		}
	}
	{
		// var angle = DirLight.transform.eulerAngles;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_191 = __this->get_DirLight_7();
		NullCheck(L_191);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_192;
		L_192 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_191, /*hidden argument*/NULL);
		NullCheck(L_192);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		L_193 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_192, /*hidden argument*/NULL);
		V_1 = L_193;
		// angle.y = mLightRotationX;
		float L_194 = __this->get_mLightRotationX_22();
		(&V_1)->set_y_3(L_194);
		// angle.x = mLightRotationY;
		float L_195 = __this->get_mLightRotationY_23();
		(&V_1)->set_x_2(L_195);
		// DirLight.transform.eulerAngles = angle;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_196 = __this->get_DirLight_7();
		NullCheck(L_196);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_197;
		L_197 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_196, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_198 = V_1;
		NullCheck(L_197);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_197, L_198, /*hidden argument*/NULL);
	}

IL_0811:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UnityDiffuseShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UnityDiffuseShader_mFC38158861DDEAFB13E92AEA9538239D8D39CD53 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_0 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_1 = NULL;
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_2 = NULL;
	int32_t V_3 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_4 = NULL;
	{
		// var bumpedSpecular = Shader.Find("Bumped Specular");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0;
		L_0 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral29154FE89A1B873A89BEA6C949769EEE97803E8B, /*hidden argument*/NULL);
		V_0 = L_0;
		// var specular = Shader.Find("Specular");
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral32BC544C06225EE440679BE6646FFFE40FC36433, /*hidden argument*/NULL);
		V_1 = L_1;
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_2 = __this->get_AffectedMaterials_4();
		V_2 = L_2;
		V_3 = 0;
		goto IL_004f;
	}

IL_0021:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// if (m.name.Contains("Robot"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_8, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// m.shader = specular;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = V_4;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_11 = V_1;
		NullCheck(L_10);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_10, L_11, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_0043:
	{
		// m.shader = bumpedSpecular;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = V_4;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = V_0;
		NullCheck(L_12);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_12, L_13, /*hidden argument*/NULL);
	}

IL_004b:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004f:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_15 = V_3;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::UpdateShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_UpdateShader_m4541EC3313CF33CF1549C09F477857B6DE48C41F (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB491229C21663462214F90086EA80637221C891D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_4 = NULL;
	String_t* V_5 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_AffectedMaterials_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_010e;
	}

IL_000e:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// ToggleKeyword(m, mShaderSpecular, "TCP2_SPEC");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_2;
		bool L_6 = __this->get_mShaderSpecular_11();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_5, L_6, _stringLiteral055E2BC6FC0C0670695F60037D4D969590DD5A5E, /*hidden argument*/NULL);
		// if (!m.name.Contains("Robot"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_8, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		// ToggleKeyword(m, mShaderBump, "TCP2_BUMP");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = V_2;
		bool L_11 = __this->get_mShaderBump_12();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_10, L_11, _stringLiteralB491229C21663462214F90086EA80637221C891D, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// ToggleKeyword(m, mShaderReflection, "TCP2_REFLECTION_MASKED");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = V_2;
		bool L_13 = __this->get_mShaderReflection_13();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_12, L_13, _stringLiteral9C9DA00C6A4C83135AB9BFE5F7C7405FF12BFDCE, /*hidden argument*/NULL);
		// ToggleKeyword(m, mShaderRim, "TCP2_RIM");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = V_2;
		bool L_15 = __this->get_mShaderRim_14();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_14, L_15, _stringLiteralE0A9DCBA20570641426F54838A643EAB380B2A68, /*hidden argument*/NULL);
		// ToggleKeyword(m, mShaderRimOutline, "TCP2_RIMO");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = V_2;
		bool L_17 = __this->get_mShaderRimOutline_15();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_16, L_17, _stringLiteral851F9501FFDEDBC611D5201E456668A28E0C7F4B, /*hidden argument*/NULL);
		// ToggleKeyword(m, mShaderOutline, "OUTLINES");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = V_2;
		bool L_19 = __this->get_mShaderOutline_16();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_18, L_19, _stringLiteral47D462D5B38F0A5177ED612304E062E150044C2F, /*hidden argument*/NULL);
		// ToggleKeyword(m, mRampTextureFlag, "TCP2_RAMPTEXT");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = V_2;
		bool L_21 = __this->get_mRampTextureFlag_19();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_20, L_21, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, /*hidden argument*/NULL);
		// m.SetFloat("_RampSmooth", mRampSmoothing);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = V_2;
		float L_23 = __this->get_mRampSmoothing_21();
		NullCheck(L_22);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_22, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, L_23, /*hidden argument*/NULL);
		// m.SetTexture("_Ramp", mRampTexture);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = __this->get_mRampTexture_20();
		NullCheck(L_24);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_24, _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4, L_25, /*hidden argument*/NULL);
		// m.SetFloat("_RimMin", mRimMin);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = V_2;
		float L_27 = __this->get_mRimMin_17();
		NullCheck(L_26);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_26, _stringLiteralCDC886422BAB855E1C0DC224CFD18DFA8177AFD3, L_27, /*hidden argument*/NULL);
		// m.SetFloat("_RimMax", mRimMax);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = V_2;
		float L_29 = __this->get_mRimMax_18();
		NullCheck(L_28);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_28, _stringLiteral8C839559B342E65FDA330C50893C8E1D8EF83044, L_29, /*hidden argument*/NULL);
		// if (m.name.Contains("Robot"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = V_2;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_31, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_010a;
		}
	}
	{
		// ToggleKeyword(m, mRobotOutlineNormals, "TCP2_TANGENT_AS_NORMALS");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = V_2;
		bool L_34 = __this->get_mRobotOutlineNormals_25();
		TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA(__this, L_33, L_34, _stringLiteral1BF37DDC33378AF3F7797C5CBE660EF23525F5FB, /*hidden argument*/NULL);
	}

IL_010a:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_010e:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_36 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_38 = __this->get_AffectedMaterials_4();
		V_0 = L_38;
		V_1 = 0;
		goto IL_01cf;
	}

IL_0125:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_39 = V_0;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_3 = L_42;
		// var s = TCP2_RuntimeUtils.GetShaderWithKeywords(m);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TCP2_RuntimeUtils_t98E53D9A6E701236E6F2AD6B5895BA9BAFA1A818_il2cpp_TypeInfo_var);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_44;
		L_44 = TCP2_RuntimeUtils_GetShaderWithKeywords_m58B7E36376E15FB45F681A5CA62F75FF374ACC2F(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		// if (s == null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01c3;
		}
	}
	{
		// var keywords = "";
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var kw in m.shaderKeywords)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = V_3;
		NullCheck(L_47);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48;
		L_48 = Material_get_shaderKeywords_mDAD743C090C3CEE0B2883140B244853D71C5E9E0(L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		V_7 = 0;
		goto IL_016f;
	}

IL_0152:
	{
		// foreach (var kw in m.shaderKeywords)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = V_6;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		String_t* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_8 = L_52;
		// keywords += kw + ",";
		String_t* L_53 = V_5;
		String_t* L_54 = V_8;
		String_t* L_55;
		L_55 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_53, L_54, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		V_5 = L_55;
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_016f:
	{
		// foreach (var kw in m.shaderKeywords)
		int32_t L_57 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = V_6;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_0152;
		}
	}
	{
		// keywords = keywords.TrimEnd(',');
		String_t* L_59 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_60 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_59);
		String_t* L_62;
		L_62 = String_TrimEnd_mA98B5B9C45CCAB016F32F1C8BBE29A215B9D277E(L_59, L_61, /*hidden argument*/NULL);
		V_5 = L_62;
		// Debug.LogError("[TCP2 Demo] Can't find shader for keywords: \"" + keywords + "\" in material \"" + m.name + "\"\nThe missing shaders probably need to be unpacked. See TCP2 Documentation!");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA50D97192F1C2D71D3DCC3A3A0477343E7AD8D33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
		String_t* L_66 = V_5;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_65;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5BAF7D6521FA2008E03F9875363E8E944BF7F32E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_69 = V_3;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_70);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_70);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = L_68;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8DB6647FA7E3DEEBE82B44369CBDF2AF7192CBA3);
		String_t* L_72;
		L_72 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_72, /*hidden argument*/NULL);
		// }
		goto IL_01cb;
	}

IL_01c3:
	{
		// m.shader = s;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_73 = V_3;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_74 = V_4;
		NullCheck(L_73);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_73, L_74, /*hidden argument*/NULL);
	}

IL_01cb:
	{
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_01cf:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_76 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_77 = V_0;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))))
		{
			goto IL_0125;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RimOutlineColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RimOutlineColor_mDF85AB73BD9B9339B957FF61A666C00431AE021F (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_AffectedMaterials_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// m.SetColor("_RimColor", Color.black);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_4, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_7 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::RestoreRimColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_RestoreRimColors_m877F087A20B24CA184214A4186B2F1ED102D7E12 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral392A6984A677064B849A1004944E4A648C7301C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_2 = NULL;
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_0 = __this->get_AffectedMaterials_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_006f;
	}

IL_000b:
	{
		// foreach (var m in AffectedMaterials)
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (m.name.Contains("Robot"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = V_2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_6, _stringLiteral392A6984A677064B849A1004944E4A648C7301C8, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// m.SetColor("_RimColor", new Color(0.2f, 0.6f, 1f, 0.5f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_9), (0.200000003f), (0.600000024f), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_8, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_9, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0047:
	{
		// m.SetColor("_RimColor", new Color(1f, 1f, 1f, 0.25f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_11), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_10, _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, L_11, /*hidden argument*/NULL);
	}

IL_006b:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006f:
	{
		// foreach (var m in AffectedMaterials)
		int32_t L_13 = V_1;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_ToggleKeyword_mBBC3A87A9B0B4FD013C72B0D67B33692DE2202DA (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// m.EnableKeyword(keyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___m0;
		String_t* L_2 = ___keyword2;
		NullCheck(L_1);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		// m.DisableKeyword(keyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___m0;
		String_t* L_4 = ___keyword2;
		NullCheck(L_3);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PrevRamp_mD2CEFE1CB10E31FD11868556B9436CD1FE09DBCA (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var i = Array.IndexOf(RampTextures, mRampTexture);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_0 = __this->get_RampTextures_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = __this->get_mRampTexture_20();
		int32_t L_2;
		L_2 = Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B(L_0, L_1, /*hidden argument*/Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B_RuntimeMethod_var);
		V_0 = L_2;
		// i = Mathf.Clamp(i, 0, RampTextures.Length-1);
		int32_t L_3 = V_0;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_4 = __this->get_RampTextures_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		// i--;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		// if (i < 0)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// i = RampTextures.Length-1;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_8 = __this->get_RampTextures_5();
		NullCheck(L_8);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)1));
	}

IL_0037:
	{
		// mRampTexture = RampTextures[i];
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_9 = __this->get_RampTextures_5();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_mRampTexture_20(L_12);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_NextRamp_m6E8B49272BCB679A6071492EA23FD08BE0F5BDC0 (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var i = Array.IndexOf(RampTextures, mRampTexture);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_0 = __this->get_RampTextures_5();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = __this->get_mRampTexture_20();
		int32_t L_2;
		L_2 = Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B(L_0, L_1, /*hidden argument*/Array_IndexOf_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m546DFC1F671F7C492F796985A59235983196CA7B_RuntimeMethod_var);
		V_0 = L_2;
		// i = Mathf.Clamp(i, 0, RampTextures.Length-1);
		int32_t L_3 = V_0;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_4 = __this->get_RampTextures_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		// i++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// if (i >= RampTextures.Length)
		int32_t L_7 = V_0;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_8 = __this->get_RampTextures_5();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// i = 0;
		V_0 = 0;
	}

IL_0035:
	{
		// mRampTexture = RampTextures[i];
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_9 = __this->get_RampTextures_5();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_mRampTexture_20(L_12);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo__ctor_mD1C5CCFECE1503ABEC66B2AFF0ABF165A2C50E7E (TCP2_Demo_tD4466203A75DBB5FD53F869FA0216BC5B04C1142 * __this, const RuntimeMethod* method)
{
	{
		// private bool mShaderSpecular = true;
		__this->set_mShaderSpecular_11((bool)1);
		// private bool mShaderBump = true;
		__this->set_mShaderBump_12((bool)1);
		// private bool mShaderRim = true;
		__this->set_mShaderRim_14((bool)1);
		// private bool mShaderOutline = true;
		__this->set_mShaderOutline_16((bool)1);
		// private float mRimMin = 0.5f;
		__this->set_mRimMin_17((0.5f));
		// private float mRimMax = 1.0f;
		__this->set_mRimMax_18((1.0f));
		// private float mRampSmoothing = 0.15f;
		__this->set_mRampSmoothing_21((0.150000006f));
		// private float mLightRotationX = 80f;
		__this->set_mLightRotationX_22((80.0f));
		// private float mLightRotationY = 25f;
		__this->set_mLightRotationY_23((25.0f));
		// private bool mRobotOutlineNormals = true;
		__this->set_mRobotOutlineNormals_25((bool)1);
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
// System.Void TCP2_Demo_AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AutoRotate_Update_mF49B33AD0ABFE767A829913AD0D2091D1F124D5B (TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Rotate(axis, Time.deltaTime * Speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_axis_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get_Speed_5();
		NullCheck(L_0);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_0, L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TCP2_Demo_AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_AutoRotate__ctor_m59345A77265795174F76ADDD3627719F956E7DAC (TCP2_Demo_AutoRotate_t611ECC180412DC9B07778E3F0FF6ADC8FFAD4DDE * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 axis = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		__this->set_axis_4(L_0);
		// public float Speed = -50f;
		__this->set_Speed_5((-50.0f));
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_Awake_m9EE6A5FFF57B534F0EBC79AF0D081795239972BB (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method)
{
	{
		// mResetCamPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_mResetCamPos_23(L_1);
		// mResetCamRot = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		__this->set_mResetCamRot_25(L_3);
		// mResetPivotPos = Pivot.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_Pivot_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_mResetPivotPos_24(L_5);
		// mResetPivotRot = Pivot.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_Pivot_4();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		__this->set_mResetPivotRot_26(L_7);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_OnEnable_m6AE621C683673669CFDD833D8735AFCE68811123 (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method)
{
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_15(L_0);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_Update_m270FB25AAADF713134C9B8C1D777C9B56558D819 (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_mouseDelta_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_mouseDelta_15(L_2);
		// mouseDelta.x = Mathf.Clamp(mouseDelta.x, -150f, 150f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_mouseDelta_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_mouseDelta_15();
		float L_5 = L_4->get_x_2();
		float L_6;
		L_6 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_5, (-150.0f), (150.0f), /*hidden argument*/NULL);
		L_3->set_x_2(L_6);
		// mouseDelta.y = Mathf.Clamp(mouseDelta.y, -150f, 150f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_mouseDelta_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_mouseDelta_15();
		float L_9 = L_8->get_y_3();
		float L_10;
		L_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_9, (-150.0f), (150.0f), /*hidden argument*/NULL);
		L_7->set_y_3(L_10);
		// var ignoreMouse = ignoreMouseRect.rect.Contains(Input.mousePosition);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get_ignoreMouseRect_14();
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		bool L_14;
		L_14 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// if (Input.GetMouseButtonDown(0))
		bool L_15;
		L_15 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// leftMouseHeld = !ignoreMouse;
		bool L_16 = V_0;
		__this->set_leftMouseHeld_27((bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0));
		goto IL_00a4;
	}

IL_008d:
	{
		// else if (Input.GetMouseButtonUp(0) || !Input.GetMouseButton(0))
		bool L_17;
		L_17 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_009d;
		}
	}
	{
		bool L_18;
		L_18 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00a4;
		}
	}

IL_009d:
	{
		// leftMouseHeld = false;
		__this->set_leftMouseHeld_27((bool)0);
	}

IL_00a4:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_19;
		L_19 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// rightMouseHeld = !ignoreMouse;
		bool L_20 = V_0;
		__this->set_rightMouseHeld_28((bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0));
		goto IL_00cf;
	}

IL_00b8:
	{
		// else if (Input.GetMouseButtonUp(1) || !Input.GetMouseButton(1))
		bool L_21;
		L_21 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00c8;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00cf;
		}
	}

IL_00c8:
	{
		// rightMouseHeld = false;
		__this->set_rightMouseHeld_28((bool)0);
	}

IL_00cf:
	{
		// if (Input.GetMouseButtonDown(2))
		bool L_23;
		L_23 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(2, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00e3;
		}
	}
	{
		// middleMouseHeld = !ignoreMouse;
		bool L_24 = V_0;
		__this->set_middleMouseHeld_29((bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0));
		goto IL_00fa;
	}

IL_00e3:
	{
		// else if (Input.GetMouseButtonUp(2) || !Input.GetMouseButton(2))
		bool L_25;
		L_25 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(2, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00fa;
		}
	}

IL_00f3:
	{
		// middleMouseHeld = false;
		__this->set_middleMouseHeld_29((bool)0);
	}

IL_00fa:
	{
		// if (leftMouseHeld)
		bool L_27 = __this->get_leftMouseHeld_27();
		if (!L_27)
		{
			goto IL_016b;
		}
	}
	{
		// orbitAcceleration.x += Mathf.Clamp(mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_orbitAcceleration_16();
		float* L_29 = L_28->get_address_of_x_2();
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_mouseDelta_15();
		float L_33 = L_32->get_x_2();
		float L_34 = __this->get_OrbitStrg_5();
		float L_35 = __this->get_OrbitClamp_6();
		float L_36 = __this->get_OrbitClamp_6();
		float L_37;
		L_37 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_33, (float)L_34)), ((-L_35)), L_36, /*hidden argument*/NULL);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_31, (float)L_37));
		// orbitAcceleration.y += Mathf.Clamp(-mouseDelta.y * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_orbitAcceleration_16();
		float* L_39 = L_38->get_address_of_y_3();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = __this->get_address_of_mouseDelta_15();
		float L_43 = L_42->get_y_3();
		float L_44 = __this->get_OrbitStrg_5();
		float L_45 = __this->get_OrbitClamp_6();
		float L_46 = __this->get_OrbitClamp_6();
		float L_47;
		L_47 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((-L_43)), (float)L_44)), ((-L_45)), L_46, /*hidden argument*/NULL);
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)L_47));
		// }
		goto IL_01e2;
	}

IL_016b:
	{
		// else if (middleMouseHeld || rightMouseHeld)
		bool L_48 = __this->get_middleMouseHeld_29();
		if (L_48)
		{
			goto IL_017b;
		}
	}
	{
		bool L_49 = __this->get_rightMouseHeld_28();
		if (!L_49)
		{
			goto IL_01e2;
		}
	}

IL_017b:
	{
		// var str = Mathf.Lerp(PanStrgMin, PanStrgMax, Mathf.Clamp01((zoomDistance-ZoomDistMin)/(ZoomDistMax-ZoomDistMin)));
		float L_50 = __this->get_PanStrgMin_7();
		float L_51 = __this->get_PanStrgMax_8();
		float L_52 = __this->get_zoomDistance_20();
		float L_53 = __this->get_ZoomDistMin_11();
		float L_54 = __this->get_ZoomDistMax_12();
		float L_55 = __this->get_ZoomDistMin_11();
		float L_56;
		L_56 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_subtract((float)L_52, (float)L_53))/(float)((float)il2cpp_codegen_subtract((float)L_54, (float)L_55)))), /*hidden argument*/NULL);
		float L_57;
		L_57 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_50, L_51, L_56, /*hidden argument*/NULL);
		V_4 = L_57;
		// panAcceleration.x = -mouseDelta.x * str;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = __this->get_address_of_panAcceleration_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_59 = __this->get_address_of_mouseDelta_15();
		float L_60 = L_59->get_x_2();
		float L_61 = V_4;
		L_58->set_x_2(((float)il2cpp_codegen_multiply((float)((-L_60)), (float)L_61)));
		// panAcceleration.y = -mouseDelta.y * str;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_62 = __this->get_address_of_panAcceleration_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_63 = __this->get_address_of_mouseDelta_15();
		float L_64 = L_63->get_y_3();
		float L_65 = V_4;
		L_62->set_y_3(((float)il2cpp_codegen_multiply((float)((-L_64)), (float)L_65)));
	}

IL_01e2:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_66;
		L_66 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01f1;
		}
	}
	{
		// ResetView();
		TCP2_Demo_Camera_ResetView_mA64D01C4B48EB2021658C8AC29D30A7B91813637(__this, /*hidden argument*/NULL);
	}

IL_01f1:
	{
		// var angle = transform.localEulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_67, /*hidden argument*/NULL);
		V_1 = L_68;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_1;
		float L_70 = L_69.get_x_2();
		if ((!(((float)L_70) < ((float)(180.0f)))))
		{
			goto IL_0239;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71 = V_1;
		float L_72 = L_71.get_x_2();
		if ((!(((float)L_72) >= ((float)(60.0f)))))
		{
			goto IL_0239;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_73 = __this->get_address_of_orbitAcceleration_16();
		float L_74 = L_73->get_y_3();
		if ((!(((float)L_74) > ((float)(0.0f)))))
		{
			goto IL_0239;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_75 = __this->get_address_of_orbitAcceleration_16();
		L_75->set_y_3((0.0f));
	}

IL_0239:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_1;
		float L_77 = L_76.get_x_2();
		if ((!(((float)L_77) > ((float)(180.0f)))))
		{
			goto IL_0275;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78 = V_1;
		float L_79 = L_78.get_x_2();
		if ((!(((float)L_79) <= ((float)(300.0f)))))
		{
			goto IL_0275;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_80 = __this->get_address_of_orbitAcceleration_16();
		float L_81 = L_80->get_y_3();
		if ((!(((float)L_81) < ((float)(0.0f)))))
		{
			goto IL_0275;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_82 = __this->get_address_of_orbitAcceleration_16();
		L_82->set_y_3((0.0f));
	}

IL_0275:
	{
		// transform.RotateAround(Pivot.position, transform.right, orbitAcceleration.y * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = __this->get_Pivot_4();
		NullCheck(L_84);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
		L_85 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_84, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_86);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_86, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_88 = __this->get_address_of_orbitAcceleration_16();
		float L_89 = L_88->get_y_3();
		float L_90;
		L_90 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_83, L_85, L_87, ((float)il2cpp_codegen_multiply((float)L_89, (float)L_90)), /*hidden argument*/NULL);
		// transform.RotateAround(Pivot.position, Vector3.up, orbitAcceleration.x * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92 = __this->get_Pivot_4();
		NullCheck(L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_92, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_95 = __this->get_address_of_orbitAcceleration_16();
		float L_96 = L_95->get_x_2();
		float L_97;
		L_97 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_91);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_91, L_93, L_94, ((float)il2cpp_codegen_multiply((float)L_96, (float)L_97)), /*hidden argument*/NULL);
		// Pivot.Translate(panAcceleration * Time.deltaTime, transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98 = __this->get_Pivot_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99 = __this->get_panAcceleration_17();
		float L_100;
		L_100 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		L_101 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_99, L_100, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_98);
		Transform_Translate_m3B18F08276BB86827D21F01E099B74FD6AD80800(L_98, L_101, L_102, /*hidden argument*/NULL);
		// transform.Translate(panAcceleration * Time.deltaTime, transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
		L_103 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = __this->get_panAcceleration_17();
		float L_105;
		L_105 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_104, L_105, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_107;
		L_107 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_103);
		Transform_Translate_m3B18F08276BB86827D21F01E099B74FD6AD80800(L_103, L_106, L_107, /*hidden argument*/NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_108;
		L_108 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_2 = L_108;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_109 = __this->get_zoomAcceleration_19();
		float L_110 = V_2;
		float L_111 = __this->get_ZoomStrg_9();
		__this->set_zoomAcceleration_19(((float)il2cpp_codegen_add((float)L_109, (float)((float)il2cpp_codegen_multiply((float)L_110, (float)L_111)))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_112 = __this->get_zoomAcceleration_19();
		float L_113 = __this->get_ZoomClamp_10();
		float L_114 = __this->get_ZoomClamp_10();
		float L_115;
		L_115 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_112, ((-L_113)), L_114, /*hidden argument*/NULL);
		__this->set_zoomAcceleration_19(L_115);
		// zoomDistance = Vector3.Distance(transform.position, Pivot.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116;
		L_116 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_116);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		L_117 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_116, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118 = __this->get_Pivot_4();
		NullCheck(L_118);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		L_119 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_118, /*hidden argument*/NULL);
		float L_120;
		L_120 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_117, L_119, /*hidden argument*/NULL);
		__this->set_zoomDistance_20(L_120);
		// if ((zoomDistance >= ZoomDistMin && zoomAcceleration > 0) || (zoomDistance <= ZoomDistMax && zoomAcceleration < 0))
		float L_121 = __this->get_zoomDistance_20();
		float L_122 = __this->get_ZoomDistMin_11();
		if ((!(((float)L_121) >= ((float)L_122))))
		{
			goto IL_038f;
		}
	}
	{
		float L_123 = __this->get_zoomAcceleration_19();
		if ((((float)L_123) > ((float)(0.0f))))
		{
			goto IL_03aa;
		}
	}

IL_038f:
	{
		float L_124 = __this->get_zoomDistance_20();
		float L_125 = __this->get_ZoomDistMax_12();
		if ((!(((float)L_124) <= ((float)L_125))))
		{
			goto IL_03d0;
		}
	}
	{
		float L_126 = __this->get_zoomAcceleration_19();
		if ((!(((float)L_126) < ((float)(0.0f)))))
		{
			goto IL_03d0;
		}
	}

IL_03aa:
	{
		// transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_129 = __this->get_zoomAcceleration_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_128, L_129, /*hidden argument*/NULL);
		float L_131;
		L_131 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_130, L_131, /*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_127, L_132, 1, /*hidden argument*/NULL);
	}

IL_03d0:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = __this->get_orbitAcceleration_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		L_134 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_135 = __this->get_Decceleration_13();
		float L_136;
		L_136 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137;
		L_137 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_133, L_134, ((float)il2cpp_codegen_multiply((float)L_135, (float)L_136)), /*hidden argument*/NULL);
		__this->set_orbitAcceleration_16(L_137);
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = __this->get_panAcceleration_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_140 = __this->get_Decceleration_13();
		float L_141;
		L_141 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_138, L_139, ((float)il2cpp_codegen_multiply((float)L_140, (float)L_141)), /*hidden argument*/NULL);
		__this->set_panAcceleration_17(L_142);
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_143 = __this->get_zoomAcceleration_19();
		float L_144 = __this->get_Decceleration_13();
		float L_145;
		L_145 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_146;
		L_146 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_143, (0.0f), ((float)il2cpp_codegen_multiply((float)L_144, (float)L_145)), /*hidden argument*/NULL);
		__this->set_zoomAcceleration_19(L_146);
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147 = __this->get_moveAcceleration_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148;
		L_148 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_149 = __this->get_Decceleration_13();
		float L_150;
		L_150 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		L_151 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_147, L_148, ((float)il2cpp_codegen_multiply((float)L_149, (float)L_150)), /*hidden argument*/NULL);
		__this->set_moveAcceleration_18(L_151);
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_15(L_152);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera_ResetView_mA64D01C4B48EB2021658C8AC29D30A7B91813637 (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method)
{
	{
		// moveAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_moveAcceleration_18(L_0);
		// orbitAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_orbitAcceleration_16(L_1);
		// panAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_panAcceleration_17(L_2);
		// zoomAcceleration = 0f;
		__this->set_zoomAcceleration_19((0.0f));
		// transform.position = mResetCamPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_mResetCamPos_23();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_4, /*hidden argument*/NULL);
		// transform.eulerAngles = mResetCamRot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_mResetCamRot_25();
		NullCheck(L_5);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_5, L_6, /*hidden argument*/NULL);
		// Pivot.position = mResetPivotPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_Pivot_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_mResetPivotPos_24();
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
		// Pivot.eulerAngles = mResetPivotRot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_Pivot_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_mResetPivotRot_26();
		NullCheck(L_9);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Camera__ctor_mEC9AB05B7C160C2BE2761FEE7CCDCC2CB803A9B4 (TCP2_Demo_Camera_t937FBB2DC5B055B89D6F71254F16A86AC185EFBB * __this, const RuntimeMethod* method)
{
	{
		// public float OrbitStrg = 3f;
		__this->set_OrbitStrg_5((3.0f));
		// public float OrbitClamp = 50f;
		__this->set_OrbitClamp_6((50.0f));
		// public float PanStrgMin = 0.1f;
		__this->set_PanStrgMin_7((0.100000001f));
		// public float PanStrgMax = 0.5f;
		__this->set_PanStrgMax_8((0.5f));
		// public float ZoomStrg = 40f;
		__this->set_ZoomStrg_9((40.0f));
		// public float ZoomClamp = 30f;
		__this->set_ZoomClamp_10((30.0f));
		// public float ZoomDistMin = 1f;
		__this->set_ZoomDistMin_11((1.0f));
		// public float ZoomDistMax = 2f;
		__this->set_ZoomDistMax_12((2.0f));
		// public float Decceleration = 8f;
		__this->set_Decceleration_13((8.0f));
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
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotateLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m9259F09C910D62F42E8B15FAC748989506EF2021 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = __this->get_U3CrotateLightsU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotateLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4ADB805A8DEB2F2D60F4E6DD77C058D44613D6F8 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrotateLightsU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_Cat::get_rotatePointLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_m7F5CA31EF08389D8542F79CCDDD1A5049E2CA020 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = __this->get_U3CrotatePointLightsU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::set_rotatePointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_mE775ADB148AB1FC2EC6C4650E1D74D6758F047A6 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrotatePointLightsU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_Awake_mFC197EC6E7AFAA3EE50115D00E0BE2F26134D684 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// rotatePointLights = true;
		TCP2_Demo_Cat_set_rotatePointLights_mE775ADB148AB1FC2EC6C4650E1D74D6758F047A6_inline(__this, (bool)1, /*hidden argument*/NULL);
		// rotateLights = false;
		TCP2_Demo_Cat_set_rotateLights_m4ADB805A8DEB2F2D60F4E6DD77C058D44613D6F8_inline(__this, (bool)0, /*hidden argument*/NULL);
		// SetAmbience(0);
		TCP2_Demo_Cat_SetAmbience_mCAD7DC5F14DAFC4E3CFEDBEBB2ED214C8C44EDC3(__this, 0, /*hidden argument*/NULL);
		// SetStyle(0);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 0, /*hidden argument*/NULL);
		// SetCat(true);
		TCP2_Demo_Cat_SetCat_m3CC826543A30C9CB82C06DE847749CC576DCFA61(__this, (bool)1, /*hidden argument*/NULL);
		// SetFlat(false);
		TCP2_Demo_Cat_SetFlat_m78DFBFD770CB696FE51FBBCA5B76FE48AE8F56DC(__this, (bool)0, /*hidden argument*/NULL);
		// SetAnimation(0);
		TCP2_Demo_Cat_SetAnimation_m5EA943B4F026D809AD107E937B2CF4C40A51F169(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_Update_mD9968674BBD0B3DDDB4A90A82B330154CA8D1E87 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (rotateLights)
		bool L_0;
		L_0 = TCP2_Demo_Cat_get_rotateLights_m9259F09C910D62F42E8B15FAC748989506EF2021_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// foreach (var l in dirLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_1 = __this->get_dirLights_21();
		V_0 = L_1;
		V_1 = 0;
		goto IL_003e;
	}

IL_0013:
	{
		// foreach (var l in dirLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// l.transform.Rotate(Vector3.up * Time.deltaTime * -30f, Space.World);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (-30.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_6, L_10, 0, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003e:
	{
		// foreach (var l in dirLights)
		int32_t L_12 = V_1;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_0044:
	{
		// if (rotatePointLights)
		bool L_14;
		L_14 = TCP2_Demo_Cat_get_rotatePointLights_m7F5CA31EF08389D8542F79CCDDD1A5049E2CA020_inline(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// rotatingPointLights.transform.Rotate(Vector3.up * 50f * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_rotatingPointLights_23();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, (50.0f), /*hidden argument*/NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_16, L_20, 0, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// if (Input.GetKeyDown(KeyCode.Tab))
		bool L_21;
		L_21 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)9), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c7;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
		bool L_22;
		L_22 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0097;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)303), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b0;
		}
	}

IL_0097:
	{
		// SetStyle(--style);
		int32_t L_24 = __this->get_style_7();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		int32_t L_25 = V_1;
		__this->set_style_7(L_25);
		int32_t L_26 = V_1;
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, L_26, /*hidden argument*/NULL);
		goto IL_00c7;
	}

IL_00b0:
	{
		// SetStyle(++style);
		int32_t L_27 = __this->get_style_7();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_1;
		__this->set_style_7(L_28);
		int32_t L_29 = V_1;
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, L_29, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1) || Input.GetKeyDown(KeyCode.Keypad1))
		bool L_30;
		L_30 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)49), /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00dc;
		}
	}
	{
		bool L_31;
		L_31 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)257), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00e3;
		}
	}

IL_00dc:
	{
		// SetStyle(0);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 0, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2) || Input.GetKeyDown(KeyCode.Keypad2))
		bool L_32;
		L_32 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)50), /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_33;
		L_33 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)258), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ff;
		}
	}

IL_00f8:
	{
		// SetStyle(1);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 1, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3) || Input.GetKeyDown(KeyCode.Keypad3))
		bool L_34;
		L_34 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)51), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0114;
		}
	}
	{
		bool L_35;
		L_35 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)259), /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_011b;
		}
	}

IL_0114:
	{
		// SetStyle(2);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 2, /*hidden argument*/NULL);
	}

IL_011b:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4) || Input.GetKeyDown(KeyCode.Keypad4))
		bool L_36;
		L_36 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)52), /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0130;
		}
	}
	{
		bool L_37;
		L_37 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)260), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0137;
		}
	}

IL_0130:
	{
		// SetStyle(3);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 3, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5) || Input.GetKeyDown(KeyCode.Keypad5))
		bool L_38;
		L_38 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)53), /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_014c;
		}
	}
	{
		bool L_39;
		L_39 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)261), /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0153;
		}
	}

IL_014c:
	{
		// SetStyle(4);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 4, /*hidden argument*/NULL);
	}

IL_0153:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha6) || Input.GetKeyDown(KeyCode.Keypad6))
		bool L_40;
		L_40 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)54), /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0168;
		}
	}
	{
		bool L_41;
		L_41 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)262), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_016f;
		}
	}

IL_0168:
	{
		// SetStyle(5);
		TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B(__this, 5, /*hidden argument*/NULL);
	}

IL_016f:
	{
		// if (Input.GetKeyDown(KeyCode.H))
		bool L_42;
		L_42 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)104), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0191;
		}
	}
	{
		// canvas.enabled = !canvas.enabled;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_43 = __this->get_canvas_31();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_44 = __this->get_canvas_31();
		NullCheck(L_44);
		bool L_45;
		L_45 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_43, (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0191:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAmbience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAmbience_mCAD7DC5F14DAFC4E3CFEDBEBB2ED214C8C44EDC3 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * V_0 = NULL;
	AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* V_1 = NULL;
	int32_t V_2 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B12_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B13_1 = NULL;
	{
		// foreach (var a in ambiences)
		AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* L_0 = __this->get_ambiences_4();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0034;
	}

IL_000b:
	{
		// foreach (var a in ambiences)
		AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (var g in a.activate)
		NullCheck(L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4->get_activate_1();
		V_3 = L_5;
		V_4 = 0;
		goto IL_0029;
	}

IL_0019:
	{
		// foreach (var g in a.activate)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// g.SetActive(false);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0029:
	{
		// foreach (var g in a.activate)
		int32_t L_11 = V_4;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0034:
	{
		// foreach (var a in ambiences)
		int32_t L_14 = V_2;
		AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// amb = index % ambiences.Length;
		int32_t L_16 = ___index0;
		AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* L_17 = __this->get_ambiences_4();
		NullCheck(L_17);
		__this->set_amb_5(((int32_t)((int32_t)L_16%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))));
		// var current = ambiences[amb];
		AmbienceU5BU5D_t0CB13D8DAA8F7F7A34D90457BD420DE45E70F63F* L_18 = __this->get_ambiences_4();
		int32_t L_19 = __this->get_amb_5();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = L_21;
		// foreach (var g in current.activate)
		Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * L_22 = V_0;
		NullCheck(L_22);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = L_22->get_activate_1();
		V_3 = L_23;
		V_2 = 0;
		goto IL_0070;
	}

IL_0063:
	{
		// foreach (var g in current.activate)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = V_3;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		// g.SetActive(true);
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0070:
	{
		// foreach (var g in current.activate)
		int32_t L_29 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		// RenderSettings.skybox = current.skybox;
		Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * L_31 = V_0;
		NullCheck(L_31);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = L_31->get_skybox_2();
		RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_32, /*hidden argument*/NULL);
		// DynamicGI.UpdateEnvironment();
		DynamicGI_UpdateEnvironment_m1834BA636911736CCD70FE2B6B1310ABC5165AB2(/*hidden argument*/NULL);
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		V_5 = 0;
		goto IL_00c9;
	}

IL_008b:
	{
		// var colors = ambiencesButtons[i].colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_33 = __this->get_ambiencesButtons_26();
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_37;
		L_37 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_38 = V_5;
		int32_t L_39 = ___index0;
		G_B11_0 = (&V_6);
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			G_B12_0 = (&V_6);
			goto IL_00a9;
		}
	}
	{
		G_B13_0 = (0.600000024f);
		G_B13_1 = G_B11_0;
		goto IL_00ae;
	}

IL_00a9:
	{
		G_B13_0 = (0.959999979f);
		G_B13_1 = G_B12_0;
	}

IL_00ae:
	{
		ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)G_B13_1, G_B13_0, /*hidden argument*/NULL);
		// ambiencesButtons[i].colors = colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_40 = __this->get_ambiencesButtons_26();
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_44 = V_6;
		NullCheck(L_43);
		Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621(L_43, L_44, /*hidden argument*/NULL);
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00c9:
	{
		// for (var i = 0; i < ambiencesButtons.Length; i++)
		int32_t L_46 = V_5;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_47 = __this->get_ambiencesButtons_26();
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_008b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetStyle_mF518E372B3FCD7662BBF507E81B04CCEEB09712B (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* V_0 = NULL;
	int32_t V_1 = 0;
	CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * V_2 = NULL;
	RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_6;
	memset((&V_6), 0, sizeof(V_6));
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B13_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B12_0 = NULL;
	float G_B14_0 = 0.0f;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B14_1 = NULL;
	{
		// if (index < 0)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// index = styles.Length-1;
		ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* L_1 = __this->get_styles_6();
		NullCheck(L_1);
		___index0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1));
	}

IL_0010:
	{
		// if (index >= styles.Length)
		int32_t L_2 = ___index0;
		ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* L_3 = __this->get_styles_6();
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// index = 0;
		___index0 = 0;
	}

IL_001e:
	{
		// style = index;
		int32_t L_4 = ___index0;
		__this->set_style_7(L_4);
		// var s = styles[style];
		ShaderStyleU5BU5D_t7AE12B06115180766EC56FA1519B420914DF7AC9* L_5 = __this->get_styles_6();
		int32_t L_6 = __this->get_style_7();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		// foreach (var setting in s.settings)
		NullCheck(L_8);
		CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* L_9 = L_8->get_settings_1();
		V_0 = L_9;
		V_1 = 0;
		goto IL_006c;
	}

IL_003c:
	{
		// foreach (var setting in s.settings)
		CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// foreach (var r in setting.renderers)
		CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * L_14 = V_2;
		NullCheck(L_14);
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_15 = L_14->get_renderers_1();
		V_3 = L_15;
		V_4 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		// foreach (var r in setting.renderers)
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_16 = V_3;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// r.sharedMaterial = setting.material;
		CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * L_20 = V_2;
		NullCheck(L_20);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = L_20->get_material_0();
		NullCheck(L_19);
		Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_19, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0061:
	{
		// foreach (var r in setting.renderers)
		int32_t L_23 = V_4;
		RendererU5BU5D_tE2D3C4350893C593CA40DE876B9F2F0EBBEC49B7* L_24 = V_3;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006c:
	{
		// foreach (var setting in s.settings)
		int32_t L_26 = V_1;
		CharacterSettingsU5BU5D_t77D28FAECC59898A778924610E2C9BB08FB8B1F1* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_003c;
		}
	}
	{
		// for (var i = 0; i < stylesButtons.Length; i++)
		V_5 = 0;
		goto IL_00b5;
	}

IL_0077:
	{
		// var colors = stylesButtons[i].colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_28 = __this->get_stylesButtons_27();
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_32;
		L_32 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_33 = V_5;
		int32_t L_34 = ___index0;
		G_B12_0 = (&V_6);
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			G_B13_0 = (&V_6);
			goto IL_0095;
		}
	}
	{
		G_B14_0 = (0.600000024f);
		G_B14_1 = G_B12_0;
		goto IL_009a;
	}

IL_0095:
	{
		G_B14_0 = (0.959999979f);
		G_B14_1 = G_B13_0;
	}

IL_009a:
	{
		ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)G_B14_1, G_B14_0, /*hidden argument*/NULL);
		// stylesButtons[i].colors = colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_35 = __this->get_stylesButtons_27();
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_39 = V_6;
		NullCheck(L_38);
		Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621(L_38, L_39, /*hidden argument*/NULL);
		// for (var i = 0; i < stylesButtons.Length; i++)
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00b5:
	{
		// for (var i = 0; i < stylesButtons.Length; i++)
		int32_t L_41 = V_5;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_42 = __this->get_stylesButtons_27();
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetFlat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetFlat_m78DFBFD770CB696FE51FBBCA5B76FE48AE8F56DC (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___flat0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_2;
	memset((&V_2), 0, sizeof(V_2));
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B3_0 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B4_1 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B7_0 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B8_1 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B14_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B11_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B13_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B12_0 = NULL;
	float G_B15_0 = 0.0f;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B15_1 = NULL;
	{
		// bool isCat = !unityChanCopyright.activeInHierarchy;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_unityChanCopyright_14();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		// if (isCat)
		if (!((((int32_t)L_1) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0036;
		}
	}
	{
		// var anim = catAnimation[flat ? 0 : 1];
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_2 = __this->get_catAnimation_10();
		bool L_3 = ___flat0;
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_001d:
	{
		NullCheck(G_B4_1);
		int32_t L_4 = G_B4_0;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_5 = (G_B4_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// currentTime = anim[anim.clip.name].normalizedTime;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_6 = L_5;
		NullCheck(L_6);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_7;
		L_7 = Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_9;
		L_9 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10;
		L_10 = AnimationState_get_normalizedTime_m8A2339D72C9BE34C50F12233D21DF45347210520(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// }
		goto IL_005a;
	}

IL_0036:
	{
		// var anim = unityChanAnimation[flat ? 0 : 1];
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_11 = __this->get_unityChanAnimation_11();
		bool L_12 = ___flat0;
		G_B6_0 = L_11;
		if (L_12)
		{
			G_B7_0 = L_11;
			goto IL_0042;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0043:
	{
		NullCheck(G_B8_1);
		int32_t L_13 = G_B8_0;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_14 = (G_B8_1)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		// currentTime = anim[anim.clip.name].normalizedTime;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_15 = L_14;
		NullCheck(L_15);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_16;
		L_16 = Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_18;
		L_18 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_19;
		L_19 = AnimationState_get_normalizedTime_m8A2339D72C9BE34C50F12233D21DF45347210520(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_005a:
	{
		// shadedGroup.SetActive(!flat);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_shadedGroup_8();
		bool L_21 = ___flat0;
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// flatGroup.SetActive(flat);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_flatGroup_9();
		bool L_23 = ___flat0;
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, L_23, /*hidden argument*/NULL);
		// PlayCurrentAnimation(currentTime);
		float L_24 = V_0;
		TCP2_Demo_Cat_PlayCurrentAnimation_mC30B0E3691E80AB8402E0A689EFBDDC23C93652D(__this, L_24, /*hidden argument*/NULL);
		// for (var i = 0; i < textureButtons.Length; i++)
		V_1 = 0;
		goto IL_00c1;
	}

IL_0080:
	{
		// var colors = textureButtons[i].colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_25 = __this->get_textureButtons_29();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_29;
		L_29 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		// colors.colorMultiplier = (i == 1 && flat) || (i == 0 && !flat) ? 0.96f : 0.6f;
		int32_t L_30 = V_1;
		bool L_31 = ___flat0;
		G_B11_0 = (&V_2);
		if (((int32_t)((int32_t)((((int32_t)L_30) == ((int32_t)1))? 1 : 0)&(int32_t)L_31)))
		{
			G_B14_0 = (&V_2);
			goto IL_00a5;
		}
	}
	{
		int32_t L_32 = V_1;
		G_B12_0 = G_B11_0;
		if (L_32)
		{
			G_B13_0 = G_B11_0;
			goto IL_009e;
		}
	}
	{
		bool L_33 = ___flat0;
		G_B13_0 = G_B12_0;
		if (!L_33)
		{
			G_B14_0 = G_B12_0;
			goto IL_00a5;
		}
	}

IL_009e:
	{
		G_B15_0 = (0.600000024f);
		G_B15_1 = G_B13_0;
		goto IL_00aa;
	}

IL_00a5:
	{
		G_B15_0 = (0.959999979f);
		G_B15_1 = G_B14_0;
	}

IL_00aa:
	{
		ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)G_B15_1, G_B15_0, /*hidden argument*/NULL);
		// textureButtons[i].colors = colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_34 = __this->get_textureButtons_29();
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_38 = V_2;
		NullCheck(L_37);
		Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621(L_37, L_38, /*hidden argument*/NULL);
		// for (var i = 0; i < textureButtons.Length; i++)
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00c1:
	{
		// for (var i = 0; i < textureButtons.Length; i++)
		int32_t L_40 = V_1;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_41 = __this->get_textureButtons_29();
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0080;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetCat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetCat_m3CC826543A30C9CB82C06DE847749CC576DCFA61 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___cat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B15_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B12_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B14_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B13_0 = NULL;
	float G_B16_0 = 0.0f;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B16_1 = NULL;
	{
		// foreach (var c in cats)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_cats_12();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var c in cats)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// c.SetActive(cat);
		bool L_5 = ___cat0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		// foreach (var c in cats)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var u in unityChans)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_unityChans_13();
		V_0 = L_9;
		V_1 = 0;
		goto IL_0039;
	}

IL_0029:
	{
		// foreach (var u in unityChans)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// u.SetActive(!cat);
		bool L_14 = ___cat0;
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0039:
	{
		// foreach (var u in unityChans)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// if (unityChanDirLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_18 = __this->get_unityChanDirLight_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0061;
		}
	}
	{
		// unityChanDirLight.gameObject.SetActive(!cat);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_20 = __this->get_unityChanDirLight_16();
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		bool L_22 = ___cat0;
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (catDirLight != null)
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_23 = __this->get_catDirLight_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0080;
		}
	}
	{
		// catDirLight.gameObject.SetActive(cat);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_25 = __this->get_catDirLight_15();
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		bool L_27 = ___cat0;
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, L_27, /*hidden argument*/NULL);
	}

IL_0080:
	{
		// unityChanCopyright.SetActive(!cat);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_unityChanCopyright_14();
		bool L_29 = ___cat0;
		NullCheck(L_28);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_28, (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// PlayCurrentAnimation();
		TCP2_Demo_Cat_PlayCurrentAnimation_mC30B0E3691E80AB8402E0A689EFBDDC23C93652D(__this, (-1.0f), /*hidden argument*/NULL);
		// for (var i = 0; i < characterButtons.Length; i++)
		V_2 = 0;
		goto IL_00e0;
	}

IL_009e:
	{
		// var colors = characterButtons[i].colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_30 = __this->get_characterButtons_28();
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_34;
		L_34 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		// colors.colorMultiplier = (i == 0 && cat) || (i == 1 && !cat) ? 0.96f : 0.6f;
		int32_t L_35 = V_2;
		bool L_36 = ___cat0;
		G_B12_0 = (&V_3);
		if (((int32_t)((int32_t)((((int32_t)L_35) == ((int32_t)0))? 1 : 0)&(int32_t)L_36)))
		{
			G_B15_0 = (&V_3);
			goto IL_00c4;
		}
	}
	{
		int32_t L_37 = V_2;
		G_B13_0 = G_B12_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			G_B14_0 = G_B12_0;
			goto IL_00bd;
		}
	}
	{
		bool L_38 = ___cat0;
		G_B14_0 = G_B13_0;
		if (!L_38)
		{
			G_B15_0 = G_B13_0;
			goto IL_00c4;
		}
	}

IL_00bd:
	{
		G_B16_0 = (0.600000024f);
		G_B16_1 = G_B14_0;
		goto IL_00c9;
	}

IL_00c4:
	{
		G_B16_0 = (0.959999979f);
		G_B16_1 = G_B15_0;
	}

IL_00c9:
	{
		ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)G_B16_1, G_B16_0, /*hidden argument*/NULL);
		// characterButtons[i].colors = colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_39 = __this->get_characterButtons_28();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_43 = V_3;
		NullCheck(L_42);
		Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621(L_42, L_43, /*hidden argument*/NULL);
		// for (var i = 0; i < characterButtons.Length; i++)
		int32_t L_44 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00e0:
	{
		// for (var i = 0; i < characterButtons.Length; i++)
		int32_t L_45 = V_2;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_46 = __this->get_characterButtons_28();
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_009e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetLightShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetLightShadows_mC4CBBC56B2B54D0D90C3518CFDF9F5757D4DB8F8 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___on0, const RuntimeMethod* method)
{
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* V_0 = NULL;
	int32_t V_1 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B3_0 = NULL;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B4_1 = NULL;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B9_0 = NULL;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * G_B10_1 = NULL;
	{
		// foreach (var l in dirLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_0 = __this->get_dirLights_21();
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		// foreach (var l in dirLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// l.shadows = on ? LightShadows.Soft : LightShadows.None;
		bool L_5 = ___on0;
		G_B2_0 = L_4;
		if (L_5)
		{
			G_B3_0 = L_4;
			goto IL_0014;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 2;
		G_B4_1 = G_B3_0;
	}

IL_0015:
	{
		NullCheck(G_B4_1);
		Light_set_shadows_mC464AA4717DB55512DC06B3DFB95C8839F16C20B(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// foreach (var l in dirLights)
		int32_t L_7 = V_1;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var l in otherLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_9 = __this->get_otherLights_22();
		V_0 = L_9;
		V_1 = 0;
		goto IL_0042;
	}

IL_002f:
	{
		// foreach (var l in otherLights)
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		// l.shadows = on ? LightShadows.Soft : LightShadows.None;
		bool L_14 = ___on0;
		G_B8_0 = L_13;
		if (L_14)
		{
			G_B9_0 = L_13;
			goto IL_0038;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B10_0 = 2;
		G_B10_1 = G_B9_0;
	}

IL_0039:
	{
		NullCheck(G_B10_1);
		Light_set_shadows_mC464AA4717DB55512DC06B3DFB95C8839F16C20B(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0042:
	{
		// foreach (var l in otherLights)
		int32_t L_16 = V_1;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimation_m5EA943B4F026D809AD107E937B2CF4C40A51F169 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B17_0 = NULL;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B16_0 = NULL;
	float G_B18_0 = 0.0f;
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * G_B18_1 = NULL;
	{
		// catAnim = index;
		int32_t L_0 = ___index0;
		__this->set_catAnim_18(L_0);
		// if (catAnim >= catAnimations.Length)
		int32_t L_1 = __this->get_catAnim_18();
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_2 = __this->get_catAnimations_17();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		// catAnim = 0;
		__this->set_catAnim_18(0);
	}

IL_001e:
	{
		// if (catAnim < 0)
		int32_t L_3 = __this->get_catAnim_18();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// catAnim = catAnimations.Length-1;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_4 = __this->get_catAnimations_17();
		NullCheck(L_4);
		__this->set_catAnim_18(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)));
	}

IL_0037:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_5 = __this->get_catAnimation_10();
		V_0 = L_5;
		V_1 = 0;
		goto IL_0056;
	}

IL_0042:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// anim.clip = catAnimations[index];
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_10 = __this->get_catAnimations_17();
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		Animation_set_clip_mCEC582FF8FE05B1F41E2BAC2C33E60D643C1E211(L_9, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0056:
	{
		// foreach (var anim in catAnimation)
		int32_t L_15 = V_1;
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0042;
		}
	}
	{
		// uchanAnim = index;
		int32_t L_17 = ___index0;
		__this->set_uchanAnim_20(L_17);
		// if (uchanAnim >= unityChanAnimations.Length)
		int32_t L_18 = __this->get_uchanAnim_20();
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_19 = __this->get_unityChanAnimations_19();
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_007a;
		}
	}
	{
		// uchanAnim = 0;
		__this->set_uchanAnim_20(0);
	}

IL_007a:
	{
		// if (uchanAnim < 0)
		int32_t L_20 = __this->get_uchanAnim_20();
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// uchanAnim = unityChanAnimations.Length-1;
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_21 = __this->get_unityChanAnimations_19();
		NullCheck(L_21);
		__this->set_uchanAnim_20(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))), (int32_t)1)));
	}

IL_0093:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_22 = __this->get_unityChanAnimation_11();
		V_0 = L_22;
		V_1 = 0;
		goto IL_00b2;
	}

IL_009e:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		// anim.clip = unityChanAnimations[index];
		AnimationClipU5BU5D_t93D1A9ADEC832A4EABC0353D9E4E435B22B28489* L_27 = __this->get_unityChanAnimations_19();
		int32_t L_28 = ___index0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_26);
		Animation_set_clip_mCEC582FF8FE05B1F41E2BAC2C33E60D643C1E211(L_26, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b2:
	{
		// foreach (var anim in unityChanAnimation)
		int32_t L_32 = V_1;
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_009e;
		}
	}
	{
		// PlayCurrentAnimation();
		TCP2_Demo_Cat_PlayCurrentAnimation_mC30B0E3691E80AB8402E0A689EFBDDC23C93652D(__this, (-1.0f), /*hidden argument*/NULL);
		// for (var i = 0; i < animationButtons.Length; i++)
		V_2 = 0;
		goto IL_00fe;
	}

IL_00c7:
	{
		// var colors = animationButtons[i].colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_34 = __this->get_animationButtons_30();
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_38;
		L_38 = Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline(L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		// colors.colorMultiplier = (i == index) ? 0.96f : 0.6f;
		int32_t L_39 = V_2;
		int32_t L_40 = ___index0;
		G_B16_0 = (&V_3);
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			G_B17_0 = (&V_3);
			goto IL_00e2;
		}
	}
	{
		G_B18_0 = (0.600000024f);
		G_B18_1 = G_B16_0;
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B18_0 = (0.959999979f);
		G_B18_1 = G_B17_0;
	}

IL_00e7:
	{
		ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline((ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)G_B18_1, G_B18_0, /*hidden argument*/NULL);
		// animationButtons[i].colors = colors;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_41 = __this->get_animationButtons_30();
		int32_t L_42 = V_2;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_45 = V_3;
		NullCheck(L_44);
		Selectable_set_colors_m2610F85E7DC191E0AA2D71E2447BA5B58B7C4621(L_44, L_45, /*hidden argument*/NULL);
		// for (var i = 0; i < animationButtons.Length; i++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00fe:
	{
		// for (var i = 0; i < animationButtons.Length; i++)
		int32_t L_47 = V_2;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_48 = __this->get_animationButtons_30();
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_00c7;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::SetAnimationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_SetAnimationSpeed_mBF02A965EBFD847ECCA54349381D141EAD9D8AF0 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, float ___speed0, const RuntimeMethod* method)
{
	{
		// playingSpeed = speed;
		float L_0 = ___speed0;
		__this->set_playingSpeed_33(L_0);
		// UpdateAnimSpeed();
		TCP2_Demo_Cat_UpdateAnimSpeed_m04527C2B417791BBB7BB36EFFEBD49D9A5FEC89F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PauseUnpauseAnimation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PauseUnpauseAnimation_m924FC30895133873337F922294DD64012C0B3C7D (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___play0, const RuntimeMethod* method)
{
	{
		// animationPaused = !play;
		bool L_0 = ___play0;
		__this->set_animationPaused_32((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// UpdateAnimSpeed();
		TCP2_Demo_Cat_UpdateAnimSpeed_m04527C2B417791BBB7BB36EFFEBD49D9A5FEC89F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::UpdateAnimSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_UpdateAnimSpeed_m04527C2B417791BBB7BB36EFFEBD49D9A5FEC89F (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B5_0 = NULL;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B6_1 = NULL;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B19_0 = NULL;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B18_0 = NULL;
	float G_B20_0 = 0.0f;
	AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * G_B20_1 = NULL;
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_0 = __this->get_catAnimation_10();
		V_0 = L_0;
		V_1 = 0;
		goto IL_005a;
	}

IL_000b:
	{
		// foreach (var anim in catAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// foreach (AnimationState state in anim)
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Animation_GetEnumerator_m7F0049CCE49D9F5963AFB5552CDEAD51793891F7(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0016:
		{
			// foreach (AnimationState state in anim)
			RuntimeObject* L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			// state.speed = animationPaused ? 0 : playingSpeed;
			bool L_8 = __this->get_animationPaused_32();
			G_B4_0 = ((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)CastclassSealed((RuntimeObject*)L_7, AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var));
			if (L_8)
			{
				G_B5_0 = ((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)CastclassSealed((RuntimeObject*)L_7, AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var));
				goto IL_0031;
			}
		}

IL_0029:
		{
			float L_9 = __this->get_playingSpeed_33();
			G_B6_0 = L_9;
			G_B6_1 = G_B4_0;
			goto IL_0036;
		}

IL_0031:
		{
			G_B6_0 = (0.0f);
			G_B6_1 = G_B5_0;
		}

IL_0036:
		{
			NullCheck(G_B6_1);
			AnimationState_set_speed_m54AF12C004F2253228DA25B9E21774184A77271D(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		}

IL_003b:
		{
			// foreach (AnimationState state in anim)
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0016;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_3;
			if (!L_13)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005a:
	{
		// foreach (var anim in catAnimation)
		int32_t L_16 = V_1;
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_18 = __this->get_unityChanAnimation_11();
		V_0 = L_18;
		V_1 = 0;
		goto IL_00ba;
	}

IL_006b:
	{
		// foreach (var anim in unityChanAnimation)
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// foreach (AnimationState state in anim)
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Animation_GetEnumerator_m7F0049CCE49D9F5963AFB5552CDEAD51793891F7(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
	}

IL_0074:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009b;
		}

IL_0076:
		{
			// foreach (AnimationState state in anim)
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			RuntimeObject * L_25;
			L_25 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_24);
			// state.speed = animationPaused ? 0 : playingSpeed;
			bool L_26 = __this->get_animationPaused_32();
			G_B18_0 = ((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)CastclassSealed((RuntimeObject*)L_25, AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var));
			if (L_26)
			{
				G_B19_0 = ((AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD *)CastclassSealed((RuntimeObject*)L_25, AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD_il2cpp_TypeInfo_var));
				goto IL_0091;
			}
		}

IL_0089:
		{
			float L_27 = __this->get_playingSpeed_33();
			G_B20_0 = L_27;
			G_B20_1 = G_B18_0;
			goto IL_0096;
		}

IL_0091:
		{
			G_B20_0 = (0.0f);
			G_B20_1 = G_B19_0;
		}

IL_0096:
		{
			NullCheck(G_B20_1);
			AnimationState_set_speed_m54AF12C004F2253228DA25B9E21774184A77271D(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		}

IL_009b:
		{
			// foreach (AnimationState state in anim)
			RuntimeObject* L_28 = V_2;
			NullCheck(L_28);
			bool L_29;
			L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_0076;
			}
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB6, FINALLY_00a5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a5;
	}

FINALLY_00a5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_2;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_31 = V_3;
			if (!L_31)
			{
				goto IL_00b5;
			}
		}

IL_00af:
		{
			RuntimeObject* L_32 = V_3;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_32);
		}

IL_00b5:
		{
			IL2CPP_END_FINALLY(165)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(165)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
	}

IL_00b6:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00ba:
	{
		// foreach (var anim in unityChanAnimation)
		int32_t L_34 = V_1;
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_006b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::PlayCurrentAnimation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_PlayCurrentAnimation_mC30B0E3691E80AB8402E0A689EFBDDC23C93652D (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, float ___time0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_1 = NULL;
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * V_2 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B3_0 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B4_1 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B8_0 = NULL;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* G_B9_1 = NULL;
	{
		// bool isCat = !unityChanCopyright.activeInHierarchy;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_unityChanCopyright_14();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_0, /*hidden argument*/NULL);
		// bool isFlat = flatGroup.activeSelf;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_flatGroup_9();
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (isCat)
		if (!((((int32_t)L_1) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0052;
		}
	}
	{
		// var anim = catAnimation[isFlat ? 1 : 0];
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_4 = __this->get_catAnimation_10();
		bool L_5 = V_0;
		G_B2_0 = L_4;
		if (L_5)
		{
			G_B3_0 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0029:
	{
		NullCheck(G_B4_1);
		int32_t L_6 = G_B4_0;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_7 = (G_B4_1)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// anim.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_8, /*hidden argument*/NULL);
		// if (time >= 0)
		float L_10 = ___time0;
		if ((!(((float)L_10) >= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_11 = V_1;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_12 = V_1;
		NullCheck(L_12);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_13;
		L_13 = Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_15;
		L_15 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_11, L_14, /*hidden argument*/NULL);
		float L_16 = ___time0;
		NullCheck(L_15);
		AnimationState_set_normalizedTime_m7662455F89FEC645F59C175375190B8F98FBBF20(L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0052:
	{
		// var anim = unityChanAnimation[isFlat ? 1 : 0];
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_17 = __this->get_unityChanAnimation_11();
		bool L_18 = V_0;
		G_B7_0 = L_17;
		if (L_18)
		{
			G_B8_0 = L_17;
			goto IL_005e;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_005f:
	{
		NullCheck(G_B9_1);
		int32_t L_19 = G_B9_0;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_20 = (G_B9_1)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_2 = L_20;
		// anim.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_21 = V_2;
		NullCheck(L_21);
		bool L_22;
		L_22 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_21, /*hidden argument*/NULL);
		// if (time >= 0)
		float L_23 = ___time0;
		if ((!(((float)L_23) >= ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_24 = V_2;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_25 = V_2;
		NullCheck(L_25);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_26;
		L_26 = Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_28;
		L_28 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_24, L_27, /*hidden argument*/NULL);
		float L_29 = ___time0;
		NullCheck(L_28);
		AnimationState_set_normalizedTime_m7662455F89FEC645F59C175375190B8F98FBBF20(L_28, L_29, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// anim = unityChanAnimation[2];
		AnimationU5BU5D_t96E3CBE40BFA9B0EEBD8A47A2BF724AA04338400* L_30 = __this->get_unityChanAnimation_11();
		NullCheck(L_30);
		int32_t L_31 = 2;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_2 = L_32;
		// anim.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_33 = V_2;
		NullCheck(L_33);
		bool L_34;
		L_34 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_33, /*hidden argument*/NULL);
		// if (time >= 0)
		float L_35 = ___time0;
		if ((!(((float)L_35) >= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		// anim[anim.clip.name].normalizedTime = time;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_36 = V_2;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_37 = V_2;
		NullCheck(L_37);
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_38;
		L_38 = Animation_get_clip_m9F02A36E375CE335DA87A6F0B81070CFB98A871B(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_40;
		L_40 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_36, L_39, /*hidden argument*/NULL);
		float L_41 = ___time0;
		NullCheck(L_40);
		AnimationState_set_normalizedTime_m7662455F89FEC645F59C175375190B8F98FBBF20(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_Cat__ctor_mEC4993CD6D70E8EAB62F679E7C9AD9D7D024DE10 (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// float playingSpeed = 1;
		__this->set_playingSpeed_33((1.0f));
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_GammaLinear__ctor_m5E528053B491B602E6673FBB928C46FD309CDAB2 (TCP2_Demo_GammaLinear_t3EB3564F3A4197BC69B8AC7E61B3A37BF9206E6E * __this, const RuntimeMethod* method)
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_ShowPointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_ShowPointLights_m201DA64E170F0DA6665C5C48B22B2811747ADA60 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { PointLights.SetActive(value); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PointLights_5();
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// set { PointLights.SetActive(value); }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_ShowDirLight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_ShowDirLight_m0CDB916218E9167DAD64FEA870D0DD89CDF517C7 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { DirLight.enabled = value; }
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = __this->get_DirLight_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// set { DirLight.enabled = value; }
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::get_RotatePointLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_PBS_get_RotatePointLights_m2909E951232806C14E45493FFAFF4B00A32176A1 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mRotatePointLights; }
		bool L_0 = __this->get_mRotatePointLights_30();
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_RotatePointLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_RotatePointLights_mBBF41627438874FBF52AB8F030300157D3CF3581 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { mRotatePointLights = value; }
		bool L_0 = ___value0;
		__this->set_mRotatePointLights_30(L_0);
		// set { mRotatePointLights = value; }
		return;
	}
}
// System.Boolean ToonyColorsPro.Demo.TCP2_Demo_PBS::get_UseOutline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP2_Demo_PBS_get_UseOutline_m75FFE3CFC0DB7B54B044BEFAB3614407FC413F38 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// get { return mUseOutline; }
		bool L_0 = __this->get_mUseOutline_29();
		return L_0;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseOutline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseOutline_m333F92EE52D71AA38995E459D4927A6061777464 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mUseOutline = value;
		bool L_0 = ___value0;
		__this->set_mUseOutline_29(L_0);
		// if (robotMaterial.shader.name.Contains("Toony"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_robotMaterial_28();
		NullCheck(L_1);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2;
		L_2 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_3, _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// ShowTCP2Shader();
		TCP2_Demo_PBS_ShowTCP2Shader_m1AEB13AABB1F316CD28B5CE5460A0256AFE62A53(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseRampTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseRampTexture_m1330B4BF2CAEF1E597A6C52CFA754322311DFEBF (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_RAMPTEXT", value ? 1f : 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral3149F26D9CE1CFD9B6B73E94637F84715E357FB2;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (value)
		bool L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_RAMPTEXT");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_robotMaterial_28();
		NullCheck(L_3);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_3, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, /*hidden argument*/NULL);
		return;
	}

IL_0033:
	{
		// robotMaterial.DisableKeyword("TCP2_RAMPTEXT");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_robotMaterial_28();
		NullCheck(L_4);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_4, _stringLiteral2437A703CECD9FED396DACA305BB00A92E6CB1B7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseStylizedFresnel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseStylizedFresnel_m31E54137971D07F69F1FF68EC0E607AEC825D909 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_STYLIZED_FRESNEL", value ? 1f : 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral732CB5EC85A9BA21A58C43B4356117F05BB7B2AC;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (value)
		bool L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_STYLIZED_FRESNEL");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_robotMaterial_28();
		NullCheck(L_3);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_3, _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8, /*hidden argument*/NULL);
		return;
	}

IL_0033:
	{
		// robotMaterial.DisableKeyword("TCP2_STYLIZED_FRESNEL");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_robotMaterial_28();
		NullCheck(L_4);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_4, _stringLiteral3782BA654D73CFC039B18C1FA1459F8272CBF3F8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::set_UseStylizedSpecular(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_set_UseStylizedSpecular_m31198D89DA57F5643FC5693BA18654230F46F6A3 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	String_t* G_B3_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_2 = NULL;
	{
		// robotMaterial.SetFloat("_TCP2_SPEC_TOON", value ? 1f : 0f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		bool L_1 = ___value0;
		G_B1_0 = _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
		G_B1_1 = L_0;
		if (L_1)
		{
			G_B2_0 = _stringLiteral7645AE6593BEC051C6D4727BE4EDB68F21FBD2EA;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001a:
	{
		NullCheck(G_B3_2);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// if (value)
		bool L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// robotMaterial.EnableKeyword("TCP2_SPEC_TOON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = __this->get_robotMaterial_28();
		NullCheck(L_3);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_3, _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D, /*hidden argument*/NULL);
		return;
	}

IL_0033:
	{
		// robotMaterial.DisableKeyword("TCP2_SPEC_TOON");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_robotMaterial_28();
		NullCheck(L_4);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_4, _stringLiteral1BBD96678B7ED529F76A2F67A494AF3966BB847D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_Awake_m1B7F8C366FA20C034580FE22DB17D8883717D49C (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial = Robot.material;
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_0 = __this->get_Robot_6();
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_robotMaterial_28(L_1);
		// mUseOutline = robotMaterial.shader.name.Contains("Outline");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_robotMaterial_28();
		NullCheck(L_2);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3;
		L_3 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_4, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, /*hidden argument*/NULL);
		__this->set_mUseOutline_29(L_5);
		// MetallicSlider.value = robotMaterial.GetFloat("_Metallic");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_MetallicSlider_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_robotMaterial_28();
		NullCheck(L_7);
		float L_8;
		L_8 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_7, _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_6, L_8);
		// SmoothnessSlider.value = robotMaterial.GetFloat("_Glossiness");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_9 = __this->get_SmoothnessSlider_11();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_robotMaterial_28();
		NullCheck(L_10);
		float L_11;
		L_11 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_10, _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, L_11);
		// RampThresholdSlider.value = robotMaterial.GetFloat("_RampThreshold");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_12 = __this->get_RampThresholdSlider_19();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_robotMaterial_28();
		NullCheck(L_13);
		float L_14;
		L_14 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_13, _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_14);
		// RampSmoothSlider.value = robotMaterial.GetFloat("_RampSmooth");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_15 = __this->get_RampSmoothSlider_21();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_robotMaterial_28();
		NullCheck(L_16);
		float L_17;
		L_17 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_16, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_15, L_17);
		// RampSmoothAddSlider.value = robotMaterial.GetFloat("_RampSmoothAdd");
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_18 = __this->get_RampSmoothAddSlider_23();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_robotMaterial_28();
		NullCheck(L_19);
		float L_20;
		L_20 = Material_GetFloat_mF2F48AFBDFC1E1E72A00F614EF20B656262EB167(L_19, _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_18, L_20);
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_m411A9F39E24226DAABC9CD83EDAC745DCEE34B4B(__this, /*hidden argument*/NULL);
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_m9A6981FEA428C7E4C1189E01C02A83611D6F260A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_Update_m1B4CDE37E7B9DCC8AADAF2F52DC5E592C5399097 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// if (mRotatePointLights)
		bool L_0 = __this->get_mRotatePointLights_30();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// PointLights.transform.Rotate(Vector3.up * 20f * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PointLights_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (20.0f), /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_2, L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// if (Input.GetKeyDown(KeyCode.H))
		bool L_7;
		L_7 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)104), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// Canvas.SetActive(!Canvas.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Canvas_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Canvas_7();
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0053:
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_11;
		L_11 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		// NextSky();
		TCP2_Demo_PBS_NextSky_mD810585888EC4653F82FF13D7FFF6E4DD200CDDA(__this, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_12;
		L_12 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// PrevSky();
		TCP2_Demo_PBS_PrevSky_mFC2CCA01338C5D551AA8DC18AAD9B319E59C37EF(__this, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ToggleShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ToggleShader_m3E3D7320E50D5606C256D2A5BB862555DC4D90D7 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (robotMaterial.shader.name.Contains("Toony"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		NullCheck(L_0);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_2, _stringLiteral691AE9BA0D120D0AB92834C6C536B575EC89498B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// ShowUnityStandardShader();
		TCP2_Demo_PBS_ShowUnityStandardShader_m609233CAD1C795F1350282FFB7D3A6FF4A97E8B2(__this, /*hidden argument*/NULL);
		// ShaderText.text = "View with TCP2 PBS shader";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_ShaderText_16();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralECB057255CBF122172DC1AA6914A9BE196392C19);
		// }
		return;
	}

IL_0033:
	{
		// ShowTCP2Shader();
		TCP2_Demo_PBS_ShowTCP2Shader_m1AEB13AABB1F316CD28B5CE5460A0256AFE62A53(__this, /*hidden argument*/NULL);
		// ShaderText.text = "View with Unity Standard shader";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_ShaderText_16();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral054079EAAE05E1F1F395152E2EFB6C105A209AE6);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextSky_mD810585888EC4653F82FF13D7FFF6E4DD200CDDA (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// currentSky++;
		int32_t L_0 = __this->get_currentSky_26();
		__this->set_currentSky_26(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (currentSky >= SkySettings.Length) currentSky = 0;
		int32_t L_1 = __this->get_currentSky_26();
		SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* L_2 = __this->get_SkySettings_8();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// if (currentSky >= SkySettings.Length) currentSky = 0;
		__this->set_currentSky_26(0);
	}

IL_0025:
	{
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_m411A9F39E24226DAABC9CD83EDAC745DCEE34B4B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevSky_mFC2CCA01338C5D551AA8DC18AAD9B319E59C37EF (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// currentSky--;
		int32_t L_0 = __this->get_currentSky_26();
		__this->set_currentSky_26(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (currentSky < 0) currentSky = SkySettings.Length-1;
		int32_t L_1 = __this->get_currentSky_26();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if (currentSky < 0) currentSky = SkySettings.Length-1;
		SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* L_2 = __this->get_SkySettings_8();
		NullCheck(L_2);
		__this->set_currentSky_26(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1)));
	}

IL_0027:
	{
		// UpdateSky();
		TCP2_Demo_PBS_UpdateSky_m411A9F39E24226DAABC9CD83EDAC745DCEE34B4B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::NextRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_NextRamp_m17935D3E5A9041FD809130CE200653B1348868F2 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// currentRamp++;
		int32_t L_0 = __this->get_currentRamp_27();
		__this->set_currentRamp_27(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (currentRamp >= RampTextures.Length) currentRamp = 0;
		int32_t L_1 = __this->get_currentRamp_27();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_2 = __this->get_RampTextures_10();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// if (currentRamp >= RampTextures.Length) currentRamp = 0;
		__this->set_currentRamp_27(0);
	}

IL_0025:
	{
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_m9A6981FEA428C7E4C1189E01C02A83611D6F260A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::PrevRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_PrevRamp_mA14EB5845C1C4664FB74CC2DFDF8BC2CC5811887 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// currentRamp--;
		int32_t L_0 = __this->get_currentRamp_27();
		__this->set_currentRamp_27(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (currentRamp < 0) currentRamp = RampTextures.Length - 1;
		int32_t L_1 = __this->get_currentRamp_27();
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// if (currentRamp < 0) currentRamp = RampTextures.Length - 1;
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_2 = __this->get_RampTextures_10();
		NullCheck(L_2);
		__this->set_currentRamp_27(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1)));
	}

IL_0027:
	{
		// UpdateRamp();
		TCP2_Demo_PBS_UpdateRamp_m9A6981FEA428C7E4C1189E01C02A83611D6F260A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetMetallic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetMetallic_mF6B214220E2B276FBF4A4E3857E6F97CF7AEC152 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_Metallic", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, L_1, /*hidden argument*/NULL);
		// MetallicValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_MetallicValue_14();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetSmoothness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetSmoothness_m9340BD5CE661FA81E2ABBACECC3E080DB533768A (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_Glossiness", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, L_1, /*hidden argument*/NULL);
		// SmoothnessValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_SmoothnessValue_12();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetBumpScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetBumpScale_mB31637023E93B5D94D08E77443119E970407931C (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_BumpScale", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, L_1, /*hidden argument*/NULL);
		// BumpScaleValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_BumpScaleValue_15();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampThreshold_mF53DF63C1187E67719C025FF2195A569E9E54368 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampThreshold", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral85C367801C7A561BDB2A2D1102D38F51268DF166, L_1, /*hidden argument*/NULL);
		// RampThresholdValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_RampThresholdValue_20();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampSmooth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampSmooth_mCDBC5F7589B3D386164F437D7A9FD42B38DAEEE8 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampSmooth", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteralE8F7F4D94BBC110A1ECD8F609085186A650FFF22, L_1, /*hidden argument*/NULL);
		// RampSmoothValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_RampSmoothValue_22();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::SetRampSmoothAdd(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_SetRampSmoothAdd_m6A8F8A6EAB1F9F0B17E0B0936395D2FCEE11B497 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, float ___f0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetFloat("_RampSmoothAdd", f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		float L_1 = ___f0;
		NullCheck(L_0);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_0, _stringLiteral3BF0D98206F212E7E3BD916BD930A6C819799531, L_1, /*hidden argument*/NULL);
		// RampSmoothAddValue.text = f.ToString("0.00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_RampSmoothAddValue_24();
		String_t* L_3;
		L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&___f0), _stringLiteral86B02B47B04CB284EE80BAD91A6C009CF408644D, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateRamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateRamp_m9A6981FEA428C7E4C1189E01C02A83611D6F260A (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.SetTexture("_Ramp", RampTextures[currentRamp]);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_1 = __this->get_RampTextures_10();
		int32_t L_2 = __this->get_currentRamp_27();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_0, _stringLiteral2850859507A73CC9DF831D78349DE4FDD99DDFB4, L_4, /*hidden argument*/NULL);
		// RampValue.text = string.Format("{0}/{1}", currentRamp + 1, RampTextures.Length);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_RampValue_18();
		int32_t L_6 = __this->get_currentRamp_27();
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_9 = __this->get_RampTextures_10();
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_12);
		// RampImage.texture = RampTextures[currentRamp];
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_13 = __this->get_RampImage_25();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_14 = __this->get_RampTextures_10();
		int32_t L_15 = __this->get_currentRamp_27();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::UpdateSky()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_UpdateSky_m411A9F39E24226DAABC9CD83EDAC745DCEE34B4B (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * V_0 = NULL;
	{
		// var ss = SkySettings[currentSky];
		SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* L_0 = __this->get_SkySettings_8();
		int32_t L_1 = __this->get_currentSky_26();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// DirLight.transform.eulerAngles = ss.DirLightEuler;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = __this->get_DirLight_4();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * L_6 = V_0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_DirLightEuler_2();
		NullCheck(L_5);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_5, L_7, /*hidden argument*/NULL);
		// if (FlipLight)
		bool L_8 = __this->get_FlipLight_9();
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// DirLight.transform.Rotate(Vector3.up, 180f, Space.Self);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_9 = __this->get_DirLight_4();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Rotate_m12614C5FABB1F4A9A6800EE65BBFDB433D6D804D(L_10, L_11, (180.0f), 1, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// DirLight.color = ss.lightColor;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_12 = __this->get_DirLight_4();
		SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * L_13 = V_0;
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = L_13->get_lightColor_1();
		NullCheck(L_12);
		Light_set_color_mB33E961A7CF25D0EBE410EE22444B4B8D4317C6C(L_12, L_14, /*hidden argument*/NULL);
		// RenderSettings.skybox = ss.SkyMaterial;
		SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * L_15 = V_0;
		NullCheck(L_15);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = L_15->get_SkyMaterial_0();
		RenderSettings_set_skybox_m452A88810ECA0D7B7B71DBA56E8D0D661CEEA237(L_16, /*hidden argument*/NULL);
		// RenderSettings.customReflection = ss.SkyMaterial.GetTexture("_Tex") as Cubemap;
		SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * L_17 = V_0;
		NullCheck(L_17);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = L_17->get_SkyMaterial_0();
		NullCheck(L_18);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_19;
		L_19 = Material_GetTexture_m559F9134FDF1311F3D39B8C22A90A50A9F80A5FB(L_18, _stringLiteral01751C0E97110EDEF84FF041AF6DB629B27EFE56, /*hidden argument*/NULL);
		RenderSettings_set_customReflection_mB1741F9FDF8D9ED94804F86F99EA45C5F5B1BE20(((Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938 *)IsInstSealed((RuntimeObject*)L_19, Cubemap_tB48EEA79C233417AF4D7BF03EA1BE4AA07A5B938_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// DynamicGI.UpdateEnvironment();
		DynamicGI_UpdateEnvironment_m1834BA636911736CCD70FE2B6B1310ABC5165AB2(/*hidden argument*/NULL);
		// SkyboxValue.text = string.Format("{0}/{1}", currentSky + 1, SkySettings.Length);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_SkyboxValue_17();
		int32_t L_21 = __this->get_currentSky_26();
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		SkyboxSettingU5BU5D_t1D27382453DFA05F342338FEF054B2A20734D033* L_24 = __this->get_SkySettings_8();
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)));
		RuntimeObject * L_26 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_27);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowUnityStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowUnityStandardShader_m609233CAD1C795F1350282FFB7D3A6FF4A97E8B2 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotMaterial.shader = Shader.Find("Standard");
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_robotMaterial_28();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ShowTCP2Shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ShowTCP2Shader_m1AEB13AABB1F316CD28B5CE5460A0256AFE62A53 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var shaderName = mUseOutline ? "Hidden/Toony Colors Pro 2/Standard PBS Outline" : "Toony Colors Pro 2/Standard PBS";
		bool L_0 = __this->get_mUseOutline_29();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = _stringLiteralB9A83B95F24CF4B784B32CE94D9D0A43FD5D7C39;
		goto IL_0014;
	}

IL_000f:
	{
		G_B3_0 = _stringLiteral5DA306C4DE2D57BFF64C640B99C16F99CA2501FB;
	}

IL_0014:
	{
		// var shader = Shader.Find(shaderName);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1;
		L_1 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(G_B3_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (shader != null)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// robotMaterial.shader = shader;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_robotMaterial_28();
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = V_0;
		NullCheck(L_4);
		Material_set_shader_m21134B4BB30FB4978B4D583FA4A8AFF2A8A9410D(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::ToggleKeyword(UnityEngine.Material,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_ToggleKeyword_m884B2F9E2BB9D65C275B41BAF3491379D285DBF9 (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m0, bool ___enabled1, String_t* ___keyword2, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// m.EnableKeyword(keyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___m0;
		String_t* L_2 = ___keyword2;
		NullCheck(L_1);
		Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		// m.DisableKeyword(keyword);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___m0;
		String_t* L_4 = ___keyword2;
		NullCheck(L_3);
		Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS__ctor_mE77D79D3D09BDDA6B508144534F7DA48292AF29F (TCP2_Demo_PBS_t10895255AF231174A173133D77E4C032FEC9F5D0 * __this, const RuntimeMethod* method)
{
	{
		// public bool FlipLight = true;
		__this->set_FlipLight_9((bool)1);
		// bool mRotatePointLights = true;
		__this->set_mRotatePointLights_30((bool)1);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_Awake_m3221BA4132B84B35E9B04AE801200B8D8B1887C9 (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method)
{
	{
		// mResetCamPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_mResetCamPos_24(L_1);
		// mResetCamRot = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_2, /*hidden argument*/NULL);
		__this->set_mResetCamRot_26(L_3);
		// mResetPivotPos = Pivot.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_Pivot_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_mResetPivotPos_25(L_5);
		// mResetPivotRot = Pivot.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_Pivot_4();
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		__this->set_mResetPivotRot_27(L_7);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_OnEnable_mEEC0F7B030915A0627FDC110E371234D36B5DD04 (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method)
{
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_17(L_0);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_Update_m32A202C17CBC648746AFAD067F6995515A0D62CF (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_mouseDelta_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_mouseDelta_17(L_2);
		// var rightAlignedRect = ignoreMouseRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3 = __this->get_ignoreMouseRect_16();
		V_0 = L_3;
		// rightAlignedRect.x = Screen.width - ignoreMouseRect.width;
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_5 = __this->get_address_of_ignoreMouseRect_16();
		float L_6;
		L_6 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_5, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)il2cpp_codegen_subtract((float)((float)((float)L_4)), (float)L_6)), /*hidden argument*/NULL);
		// var ignoreMouse = rightAlignedRect.Contains(Input.mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		bool L_8;
		L_8 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (Input.GetMouseButtonDown(0))
		bool L_9;
		L_9 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// leftMouseHeld = !ignoreMouse;
		bool L_10 = V_1;
		__this->set_leftMouseHeld_28((bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0));
		goto IL_006e;
	}

IL_0057:
	{
		// else if (Input.GetMouseButtonUp(0) || !Input.GetMouseButton(0))
		bool L_11;
		L_11 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		bool L_12;
		L_12 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006e;
		}
	}

IL_0067:
	{
		// leftMouseHeld = false;
		__this->set_leftMouseHeld_28((bool)0);
	}

IL_006e:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_13;
		L_13 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		// rightMouseHeld = !ignoreMouse;
		bool L_14 = V_1;
		__this->set_rightMouseHeld_29((bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0));
		goto IL_0099;
	}

IL_0082:
	{
		// else if (Input.GetMouseButtonUp(1) || !Input.GetMouseButton(1))
		bool L_15;
		L_15 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0092;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0099;
		}
	}

IL_0092:
	{
		// rightMouseHeld = false;
		__this->set_rightMouseHeld_29((bool)0);
	}

IL_0099:
	{
		// if (Input.GetMouseButtonDown(2))
		bool L_17;
		L_17 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(2, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// middleMouseHeld = !ignoreMouse;
		bool L_18 = V_1;
		__this->set_middleMouseHeld_30((bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0));
		goto IL_00c4;
	}

IL_00ad:
	{
		// else if (Input.GetMouseButtonUp(2) || !Input.GetMouseButton(2))
		bool L_19;
		L_19 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(2, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_20;
		L_20 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00c4;
		}
	}

IL_00bd:
	{
		// middleMouseHeld = false;
		__this->set_middleMouseHeld_30((bool)0);
	}

IL_00c4:
	{
		// if (leftMouseHeld)
		bool L_21 = __this->get_leftMouseHeld_28();
		if (!L_21)
		{
			goto IL_0135;
		}
	}
	{
		// orbitAcceleration.x += Mathf.Clamp(mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_orbitAcceleration_18();
		float* L_23 = L_22->get_address_of_x_2();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_mouseDelta_17();
		float L_27 = L_26->get_x_2();
		float L_28 = __this->get_OrbitStrg_5();
		float L_29 = __this->get_OrbitClamp_6();
		float L_30 = __this->get_OrbitClamp_6();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)), ((-L_29)), L_30, /*hidden argument*/NULL);
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)L_31));
		// orbitAcceleration.y += Mathf.Clamp(-mouseDelta.y * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_orbitAcceleration_18();
		float* L_33 = L_32->get_address_of_y_3();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = __this->get_address_of_mouseDelta_17();
		float L_37 = L_36->get_y_3();
		float L_38 = __this->get_OrbitStrg_5();
		float L_39 = __this->get_OrbitClamp_6();
		float L_40 = __this->get_OrbitClamp_6();
		float L_41;
		L_41 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((-L_37)), (float)L_38)), ((-L_39)), L_40, /*hidden argument*/NULL);
		*((float*)L_34) = (float)((float)il2cpp_codegen_add((float)L_35, (float)L_41));
		// }
		goto IL_0179;
	}

IL_0135:
	{
		// else if (middleMouseHeld || rightMouseHeld)
		bool L_42 = __this->get_middleMouseHeld_30();
		if (L_42)
		{
			goto IL_0145;
		}
	}
	{
		bool L_43 = __this->get_rightMouseHeld_29();
		if (!L_43)
		{
			goto IL_0179;
		}
	}

IL_0145:
	{
		// panAcceleration.y += Mathf.Clamp(-mouseDelta.y * PanStrg, -PanClamp, PanClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = __this->get_address_of_panAcceleration_19();
		float* L_45 = L_44->get_address_of_y_3();
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_mouseDelta_17();
		float L_49 = L_48->get_y_3();
		float L_50 = __this->get_PanStrg_7();
		float L_51 = __this->get_PanClamp_8();
		float L_52 = __this->get_PanClamp_8();
		float L_53;
		L_53 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((-L_49)), (float)L_50)), ((-L_51)), L_52, /*hidden argument*/NULL);
		*((float*)L_46) = (float)((float)il2cpp_codegen_add((float)L_47, (float)L_53));
	}

IL_0179:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_54;
		L_54 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0188;
		}
	}
	{
		// ResetView();
		TCP2_Demo_PBS_View_ResetView_m5A38FA7EE15C985CA90B25855FC12B5C43333907(__this, /*hidden argument*/NULL);
	}

IL_0188:
	{
		// var angle = transform.localEulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_55, /*hidden argument*/NULL);
		V_2 = L_56;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = V_2;
		float L_58 = L_57.get_x_2();
		if ((!(((float)L_58) < ((float)(180.0f)))))
		{
			goto IL_01d0;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_2;
		float L_60 = L_59.get_x_2();
		if ((!(((float)L_60) >= ((float)(60.0f)))))
		{
			goto IL_01d0;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_61 = __this->get_address_of_orbitAcceleration_18();
		float L_62 = L_61->get_y_3();
		if ((!(((float)L_62) > ((float)(0.0f)))))
		{
			goto IL_01d0;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_63 = __this->get_address_of_orbitAcceleration_18();
		L_63->set_y_3((0.0f));
	}

IL_01d0:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_2;
		float L_65 = L_64.get_x_2();
		if ((!(((float)L_65) > ((float)(180.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_2;
		float L_67 = L_66.get_x_2();
		if ((!(((float)L_67) <= ((float)(300.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_68 = __this->get_address_of_orbitAcceleration_18();
		float L_69 = L_68->get_y_3();
		if ((!(((float)L_69) < ((float)(0.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_70 = __this->get_address_of_orbitAcceleration_18();
		L_70->set_y_3((0.0f));
	}

IL_020c:
	{
		// transform.RotateAround(Pivot.position, transform.right, orbitAcceleration.y * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72 = __this->get_Pivot_4();
		NullCheck(L_72);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_72, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_76 = __this->get_address_of_orbitAcceleration_18();
		float L_77 = L_76->get_y_3();
		float L_78;
		L_78 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_71);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_71, L_73, L_75, ((float)il2cpp_codegen_multiply((float)L_77, (float)L_78)), /*hidden argument*/NULL);
		// transform.RotateAround(Pivot.position, Vector3.up, orbitAcceleration.x * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80 = __this->get_Pivot_4();
		NullCheck(L_80);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_80, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_83 = __this->get_address_of_orbitAcceleration_18();
		float L_84 = L_83->get_x_2();
		float L_85;
		L_85 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_79, L_81, L_82, ((float)il2cpp_codegen_multiply((float)L_84, (float)L_85)), /*hidden argument*/NULL);
		// var pos = Pivot.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86 = __this->get_Pivot_4();
		NullCheck(L_86);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_87, /*hidden argument*/NULL);
		V_3 = L_88;
		// var yDiff = pos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = V_3;
		float L_90 = L_89.get_y_3();
		V_4 = L_90;
		// pos.y += panAcceleration.y * Time.deltaTime;
		float* L_91 = (&V_3)->get_address_of_y_3();
		float* L_92 = L_91;
		float L_93 = *((float*)L_92);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_94 = __this->get_address_of_panAcceleration_19();
		float L_95 = L_94->get_y_3();
		float L_96;
		L_96 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_92) = (float)((float)il2cpp_codegen_add((float)L_93, (float)((float)il2cpp_codegen_multiply((float)L_95, (float)L_96))));
		// pos.y = Mathf.Clamp(pos.y, yMin, yMax);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = V_3;
		float L_98 = L_97.get_y_3();
		float L_99 = __this->get_yMin_9();
		float L_100 = __this->get_yMax_10();
		float L_101;
		L_101 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_98, L_99, L_100, /*hidden argument*/NULL);
		(&V_3)->set_y_3(L_101);
		// yDiff = pos.y - yDiff;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102 = V_3;
		float L_103 = L_102.get_y_3();
		float L_104 = V_4;
		V_4 = ((float)il2cpp_codegen_subtract((float)L_103, (float)L_104));
		// Pivot.transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105 = __this->get_Pivot_4();
		NullCheck(L_105);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106;
		L_106 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_105, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_3;
		NullCheck(L_106);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_106, L_107, /*hidden argument*/NULL);
		// pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_108, /*hidden argument*/NULL);
		V_3 = L_109;
		// pos.y += yDiff;
		float* L_110 = (&V_3)->get_address_of_y_3();
		float* L_111 = L_110;
		float L_112 = *((float*)L_111);
		float L_113 = V_4;
		*((float*)L_111) = (float)((float)il2cpp_codegen_add((float)L_112, (float)L_113));
		// transform.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115 = V_3;
		NullCheck(L_114);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_114, L_115, /*hidden argument*/NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_116;
		L_116 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_5 = L_116;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_117 = __this->get_zoomAcceleration_21();
		float L_118 = V_5;
		float L_119 = __this->get_ZoomStrg_11();
		__this->set_zoomAcceleration_21(((float)il2cpp_codegen_add((float)L_117, (float)((float)il2cpp_codegen_multiply((float)L_118, (float)L_119)))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_120 = __this->get_zoomAcceleration_21();
		float L_121 = __this->get_ZoomClamp_12();
		float L_122 = __this->get_ZoomClamp_12();
		float L_123;
		L_123 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_120, ((-L_121)), L_122, /*hidden argument*/NULL);
		__this->set_zoomAcceleration_21(L_123);
		// var dist = Vector3.Distance(transform.position, Pivot.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_124, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126 = __this->get_Pivot_4();
		NullCheck(L_126);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_126, /*hidden argument*/NULL);
		float L_128;
		L_128 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_125, L_127, /*hidden argument*/NULL);
		V_6 = L_128;
		// if ((dist >= ZoomDistMin && zoomAcceleration > 0) || (dist <= ZoomDistMax && zoomAcceleration < 0))
		float L_129 = V_6;
		float L_130 = __this->get_ZoomDistMin_13();
		if ((!(((float)L_129) >= ((float)L_130))))
		{
			goto IL_0372;
		}
	}
	{
		float L_131 = __this->get_zoomAcceleration_21();
		if ((((float)L_131) > ((float)(0.0f))))
		{
			goto IL_0389;
		}
	}

IL_0372:
	{
		float L_132 = V_6;
		float L_133 = __this->get_ZoomDistMax_14();
		if ((!(((float)L_132) <= ((float)L_133))))
		{
			goto IL_03af;
		}
	}
	{
		float L_134 = __this->get_zoomAcceleration_21();
		if ((!(((float)L_134) < ((float)(0.0f)))))
		{
			goto IL_03af;
		}
	}

IL_0389:
	{
		// transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.Self);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_135;
		L_135 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
		L_136 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_137 = __this->get_zoomAcceleration_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138;
		L_138 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_136, L_137, /*hidden argument*/NULL);
		float L_139;
		L_139 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_140;
		L_140 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_138, L_139, /*hidden argument*/NULL);
		NullCheck(L_135);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_135, L_140, 1, /*hidden argument*/NULL);
	}

IL_03af:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = __this->get_orbitAcceleration_18();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_143 = __this->get_Decceleration_15();
		float L_144;
		L_144 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_145;
		L_145 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_141, L_142, ((float)il2cpp_codegen_multiply((float)L_143, (float)L_144)), /*hidden argument*/NULL);
		__this->set_orbitAcceleration_18(L_145);
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146 = __this->get_panAcceleration_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147;
		L_147 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_148 = __this->get_Decceleration_15();
		float L_149;
		L_149 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_150;
		L_150 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_146, L_147, ((float)il2cpp_codegen_multiply((float)L_148, (float)L_149)), /*hidden argument*/NULL);
		__this->set_panAcceleration_19(L_150);
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_151 = __this->get_zoomAcceleration_21();
		float L_152 = __this->get_Decceleration_15();
		float L_153;
		L_153 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_154;
		L_154 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_151, (0.0f), ((float)il2cpp_codegen_multiply((float)L_152, (float)L_153)), /*hidden argument*/NULL);
		__this->set_zoomAcceleration_21(L_154);
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155 = __this->get_moveAcceleration_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156;
		L_156 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_157 = __this->get_Decceleration_15();
		float L_158;
		L_158 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159;
		L_159 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_155, L_156, ((float)il2cpp_codegen_multiply((float)L_157, (float)L_158)), /*hidden argument*/NULL);
		__this->set_moveAcceleration_20(L_159);
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_160;
		L_160 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_17(L_160);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View_ResetView_m5A38FA7EE15C985CA90B25855FC12B5C43333907 (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method)
{
	{
		// moveAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_moveAcceleration_20(L_0);
		// orbitAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_orbitAcceleration_18(L_1);
		// panAcceleration = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_panAcceleration_19(L_2);
		// zoomAcceleration = 0f;
		__this->set_zoomAcceleration_21((0.0f));
		// transform.position = mResetCamPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_mResetCamPos_24();
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_4, /*hidden argument*/NULL);
		// transform.eulerAngles = mResetCamRot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_mResetCamRot_26();
		NullCheck(L_5);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_5, L_6, /*hidden argument*/NULL);
		// Pivot.position = mResetPivotPos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_Pivot_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_mResetPivotPos_25();
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
		// Pivot.eulerAngles = mResetPivotRot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_Pivot_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_mResetPivotRot_27();
		NullCheck(L_9);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS_View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_PBS_View__ctor_mBAA5B25F2B269991CC5D3C195AF043F24ADB8674 (TCP2_Demo_PBS_View_t79550B950224DED8990ABD537233E8465C9F88C8 * __this, const RuntimeMethod* method)
{
	{
		// public float OrbitStrg = 3f;
		__this->set_OrbitStrg_5((3.0f));
		// public float OrbitClamp = 50f;
		__this->set_OrbitClamp_6((50.0f));
		// public float PanStrg = 0.1f;
		__this->set_PanStrg_7((0.100000001f));
		// public float PanClamp = 2f;
		__this->set_PanClamp_8((2.0f));
		// public float ZoomStrg = 40f;
		__this->set_ZoomStrg_11((40.0f));
		// public float ZoomClamp = 30f;
		__this->set_ZoomClamp_12((30.0f));
		// public float ZoomDistMin = 1f;
		__this->set_ZoomDistMin_13((1.0f));
		// public float ZoomDistMax = 2f;
		__this->set_ZoomDistMax_14((2.0f));
		// public float Decceleration = 8f;
		__this->set_Decceleration_15((8.0f));
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_Awake_mED6F87EB0A9F06C9BC3CFF860D0BA328848F66F2 (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method)
{
	{
		// mResetCamPos = Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_mResetCamPos_19(L_2);
		// mResetCamRot = Camera.main.transform.eulerAngles;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_4, /*hidden argument*/NULL);
		__this->set_mResetCamRot_20(L_5);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_OnEnable_m10416FA788143633298F39DC2F0307B6672A9452 (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method)
{
	{
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_12(L_0);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_Update_m5575970E237185C52F9DC6861A3C68072CB2FB90 (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B3_0 = NULL;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B2_0 = NULL;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B4_0 = NULL;
	int32_t G_B5_0 = 0;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B5_1 = NULL;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B8_0 = NULL;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B9_1 = NULL;
	float G_B19_0 = 0.0f;
	float* G_B19_1 = NULL;
	float G_B16_0 = 0.0f;
	float* G_B16_1 = NULL;
	float G_B18_0 = 0.0f;
	float* G_B18_1 = NULL;
	float G_B17_0 = 0.0f;
	float* G_B17_1 = NULL;
	int32_t G_B20_0 = 0;
	float G_B20_1 = 0.0f;
	float* G_B20_2 = NULL;
	float G_B24_0 = 0.0f;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B24_1 = NULL;
	float G_B21_0 = 0.0f;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B21_1 = NULL;
	float G_B23_0 = 0.0f;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B23_1 = NULL;
	float G_B22_0 = 0.0f;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B22_1 = NULL;
	int32_t G_B25_0 = 0;
	float G_B25_1 = 0.0f;
	TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * G_B25_2 = NULL;
	{
		// mouseDelta = Input.mousePosition - mouseDelta;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_mouseDelta_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		__this->set_mouseDelta_12(L_2);
		// if (!mMouseDown)
		bool L_3 = __this->get_mMouseDown_21();
		if (L_3)
		{
			goto IL_005a;
		}
	}
	{
		// mMouseDown = (Input.GetMouseButtonDown(0) && !(new Rect(0, 65, 230, 260).Contains(Input.mousePosition))) ? true : false;
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (!L_4)
		{
			G_B3_0 = __this;
			goto IL_004f;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_5), (0.0f), (65.0f), (230.0f), (260.0f), /*hidden argument*/NULL);
		V_2 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		bool L_7;
		L_7 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_6, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_7)
		{
			G_B4_0 = G_B2_0;
			goto IL_0052;
		}
	}

IL_004f:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0053:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_mMouseDown_21((bool)G_B5_0);
		goto IL_006c;
	}

IL_005a:
	{
		// mMouseDown = Input.GetMouseButtonUp(0) ? false : true;
		bool L_8;
		L_8 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		G_B7_0 = __this;
		if (L_8)
		{
			G_B8_0 = __this;
			goto IL_0066;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_0067;
	}

IL_0066:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0067:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_mMouseDown_21((bool)G_B9_0);
	}

IL_006c:
	{
		// if (mMouseDown)
		bool L_9 = __this->get_mMouseDown_21();
		if (!L_9)
		{
			goto IL_00aa;
		}
	}
	{
		// orbitAcceleration.y -= Mathf.Clamp(-mouseDelta.x * OrbitStrg, -OrbitClamp, OrbitClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_orbitAcceleration_13();
		float* L_11 = L_10->get_address_of_y_3();
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_mouseDelta_12();
		float L_15 = L_14->get_x_2();
		float L_16 = __this->get_OrbitStrg_4();
		float L_17 = __this->get_OrbitClamp_5();
		float L_18 = __this->get_OrbitClamp_5();
		float L_19;
		L_19 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((-L_15)), (float)L_16)), ((-L_17)), L_18, /*hidden argument*/NULL);
		*((float*)L_12) = (float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_19));
		goto IL_00ee;
	}

IL_00aa:
	{
		// else if (Input.GetMouseButton(2) || Input.GetMouseButton(1))
		bool L_20;
		L_20 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(2, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00ba;
		}
	}
	{
		bool L_21;
		L_21 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}

IL_00ba:
	{
		// panAcceleration.y += Mathf.Clamp(-mouseDelta.y * PanStrg, -PanClamp, PanClamp);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_panAcceleration_14();
		float* L_23 = L_22->get_address_of_y_3();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_26 = __this->get_address_of_mouseDelta_12();
		float L_27 = L_26->get_y_3();
		float L_28 = __this->get_PanStrg_6();
		float L_29 = __this->get_PanClamp_7();
		float L_30 = __this->get_PanClamp_7();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((-L_27)), (float)L_28)), ((-L_29)), L_30, /*hidden argument*/NULL);
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)L_31));
	}

IL_00ee:
	{
		// orbitAcceleration.y += Input.GetKey(KeyCode.LeftArrow) ? 15 : (Input.GetKey(KeyCode.RightArrow) ? -15 : 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_orbitAcceleration_13();
		float* L_33 = L_32->get_address_of_y_3();
		float* L_34 = L_33;
		float L_35 = *((float*)L_34);
		bool L_36;
		L_36 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)276), /*hidden argument*/NULL);
		G_B16_0 = L_35;
		G_B16_1 = L_34;
		if (L_36)
		{
			G_B19_0 = L_35;
			G_B19_1 = L_34;
			goto IL_011a;
		}
	}
	{
		bool L_37;
		L_37 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)275), /*hidden argument*/NULL);
		G_B17_0 = G_B16_0;
		G_B17_1 = G_B16_1;
		if (L_37)
		{
			G_B18_0 = G_B16_0;
			G_B18_1 = G_B16_1;
			goto IL_0116;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B17_0;
		G_B20_2 = G_B17_1;
		goto IL_011c;
	}

IL_0116:
	{
		G_B20_0 = ((int32_t)-15);
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_011c;
	}

IL_011a:
	{
		G_B20_0 = ((int32_t)15);
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_011c:
	{
		*((float*)G_B20_2) = (float)((float)il2cpp_codegen_add((float)G_B20_1, (float)((float)((float)G_B20_0))));
		// zoomAcceleration += Input.GetKey(KeyCode.UpArrow) ? 1 : (Input.GetKey(KeyCode.DownArrow) ? -1 : 0);
		float L_38 = __this->get_zoomAcceleration_16();
		bool L_39;
		L_39 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)273), /*hidden argument*/NULL);
		G_B21_0 = L_38;
		G_B21_1 = __this;
		if (L_39)
		{
			G_B24_0 = L_38;
			G_B24_1 = __this;
			goto IL_0144;
		}
	}
	{
		bool L_40;
		L_40 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)274), /*hidden argument*/NULL);
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		if (L_40)
		{
			G_B23_0 = G_B21_0;
			G_B23_1 = G_B21_1;
			goto IL_0141;
		}
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B22_0;
		G_B25_2 = G_B22_1;
		goto IL_0145;
	}

IL_0141:
	{
		G_B25_0 = (-1);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0145;
	}

IL_0144:
	{
		G_B25_0 = 1;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0145:
	{
		NullCheck(G_B25_2);
		G_B25_2->set_zoomAcceleration_16(((float)il2cpp_codegen_add((float)G_B25_1, (float)((float)((float)G_B25_0)))));
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_41;
		L_41 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_015b;
		}
	}
	{
		// ResetView();
		TCP2_Demo_View_ResetView_mBA5CA74008085B726D254DE746756AFDCF99CFED(__this, /*hidden argument*/NULL);
	}

IL_015b:
	{
		// var angle = Camera.main.transform.localEulerAngles;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_42;
		L_42 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_43, /*hidden argument*/NULL);
		V_0 = L_44;
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_0;
		float L_46 = L_45.get_x_2();
		if ((!(((float)L_46) < ((float)(180.0f)))))
		{
			goto IL_01a7;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_0;
		float L_48 = L_47.get_x_2();
		if ((!(((float)L_48) >= ((float)(60.0f)))))
		{
			goto IL_01a7;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_49 = __this->get_address_of_orbitAcceleration_13();
		float L_50 = L_49->get_y_3();
		if ((!(((float)L_50) > ((float)(0.0f)))))
		{
			goto IL_01a7;
		}
	}
	{
		// if (angle.x < 180 && angle.x >= XMax && orbitAcceleration.y > 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_orbitAcceleration_13();
		L_51->set_y_3((0.0f));
	}

IL_01a7:
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_0;
		float L_53 = L_52.get_x_2();
		if ((!(((float)L_53) > ((float)(180.0f)))))
		{
			goto IL_01e3;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_0;
		float L_55 = L_54.get_x_2();
		if ((!(((float)L_55) <= ((float)(300.0f)))))
		{
			goto IL_01e3;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = __this->get_address_of_orbitAcceleration_13();
		float L_57 = L_56->get_y_3();
		if ((!(((float)L_57) < ((float)(0.0f)))))
		{
			goto IL_01e3;
		}
	}
	{
		// if (angle.x > 180 && angle.x <= XMin && orbitAcceleration.y < 0) orbitAcceleration.y = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_58 = __this->get_address_of_orbitAcceleration_13();
		L_58->set_y_3((0.0f));
	}

IL_01e3:
	{
		// CharacterTransform.Rotate(-orbitAcceleration * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59 = __this->get_CharacterTransform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = __this->get_orbitAcceleration_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_60, /*hidden argument*/NULL);
		float L_62;
		L_62 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_59, L_63, 0, /*hidden argument*/NULL);
		// Camera.main.transform.Translate(panAcceleration * Time.deltaTime, Space.World);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_64;
		L_64 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_64, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = __this->get_panAcceleration_14();
		float L_67;
		L_67 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_66, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_65, L_68, 0, /*hidden argument*/NULL);
		// var scrollWheel = Input.GetAxis("Mouse ScrollWheel");
		float L_69;
		L_69 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		V_1 = L_69;
		// zoomAcceleration += scrollWheel * ZoomStrg;
		float L_70 = __this->get_zoomAcceleration_16();
		float L_71 = V_1;
		float L_72 = __this->get_ZoomStrg_8();
		__this->set_zoomAcceleration_16(((float)il2cpp_codegen_add((float)L_70, (float)((float)il2cpp_codegen_multiply((float)L_71, (float)L_72)))));
		// zoomAcceleration = Mathf.Clamp(zoomAcceleration, -ZoomClamp, ZoomClamp);
		float L_73 = __this->get_zoomAcceleration_16();
		float L_74 = __this->get_ZoomClamp_9();
		float L_75 = __this->get_ZoomClamp_9();
		float L_76;
		L_76 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_73, ((-L_74)), L_75, /*hidden argument*/NULL);
		__this->set_zoomAcceleration_16(L_76);
		// Camera.main.transform.Translate(Vector3.forward * zoomAcceleration * Time.deltaTime, Space.World);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_77;
		L_77 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_77, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_80 = __this->get_zoomAcceleration_16();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_79, L_80, /*hidden argument*/NULL);
		float L_82;
		L_82 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_Translate_mFB58CBF3FA00BD0EE09EC67457608F62564D0DDE(L_78, L_83, 0, /*hidden argument*/NULL);
		// if (Camera.main.transform.position.y > 1.65f)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_84;
		L_84 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86;
		L_86 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_85, /*hidden argument*/NULL);
		float L_87 = L_86.get_y_3();
		if ((!(((float)L_87) > ((float)(1.64999998f)))))
		{
			goto IL_02d5;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_88;
		L_88 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		V_3 = L_90;
		// pos.y = 1.65f;
		(&V_3)->set_y_3((1.64999998f));
		// Camera.main.transform.position = pos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_91;
		L_91 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_91);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_91, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93 = V_3;
		NullCheck(L_92);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_92, L_93, /*hidden argument*/NULL);
		// }
		goto IL_031e;
	}

IL_02d5:
	{
		// else if (Camera.main.transform.position.y < 0.3f)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_94;
		L_94 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_95, /*hidden argument*/NULL);
		float L_97 = L_96.get_y_3();
		if ((!(((float)L_97) < ((float)(0.300000012f)))))
		{
			goto IL_031e;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_98;
		L_98 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_98);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99;
		L_99 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		L_100 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_99, /*hidden argument*/NULL);
		V_4 = L_100;
		// pos.y = 0.3f;
		(&V_4)->set_y_3((0.300000012f));
		// Camera.main.transform.position = pos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_101;
		L_101 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_101, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103 = V_4;
		NullCheck(L_102);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_102, L_103, /*hidden argument*/NULL);
	}

IL_031e:
	{
		// if (Camera.main.transform.position.z < -1.8f)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_104;
		L_104 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_104);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105;
		L_105 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_106;
		L_106 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_105, /*hidden argument*/NULL);
		float L_107 = L_106.get_z_4();
		if ((!(((float)L_107) < ((float)(-1.79999995f)))))
		{
			goto IL_0369;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_108;
		L_108 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_108);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110;
		L_110 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_109, /*hidden argument*/NULL);
		V_5 = L_110;
		// pos.z = -1.8f;
		(&V_5)->set_z_4((-1.79999995f));
		// Camera.main.transform.position = pos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_111;
		L_111 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_111);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112;
		L_112 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_111, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_5;
		NullCheck(L_112);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_112, L_113, /*hidden argument*/NULL);
		// }
		goto IL_03b2;
	}

IL_0369:
	{
		// else if (Camera.main.transform.position.z > -0.6f)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_114;
		L_114 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_114);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_116;
		L_116 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_115, /*hidden argument*/NULL);
		float L_117 = L_116.get_z_4();
		if ((!(((float)L_117) > ((float)(-0.600000024f)))))
		{
			goto IL_03b2;
		}
	}
	{
		// var pos = Camera.main.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_118;
		L_118 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_119;
		L_119 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_118, /*hidden argument*/NULL);
		NullCheck(L_119);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120;
		L_120 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_119, /*hidden argument*/NULL);
		V_6 = L_120;
		// pos.z = -0.6f;
		(&V_6)->set_z_4((-0.600000024f));
		// Camera.main.transform.position = pos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_121;
		L_121 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_121);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122;
		L_122 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_121, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123 = V_6;
		NullCheck(L_122);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_122, L_123, /*hidden argument*/NULL);
	}

IL_03b2:
	{
		// orbitAcceleration = Vector3.Lerp(orbitAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = __this->get_orbitAcceleration_13();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_126 = __this->get_Decceleration_10();
		float L_127;
		L_127 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128;
		L_128 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_124, L_125, ((float)il2cpp_codegen_multiply((float)L_126, (float)L_127)), /*hidden argument*/NULL);
		__this->set_orbitAcceleration_13(L_128);
		// panAcceleration = Vector3.Lerp(panAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129 = __this->get_panAcceleration_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_130;
		L_130 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_131 = __this->get_Decceleration_10();
		float L_132;
		L_132 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133;
		L_133 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_129, L_130, ((float)il2cpp_codegen_multiply((float)L_131, (float)L_132)), /*hidden argument*/NULL);
		__this->set_panAcceleration_14(L_133);
		// zoomAcceleration = Mathf.Lerp(zoomAcceleration, 0, Decceleration * Time.deltaTime);
		float L_134 = __this->get_zoomAcceleration_16();
		float L_135 = __this->get_Decceleration_10();
		float L_136;
		L_136 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_137;
		L_137 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_134, (0.0f), ((float)il2cpp_codegen_multiply((float)L_135, (float)L_136)), /*hidden argument*/NULL);
		__this->set_zoomAcceleration_16(L_137);
		// moveAcceleration = Vector3.Lerp(moveAcceleration, Vector3.zero, Decceleration * Time.deltaTime);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138 = __this->get_moveAcceleration_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		float L_140 = __this->get_Decceleration_10();
		float L_141;
		L_141 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_142;
		L_142 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_138, L_139, ((float)il2cpp_codegen_multiply((float)L_140, (float)L_141)), /*hidden argument*/NULL);
		__this->set_moveAcceleration_15(L_142);
		// mouseDelta = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143;
		L_143 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		__this->set_mouseDelta_12(L_143);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::ResetView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View_ResetView_mBA5CA74008085B726D254DE746756AFDCF99CFED (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method)
{
	{
		// Camera.main.transform.position = mResetCamPos;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_mResetCamPos_19();
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_2, /*hidden argument*/NULL);
		// Camera.main.transform.eulerAngles = mResetCamRot;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_mResetCamRot_20();
		NullCheck(L_4);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToonyColorsPro.Demo.TCP2_Demo_View::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP2_Demo_View__ctor_mF550AAA63DBA9C5559CB7198663B723E58C5A5FD (TCP2_Demo_View_t14B97259948CA8BFD2CA9D0D571F29628B464E17 * __this, const RuntimeMethod* method)
{
	{
		// public float OrbitStrg = 3f;
		__this->set_OrbitStrg_4((3.0f));
		// public float OrbitClamp = 50f;
		__this->set_OrbitClamp_5((50.0f));
		// public float PanStrg = 0.1f;
		__this->set_PanStrg_6((0.100000001f));
		// public float PanClamp = 2f;
		__this->set_PanClamp_7((2.0f));
		// public float ZoomStrg = 40f;
		__this->set_ZoomStrg_8((40.0f));
		// public float ZoomClamp = 30f;
		__this->set_ZoomClamp_9((30.0f));
		// public float Decceleration = 8f;
		__this->set_Decceleration_10((8.0f));
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/Ambience::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ambience__ctor_m6169293BB8080F8A8B2A55D30839D1E3685C3C53 (Ambience_t9C94E9ECEEDF5656506E2AB44E8148FFA45E7B30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderStyle__ctor_mF7468ED1DEFBC5771DB8953C9D0E46D7376B0F88 (ShaderStyle_tD57FF4F956A35CFC2625F0CBB6A4825F23A6FBBD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/LightSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSettings__ctor_mEDC2B51EC0A602C8E562BFF4A9F8FE9ABBBB7360 (LightSettings_t41BD32B9D87F9F2C42C3E0BFEC30F26EBFE2261F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_GammaLinear/MaterialSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialSettings__ctor_m688899920998EFB40A25150B8B17F92490A6939A (MaterialSettings_t2B9B6C53588632BCD25AFB20D525FAD419549BAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_PBS/SkyboxSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkyboxSetting__ctor_m3E521C36752CBB071AD6BAB386DC40A27668E56F (SkyboxSetting_t71FE7FEC596BA0255064AC240515BE92B811CA46 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ToonyColorsPro.Demo.TCP2_Demo_Cat/ShaderStyle/CharacterSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSettings__ctor_m81B17B256A0DD311604423EFED6B5F1B3D5FE91E (CharacterSettings_tB498BC3778242208665870BD5C8F925903860992 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotatePointLights_mE775ADB148AB1FC2EC6C4650E1D74D6758F047A6_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrotatePointLightsU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TCP2_Demo_Cat_set_rotateLights_m4ADB805A8DEB2F2D60F4E6DD77C058D44613D6F8_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CrotateLightsU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotateLights_m9259F09C910D62F42E8B15FAC748989506EF2021_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// public bool rotateLights { get; set; }
		bool L_0 = __this->get_U3CrotateLightsU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TCP2_Demo_Cat_get_rotatePointLights_m7F5CA31EF08389D8542F79CCDDD1A5049E2CA020_inline (TCP2_Demo_Cat_t1EC59172CEB3AADF0DC974014D004AA3C0EBC15D * __this, const RuntimeMethod* method)
{
	{
		// public bool rotatePointLights { get; set; }
		bool L_0 = __this->get_U3CrotatePointLightsU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  Selectable_get_colors_m47C712DD0CFA000DAACD750853E81E981C90B7D9_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_0 = __this->get_m_Colors_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m8A321BF2E07D4D184214014C32F5389C8BE06198_inline (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		float L_0 = ___value0;
		__this->set_m_ColorMultiplier_5(L_0);
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
