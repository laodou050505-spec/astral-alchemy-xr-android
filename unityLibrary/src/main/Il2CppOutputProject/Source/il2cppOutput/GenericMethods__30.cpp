#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61;
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A;
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventProperties_t6C5B8997F8C79157B7C03C1A566F17CE2BBE8D53;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct Type_t;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1;
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16AB58195C93FFFDA63777FA69B1F4C5A0C025AE;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C String_t* _stringLiteral55EFAD42F2ECD3DC97523F3D6047EA4A418D460E;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6A5A1DA0D77503346B465FD7EEC86F5DFBD1B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF902A026CFCEE6EAD3A7C856486F777570D48E;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2  : public RuntimeObject
{
};
struct InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3  : public RuntimeObject
{
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F  : public RuntimeObject
{
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___m_Instance;
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___m_Users;
};
struct AndroidSharedMemory_t2B1ABE0DEBF4FFFC12643E620818A5A8A61D8ED7  : public RuntimeObject
{
};
struct SpatialBytesConverter_t4483D20E25BEE7F9917D73DE92A0D79859C810E5  : public RuntimeObject
{
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	int32_t ___length;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	int32_t ___length;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue;
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues;
};
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	int32_t ___length;
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue;
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues;
};
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	int32_t ___length;
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue;
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues;
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	int32_t ___length;
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue;
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
	InputManager_t69FCFDAC90F8EBB8EF4950CC0BE617D842A39210* ___m_Manager;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};
struct MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D__padding[1];
	};
};
struct MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00__padding[1];
	};
};
struct MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23__padding[1];
	};
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	alignas(IL2CPP_SIZEOF_VOID_P) TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	alignas(IL2CPP_SIZEOF_VOID_P) BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	alignas(IL2CPP_SIZEOF_VOID_P) InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	bool ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};
struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove;
};
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	int32_t ___length;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BindingMode_t14EA605BB56B087ECA15C8BF7826E98F12D30E61 
{
	int32_t ___value__;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
};
struct BindingUpdateStage_t91119CD89F37505ED96D2FC473F486E5ED112762 
{
	int32_t ___value__;
};
struct BindingUpdateTrigger_t5237F1E29F5B5604BB57907C83EE6B1CFA261234 
{
	int32_t ___value__;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct InputActionPhase_t79D9374C1940AA7248377075A0E83122540334C6 
{
	int32_t ___value__;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls;
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions;
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors;
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites;
	int32_t ___totalProcessorCount;
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory;
	bool ___m_OnBeforeUpdateHooked;
	bool ___m_OnAfterUpdateHooked;
	bool ___m_InProcessControlStateChange;
	bool ___m_Suppressed;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct InputEventHandledPolicy_t557FD058904FCF0FDBE247DE84D1DD7EDC1A11C4 
{
	int32_t ___value__;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct NativeInputEventType_t622584116C97356073253408636FA50ECAA9853B 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
};
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	Type_t* ___U3CtypeU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField;
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField;
	String_t* ___m_ExtendsLayout;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField;
	int32_t ___m_ControlCount;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
};
struct Flags_t193C2E9B0D9701ACB7ABD982BA8B3B2DB2F74230 
{
	int32_t ___value__;
};
struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_OffsetPadding[8];
			uint32_t ___version;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_OffsetPadding[12];
			int32_t ___controlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_forAlignmentOnly;
		};
	};
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct Flags_t1CB5B94A697E6B27C5E564B9BE5421010A992B3F 
{
	int32_t ___value__;
};
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	int32_t ___length;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED  : public RuntimeObject
{
	bool ___m_Dirty;
	int32_t ___m_UpdateTrigger;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB 
{
	int32_t ___U3CstatusU3Ek__BackingField;
	String_t* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_pinvoke
{
	int32_t ___U3CstatusU3Ek__BackingField;
	char* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_com
{
	int32_t ___U3CstatusU3Ek__BackingField;
	Il2CppChar* ___U3CmessageU3Ek__BackingField;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 
{
	String_t* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_pinvoke
{
	char* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_com
{
	Il2CppChar* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	Type_t* ___m_Type;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
	String_t* ___m_DisplayName;
	String_t* ___m_Description;
	int32_t ___m_Flags;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
#pragma pack(push, tp, 1)
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding[4];
					uint16_t ___sizeInBytes;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding[6];
					uint16_t ___deviceId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding[8];
					double ___time;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding_forAlignmentOnly[8];
					double ___time_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding[16];
					int32_t ___eventId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};
#pragma pack(pop, tp)
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
#pragma pack(push, tp, 1)
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};
#pragma pack(pop, tp)
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls;
	int32_t ___m_ControlCount;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer;
	int32_t ___m_StateSizeInBytes;
	int32_t ___m_RecordCount;
	int32_t ___m_HistoryDepth;
	int32_t ___m_ExtraMemoryPerRecord;
	int32_t ___m_HeadIndex;
	uint32_t ___m_CurrentVersion;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask;
	bool ___m_AddNewControls;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76 
{
	TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C ___allocator;
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___jobParameters;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack;
	int32_t ___m_CachedValue;
	int32_t ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
#pragma pack(push, tp, 1)
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_OffsetPadding[20];
					uint16_t ___m_ControlIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_OffsetPadding[22];
					uint16_t ___m_BindingIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding[24];
					uint16_t ___m_InteractionIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_OffsetPadding[26];
					uint8_t ___m_StateIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_OffsetPadding[27];
					uint8_t ___m_Phase;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_OffsetPadding[28];
					double ___m_StartTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_OffsetPadding[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};
#pragma pack(pop, tp)
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA  : public Binding_tA1358A155852138C1926082E4F3245B6F631CBED
{
	int32_t ___m_BindingMode;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_SourceToUiConverters;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_UiToSourceConverters;
	RuntimeObject* ___U3CdataSourceU3Ek__BackingField;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CdataSourcePathU3Ek__BackingField;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	Type_t* ___m_ControlType;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout;
	int32_t ___m_IncludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths;
	int32_t ___m_ExcludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths;
	int32_t ___m_TargetBindingIndex;
	String_t* ___m_BindingGroupForNewBinding;
	String_t* ___m_CancelBinding;
	float ___m_MagnitudeThreshold;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes;
	double ___m_LastMatchTime;
	double ___m_StartTime;
	float ___m_Timeout;
	float ___m_WaitSecondsAfterMatch;
	int32_t ___m_SavedInputEventHandledPolicy;
	int32_t ___m_TargetInputEventHandledPolicy;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch;
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath;
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore;
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache;
	StringBuilder_t* ___m_PathBuilder;
	int32_t ___m_Flags;
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	RuntimeObject* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1  : public ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CBindingU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CbindingU3Ek__BackingField;
	int32_t ___U3CdirectionU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Interactions;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields
{
	int32_t ___FRAME_SIZE_FOR_ARRAYS;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputInitialActionStateCheckMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionResolveConflictMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionCallbackMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputOnActionChangeMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputOnDeviceChangeMarker;
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant;
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance;
	int32_t ___s_CacheInstanceRef;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA_StaticFields
{
	MethodInfo_t* ___s_UpdateUIMethodInfo;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, Il2CppSharedGenericObject* ___0_processor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_Call_TisIl2CppSharedGenericObject_m8DEE2A0D06B4978C5E5000815E66E6484606D138_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_gshared_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_gshared (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_gshared_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_gshared (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_gshared_inline (int16_t* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared)(___0_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared)(___0_args, method);
}
inline String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared)(___0_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared)(__this, ___0_ev, method);
}
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared)(__this, ___0_ev, method);
}
inline int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*, const RuntimeMethod*))MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*, const RuntimeMethod*))MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*, const RuntimeMethod*))MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*, const RuntimeMethod*))MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*, const RuntimeMethod*))MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*, const RuntimeMethod*))MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared)(__this, ___0_ev, method);
}
inline RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared)(__this, ___0_ev, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared)(__this, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
inline float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
inline void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared)((CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_interaction, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_processor, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___0_layoutType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, Il2CppSharedGenericObject* ___0_processor, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, Il2CppSharedGenericObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_gshared_inline)(__this, ___0_processor, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3 (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT, intptr_t, const RuntimeMethod*))TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_gshared)(__this, ___0_handlePtr, method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8 (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A (*) (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A*, const RuntimeMethod*))PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A*, const RuntimeMethod*))PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared)(__this, method);
}
inline bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27_gshared)(method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared)(__this, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared)(__this, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared)(__this, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared)(__this, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared)(__this, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared)(__this, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared)(__this, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared)(__this, method);
}
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared)(__this, method);
}
inline void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 (*) (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D*, const RuntimeMethod*))PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppSharedGenericObject_m8DEE2A0D06B4978C5E5000815E66E6484606D138_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183 (intptr_t ___0_buffer, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079 (int64_t ___0_val1, int64_t ___1_val2, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD (String_t* ___0_name, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
inline bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (bool*, const RuntimeMethod*))UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_gshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, bool*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_gshared)(___0_source, ___1_destination, method);
}
inline uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_gshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (double*, uint8_t*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_gshared)(___0_source, ___1_destination, method);
}
inline int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline (int16_t* ___0_from, const RuntimeMethod* method)
{
	return ((  int16_t* (*) (int16_t*, const RuntimeMethod*))UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_gshared_inline)(___0_from, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m5714D44FF454CB672C9F04F1316533DAD6C6BCBB_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck((RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CastDataSourceVisitor_VisitContainer_TisIl2CppFullySharedGenericAny_mCD54098F1F347037182D18EBDCEFCAFBDD695A7F_gshared (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, Il2CppFullySharedGenericAny* ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0;
		L_0 = CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_1;
		L_1 = CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline(__this, NULL);
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2 = ___0_container;
		NullCheck(L_0);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_3;
		L_3 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (&V_0), L_2);
		CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPathVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m73D1BFCDF215021460578C85EA3FD2D0973EB79C_gshared (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0040;
	}

IL_0010:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_3;
		L_3 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_4;
		L_4 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___2_value;
		NullCheck(L_3);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_6;
		L_6 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_3, (&V_2), L_5);
		V_0 = L_6;
		goto IL_0046;
	}

IL_0028:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_7;
		L_7 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_8;
		L_8 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_8;
		Il2CppFullySharedGenericAny* L_9 = ___2_value;
		NullCheck(L_7);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_10;
		L_10 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), L_7, (&V_2), L_9);
		V_0 = L_10;
		goto IL_0046;
	}

IL_0040:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0046:
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_12 = V_0;
		UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_gshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_0, &L_2, L_1);
		typedef EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ( *func_L_4)(void*,const RuntimeMethod*);
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_5 = ((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		return L_5;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_gshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_0, &L_2, L_1);
		typedef int32_t ( *func_L_4)(void*,const RuntimeMethod*);
		int32_t L_5 = ((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_1 = (*(CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*)L_0);
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_1 = (*(IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*)L_0);
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_1 = (*(KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*)L_0);
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_1 = (*(NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*)L_0);
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_1 = (*(PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*)L_0);
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_1 = (*(TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*)L_0);
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_gshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113(L_3, L_4, L_5, (InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	int32_t _returnValue;
	_returnValue = CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5(L_3, L_4, L_5, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_5 = V_0;
		NullCheck(L_3);
		float L_6;
		L_6 = InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0(L_3, L_4, L_5, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5(L_3, L_4, L_5, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28(L_3, L_4, L_5, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_11 = L_5;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(G_B4_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		NullCheck(L_3);
		InvokerActionInvoker4< int32_t, Il2CppFullySharedGenericStruct, InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_3, L_4, L_5, (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)NULL, (Il2CppFullySharedGenericStruct*)L_6);
		il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		InvokerActionInvoker4< int32_t, int32_t, bool, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, L_9, (bool)0, (Il2CppFullySharedGenericStruct*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, L_10, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_004a:
	{
		il2cpp_codegen_memcpy(V_0, G_B4_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_004b:
	{
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8>(__this);
	CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisIl2CppSharedGenericObject_m9E07E8A20761C112D45760E0D268AAE535680058_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3_StaticFields*)il2cpp_codegen_static_fields_for(InputInteraction_t4743B8B29C5C3AAA7D61E7E9E6C4C5091E169EA3_il2cpp_TypeInfo_var))->___s_Interactions), L_3, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBF902A026CFCEE6EAD3A7C856486F777570D48E)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_004b:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317>(__this);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_3, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_004b:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317>(__this);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts), L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_7);
		V_0 = L_8;
	}

IL_003b:
	{
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D>(__this);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D>(__this);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisIl2CppSharedGenericObject_mD449E742DCE15C78C5C90EBBDAC1F6B2264DC0AE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D>(__this);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisIl2CppSharedGenericObject_m7B763B10EB251962EF81A5C9A01E1976D5A06F8A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D>(__this);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisIl2CppSharedGenericObject_mAAD34DEABABF931B156879DA58940B63C99CA733(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisIl2CppSharedGenericObject_m2327E2821D44AAAB78F53F02F9D6C9606C2A060C(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D>(__this);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisIl2CppSharedGenericObject_mD180F69ACC79BE606D1EA93BCB502A612CC30472(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	{
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = __this->___m_Ptr;
		int32_t L_1;
		L_1 = ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(il2cpp_defaults.int32_class, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.int32_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_15, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_20 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_005b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(V_1, L_21, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		void* L_22;
		L_22 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_23 = __this->___m_Ptr;
		uint8_t* L_24;
		L_24 = ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_23, NULL);
		int32_t L_25 = V_0;
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_25,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_22, (void*)L_24, L_26, NULL);
		il2cpp_codegen_memcpy(L_27, V_1, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_27, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		return;
	}
}
IL2CPP_EXTERN_C  void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74>(__this);
	ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, Il2CppSharedGenericObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0;
		L_0 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		Il2CppSharedGenericObject* L_1 = ___0_processor;
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_1);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_3 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_AdjustorThunk (RuntimeObject* __this, Il2CppSharedGenericObject* ___0_processor, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15>(__this);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_inline(_thisAdjusted, ___0_processor, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisIl2CppSharedGenericObject_m3268953B9D0B90CABAABE69C464C5A7D8C2ABB7B_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0>(__this);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		intptr_t L_0 = ___0_handlePtr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0018:
	{
		intptr_t L_3 = ___0_handlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_2;
		return L_6;
	}

IL_0032:
	{
		RuntimeObject* L_7;
		L_7 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3(_thisAdjusted, ___0_handlePtr, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A));
		NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m65662D0552415B85C6F0258540EF727CC2A6CF44(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A>(__this);
	NativeArray_1_t880C01E5EE92F4CE738A6229CF0AC0560328BE3A _returnValue;
	_returnValue = PhysicsBuffer2D_ToNativeArray_TisRaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA_m08990BFCA53A880B50E8DBAEEBAA1821A93AAFB8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_gshared (PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer2D_t406A28071CAE2BF9C3913B50E10519386736A46A>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer2D_ToNativeArray_TisIl2CppFullySharedGenericStruct_mE58A8C0EF2880F46C913FB25694F2903F16F2A0D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_gshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Container_GetInstance_TisIl2CppSharedGenericObject_mBA9CFA88CC10BE88582373B12CF4B63DF9D7C42E_gshared (Container_tC37DC3F487EACD6965331243CDFEF748D8F5A05F* __this, RuntimeObject* ___0_user, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = __this->___m_Users;
		RuntimeObject* L_1 = ___0_user;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B(L_0, L_1, HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_3 = __this->___m_Instance;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppSharedGenericObject* L_5;
		L_5 = ScriptableObject_CreateInstance_TisIl2CppSharedGenericObject_mCBB59C30398DB494162F775DCD530D192A8D0A27(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___m_Instance = (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Instance), (void*)(ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A*)L_5);
	}

IL_002b:
	{
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_6 = __this->___m_Instance;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D _returnValue;
	_returnValue = PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 _returnValue;
	_returnValue = PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_gshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D>(__this);
	Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 _returnValue;
	_returnValue = PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidSharedMemory_CopyToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7465C41D498C1748FF623B7B3AC249C7202688F6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_sharedMemory, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16AB58195C93FFFDA63777FA69B1F4C5A0C025AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55EFAD42F2ECD3DC97523F3D6047EA4A418D460E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6A5A1DA0D77503346B465FD7EEC86F5DFBD1B2);
		il2cpp_rgctx_method_init(method);
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	int8_t* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_sharedMemory;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline((&___1_destination), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_destination))->___m_Length);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		V_0 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral16AB58195C93FFFDA63777FA69B1F4C5A0C025AE, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a6:
			{
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_1;
					if (!L_4)
					{
						goto IL_00af;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00af:
				{
					return;
				}
			}
		});
		try
		{
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0087_1:
					{
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
							if (!L_6)
							{
								goto IL_00a5_1;
							}
						}
						{
							AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_1;
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
							NullCheck(L_9);
							ArrayElementTypeCheck (L_9, L_10);
							(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
							NullCheck((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7);
							AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7, _stringLiteral55EFAD42F2ECD3DC97523F3D6047EA4A418D460E, L_9, NULL);
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
							NullCheck(L_11);
							AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_11, NULL);
						}

IL_00a5_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_sharedMemory;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
						L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
						NullCheck(L_12);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
						L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_12, _stringLiteral7A6A5A1DA0D77503346B465FD7EEC86F5DFBD1B2, L_13, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_0 = L_14;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
						NullCheck(L_15);
						intptr_t L_16;
						L_16 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_15, NULL);
						intptr_t L_17 = L_16;
						int8_t* L_18;
						L_18 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_17, NULL);
						V_2 = L_18;
						int64_t L_19;
						L_19 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_17, NULL);
						V_3 = L_19;
						int8_t* L_20 = V_2;
						uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
						if ((((intptr_t)L_20) == ((intptr_t)L_21)))
						{
							goto IL_0052_2;
						}
					}
					{
						int64_t L_22 = V_3;
						int64_t L_23 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
						if ((((int64_t)L_22) > ((int64_t)L_23)))
						{
							goto IL_0057_2;
						}
					}

IL_0052_2:
					{
						V_6 = 0;
						goto IL_00b0;
					}

IL_0057_2:
					{
						int32_t L_24;
						L_24 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_destination))->___m_Length);
						int32_t L_25;
						L_25 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
						V_4 = ((int32_t)il2cpp_codegen_multiply(L_24, L_25));
						int64_t L_26 = V_3;
						int32_t L_27 = V_4;
						int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_27,NULL));
						il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
						int64_t L_29;
						L_29 = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(L_26, L_28, NULL);
						int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_29,NULL));
						V_5 = L_30;
						NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_31 = ___1_destination;
						void* L_32;
						L_32 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_inline(L_31, il2cpp_rgctx_method(method->rgctx_data, 5));
						int8_t* L_33 = V_2;
						int32_t L_34 = V_5;
						int64_t L_35 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_34,NULL));
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_32, (void*)L_33, L_35, NULL);
						int32_t L_36 = V_5;
						V_6 = L_36;
						goto IL_00b0;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		int32_t L_37 = V_6;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidSharedMemory_CopyToNativeArray_TisIl2CppFullySharedGenericStruct_m67E5C6D2A720D07664623A646DFC990B35DF27DD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_sharedMemory, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16AB58195C93FFFDA63777FA69B1F4C5A0C025AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55EFAD42F2ECD3DC97523F3D6047EA4A418D460E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6A5A1DA0D77503346B465FD7EEC86F5DFBD1B2);
		il2cpp_rgctx_method_init(method);
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	int8_t* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___0_sharedMemory;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___1_destination), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2;
		L_2 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___1_destination), il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		V_0 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral16AB58195C93FFFDA63777FA69B1F4C5A0C025AE, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a6:
			{
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_1;
					if (!L_4)
					{
						goto IL_00af;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = V_1;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00af:
				{
					return;
				}
			}
		});
		try
		{
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0087_1:
					{
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
							if (!L_6)
							{
								goto IL_00a5_1;
							}
						}
						{
							AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = V_1;
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
							NullCheck(L_9);
							ArrayElementTypeCheck (L_9, L_10);
							(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
							NullCheck((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7);
							AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_7, _stringLiteral55EFAD42F2ECD3DC97523F3D6047EA4A418D460E, L_9, NULL);
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_0;
							NullCheck(L_11);
							AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_11, NULL);
						}

IL_00a5_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_sharedMemory;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
						L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
						NullCheck(L_12);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
						L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_12, _stringLiteral7A6A5A1DA0D77503346B465FD7EEC86F5DFBD1B2, L_13, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
						V_0 = L_14;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
						NullCheck(L_15);
						intptr_t L_16;
						L_16 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_15, NULL);
						intptr_t L_17 = L_16;
						int8_t* L_18;
						L_18 = AndroidJNI_GetDirectBufferAddress_m0E0B127BFEB7AAF065829DC6AE11163D5616EBE8(L_17, NULL);
						V_2 = L_18;
						int64_t L_19;
						L_19 = AndroidJNI_GetDirectBufferCapacity_mCAC8D9C8E45481BE59FB17406E1E16D4F9628183(L_17, NULL);
						V_3 = L_19;
						int8_t* L_20 = V_2;
						uintptr_t L_21 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
						if ((((intptr_t)L_20) == ((intptr_t)L_21)))
						{
							goto IL_0052_2;
						}
					}
					{
						int64_t L_22 = V_3;
						int64_t L_23 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
						if ((((int64_t)L_22) > ((int64_t)L_23)))
						{
							goto IL_0057_2;
						}
					}

IL_0052_2:
					{
						V_6 = 0;
						goto IL_00b0;
					}

IL_0057_2:
					{
						int32_t L_24;
						L_24 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___1_destination), il2cpp_rgctx_method(method->rgctx_data, 3));
						int32_t L_25;
						L_25 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
						V_4 = ((int32_t)il2cpp_codegen_multiply(L_24, L_25));
						int64_t L_26 = V_3;
						int32_t L_27 = V_4;
						int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_27,NULL));
						il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
						int64_t L_29;
						L_29 = Math_Min_mD731E8A02F13C67C1EAC7C1E7F81909FE466F079(L_26, L_28, NULL);
						int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_29,NULL));
						V_5 = L_30;
						NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_31 = ___1_destination;
						void* L_32;
						L_32 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_31, il2cpp_rgctx_method(method->rgctx_data, 5));
						int8_t* L_33 = V_2;
						int32_t L_34 = V_5;
						int64_t L_35 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_34,NULL));
						UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_32, (void*)L_33, L_35, NULL);
						int32_t L_36 = V_5;
						V_6 = L_36;
						goto IL_00b0;
					}
				}
				catch(Il2CppNativeThreadAbortException&)
				{
					__finallyBlock.SetNativeThreadAbortOccurred();
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		int32_t L_37 = V_6;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m78062A4D33FF541D213A7A71600D8D5717590F4F_gshared (String_t* ___0_name, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), (RuntimeArray*)L_10, L_11, NULL);
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mD1F1F0BE1C43F02F652DB52EC0C85E710B73F0F1_gshared (String_t* ___0_name, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m52B9CDE8D7472D7F8830C5DA606831354FBFA3EA_gshared (String_t* ___0_name, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB4CA839DC03C82E40D08F48FEF11C484879B6C78_gshared (String_t* ___0_name, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m037378F6137447BCD19320FEFD116A1E44E0846B_gshared (String_t* ___0_name, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m551CDAF5E9269A9404307E768E7DD45CF5A1575F_gshared (String_t* ___0_name, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m9DF92198FA759AC8AE342802909F147210290053_gshared (String_t* ___0_name, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		goto IL_0053;
	}

IL_0053:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_9 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005d:
	{
		String_t* L_12 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
		L_14 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_12, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidSharedMemory_CreateFromArray_TisIl2CppFullySharedGenericStruct_mA24BC6C3603167D66FCAC0FE88BA03EA4E0FAF0F_gshared (String_t* ___0_name, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_arr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___1_arr;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8019C224FB10E55DD9F8A97FFDD86A70B057D1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_3, NULL);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___1_arr;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, L_6));
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		bool L_9 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_10 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		int32_t L_12 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), (RuntimeArray*)L_11, L_12, NULL);
		goto IL_005d;
	}

IL_0053:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_13 = ___1_arr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		int32_t L_15 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
	}

IL_005d:
	{
		String_t* L_16 = ___0_name;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18;
		L_18 = AndroidSharedMemory_CreateFromBytes_m23DF362CB07D155D9EF8D79D680F1302C3E510CD(L_16, L_17, NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* SpatialBytesConverter_ConvertBytesTo_TisIl2CppFullySharedGenericStruct_m4642F9A0FB63ECCAAC8B030ECA6BF9BF6C264444_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytes;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2;
		L_2 = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}

IL_000d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Marshal_SizeOf_mED64846722033D6F60C2973CA604B7C2D7D4A1B7(L_4, NULL);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_bytes;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = V_0;
		V_1 = ((int32_t)(L_7/L_8));
		bool L_9 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_bytes;
		return ((__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0045:
	{
		int32_t L_11 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), (uint32_t)L_11);
		V_2 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_bytes;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_14 = V_2;
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_17 = V_2;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9027343AE2D5E12E783D960A500BBA8FE5195BBC_gshared (bool* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		bool* L_0 = ___0_source;
		bool* L_1;
		L_1 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_2 = (*(bool*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m149761E33DBB5938797158CD2267777889249D20_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DF4ED5D8E7966448749B0EF4789CF9D28790956_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC66F7E13FEF3C2A3380BBC07D08F03A8782D33CB_gshared (double* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		V_0 = (bool)((((int32_t)((((double)L_1) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m89D52A31D7F2F05F0D17A850C58C0C5F8E030B6B_gshared (int16_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int16_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25B619AFC89D9688CFC7B2569ED069D7C20C2994_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC18983A5F1A6A7A790401C2B2FD83531E72EBF6_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m09B0F2B814F11B8AE2E0C98B2DFC66B096AED85F_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m036744F72FE967803E4F56F626BD5921C272FE91_gshared (float* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = il2cpp_codegen_ldind<float, float>(L_0);
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12F65C97A5D3B2BEDA547C8B1D5B8507A2FB1A2E_gshared (String_t** ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = il2cpp_codegen_ldind<String_t*, String_t*>(L_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_2;
		L_2 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}

IL_0033:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = il2cpp_codegen_ldind<String_t*, String_t*>(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A((&V_1), (&V_2), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0053;
		}
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		bool L_9 = V_3;
		return L_9;
	}

IL_0053:
	{
		bool* L_10;
		L_10 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_11 = (*(bool*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m37E4ADE675B732C53AA44A131ECDDDB9117C2FEF_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C45A7B312AAB20E4018482DD63528AE0FA8AD7F_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint32_t>(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA24D1584B8259D1400DB72B059F6E272F648CD46_gshared (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_0));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D9F1B7A5D81F7D975583BEDDD47FB3FF700DB66_gshared (bool* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF5EB901165BBA1DD14FB0BA192EDCEEAB74270AA_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		uint8_t* L_1;
		L_1 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_2 = (*(uint8_t*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32C9CA058130C3CD23CF459833CA0B683CB2CA25_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3256829F19143C84DDFB7DE5E99CADED21B525F_gshared (double* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,double,double,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEBDD863AA99BCA43774A0D46CFD65779C2371387_gshared (int16_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int16_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m99856D60B28AB7F7BB78FB2CC353B0449B439D26_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB68AB17BB4FA9B0767863E482CD15EFB7471C208_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m28268368C65727EB799EFC8BA63007367C1CA714_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF577073B6AEC787E4E861B6BB90E3007081CE686_gshared (float* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = il2cpp_codegen_ldind<float, float>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9B13901D54CB804F0D654765920805B858783F96_gshared (String_t** ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = il2cpp_codegen_ldind<String_t*, String_t*>(L_0);
		bool L_2;
		L_2 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, (&V_4), NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}

IL_0093:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = il2cpp_codegen_ldind<String_t*, String_t*>(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_5), NULL);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC((&V_5), (&V_6), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00b3;
		}
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_9 = V_3;
		return L_9;
	}

IL_00b3:
	{
		uint8_t* L_10;
		L_10 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_6), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_11 = (*(uint8_t*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF91E40B8997E8935DD25485CAA881E55AEC97A1_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC7AB336EA1F27C4E4B76DF6C6CA656D88C1FAFDC_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint32_t>(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB41620C809A0702F408476A836BD8B081C5F5F76_gshared (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(((int64_t*)L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6E60594E5DEC517F2531110144CDFDEDF3B46D44_gshared (bool* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
		goto IL_0056;
	}

IL_0056:
	{
		goto IL_0085;
	}

IL_0085:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(((uint8_t*)L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m36404D92937D0B2561E062BBE4E25C940050A1A1_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_0055;
	}

IL_0055:
	{
		goto IL_0080;
	}

IL_0080:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint8_t>(L_0);
		V_3 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC89F76CF2D698A8804F5D0C32B85D4416489CBC6_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0081;
	}

IL_0081:
	{
		goto IL_00ad;
	}

IL_00ad:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_0));
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m61F002EF5AA8EEF49CA1792FB9A9B872483BB11A_gshared (double* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_0091;
	}

IL_0091:
	{
		goto IL_00b8;
	}

IL_00b8:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = il2cpp_codegen_ldind<double, double>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,double,double,false,false>(L_1,NULL));
		V_3 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m357408DC24E9B4D52D25E4FC9C357B90C9561CEA_gshared (int16_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int16_t* L_1;
		L_1 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_2 = (*(int16_t*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2D87E1001C55934B1C40EED8283546AABC8CE415_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m735A2CBCC13B3AA11C78900371EF6E39BDF35391_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
		goto IL_005b;
	}

IL_005b:
	{
		goto IL_0087;
	}

IL_0087:
	{
		goto IL_00b3;
	}

IL_00b3:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = il2cpp_codegen_ldind<int64_t, int64_t>(L_0);
		int16_t L_2 = (il2cpp_codegen_conv<int16_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_4 = L_2;
		int16_t* L_3;
		L_3 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_4 = (*(int16_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PrimitivesConverters_DoConvert_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m7AF0B381F56CC5465F2216F7940A389B17F1BE44_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
		goto IL_005a;
	}

IL_005a:
	{
		goto IL_0086;
	}

IL_0086:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int8_t>(L_0);
		V_4 = (int16_t)L_1;
		int16_t* L_2;
		L_2 = UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_inline((&V_4), il2cpp_rgctx_method(method->rgctx_data, 7));
		int16_t L_3 = (*(int16_t*)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CBindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdirectionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CbindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisIl2CppSharedGenericObject_TisIl2CppFullySharedGenericStruct_m72077CB7FD14402EA589BA7DD5FA1B9F59BE6B10_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, Il2CppSharedGenericObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0;
		L_0 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		Il2CppSharedGenericObject* L_1 = ___0_processor;
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_1);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_3 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_gshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_gshared_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_gshared_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_gshared_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_gshared_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_gshared_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_gshared_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 10)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_gshared_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA61C5F532C23ABF41BE02F5A4EC98DF959605B0D_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_gshared_inline (bool* ___0_from, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_from;
		return (bool*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_gshared_inline (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_from;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t* UnsafeUtility_As_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m79136FE812DC030B796002F8D0127FADB3845447_gshared_inline (int16_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_from;
		return (int16_t*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_2);
		return L_3;
	}
}
