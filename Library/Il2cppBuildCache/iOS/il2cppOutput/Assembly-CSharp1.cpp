#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3;
// System.Collections.Generic.Dictionary`2<System.String,System.Double>
struct Dictionary_2_t793098B2057085DD37F45E59C3CF910262F8F1BD;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190;
// Facebook.Unity.FacebookDelegate`1<System.Object>
struct FacebookDelegate_1_tF0451F78E13CCF394CCDEF8CE64B89F9C5FCED99;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<ElephantSDK.AdConfigParameter>
struct List_1_t6656D1B8DEB3ED9F1240E0D49F2B1710DFD2C3D5;
// System.Collections.Generic.List`1<ElephantSDK.ElephantRequest>
struct List_1_tD1430EC7103FECC75EA5FCA0A58E6186898F1F02;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<ElephantSDK.MirrorData>
struct List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<ElephantSDK.VersionData/MopubNetworkData>
struct List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884;
// System.Predicate`1<System.Type>
struct Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE;
// System.Collections.Generic.Queue`1<ElephantSDK.ElephantRequest>
struct Queue_1_tD3B2F8F5DAC9904486A85C2E5BCE00A5A2EE499A;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_tF2F8B5476F614882C00CEDDE027482B818D7FF1D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// ElephantSDK.MirrorData[]
struct MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ElephantSDK.VersionData/MopubNetworkData[]
struct MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355;
// ElephantSDK.AdConfig
struct AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF;
// ElephantSDK.AdConfigParameter
struct AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D;
// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75;
// ElephantSDK.ElephantCore
struct ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6;
// ElephantSDK.ElephantData
struct ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC;
// ElephantSDK.ElephantRequest
struct ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// GDPRNavigationButton
struct GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6;
// ElephantSDK.GDPROptionDetailModel
struct GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Facebook.Unity.Example.GraphRequest
struct GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Facebook.Unity.IGraphResult
struct IGraphResult_t16EC3CFB7D8A9729222B2365BEE2F219B9811C3F;
// ElephantSDK.IapStatusRequest
struct IapStatusRequest_t345C4B4A2A2E5D1725F066608EEA5374F29A6742;
// ElephantSDK.IapStatusResponse
struct IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// ElephantSDK.InternalConfig
struct InternalConfig_t4F97F66C14A354B444AC1C7A478E654E747AE8F8;
// ElephantSDK.InterstitialAdLogic
struct InterstitialAdLogic_tBB2A1F5C252A5E95EF8461BAB9CE6CED7738563C;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ElephantSDK.NetworkIds
struct NetworkIds_tCA637ECF2490334B59608006CBD6E1A290776B50;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ElephantSDK.OnInitialized
struct OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6;
// ElephantSDK.OnOpenResult
struct OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7;
// ElephantSDK.OnRemoteConfigLoaded
struct OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6;
// ElephantSDK.OpenData
struct OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03;
// ElephantSDK.OpenResponse
struct OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252;
// ElephantSDK.Params
struct Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ElephantSDK.RemoteConfig
struct RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ElephantSDK.SessionData
struct SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F;
// SplashScreen
struct SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ToggleController
struct ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// ElephantSDK.VersionData
struct VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// ElephantSDK.AdConfig/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tBE21E75689AD275D9BA4E70513BB9101F7239887;
// ElephantSDK.AdConfig/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t71165512E3D3AD903A03355ED3F16F7DFF8ACFBE;
// ElephantSDK.AdConfig/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t6FFB47088E79800E08CFE69005D575B7C2149540;
// ElephantSDK.AdConfig/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tCE4803E46922FA9E5284D10D3032A1DF4E5A325A;
// ElephantSDK.AdConfig/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t7469D6AADBBD1DE3581DB6DAEF17D77DE640AB5F;
// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43;
// ElephantSDK.ElephantCore/<InitSDK>d__57
struct U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F;
// ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66
struct U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA;
// ElephantSDK.ElephantCore/<OpenRequest>d__63
struct U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638;
// ElephantSDK.ElephantCore/<Post>d__75
struct U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381;
// ElephantSDK.ElephantCore/<PostWithResponse>d__64
struct U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582;
// ElephantSDK.ElephantUI/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1C629244F67DC31069207A4BC87769BBEDA0B86A;
// ElephantSDK.ElephantUI/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t303B433555CAFC8F434981A0B678D72D465B4E5B;
// ElephantSDK.ElephantUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tF0E74DDB120DCF5FDC696079FE784F28FA46930F;
// ElephantSDK.ElephantUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t3F1B650156E2D4BBCDBE001CA8F34C582A9476DE;
// Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4
struct U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// SplashScreen/<SplashScreenTime>d__2
struct U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712;
// ToggleController/<Setup>d__14
struct U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C;
// ElephantSDK.VersionCheckUtils/<>c
struct U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521;
// ElephantSDK.VersionData/MopubNetworkData
struct MopubNetworkData_tE77E0A4DFEDB744F2E3D3AE68BC050AE4A2C7310;

IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral144022BFA1C9495AF8955A3033D64C7B341BB9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D3B21F642EDA623820C52011E94A52D0229803B;
IL2CPP_EXTERN_C String_t* _stringLiteral379536593D9F229E40C1D372C04EADD13C45B9A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9A9D325EFB5BFDCE33BBFAB1D318D4E860D727;
IL2CPP_EXTERN_C String_t* _stringLiteral4BBED2AE71D46F33125DE16017E2836CA047C4F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5498A668F129DC6B8045DF2DECEB49D8713295D1;
IL2CPP_EXTERN_C String_t* _stringLiteral59ECEC8DDE5DB555C5F0463C11BC71ABDF57EBEF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A868990EE6698CA0C93F5FF86FCFE81BBCEF843;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral645A9609A8139153490276B64A141A5E0AA877AB;
IL2CPP_EXTERN_C String_t* _stringLiteral650189BF4B4786C2C54EB680E60BF25BAF658CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral8819DCBF86F4AB6067ED7B43259E09CA814693C8;
IL2CPP_EXTERN_C String_t* _stringLiteral8A0B6DCF8D7BE7C969447889EE5494D7B79B7243;
IL2CPP_EXTERN_C String_t* _stringLiteral8CADA190B27C8F0D4BD44B646FE78B052D525ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D;
IL2CPP_EXTERN_C String_t* _stringLiteralB89EDBC9F1CBF0C7543216F9BE2AD1A2841BC91A;
IL2CPP_EXTERN_C String_t* _stringLiteralC0D251E86F630DB18F9E55E7D34505BF100091AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56;
IL2CPP_EXTERN_C String_t* _stringLiteralC98975C9558A3380BC463FE3A1931BF7CC8E7208;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7F57910574D7E2CDEA27CA015F3A8F276BE8548;
IL2CPP_EXTERN_C String_t* _stringLiteralD958407926F34E4437F5434B07FDDA13C0FA61F6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF926A85A833F41D50B85456A81384BA14E367072;
IL2CPP_EXTERN_C String_t* _stringLiteralFCE83BCE9EC0FD938DC8ADD56EDEF54F05B21526;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisIapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00_mEED6BCEDEE784750BFCA3AE7946159AFD5FD1872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m04F01AE197AE93E8BB7CBB3B7638339A5766F7B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuBase_HandleResult_m6C640AD245243A32B3B4B86357E00D9BCDCB77E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mB35745D308CDED6CAB69D52DEFC2D84AB6CC5896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitSDKU3Ed__57_System_Collections_IEnumerator_Reset_m474BF59E37382A7804E5CE2FE161CDE555DFE636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIsIapBannedRequestU3Ed__66_System_Collections_IEnumerator_Reset_m0785D1C476CFCED00DFA9ECA1EBF3689EED5B119_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenRequestU3Ed__63_System_Collections_IEnumerator_Reset_m0CA7D89770854D14CCAD828AA0ED9C7A7B190C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostU3Ed__75_System_Collections_IEnumerator_Reset_mA7C2F8ED77EF68C8C8BAEA8804D6276F7D6B1D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostWithResponseU3Ed__64_System_Collections_IEnumerator_Reset_m0A11C1157B6B02E41917E1E4A0F6AFBB3F762932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetupU3Ed__14_System_Collections_IEnumerator_Reset_mF3773B3DDB478693CF1F5206EAFBA9ADB38E8CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSplashScreenTimeU3Ed__2_System_Collections_IEnumerator_Reset_mDF3E57C2B2D23C74D2B67943525FF592E47F4FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m7BF49F82A5EFF7F32B3FA82AB48554E368DCF674_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<ElephantSDK.MirrorData>
struct List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D, ____items_1)); }
	inline MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* get__items_1() const { return ____items_1; }
	inline MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D_StaticFields, ____emptyArray_5)); }
	inline MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MirrorDataU5BU5D_t9787E2527F056DD1BBCA02ECE1086B0B48CFF003* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ElephantSDK.VersionData/MopubNetworkData>
struct List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884, ____items_1)); }
	inline MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* get__items_1() const { return ____items_1; }
	inline MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884_StaticFields, ____emptyArray_5)); }
	inline MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MopubNetworkDataU5BU5D_t433A63FCC814C0BF5610A58B2424A52072CBE355* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// ElephantSDK.AdConfig
struct AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig::mopub_keyword
	String_t* ___mopub_keyword_0;
	// System.Boolean ElephantSDK.AdConfig::ad_callback_logs
	bool ___ad_callback_logs_1;
	// System.Boolean ElephantSDK.AdConfig::backup_ads_enabled
	bool ___backup_ads_enabled_2;
	// System.Boolean ElephantSDK.AdConfig::cross_promo_enabled
	bool ___cross_promo_enabled_3;
	// System.String ElephantSDK.AdConfig::cross_promo_ad_unit
	String_t* ___cross_promo_ad_unit_4;
	// System.Int32 ElephantSDK.AdConfig::cross_promo_cache_size
	int32_t ___cross_promo_cache_size_5;
	// System.String ElephantSDK.AdConfig::backup_interstitial_ad_unit
	String_t* ___backup_interstitial_ad_unit_6;
	// System.String ElephantSDK.AdConfig::backup_rewarded_ad_unit
	String_t* ___backup_rewarded_ad_unit_7;
	// ElephantSDK.InterstitialAdLogic ElephantSDK.AdConfig::interstitial_ad_logic
	InterstitialAdLogic_tBB2A1F5C252A5E95EF8461BAB9CE6CED7738563C * ___interstitial_ad_logic_8;
	// ElephantSDK.NetworkIds ElephantSDK.AdConfig::networks
	NetworkIds_tCA637ECF2490334B59608006CBD6E1A290776B50 * ___networks_9;
	// System.Boolean ElephantSDK.AdConfig::network_id_manipulation_enabled
	bool ___network_id_manipulation_enabled_10;
	// System.Collections.Generic.List`1<ElephantSDK.AdConfigParameter> ElephantSDK.AdConfig::parameters
	List_1_t6656D1B8DEB3ED9F1240E0D49F2B1710DFD2C3D5 * ___parameters_11;

public:
	inline static int32_t get_offset_of_mopub_keyword_0() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___mopub_keyword_0)); }
	inline String_t* get_mopub_keyword_0() const { return ___mopub_keyword_0; }
	inline String_t** get_address_of_mopub_keyword_0() { return &___mopub_keyword_0; }
	inline void set_mopub_keyword_0(String_t* value)
	{
		___mopub_keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mopub_keyword_0), (void*)value);
	}

	inline static int32_t get_offset_of_ad_callback_logs_1() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___ad_callback_logs_1)); }
	inline bool get_ad_callback_logs_1() const { return ___ad_callback_logs_1; }
	inline bool* get_address_of_ad_callback_logs_1() { return &___ad_callback_logs_1; }
	inline void set_ad_callback_logs_1(bool value)
	{
		___ad_callback_logs_1 = value;
	}

	inline static int32_t get_offset_of_backup_ads_enabled_2() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___backup_ads_enabled_2)); }
	inline bool get_backup_ads_enabled_2() const { return ___backup_ads_enabled_2; }
	inline bool* get_address_of_backup_ads_enabled_2() { return &___backup_ads_enabled_2; }
	inline void set_backup_ads_enabled_2(bool value)
	{
		___backup_ads_enabled_2 = value;
	}

	inline static int32_t get_offset_of_cross_promo_enabled_3() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___cross_promo_enabled_3)); }
	inline bool get_cross_promo_enabled_3() const { return ___cross_promo_enabled_3; }
	inline bool* get_address_of_cross_promo_enabled_3() { return &___cross_promo_enabled_3; }
	inline void set_cross_promo_enabled_3(bool value)
	{
		___cross_promo_enabled_3 = value;
	}

	inline static int32_t get_offset_of_cross_promo_ad_unit_4() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___cross_promo_ad_unit_4)); }
	inline String_t* get_cross_promo_ad_unit_4() const { return ___cross_promo_ad_unit_4; }
	inline String_t** get_address_of_cross_promo_ad_unit_4() { return &___cross_promo_ad_unit_4; }
	inline void set_cross_promo_ad_unit_4(String_t* value)
	{
		___cross_promo_ad_unit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cross_promo_ad_unit_4), (void*)value);
	}

	inline static int32_t get_offset_of_cross_promo_cache_size_5() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___cross_promo_cache_size_5)); }
	inline int32_t get_cross_promo_cache_size_5() const { return ___cross_promo_cache_size_5; }
	inline int32_t* get_address_of_cross_promo_cache_size_5() { return &___cross_promo_cache_size_5; }
	inline void set_cross_promo_cache_size_5(int32_t value)
	{
		___cross_promo_cache_size_5 = value;
	}

	inline static int32_t get_offset_of_backup_interstitial_ad_unit_6() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___backup_interstitial_ad_unit_6)); }
	inline String_t* get_backup_interstitial_ad_unit_6() const { return ___backup_interstitial_ad_unit_6; }
	inline String_t** get_address_of_backup_interstitial_ad_unit_6() { return &___backup_interstitial_ad_unit_6; }
	inline void set_backup_interstitial_ad_unit_6(String_t* value)
	{
		___backup_interstitial_ad_unit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backup_interstitial_ad_unit_6), (void*)value);
	}

	inline static int32_t get_offset_of_backup_rewarded_ad_unit_7() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___backup_rewarded_ad_unit_7)); }
	inline String_t* get_backup_rewarded_ad_unit_7() const { return ___backup_rewarded_ad_unit_7; }
	inline String_t** get_address_of_backup_rewarded_ad_unit_7() { return &___backup_rewarded_ad_unit_7; }
	inline void set_backup_rewarded_ad_unit_7(String_t* value)
	{
		___backup_rewarded_ad_unit_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backup_rewarded_ad_unit_7), (void*)value);
	}

	inline static int32_t get_offset_of_interstitial_ad_logic_8() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___interstitial_ad_logic_8)); }
	inline InterstitialAdLogic_tBB2A1F5C252A5E95EF8461BAB9CE6CED7738563C * get_interstitial_ad_logic_8() const { return ___interstitial_ad_logic_8; }
	inline InterstitialAdLogic_tBB2A1F5C252A5E95EF8461BAB9CE6CED7738563C ** get_address_of_interstitial_ad_logic_8() { return &___interstitial_ad_logic_8; }
	inline void set_interstitial_ad_logic_8(InterstitialAdLogic_tBB2A1F5C252A5E95EF8461BAB9CE6CED7738563C * value)
	{
		___interstitial_ad_logic_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interstitial_ad_logic_8), (void*)value);
	}

	inline static int32_t get_offset_of_networks_9() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___networks_9)); }
	inline NetworkIds_tCA637ECF2490334B59608006CBD6E1A290776B50 * get_networks_9() const { return ___networks_9; }
	inline NetworkIds_tCA637ECF2490334B59608006CBD6E1A290776B50 ** get_address_of_networks_9() { return &___networks_9; }
	inline void set_networks_9(NetworkIds_tCA637ECF2490334B59608006CBD6E1A290776B50 * value)
	{
		___networks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networks_9), (void*)value);
	}

	inline static int32_t get_offset_of_network_id_manipulation_enabled_10() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___network_id_manipulation_enabled_10)); }
	inline bool get_network_id_manipulation_enabled_10() const { return ___network_id_manipulation_enabled_10; }
	inline bool* get_address_of_network_id_manipulation_enabled_10() { return &___network_id_manipulation_enabled_10; }
	inline void set_network_id_manipulation_enabled_10(bool value)
	{
		___network_id_manipulation_enabled_10 = value;
	}

	inline static int32_t get_offset_of_parameters_11() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF, ___parameters_11)); }
	inline List_1_t6656D1B8DEB3ED9F1240E0D49F2B1710DFD2C3D5 * get_parameters_11() const { return ___parameters_11; }
	inline List_1_t6656D1B8DEB3ED9F1240E0D49F2B1710DFD2C3D5 ** get_address_of_parameters_11() { return &___parameters_11; }
	inline void set_parameters_11(List_1_t6656D1B8DEB3ED9F1240E0D49F2B1710DFD2C3D5 * value)
	{
		___parameters_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_11), (void*)value);
	}
};

struct AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF_StaticFields
{
public:
	// ElephantSDK.AdConfig ElephantSDK.AdConfig::_instance
	AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * ____instance_12;

public:
	inline static int32_t get_offset_of__instance_12() { return static_cast<int32_t>(offsetof(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF_StaticFields, ____instance_12)); }
	inline AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * get__instance_12() const { return ____instance_12; }
	inline AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF ** get_address_of__instance_12() { return &____instance_12; }
	inline void set__instance_12(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * value)
	{
		____instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_12), (void*)value);
	}
};


// ElephantSDK.AdConfigParameter
struct AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfigParameter::key
	String_t* ___key_0;
	// System.String ElephantSDK.AdConfigParameter::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ElephantSDK.BaseData
struct BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972  : public RuntimeObject
{
public:
	// System.String ElephantSDK.BaseData::platform
	String_t* ___platform_0;
	// System.String ElephantSDK.BaseData::idfa
	String_t* ___idfa_1;
	// System.String ElephantSDK.BaseData::idfv
	String_t* ___idfv_2;
	// System.String ElephantSDK.BaseData::bundle
	String_t* ___bundle_3;
	// System.String ElephantSDK.BaseData::lang
	String_t* ___lang_4;
	// System.String ElephantSDK.BaseData::app_version
	String_t* ___app_version_5;
	// System.String ElephantSDK.BaseData::build_number
	String_t* ___build_number_6;
	// System.String ElephantSDK.BaseData::os_version
	String_t* ___os_version_7;
	// System.String ElephantSDK.BaseData::sdk_version
	String_t* ___sdk_version_8;
	// System.String ElephantSDK.BaseData::ad_sdk_version
	String_t* ___ad_sdk_version_9;
	// System.String ElephantSDK.BaseData::device_model
	String_t* ___device_model_10;
	// System.String ElephantSDK.BaseData::user_tag
	String_t* ___user_tag_11;
	// System.Int64 ElephantSDK.BaseData::create_date
	int64_t ___create_date_12;
	// System.Int64 ElephantSDK.BaseData::session_id
	int64_t ___session_id_13;
	// System.Int64 ElephantSDK.BaseData::real_session_id
	int64_t ___real_session_id_14;
	// System.Single ElephantSDK.BaseData::real_time_since_start_up
	float ___real_time_since_start_up_15;
	// System.String ElephantSDK.BaseData::timezone_offset
	String_t* ___timezone_offset_16;
	// System.String ElephantSDK.BaseData::user_id
	String_t* ___user_id_17;
	// System.String ElephantSDK.BaseData::consent_status
	String_t* ___consent_status_18;
	// System.Int32 ElephantSDK.BaseData::order
	int32_t ___order_19;
	// System.Collections.Generic.List`1<ElephantSDK.MirrorData> ElephantSDK.BaseData::mirror_data
	List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * ___mirror_data_20;

public:
	inline static int32_t get_offset_of_platform_0() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___platform_0)); }
	inline String_t* get_platform_0() const { return ___platform_0; }
	inline String_t** get_address_of_platform_0() { return &___platform_0; }
	inline void set_platform_0(String_t* value)
	{
		___platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_0), (void*)value);
	}

	inline static int32_t get_offset_of_idfa_1() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___idfa_1)); }
	inline String_t* get_idfa_1() const { return ___idfa_1; }
	inline String_t** get_address_of_idfa_1() { return &___idfa_1; }
	inline void set_idfa_1(String_t* value)
	{
		___idfa_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idfa_1), (void*)value);
	}

	inline static int32_t get_offset_of_idfv_2() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___idfv_2)); }
	inline String_t* get_idfv_2() const { return ___idfv_2; }
	inline String_t** get_address_of_idfv_2() { return &___idfv_2; }
	inline void set_idfv_2(String_t* value)
	{
		___idfv_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idfv_2), (void*)value);
	}

	inline static int32_t get_offset_of_bundle_3() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___bundle_3)); }
	inline String_t* get_bundle_3() const { return ___bundle_3; }
	inline String_t** get_address_of_bundle_3() { return &___bundle_3; }
	inline void set_bundle_3(String_t* value)
	{
		___bundle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bundle_3), (void*)value);
	}

	inline static int32_t get_offset_of_lang_4() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___lang_4)); }
	inline String_t* get_lang_4() const { return ___lang_4; }
	inline String_t** get_address_of_lang_4() { return &___lang_4; }
	inline void set_lang_4(String_t* value)
	{
		___lang_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lang_4), (void*)value);
	}

	inline static int32_t get_offset_of_app_version_5() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___app_version_5)); }
	inline String_t* get_app_version_5() const { return ___app_version_5; }
	inline String_t** get_address_of_app_version_5() { return &___app_version_5; }
	inline void set_app_version_5(String_t* value)
	{
		___app_version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___app_version_5), (void*)value);
	}

	inline static int32_t get_offset_of_build_number_6() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___build_number_6)); }
	inline String_t* get_build_number_6() const { return ___build_number_6; }
	inline String_t** get_address_of_build_number_6() { return &___build_number_6; }
	inline void set_build_number_6(String_t* value)
	{
		___build_number_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___build_number_6), (void*)value);
	}

	inline static int32_t get_offset_of_os_version_7() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___os_version_7)); }
	inline String_t* get_os_version_7() const { return ___os_version_7; }
	inline String_t** get_address_of_os_version_7() { return &___os_version_7; }
	inline void set_os_version_7(String_t* value)
	{
		___os_version_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___os_version_7), (void*)value);
	}

	inline static int32_t get_offset_of_sdk_version_8() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___sdk_version_8)); }
	inline String_t* get_sdk_version_8() const { return ___sdk_version_8; }
	inline String_t** get_address_of_sdk_version_8() { return &___sdk_version_8; }
	inline void set_sdk_version_8(String_t* value)
	{
		___sdk_version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdk_version_8), (void*)value);
	}

	inline static int32_t get_offset_of_ad_sdk_version_9() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___ad_sdk_version_9)); }
	inline String_t* get_ad_sdk_version_9() const { return ___ad_sdk_version_9; }
	inline String_t** get_address_of_ad_sdk_version_9() { return &___ad_sdk_version_9; }
	inline void set_ad_sdk_version_9(String_t* value)
	{
		___ad_sdk_version_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_sdk_version_9), (void*)value);
	}

	inline static int32_t get_offset_of_device_model_10() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___device_model_10)); }
	inline String_t* get_device_model_10() const { return ___device_model_10; }
	inline String_t** get_address_of_device_model_10() { return &___device_model_10; }
	inline void set_device_model_10(String_t* value)
	{
		___device_model_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_model_10), (void*)value);
	}

	inline static int32_t get_offset_of_user_tag_11() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___user_tag_11)); }
	inline String_t* get_user_tag_11() const { return ___user_tag_11; }
	inline String_t** get_address_of_user_tag_11() { return &___user_tag_11; }
	inline void set_user_tag_11(String_t* value)
	{
		___user_tag_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_tag_11), (void*)value);
	}

	inline static int32_t get_offset_of_create_date_12() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___create_date_12)); }
	inline int64_t get_create_date_12() const { return ___create_date_12; }
	inline int64_t* get_address_of_create_date_12() { return &___create_date_12; }
	inline void set_create_date_12(int64_t value)
	{
		___create_date_12 = value;
	}

	inline static int32_t get_offset_of_session_id_13() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___session_id_13)); }
	inline int64_t get_session_id_13() const { return ___session_id_13; }
	inline int64_t* get_address_of_session_id_13() { return &___session_id_13; }
	inline void set_session_id_13(int64_t value)
	{
		___session_id_13 = value;
	}

	inline static int32_t get_offset_of_real_session_id_14() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___real_session_id_14)); }
	inline int64_t get_real_session_id_14() const { return ___real_session_id_14; }
	inline int64_t* get_address_of_real_session_id_14() { return &___real_session_id_14; }
	inline void set_real_session_id_14(int64_t value)
	{
		___real_session_id_14 = value;
	}

	inline static int32_t get_offset_of_real_time_since_start_up_15() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___real_time_since_start_up_15)); }
	inline float get_real_time_since_start_up_15() const { return ___real_time_since_start_up_15; }
	inline float* get_address_of_real_time_since_start_up_15() { return &___real_time_since_start_up_15; }
	inline void set_real_time_since_start_up_15(float value)
	{
		___real_time_since_start_up_15 = value;
	}

	inline static int32_t get_offset_of_timezone_offset_16() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___timezone_offset_16)); }
	inline String_t* get_timezone_offset_16() const { return ___timezone_offset_16; }
	inline String_t** get_address_of_timezone_offset_16() { return &___timezone_offset_16; }
	inline void set_timezone_offset_16(String_t* value)
	{
		___timezone_offset_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timezone_offset_16), (void*)value);
	}

	inline static int32_t get_offset_of_user_id_17() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___user_id_17)); }
	inline String_t* get_user_id_17() const { return ___user_id_17; }
	inline String_t** get_address_of_user_id_17() { return &___user_id_17; }
	inline void set_user_id_17(String_t* value)
	{
		___user_id_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_id_17), (void*)value);
	}

	inline static int32_t get_offset_of_consent_status_18() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___consent_status_18)); }
	inline String_t* get_consent_status_18() const { return ___consent_status_18; }
	inline String_t** get_address_of_consent_status_18() { return &___consent_status_18; }
	inline void set_consent_status_18(String_t* value)
	{
		___consent_status_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consent_status_18), (void*)value);
	}

	inline static int32_t get_offset_of_order_19() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___order_19)); }
	inline int32_t get_order_19() const { return ___order_19; }
	inline int32_t* get_address_of_order_19() { return &___order_19; }
	inline void set_order_19(int32_t value)
	{
		___order_19 = value;
	}

	inline static int32_t get_offset_of_mirror_data_20() { return static_cast<int32_t>(offsetof(BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972, ___mirror_data_20)); }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * get_mirror_data_20() const { return ___mirror_data_20; }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D ** get_address_of_mirror_data_20() { return &___mirror_data_20; }
	inline void set_mirror_data_20(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * value)
	{
		___mirror_data_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirror_data_20), (void*)value);
	}
};


// ElephantSDK.ElephantData
struct ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC  : public RuntimeObject
{
public:
	// System.String ElephantSDK.ElephantData::data
	String_t* ___data_0;
	// System.Int64 ElephantSDK.ElephantData::current_session_id
	int64_t ___current_session_id_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC, ___data_0)); }
	inline String_t* get_data_0() const { return ___data_0; }
	inline String_t** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(String_t* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_session_id_1() { return static_cast<int32_t>(offsetof(ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC, ___current_session_id_1)); }
	inline int64_t get_current_session_id_1() const { return ___current_session_id_1; }
	inline int64_t* get_address_of_current_session_id_1() { return &___current_session_id_1; }
	inline void set_current_session_id_1(int64_t value)
	{
		___current_session_id_1 = value;
	}
};


// ElephantSDK.ElephantRequest
struct ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70  : public RuntimeObject
{
public:
	// System.String ElephantSDK.ElephantRequest::url
	String_t* ___url_0;
	// System.String ElephantSDK.ElephantRequest::data
	String_t* ___data_1;
	// System.Int32 ElephantSDK.ElephantRequest::tryCount
	int32_t ___tryCount_2;
	// System.Int64 ElephantSDK.ElephantRequest::lastTryTS
	int64_t ___lastTryTS_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_tryCount_2() { return static_cast<int32_t>(offsetof(ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70, ___tryCount_2)); }
	inline int32_t get_tryCount_2() const { return ___tryCount_2; }
	inline int32_t* get_address_of_tryCount_2() { return &___tryCount_2; }
	inline void set_tryCount_2(int32_t value)
	{
		___tryCount_2 = value;
	}

	inline static int32_t get_offset_of_lastTryTS_3() { return static_cast<int32_t>(offsetof(ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70, ___lastTryTS_3)); }
	inline int64_t get_lastTryTS_3() const { return ___lastTryTS_3; }
	inline int64_t* get_address_of_lastTryTS_3() { return &___lastTryTS_3; }
	inline void set_lastTryTS_3(int64_t value)
	{
		___lastTryTS_3 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// ElephantSDK.IapStatusResponse
struct IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00  : public RuntimeObject
{
public:
	// System.Boolean ElephantSDK.IapStatusResponse::is_banned
	bool ___is_banned_0;
	// System.String ElephantSDK.IapStatusResponse::message
	String_t* ___message_1;
	// System.String ElephantSDK.IapStatusResponse::link
	String_t* ___link_2;

public:
	inline static int32_t get_offset_of_is_banned_0() { return static_cast<int32_t>(offsetof(IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00, ___is_banned_0)); }
	inline bool get_is_banned_0() const { return ___is_banned_0; }
	inline bool* get_address_of_is_banned_0() { return &___is_banned_0; }
	inline void set_is_banned_0(bool value)
	{
		___is_banned_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_1), (void*)value);
	}

	inline static int32_t get_offset_of_link_2() { return static_cast<int32_t>(offsetof(IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00, ___link_2)); }
	inline String_t* get_link_2() const { return ___link_2; }
	inline String_t** get_address_of_link_2() { return &___link_2; }
	inline void set_link_2(String_t* value)
	{
		___link_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___link_2), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// ElephantSDK.OpenResponse
struct OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252  : public RuntimeObject
{
public:
	// System.String ElephantSDK.OpenResponse::user_id
	String_t* ___user_id_0;
	// System.Boolean ElephantSDK.OpenResponse::consent_required
	bool ___consent_required_1;
	// System.String ElephantSDK.OpenResponse::gdpr_body_text
	String_t* ___gdpr_body_text_2;
	// System.Boolean ElephantSDK.OpenResponse::consent_status
	bool ___consent_status_3;
	// System.String ElephantSDK.OpenResponse::gdpr_option_1
	String_t* ___gdpr_option_1_4;
	// System.String ElephantSDK.OpenResponse::gdpr_option_2
	String_t* ___gdpr_option_2_5;
	// System.String ElephantSDK.OpenResponse::gdpr_option_3
	String_t* ___gdpr_option_3_6;
	// ElephantSDK.GDPROptionDetailModel ElephantSDK.OpenResponse::gdpr_option_1_data
	GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * ___gdpr_option_1_data_7;
	// ElephantSDK.GDPROptionDetailModel ElephantSDK.OpenResponse::gdpr_option_2_data
	GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * ___gdpr_option_2_data_8;
	// ElephantSDK.GDPROptionDetailModel ElephantSDK.OpenResponse::gdpr_option_3_data
	GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * ___gdpr_option_3_data_9;
	// System.String ElephantSDK.OpenResponse::remote_config_json
	String_t* ___remote_config_json_10;
	// ElephantSDK.AdConfig ElephantSDK.OpenResponse::ad_config
	AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * ___ad_config_11;
	// ElephantSDK.InternalConfig ElephantSDK.OpenResponse::internal_config
	InternalConfig_t4F97F66C14A354B444AC1C7A478E654E747AE8F8 * ___internal_config_12;
	// System.Collections.Generic.List`1<ElephantSDK.MirrorData> ElephantSDK.OpenResponse::mirror_data
	List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * ___mirror_data_13;
	// System.String ElephantSDK.OpenResponse::hash
	String_t* ___hash_14;

public:
	inline static int32_t get_offset_of_user_id_0() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___user_id_0)); }
	inline String_t* get_user_id_0() const { return ___user_id_0; }
	inline String_t** get_address_of_user_id_0() { return &___user_id_0; }
	inline void set_user_id_0(String_t* value)
	{
		___user_id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___user_id_0), (void*)value);
	}

	inline static int32_t get_offset_of_consent_required_1() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___consent_required_1)); }
	inline bool get_consent_required_1() const { return ___consent_required_1; }
	inline bool* get_address_of_consent_required_1() { return &___consent_required_1; }
	inline void set_consent_required_1(bool value)
	{
		___consent_required_1 = value;
	}

	inline static int32_t get_offset_of_gdpr_body_text_2() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_body_text_2)); }
	inline String_t* get_gdpr_body_text_2() const { return ___gdpr_body_text_2; }
	inline String_t** get_address_of_gdpr_body_text_2() { return &___gdpr_body_text_2; }
	inline void set_gdpr_body_text_2(String_t* value)
	{
		___gdpr_body_text_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_body_text_2), (void*)value);
	}

	inline static int32_t get_offset_of_consent_status_3() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___consent_status_3)); }
	inline bool get_consent_status_3() const { return ___consent_status_3; }
	inline bool* get_address_of_consent_status_3() { return &___consent_status_3; }
	inline void set_consent_status_3(bool value)
	{
		___consent_status_3 = value;
	}

	inline static int32_t get_offset_of_gdpr_option_1_4() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_1_4)); }
	inline String_t* get_gdpr_option_1_4() const { return ___gdpr_option_1_4; }
	inline String_t** get_address_of_gdpr_option_1_4() { return &___gdpr_option_1_4; }
	inline void set_gdpr_option_1_4(String_t* value)
	{
		___gdpr_option_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_gdpr_option_2_5() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_2_5)); }
	inline String_t* get_gdpr_option_2_5() const { return ___gdpr_option_2_5; }
	inline String_t** get_address_of_gdpr_option_2_5() { return &___gdpr_option_2_5; }
	inline void set_gdpr_option_2_5(String_t* value)
	{
		___gdpr_option_2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_2_5), (void*)value);
	}

	inline static int32_t get_offset_of_gdpr_option_3_6() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_3_6)); }
	inline String_t* get_gdpr_option_3_6() const { return ___gdpr_option_3_6; }
	inline String_t** get_address_of_gdpr_option_3_6() { return &___gdpr_option_3_6; }
	inline void set_gdpr_option_3_6(String_t* value)
	{
		___gdpr_option_3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_3_6), (void*)value);
	}

	inline static int32_t get_offset_of_gdpr_option_1_data_7() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_1_data_7)); }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * get_gdpr_option_1_data_7() const { return ___gdpr_option_1_data_7; }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 ** get_address_of_gdpr_option_1_data_7() { return &___gdpr_option_1_data_7; }
	inline void set_gdpr_option_1_data_7(GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * value)
	{
		___gdpr_option_1_data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_1_data_7), (void*)value);
	}

	inline static int32_t get_offset_of_gdpr_option_2_data_8() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_2_data_8)); }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * get_gdpr_option_2_data_8() const { return ___gdpr_option_2_data_8; }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 ** get_address_of_gdpr_option_2_data_8() { return &___gdpr_option_2_data_8; }
	inline void set_gdpr_option_2_data_8(GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * value)
	{
		___gdpr_option_2_data_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_2_data_8), (void*)value);
	}

	inline static int32_t get_offset_of_gdpr_option_3_data_9() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___gdpr_option_3_data_9)); }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * get_gdpr_option_3_data_9() const { return ___gdpr_option_3_data_9; }
	inline GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 ** get_address_of_gdpr_option_3_data_9() { return &___gdpr_option_3_data_9; }
	inline void set_gdpr_option_3_data_9(GDPROptionDetailModel_t2DE6F9C619218D32772676611045522DDF0A2EC3 * value)
	{
		___gdpr_option_3_data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gdpr_option_3_data_9), (void*)value);
	}

	inline static int32_t get_offset_of_remote_config_json_10() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___remote_config_json_10)); }
	inline String_t* get_remote_config_json_10() const { return ___remote_config_json_10; }
	inline String_t** get_address_of_remote_config_json_10() { return &___remote_config_json_10; }
	inline void set_remote_config_json_10(String_t* value)
	{
		___remote_config_json_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remote_config_json_10), (void*)value);
	}

	inline static int32_t get_offset_of_ad_config_11() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___ad_config_11)); }
	inline AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * get_ad_config_11() const { return ___ad_config_11; }
	inline AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF ** get_address_of_ad_config_11() { return &___ad_config_11; }
	inline void set_ad_config_11(AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * value)
	{
		___ad_config_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ad_config_11), (void*)value);
	}

	inline static int32_t get_offset_of_internal_config_12() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___internal_config_12)); }
	inline InternalConfig_t4F97F66C14A354B444AC1C7A478E654E747AE8F8 * get_internal_config_12() const { return ___internal_config_12; }
	inline InternalConfig_t4F97F66C14A354B444AC1C7A478E654E747AE8F8 ** get_address_of_internal_config_12() { return &___internal_config_12; }
	inline void set_internal_config_12(InternalConfig_t4F97F66C14A354B444AC1C7A478E654E747AE8F8 * value)
	{
		___internal_config_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_config_12), (void*)value);
	}

	inline static int32_t get_offset_of_mirror_data_13() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___mirror_data_13)); }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * get_mirror_data_13() const { return ___mirror_data_13; }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D ** get_address_of_mirror_data_13() { return &___mirror_data_13; }
	inline void set_mirror_data_13(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * value)
	{
		___mirror_data_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirror_data_13), (void*)value);
	}

	inline static int32_t get_offset_of_hash_14() { return static_cast<int32_t>(offsetof(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252, ___hash_14)); }
	inline String_t* get_hash_14() const { return ___hash_14; }
	inline String_t** get_address_of_hash_14() { return &___hash_14; }
	inline void set_hash_14(String_t* value)
	{
		___hash_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hash_14), (void*)value);
	}
};


// ElephantSDK.Params
struct Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ElephantSDK.Params::stringVals
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___stringVals_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ElephantSDK.Params::intVals
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___intVals_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Double> ElephantSDK.Params::doubleVals
	Dictionary_2_t793098B2057085DD37F45E59C3CF910262F8F1BD * ___doubleVals_2;
	// System.String ElephantSDK.Params::customData
	String_t* ___customData_3;

public:
	inline static int32_t get_offset_of_stringVals_0() { return static_cast<int32_t>(offsetof(Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3, ___stringVals_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_stringVals_0() const { return ___stringVals_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_stringVals_0() { return &___stringVals_0; }
	inline void set_stringVals_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___stringVals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringVals_0), (void*)value);
	}

	inline static int32_t get_offset_of_intVals_1() { return static_cast<int32_t>(offsetof(Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3, ___intVals_1)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_intVals_1() const { return ___intVals_1; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_intVals_1() { return &___intVals_1; }
	inline void set_intVals_1(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___intVals_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intVals_1), (void*)value);
	}

	inline static int32_t get_offset_of_doubleVals_2() { return static_cast<int32_t>(offsetof(Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3, ___doubleVals_2)); }
	inline Dictionary_2_t793098B2057085DD37F45E59C3CF910262F8F1BD * get_doubleVals_2() const { return ___doubleVals_2; }
	inline Dictionary_2_t793098B2057085DD37F45E59C3CF910262F8F1BD ** get_address_of_doubleVals_2() { return &___doubleVals_2; }
	inline void set_doubleVals_2(Dictionary_2_t793098B2057085DD37F45E59C3CF910262F8F1BD * value)
	{
		___doubleVals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doubleVals_2), (void*)value);
	}

	inline static int32_t get_offset_of_customData_3() { return static_cast<int32_t>(offsetof(Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3, ___customData_3)); }
	inline String_t* get_customData_3() const { return ___customData_3; }
	inline String_t** get_address_of_customData_3() { return &___customData_3; }
	inline void set_customData_3(String_t* value)
	{
		___customData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_3), (void*)value);
	}
};


// ElephantSDK.RemoteConfig
struct RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ElephantSDK.RemoteConfig::variables
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___variables_0;
	// System.String ElephantSDK.RemoteConfig::userTag
	String_t* ___userTag_2;
	// System.Boolean ElephantSDK.RemoteConfig::_firstOpen
	bool ____firstOpen_3;

public:
	inline static int32_t get_offset_of_variables_0() { return static_cast<int32_t>(offsetof(RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30, ___variables_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_variables_0() const { return ___variables_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_variables_0() { return &___variables_0; }
	inline void set_variables_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variables_0), (void*)value);
	}

	inline static int32_t get_offset_of_userTag_2() { return static_cast<int32_t>(offsetof(RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30, ___userTag_2)); }
	inline String_t* get_userTag_2() const { return ___userTag_2; }
	inline String_t** get_address_of_userTag_2() { return &___userTag_2; }
	inline void set_userTag_2(String_t* value)
	{
		___userTag_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userTag_2), (void*)value);
	}

	inline static int32_t get_offset_of__firstOpen_3() { return static_cast<int32_t>(offsetof(RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30, ____firstOpen_3)); }
	inline bool get__firstOpen_3() const { return ____firstOpen_3; }
	inline bool* get_address_of__firstOpen_3() { return &____firstOpen_3; }
	inline void set__firstOpen_3(bool value)
	{
		____firstOpen_3 = value;
	}
};

struct RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30_StaticFields
{
public:
	// ElephantSDK.RemoteConfig ElephantSDK.RemoteConfig::instance
	RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30_StaticFields, ___instance_1)); }
	inline RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * get_instance_1() const { return ___instance_1; }
	inline RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_1), (void*)value);
	}
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

// ElephantSDK.VersionData
struct VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4  : public RuntimeObject
{
public:
	// System.String ElephantSDK.VersionData::appVersion
	String_t* ___appVersion_0;
	// System.String ElephantSDK.VersionData::sdkVersion
	String_t* ___sdkVersion_1;
	// System.String ElephantSDK.VersionData::osVersion
	String_t* ___osVersion_2;
	// System.String ElephantSDK.VersionData::adsSdkVersion
	String_t* ___adsSdkVersion_3;
	// System.String ElephantSDK.VersionData::mopubVersion
	String_t* ___mopubVersion_4;
	// System.String ElephantSDK.VersionData::unityVersion
	String_t* ___unityVersion_5;
	// System.Collections.Generic.List`1<ElephantSDK.VersionData/MopubNetworkData> ElephantSDK.VersionData::mopubNetworkData
	List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 * ___mopubNetworkData_6;

public:
	inline static int32_t get_offset_of_appVersion_0() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___appVersion_0)); }
	inline String_t* get_appVersion_0() const { return ___appVersion_0; }
	inline String_t** get_address_of_appVersion_0() { return &___appVersion_0; }
	inline void set_appVersion_0(String_t* value)
	{
		___appVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appVersion_0), (void*)value);
	}

	inline static int32_t get_offset_of_sdkVersion_1() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___sdkVersion_1)); }
	inline String_t* get_sdkVersion_1() const { return ___sdkVersion_1; }
	inline String_t** get_address_of_sdkVersion_1() { return &___sdkVersion_1; }
	inline void set_sdkVersion_1(String_t* value)
	{
		___sdkVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sdkVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_osVersion_2() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___osVersion_2)); }
	inline String_t* get_osVersion_2() const { return ___osVersion_2; }
	inline String_t** get_address_of_osVersion_2() { return &___osVersion_2; }
	inline void set_osVersion_2(String_t* value)
	{
		___osVersion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___osVersion_2), (void*)value);
	}

	inline static int32_t get_offset_of_adsSdkVersion_3() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___adsSdkVersion_3)); }
	inline String_t* get_adsSdkVersion_3() const { return ___adsSdkVersion_3; }
	inline String_t** get_address_of_adsSdkVersion_3() { return &___adsSdkVersion_3; }
	inline void set_adsSdkVersion_3(String_t* value)
	{
		___adsSdkVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adsSdkVersion_3), (void*)value);
	}

	inline static int32_t get_offset_of_mopubVersion_4() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___mopubVersion_4)); }
	inline String_t* get_mopubVersion_4() const { return ___mopubVersion_4; }
	inline String_t** get_address_of_mopubVersion_4() { return &___mopubVersion_4; }
	inline void set_mopubVersion_4(String_t* value)
	{
		___mopubVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mopubVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_unityVersion_5() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___unityVersion_5)); }
	inline String_t* get_unityVersion_5() const { return ___unityVersion_5; }
	inline String_t** get_address_of_unityVersion_5() { return &___unityVersion_5; }
	inline void set_unityVersion_5(String_t* value)
	{
		___unityVersion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityVersion_5), (void*)value);
	}

	inline static int32_t get_offset_of_mopubNetworkData_6() { return static_cast<int32_t>(offsetof(VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4, ___mopubNetworkData_6)); }
	inline List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 * get_mopubNetworkData_6() const { return ___mopubNetworkData_6; }
	inline List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 ** get_address_of_mopubNetworkData_6() { return &___mopubNetworkData_6; }
	inline void set_mopubNetworkData_6(List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 * value)
	{
		___mopubNetworkData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mopubNetworkData_6), (void*)value);
	}
};


// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ElephantSDK.AdConfig/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tBE21E75689AD275D9BA4E70513BB9101F7239887  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig/<>c__DisplayClass16_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tBE21E75689AD275D9BA4E70513BB9101F7239887, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// ElephantSDK.AdConfig/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t71165512E3D3AD903A03355ED3F16F7DFF8ACFBE  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig/<>c__DisplayClass17_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t71165512E3D3AD903A03355ED3F16F7DFF8ACFBE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// ElephantSDK.AdConfig/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t6FFB47088E79800E08CFE69005D575B7C2149540  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig/<>c__DisplayClass18_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t6FFB47088E79800E08CFE69005D575B7C2149540, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// ElephantSDK.AdConfig/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tCE4803E46922FA9E5284D10D3032A1DF4E5A325A  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig/<>c__DisplayClass19_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tCE4803E46922FA9E5284D10D3032A1DF4E5A325A, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// ElephantSDK.AdConfig/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t7469D6AADBBD1DE3581DB6DAEF17D77DE640AB5F  : public RuntimeObject
{
public:
	// System.String ElephantSDK.AdConfig/<>c__DisplayClass20_0::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t7469D6AADBBD1DE3581DB6DAEF17D77DE640AB5F, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43  : public RuntimeObject
{
public:
	// System.Int32 EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EpicToonFX.ETFXLoopScript EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>4__this
	ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<effectPlayer>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CeffectPlayerU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43, ___U3CU3E4__this_2)); }
	inline ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeffectPlayerU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43, ___U3CeffectPlayerU3E5__2_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CeffectPlayerU3E5__2_3() const { return ___U3CeffectPlayerU3E5__2_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CeffectPlayerU3E5__2_3() { return &___U3CeffectPlayerU3E5__2_3; }
	inline void set_U3CeffectPlayerU3E5__2_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CeffectPlayerU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeffectPlayerU3E5__2_3), (void*)value);
	}
};


// ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66
struct U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA  : public RuntimeObject
{
public:
	// System.Int32 ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::<>4__this
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___U3CU3E4__this_2;
	// System.Action`2<System.Boolean,System.String> ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::callback
	Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * ___callback_3;
	// UnityEngine.Networking.UnityWebRequest ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA, ___U3CU3E4__this_2)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA, ___callback_3)); }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * get_callback_3() const { return ___callback_3; }
	inline Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}
};


// ElephantSDK.ElephantCore/<OpenRequest>d__63
struct U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638  : public RuntimeObject
{
public:
	// System.Int32 ElephantSDK.ElephantCore/<OpenRequest>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ElephantSDK.ElephantCore/<OpenRequest>d__63::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore/<OpenRequest>d__63::<>4__this
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___U3CU3E4__this_2;
	// System.Boolean ElephantSDK.ElephantCore/<OpenRequest>d__63::isOldUser
	bool ___isOldUser_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638, ___U3CU3E4__this_2)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_isOldUser_3() { return static_cast<int32_t>(offsetof(U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638, ___isOldUser_3)); }
	inline bool get_isOldUser_3() const { return ___isOldUser_3; }
	inline bool* get_address_of_isOldUser_3() { return &___isOldUser_3; }
	inline void set_isOldUser_3(bool value)
	{
		___isOldUser_3 = value;
	}
};


// ElephantSDK.ElephantCore/<Post>d__75
struct U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381  : public RuntimeObject
{
public:
	// System.Int32 ElephantSDK.ElephantCore/<Post>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ElephantSDK.ElephantCore/<Post>d__75::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ElephantSDK.ElephantRequest ElephantSDK.ElephantCore/<Post>d__75::elephantRequest
	ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * ___elephantRequest_2;
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore/<Post>d__75::<>4__this
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_elephantRequest_2() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381, ___elephantRequest_2)); }
	inline ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * get_elephantRequest_2() const { return ___elephantRequest_2; }
	inline ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 ** get_address_of_elephantRequest_2() { return &___elephantRequest_2; }
	inline void set_elephantRequest_2(ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * value)
	{
		___elephantRequest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elephantRequest_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381, ___U3CU3E4__this_3)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// ElephantSDK.ElephantCore/<PostWithResponse>d__64
struct U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582  : public RuntimeObject
{
public:
	// System.Int32 ElephantSDK.ElephantCore/<PostWithResponse>d__64::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ElephantSDK.ElephantCore/<PostWithResponse>d__64::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String ElephantSDK.ElephantCore/<PostWithResponse>d__64::url
	String_t* ___url_2;
	// System.String ElephantSDK.ElephantCore/<PostWithResponse>d__64::bodyJsonString
	String_t* ___bodyJsonString_3;
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore/<PostWithResponse>d__64::<>4__this
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___U3CU3E4__this_4;
	// UnityEngine.Networking.UnityWebRequest ElephantSDK.ElephantCore/<PostWithResponse>d__64::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_bodyJsonString_3() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___bodyJsonString_3)); }
	inline String_t* get_bodyJsonString_3() const { return ___bodyJsonString_3; }
	inline String_t** get_address_of_bodyJsonString_3() { return &___bodyJsonString_3; }
	inline void set_bodyJsonString_3(String_t* value)
	{
		___bodyJsonString_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bodyJsonString_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___U3CU3E4__this_4)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582, ___U3CrequestU3E5__2_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_5() const { return ___U3CrequestU3E5__2_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_5() { return &___U3CrequestU3E5__2_5; }
	inline void set_U3CrequestU3E5__2_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_5), (void*)value);
	}
};


// ElephantSDK.ElephantUI/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1C629244F67DC31069207A4BC87769BBEDA0B86A  : public RuntimeObject
{
public:
	// GDPRNavigationButton ElephantSDK.ElephantUI/<>c__DisplayClass16_0::actionScript
	GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * ___actionScript_0;

public:
	inline static int32_t get_offset_of_actionScript_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_t1C629244F67DC31069207A4BC87769BBEDA0B86A, ___actionScript_0)); }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * get_actionScript_0() const { return ___actionScript_0; }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 ** get_address_of_actionScript_0() { return &___actionScript_0; }
	inline void set_actionScript_0(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * value)
	{
		___actionScript_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionScript_0), (void*)value);
	}
};


// ElephantSDK.ElephantUI/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t303B433555CAFC8F434981A0B678D72D465B4E5B  : public RuntimeObject
{
public:
	// GDPRNavigationButton ElephantSDK.ElephantUI/<>c__DisplayClass17_0::actionScript
	GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * ___actionScript_0;

public:
	inline static int32_t get_offset_of_actionScript_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t303B433555CAFC8F434981A0B678D72D465B4E5B, ___actionScript_0)); }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * get_actionScript_0() const { return ___actionScript_0; }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 ** get_address_of_actionScript_0() { return &___actionScript_0; }
	inline void set_actionScript_0(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * value)
	{
		___actionScript_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionScript_0), (void*)value);
	}
};


// ElephantSDK.ElephantUI/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tF0E74DDB120DCF5FDC696079FE784F28FA46930F  : public RuntimeObject
{
public:
	// GDPRNavigationButton ElephantSDK.ElephantUI/<>c__DisplayClass18_0::actionScript
	GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * ___actionScript_0;

public:
	inline static int32_t get_offset_of_actionScript_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tF0E74DDB120DCF5FDC696079FE784F28FA46930F, ___actionScript_0)); }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * get_actionScript_0() const { return ___actionScript_0; }
	inline GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 ** get_address_of_actionScript_0() { return &___actionScript_0; }
	inline void set_actionScript_0(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * value)
	{
		___actionScript_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionScript_0), (void*)value);
	}
};


// ElephantSDK.ElephantUI/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t3F1B650156E2D4BBCDBE001CA8F34C582A9476DE  : public RuntimeObject
{
public:
	// ToggleController ElephantSDK.ElephantUI/<>c__DisplayClass20_0::toggleController
	ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * ___toggleController_0;

public:
	inline static int32_t get_offset_of_toggleController_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t3F1B650156E2D4BBCDBE001CA8F34C582A9476DE, ___toggleController_0)); }
	inline ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * get_toggleController_0() const { return ___toggleController_0; }
	inline ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 ** get_address_of_toggleController_0() { return &___toggleController_0; }
	inline void set_toggleController_0(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * value)
	{
		___toggleController_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleController_0), (void*)value);
	}
};


// Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4
struct U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Facebook.Unity.Example.GraphRequest Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::<>4__this
	GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D, ___U3CU3E4__this_2)); }
	inline GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// SplashScreen/<SplashScreenTime>d__2
struct U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712  : public RuntimeObject
{
public:
	// System.Int32 SplashScreen/<SplashScreenTime>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SplashScreen/<SplashScreenTime>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SplashScreen SplashScreen/<SplashScreenTime>d__2::<>4__this
	SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712, ___U3CU3E4__this_2)); }
	inline SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ToggleController/<Setup>d__14
struct U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C  : public RuntimeObject
{
public:
	// System.Int32 ToggleController/<Setup>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ToggleController/<Setup>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ToggleController ToggleController/<Setup>d__14::<>4__this
	ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C, ___U3CU3E4__this_2)); }
	inline ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ElephantSDK.VersionCheckUtils/<>c
struct U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_StaticFields
{
public:
	// ElephantSDK.VersionCheckUtils/<>c ElephantSDK.VersionCheckUtils/<>c::<>9
	U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * ___U3CU3E9_0;
	// System.Predicate`1<System.Type> ElephantSDK.VersionCheckUtils/<>c::<>9__6_0
	Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * ___U3CU3E9__6_0_1;
	// System.Predicate`1<System.Type> ElephantSDK.VersionCheckUtils/<>c::<>9__7_0
	Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * ___U3CU3E9__7_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_StaticFields, ___U3CU3E9__7_0_2)); }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * get_U3CU3E9__7_0_2() const { return ___U3CU3E9__7_0_2; }
	inline Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE ** get_address_of_U3CU3E9__7_0_2() { return &___U3CU3E9__7_0_2; }
	inline void set_U3CU3E9__7_0_2(Predicate_1_t64135A89D51E5A42E4CB59A0184A388BF5152BDE * value)
	{
		___U3CU3E9__7_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_2), (void*)value);
	}
};


// ElephantSDK.VersionData/MopubNetworkData
struct MopubNetworkData_tE77E0A4DFEDB744F2E3D3AE68BC050AE4A2C7310  : public RuntimeObject
{
public:
	// System.String ElephantSDK.VersionData/MopubNetworkData::name
	String_t* ___name_0;
	// System.String ElephantSDK.VersionData/MopubNetworkData::version
	String_t* ___version_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MopubNetworkData_tE77E0A4DFEDB744F2E3D3AE68BC050AE4A2C7310, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(MopubNetworkData_tE77E0A4DFEDB744F2E3D3AE68BC050AE4A2C7310, ___version_1)); }
	inline String_t* get_version_1() const { return ___version_1; }
	inline String_t** get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(String_t* value)
	{
		___version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_1), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// ElephantSDK.IapStatusRequest
struct IapStatusRequest_t345C4B4A2A2E5D1725F066608EEA5374F29A6742  : public BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972
{
public:

public:
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
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


// ElephantSDK.OpenData
struct OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03  : public BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972
{
public:
	// System.Boolean ElephantSDK.OpenData::is_old_user
	bool ___is_old_user_21;
	// System.Boolean ElephantSDK.OpenData::gdpr_supported
	bool ___gdpr_supported_22;
	// System.String ElephantSDK.OpenData::hash
	String_t* ___hash_23;

public:
	inline static int32_t get_offset_of_is_old_user_21() { return static_cast<int32_t>(offsetof(OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03, ___is_old_user_21)); }
	inline bool get_is_old_user_21() const { return ___is_old_user_21; }
	inline bool* get_address_of_is_old_user_21() { return &___is_old_user_21; }
	inline void set_is_old_user_21(bool value)
	{
		___is_old_user_21 = value;
	}

	inline static int32_t get_offset_of_gdpr_supported_22() { return static_cast<int32_t>(offsetof(OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03, ___gdpr_supported_22)); }
	inline bool get_gdpr_supported_22() const { return ___gdpr_supported_22; }
	inline bool* get_address_of_gdpr_supported_22() { return &___gdpr_supported_22; }
	inline void set_gdpr_supported_22(bool value)
	{
		___gdpr_supported_22 = value;
	}

	inline static int32_t get_offset_of_hash_23() { return static_cast<int32_t>(offsetof(OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03, ___hash_23)); }
	inline String_t* get_hash_23() const { return ___hash_23; }
	inline String_t** get_address_of_hash_23() { return &___hash_23; }
	inline void set_hash_23(String_t* value)
	{
		___hash_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hash_23), (void*)value);
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// ElephantSDK.SessionData
struct SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F  : public BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972
{
public:
	// System.Int64 ElephantSDK.SessionData::start_time
	int64_t ___start_time_21;
	// System.Int64 ElephantSDK.SessionData::end_time
	int64_t ___end_time_22;

public:
	inline static int32_t get_offset_of_start_time_21() { return static_cast<int32_t>(offsetof(SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F, ___start_time_21)); }
	inline int64_t get_start_time_21() const { return ___start_time_21; }
	inline int64_t* get_address_of_start_time_21() { return &___start_time_21; }
	inline void set_start_time_21(int64_t value)
	{
		___start_time_21 = value;
	}

	inline static int32_t get_offset_of_end_time_22() { return static_cast<int32_t>(offsetof(SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F, ___end_time_22)); }
	inline int64_t get_end_time_22() const { return ___end_time_22; }
	inline int64_t* get_address_of_end_time_22() { return &___end_time_22; }
	inline void set_end_time_22(int64_t value)
	{
		___end_time_22 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Facebook.Unity.HttpMethod
struct HttpMethod_t922A8F74E73EA92A3DBCB1D474C19952F2CBFD1E 
{
public:
	// System.Int32 Facebook.Unity.HttpMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpMethod_t922A8F74E73EA92A3DBCB1D474C19952F2CBFD1E, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Facebook.Unity.ShareDialogMode
struct ShareDialogMode_tEC9C3E5B2930ED7155899666687E8D2B88D770DF 
{
public:
	// System.Int32 Facebook.Unity.ShareDialogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareDialogMode_tEC9C3E5B2930ED7155899666687E8D2B88D770DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// EpicToonFX.ETFXRotation/spaceEnum
struct spaceEnum_t49FF0BBE7C263DA72BEC301D4AAB291C9C55B217 
{
public:
	// System.Int32 EpicToonFX.ETFXRotation/spaceEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(spaceEnum_t49FF0BBE7C263DA72BEC301D4AAB291C9C55B217, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ElephantSDK.ElephantCore/<InitSDK>d__57
struct U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F  : public RuntimeObject
{
public:
	// System.Int32 ElephantSDK.ElephantCore/<InitSDK>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ElephantSDK.ElephantCore/<InitSDK>d__57::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean ElephantSDK.ElephantCore/<InitSDK>d__57::isOldUser
	bool ___isOldUser_2;
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore/<InitSDK>d__57::<>4__this
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___U3CU3E4__this_3;
	// System.Single ElephantSDK.ElephantCore/<InitSDK>d__57::<startTime>5__2
	float ___U3CstartTimeU3E5__2_4;
	// System.Single ElephantSDK.ElephantCore/<InitSDK>d__57::<realTimeSinceStartup>5__3
	float ___U3CrealTimeSinceStartupU3E5__3_5;
	// System.DateTime ElephantSDK.ElephantCore/<InitSDK>d__57::<realTimeBeforeRequest>5__4
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CrealTimeBeforeRequestU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_isOldUser_2() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___isOldUser_2)); }
	inline bool get_isOldUser_2() const { return ___isOldUser_2; }
	inline bool* get_address_of_isOldUser_2() { return &___isOldUser_2; }
	inline void set_isOldUser_2(bool value)
	{
		___isOldUser_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CU3E4__this_3)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CstartTimeU3E5__2_4)); }
	inline float get_U3CstartTimeU3E5__2_4() const { return ___U3CstartTimeU3E5__2_4; }
	inline float* get_address_of_U3CstartTimeU3E5__2_4() { return &___U3CstartTimeU3E5__2_4; }
	inline void set_U3CstartTimeU3E5__2_4(float value)
	{
		___U3CstartTimeU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CrealTimeSinceStartupU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CrealTimeSinceStartupU3E5__3_5)); }
	inline float get_U3CrealTimeSinceStartupU3E5__3_5() const { return ___U3CrealTimeSinceStartupU3E5__3_5; }
	inline float* get_address_of_U3CrealTimeSinceStartupU3E5__3_5() { return &___U3CrealTimeSinceStartupU3E5__3_5; }
	inline void set_U3CrealTimeSinceStartupU3E5__3_5(float value)
	{
		___U3CrealTimeSinceStartupU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CrealTimeBeforeRequestU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F, ___U3CrealTimeBeforeRequestU3E5__4_6)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CrealTimeBeforeRequestU3E5__4_6() const { return ___U3CrealTimeBeforeRequestU3E5__4_6; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CrealTimeBeforeRequestU3E5__4_6() { return &___U3CrealTimeBeforeRequestU3E5__4_6; }
	inline void set_U3CrealTimeBeforeRequestU3E5__4_6(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CrealTimeBeforeRequestU3E5__4_6 = value;
	}
};


// GDPRNavigationButton/GDPRButtonAction
struct GDPRButtonAction_tA67339D73C61B445973B9C9F2A13AED6D95EFA8E 
{
public:
	// System.Int32 GDPRNavigationButton/GDPRButtonAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GDPRButtonAction_tA67339D73C61B445973B9C9F2A13AED6D95EFA8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameManager/GameState
struct GameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2 
{
public:
	// System.Int32 GameManager/GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ElephantSDK.IdfaConsentResult/Status
struct Status_tECE80ECB0C13CB953B0E1250FE2CDA3E841763E8 
{
public:
	// System.Int32 ElephantSDK.IdfaConsentResult/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tECE80ECB0C13CB953B0E1250FE2CDA3E841763E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LevelManager/LoaderType
struct LoaderType_tBFEF28DF588B113532EF04EF989333FD96A30FF6 
{
public:
	// System.Int32 LevelManager/LoaderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoaderType_tBFEF28DF588B113532EF04EF989333FD96A30FF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.Example.MainMenu/Scope
struct Scope_t9ED9B2B6DE200A0D12203BB69756346E0AF1B0B1 
{
public:
	// System.Int32 Facebook.Unity.Example.MainMenu/Scope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Scope_t9ED9B2B6DE200A0D12203BB69756346E0AF1B0B1, ___value___2)); }
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


// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D  : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_pinvoke : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_marshaled_com : public DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// System.Action`2<System.Boolean,System.String>
struct Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3  : public MulticastDelegate_t
{
public:

public:
};


// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ElephantSDK.OnInitialized
struct OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6  : public MulticastDelegate_t
{
public:

public:
};


// ElephantSDK.OnOpenResult
struct OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7  : public MulticastDelegate_t
{
public:

public:
};


// ElephantSDK.OnRemoteConfigLoaded
struct OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6  : public MulticastDelegate_t
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


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
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


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Facebook.Unity.Example.ConsoleBase
struct ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Facebook.Unity.Example.ConsoleBase::status
	String_t* ___status_6;
	// System.String Facebook.Unity.Example.ConsoleBase::lastResponse
	String_t* ___lastResponse_7;
	// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::scrollPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollPosition_8;
	// System.Nullable`1<System.Single> Facebook.Unity.Example.ConsoleBase::scaleFactor
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___scaleFactor_9;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___textStyle_10;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::buttonStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___buttonStyle_11;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textInputStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___textInputStyle_12;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::labelStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___labelStyle_13;
	// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::<LastResponseTexture>k__BackingField
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U3CLastResponseTextureU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_status_6() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___status_6)); }
	inline String_t* get_status_6() const { return ___status_6; }
	inline String_t** get_address_of_status_6() { return &___status_6; }
	inline void set_status_6(String_t* value)
	{
		___status_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___status_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastResponse_7() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___lastResponse_7)); }
	inline String_t* get_lastResponse_7() const { return ___lastResponse_7; }
	inline String_t** get_address_of_lastResponse_7() { return &___lastResponse_7; }
	inline void set_lastResponse_7(String_t* value)
	{
		___lastResponse_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastResponse_7), (void*)value);
	}

	inline static int32_t get_offset_of_scrollPosition_8() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___scrollPosition_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollPosition_8() const { return ___scrollPosition_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollPosition_8() { return &___scrollPosition_8; }
	inline void set_scrollPosition_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollPosition_8 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_9() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___scaleFactor_9)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_scaleFactor_9() const { return ___scaleFactor_9; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_scaleFactor_9() { return &___scaleFactor_9; }
	inline void set_scaleFactor_9(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___scaleFactor_9 = value;
	}

	inline static int32_t get_offset_of_textStyle_10() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___textStyle_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_textStyle_10() const { return ___textStyle_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_textStyle_10() { return &___textStyle_10; }
	inline void set_textStyle_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___textStyle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textStyle_10), (void*)value);
	}

	inline static int32_t get_offset_of_buttonStyle_11() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___buttonStyle_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_buttonStyle_11() const { return ___buttonStyle_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_buttonStyle_11() { return &___buttonStyle_11; }
	inline void set_buttonStyle_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___buttonStyle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonStyle_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInputStyle_12() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___textInputStyle_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_textInputStyle_12() const { return ___textInputStyle_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_textInputStyle_12() { return &___textInputStyle_12; }
	inline void set_textInputStyle_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___textInputStyle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInputStyle_12), (void*)value);
	}

	inline static int32_t get_offset_of_labelStyle_13() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___labelStyle_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_labelStyle_13() const { return ___labelStyle_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_labelStyle_13() { return &___labelStyle_13; }
	inline void set_labelStyle_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___labelStyle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelStyle_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastResponseTextureU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF, ___U3CLastResponseTextureU3Ek__BackingField_14)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U3CLastResponseTextureU3Ek__BackingField_14() const { return ___U3CLastResponseTextureU3Ek__BackingField_14; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U3CLastResponseTextureU3Ek__BackingField_14() { return &___U3CLastResponseTextureU3Ek__BackingField_14; }
	inline void set_U3CLastResponseTextureU3Ek__BackingField_14(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U3CLastResponseTextureU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLastResponseTextureU3Ek__BackingField_14), (void*)value);
	}
};

struct ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::menuStack
	Stack_1_tF2F8B5476F614882C00CEDDE027482B818D7FF1D * ___menuStack_5;

public:
	inline static int32_t get_offset_of_menuStack_5() { return static_cast<int32_t>(offsetof(ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF_StaticFields, ___menuStack_5)); }
	inline Stack_1_tF2F8B5476F614882C00CEDDE027482B818D7FF1D * get_menuStack_5() const { return ___menuStack_5; }
	inline Stack_1_tF2F8B5476F614882C00CEDDE027482B818D7FF1D ** get_address_of_menuStack_5() { return &___menuStack_5; }
	inline void set_menuStack_5(Stack_1_tF2F8B5476F614882C00CEDDE027482B818D7FF1D * value)
	{
		___menuStack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuStack_5), (void*)value);
	}
};


// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript::chosenEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chosenEffect_4;
	// System.Single EpicToonFX.ETFXLoopScript::loopTimeLimit
	float ___loopTimeLimit_5;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutLight
	bool ___spawnWithoutLight_6;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutSound
	bool ___spawnWithoutSound_7;

public:
	inline static int32_t get_offset_of_chosenEffect_4() { return static_cast<int32_t>(offsetof(ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75, ___chosenEffect_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chosenEffect_4() const { return ___chosenEffect_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chosenEffect_4() { return &___chosenEffect_4; }
	inline void set_chosenEffect_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chosenEffect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chosenEffect_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopTimeLimit_5() { return static_cast<int32_t>(offsetof(ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75, ___loopTimeLimit_5)); }
	inline float get_loopTimeLimit_5() const { return ___loopTimeLimit_5; }
	inline float* get_address_of_loopTimeLimit_5() { return &___loopTimeLimit_5; }
	inline void set_loopTimeLimit_5(float value)
	{
		___loopTimeLimit_5 = value;
	}

	inline static int32_t get_offset_of_spawnWithoutLight_6() { return static_cast<int32_t>(offsetof(ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75, ___spawnWithoutLight_6)); }
	inline bool get_spawnWithoutLight_6() const { return ___spawnWithoutLight_6; }
	inline bool* get_address_of_spawnWithoutLight_6() { return &___spawnWithoutLight_6; }
	inline void set_spawnWithoutLight_6(bool value)
	{
		___spawnWithoutLight_6 = value;
	}

	inline static int32_t get_offset_of_spawnWithoutSound_7() { return static_cast<int32_t>(offsetof(ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75, ___spawnWithoutSound_7)); }
	inline bool get_spawnWithoutSound_7() const { return ___spawnWithoutSound_7; }
	inline bool* get_address_of_spawnWithoutSound_7() { return &___spawnWithoutSound_7; }
	inline void set_spawnWithoutSound_7(bool value)
	{
		___spawnWithoutSound_7 = value;
	}
};


// ElephantSDK.ElephantCore
struct ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ElephantSDK.ElephantCore::GameID
	String_t* ___GameID_4;
	// System.String ElephantSDK.ElephantCore::GameSecret
	String_t* ___GameSecret_5;
	// System.String ElephantSDK.ElephantCore::defaultGameID
	String_t* ___defaultGameID_6;
	// System.String ElephantSDK.ElephantCore::defaultGameSecret
	String_t* ___defaultGameSecret_7;
	// System.Collections.Generic.Queue`1<ElephantSDK.ElephantRequest> ElephantSDK.ElephantCore::_queue
	Queue_1_tD3B2F8F5DAC9904486A85C2E5BCE00A5A2EE499A * ____queue_19;
	// System.Collections.Generic.List`1<ElephantSDK.ElephantRequest> ElephantSDK.ElephantCore::_failedQueue
	List_1_tD1430EC7103FECC75EA5FCA0A58E6186898F1F02 * ____failedQueue_20;
	// System.Boolean ElephantSDK.ElephantCore::processQueues
	bool ___processQueues_21;
	// System.Boolean ElephantSDK.ElephantCore::sdkIsReady
	bool ___sdkIsReady_23;
	// System.Boolean ElephantSDK.ElephantCore::openRequestWaiting
	bool ___openRequestWaiting_24;
	// System.Boolean ElephantSDK.ElephantCore::openRequestSucceded
	bool ___openRequestSucceded_25;
	// ElephantSDK.SessionData ElephantSDK.ElephantCore::currentSession
	SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * ___currentSession_26;
	// System.Int64 ElephantSDK.ElephantCore::realSessionId
	int64_t ___realSessionId_27;
	// System.String ElephantSDK.ElephantCore::idfa
	String_t* ___idfa_28;
	// System.String ElephantSDK.ElephantCore::idfv
	String_t* ___idfv_29;
	// System.String ElephantSDK.ElephantCore::buildNumber
	String_t* ___buildNumber_30;
	// System.String ElephantSDK.ElephantCore::consentStatus
	String_t* ___consentStatus_31;
	// System.String ElephantSDK.ElephantCore::userId
	String_t* ___userId_32;
	// System.Collections.Generic.List`1<ElephantSDK.MirrorData> ElephantSDK.ElephantCore::mirrorData
	List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * ___mirrorData_33;
	// System.Int32 ElephantSDK.ElephantCore::eventOrder
	int32_t ___eventOrder_34;
	// System.Boolean ElephantSDK.ElephantCore::isIapBanned
	bool ___isIapBanned_35;
	// ElephantSDK.OpenResponse ElephantSDK.ElephantCore::openResponse
	OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * ___openResponse_36;
	// System.String ElephantSDK.ElephantCore::cachedOpenResponse
	String_t* ___cachedOpenResponse_37;
	// System.Boolean ElephantSDK.ElephantCore::gdprSupported
	bool ___gdprSupported_43;
	// System.Single ElephantSDK.ElephantCore::_nextActionTime
	float ____nextActionTime_47;
	// System.Single ElephantSDK.ElephantCore::_period
	float ____period_48;
	// System.Single ElephantSDK.ElephantCore::_fps
	float ____fps_49;

public:
	inline static int32_t get_offset_of_GameID_4() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___GameID_4)); }
	inline String_t* get_GameID_4() const { return ___GameID_4; }
	inline String_t** get_address_of_GameID_4() { return &___GameID_4; }
	inline void set_GameID_4(String_t* value)
	{
		___GameID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameID_4), (void*)value);
	}

	inline static int32_t get_offset_of_GameSecret_5() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___GameSecret_5)); }
	inline String_t* get_GameSecret_5() const { return ___GameSecret_5; }
	inline String_t** get_address_of_GameSecret_5() { return &___GameSecret_5; }
	inline void set_GameSecret_5(String_t* value)
	{
		___GameSecret_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameSecret_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultGameID_6() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___defaultGameID_6)); }
	inline String_t* get_defaultGameID_6() const { return ___defaultGameID_6; }
	inline String_t** get_address_of_defaultGameID_6() { return &___defaultGameID_6; }
	inline void set_defaultGameID_6(String_t* value)
	{
		___defaultGameID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultGameID_6), (void*)value);
	}

	inline static int32_t get_offset_of_defaultGameSecret_7() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___defaultGameSecret_7)); }
	inline String_t* get_defaultGameSecret_7() const { return ___defaultGameSecret_7; }
	inline String_t** get_address_of_defaultGameSecret_7() { return &___defaultGameSecret_7; }
	inline void set_defaultGameSecret_7(String_t* value)
	{
		___defaultGameSecret_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultGameSecret_7), (void*)value);
	}

	inline static int32_t get_offset_of__queue_19() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ____queue_19)); }
	inline Queue_1_tD3B2F8F5DAC9904486A85C2E5BCE00A5A2EE499A * get__queue_19() const { return ____queue_19; }
	inline Queue_1_tD3B2F8F5DAC9904486A85C2E5BCE00A5A2EE499A ** get_address_of__queue_19() { return &____queue_19; }
	inline void set__queue_19(Queue_1_tD3B2F8F5DAC9904486A85C2E5BCE00A5A2EE499A * value)
	{
		____queue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queue_19), (void*)value);
	}

	inline static int32_t get_offset_of__failedQueue_20() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ____failedQueue_20)); }
	inline List_1_tD1430EC7103FECC75EA5FCA0A58E6186898F1F02 * get__failedQueue_20() const { return ____failedQueue_20; }
	inline List_1_tD1430EC7103FECC75EA5FCA0A58E6186898F1F02 ** get_address_of__failedQueue_20() { return &____failedQueue_20; }
	inline void set__failedQueue_20(List_1_tD1430EC7103FECC75EA5FCA0A58E6186898F1F02 * value)
	{
		____failedQueue_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____failedQueue_20), (void*)value);
	}

	inline static int32_t get_offset_of_processQueues_21() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___processQueues_21)); }
	inline bool get_processQueues_21() const { return ___processQueues_21; }
	inline bool* get_address_of_processQueues_21() { return &___processQueues_21; }
	inline void set_processQueues_21(bool value)
	{
		___processQueues_21 = value;
	}

	inline static int32_t get_offset_of_sdkIsReady_23() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___sdkIsReady_23)); }
	inline bool get_sdkIsReady_23() const { return ___sdkIsReady_23; }
	inline bool* get_address_of_sdkIsReady_23() { return &___sdkIsReady_23; }
	inline void set_sdkIsReady_23(bool value)
	{
		___sdkIsReady_23 = value;
	}

	inline static int32_t get_offset_of_openRequestWaiting_24() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___openRequestWaiting_24)); }
	inline bool get_openRequestWaiting_24() const { return ___openRequestWaiting_24; }
	inline bool* get_address_of_openRequestWaiting_24() { return &___openRequestWaiting_24; }
	inline void set_openRequestWaiting_24(bool value)
	{
		___openRequestWaiting_24 = value;
	}

	inline static int32_t get_offset_of_openRequestSucceded_25() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___openRequestSucceded_25)); }
	inline bool get_openRequestSucceded_25() const { return ___openRequestSucceded_25; }
	inline bool* get_address_of_openRequestSucceded_25() { return &___openRequestSucceded_25; }
	inline void set_openRequestSucceded_25(bool value)
	{
		___openRequestSucceded_25 = value;
	}

	inline static int32_t get_offset_of_currentSession_26() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___currentSession_26)); }
	inline SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * get_currentSession_26() const { return ___currentSession_26; }
	inline SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F ** get_address_of_currentSession_26() { return &___currentSession_26; }
	inline void set_currentSession_26(SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * value)
	{
		___currentSession_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSession_26), (void*)value);
	}

	inline static int32_t get_offset_of_realSessionId_27() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___realSessionId_27)); }
	inline int64_t get_realSessionId_27() const { return ___realSessionId_27; }
	inline int64_t* get_address_of_realSessionId_27() { return &___realSessionId_27; }
	inline void set_realSessionId_27(int64_t value)
	{
		___realSessionId_27 = value;
	}

	inline static int32_t get_offset_of_idfa_28() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___idfa_28)); }
	inline String_t* get_idfa_28() const { return ___idfa_28; }
	inline String_t** get_address_of_idfa_28() { return &___idfa_28; }
	inline void set_idfa_28(String_t* value)
	{
		___idfa_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idfa_28), (void*)value);
	}

	inline static int32_t get_offset_of_idfv_29() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___idfv_29)); }
	inline String_t* get_idfv_29() const { return ___idfv_29; }
	inline String_t** get_address_of_idfv_29() { return &___idfv_29; }
	inline void set_idfv_29(String_t* value)
	{
		___idfv_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___idfv_29), (void*)value);
	}

	inline static int32_t get_offset_of_buildNumber_30() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___buildNumber_30)); }
	inline String_t* get_buildNumber_30() const { return ___buildNumber_30; }
	inline String_t** get_address_of_buildNumber_30() { return &___buildNumber_30; }
	inline void set_buildNumber_30(String_t* value)
	{
		___buildNumber_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildNumber_30), (void*)value);
	}

	inline static int32_t get_offset_of_consentStatus_31() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___consentStatus_31)); }
	inline String_t* get_consentStatus_31() const { return ___consentStatus_31; }
	inline String_t** get_address_of_consentStatus_31() { return &___consentStatus_31; }
	inline void set_consentStatus_31(String_t* value)
	{
		___consentStatus_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentStatus_31), (void*)value);
	}

	inline static int32_t get_offset_of_userId_32() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___userId_32)); }
	inline String_t* get_userId_32() const { return ___userId_32; }
	inline String_t** get_address_of_userId_32() { return &___userId_32; }
	inline void set_userId_32(String_t* value)
	{
		___userId_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userId_32), (void*)value);
	}

	inline static int32_t get_offset_of_mirrorData_33() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___mirrorData_33)); }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * get_mirrorData_33() const { return ___mirrorData_33; }
	inline List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D ** get_address_of_mirrorData_33() { return &___mirrorData_33; }
	inline void set_mirrorData_33(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * value)
	{
		___mirrorData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mirrorData_33), (void*)value);
	}

	inline static int32_t get_offset_of_eventOrder_34() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___eventOrder_34)); }
	inline int32_t get_eventOrder_34() const { return ___eventOrder_34; }
	inline int32_t* get_address_of_eventOrder_34() { return &___eventOrder_34; }
	inline void set_eventOrder_34(int32_t value)
	{
		___eventOrder_34 = value;
	}

	inline static int32_t get_offset_of_isIapBanned_35() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___isIapBanned_35)); }
	inline bool get_isIapBanned_35() const { return ___isIapBanned_35; }
	inline bool* get_address_of_isIapBanned_35() { return &___isIapBanned_35; }
	inline void set_isIapBanned_35(bool value)
	{
		___isIapBanned_35 = value;
	}

	inline static int32_t get_offset_of_openResponse_36() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___openResponse_36)); }
	inline OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * get_openResponse_36() const { return ___openResponse_36; }
	inline OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 ** get_address_of_openResponse_36() { return &___openResponse_36; }
	inline void set_openResponse_36(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * value)
	{
		___openResponse_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openResponse_36), (void*)value);
	}

	inline static int32_t get_offset_of_cachedOpenResponse_37() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___cachedOpenResponse_37)); }
	inline String_t* get_cachedOpenResponse_37() const { return ___cachedOpenResponse_37; }
	inline String_t** get_address_of_cachedOpenResponse_37() { return &___cachedOpenResponse_37; }
	inline void set_cachedOpenResponse_37(String_t* value)
	{
		___cachedOpenResponse_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedOpenResponse_37), (void*)value);
	}

	inline static int32_t get_offset_of_gdprSupported_43() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ___gdprSupported_43)); }
	inline bool get_gdprSupported_43() const { return ___gdprSupported_43; }
	inline bool* get_address_of_gdprSupported_43() { return &___gdprSupported_43; }
	inline void set_gdprSupported_43(bool value)
	{
		___gdprSupported_43 = value;
	}

	inline static int32_t get_offset_of__nextActionTime_47() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ____nextActionTime_47)); }
	inline float get__nextActionTime_47() const { return ____nextActionTime_47; }
	inline float* get_address_of__nextActionTime_47() { return &____nextActionTime_47; }
	inline void set__nextActionTime_47(float value)
	{
		____nextActionTime_47 = value;
	}

	inline static int32_t get_offset_of__period_48() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ____period_48)); }
	inline float get__period_48() const { return ____period_48; }
	inline float* get_address_of__period_48() { return &____period_48; }
	inline void set__period_48(float value)
	{
		____period_48 = value;
	}

	inline static int32_t get_offset_of__fps_49() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6, ____fps_49)); }
	inline float get__fps_49() const { return ____fps_49; }
	inline float* get_address_of__fps_49() { return &____fps_49; }
	inline void set__fps_49(float value)
	{
		____fps_49 = value;
	}
};

struct ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields
{
public:
	// ElephantSDK.ElephantCore ElephantSDK.ElephantCore::Instance
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * ___Instance_8;
	// System.Boolean ElephantSDK.ElephantCore::debug
	bool ___debug_9;
	// System.String ElephantSDK.ElephantCore::QUEUE_DATA_FILE
	String_t* ___QUEUE_DATA_FILE_22;
	// System.Int32 ElephantSDK.ElephantCore::MAX_FAILED_COUNT
	int32_t ___MAX_FAILED_COUNT_38;
	// System.String ElephantSDK.ElephantCore::OLD_ELEPHANT_FILE
	String_t* ___OLD_ELEPHANT_FILE_39;
	// System.String ElephantSDK.ElephantCore::REMOTE_CONFIG_FILE
	String_t* ___REMOTE_CONFIG_FILE_40;
	// System.String ElephantSDK.ElephantCore::USER_DB_ID
	String_t* ___USER_DB_ID_41;
	// System.String ElephantSDK.ElephantCore::CACHED_OPEN_RESPONSE
	String_t* ___CACHED_OPEN_RESPONSE_42;
	// ElephantSDK.OnInitialized ElephantSDK.ElephantCore::onInitialized
	OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * ___onInitialized_44;
	// ElephantSDK.OnOpenResult ElephantSDK.ElephantCore::onOpen
	OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * ___onOpen_45;
	// ElephantSDK.OnRemoteConfigLoaded ElephantSDK.ElephantCore::onRemoteConfigLoaded
	OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * ___onRemoteConfigLoaded_46;

public:
	inline static int32_t get_offset_of_Instance_8() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___Instance_8)); }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * get_Instance_8() const { return ___Instance_8; }
	inline ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 ** get_address_of_Instance_8() { return &___Instance_8; }
	inline void set_Instance_8(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * value)
	{
		___Instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_8), (void*)value);
	}

	inline static int32_t get_offset_of_debug_9() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___debug_9)); }
	inline bool get_debug_9() const { return ___debug_9; }
	inline bool* get_address_of_debug_9() { return &___debug_9; }
	inline void set_debug_9(bool value)
	{
		___debug_9 = value;
	}

	inline static int32_t get_offset_of_QUEUE_DATA_FILE_22() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___QUEUE_DATA_FILE_22)); }
	inline String_t* get_QUEUE_DATA_FILE_22() const { return ___QUEUE_DATA_FILE_22; }
	inline String_t** get_address_of_QUEUE_DATA_FILE_22() { return &___QUEUE_DATA_FILE_22; }
	inline void set_QUEUE_DATA_FILE_22(String_t* value)
	{
		___QUEUE_DATA_FILE_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QUEUE_DATA_FILE_22), (void*)value);
	}

	inline static int32_t get_offset_of_MAX_FAILED_COUNT_38() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___MAX_FAILED_COUNT_38)); }
	inline int32_t get_MAX_FAILED_COUNT_38() const { return ___MAX_FAILED_COUNT_38; }
	inline int32_t* get_address_of_MAX_FAILED_COUNT_38() { return &___MAX_FAILED_COUNT_38; }
	inline void set_MAX_FAILED_COUNT_38(int32_t value)
	{
		___MAX_FAILED_COUNT_38 = value;
	}

	inline static int32_t get_offset_of_OLD_ELEPHANT_FILE_39() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___OLD_ELEPHANT_FILE_39)); }
	inline String_t* get_OLD_ELEPHANT_FILE_39() const { return ___OLD_ELEPHANT_FILE_39; }
	inline String_t** get_address_of_OLD_ELEPHANT_FILE_39() { return &___OLD_ELEPHANT_FILE_39; }
	inline void set_OLD_ELEPHANT_FILE_39(String_t* value)
	{
		___OLD_ELEPHANT_FILE_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OLD_ELEPHANT_FILE_39), (void*)value);
	}

	inline static int32_t get_offset_of_REMOTE_CONFIG_FILE_40() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___REMOTE_CONFIG_FILE_40)); }
	inline String_t* get_REMOTE_CONFIG_FILE_40() const { return ___REMOTE_CONFIG_FILE_40; }
	inline String_t** get_address_of_REMOTE_CONFIG_FILE_40() { return &___REMOTE_CONFIG_FILE_40; }
	inline void set_REMOTE_CONFIG_FILE_40(String_t* value)
	{
		___REMOTE_CONFIG_FILE_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___REMOTE_CONFIG_FILE_40), (void*)value);
	}

	inline static int32_t get_offset_of_USER_DB_ID_41() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___USER_DB_ID_41)); }
	inline String_t* get_USER_DB_ID_41() const { return ___USER_DB_ID_41; }
	inline String_t** get_address_of_USER_DB_ID_41() { return &___USER_DB_ID_41; }
	inline void set_USER_DB_ID_41(String_t* value)
	{
		___USER_DB_ID_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USER_DB_ID_41), (void*)value);
	}

	inline static int32_t get_offset_of_CACHED_OPEN_RESPONSE_42() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___CACHED_OPEN_RESPONSE_42)); }
	inline String_t* get_CACHED_OPEN_RESPONSE_42() const { return ___CACHED_OPEN_RESPONSE_42; }
	inline String_t** get_address_of_CACHED_OPEN_RESPONSE_42() { return &___CACHED_OPEN_RESPONSE_42; }
	inline void set_CACHED_OPEN_RESPONSE_42(String_t* value)
	{
		___CACHED_OPEN_RESPONSE_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CACHED_OPEN_RESPONSE_42), (void*)value);
	}

	inline static int32_t get_offset_of_onInitialized_44() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___onInitialized_44)); }
	inline OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * get_onInitialized_44() const { return ___onInitialized_44; }
	inline OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 ** get_address_of_onInitialized_44() { return &___onInitialized_44; }
	inline void set_onInitialized_44(OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * value)
	{
		___onInitialized_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitialized_44), (void*)value);
	}

	inline static int32_t get_offset_of_onOpen_45() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___onOpen_45)); }
	inline OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * get_onOpen_45() const { return ___onOpen_45; }
	inline OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 ** get_address_of_onOpen_45() { return &___onOpen_45; }
	inline void set_onOpen_45(OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * value)
	{
		___onOpen_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onOpen_45), (void*)value);
	}

	inline static int32_t get_offset_of_onRemoteConfigLoaded_46() { return static_cast<int32_t>(offsetof(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields, ___onRemoteConfigLoaded_46)); }
	inline OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * get_onRemoteConfigLoaded_46() const { return ___onRemoteConfigLoaded_46; }
	inline OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 ** get_address_of_onRemoteConfigLoaded_46() { return &___onRemoteConfigLoaded_46; }
	inline void set_onRemoteConfigLoaded_46(OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * value)
	{
		___onRemoteConfigLoaded_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemoteConfigLoaded_46), (void*)value);
	}
};


// GDPRNavigationButton
struct GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GDPRNavigationButton/GDPRButtonAction GDPRNavigationButton::action
	int32_t ___action_4;
	// UnityEngine.GameObject GDPRNavigationButton::currentPage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentPage_5;
	// UnityEngine.GameObject GDPRNavigationButton::page
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___page_6;
	// System.String GDPRNavigationButton::url
	String_t* ___url_7;

public:
	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6, ___action_4)); }
	inline int32_t get_action_4() const { return ___action_4; }
	inline int32_t* get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(int32_t value)
	{
		___action_4 = value;
	}

	inline static int32_t get_offset_of_currentPage_5() { return static_cast<int32_t>(offsetof(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6, ___currentPage_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentPage_5() const { return ___currentPage_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentPage_5() { return &___currentPage_5; }
	inline void set_currentPage_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_page_6() { return static_cast<int32_t>(offsetof(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6, ___page_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_page_6() const { return ___page_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_page_6() { return &___page_6; }
	inline void set_page_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___page_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___page_6), (void*)value);
	}

	inline static int32_t get_offset_of_url_7() { return static_cast<int32_t>(offsetof(GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6, ___url_7)); }
	inline String_t* get_url_7() const { return ___url_7; }
	inline String_t** get_address_of_url_7() { return &___url_7; }
	inline void set_url_7(String_t* value)
	{
		___url_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_7), (void*)value);
	}
};


// SplashScreen
struct SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SplashScreen::time
	float ___time_4;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}
};


// ToggleController
struct ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ToggleController::isOn
	bool ___isOn_4;
	// UnityEngine.Sprite ToggleController::toggleOnBGImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___toggleOnBGImage_5;
	// UnityEngine.Sprite ToggleController::toggleOffBGImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___toggleOffBGImage_6;
	// UnityEngine.UI.Image ToggleController::toggleBgImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___toggleBgImage_7;
	// UnityEngine.RectTransform ToggleController::toggle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___toggle_8;
	// UnityEngine.RectTransform ToggleController::handle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handle_9;
	// System.Single ToggleController::handleSize
	float ___handleSize_10;
	// System.Single ToggleController::onPosX
	float ___onPosX_11;
	// System.Single ToggleController::offPosX
	float ___offPosX_12;
	// System.Single ToggleController::handleOffset
	float ___handleOffset_13;
	// System.Single ToggleController::speed
	float ___speed_14;
	// System.Boolean ToggleController::switching
	bool ___switching_16;

public:
	inline static int32_t get_offset_of_isOn_4() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___isOn_4)); }
	inline bool get_isOn_4() const { return ___isOn_4; }
	inline bool* get_address_of_isOn_4() { return &___isOn_4; }
	inline void set_isOn_4(bool value)
	{
		___isOn_4 = value;
	}

	inline static int32_t get_offset_of_toggleOnBGImage_5() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___toggleOnBGImage_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_toggleOnBGImage_5() const { return ___toggleOnBGImage_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_toggleOnBGImage_5() { return &___toggleOnBGImage_5; }
	inline void set_toggleOnBGImage_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___toggleOnBGImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleOnBGImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_toggleOffBGImage_6() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___toggleOffBGImage_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_toggleOffBGImage_6() const { return ___toggleOffBGImage_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_toggleOffBGImage_6() { return &___toggleOffBGImage_6; }
	inline void set_toggleOffBGImage_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___toggleOffBGImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleOffBGImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_toggleBgImage_7() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___toggleBgImage_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_toggleBgImage_7() const { return ___toggleBgImage_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_toggleBgImage_7() { return &___toggleBgImage_7; }
	inline void set_toggleBgImage_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___toggleBgImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggleBgImage_7), (void*)value);
	}

	inline static int32_t get_offset_of_toggle_8() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___toggle_8)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_toggle_8() const { return ___toggle_8; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_toggle_8() { return &___toggle_8; }
	inline void set_toggle_8(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___toggle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toggle_8), (void*)value);
	}

	inline static int32_t get_offset_of_handle_9() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___handle_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handle_9() const { return ___handle_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handle_9() { return &___handle_9; }
	inline void set_handle_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_9), (void*)value);
	}

	inline static int32_t get_offset_of_handleSize_10() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___handleSize_10)); }
	inline float get_handleSize_10() const { return ___handleSize_10; }
	inline float* get_address_of_handleSize_10() { return &___handleSize_10; }
	inline void set_handleSize_10(float value)
	{
		___handleSize_10 = value;
	}

	inline static int32_t get_offset_of_onPosX_11() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___onPosX_11)); }
	inline float get_onPosX_11() const { return ___onPosX_11; }
	inline float* get_address_of_onPosX_11() { return &___onPosX_11; }
	inline void set_onPosX_11(float value)
	{
		___onPosX_11 = value;
	}

	inline static int32_t get_offset_of_offPosX_12() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___offPosX_12)); }
	inline float get_offPosX_12() const { return ___offPosX_12; }
	inline float* get_address_of_offPosX_12() { return &___offPosX_12; }
	inline void set_offPosX_12(float value)
	{
		___offPosX_12 = value;
	}

	inline static int32_t get_offset_of_handleOffset_13() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___handleOffset_13)); }
	inline float get_handleOffset_13() const { return ___handleOffset_13; }
	inline float* get_address_of_handleOffset_13() { return &___handleOffset_13; }
	inline void set_handleOffset_13(float value)
	{
		___handleOffset_13 = value;
	}

	inline static int32_t get_offset_of_speed_14() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___speed_14)); }
	inline float get_speed_14() const { return ___speed_14; }
	inline float* get_address_of_speed_14() { return &___speed_14; }
	inline void set_speed_14(float value)
	{
		___speed_14 = value;
	}

	inline static int32_t get_offset_of_switching_16() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6, ___switching_16)); }
	inline bool get_switching_16() const { return ___switching_16; }
	inline bool* get_address_of_switching_16() { return &___switching_16; }
	inline void set_switching_16(bool value)
	{
		___switching_16 = value;
	}
};

struct ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6_StaticFields
{
public:
	// System.Single ToggleController::t
	float ___t_15;

public:
	inline static int32_t get_offset_of_t_15() { return static_cast<int32_t>(offsetof(ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6_StaticFields, ___t_15)); }
	inline float get_t_15() const { return ___t_15; }
	inline float* get_address_of_t_15() { return &___t_15; }
	inline void set_t_15(float value)
	{
		___t_15 = value;
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


// Facebook.Unity.Example.MenuBase
struct MenuBase_t4D25192B497B497AA125039BE2FFFB25DD5214F8  : public ConsoleBase_t09D8DD8CE927FB3C3E979DCE284C8BDF0EDD37BF
{
public:

public:
};

struct MenuBase_t4D25192B497B497AA125039BE2FFFB25DD5214F8_StaticFields
{
public:
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Example.MenuBase::shareDialogMode
	int32_t ___shareDialogMode_15;

public:
	inline static int32_t get_offset_of_shareDialogMode_15() { return static_cast<int32_t>(offsetof(MenuBase_t4D25192B497B497AA125039BE2FFFB25DD5214F8_StaticFields, ___shareDialogMode_15)); }
	inline int32_t get_shareDialogMode_15() const { return ___shareDialogMode_15; }
	inline int32_t* get_address_of_shareDialogMode_15() { return &___shareDialogMode_15; }
	inline void set_shareDialogMode_15(int32_t value)
	{
		___shareDialogMode_15 = value;
	}
};


// Facebook.Unity.Example.GraphRequest
struct GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78  : public MenuBase_t4D25192B497B497AA125039BE2FFFB25DD5214F8
{
public:
	// System.String Facebook.Unity.Example.GraphRequest::apiQuery
	String_t* ___apiQuery_16;
	// UnityEngine.Texture2D Facebook.Unity.Example.GraphRequest::profilePic
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___profilePic_17;

public:
	inline static int32_t get_offset_of_apiQuery_16() { return static_cast<int32_t>(offsetof(GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78, ___apiQuery_16)); }
	inline String_t* get_apiQuery_16() const { return ___apiQuery_16; }
	inline String_t** get_address_of_apiQuery_16() { return &___apiQuery_16; }
	inline void set_apiQuery_16(String_t* value)
	{
		___apiQuery_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___apiQuery_16), (void*)value);
	}

	inline static int32_t get_offset_of_profilePic_17() { return static_cast<int32_t>(offsetof(GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78, ___profilePic_17)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_profilePic_17() const { return ___profilePic_17; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_profilePic_17() { return &___profilePic_17; }
	inline void set_profilePic_17(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___profilePic_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profilePic_17), (void*)value);
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


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared (Action_2_t48DF0C0D4F3A3AB463DECA881851C95F1A5B0E72 * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookDelegate_1__ctor_mF9FF22C1FF460D1CD15A8A87099BA4EA587BAEBB_gshared (FacebookDelegate_1_tF0451F78E13CCF394CCDEF8CE64B89F9C5FCED99 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Light_tA2F349FE839781469A0344CF6039B51512394275 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_m2EAE66A60E00C863C15BE46D10AC4522789A218E (ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean ElephantSDK.Utils::IsFileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsFileExists_mC3FA6C4F587DAE65146DD7D96FA528C5CE821F15 (String_t* ___filename0, const RuntimeMethod* method);
// System.String ElephantSDK.Utils::ReadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ReadFromFile_mA29C2D4AA9F68C5DBC30D8025226A2297EDB9251 (String_t* ___filename0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ElephantSDK.ElephantCore::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483 (String_t* ___s0, const RuntimeMethod* method);
// System.Void ElephantSDK.OpenResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenResponse__ctor_m28ED1DC0626FFCD5564014E2967A4300D276EDF2 (OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * __this, const RuntimeMethod* method);
// ElephantSDK.RemoteConfig ElephantSDK.RemoteConfig::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419 (const RuntimeMethod* method);
// System.Void ElephantSDK.RemoteConfig::Init(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfig_Init_m48EE1B4820D33C371C57EA15764A496BB0593A43 (RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * __this, String_t* ___jsonText0, const RuntimeMethod* method);
// System.Void ElephantSDK.RemoteConfig::SetFirstOpen(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoteConfig_SetFirstOpen_m209440095B7019363D253B7CD07F8A6151CBC377_inline (RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * __this, bool ___firstOpen0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Void ElephantSDK.ElephantCore::RequestIDFAAndOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantCore_RequestIDFAAndOpen_mA43CD0670E63733E78BD8B5D849B1DBFB45E6E97 (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, bool ___isOldUser0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// ElephantSDK.Params ElephantSDK.Params::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * Params_New_m6F767F9C3AA5AE53E131655D19A5A8ED891C2F5D (const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// ElephantSDK.Params ElephantSDK.Params::Set(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * Params_Set_m43934E6D2DE0BAA81D7D78EA4732A435867DB4E8 (Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// ElephantSDK.Params ElephantSDK.Params::Set(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * Params_Set_mBD0C098043C5639CC9434E2ED6ED631535F799FC (Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// ElephantSDK.Params ElephantSDK.Params::CustomString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * Params_CustomString_m11B1089D9A3F7FFBC0D0F1D4FEFC72214A07F6C2 (Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void ElephantSDK.Elephant::Event(System.String,System.Int32,ElephantSDK.Params)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elephant_Event_mB786324735A7E5E72E25211EAE61106D6D366D1D (String_t* ___type0, int32_t ___level1, Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * ___parameters2, const RuntimeMethod* method);
// ElephantSDK.AdConfig ElephantSDK.AdConfig::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * AdConfig_GetInstance_m17D6315F3F88AD334A5840128117FD3DD198DE6C (const RuntimeMethod* method);
// System.Void ElephantSDK.AdConfig::Init(ElephantSDK.AdConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdConfig_Init_m52C065BA3106011244C2C5B8E0FE86B45D26B262 (AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * __this, AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * ___config0, const RuntimeMethod* method);
// System.Void ElephantSDK.Utils::SaveToFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SaveToFile_m2BB6BD8B0595460A8375BB83C6EF7D9D0C99B587 (String_t* ___filename0, String_t* ___text1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ElephantSDK.MirrorData>::.ctor()
inline void List_1__ctor_m04F01AE197AE93E8BB7CBB3B7638339A5766F7B0 (List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String ElephantSDK.RemoteConfig::GetTag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RemoteConfig_GetTag_mBAC0C3DF99CF3CB30B568434578B99997F49566B_inline (RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * __this, const RuntimeMethod* method);
// System.Void ElephantSDK.OnOpenResult::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenResult_Invoke_m781D563175ABFA5C48D033B4DDCB3DEA85DFC323 (OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * __this, bool ___gdprRequired0, const RuntimeMethod* method);
// System.Void ElephantSDK.ElephantCore::OpenIdfaConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantCore_OpenIdfaConsent_mF80C49D8DD62B862367B87AE9C65E912BDF2031A (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ElephantSDK.OnRemoteConfigLoaded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRemoteConfigLoaded_Invoke_m46418C43E5FF887A0D2E7CA4ED65A7BBC519E221 (OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * __this, const RuntimeMethod* method);
// ElephantSDK.IapStatusRequest ElephantSDK.IapStatusRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IapStatusRequest_t345C4B4A2A2E5D1725F066608EEA5374F29A6742 * IapStatusRequest_Create_m8AE4F8847EB52EBB6CD07BA47B1E935E1C71BA2D (const RuntimeMethod* method);
// ElephantSDK.SessionData ElephantSDK.ElephantCore::GetCurrentSession()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * ElephantCore_GetCurrentSession_m5C2846FDE3649FD8A8BDD05D40F2C145D775C752_inline (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, const RuntimeMethod* method);
// System.Int64 ElephantSDK.SessionData::GetSessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline (SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * __this, const RuntimeMethod* method);
// System.Void ElephantSDK.ElephantData::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantData__ctor_mCAA5600BFE7D9EB093C0E2646072BA8C2F782B01 (ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC * __this, String_t* ___data0, int64_t ___sessionId1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774 (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String ElephantSDK.Utils::SignString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_SignString_m0A6CBFAD7EA9A7130C91D522E1DC0B7E7AFF0A34 (String_t* ___data0, String_t* ___secretKey1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766 (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m05992ABB52C04142026677BB6BA902C49CB197EF_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void ElephantSDK.Elephant::ShowAlertDialog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Elephant_ShowAlertDialog_m262F125B6C946817C0CF9A83CB4DF783B2BAF842 (String_t* ___title0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<ElephantSDK.IapStatusResponse>(System.String)
inline IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * JsonUtility_FromJson_TisIapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00_mEED6BCEDEE784750BFCA3AE7946159AFD5FD1872 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void ElephantSDK.OnInitialized::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInitialized_Invoke_mA7B38401197B0801D1915BE3441BC701EEA92FBC (OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * __this, const RuntimeMethod* method);
// ElephantSDK.SessionData ElephantSDK.SessionData::CreateSessionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * SessionData_CreateSessionData_m5B986FD6CCAFEBF773034AC3484D706BAD73E64D (const RuntimeMethod* method);
// System.Void ElephantSDK.ElephantCore::SendVersionsEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantCore_SendVersionsEvent_mBA9642DEF092F64D8A89F1B36E60A0F5186A4657 (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, const RuntimeMethod* method);
// ElephantSDK.OpenData ElephantSDK.OpenData::CreateOpenData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * OpenData_CreateOpenData_m13F70BB5352C6CC0814F8C648618AF8A9E8C7340 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<ElephantSDK.OpenResponse>(System.String)
inline OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Collections.IEnumerator ElephantSDK.ElephantCore::PostWithResponse(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ElephantCore_PostWithResponse_mEE901DD26397932810B72A5881B7545C98DD8FC8 (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, String_t* ___url0, String_t* ___bodyJsonString1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int64 ElephantSDK.Utils::Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utils_Timestamp_mAEBD8315D0906317CDCCE05ABEB2CF47C0DFA711 (const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void ElephantIOS::ElephantPost(System.String,System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElephantIOS_ElephantPost_mF911D2A08BEAB1AAFB021BF27CF7054FE7A917B1 (String_t* ___url0, String_t* ___body1, String_t* ___gameID2, String_t* ___authToken3, int32_t ___tryCount4, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GDPRNavigationButton::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRNavigationButton_OnClick_m373258AA58134CFB4DAF29E79F51E1CBA0F995B5 (GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * __this, const RuntimeMethod* method);
// System.Void ToggleController::Switching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleController_Switching_mCB111EE47DCD3BE6190C53564B8BB05DBF21FE83 (ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m9DB02F0F9C145A880D5489F2FEF04E81404B7E09 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___contents1, String_t* ___fileName2, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>::.ctor(System.Object,System.IntPtr)
inline void FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 *, RuntimeObject *, intptr_t, const RuntimeMethod*))FacebookDelegate_1__ctor_mF9FF22C1FF460D1CD15A8A87099BA4EA587BAEBB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FB_API_m57B526516AB7098C3E250FCA6BEC76FA87F9A238 (String_t* ___query0, int32_t ___method1, FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * ___callback2, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData3, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void ElephantSDK.VersionCheckUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29CAA4E5AC2DD4CF2A9EB06ED192541ACF4A4EF5 (U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ElephantSDK.VersionData::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.List`1<ElephantSDK.VersionData/MopubNetworkData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionData__ctor_mA04F37DC678044977B5B71313B149F863005DA0F (VersionData_t1490B908A55A03488997539252C8DE94D4EE92D4 * __this, String_t* ___appVersion0, String_t* ___sdkVersion1, String_t* ___osVersion2, String_t* ___adsSdkVersion3, String_t* ___mopubVersion4, String_t* ___unityVersion5, List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 * ___mopubNetworkData6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string appVersion = "";
		__this->set_appVersion_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string sdkVersion = "";
		__this->set_sdkVersion_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string osVersion = "";
		__this->set_osVersion_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string adsSdkVersion = "";
		__this->set_adsSdkVersion_3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string mopubVersion = "";
		__this->set_mopubVersion_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string unityVersion = "";
		__this->set_unityVersion_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public VersionData(string appVersion, string sdkVersion, string osVersion,
		//     string adsSdkVersion, string mopubVersion, string unityVersion,
		//     List<MopubNetworkData> mopubNetworkData)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.appVersion = appVersion;
		String_t* L_0 = ___appVersion0;
		__this->set_appVersion_0(L_0);
		// this.sdkVersion = sdkVersion;
		String_t* L_1 = ___sdkVersion1;
		__this->set_sdkVersion_1(L_1);
		// this.osVersion = osVersion;
		String_t* L_2 = ___osVersion2;
		__this->set_osVersion_2(L_2);
		// this.adsSdkVersion = adsSdkVersion;
		String_t* L_3 = ___adsSdkVersion3;
		__this->set_adsSdkVersion_3(L_3);
		// this.mopubVersion = mopubVersion;
		String_t* L_4 = ___mopubVersion4;
		__this->set_mopubVersion_4(L_4);
		// this.unityVersion = unityVersion;
		String_t* L_5 = ___unityVersion5;
		__this->set_unityVersion_5(L_5);
		// this.mopubNetworkData = mopubNetworkData;
		List_1_tE915FE0CBA582EC2B579B5E3E209D2702F3E7884 * L_6 = ___mopubNetworkData6;
		__this->set_mopubNetworkData_6(L_6);
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
// System.Void ElephantSDK.AdConfig/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m01BEEC349F3CE6523EFDA509439ECF172085EE70 (U3CU3Ec__DisplayClass16_0_tBE21E75689AD275D9BA4E70513BB9101F7239887 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.AdConfig/<>c__DisplayClass16_0::<Get>b__0(ElephantSDK.AdConfigParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CGetU3Eb__0_m5B468548B9462B1AFDB56F5E19CEE7083C3F43A7 (U3CU3Ec__DisplayClass16_0_tBE21E75689AD275D9BA4E70513BB9101F7239887 * __this, AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * ___item0, const RuntimeMethod* method)
{
	{
		// parameters.Find(item => item.key.Equals(key));
		AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		String_t* L_2 = __this->get_key_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void ElephantSDK.AdConfig/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m8B2C5A599D6BF0792BE160710EF36ADC8F1688B9 (U3CU3Ec__DisplayClass17_0_t71165512E3D3AD903A03355ED3F16F7DFF8ACFBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.AdConfig/<>c__DisplayClass17_0::<GetInt>b__0(ElephantSDK.AdConfigParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CGetIntU3Eb__0_mD86303DB43DC2E7172F8E519E82B0D1A43B846BC (U3CU3Ec__DisplayClass17_0_t71165512E3D3AD903A03355ED3F16F7DFF8ACFBE * __this, AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * ___item0, const RuntimeMethod* method)
{
	{
		// parameters.Find(item => item.key.Equals(key));
		AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		String_t* L_2 = __this->get_key_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void ElephantSDK.AdConfig/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mDEBD55C0DA4A902B9B7FB2DAA9110936D3E2BE91 (U3CU3Ec__DisplayClass18_0_t6FFB47088E79800E08CFE69005D575B7C2149540 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.AdConfig/<>c__DisplayClass18_0::<GetLong>b__0(ElephantSDK.AdConfigParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CGetLongU3Eb__0_m8597D429EAF80533CB183AE2D2695DD4110637F0 (U3CU3Ec__DisplayClass18_0_t6FFB47088E79800E08CFE69005D575B7C2149540 * __this, AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * ___item0, const RuntimeMethod* method)
{
	{
		// parameters.Find(item => item.key.Equals(key));
		AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		String_t* L_2 = __this->get_key_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void ElephantSDK.AdConfig/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mFD19E470AECEFC2CE4B812693EA0058E121CE264 (U3CU3Ec__DisplayClass19_0_tCE4803E46922FA9E5284D10D3032A1DF4E5A325A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.AdConfig/<>c__DisplayClass19_0::<GetBool>b__0(ElephantSDK.AdConfigParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CGetBoolU3Eb__0_m79F5B10BBAE9E1DD83E00CD8F0FB5F373B491004 (U3CU3Ec__DisplayClass19_0_tCE4803E46922FA9E5284D10D3032A1DF4E5A325A * __this, AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * ___item0, const RuntimeMethod* method)
{
	{
		// parameters.Find(item => item.key.Equals(key));
		AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		String_t* L_2 = __this->get_key_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void ElephantSDK.AdConfig/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m69D057C8D551A23793CF2E57ED82C66E1CF8F90D (U3CU3Ec__DisplayClass20_0_t7469D6AADBBD1DE3581DB6DAEF17D77DE640AB5F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.AdConfig/<>c__DisplayClass20_0::<GetList>b__0(ElephantSDK.AdConfigParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CGetListU3Eb__0_m3015DB905BDDD497BD9A23498CF98B9F4B5076E4 (U3CU3Ec__DisplayClass20_0_t7469D6AADBBD1DE3581DB6DAEF17D77DE640AB5F * __this, AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * ___item0, const RuntimeMethod* method)
{
	{
		// parameters.Find(item => item.key.Equals(key));
		AdConfigParameter_t35022613C1105F74E53547E582292567265F4D32 * L_0 = ___item0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_key_0();
		String_t* L_2 = __this->get_key_0();
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m553F1C586BBB6C68EEB9710F62438A8EDCE136DA (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_m8142A69BF60253C0139648E9350176EB9EFD8BFA (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__6_MoveNext_mE11D3E615622E410D2DAF1960011C76F8ABC322D (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject effectPlayer = (GameObject) Instantiate(chosenEffect, transform.position, transform.rotation);
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_4 = V_1;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_chosenEffect_4();
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_6 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_9 = V_1;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_8, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_U3CeffectPlayerU3E5__2_3(L_12);
		// if(spawnWithoutLight = true && effectPlayer.GetComponent<Light>())
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_13 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_U3CeffectPlayerU3E5__2_3();
		NullCheck(L_14);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_15;
		L_15 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_14, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		bool L_17 = L_16;
		V_2 = L_17;
		NullCheck(L_13);
		L_13->set_spawnWithoutLight_6(L_17);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// effectPlayer.GetComponent<Light>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_U3CeffectPlayerU3E5__2_3();
		NullCheck(L_19);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_20;
		L_20 = GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC(L_19, /*hidden argument*/GameObject_GetComponent_TisLight_tA2F349FE839781469A0344CF6039B51512394275_m0EB52103D195BED7315C22DC3394855236FCEBDC_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if(spawnWithoutSound = true && effectPlayer.GetComponent<AudioSource>())
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_21 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_U3CeffectPlayerU3E5__2_3();
		NullCheck(L_22);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_22, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
		bool L_25 = L_24;
		V_2 = L_25;
		NullCheck(L_21);
		L_21->set_spawnWithoutSound_7(L_25);
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00a0;
		}
	}
	{
		// effectPlayer.GetComponent<AudioSource>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_U3CeffectPlayerU3E5__2_3();
		NullCheck(L_27);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_28;
		L_28 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_27, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_28);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_28, (bool)0, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// yield return new WaitForSeconds(loopTimeLimit);
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->get_loopTimeLimit_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, L_30, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ba:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy (effectPlayer);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_U3CeffectPlayerU3E5__2_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		// PlayEffect();
		ETFXLoopScript_tF4DFDBD5AF30EE9D60CDB5D8E64685454AD7CA75 * L_33 = V_1;
		NullCheck(L_33);
		ETFXLoopScript_PlayEffect_m2EAE66A60E00C863C15BE46D10AC4522789A218E(L_33, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m93EE11485A4BA42D80F240C1703D673774889545 (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mB35745D308CDED6CAB69D52DEFC2D84AB6CC5896 (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mB35745D308CDED6CAB69D52DEFC2D84AB6CC5896_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_mB56FD34E205892C6B85E8FD18DAE68F19ECBDE2E (U3CEffectLoopU3Ed__6_t25BAA433CE780795116A92A22C987A2CE9108F43 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantCore/<InitSDK>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSDKU3Ed__57__ctor_m2DA694750F5AC0F2816EF3FB1D78822FD12CCDE6 (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.ElephantCore/<InitSDK>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSDKU3Ed__57_System_IDisposable_Dispose_m42A5BF6105DD484B6349C25DC17306A1F9F8BF9F (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ElephantSDK.ElephantCore/<InitSDK>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitSDKU3Ed__57_MoveNext_mA0E22CF08FCA25BE18A1B826D1E6109FE4740E78 (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m04F01AE197AE93E8BB7CBB3B7638339A5766F7B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BBED2AE71D46F33125DE16017E2836CA047C4F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A868990EE6698CA0C93F5FF86FCFE81BBCEF843);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8819DCBF86F4AB6067ED7B43259E09CA814693C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A0B6DCF8D7BE7C969447889EE5494D7B79B7243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB89EDBC9F1CBF0C7543216F9BE2AD1A2841BC91A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD958407926F34E4437F5434B07FDDA13C0FA61F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF926A85A833F41D50B85456A81384BA14E367072);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * V_4 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* G_B7_0 = NULL;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * G_B6_1 = NULL;
	int32_t G_B18_0 = 0;
	List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * G_B20_0 = NULL;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * G_B20_1 = NULL;
	List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * G_B19_0 = NULL;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * G_B19_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0105;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Utils.IsFileExists(OLD_ELEPHANT_FILE))
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		String_t* L_4 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_OLD_ELEPHANT_FILE_39();
		bool L_5;
		L_5 = Utils_IsFileExists_mC3FA6C4F587DAE65146DD7D96FA528C5CE821F15(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// isOldUser = true;
		__this->set_isOldUser_2((bool)1);
	}

IL_0034:
	{
		// string savedConfig = Utils.ReadFromFile(REMOTE_CONFIG_FILE);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		String_t* L_6 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_REMOTE_CONFIG_FILE_40();
		String_t* L_7;
		L_7 = Utils_ReadFromFile_mA29C2D4AA9F68C5DBC30D8025226A2297EDB9251(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// userId = Utils.ReadFromFile(USER_DB_ID) ?? "";
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_8 = V_1;
		String_t* L_9 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_USER_DB_ID_41();
		String_t* L_10;
		L_10 = Utils_ReadFromFile_mA29C2D4AA9F68C5DBC30D8025226A2297EDB9251(L_9, /*hidden argument*/NULL);
		String_t* L_11 = L_10;
		G_B6_0 = L_11;
		G_B6_1 = L_8;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = L_8;
			goto IL_0053;
		}
	}
	{
		G_B7_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B7_1 = G_B6_1;
	}

IL_0053:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_userId_32(G_B7_0);
		// Log("Remote Config From File --> " + savedConfig);
		String_t* L_12 = V_2;
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD958407926F34E4437F5434B07FDDA13C0FA61F6, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_13, /*hidden argument*/NULL);
		// var isUsingRemoteConfig = 0;
		V_3 = 0;
		// openResponse = new OpenResponse();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_14 = V_1;
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_15 = (OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 *)il2cpp_codegen_object_new(OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_il2cpp_TypeInfo_var);
		OpenResponse__ctor_m28ED1DC0626FFCD5564014E2967A4300D276EDF2(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_openResponse_36(L_15);
		// if (savedConfig != null)
		String_t* L_16 = V_2;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// RemoteConfig.GetInstance().Init(savedConfig);
		RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * L_17;
		L_17 = RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419(/*hidden argument*/NULL);
		String_t* L_18 = V_2;
		NullCheck(L_17);
		RemoteConfig_Init_m48EE1B4820D33C371C57EA15764A496BB0593A43(L_17, L_18, /*hidden argument*/NULL);
		// RemoteConfig.GetInstance().SetFirstOpen(false);
		RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * L_19;
		L_19 = RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419(/*hidden argument*/NULL);
		NullCheck(L_19);
		RemoteConfig_SetFirstOpen_m209440095B7019363D253B7CD07F8A6151CBC377_inline(L_19, (bool)0, /*hidden argument*/NULL);
		// openResponse.remote_config_json = savedConfig;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_20 = V_1;
		NullCheck(L_20);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_21 = L_20->get_openResponse_36();
		String_t* L_22 = V_2;
		NullCheck(L_21);
		L_21->set_remote_config_json_10(L_22);
		// }
		goto IL_00a7;
	}

IL_009c:
	{
		// RemoteConfig.GetInstance().SetFirstOpen(true);
		RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * L_23;
		L_23 = RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419(/*hidden argument*/NULL);
		NullCheck(L_23);
		RemoteConfig_SetFirstOpen_m209440095B7019363D253B7CD07F8A6151CBC377_inline(L_23, (bool)1, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// openResponse.user_id = userId;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_24 = V_1;
		NullCheck(L_24);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_25 = L_24->get_openResponse_36();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27 = L_26->get_userId_32();
		NullCheck(L_25);
		L_25->set_user_id_0(L_27);
		// openRequestWaiting = true;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_28 = V_1;
		NullCheck(L_28);
		L_28->set_openRequestWaiting_24((bool)1);
		// openRequestSucceded = false;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_29 = V_1;
		NullCheck(L_29);
		L_29->set_openRequestSucceded_25((bool)0);
		// float startTime = Time.time;
		float L_30;
		L_30 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CstartTimeU3E5__2_4(L_30);
		// var realTimeSinceStartup = Time.realtimeSinceStartup;
		float L_31;
		L_31 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_U3CrealTimeSinceStartupU3E5__3_5(L_31);
		// var realTimeBeforeRequest = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_32;
		L_32 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		__this->set_U3CrealTimeBeforeRequestU3E5__4_6(L_32);
		// RequestIDFAAndOpen(isOldUser);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_33 = V_1;
		bool L_34 = __this->get_isOldUser_2();
		NullCheck(L_33);
		ElephantCore_RequestIDFAAndOpen_mA43CD0670E63733E78BD8B5D849B1DBFB45E6E97(L_33, L_34, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00f5:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0105:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_010c:
	{
		// while (openRequestWaiting && (Time.time - startTime) < 5f)
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_35 = V_1;
		NullCheck(L_35);
		bool L_36 = L_35->get_openRequestWaiting_24();
		if (!L_36)
		{
			goto IL_0127;
		}
	}
	{
		float L_37;
		L_37 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_38 = __this->get_U3CstartTimeU3E5__2_4();
		if ((((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38))) < ((float)(5.0f))))
		{
			goto IL_00f5;
		}
	}

IL_0127:
	{
		// isUsingRemoteConfig = openRequestSucceded ? 1 : -1;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = L_39->get_openRequestSucceded_25();
		if (L_40)
		{
			goto IL_0132;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0133;
	}

IL_0132:
	{
		G_B18_0 = 1;
	}

IL_0133:
	{
		V_3 = G_B18_0;
		// Log(JsonUtility.ToJson(openResponse));
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_41 = V_1;
		NullCheck(L_41);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_42 = L_41->get_openResponse_36();
		String_t* L_43;
		L_43 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_43, /*hidden argument*/NULL);
		// var parameters = Params.New()
		//     .Set("real_duration", (DateTime.Now - realTimeBeforeRequest).TotalMilliseconds)
		//     .Set("game_duration", (Time.time - startTime) * 1000)
		//     .Set("real_time_since_startup", (Time.realtimeSinceStartup - realTimeSinceStartup) * 1000)
		//     .Set("is_using_remote_config", isUsingRemoteConfig)
		//     .CustomString(JsonUtility.ToJson(openResponse));
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_44;
		L_44 = Params_New_m6F767F9C3AA5AE53E131655D19A5A8ED891C2F5D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_45;
		L_45 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_46 = __this->get_U3CrealTimeBeforeRequestU3E5__4_6();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_47;
		L_47 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_45, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		double L_48;
		L_48 = TimeSpan_get_TotalMilliseconds_m97368AE0609D865EB2A6BAE96AAA97AF8BDBF1C5((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_44);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_49;
		L_49 = Params_Set_m43934E6D2DE0BAA81D7D78EA4732A435867DB4E8(L_44, _stringLiteral5A868990EE6698CA0C93F5FF86FCFE81BBCEF843, L_48, /*hidden argument*/NULL);
		float L_50;
		L_50 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_51 = __this->get_U3CstartTimeU3E5__2_4();
		NullCheck(L_49);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_52;
		L_52 = Params_Set_m43934E6D2DE0BAA81D7D78EA4732A435867DB4E8(L_49, _stringLiteral8819DCBF86F4AB6067ED7B43259E09CA814693C8, ((double)((double)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_50, (float)L_51)), (float)(1000.0f))))), /*hidden argument*/NULL);
		float L_53;
		L_53 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_54 = __this->get_U3CrealTimeSinceStartupU3E5__3_5();
		NullCheck(L_52);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_55;
		L_55 = Params_Set_m43934E6D2DE0BAA81D7D78EA4732A435867DB4E8(L_52, _stringLiteral4BBED2AE71D46F33125DE16017E2836CA047C4F8, ((double)((double)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_53, (float)L_54)), (float)(1000.0f))))), /*hidden argument*/NULL);
		int32_t L_56 = V_3;
		NullCheck(L_55);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_57;
		L_57 = Params_Set_mBD0C098043C5639CC9434E2ED6ED631535F799FC(L_55, _stringLiteralB89EDBC9F1CBF0C7543216F9BE2AD1A2841BC91A, L_56, /*hidden argument*/NULL);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_58 = V_1;
		NullCheck(L_58);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_59 = L_58->get_openResponse_36();
		String_t* L_60;
		L_60 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_59, /*hidden argument*/NULL);
		NullCheck(L_57);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_61;
		L_61 = Params_CustomString_m11B1089D9A3F7FFBC0D0F1D4FEFC72214A07F6C2(L_57, L_60, /*hidden argument*/NULL);
		V_4 = L_61;
		// Elephant.Event("open_request", -1, parameters);
		Params_t9D63663379019EB8A9E376E4F65E5F19B86F44C3 * L_62 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
		Elephant_Event_mB786324735A7E5E72E25211EAE61106D6D366D1D(_stringLiteral8A0B6DCF8D7BE7C969447889EE5494D7B79B7243, (-1), L_62, /*hidden argument*/NULL);
		// RemoteConfig.GetInstance().Init(openResponse.remote_config_json);
		RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * L_63;
		L_63 = RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419(/*hidden argument*/NULL);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_64 = V_1;
		NullCheck(L_64);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_65 = L_64->get_openResponse_36();
		NullCheck(L_65);
		String_t* L_66 = L_65->get_remote_config_json_10();
		NullCheck(L_63);
		RemoteConfig_Init_m48EE1B4820D33C371C57EA15764A496BB0593A43(L_63, L_66, /*hidden argument*/NULL);
		// AdConfig.GetInstance().Init(openResponse.ad_config);
		AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * L_67;
		L_67 = AdConfig_GetInstance_m17D6315F3F88AD334A5840128117FD3DD198DE6C(/*hidden argument*/NULL);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_68 = V_1;
		NullCheck(L_68);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_69 = L_68->get_openResponse_36();
		NullCheck(L_69);
		AdConfig_t50C7DC1F2951089733FF303A1C4DB1946CE78BCF * L_70 = L_69->get_ad_config_11();
		NullCheck(L_67);
		AdConfig_Init_m52C065BA3106011244C2C5B8E0FE86B45D26B262(L_67, L_70, /*hidden argument*/NULL);
		// Utils.SaveToFile(REMOTE_CONFIG_FILE, openResponse.remote_config_json);
		String_t* L_71 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_REMOTE_CONFIG_FILE_40();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_72 = V_1;
		NullCheck(L_72);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_73 = L_72->get_openResponse_36();
		NullCheck(L_73);
		String_t* L_74 = L_73->get_remote_config_json_10();
		Utils_SaveToFile_m2BB6BD8B0595460A8375BB83C6EF7D9D0C99B587(L_71, L_74, /*hidden argument*/NULL);
		// Utils.SaveToFile(USER_DB_ID, openResponse.user_id);
		String_t* L_75 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_USER_DB_ID_41();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_76 = V_1;
		NullCheck(L_76);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_77 = L_76->get_openResponse_36();
		NullCheck(L_77);
		String_t* L_78 = L_77->get_user_id_0();
		Utils_SaveToFile_m2BB6BD8B0595460A8375BB83C6EF7D9D0C99B587(L_75, L_78, /*hidden argument*/NULL);
		// Utils.SaveToFile(CACHED_OPEN_RESPONSE, JsonUtility.ToJson(openResponse));
		String_t* L_79 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_CACHED_OPEN_RESPONSE_42();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_80 = V_1;
		NullCheck(L_80);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_81 = L_80->get_openResponse_36();
		String_t* L_82;
		L_82 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_81, /*hidden argument*/NULL);
		Utils_SaveToFile_m2BB6BD8B0595460A8375BB83C6EF7D9D0C99B587(L_79, L_82, /*hidden argument*/NULL);
		// userId = openResponse.user_id;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_83 = V_1;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_84 = V_1;
		NullCheck(L_84);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_85 = L_84->get_openResponse_36();
		NullCheck(L_85);
		String_t* L_86 = L_85->get_user_id_0();
		NullCheck(L_83);
		L_83->set_userId_32(L_86);
		// mirrorData = openResponse.mirror_data ?? new List<MirrorData>();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_87 = V_1;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_88 = V_1;
		NullCheck(L_88);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_89 = L_88->get_openResponse_36();
		NullCheck(L_89);
		List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * L_90 = L_89->get_mirror_data_13();
		List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * L_91 = L_90;
		G_B19_0 = L_91;
		G_B19_1 = L_87;
		if (L_91)
		{
			G_B20_0 = L_91;
			G_B20_1 = L_87;
			goto IL_025f;
		}
	}
	{
		List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D * L_92 = (List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D *)il2cpp_codegen_object_new(List_1_t6D4B543FB7E0BADD6BA16FE6756E3723FF32E84D_il2cpp_TypeInfo_var);
		List_1__ctor_m04F01AE197AE93E8BB7CBB3B7638339A5766F7B0(L_92, /*hidden argument*/List_1__ctor_m04F01AE197AE93E8BB7CBB3B7638339A5766F7B0_RuntimeMethod_var);
		G_B20_0 = L_92;
		G_B20_1 = G_B19_1;
	}

IL_025f:
	{
		NullCheck(G_B20_1);
		G_B20_1->set_mirrorData_33(G_B20_0);
		// currentSession.user_tag = RemoteConfig.GetInstance().GetTag();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_93 = V_1;
		NullCheck(L_93);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_94 = L_93->get_currentSession_26();
		RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * L_95;
		L_95 = RemoteConfig_GetInstance_m1AF1416B71E50CF2DCBCFDD2E4168CA11CFDB419(/*hidden argument*/NULL);
		NullCheck(L_95);
		String_t* L_96;
		L_96 = RemoteConfig_GetTag_mBAC0C3DF99CF3CB30B568434578B99997F49566B_inline(L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		((BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972 *)L_94)->set_user_tag_11(L_96);
		// if (onOpen != null)
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * L_97 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onOpen_45();
		if (!L_97)
		{
			goto IL_02ad;
		}
	}
	{
		// if (openResponse.consent_required)
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_98 = V_1;
		NullCheck(L_98);
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_99 = L_98->get_openResponse_36();
		NullCheck(L_99);
		bool L_100 = L_99->get_consent_required_1();
		if (!L_100)
		{
			goto IL_029a;
		}
	}
	{
		// onOpen(true);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * L_101 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onOpen_45();
		NullCheck(L_101);
		OnOpenResult_Invoke_m781D563175ABFA5C48D033B4DDCB3DEA85DFC323(L_101, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_02b7;
	}

IL_029a:
	{
		// OpenIdfaConsent();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_102 = V_1;
		NullCheck(L_102);
		ElephantCore_OpenIdfaConsent_mF80C49D8DD62B862367B87AE9C65E912BDF2031A(L_102, /*hidden argument*/NULL);
		// onOpen(false);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnOpenResult_t1945705212236757F6D47CC85EEC314A76343BA7 * L_103 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onOpen_45();
		NullCheck(L_103);
		OnOpenResult_Invoke_m781D563175ABFA5C48D033B4DDCB3DEA85DFC323(L_103, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_02b7;
	}

IL_02ad:
	{
		// Debug.LogWarning("ElephantSDK onOpen event is not handled");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralF926A85A833F41D50B85456A81384BA14E367072, /*hidden argument*/NULL);
	}

IL_02b7:
	{
		// sdkIsReady = true;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_104 = V_1;
		NullCheck(L_104);
		L_104->set_sdkIsReady_23((bool)1);
		// if (onRemoteConfigLoaded != null)
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * L_105 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onRemoteConfigLoaded_46();
		if (!L_105)
		{
			goto IL_02cf;
		}
	}
	{
		// onRemoteConfigLoaded();
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnRemoteConfigLoaded_t3429DCAB1E28CE47B8B20D079D88C7DF564468F6 * L_106 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onRemoteConfigLoaded_46();
		NullCheck(L_106);
		OnRemoteConfigLoaded_Invoke_m46418C43E5FF887A0D2E7CA4ED65A7BBC519E221(L_106, /*hidden argument*/NULL);
	}

IL_02cf:
	{
		// }
		return (bool)0;
	}
}
// System.Object ElephantSDK.ElephantCore/<InitSDK>d__57::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitSDKU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAD3F50E7828103AF3265E43E21CBF404F8826E98 (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ElephantSDK.ElephantCore/<InitSDK>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitSDKU3Ed__57_System_Collections_IEnumerator_Reset_m474BF59E37382A7804E5CE2FE161CDE555DFE636 (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitSDKU3Ed__57_System_Collections_IEnumerator_Reset_m474BF59E37382A7804E5CE2FE161CDE555DFE636_RuntimeMethod_var)));
	}
}
// System.Object ElephantSDK.ElephantCore/<InitSDK>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CInitSDKU3Ed__57_System_Collections_IEnumerator_get_Current_m88FA760F5D20449A2ADF83D65C58B0B5DB4BFDE7 (U3CInitSDKU3Ed__57_t581C812154182BE724B0DC45CADF1F17D1CCE73F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsIapBannedRequestU3Ed__66__ctor_m2DB9C9E57F209D6E16AFD6621E2F718A7539BCCC (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsIapBannedRequestU3Ed__66_System_IDisposable_Dispose_m710BA88CA15A5253089DA37F5D5D297F65AC9017 (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIsIapBannedRequestU3Ed__66_MoveNext_m712339D45B7D769D86B55E0EDD2F666D8BF35DBC (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisIapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00_mEED6BCEDEE784750BFCA3AE7946159AFD5FD1872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59ECEC8DDE5DB555C5F0463C11BC71ABDF57EBEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral645A9609A8139153490276B64A141A5E0AA877AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CADA190B27C8F0D4BD44B646FE78B052D525ED9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCE83BCE9EC0FD938DC8ADD56EDEF54F05B21526);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var iapStatusRequest = IapStatusRequest.Create();
		IapStatusRequest_t345C4B4A2A2E5D1725F066608EEA5374F29A6742 * L_4;
		L_4 = IapStatusRequest_Create_m8AE4F8847EB52EBB6CD07BA47B1E935E1C71BA2D(/*hidden argument*/NULL);
		// var json = JsonUtility.ToJson(iapStatusRequest);
		String_t* L_5;
		L_5 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_4, /*hidden argument*/NULL);
		// var bodyJson = JsonUtility.ToJson(new ElephantData(json, GetCurrentSession().GetSessionID()));
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_6 = V_1;
		NullCheck(L_6);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_7;
		L_7 = ElephantCore_GetCurrentSession_m5C2846FDE3649FD8A8BDD05D40F2C145D775C752_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int64_t L_8;
		L_8 = SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline(L_7, /*hidden argument*/NULL);
		ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC * L_9 = (ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC *)il2cpp_codegen_object_new(ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		ElephantData__ctor_mCAA5600BFE7D9EB093C0E2646072BA8C2F782B01(L_9, L_5, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// var request = new UnityWebRequest(IAP_STATUS_EP, UnityWebRequest.kHttpVerbPOST);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_11, _stringLiteralFCE83BCE9EC0FD938DC8ADD56EDEF54F05B21526, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_11);
		// byte[] bodyRaw = Encoding.UTF8.GetBytes(bodyJson);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_13 = V_2;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_13);
		V_3 = L_14;
		// request.uploadHandler = new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CrequestU3E5__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_3;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_17 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_17, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_15, L_17, /*hidden argument*/NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = __this->get_U3CrequestU3E5__2_4();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_19 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_18, L_19, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_20);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_20, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// request.SetRequestHeader("Authorization", Utils.SignString(bodyJson, GameSecret));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = __this->get_U3CrequestU3E5__2_4();
		String_t* L_22 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_GameSecret_5();
		String_t* L_25;
		L_25 = Utils_SignString_m0A6CBFAD7EA9A7130C91D522E1DC0B7E7AFF0A34(L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_21, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_25, /*hidden argument*/NULL);
		// request.SetRequestHeader("GameID", GameID);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_26 = __this->get_U3CrequestU3E5__2_4();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_GameID_4();
		NullCheck(L_26);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_26, _stringLiteral59ECEC8DDE5DB555C5F0463C11BC71ABDF57EBEF, L_28, /*hidden argument*/NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_29);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_30;
		L_30 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_29, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_30);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00e4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request.isNetworkError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_31 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_31);
		bool L_32;
		L_32 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0127;
		}
	}
	{
		// Log("Iap Status Check failed");
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(_stringLiteral8CADA190B27C8F0D4BD44B646FE78B052D525ED9, /*hidden argument*/NULL);
		// callback(true, "Something went wrong. Please try again.");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_33 = __this->get_callback_3();
		NullCheck(L_33);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_33, (bool)1, _stringLiteral645A9609A8139153490276B64A141A5E0AA877AB, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
		// Elephant.ShowAlertDialog("Error", "Something went wrong. Please try again.");
		IL2CPP_RUNTIME_CLASS_INIT(Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
		Elephant_ShowAlertDialog_m262F125B6C946817C0CF9A83CB4DF783B2BAF842(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, _stringLiteral645A9609A8139153490276B64A141A5E0AA877AB, /*hidden argument*/NULL);
		// }
		goto IL_01e2;
	}

IL_0127:
	{
	}

IL_0128:
	try
	{ // begin try (depth: 1)
		{
			// var iapStatusResponse = JsonUtility.FromJson<IapStatusResponse>(request.downloadHandler.text);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_34 = __this->get_U3CrequestU3E5__2_4();
			NullCheck(L_34);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_35;
			L_35 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			String_t* L_36;
			L_36 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_35, /*hidden argument*/NULL);
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_37;
			L_37 = JsonUtility_FromJson_TisIapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00_mEED6BCEDEE784750BFCA3AE7946159AFD5FD1872(L_36, /*hidden argument*/JsonUtility_FromJson_TisIapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00_mEED6BCEDEE784750BFCA3AE7946159AFD5FD1872_RuntimeMethod_var);
			V_4 = L_37;
			// if (iapStatusResponse != null)
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_38 = V_4;
			if (!L_38)
			{
				goto IL_0186;
			}
		}

IL_0143:
		{
			// isIapBanned = iapStatusResponse.is_banned;
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_39 = V_1;
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_40 = V_4;
			NullCheck(L_40);
			bool L_41 = L_40->get_is_banned_0();
			NullCheck(L_39);
			L_39->set_isIapBanned_35(L_41);
			// callback(isIapBanned, iapStatusResponse.message);
			Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_42 = __this->get_callback_3();
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_43 = V_1;
			NullCheck(L_43);
			bool L_44 = L_43->get_isIapBanned_35();
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_45 = V_4;
			NullCheck(L_45);
			String_t* L_46 = L_45->get_message_1();
			NullCheck(L_42);
			Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_42, L_44, L_46, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
			// if (iapStatusResponse.is_banned)
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_47 = V_4;
			NullCheck(L_47);
			bool L_48 = L_47->get_is_banned_0();
			if (!L_48)
			{
				goto IL_01a6;
			}
		}

IL_0171:
		{
			// Elephant.ShowAlertDialog(iapStatusResponse.link, iapStatusResponse.message);
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_49 = V_4;
			NullCheck(L_49);
			String_t* L_50 = L_49->get_link_2();
			IapStatusResponse_t6D5E7CA49A136505C912A6A66B76E84D95A39D00 * L_51 = V_4;
			NullCheck(L_51);
			String_t* L_52 = L_51->get_message_1();
			IL2CPP_RUNTIME_CLASS_INIT(Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
			Elephant_ShowAlertDialog_m262F125B6C946817C0CF9A83CB4DF783B2BAF842(L_50, L_52, /*hidden argument*/NULL);
			// }
			goto IL_01a6;
		}

IL_0186:
		{
			// callback(true, "Something went wrong. Please try again.");
			Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_53 = __this->get_callback_3();
			NullCheck(L_53);
			Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_53, (bool)1, _stringLiteral645A9609A8139153490276B64A141A5E0AA877AB, /*hidden argument*/Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var);
			// Elephant.ShowAlertDialog("Error", "Something went wrong. Please try again.");
			IL2CPP_RUNTIME_CLASS_INIT(Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var);
			Elephant_ShowAlertDialog_m262F125B6C946817C0CF9A83CB4DF783B2BAF842(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, _stringLiteral645A9609A8139153490276B64A141A5E0AA877AB, /*hidden argument*/NULL);
		}

IL_01a6:
		{
			// }
			goto IL_01e2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a8;
		}
		throw e;
	}

CATCH_01a8:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// callback(true, "Something went wrong. Please try again.");
		Action_2_t88E033566C44CCAAB72BD2C7604420B260FD3BF3 * L_54 = __this->get_callback_3();
		NullCheck(L_54);
		Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766(L_54, (bool)1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral645A9609A8139153490276B64A141A5E0AA877AB)), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_2_Invoke_m5925F52EF3E83724269790A53C11A051658A2766_RuntimeMethod_var)));
		// Elephant.ShowAlertDialog("Error", "Something went wrong. Please try again.");
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Elephant_tE16764811C77246A3B371BDE1FF6ACD4C4E16722_il2cpp_TypeInfo_var)));
		Elephant_ShowAlertDialog_m262F125B6C946817C0CF9A83CB4DF783B2BAF842(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral645A9609A8139153490276B64A141A5E0AA877AB)), /*hidden argument*/NULL);
		// Log("Iap Status Check failed with exception: " + e.Message);
		Exception_t * L_55 = V_5;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_55);
		String_t* L_57;
		L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9A9D325EFB5BFDCE33BBFAB1D318D4E860D727)), L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var)));
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_57, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e2;
	} // end catch (depth: 1)

IL_01e2:
	{
		// }
		return (bool)0;
	}
}
// System.Object ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIsIapBannedRequestU3Ed__66_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m10397F40AA7AD0D5E0CB96760BF890D504A58A5C (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIsIapBannedRequestU3Ed__66_System_Collections_IEnumerator_Reset_m0785D1C476CFCED00DFA9ECA1EBF3689EED5B119 (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIsIapBannedRequestU3Ed__66_System_Collections_IEnumerator_Reset_m0785D1C476CFCED00DFA9ECA1EBF3689EED5B119_RuntimeMethod_var)));
	}
}
// System.Object ElephantSDK.ElephantCore/<IsIapBannedRequest>d__66::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIsIapBannedRequestU3Ed__66_System_Collections_IEnumerator_get_Current_mAF797C284DCD00E2367686C944630EE75DA8A8E6 (U3CIsIapBannedRequestU3Ed__66_tC73ACC04F1286ADC3FC006F12D0B76E8E8ED58DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantCore/<OpenRequest>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenRequestU3Ed__63__ctor_m6C4D312505E21C965F66C38FF9D672F89AB5710C (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.ElephantCore/<OpenRequest>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenRequestU3Ed__63_System_IDisposable_Dispose_mAEE0A6FC0B93E3F39898D2C379F2A8745A26B55F (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ElephantSDK.ElephantCore/<OpenRequest>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenRequestU3Ed__63_MoveNext_m60E485E32AD367F935C953AF6D07D7443AA32FB8 (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral379536593D9F229E40C1D372C04EADD13C45B9A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * V_1 = NULL;
	OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * V_2 = NULL;
	String_t* V_3 = NULL;
	OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (onInitialized != null)
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * L_4 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onInitialized_44();
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// onInitialized();
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		OnInitialized_t76D71B5D7AF7D51F13CB4C88518D038B7E38A3C6 * L_5 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_onInitialized_44();
		NullCheck(L_5);
		OnInitialized_Invoke_mA7B38401197B0801D1915BE3441BC701EEA92FBC(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// currentSession = SessionData.CreateSessionData();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_6 = V_1;
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_7;
		L_7 = SessionData_CreateSessionData_m5B986FD6CCAFEBF773034AC3484D706BAD73E64D(/*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_currentSession_26(L_7);
		// realSessionId = currentSession.GetSessionID();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_8 = V_1;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_9 = V_1;
		NullCheck(L_9);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_10 = L_9->get_currentSession_26();
		NullCheck(L_10);
		int64_t L_11;
		L_11 = SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_realSessionId_27(L_11);
		// SendVersionsEvent();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_12 = V_1;
		NullCheck(L_12);
		ElephantCore_SendVersionsEvent_mBA9642DEF092F64D8A89F1B36E60A0F5186A4657(L_12, /*hidden argument*/NULL);
		// var openData = OpenData.CreateOpenData();
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_13;
		L_13 = OpenData_CreateOpenData_m13F70BB5352C6CC0814F8C648618AF8A9E8C7340(/*hidden argument*/NULL);
		V_2 = L_13;
		// openData.is_old_user = isOldUser;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_14 = V_2;
		bool L_15 = __this->get_isOldUser_3();
		NullCheck(L_14);
		L_14->set_is_old_user_21(L_15);
		// openData.gdpr_supported = gdprSupported;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_16 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get_gdprSupported_43();
		NullCheck(L_16);
		L_16->set_gdpr_supported_22(L_18);
		// openData.session_id = currentSession.GetSessionID();
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_19 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_20 = V_1;
		NullCheck(L_20);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_21 = L_20->get_currentSession_26();
		NullCheck(L_21);
		int64_t L_22;
		L_22 = SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		((BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972 *)L_19)->set_session_id_13(L_22);
		// openData.idfv = idfv;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_23 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_idfv_29();
		NullCheck(L_23);
		((BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972 *)L_23)->set_idfv_2(L_25);
		// openData.idfa = idfa;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_26 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_27 = V_1;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_idfa_28();
		NullCheck(L_26);
		((BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972 *)L_26)->set_idfa_1(L_28);
		// openData.user_id = userId;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_29 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = L_30->get_userId_32();
		NullCheck(L_29);
		((BaseData_t67C550C3EABC056C472FEFFD9A4FB28DB89FA972 *)L_29)->set_user_id_17(L_31);
		// cachedOpenResponse = Utils.ReadFromFile(CACHED_OPEN_RESPONSE);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		String_t* L_33 = ((ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_StaticFields*)il2cpp_codegen_static_fields_for(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var))->get_CACHED_OPEN_RESPONSE_42();
		String_t* L_34;
		L_34 = Utils_ReadFromFile_mA29C2D4AA9F68C5DBC30D8025226A2297EDB9251(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_cachedOpenResponse_37(L_34);
		// if (!string.IsNullOrEmpty(cachedOpenResponse))
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36 = L_35->get_cachedOpenResponse_37();
		bool L_37;
		L_37 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00e2;
		}
	}
	{
		// var tempOpenResponse = JsonUtility.FromJson<OpenResponse>(cachedOpenResponse);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_38 = V_1;
		NullCheck(L_38);
		String_t* L_39 = L_38->get_cachedOpenResponse_37();
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_40;
		L_40 = JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5(L_39, /*hidden argument*/JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var);
		V_4 = L_40;
		// if (tempOpenResponse != null)
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_41 = V_4;
		if (!L_41)
		{
			goto IL_00e2;
		}
	}
	{
		// openData.hash = tempOpenResponse.hash;
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_42 = V_2;
		OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = L_43->get_hash_14();
		NullCheck(L_42);
		L_42->set_hash_23(L_44);
	}

IL_00e2:
	{
		// var json = JsonUtility.ToJson(openData);
		OpenData_t2A7A69733D595727EA291FAF41AE72D4E03A1A03 * L_45 = V_2;
		String_t* L_46;
		L_46 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_45, /*hidden argument*/NULL);
		// var bodyJson = JsonUtility.ToJson(new ElephantData(json, GetCurrentSession().GetSessionID()));
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_47 = V_1;
		NullCheck(L_47);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_48;
		L_48 = ElephantCore_GetCurrentSession_m5C2846FDE3649FD8A8BDD05D40F2C145D775C752_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		int64_t L_49;
		L_49 = SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline(L_48, /*hidden argument*/NULL);
		ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC * L_50 = (ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC *)il2cpp_codegen_object_new(ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		ElephantData__ctor_mCAA5600BFE7D9EB093C0E2646072BA8C2F782B01(L_50, L_46, L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		// yield return PostWithResponse(OPEN_EP, bodyJson);
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_52 = V_1;
		String_t* L_53 = V_3;
		NullCheck(L_52);
		RuntimeObject* L_54;
		L_54 = ElephantCore_PostWithResponse_mEE901DD26397932810B72A5881B7545C98DD8FC8(L_52, _stringLiteral379536593D9F229E40C1D372C04EADD13C45B9A7, L_53, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_54);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object ElephantSDK.ElephantCore/<OpenRequest>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COpenRequestU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8D3A5B123FD304C4C06FA4F3FBB769DFFE1DBD09 (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ElephantSDK.ElephantCore/<OpenRequest>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenRequestU3Ed__63_System_Collections_IEnumerator_Reset_m0CA7D89770854D14CCAD828AA0ED9C7A7B190C2A (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenRequestU3Ed__63_System_Collections_IEnumerator_Reset_m0CA7D89770854D14CCAD828AA0ED9C7A7B190C2A_RuntimeMethod_var)));
	}
}
// System.Object ElephantSDK.ElephantCore/<OpenRequest>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COpenRequestU3Ed__63_System_Collections_IEnumerator_get_Current_mF716AF45FB2EE10C3C906303141F20D91DFEE412 (U3COpenRequestU3Ed__63_t33C7A32E55A3F76D4AFDA65C267989628999C638 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantCore/<Post>d__75::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__75__ctor_m17851358E1B12A0AC461CB5C22C2AD55A4920AF3 (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.ElephantCore/<Post>d__75::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__75_System_IDisposable_Dispose_mB500A6859E71AAA58DA3FE1C82991472A99318A2 (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ElephantSDK.ElephantCore/<Post>d__75::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostU3Ed__75_MoveNext_mF3BABF4A2586D35AF157E3C4A28F651C84552F96 (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int64_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Log(elephantRequest.tryCount + " - " + (Utils.Timestamp() - elephantRequest.lastTryTS) + " -> " +
		//     elephantRequest.url + " : " + elephantRequest.data);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_6 = __this->get_elephantRequest_2();
		NullCheck(L_6);
		int32_t* L_7 = L_6->get_address_of_tryCount_2();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		int64_t L_11;
		L_11 = Utils_Timestamp_mAEBD8315D0906317CDCCE05ABEB2CF47C0DFA711(/*hidden argument*/NULL);
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_12 = __this->get_elephantRequest_2();
		NullCheck(L_12);
		int64_t L_13 = L_12->get_lastTryTS_3();
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_11, (int64_t)L_13));
		String_t* L_14;
		L_14 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_10;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_17 = __this->get_elephantRequest_2();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_url_0();
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_21 = __this->get_elephantRequest_2();
		NullCheck(L_21);
		String_t* L_22 = L_21->get_data_1();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_22);
		String_t* L_23;
		L_23 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_23, /*hidden argument*/NULL);
		// elephantRequest.tryCount++;
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_24 = __this->get_elephantRequest_2();
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_25 = L_24;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_tryCount_2();
		NullCheck(L_25);
		L_25->set_tryCount_2(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)));
		// elephantRequest.lastTryTS = Utils.Timestamp();
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_27 = __this->get_elephantRequest_2();
		int64_t L_28;
		L_28 = Utils_Timestamp_mAEBD8315D0906317CDCCE05ABEB2CF47C0DFA711(/*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_lastTryTS_3(L_28);
		// var elephantData = new ElephantData(elephantRequest.data, GetCurrentSession().GetSessionID());
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_29 = __this->get_elephantRequest_2();
		NullCheck(L_29);
		String_t* L_30 = L_29->get_data_1();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_31 = V_1;
		NullCheck(L_31);
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_32;
		L_32 = ElephantCore_GetCurrentSession_m5C2846FDE3649FD8A8BDD05D40F2C145D775C752_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int64_t L_33;
		L_33 = SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline(L_32, /*hidden argument*/NULL);
		ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC * L_34 = (ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC *)il2cpp_codegen_object_new(ElephantData_tF2499274B1F21D93D6D85C000DD07A99C18E0CBC_il2cpp_TypeInfo_var);
		ElephantData__ctor_mCAA5600BFE7D9EB093C0E2646072BA8C2F782B01(L_34, L_30, L_33, /*hidden argument*/NULL);
		// string bodyJsonString = JsonUtility.ToJson(elephantData);
		String_t* L_35;
		L_35 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// string authToken = Utils.SignString(bodyJsonString, GameSecret);
		String_t* L_36 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = L_37->get_GameSecret_5();
		String_t* L_39;
		L_39 = Utils_SignString_m0A6CBFAD7EA9A7130C91D522E1DC0B7E7AFF0A34(L_36, L_38, /*hidden argument*/NULL);
		V_3 = L_39;
		// ElephantIOS.ElephantPost(elephantRequest.url, bodyJsonString, GameID, authToken, elephantRequest.tryCount);
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_40 = __this->get_elephantRequest_2();
		NullCheck(L_40);
		String_t* L_41 = L_40->get_url_0();
		String_t* L_42 = V_2;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_43 = V_1;
		NullCheck(L_43);
		String_t* L_44 = L_43->get_GameID_4();
		String_t* L_45 = V_3;
		ElephantRequest_t05830DC4937B23509ACF8CA11E57BCD7D59C0C70 * L_46 = __this->get_elephantRequest_2();
		NullCheck(L_46);
		int32_t L_47 = L_46->get_tryCount_2();
		ElephantIOS_ElephantPost_mF911D2A08BEAB1AAFB021BF27CF7054FE7A917B1(L_41, L_42, L_44, L_45, L_47, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object ElephantSDK.ElephantCore/<Post>d__75::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostU3Ed__75_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m372EE6C4F2C69EA8E05E558122C8A60C05DB2C8B (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ElephantSDK.ElephantCore/<Post>d__75::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__75_System_Collections_IEnumerator_Reset_mA7C2F8ED77EF68C8C8BAEA8804D6276F7D6B1D4C (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostU3Ed__75_System_Collections_IEnumerator_Reset_mA7C2F8ED77EF68C8C8BAEA8804D6276F7D6B1D4C_RuntimeMethod_var)));
	}
}
// System.Object ElephantSDK.ElephantCore/<Post>d__75::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostU3Ed__75_System_Collections_IEnumerator_get_Current_m9FC8F53270D35F3E19BDEA6E3883BCD5DC834830 (U3CPostU3Ed__75_t5D457E31228FE0140E7686FD09B403FFD762F381 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantCore/<PostWithResponse>d__64::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostWithResponseU3Ed__64__ctor_m37514B3938CA4F66F5CFB53BD502690D2415905D (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.ElephantCore/<PostWithResponse>d__64::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostWithResponseU3Ed__64_System_IDisposable_Dispose_mDA7FB3B164BD9CB0C41693AD8439BA21C0E1F24D (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ElephantSDK.ElephantCore/<PostWithResponse>d__64::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostWithResponseU3Ed__64_MoveNext_m57EF7AF4538A265A59F08BAEBDF6775811383A63 (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5498A668F129DC6B8045DF2DECEB49D8713295D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59ECEC8DDE5DB555C5F0463C11BC71ABDF57EBEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7F57910574D7E2CDEA27CA015F3A8F276BE8548);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int64_t V_3 = 0;
	OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * V_4 = NULL;
	OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cf;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var request = new UnityWebRequest(url, UnityWebRequest.kHttpVerbPOST);
		String_t* L_4 = __this->get_url_2();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)il2cpp_codegen_object_new(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mC2ED369A4ACE53AFF2E70A38BE95EB48D68D4975(L_5, L_4, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_5(L_5);
		// byte[] bodyRaw = Encoding.UTF8.GetBytes(bodyJsonString);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_7 = __this->get_bodyJsonString_3();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_2 = L_8;
		// request.uploadHandler = new UploadHandlerRaw(bodyRaw);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_2;
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_11 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_9, L_11, /*hidden argument*/NULL);
		// request.downloadHandler = new DownloadHandlerBuffer();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CrequestU3E5__2_5();
		DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D * L_13 = (DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t74D11E891308B7FD5255C8D0D876AD0DBF512B6D_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m01FD35970E4B4FC45FC99A648408F53A8B164774(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UnityWebRequest_set_downloadHandler_m7496D2C5F755BEB68651A4F33EA9BDA319D092C2(L_12, L_13, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_14);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_14, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, /*hidden argument*/NULL);
		// request.SetRequestHeader("Authorization", Utils.SignString(bodyJsonString, GameSecret));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CrequestU3E5__2_5();
		String_t* L_16 = __this->get_bodyJsonString_3();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_GameSecret_5();
		String_t* L_19;
		L_19 = Utils_SignString_m0A6CBFAD7EA9A7130C91D522E1DC0B7E7AFF0A34(L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_15, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_19, /*hidden argument*/NULL);
		// request.SetRequestHeader("GameID", GameID);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_20 = __this->get_U3CrequestU3E5__2_5();
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_GameID_4();
		NullCheck(L_20);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_20, _stringLiteral59ECEC8DDE5DB555C5F0463C11BC71ABDF57EBEF, L_22, /*hidden argument*/NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_23 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_23);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_24;
		L_24 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_23, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Log("Status Code: " + request.responseCode);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_25 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_25);
		int64_t L_26;
		L_26 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		String_t* L_27;
		L_27 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_28, /*hidden argument*/NULL);
		// Log("Body: " + request.downloadHandler.text);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_29 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_29);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_30;
		L_30 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_30, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD7F57910574D7E2CDEA27CA015F3A8F276BE8548, L_31, /*hidden argument*/NULL);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(L_32, /*hidden argument*/NULL);
		// if (request.isNetworkError)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_33 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_33);
		bool L_34;
		L_34 = UnityWebRequest_get_isNetworkError_m0126D38DA9B39159CB12F8DE0C3962A4BEEE5C03(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0130;
		}
	}
	{
		// Log("Request Error");
		IL2CPP_RUNTIME_CLASS_INIT(ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6_il2cpp_TypeInfo_var);
		ElephantCore_Log_m43023C50DBAAD27F2968E87FD2C6406F03B19483(_stringLiteral5498A668F129DC6B8045DF2DECEB49D8713295D1, /*hidden argument*/NULL);
		// }
		goto IL_01ac;
	}

IL_0130:
	{
	}

IL_0131:
	try
	{ // begin try (depth: 1)
		{
			// if (request.responseCode == 200)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_35 = __this->get_U3CrequestU3E5__2_5();
			NullCheck(L_35);
			int64_t L_36;
			L_36 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_35, /*hidden argument*/NULL);
			if ((!(((uint64_t)L_36) == ((uint64_t)((int64_t)((int64_t)((int32_t)200)))))))
			{
				goto IL_0170;
			}
		}

IL_0144:
		{
			// var a = JsonUtility.FromJson<OpenResponse>(request.downloadHandler.text);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_37 = __this->get_U3CrequestU3E5__2_5();
			NullCheck(L_37);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_38;
			L_38 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			String_t* L_39;
			L_39 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_38, /*hidden argument*/NULL);
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_40;
			L_40 = JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5(L_39, /*hidden argument*/JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var);
			V_4 = L_40;
			// if (a != null)
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_41 = V_4;
			if (!L_41)
			{
				goto IL_01a3;
			}
		}

IL_015f:
		{
			// openRequestSucceded = true;
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_42 = V_1;
			NullCheck(L_42);
			L_42->set_openRequestSucceded_25((bool)1);
			// openResponse = a;
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_43 = V_1;
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_44 = V_4;
			NullCheck(L_43);
			L_43->set_openResponse_36(L_44);
			// }
			goto IL_01a3;
		}

IL_0170:
		{
			// else if (request.responseCode == 204)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_45 = __this->get_U3CrequestU3E5__2_5();
			NullCheck(L_45);
			int64_t L_46;
			L_46 = UnityWebRequest_get_responseCode_m27D1260ADC92070608532D81B836CAA2742D1753(L_45, /*hidden argument*/NULL);
			if ((!(((uint64_t)L_46) == ((uint64_t)((int64_t)((int64_t)((int32_t)204)))))))
			{
				goto IL_01a3;
			}
		}

IL_0183:
		{
			// var a = JsonUtility.FromJson<OpenResponse>(cachedOpenResponse);
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_47 = V_1;
			NullCheck(L_47);
			String_t* L_48 = L_47->get_cachedOpenResponse_37();
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_49;
			L_49 = JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5(L_48, /*hidden argument*/JsonUtility_FromJson_TisOpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252_m23886491F03799A8D88A5DED7A5BEF4B1056BEC5_RuntimeMethod_var);
			V_5 = L_49;
			// if (a != null)
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_50 = V_5;
			if (!L_50)
			{
				goto IL_01a3;
			}
		}

IL_0194:
		{
			// openRequestSucceded = true;
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_51 = V_1;
			NullCheck(L_51);
			L_51->set_openRequestSucceded_25((bool)1);
			// openResponse = a;
			ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_52 = V_1;
			OpenResponse_t442E8ECF3B4F2172C953A9CC6187B5F981520252 * L_53 = V_5;
			NullCheck(L_52);
			L_52->set_openResponse_36(L_53);
		}

IL_01a3:
		{
			// }
			goto IL_01ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a5;
		}
		throw e;
	}

CATCH_01a5:
	{ // begin catch(System.Exception)
		// Debug.Log(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ac;
	} // end catch (depth: 1)

IL_01ac:
	{
		// openRequestWaiting = false;
		ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * L_54 = V_1;
		NullCheck(L_54);
		L_54->set_openRequestWaiting_24((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object ElephantSDK.ElephantCore/<PostWithResponse>d__64::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostWithResponseU3Ed__64_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD3A6A980E84C10FBA2B4905B5767E072435783B8 (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ElephantSDK.ElephantCore/<PostWithResponse>d__64::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostWithResponseU3Ed__64_System_Collections_IEnumerator_Reset_m0A11C1157B6B02E41917E1E4A0F6AFBB3F762932 (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostWithResponseU3Ed__64_System_Collections_IEnumerator_Reset_m0A11C1157B6B02E41917E1E4A0F6AFBB3F762932_RuntimeMethod_var)));
	}
}
// System.Object ElephantSDK.ElephantCore/<PostWithResponse>d__64::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostWithResponseU3Ed__64_System_Collections_IEnumerator_get_Current_mEEB67172621E2837F48C6C6460069805BC7CC4D5 (U3CPostWithResponseU3Ed__64_t703F1EC6B4316ABE840D9D9EC751FB9ABC1E6582 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m4D40EA97D94352112688CE0F147044B24369A2DC (U3CU3Ec__DisplayClass16_0_t1C629244F67DC31069207A4BC87769BBEDA0B86A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass16_0::<CreatePage>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CCreatePageU3Eb__0_m7BFFA34E56322038B0CFF4B9C09AEAF38BF20239 (U3CU3Ec__DisplayClass16_0_t1C629244F67DC31069207A4BC87769BBEDA0B86A * __this, const RuntimeMethod* method)
{
	{
		// playBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
		GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * L_0 = __this->get_actionScript_0();
		NullCheck(L_0);
		GDPRNavigationButton_OnClick_m373258AA58134CFB4DAF29E79F51E1CBA0F995B5(L_0, /*hidden argument*/NULL);
		// playBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
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
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mF0AFE85A8A9380E76045CEB7ED3F42D77AEC32AB (U3CU3Ec__DisplayClass17_0_t303B433555CAFC8F434981A0B678D72D465B4E5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass17_0::<CreatePlayButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CCreatePlayButtonU3Eb__0_mD3174A2BFF65DF328AFB73FFD93A0D8B91004747 (U3CU3Ec__DisplayClass17_0_t303B433555CAFC8F434981A0B678D72D465B4E5B * __this, const RuntimeMethod* method)
{
	{
		// playBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
		GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * L_0 = __this->get_actionScript_0();
		NullCheck(L_0);
		GDPRNavigationButton_OnClick_m373258AA58134CFB4DAF29E79F51E1CBA0F995B5(L_0, /*hidden argument*/NULL);
		// playBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
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
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m7E88C63D4DE4191F18411F2411298CF4F42A4264 (U3CU3Ec__DisplayClass18_0_tF0E74DDB120DCF5FDC696079FE784F28FA46930F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass18_0::<CreateOption>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CCreateOptionU3Eb__0_m50BE024668960674FD2B66027C88E2E5785D52ED (U3CU3Ec__DisplayClass18_0_tF0E74DDB120DCF5FDC696079FE784F28FA46930F * __this, const RuntimeMethod* method)
{
	{
		// actionBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
		GDPRNavigationButton_t2444432447C0196C17F73D7B6297E497BAF1FAA6 * L_0 = __this->get_actionScript_0();
		NullCheck(L_0);
		GDPRNavigationButton_OnClick_m373258AA58134CFB4DAF29E79F51E1CBA0F995B5(L_0, /*hidden argument*/NULL);
		// actionBtnSc.onClick.AddListener(() => { actionScript.OnClick(); });
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
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m379CC08C020BC774484EB2688B4D87192EB2C7E4 (U3CU3Ec__DisplayClass20_0_t3F1B650156E2D4BBCDBE001CA8F34C582A9476DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ElephantSDK.ElephantUI/<>c__DisplayClass20_0::<CreateToggle>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CCreateToggleU3Eb__0_m5D79AD9E58BF5E22A14EFD4A9D801BD01134D1BF (U3CU3Ec__DisplayClass20_0_t3F1B650156E2D4BBCDBE001CA8F34C582A9476DE * __this, const RuntimeMethod* method)
{
	{
		// toggleBtnSc.onClick.AddListener(() => { toggleController.Switching(); });
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_0 = __this->get_toggleController_0();
		NullCheck(L_0);
		ToggleController_Switching_mCB111EE47DCD3BE6190C53564B8BB05DBF21FE83(L_0, /*hidden argument*/NULL);
		// toggleBtnSc.onClick.AddListener(() => { toggleController.Switching(); });
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
// System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__4__ctor_mFDE73BDF39095D5CB04C52943F3F749FC1D96B3A (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__4_System_IDisposable_Dispose_mB4A7976DB6C72A46D7BD842E606BA59D639EEA6B (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotU3Ed__4_MoveNext_m5CC1B979FCBFA45CC4DE44556BFA5DE5FF8E5C47 (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuBase_HandleResult_m6C640AD245243A32B3B4B86357E00D9BCDCB77E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral144022BFA1C9495AF8955A3033D64C7B341BB9F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0D251E86F630DB18F9E55E7D34505BF100091AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC98975C9558A3380BC463FE3A1931BF7CC8E7208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var width = Screen.width;
		int32_t L_5;
		L_5 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_2 = L_5;
		// var height = Screen.height;
		int32_t L_6;
		L_6 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_3 = L_6;
		// var tex = new Texture2D(width, height, TextureFormat.RGB24, false);
		int32_t L_7 = V_2;
		int32_t L_8 = V_3;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_9, L_7, L_8, 3, (bool)0, /*hidden argument*/NULL);
		// tex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_10 = L_9;
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), (0.0f), ((float)((float)L_11)), ((float)((float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Texture2D_ReadPixels_m4C6FE8C2798C39C20A14DAFC963C720D17F4F987(L_10, L_13, 0, 0, /*hidden argument*/NULL);
		// tex.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = L_10;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		// byte[] screenshot = tex.EncodeToPNG();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		// var wwwForm = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_16 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_16, /*hidden argument*/NULL);
		V_5 = L_16;
		// wwwForm.AddBinaryData("image", screenshot, "InteractiveConsole.png");
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_17 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_4;
		NullCheck(L_17);
		WWWForm_AddBinaryData_m9DB02F0F9C145A880D5489F2FEF04E81404B7E09(L_17, _stringLiteralC3B3B7ACBC0F8F50E84C2570A76A848F78D95D56, L_18, _stringLiteral144022BFA1C9495AF8955A3033D64C7B341BB9F4, /*hidden argument*/NULL);
		// wwwForm.AddField("message", "herp derp.  I did a thing!  Did I do this right?");
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_19 = V_5;
		NullCheck(L_19);
		WWWForm_AddField_m8ACDB7B2124FA6EAD7FC120BB469C6352C7B7696(L_19, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, _stringLiteralC0D251E86F630DB18F9E55E7D34505BF100091AB, /*hidden argument*/NULL);
		// FB.API("me/photos", HttpMethod.POST, this.HandleResult, wwwForm);
		GraphRequest_tDD89F08E9D528FC5B23088BA47E602FD21B5AB78 * L_20 = V_1;
		FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 * L_21 = (FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190 *)il2cpp_codegen_object_new(FacebookDelegate_1_tCC330635F161FF682684D3E30BDEDC31901AB190_il2cpp_TypeInfo_var);
		FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F(L_21, L_20, (intptr_t)((intptr_t)MenuBase_HandleResult_m6C640AD245243A32B3B4B86357E00D9BCDCB77E1_RuntimeMethod_var), /*hidden argument*/FacebookDelegate_1__ctor_m9191F920293FB38D34AEFF835D0CDC350C82FA2F_RuntimeMethod_var);
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_22 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(FB_tC6241CD1307C536C829D192B0DC0935C6BB210C2_il2cpp_TypeInfo_var);
		FB_API_m57B526516AB7098C3E250FCA6BEC76FA87F9A238(_stringLiteralC98975C9558A3380BC463FE3A1931BF7CC8E7208, 1, L_21, L_22, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4BFEAC3397C268E3CE931454E7DDCAF4AB248BC8 (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m7BF49F82A5EFF7F32B3FA82AB48554E368DCF674 (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_Reset_m7BF49F82A5EFF7F32B3FA82AB48554E368DCF674_RuntimeMethod_var)));
	}
}
// System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__4_System_Collections_IEnumerator_get_Current_m48CB53297F5D6E3CC52272F3E48E27F03C346A6B (U3CTakeScreenshotU3Ed__4_t641AE41102E7259031A1427F40F2A20FA494FE7D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void SplashScreen/<SplashScreenTime>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplashScreenTimeU3Ed__2__ctor_m532EB9823DC4CB6C8ABCDF5464E170ABEBEBEEA7 (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SplashScreen/<SplashScreenTime>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplashScreenTimeU3Ed__2_System_IDisposable_Dispose_mF6C0580F95ADF2EDDACCEEEBBBD0A583A775DB02 (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SplashScreen/<SplashScreenTime>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSplashScreenTimeU3Ed__2_MoveNext_mFDEB8E4B4F51560475B4DF5F8A5D7C5274FE5FB1 (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		SplashScreen_t384E1221F935EDDFBB185D1AEE27282AEFA315E8 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_time_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadSceneAsync(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7;
		L_7 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SplashScreen/<SplashScreenTime>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSplashScreenTimeU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE05EF8B8220A669DA5E1C1A1EC03B1B829C1F69D (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SplashScreen/<SplashScreenTime>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplashScreenTimeU3Ed__2_System_Collections_IEnumerator_Reset_mDF3E57C2B2D23C74D2B67943525FF592E47F4FB8 (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSplashScreenTimeU3Ed__2_System_Collections_IEnumerator_Reset_mDF3E57C2B2D23C74D2B67943525FF592E47F4FB8_RuntimeMethod_var)));
	}
}
// System.Object SplashScreen/<SplashScreenTime>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSplashScreenTimeU3Ed__2_System_Collections_IEnumerator_get_Current_mCE3B447B3CD543C535CE9517058F7E0291306694 (U3CSplashScreenTimeU3Ed__2_t9F78ED326BF647D17919C75DAFAAA842FC881712 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ToggleController/<Setup>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__14__ctor_m9A60E197B050074E0BFCEDF90AEBA96113FFC54E (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ToggleController/<Setup>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__14_System_IDisposable_Dispose_m1EC4F28B233D0EF17D738263F5BC85D655BDB192 (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ToggleController/<Setup>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetupU3Ed__14_MoveNext_mAA56A808D25942B8F5A6CB09699FD8BB2576C001 (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * V_1 = NULL;
	float V_2 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// handleSize = handle.rect.width;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_5 = V_1;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_6 = V_1;
		NullCheck(L_6);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = L_6->get_handle_9();
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_handleSize_10(L_9);
		// float toggleSizeX = toggle.rect.width;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_10 = V_1;
		NullCheck(L_10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = L_10->get_toggle_8();
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		float L_13;
		L_13 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_13;
		// onPosX = toggleSizeX * 0.5f - handleSize * 0.5f - handleSize * 0.1f;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_14 = V_1;
		float L_15 = V_2;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->get_handleSize_10();
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_handleSize_10();
		NullCheck(L_14);
		L_14->set_onPosX_11(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_15, (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)L_17, (float)(0.5f))))), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)(0.100000001f))))));
		// offPosX = onPosX * -1;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_20 = V_1;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->get_onPosX_11();
		NullCheck(L_20);
		L_20->set_offPosX_12(((float)il2cpp_codegen_multiply((float)L_22, (float)(-1.0f))));
		// if(isOn)
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = L_23->get_isOn_4();
		if (!L_24)
		{
			goto IL_00da;
		}
	}
	{
		// toggleBgImage.sprite = toggleOnBGImage;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_25 = V_1;
		NullCheck(L_25);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = L_25->get_toggleBgImage_7();
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_27 = V_1;
		NullCheck(L_27);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_28 = L_27->get_toggleOnBGImage_5();
		NullCheck(L_26);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_26, L_28, /*hidden argument*/NULL);
		// handle.localPosition = new Vector3(onPosX, 0f, 0f);
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_29 = V_1;
		NullCheck(L_29);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = L_29->get_handle_9();
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = L_31->get_onPosX_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_32, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_30, L_33, /*hidden argument*/NULL);
		// }
		goto IL_010b;
	}

IL_00da:
	{
		// toggleBgImage.sprite = toggleOffBGImage;
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_34 = V_1;
		NullCheck(L_34);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = L_34->get_toggleBgImage_7();
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_36 = V_1;
		NullCheck(L_36);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_37 = L_36->get_toggleOffBGImage_6();
		NullCheck(L_35);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_35, L_37, /*hidden argument*/NULL);
		// handle.localPosition = new Vector3(offPosX, 0f, 0f);
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_38 = V_1;
		NullCheck(L_38);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_39 = L_38->get_handle_9();
		ToggleController_t2EC6820D68D9E2EC88A95F5BC0233358DFB55CC6 * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->get_offPosX_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), L_41, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_39, L_42, /*hidden argument*/NULL);
	}

IL_010b:
	{
		// }
		return (bool)0;
	}
}
// System.Object ToggleController/<Setup>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetupU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8FAE7A878251C36C35A66C6C89704CECBBE8CD44 (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ToggleController/<Setup>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__14_System_Collections_IEnumerator_Reset_mF3773B3DDB478693CF1F5206EAFBA9ADB38E8CC8 (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetupU3Ed__14_System_Collections_IEnumerator_Reset_mF3773B3DDB478693CF1F5206EAFBA9ADB38E8CC8_RuntimeMethod_var)));
	}
}
// System.Object ToggleController/<Setup>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetupU3Ed__14_System_Collections_IEnumerator_get_Current_mAA2FD4563CDF7879EE8023FC33BB45A01E7E7AD0 (U3CSetupU3Ed__14_tC4FA47583F7138C2A2CC6011E12AF177E4C5149C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ElephantSDK.VersionCheckUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD1D3003081D46A36C20674812531F913950D0A36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * L_0 = (U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 *)il2cpp_codegen_object_new(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m29CAA4E5AC2DD4CF2A9EB06ED192541ACF4A4EF5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ElephantSDK.VersionCheckUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29CAA4E5AC2DD4CF2A9EB06ED192541ACF4A4EF5 (U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ElephantSDK.VersionCheckUtils/<>c::<GetAdSdkVersion>b__6_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAdSdkVersionU3Eb__6_0_m2DF5108E5973A80598EF8F75BF9E6880E3AB0275 (U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * __this, Type_t * ___typeToFind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D3B21F642EDA623820C52011E94A52D0229803B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// typeToFind.FullName != null
		// && typeToFind.FullName.Equals("RollicGames.Advertisements.Version"));
		Type_t * L_0 = ___typeToFind0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_2 = ___typeToFind0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteral2D3B21F642EDA623820C52011E94A52D0229803B, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean ElephantSDK.VersionCheckUtils/<>c::<GetMopubVersion>b__7_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetMopubVersionU3Eb__7_0_m180F5039093832AD6BB030836403A9D0BC03CFD0 (U3CU3Ec_t7BFFA5758767B2A56E908BE9BEAD216D568D7521 * __this, Type_t * ___typeToFind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650189BF4B4786C2C54EB680E60BF25BAF658CFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// typeToFind.FullName != null
		// && typeToFind.FullName.Equals("MoPub"));
		Type_t * L_0 = ___typeToFind0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_2 = ___typeToFind0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteral650189BF4B4786C2C54EB680E60BF25BAF658CFD, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
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
// System.Void ElephantSDK.VersionData/MopubNetworkData::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MopubNetworkData__ctor_m429756FCF93DC7060B99AF7037265B00E4BC87BE (MopubNetworkData_tE77E0A4DFEDB744F2E3D3AE68BC050AE4A2C7310 * __this, String_t* ___name0, String_t* ___version1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = "";
		__this->set_name_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string version = "";
		__this->set_version_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public MopubNetworkData(string name, string version)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		// this.version = version;
		String_t* L_1 = ___version1;
		__this->set_version_1(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RemoteConfig_SetFirstOpen_m209440095B7019363D253B7CD07F8A6151CBC377_inline (RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * __this, bool ___firstOpen0, const RuntimeMethod* method)
{
	{
		// _firstOpen =  firstOpen;
		bool L_0 = ___firstOpen0;
		__this->set__firstOpen_3(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RemoteConfig_GetTag_mBAC0C3DF99CF3CB30B568434578B99997F49566B_inline (RemoteConfig_tC32C74370C07F6A2895F16709677FEEDF2D94F30 * __this, const RuntimeMethod* method)
{
	{
		// return userTag;
		String_t* L_0 = __this->get_userTag_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * ElephantCore_GetCurrentSession_m5C2846FDE3649FD8A8BDD05D40F2C145D775C752_inline (ElephantCore_tEA8B6E45291EE77CFAE8E3E917126CCC4440FBE6 * __this, const RuntimeMethod* method)
{
	{
		// return currentSession;
		SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * L_0 = __this->get_currentSession_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SessionData_GetSessionID_mC4325581558B6207925E73695A2884393D276847_inline (SessionData_t2CB7B98481B66A7C19B974FA055DDB787248C55F * __this, const RuntimeMethod* method)
{
	{
		// return start_time;
		int64_t L_0 = __this->get_start_time_21();
		return L_0;
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
