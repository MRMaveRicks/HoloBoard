#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_tAEC11FE6416E1B7D425F72068284FFB83F53BB71;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tFAF411289CD6C709ECC5BDE76966B737E1F1BD7E;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E;
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE;
// System.Type
struct Type_t;
// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle
struct Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_tF1F183DD755D38A7DAF69E7B8465984FF24FBD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticsInterop_t59C97E1FB0AE1F5CA4DC9791D9F4963A02E6D84E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07657094245180507A188C63C49A070BC8752EA2;
IL2CPP_EXTERN_C String_t* _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04;
IL2CPP_EXTERN_C String_t* _stringLiteral1532A53696EE625AE3777874840B492D52037C8E;
IL2CPP_EXTERN_C String_t* _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9;
IL2CPP_EXTERN_C String_t* _stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0;
IL2CPP_EXTERN_C String_t* _stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643;
IL2CPP_EXTERN_C String_t* _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863;
IL2CPP_EXTERN_C String_t* _stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF;
IL2CPP_EXTERN_C String_t* _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08;
IL2CPP_EXTERN_C String_t* _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8;
IL2CPP_EXTERN_C String_t* _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E;
IL2CPP_EXTERN_C String_t* _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658;
IL2CPP_EXTERN_C String_t* _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D;
IL2CPP_EXTERN_C String_t* _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C;
IL2CPP_EXTERN_C String_t* _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6;
IL2CPP_EXTERN_C String_t* _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E;
IL2CPP_EXTERN_C String_t* _stringLiteral95DC79C73A34C98991065992C9FD3B3F8A4AB21B;
IL2CPP_EXTERN_C String_t* _stringLiteral990E9465081709697449AFB110415A8629DE2E13;
IL2CPP_EXTERN_C String_t* _stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D;
IL2CPP_EXTERN_C String_t* _stringLiteralA23629C306AA023437DA41361139F76CFB792614;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06;
IL2CPP_EXTERN_C String_t* _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040;
IL2CPP_EXTERN_C String_t* _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralD150B768BC4907FDDB1BE9F66C5E43806644D97C;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32;
IL2CPP_EXTERN_C String_t* _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C;
IL2CPP_EXTERN_C String_t* _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m33AEAC62C1A072D18E7F9DAF44636FB08884E54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m3E88BBA93CAB8AF753F5247AF742C94CA30399EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mBB211FFD4AEE25121C7BE9100FFA68205EE1698C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m0102FDEC834EB0B2A276EBA67002DAA6B7291036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t496B92889DD634ACDBAB961E7411B1B6C8AEF442 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Byte>
struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333  : public RuntimeObject
{
public:

public:
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___propBag_4;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_streamKeepAlive_1() { return static_cast<int32_t>(offsetof(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D, ___streamKeepAlive_1)); }
	inline RuntimeObject* get_streamKeepAlive_1() const { return ___streamKeepAlive_1; }
	inline RuntimeObject** get_address_of_streamKeepAlive_1() { return &___streamKeepAlive_1; }
	inline void set_streamKeepAlive_1(RuntimeObject* value)
	{
		___streamKeepAlive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamKeepAlive_1), (void*)value);
	}

	inline static int32_t get_offset_of_disposeStream_2() { return static_cast<int32_t>(offsetof(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D, ___disposeStream_2)); }
	inline bool get_disposeStream_2() const { return ___disposeStream_2; }
	inline bool* get_address_of_disposeStream_2() { return &___disposeStream_2; }
	inline void set_disposeStream_2(bool value)
	{
		___disposeStream_2 = value;
	}

	inline static int32_t get_offset_of_configHandle_3() { return static_cast<int32_t>(offsetof(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D, ___configHandle_3)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_configHandle_3() const { return ___configHandle_3; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_configHandle_3() { return &___configHandle_3; }
	inline void set_configHandle_3(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___configHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_3), (void*)value);
	}

	inline static int32_t get_offset_of_propBag_4() { return static_cast<int32_t>(offsetof(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D, ___propBag_4)); }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * get_propBag_4() const { return ___propBag_4; }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 ** get_address_of_propBag_4() { return &___propBag_4; }
	inline void set_propBag_4(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * value)
	{
		___propBag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propBag_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct CancellationDetails_tF1F183DD755D38A7DAF69E7B8465984FF24FBD7C  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct Diagnostics_t47F535602730797E6D3CAA4CC261222B7DD0EDC3  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct DiagnosticsInterop_t59C97E1FB0AE1F5CA4DC9791D9F4963A02E6D84E  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport
struct DotNetFrameworkAnyCpuSupport_t28403AF36F09B65D22BCE447F4E6CFEE56161DF6  : public RuntimeObject
{
public:

public:
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


// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct EventArgs_tCE45F9E6668A19E467C8DFF0812AD7E85843265E  : public RuntimeObject
{
public:

public:
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propbagHandle_0;

public:
	inline static int32_t get_offset_of_propbagHandle_0() { return static_cast<int32_t>(offsetof(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9, ___propbagHandle_0)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_propbagHandle_0() const { return ___propbagHandle_0; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_propbagHandle_0() { return &___propbagHandle_0; }
	inline void set_propbagHandle_0(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___propbagHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propbagHandle_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct RecognitionResult_tCF0FB9307B1A7FB69B7FBF269D00E49E3A744BFF  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct Recognizer_t9031E291E986C32380D7D0948461043F1506172A  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___progBag_1;

public:
	inline static int32_t get_offset_of_configHandle_0() { return static_cast<int32_t>(offsetof(SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C, ___configHandle_0)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_configHandle_0() const { return ___configHandle_0; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_configHandle_0() { return &___configHandle_0; }
	inline void set_configHandle_0(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___configHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_0), (void*)value);
	}

	inline static int32_t get_offset_of_progBag_1() { return static_cast<int32_t>(offsetof(SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C, ___progBag_1)); }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * get_progBag_1() const { return ___progBag_1; }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 ** get_address_of_progBag_1() { return &___progBag_1; }
	inline void set_progBag_1(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * value)
	{
		___progBag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progBag_1), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig
struct SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct SpxExceptionThrower_t660A1DB9D1852F84C486913FB34BBDCF3310E26B  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088  : public RuntimeObject
{
public:

public:
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


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct Utf8StringMarshaler_t176A125F3CC382486D0157E2A6932F31CD9C7433  : public RuntimeObject
{
public:

public:
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_tFAF411289CD6C709ECC5BDE76966B737E1F1BD7E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_tFAF411289CD6C709ECC5BDE76966B737E1F1BD7E, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_eventHandle_1() { return static_cast<int32_t>(offsetof(SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33, ___eventHandle_1)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_eventHandle_1() const { return ___eventHandle_1; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_eventHandle_1() { return &___eventHandle_1; }
	inline void set_eventHandle_1(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___eventHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandle_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33, ___U3CSessionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CSessionIdU3Ek__BackingField_4() const { return ___U3CSessionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSessionIdU3Ek__BackingField_4() { return &___U3CSessionIdU3Ek__BackingField_4; }
	inline void set_U3CSessionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CSessionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSessionIdU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3  : public SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C
{
public:
	// System.String Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::targetLanguages
	String_t* ___targetLanguages_2;

public:
	inline static int32_t get_offset_of_targetLanguages_2() { return static_cast<int32_t>(offsetof(SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3, ___targetLanguages_2)); }
	inline String_t* get_targetLanguages_2() const { return ___targetLanguages_2; }
	inline String_t** get_address_of_targetLanguages_2() { return &___targetLanguages_2; }
	inline void set_targetLanguages_2(String_t* value)
	{
		___targetLanguages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetLanguages_2), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
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


// Microsoft.CognitiveServices.Speech.CancellationErrorCode
struct CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.CancellationReason
struct CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD, ___value___2)); }
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

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.PropertyId
struct PropertyId_t72907B986362FA87A1B63903CC65768916A70C8E 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.PropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyId_t72907B986362FA87A1B63903CC65768916A70C8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5  : public SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33
{
public:
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5, ___U3COffsetU3Ek__BackingField_5)); }
	inline uint64_t get_U3COffsetU3Ek__BackingField_5() const { return ___U3COffsetU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3COffsetU3Ek__BackingField_5() { return &___U3COffsetU3Ek__BackingField_5; }
	inline void set_U3COffsetU3Ek__BackingField_5(uint64_t value)
	{
		___U3COffsetU3Ek__BackingField_5 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551  : public RuntimeObject
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle_4;
	// System.String Microsoft.CognitiveServices.Speech.Recognizer::pointerHandle
	String_t* ___pointerHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_8;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject * ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;

public:
	inline static int32_t get_offset_of__SessionStarted_0() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ____SessionStarted_0)); }
	inline EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * get__SessionStarted_0() const { return ____SessionStarted_0; }
	inline EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** get_address_of__SessionStarted_0() { return &____SessionStarted_0; }
	inline void set__SessionStarted_0(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * value)
	{
		____SessionStarted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStarted_0), (void*)value);
	}

	inline static int32_t get_offset_of__SessionStopped_1() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ____SessionStopped_1)); }
	inline EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * get__SessionStopped_1() const { return ____SessionStopped_1; }
	inline EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** get_address_of__SessionStopped_1() { return &____SessionStopped_1; }
	inline void set__SessionStopped_1(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * value)
	{
		____SessionStopped_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStopped_1), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechStartDetected_2() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ____SpeechStartDetected_2)); }
	inline EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * get__SpeechStartDetected_2() const { return ____SpeechStartDetected_2; }
	inline EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** get_address_of__SpeechStartDetected_2() { return &____SpeechStartDetected_2; }
	inline void set__SpeechStartDetected_2(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * value)
	{
		____SpeechStartDetected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechStartDetected_2), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechEndDetected_3() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ____SpeechEndDetected_3)); }
	inline EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * get__SpeechEndDetected_3() const { return ____SpeechEndDetected_3; }
	inline EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** get_address_of__SpeechEndDetected_3() { return &____SpeechEndDetected_3; }
	inline void set__SpeechEndDetected_3(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * value)
	{
		____SpeechEndDetected_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechEndDetected_3), (void*)value);
	}

	inline static int32_t get_offset_of_recoHandle_4() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___recoHandle_4)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_recoHandle_4() const { return ___recoHandle_4; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_recoHandle_4() { return &___recoHandle_4; }
	inline void set_recoHandle_4(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___recoHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recoHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointerHandle_5() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___pointerHandle_5)); }
	inline String_t* get_pointerHandle_5() const { return ___pointerHandle_5; }
	inline String_t** get_address_of_pointerHandle_5() { return &___pointerHandle_5; }
	inline void set_pointerHandle_5(String_t* value)
	{
		___pointerHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerHandle_5), (void*)value);
	}

	inline static int32_t get_offset_of_asyncStartContinuousHandle_6() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___asyncStartContinuousHandle_6)); }
	inline intptr_t get_asyncStartContinuousHandle_6() const { return ___asyncStartContinuousHandle_6; }
	inline intptr_t* get_address_of_asyncStartContinuousHandle_6() { return &___asyncStartContinuousHandle_6; }
	inline void set_asyncStartContinuousHandle_6(intptr_t value)
	{
		___asyncStartContinuousHandle_6 = value;
	}

	inline static int32_t get_offset_of_asyncStopContinuousHandle_7() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___asyncStopContinuousHandle_7)); }
	inline intptr_t get_asyncStopContinuousHandle_7() const { return ___asyncStopContinuousHandle_7; }
	inline intptr_t* get_address_of_asyncStopContinuousHandle_7() { return &___asyncStopContinuousHandle_7; }
	inline void set_asyncStopContinuousHandle_7(intptr_t value)
	{
		___asyncStopContinuousHandle_7 = value;
	}

	inline static int32_t get_offset_of_asyncStartKeywordHandle_8() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___asyncStartKeywordHandle_8)); }
	inline intptr_t get_asyncStartKeywordHandle_8() const { return ___asyncStartKeywordHandle_8; }
	inline intptr_t* get_address_of_asyncStartKeywordHandle_8() { return &___asyncStartKeywordHandle_8; }
	inline void set_asyncStartKeywordHandle_8(intptr_t value)
	{
		___asyncStartKeywordHandle_8 = value;
	}

	inline static int32_t get_offset_of_asyncStopKeywordHandle_9() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___asyncStopKeywordHandle_9)); }
	inline intptr_t get_asyncStopKeywordHandle_9() const { return ___asyncStopKeywordHandle_9; }
	inline intptr_t* get_address_of_asyncStopKeywordHandle_9() { return &___asyncStopKeywordHandle_9; }
	inline void set_asyncStopKeywordHandle_9(intptr_t value)
	{
		___asyncStopKeywordHandle_9 = value;
	}

	inline static int32_t get_offset_of_speechStartDetectedCallbackDelegate_10() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___speechStartDetectedCallbackDelegate_10)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_speechStartDetectedCallbackDelegate_10() const { return ___speechStartDetectedCallbackDelegate_10; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_speechStartDetectedCallbackDelegate_10() { return &___speechStartDetectedCallbackDelegate_10; }
	inline void set_speechStartDetectedCallbackDelegate_10(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___speechStartDetectedCallbackDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechStartDetectedCallbackDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_speechEndDetectedCallbackDelegate_11() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___speechEndDetectedCallbackDelegate_11)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_speechEndDetectedCallbackDelegate_11() const { return ___speechEndDetectedCallbackDelegate_11; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_speechEndDetectedCallbackDelegate_11() { return &___speechEndDetectedCallbackDelegate_11; }
	inline void set_speechEndDetectedCallbackDelegate_11(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___speechEndDetectedCallbackDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEndDetectedCallbackDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStartedCallbackDelegate_12() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___sessionStartedCallbackDelegate_12)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_sessionStartedCallbackDelegate_12() const { return ___sessionStartedCallbackDelegate_12; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_sessionStartedCallbackDelegate_12() { return &___sessionStartedCallbackDelegate_12; }
	inline void set_sessionStartedCallbackDelegate_12(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___sessionStartedCallbackDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStartedCallbackDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStoppedCallbackDelegate_13() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___sessionStoppedCallbackDelegate_13)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_sessionStoppedCallbackDelegate_13() const { return ___sessionStoppedCallbackDelegate_13; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_sessionStoppedCallbackDelegate_13() { return &___sessionStoppedCallbackDelegate_13; }
	inline void set_sessionStoppedCallbackDelegate_13(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___sessionStoppedCallbackDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStoppedCallbackDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_gch_14() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___gch_14)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gch_14() const { return ___gch_14; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gch_14() { return &___gch_14; }
	inline void set_gch_14(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gch_14 = value;
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}

	inline static int32_t get_offset_of_isDisposing_16() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___isDisposing_16)); }
	inline bool get_isDisposing_16() const { return ___isDisposing_16; }
	inline bool* get_address_of_isDisposing_16() { return &___isDisposing_16; }
	inline void set_isDisposing_16(bool value)
	{
		___isDisposing_16 = value;
	}

	inline static int32_t get_offset_of_recognizerLock_17() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___recognizerLock_17)); }
	inline RuntimeObject * get_recognizerLock_17() const { return ___recognizerLock_17; }
	inline RuntimeObject ** get_address_of_recognizerLock_17() { return &___recognizerLock_17; }
	inline void set_recognizerLock_17(RuntimeObject * value)
	{
		___recognizerLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizerLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_activeAsyncRecognitionCounter_18() { return static_cast<int32_t>(offsetof(Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551, ___activeAsyncRecognitionCounter_18)); }
	inline int32_t get_activeAsyncRecognitionCounter_18() const { return ___activeAsyncRecognitionCounter_18; }
	inline int32_t* get_address_of_activeAsyncRecognitionCounter_18() { return &___activeAsyncRecognitionCounter_18; }
	inline void set_activeAsyncRecognitionCounter_18(int32_t value)
	{
		___activeAsyncRecognitionCounter_18 = value;
	}
};


// Microsoft.CognitiveServices.Speech.ResultReason
struct ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.ResultReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0  : public SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::<Result>k__BackingField
	TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0, ___U3CResultU3Ek__BackingField_5)); }
	inline TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE ** get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_5), (void*)value);
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * ___recognitionResult_3;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331, ___U3CErrorCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_1() const { return ___U3CErrorCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_1() { return &___U3CErrorCodeU3Ek__BackingField_1; }
	inline void set_U3CErrorCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331, ___U3CErrorDetailsU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_2() const { return ___U3CErrorDetailsU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_2() { return &___U3CErrorDetailsU3Ek__BackingField_2; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_recognitionResult_3() { return static_cast<int32_t>(offsetof(CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331, ___recognitionResult_3)); }
	inline RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * get_recognitionResult_3() const { return ___recognitionResult_3; }
	inline RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 ** get_address_of_recognitionResult_3() { return &___recognitionResult_3; }
	inline void set_recognitionResult_3(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * value)
	{
		___recognitionResult_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognitionResult_3), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * ___releaseHandleFunc_6;

public:
	inline static int32_t get_offset_of_releaseHandleFunc_6() { return static_cast<int32_t>(offsetof(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D, ___releaseHandleFunc_6)); }
	inline HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * get_releaseHandleFunc_6() const { return ___releaseHandleFunc_6; }
	inline HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 ** get_address_of_releaseHandleFunc_6() { return &___releaseHandleFunc_6; }
	inline void set_releaseHandleFunc_6(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * value)
	{
		___releaseHandleFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseHandleFunc_6), (void*)value);
	}
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

// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9  : public RuntimeObject
{
public:
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___resultHandle_4;

public:
	inline static int32_t get_offset_of_U3CResultIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9, ___U3CResultIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CResultIdU3Ek__BackingField_0() const { return ___U3CResultIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CResultIdU3Ek__BackingField_0() { return &___U3CResultIdU3Ek__BackingField_0; }
	inline void set_U3CResultIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CResultIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9, ___U3CReasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_1() const { return ___U3CReasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_1() { return &___U3CReasonU3Ek__BackingField_1; }
	inline void set_U3CReasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 ** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_4() { return static_cast<int32_t>(offsetof(RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9, ___resultHandle_4)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_resultHandle_4() const { return ___resultHandle_4; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_resultHandle_4() { return &___resultHandle_4; }
	inline void set_resultHandle_4(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___resultHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210  : public RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5
{
public:
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210, ___U3CResultU3Ek__BackingField_6)); }
	inline SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E  : public Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * ___audioInputKeepAlive_26;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ____Recognizing_19)); }
	inline EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ____Recognized_20)); }
	inline EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ____Canceled_21)); }
	inline EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_22() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ___recognizingCallbackDelegate_22)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_recognizingCallbackDelegate_22() const { return ___recognizingCallbackDelegate_22; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_recognizingCallbackDelegate_22() { return &___recognizingCallbackDelegate_22; }
	inline void set_recognizingCallbackDelegate_22(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___recognizingCallbackDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_22), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_23() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ___recognizedCallbackDelegate_23)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_recognizedCallbackDelegate_23() const { return ___recognizedCallbackDelegate_23; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_recognizedCallbackDelegate_23() { return &___recognizedCallbackDelegate_23; }
	inline void set_recognizedCallbackDelegate_23(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___recognizedCallbackDelegate_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_23), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_24() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ___canceledCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_canceledCallbackDelegate_24() const { return ___canceledCallbackDelegate_24; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_canceledCallbackDelegate_24() { return &___canceledCallbackDelegate_24; }
	inline void set_canceledCallbackDelegate_24(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___canceledCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ___U3CPropertiesU3Ek__BackingField_25)); }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * get_U3CPropertiesU3Ek__BackingField_25() const { return ___U3CPropertiesU3Ek__BackingField_25; }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 ** get_address_of_U3CPropertiesU3Ek__BackingField_25() { return &___U3CPropertiesU3Ek__BackingField_25; }
	inline void set_U3CPropertiesU3Ek__BackingField_25(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * value)
	{
		___U3CPropertiesU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_26() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E, ___audioInputKeepAlive_26)); }
	inline AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * get_audioInputKeepAlive_26() const { return ___audioInputKeepAlive_26; }
	inline AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D ** get_address_of_audioInputKeepAlive_26() { return &___audioInputKeepAlive_26; }
	inline void set_audioInputKeepAlive_26(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * value)
	{
		___audioInputKeepAlive_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_26), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D  : public RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::<Result>k__BackingField
	TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D, ___U3CResultU3Ek__BackingField_6)); }
	inline TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC  : public Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognizing
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognized
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Canceled
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ____Canceled_21;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Synthesizing
	EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * ____Synthesizing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<Properties>k__BackingField
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___U3CPropertiesU3Ek__BackingField_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___recognizingCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___recognizedCallbackDelegate_25;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___canceledCallbackDelegate_26;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::translationSynthesisCallbackDelegate
	CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___translationSynthesisCallbackDelegate_27;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::audioInputKeepAlive
	AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * ___audioInputKeepAlive_28;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ____Recognizing_19)); }
	inline EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ____Recognized_20)); }
	inline EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ____Canceled_21)); }
	inline EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of__Synthesizing_22() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ____Synthesizing_22)); }
	inline EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * get__Synthesizing_22() const { return ____Synthesizing_22; }
	inline EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 ** get_address_of__Synthesizing_22() { return &____Synthesizing_22; }
	inline void set__Synthesizing_22(EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * value)
	{
		____Synthesizing_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Synthesizing_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___U3CPropertiesU3Ek__BackingField_23)); }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * get_U3CPropertiesU3Ek__BackingField_23() const { return ___U3CPropertiesU3Ek__BackingField_23; }
	inline PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 ** get_address_of_U3CPropertiesU3Ek__BackingField_23() { return &___U3CPropertiesU3Ek__BackingField_23; }
	inline void set_U3CPropertiesU3Ek__BackingField_23(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * value)
	{
		___U3CPropertiesU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_24() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___recognizingCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_recognizingCallbackDelegate_24() const { return ___recognizingCallbackDelegate_24; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_recognizingCallbackDelegate_24() { return &___recognizingCallbackDelegate_24; }
	inline void set_recognizingCallbackDelegate_24(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___recognizingCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_25() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___recognizedCallbackDelegate_25)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_recognizedCallbackDelegate_25() const { return ___recognizedCallbackDelegate_25; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_recognizedCallbackDelegate_25() { return &___recognizedCallbackDelegate_25; }
	inline void set_recognizedCallbackDelegate_25(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___recognizedCallbackDelegate_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_25), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_26() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___canceledCallbackDelegate_26)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_canceledCallbackDelegate_26() const { return ___canceledCallbackDelegate_26; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_canceledCallbackDelegate_26() { return &___canceledCallbackDelegate_26; }
	inline void set_canceledCallbackDelegate_26(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___canceledCallbackDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_translationSynthesisCallbackDelegate_27() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___translationSynthesisCallbackDelegate_27)); }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * get_translationSynthesisCallbackDelegate_27() const { return ___translationSynthesisCallbackDelegate_27; }
	inline CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 ** get_address_of_translationSynthesisCallbackDelegate_27() { return &___translationSynthesisCallbackDelegate_27; }
	inline void set_translationSynthesisCallbackDelegate_27(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * value)
	{
		___translationSynthesisCallbackDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationSynthesisCallbackDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_28() { return static_cast<int32_t>(offsetof(TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC, ___audioInputKeepAlive_28)); }
	inline AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * get_audioInputKeepAlive_28() const { return ___audioInputKeepAlive_28; }
	inline AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D ** get_address_of_audioInputKeepAlive_28() { return &___audioInputKeepAlive_28; }
	inline void set_audioInputKeepAlive_28(AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D * value)
	{
		___audioInputKeepAlive_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_28), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// System.Byte[] Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::audio
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___audio_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::resultHandle
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___resultHandle_2;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_audio_1() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE, ___audio_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_audio_1() const { return ___audio_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_audio_1() { return &___audio_1; }
	inline void set_audio_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___audio_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_1), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_2() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE, ___resultHandle_2)); }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * get_resultHandle_2() const { return ___resultHandle_2; }
	inline InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D ** get_address_of_resultHandle_2() { return &___resultHandle_2; }
	inline void set_resultHandle_2(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * value)
	{
		___resultHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_2), (void*)value);
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


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle
struct Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:
	// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::<Length>k__BackingField
	uint32_t ___U3CLengthU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C, ___U3CLengthU3Ek__BackingField_7)); }
	inline uint32_t get_U3CLengthU3Ek__BackingField_7() const { return ___U3CLengthU3Ek__BackingField_7; }
	inline uint32_t* get_address_of_U3CLengthU3Ek__BackingField_7() { return &___U3CLengthU3Ek__BackingField_7; }
	inline void set_U3CLengthU3Ek__BackingField_7(uint32_t value)
	{
		___U3CLengthU3Ek__BackingField_7 = value;
	}
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0  : public SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA  : public RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5  : public TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7  : public RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::translationTextResultMap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___translationTextResultMap_6;

public:
	inline static int32_t get_offset_of_translationTextResultMap_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7, ___translationTextResultMap_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_translationTextResultMap_6() const { return ___translationTextResultMap_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_translationTextResultMap_6() { return &___translationTextResultMap_6; }
	inline void set_translationTextResultMap_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___translationTextResultMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationTextResultMap_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.Collections.Generic.Dictionary`2<System.String,System.String>


// System.EmptyArray`1<System.Byte>

struct EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields, ___Value_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Value_0() const { return ___Value_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Byte>


// System.EmptyArray`1<System.Object>

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


// System.EmptyArray`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Attribute


// System.Attribute


// Microsoft.CognitiveServices.Speech.Audio.AudioConfig


// Microsoft.CognitiveServices.Speech.Audio.AudioConfig


// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails


// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject


// System.Globalization.CultureInfo

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};


// System.Globalization.CultureInfo


// Microsoft.CognitiveServices.Speech.Internal.Diagnostics


// Microsoft.CognitiveServices.Speech.Internal.Diagnostics


// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop


// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop


// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport


// Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport


// System.Text.Encoding

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


// System.Text.Encoding


// Microsoft.CognitiveServices.Speech.Internal.EventArgs


// Microsoft.CognitiveServices.Speech.Internal.EventArgs


// System.EventArgs

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.EventArgs


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


// Microsoft.CognitiveServices.Speech.PropertyCollection


// Microsoft.CognitiveServices.Speech.PropertyCollection


// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection


// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection


// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult


// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult


// Microsoft.CognitiveServices.Speech.Internal.Recognizer


// Microsoft.CognitiveServices.Speech.Internal.Recognizer


// Microsoft.CognitiveServices.Speech.SpeechConfig


// Microsoft.CognitiveServices.Speech.SpeechConfig


// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig


// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig


// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig


// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig


// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower


// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory


// System.String

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


// System.String


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler


// System.ValueType


// System.ValueType


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>


// System.Boolean

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


// System.Boolean


// System.Byte


// System.Byte


// System.Enum

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


// System.Enum


// System.Runtime.InteropServices.GCHandle


// System.Runtime.InteropServices.GCHandle


// System.Int32


// System.Int32


// System.Int64


// System.Int64


// System.IntPtr

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


// System.IntPtr


// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute


// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute


// Microsoft.CognitiveServices.Speech.SessionEventArgs


// Microsoft.CognitiveServices.Speech.SessionEventArgs


// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig


// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig


// System.UInt32


// System.UInt32


// System.UInt64


// System.UInt64


// System.UIntPtr

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// System.UIntPtr


// System.Void


// System.Void


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// Microsoft.CognitiveServices.Speech.CancellationErrorCode


// Microsoft.CognitiveServices.Speech.CancellationErrorCode


// Microsoft.CognitiveServices.Speech.CancellationReason


// Microsoft.CognitiveServices.Speech.CancellationReason


// System.Delegate


// System.Delegate


// System.Exception

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


// System.Exception


// System.Runtime.InteropServices.GCHandleType


// System.Runtime.InteropServices.GCHandleType


// Microsoft.CognitiveServices.Speech.PropertyId


// Microsoft.CognitiveServices.Speech.PropertyId


// Microsoft.CognitiveServices.Speech.RecognitionEventArgs


// Microsoft.CognitiveServices.Speech.RecognitionEventArgs


// Microsoft.CognitiveServices.Speech.Recognizer


// Microsoft.CognitiveServices.Speech.Recognizer


// Microsoft.CognitiveServices.Speech.ResultReason


// Microsoft.CognitiveServices.Speech.ResultReason


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// System.Runtime.InteropServices.SafeHandle


// System.Runtime.InteropServices.SafeHandle


// Microsoft.CognitiveServices.Speech.Internal.SpxError

struct SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields
{
public:
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidArgument
	intptr_t ___InvalidArgument_3;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::NotFound
	intptr_t ___NotFound_4;

public:
	inline static int32_t get_offset_of_BufferTooSmall_0() { return static_cast<int32_t>(offsetof(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields, ___BufferTooSmall_0)); }
	inline intptr_t get_BufferTooSmall_0() const { return ___BufferTooSmall_0; }
	inline intptr_t* get_address_of_BufferTooSmall_0() { return &___BufferTooSmall_0; }
	inline void set_BufferTooSmall_0(intptr_t value)
	{
		___BufferTooSmall_0 = value;
	}

	inline static int32_t get_offset_of_RuntimeError_1() { return static_cast<int32_t>(offsetof(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields, ___RuntimeError_1)); }
	inline intptr_t get_RuntimeError_1() const { return ___RuntimeError_1; }
	inline intptr_t* get_address_of_RuntimeError_1() { return &___RuntimeError_1; }
	inline void set_RuntimeError_1(intptr_t value)
	{
		___RuntimeError_1 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_2() { return static_cast<int32_t>(offsetof(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields, ___InvalidHandle_2)); }
	inline intptr_t get_InvalidHandle_2() const { return ___InvalidHandle_2; }
	inline intptr_t* get_address_of_InvalidHandle_2() { return &___InvalidHandle_2; }
	inline void set_InvalidHandle_2(intptr_t value)
	{
		___InvalidHandle_2 = value;
	}

	inline static int32_t get_offset_of_InvalidArgument_3() { return static_cast<int32_t>(offsetof(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields, ___InvalidArgument_3)); }
	inline intptr_t get_InvalidArgument_3() const { return ___InvalidArgument_3; }
	inline intptr_t* get_address_of_InvalidArgument_3() { return &___InvalidArgument_3; }
	inline void set_InvalidArgument_3(intptr_t value)
	{
		___InvalidArgument_3 = value;
	}

	inline static int32_t get_offset_of_NotFound_4() { return static_cast<int32_t>(offsetof(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields, ___NotFound_4)); }
	inline intptr_t get_NotFound_4() const { return ___NotFound_4; }
	inline intptr_t* get_address_of_NotFound_4() { return &___NotFound_4; }
	inline void set_NotFound_4(intptr_t value)
	{
		___NotFound_4 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpxError


// System.Threading.Tasks.Task

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};


// System.Threading.Tasks.Task

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs


// System.ApplicationException


// System.ApplicationException


// Microsoft.CognitiveServices.Speech.CancellationDetails


// Microsoft.CognitiveServices.Speech.CancellationDetails


// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle


// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle


// System.MulticastDelegate


// System.MulticastDelegate


// Microsoft.CognitiveServices.Speech.RecognitionResult


// Microsoft.CognitiveServices.Speech.RecognitionResult


// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs


// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs


// Microsoft.CognitiveServices.Speech.SpeechRecognizer


// Microsoft.CognitiveServices.Speech.SpeechRecognizer


// System.SystemException


// System.SystemException


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult


// System.Type

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


// System.Type


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle

struct Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_StaticFields
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::Null
	Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * ___Null_6;

public:
	inline static int32_t get_offset_of_Null_6() { return static_cast<int32_t>(offsetof(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_StaticFields, ___Null_6)); }
	inline Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * get_Null_6() const { return ___Null_6; }
	inline Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C ** get_address_of_Null_6() { return &___Null_6; }
	inline void set_Null_6(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * value)
	{
		___Null_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>


// System.Action


// System.Action


// System.ArgumentException


// System.ArgumentException


// System.AsyncCallback


// System.AsyncCallback


// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate


// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate


// Microsoft.CognitiveServices.Speech.Internal.HandleRelease


// Microsoft.CognitiveServices.Speech.Internal.HandleRelease


// System.InvalidOperationException


// System.InvalidOperationException


// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs


// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs


// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult


// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult


// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate


// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate


// System.ArgumentNullException


// System.ArgumentNullException


// System.ArgumentOutOfRangeException

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ArgumentOutOfRangeException


// System.ObjectDisposedException


// System.ObjectDisposedException

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m5A7A4B8539EEB002C40337A121EE1CA602F0B3F1_gshared (intptr_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_gshared_inline (const RuntimeMethod* method);

// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m13B844B20E71FFA2B106A0779178F21D1704AAF7 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * ___result0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m33845CD15561E068A51326C8ECDB2E9D96C3147B (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A (intptr_t ___hr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m1CAF11693039C29F8B99CF03FC987B79FEE02512 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205 (const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097 (const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, bool* ___success0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Diagnostics_Args_mCDBBF96E237A2CAF455FF73C1C94D49F30D77A6E (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mE1FF0AF8DD907A84172DF96CE725219027E966B6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_m3C93FB7E7A1CA75D6A198492BF6F7A63F04069CB (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_mE17F556505A2581D84BA5FFAE7AA3FA165E2A180 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, intptr_t ___hresult0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1 (intptr_t ___hr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method);
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4 (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_m7241663596A5A5643A4567D349D631CF327BCD47 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, intptr_t ___handle0, HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * ___releaseHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE73D236973BA07F7B404F35C923692A0CE8518E4 (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05 (String_t* ___str0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m818B5A22A89856142C1149F68B29C06AE3DEE53E (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350 (intptr_t ___native0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mE57DA048ED235338BE887E576C5DC562C7B53C77 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m88444A5A2BA7D9AEE9CDA1002B5A3940BD6231DB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, const RuntimeMethod* method);
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB_inline (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * ___functionPtr0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m8785C37DBE2AA60386232A5AB59B5DE34B3ED096 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16 (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC_inline (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_mB51AF13DAE963482434F9AA4792BDF56AB25B2A6 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_mD30F07BD548E173B2ADFEFBE44890C5977DAE3E2 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m4CABF899344965E03F2F7410C351F29DE540667F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m91D3B927165E65B4AE83158F430B914AF2ED8920 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mFA7AB4FAA5C7E2846ED2AF76931D6FFD6368D1C0 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_mE65E4F9ECE818C560D6921070EBFE611AE2D04F8 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m9C768EE246FFA134BD2A337FE0F8B83604C60DA9 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m778852C242125F896C30E4C6C3849012E9FD7621 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201 (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3 (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m5A7A4B8539EEB002C40337A121EE1CA602F0B3F1_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013 (EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * __this, RuntimeObject * ___sender0, SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *, RuntimeObject *, SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4 (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002 (EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * __this, RuntimeObject * ___sender0, RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *, RuntimeObject *, RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4 (intptr_t ___asyncHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m64B1B19F379EA6A0BE20E374AF03B2BE2161B1F5 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_mCCCEF624CBF0A3A9086FBAC2F5EFD706FA474C45 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_mA71C1B9B432CA57177A19527C2B77D89F0358853 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m8292C0C75C5AC4B53B05565881E97C8A9FC43AE5 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m2702E96893F81AC86A4CA3CC87DB1B16957A6F39 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m591D4B9DAF81CC50E1442CFD6528F7B1481DE4CA (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mE8DBDC6A1A6CF503CE40BFE269C6E9F374EC5440 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m0343E117564BF65434D42D18A14F1181B0A3F26A (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_mD0DEE32DBA5522798E980C672D9A3A83ED2A92AC (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218 (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * ___result0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544_inline (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877_inline (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mFBCDCEC02A1772569BEE43A910AAD8581D23DB91 (SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m3B1002094306793DAC89EA518CF3CF41EAB5CF53 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m6E364B7F5C809434CB074CECE7E15363960FA0E4 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mB16B2627C7EC9358785C45F43B43B96821CBE3B9 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mEFAD10146DFD2FBF3A41F4A77120DC470A4F15A8 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m6B869F81EDC6097632FC76CB2E5F4F7216720281 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_mA85E0EA8F11F8855B5EB6F057202E846E45369EA (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * ___fromConfig0, SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * ___speechConfig1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_mD8D1E0C50CE3BD09DB5CB89DB5AF1E5BC6C92130 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3_inline (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m974E047E515FDC1ACF9E6A5C63872D587397F716 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06_inline (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, bool ___disposing0, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m5A7A4B8539EEB002C40337A121EE1CA602F0B3F1_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D (EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * __this, RuntimeObject * ___sender0, SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *, RuntimeObject *, SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m20C5296ECFA87A58E4076D6C1C7869E26A2E6251 (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m33AEAC62C1A072D18E7F9DAF44636FB08884E54C (EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * __this, RuntimeObject * ___sender0, SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *, RuntimeObject *, SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___recoImplAction0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mF89C55819C6323C3C289F2413DBAB4DB8CE25CAA (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m1F8968787AE5DC4C1797C7BF824F938E48CB9E59 (SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m6860252786A03225DDB897D7D3BA543C7D728F56 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___config0, String_t* ___language1, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B (int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m1DA6555D54DCF635C8E52156C1074BCA67A3E239 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m01B8458EEF708586124D197AB41670CC2A0A2104 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m955DDFE2288BA8A4EE7ABBC7D2BDBD0E9004A88E (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08 (intptr_t* __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m8F5CCD9E83354AA83663732824933705D84B8E37 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m2E583B338AA33E737AFFC4B5B2FB90404E0CD441 (String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235 (String_t* __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_mF63EFCD66ADE238A052501F9898A29E827C9D363 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mDDDA1AF9C3C4F347D2A8D3BED15A534C21F5678E (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D (int32_t ___cb0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m8DE930FC3B770969517CD7A9108BBF434E62E311 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097 (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61_inline (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28_inline (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C_inline (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m5812765FB155E9EBDA6AF0A34325C6A0EEA53FA3 (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m7DDE0276B1C0117AE493382A805E3B74774B25F4 (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3BB834FA13052393D767E65AD6AA9F5895106B8 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_m12ECEE6B410CE3B59471CA921EEFCC536FDEABEA (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_count_m97936E19E9F9ED8E67F852A2F4ED0D4834818789 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, uintptr_t* ___count1, const RuntimeMethod* method);
// System.Void System.UIntPtr::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntPtr__ctor_m96753B0388D7FD036512FA40E278100721BC777A (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, uintptr_t ___index1, Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * ___language2, Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * ___text3, uintptr_t* ___languageSize4, uintptr_t* ___textSize5, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::ToUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC (uintptr_t* __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, uint32_t ___maxLength0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.UInt64 System.UIntPtr::ToUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UIntPtr_ToUInt64_mF1EC8AE1580069E87844A57EF46876AA453ADFC8 (uintptr_t* __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m3C4B4BC28C6DE51D11A82CF5818D8A158F0CC6A3 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_m98DBCAA8767F5899D9B74A18D8E206E7E500B47D (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mE297B0F6067FA3E8FDFAB360566BDAAD0ED2A08B (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m855309B9D3CCEE2D8A726A8239B9F6C2D17C4E59 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m5D0FAB1063EDD80A398B12FDCF9762D77A12F05A (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m7034C257BB657023953A5B9FE9B960B3C5BBED22 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_mBE738732382A4AF470048C69FDEA123824AEAE7E (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC_inline (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mC3D7B7C3F0846CC09358F18309D027188F7B63AB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33_inline (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer>(System.IntPtr)
inline TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m5A7A4B8539EEB002C40337A121EE1CA602F0B3F1_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C (EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * __this, RuntimeObject * ___sender0, TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *, RuntimeObject *, TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m3D97148E711B9CBDC43DE2F620144D076553EBE3 (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m3E88BBA93CAB8AF753F5247AF742C94CA30399EF (EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * __this, RuntimeObject * ___sender0, TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *, RuntimeObject *, TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m7C2E636717FBAABA106F5EE32C4C9BDF21E59769 (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mBB211FFD4AEE25121C7BE9100FFA68205EE1698C (EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * __this, RuntimeObject * ___sender0, TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 *, RuntimeObject *, TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_mB0B22C703623E1B5B61531197D9D1A29E3A77E7E (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327_inline (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (const RuntimeMethod*))Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_gshared_inline)(method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_m6C03D58F707C22D0C7369A78BD9B5091306EB6BF (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___resultHandle0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A_inline (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B_inline (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2CDDF5A1715E7BCFDFB6823D7A18339BD8EB0E90 (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m03DAF8C089E28674E0D1A5B4F8CF8D9ADA7D98B5 (intptr_t ___cb0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeHandle_get_IsClosed_mD81377BB0EE9380CB82B2D846A5F5F7D9A880AD8 (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_m4FE7724154AEF156C33C717C3926BDFFB4765CE8 (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m9C2A5414C70F6D09ABF46D6A6277D40D0126BB80 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mCD30E546EC53D5843BA0116D1F3BF3A4AB286A5C (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m66D4FA7339E9A5614B5CDAD7566BC204B6012231 (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m2D3E96B7599CE41E3E61CDEB15125D63C8814890 (intptr_t ___ptr0, uint8_t ___val1, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason_canceled(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_canceled_error_code(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C void STDCALL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_event_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_set_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_get_string(void*, int32_t, intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_free_string(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_result_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_text(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C uint8_t STDCALL recognizer_result_handle_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_result_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation_count(void*, uintptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation(void*, uintptr_t, void*, void*, uintptr_t*, uintptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_synthesis_result_get_audio_data(void*, intptr_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_async_handle_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_offset(void*, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_event_get_session_id(void*, intptr_t, uint32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_result(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_stopped_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_start_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_end_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognized_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translator_synthesizing_audio_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_get_property_bag(void*, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_from_subscription(intptr_t*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_add_target_language(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_message(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_error_code(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_release(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_translation_recognizer_from_config(intptr_t*, void*, void*);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3 (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_m6A5AFAFAEB7C9E8215273EBBC585CCD49FA56E5E (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hreco0, ___hevent1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
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
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackFunctionDelegate_BeginInvoke_m045ED9128899AB8653FFFE4302165596A2606F2C (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hreco0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hevent1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_EndInvoke_m634677D6687588EC6726851A3C77A6D7A7AC3BA8 (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * V_0 = NULL;
	{
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_0 = ___result0;
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_1 = (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 *)il2cpp_codegen_object_new(CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331_il2cpp_TypeInfo_var);
		CancellationDetails__ctor_m13B844B20E71FFA2B106A0779178F21D1704AAF7(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m13B844B20E71FFA2B106A0779178F21D1704AAF7 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationDetails_tF1F183DD755D38A7DAF69E7B8465984FF24FBD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->set_recognitionResult_3((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)NULL);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_1 = ___result0;
		__this->set_recognitionResult_3(L_1);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_2 = __this->get_recognitionResult_3();
		NullCheck(L_2);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = L_2->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_3, _stringLiteralF28770BAFF3BD72A14677B13D79FE1286316B04C, /*hidden argument*/NULL);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_4 = __this->get_recognitionResult_3();
		NullCheck(L_4);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = L_4->get_resultHandle_4();
		IL2CPP_RUNTIME_CLASS_INIT(CancellationDetails_tF1F183DD755D38A7DAF69E7B8465984FF24FBD7C_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = CancellationDetails_result_get_reason_canceled_m33845CD15561E068A51326C8ECDB2E9D96C3147B(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29_inline(__this, L_7, /*hidden argument*/NULL);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_8 = __this->get_recognitionResult_3();
		NullCheck(L_8);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_9 = L_8->get_resultHandle_4();
		intptr_t L_10;
		L_10 = CancellationDetails_result_get_canceled_error_code_m1CAF11693039C29F8B99CF03FC987B79FEE02512(L_9, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6_inline(__this, L_11, /*hidden argument*/NULL);
		RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * L_12 = __this->get_recognitionResult_3();
		NullCheck(L_12);
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_13;
		L_13 = VirtFuncInvoker0< PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8_inline(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_mC336C2D271AD3AEE4A7C25EC0B54A41F4AE5EB98 (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1_inline(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteral8E8084C52A356BA811825A26D2A68087D1EE1AE6, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__cctor_m54158D73A871604F8C6956D8A006A76DC5AC0656 (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m33845CD15561E068A51326C8ECDB2E9D96C3147B (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason_canceled", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_m1CAF11693039C29F8B99CF03FC987B79FEE02512 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_canceled_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____result0_marshaled, ___errorCode1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
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
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Diagnostics_Args_mCDBBF96E237A2CAF455FF73C1C94D49F30D77A6E (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Diagnostics_Args_mCDBBF96E237A2CAF455FF73C1C94D49F30D77A6E(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___line1;
		String_t* L_4 = ___caller2;
		String_t* L_5 = ___file3;
		Diagnostics_SPX_TRACE_VERBOSE_mE1FF0AF8DD907A84172DF96CE725219027E966B6(L_0, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_mE1FF0AF8DD907A84172DF96CE725219027E966B6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsInterop_t59C97E1FB0AE1F5CA4DC9791D9F4963A02E6D84E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___args1;
		String_t* L_2;
		L_2 = String_Format_m2CDD2A21AF2BCE3CE07D634645F9A61B4CB7D9B3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___file4;
		int32_t L_4 = ___line2;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DiagnosticsInterop_t59C97E1FB0AE1F5CA4DC9791D9F4963A02E6D84E_il2cpp_TypeInfo_var);
		DiagnosticsInterop_diagnostics_log_trace_string_m3C93FB7E7A1CA75D6A198492BF6F7A63F04069CB(((int32_t)16), _stringLiteralF5276AA6769ABD877AC10339C332B2ECF5459404, L_3, L_4, L_5, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop__cctor_m98EEE43B710033456FD6F3BE38EF7A150C31A367 (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_m3C93FB7E7A1CA75D6A198492BF6F7A63F04069CB (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (int32_t, char*, char*, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "diagnostics_log_trace_string", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___fileName2' to native representation
	char* ____fileName2_marshaled = NULL;
	____fileName2_marshaled = il2cpp_codegen_marshal_string(___fileName2);

	// Marshaling of parameter '___message4' to native representation
	char* ____message4_marshaled = NULL;
	____message4_marshaled = il2cpp_codegen_marshal_string(___message4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	reinterpret_cast<PInvokeFunc>(diagnostics_log_trace_string)(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#else
	il2cppPInvokeFunc(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___fileName2' native representation
	il2cpp_codegen_marshal_free(____fileName2_marshaled);
	____fileName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___message4' native representation
	il2cpp_codegen_marshal_free(____message4_marshaled);
	____message4_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097 (const RuntimeMethod* method)
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.EventArgs::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__cctor_mE78595AA6FFBC4FF1D68705351D96EE36736338C (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F (intptr_t ___eventHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_event_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_event_handle_release)(___eventHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_mE17F556505A2581D84BA5FFAE7AA3FA165E2A180 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___hresult0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hresult0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hresult0);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleRelease_BeginInvoke_m5E792C418FEA5C04A6C45EC2D9CDAF5AB26485BC (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, intptr_t ___hresult0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hresult0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_EndInvoke_m964A00E7DE88BFC32DA8082A56FF8B78B636F9A9 (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, intptr_t ___handle0, HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * ___releaseHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_releaseHandleFunc_6((HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)NULL);
		SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_0 = ___releaseHandle1;
		__this->set_releaseHandleFunc_6(L_0);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_mDE26E49246A7776ED8DF14FFB46555EB3791498F (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097((&L_3), (-1), /*hidden argument*/NULL);
		bool L_4;
		L_4 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_mA3454874F14CD3E6D2DFEC541D7ADC7C8D308C9B (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_0 = __this->get_releaseHandleFunc_6();
		V_0 = (bool)((!(((RuntimeObject*)(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_2 = __this->get_releaseHandleFunc_6();
		intptr_t L_3 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		NullCheck(L_2);
		intptr_t L_4;
		L_4 = HandleRelease_Invoke_mE17F556505A2581D84BA5FFAE7AA3FA165E2A180(L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_releaseHandleFunc_6((HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)NULL);
		((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->set_handle_0((intptr_t)(0));
	}

IL_0039:
	{
		V_1 = (bool)1;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_m0C33AEB59BEB46CCDDB71A43B29FDB950AD8F132 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4;
		L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C(L_4, ((int32_t)83), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, /*hidden argument*/NULL);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_m128BFF870D6CD9E8009EBFD3B75F52BA155FB193 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t* L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_address_of_handle_0();
		String_t* L_1;
		L_1 = IntPtr_ToString_m7CDFDC84936276E62AB76AA238F7571B54DF90B4((intptr_t*)L_0, _stringLiteral7267B048CEDBB7AD42A5473F09940F2723B4506D, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_m4C027A992BD510065C15773F862DCD1AEF6E03B7 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral3A8100DC94EF854DE676FBF7FAD86E84873F3000, L_0, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C(L_1, ((int32_t)104), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteralA3E68153B91665DFE1E9EAC88F57E3E2533E594D, /*hidden argument*/NULL);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x36, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		SafeHandle_Finalize_m7241663596A5A5643A4567D349D631CF327BCD47(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m8AB265D671FFDC9DF4566FBBF57680D37119A173 (MonoPInvokeCallbackAttribute_tFAF411289CD6C709ECC5BDE76966B737E1F1BD7E * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16 (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		intptr_t L_3 = ___propertyBagPtr0;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_4 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_4, NULL, (intptr_t)((intptr_t)PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_5, (intptr_t)L_3, L_4, /*hidden argument*/NULL);
		__this->set_propbagHandle_0(L_5);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_mD793419024EB7ACA3C62AB9CEE62ED1FBC44594C (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = __this->get_propbagHandle_0();
		NullCheck(L_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_mB46C8DDFC2A6E4E889F19A64652A0088FEBDBC0D (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = __this->get_propbagHandle_0();
		int32_t L_2 = ___id0;
		String_t* L_3;
		L_3 = PropertyCollection_GetPropertyString_mE73D236973BA07F7B404F35C923692A0CE8518E4(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mC57B30BC5A398CB9AAEEC6EFB9BD83582E694287 (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = __this->get_propbagHandle_0();
		int32_t L_4 = ___id0;
		intptr_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467(L_3, L_4, (intptr_t)(0), (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3B, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m9077DB9C7197005E2EC319DCDDDB5D2D6A4BB5AD (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05(L_3, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = __this->get_propbagHandle_0();
		intptr_t L_6 = V_1;
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467(L_5, (-1), (intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x45, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		intptr_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_1;
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mE73D236973BA07F7B404F35C923692A0CE8518E4 (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2;
		L_2 = Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05(L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4;
		L_4 = Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05(L_3, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_4;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = ___propHandle0;
			int32_t L_6 = ___id1;
			intptr_t L_7 = V_1;
			intptr_t L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
			intptr_t L_9;
			L_9 = PropertyCollection_property_bag_get_string_m818B5A22A89856142C1149F68B29C06AE3DEE53E(L_5, L_6, (intptr_t)L_7, (intptr_t)L_8, /*hidden argument*/NULL);
			V_3 = (intptr_t)L_9;
			intptr_t L_10 = V_3;
			bool L_11;
			L_11 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
			V_4 = L_11;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_004e;
			}
		}

IL_0032:
		{
		}

IL_0033:
		try
		{ // begin try (depth: 2)
			intptr_t L_13 = V_3;
			String_t* L_14;
			L_14 = Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350((intptr_t)L_13, /*hidden argument*/NULL);
			V_0 = L_14;
			IL2CPP_LEAVE(0x4D, FINALLY_003e);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003e;
		}

FINALLY_003e:
		{ // begin finally (depth: 2)
			intptr_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(PropertyCollection_tE4D7B53F4B46BC0A23BEBCD8BB62D19FE8637C6D_il2cpp_TypeInfo_var);
			intptr_t L_16;
			L_16 = PropertyCollection_property_bag_free_string_mE57DA048ED235338BE887E576C5DC562C7B53C77((intptr_t)L_15, /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_16, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(62)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(62)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4D, IL_004d)
		}

IL_004d:
		{
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		intptr_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_17, /*hidden argument*/NULL);
		intptr_t L_18 = V_2;
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x62, IL_0062)
	}

IL_0062:
	{
		String_t* L_19 = V_0;
		V_5 = L_19;
		goto IL_0067;
	}

IL_0067:
	{
		String_t* L_20 = V_5;
		return L_20;
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__cctor_m2C6E4327FDB27261CCF1246637EDC2CFC6B44101 (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_set_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m818B5A22A89856142C1149F68B29C06AE3DEE53E (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_get_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___propbag0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mE57DA048ED235338BE887E576C5DC562C7B53C77 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_free_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_free_string)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A (intptr_t ___propbag0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_release)(___propbag0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___propbag0);
	#endif

	return returnValue;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4 (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ((SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)__this)->get_eventHandle_1();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)0));
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)__this)->get_eventHandle_1();
		intptr_t L_3;
		L_3 = Recognizer_recognizer_recognition_event_get_offset_m88444A5A2BA7D9AEE9CDA1002B5A3940BD6231DB(L_2, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_3, /*hidden argument*/NULL);
		uint64_t L_4 = V_0;
		__this->set_U3COffsetU3Ek__BackingField_5(L_4);
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mA4E65635E5FC53A671A6D144257CF76DFB7506E6 (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		uint64_t L_2;
		L_2 = RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB_inline(__this, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteral74950E71ECDE7F282725B371C332DD6851AC6CDE, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_6 = V_0;
		return L_6;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ba;
		}
	}
	{
		intptr_t L_3 = ___resultHandlePtr0;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_4 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_4, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_5, (intptr_t)L_3, L_4, /*hidden argument*/NULL);
		__this->set_resultHandle_4(L_5);
		GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * L_6 = (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 *)il2cpp_codegen_object_new(GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782(L_6, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_7 = __this->get_resultHandle_4();
		IL2CPP_RUNTIME_CLASS_INIT(SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022(L_6, L_7, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CResultIdU3Ek__BackingField_0(L_8);
		GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * L_9 = (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 *)il2cpp_codegen_object_new(GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782(L_9, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_10 = __this->get_resultHandle_4();
		String_t* L_11;
		L_11 = SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022(L_9, L_10, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CTextU3Ek__BackingField_2(L_11);
		V_1 = 0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_12 = __this->get_resultHandle_4();
		intptr_t L_13;
		L_13 = RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C(L_12, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		__this->set_U3CReasonU3Ek__BackingField_1(L_14);
		V_2 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_15 = __this->get_resultHandle_4();
		intptr_t L_16;
		L_16 = RecognitionResult_result_get_property_bag_m8785C37DBE2AA60386232A5AB59B5DE34B3ED096(L_15, (intptr_t*)(&V_2), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_16, /*hidden argument*/NULL);
		intptr_t L_17 = V_2;
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_18 = (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 *)il2cpp_codegen_object_new(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16(L_18, (intptr_t)L_17, /*hidden argument*/NULL);
		RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC_inline(__this, L_18, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m915CFF4CBDA1AA8DC7D2835A6DE90D55159FC682 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResultIdU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m33507B6033662666A64544AD395297C07D4164D2 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mB148DB2F409F87052FA5D0614FC276C3A0469269 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * RecognitionResult_get_Properties_m339B52BE65A58DDE9C7AFBF62B887756D797A716 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m14FEF4EDC43FC4AC2D290A71740267C3D9291C00 (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6260956A285A95B964811F944839C8CA994BAAD8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_4;
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_11;
		L_11 = VirtFuncInvoker0< PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_0, _stringLiteral6260956A285A95B964811F944839C8CA994BAAD8, L_10, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_14 = V_0;
		return L_14;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_result_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_text", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____result0_marshaled, ___text1, ___textLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m8785C37DBE2AA60386232A5AB59B5DE34B3ED096 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return returnValue;
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___result0, const RuntimeMethod* method)
{
	typedef uint8_t (STDCALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_is_valid", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_is_valid)(____result0_marshaled);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(____result0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___result0, NULL);
	}

	return static_cast<bool>(returnValue);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD (intptr_t ___result0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_release)(___result0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___result0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_count_m97936E19E9F9ED8E67F852A2F4ED0D4834818789 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, uintptr_t* ___count1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uintptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation_count", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation_count)(____handle0_marshaled, ___count1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___count1);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, uintptr_t ___index1, Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * ___language2, Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * ___text3, uintptr_t* ___languageSize4, uintptr_t* ___textSize5, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uintptr_t, void*, void*, uintptr_t*, uintptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uintptr_t) + sizeof(void*) + sizeof(void*) + sizeof(uintptr_t*) + sizeof(uintptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Marshaling of parameter '___language2' to native representation
	void* ____language2_marshaled = NULL;
	if (___language2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("language"), NULL);
	bool ___safeHandle_reference_incremented_for____language2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___language2, (&___safeHandle_reference_incremented_for____language2), NULL);
	____language2_marshaled = reinterpret_cast<void*>((___language2)->get_handle_0());

	// Marshaling of parameter '___text3' to native representation
	void* ____text3_marshaled = NULL;
	if (___text3 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("text"), NULL);
	bool ___safeHandle_reference_incremented_for____text3 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___text3, (&___safeHandle_reference_incremented_for____text3), NULL);
	____text3_marshaled = reinterpret_cast<void*>((___text3)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation)(____handle0_marshaled, ___index1, ____language2_marshaled, ____text3_marshaled, ___languageSize4, ___textSize5);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___index1, ____language2_marshaled, ____text3_marshaled, ___languageSize4, ___textSize5);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	// Marshaling cleanup of parameter '___language2' native representation
	if (___safeHandle_reference_incremented_for____language2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___language2, NULL);
	}

	// Marshaling cleanup of parameter '___text3' native representation
	if (___safeHandle_reference_incremented_for____text3)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___text3, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_synthesis_result_get_audio_data", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_synthesis_result_get_audio_data)(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_mB51AF13DAE963482434F9AA4792BDF56AB25B2A6 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_1 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_2 = NULL;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_2 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var));
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_6 = V_2;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *>((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = V_0;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_mD30F07BD548E173B2ADFEFBE44890C5977DAE3E2 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_1 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_2 = NULL;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_2 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var));
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_6 = V_2;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *>((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = V_0;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_m4CABF899344965E03F2F7410C351F29DE540667F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_1 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_2 = NULL;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_2 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var));
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_6 = V_2;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *>((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = V_0;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m91D3B927165E65B4AE83158F430B914AF2ED8920 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_1 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * V_2 = NULL;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_2 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4_il2cpp_TypeInfo_var));
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_6 = V_2;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = V_1;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *>((EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = V_0;
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mFA7AB4FAA5C7E2846ED2AF76931D6FFD6368D1C0 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_1 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_2 = NULL;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_2 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var));
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_6 = V_2;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *>((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = V_0;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_9) == ((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_mE65E4F9ECE818C560D6921070EBFE611AE2D04F8 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_1 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_2 = NULL;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_2 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var));
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_6 = V_2;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *>((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = V_0;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_9) == ((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m9C768EE246FFA134BD2A337FE0F8B83604C60DA9 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_1 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_2 = NULL;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_2 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var));
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_6 = V_2;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *>((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = V_0;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_9) == ((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m778852C242125F896C30E4C6C3849012E9FD7621 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_1 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * V_2 = NULL;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_2 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9_il2cpp_TypeInfo_var));
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_6 = V_2;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = V_1;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *>((EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = V_0;
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_9) == ((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_m20452C2B11AD486350699680D32877EF135EF81E (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStarted_0();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_sessionStartedCallbackDelegate_12();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = __this->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = ___value0;
		Recognizer_add__SessionStarted_mB51AF13DAE963482434F9AA4792BDF56AB25B2A6(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_mCA0981C5C130D0448E68FE3AD5E1DE30C2CB2581 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = ___value0;
		Recognizer_remove__SessionStarted_mD30F07BD548E173B2ADFEFBE44890C5977DAE3E2(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = __this->get__SessionStarted_0();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = __this->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_m72BFF1ED1ABE73BF456D303E9338380AE218861A (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = __this->get__SessionStopped_1();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_sessionStoppedCallbackDelegate_13();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = __this->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_7 = ___value0;
		Recognizer_add__SessionStopped_m4CABF899344965E03F2F7410C351F29DE540667F(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m2185AA922564D7151E25DBD43D78DA415771E834 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_0 = ___value0;
		Recognizer_remove__SessionStopped_m91D3B927165E65B4AE83158F430B914AF2ED8920(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_1 = __this->get__SessionStopped_1();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = __this->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_m56062E88C92AF457EA6E57417E133D938C354206 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_speechStartDetectedCallbackDelegate_10();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = __this->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = ___value0;
		Recognizer_add__SpeechStartDetected_mFA7AB4FAA5C7E2846ED2AF76931D6FFD6368D1C0(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_m2EF0884129072F7D5520763B643866986D2EB428 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = ___value0;
		Recognizer_remove__SpeechStartDetected_mE65E4F9ECE818C560D6921070EBFE611AE2D04F8(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = __this->get__SpeechStartDetected_2();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = __this->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_m925EFEA65ED974DE068B4DA042FC368A396DF4FB (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_speechEndDetectedCallbackDelegate_11();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = __this->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_7 = ___value0;
		Recognizer_add__SpeechEndDetected_m9C768EE246FFA134BD2A337FE0F8B83604C60DA9(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_mAD9D4DDF76199AE46BE8EF9E369AB178D65C817D (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_0 = ___value0;
		Recognizer_remove__SpeechEndDetected_m778852C242125F896C30E4C6C3849012E9FD7621(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_1 = __this->get__SpeechEndDetected_3();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = __this->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		__this->set_asyncStartKeywordHandle_8((intptr_t)(0));
		__this->set_asyncStopKeywordHandle_9((intptr_t)(0));
		il2cpp_codegen_memory_barrier();
		__this->set_disposed_15(0);
		il2cpp_codegen_memory_barrier();
		__this->set_isDisposing_16(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_recognizerLock_17(L_0);
		__this->set_activeAsyncRecognitionCounter_18(0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ___recoPtr0;
		__this->set_recoHandle_4(L_2);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ___recoPtr0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->set_pointerHandle_5(L_4);
		String_t* L_5 = __this->get_pointerHandle_5();
		String_t* L_6;
		L_6 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBEE1F32E38A053DAC1C8FBB1F39277CA0C67EB06, L_5, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C(L_6, ((int32_t)120), _stringLiteral31514D8FFE6EBD8A160985B5C25BE0F2A7BEF863, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_7;
		L_7 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201(__this, 0, /*hidden argument*/NULL);
		__this->set_gch_14(L_7);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_8 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_8, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechStartDetectedCallbackDelegate_10(L_8);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_9 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_9, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechEndDetectedCallbackDelegate_11(L_9);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_10 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_10, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStartedCallbackDelegate_12(L_10);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_11 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_11, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStoppedCallbackDelegate_13(L_11);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral990E9465081709697449AFB110415A8629DE2E13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = __this->get_pointerHandle_5();
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteral990E9465081709697449AFB110415A8629DE2E13, L_0, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C(L_1, ((int32_t)131), _stringLiteralF00BD984FE2440EACF0054D39EEEAE818E9EBB32, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x42, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m0102FDEC834EB0B2A276EBA67002DAA6B7291036 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set_isDisposing_16(1);
			RuntimeObject * L_0 = __this->get_recognizerLock_17();
			V_0 = L_0;
			V_1 = (bool)0;
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_1 = V_0;
				Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
				int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
				V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
				bool L_3 = V_2;
				if (!L_3)
				{
					goto IL_0037;
				}
			}

IL_002b:
			{
				InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral263D04BA595C06ADC50CF667EA6F2290337CDAC0)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_Dispose_m0102FDEC834EB0B2A276EBA67002DAA6B7291036_RuntimeMethod_var)));
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x45, FINALLY_003a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003a;
		}

FINALLY_003a:
		{ // begin finally (depth: 2)
			{
				bool L_5 = V_1;
				if (!L_5)
				{
					goto IL_0044;
				}
			}

IL_003d:
			{
				RuntimeObject * L_6 = V_0;
				Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_6, /*hidden argument*/NULL);
			}

IL_0044:
			{
				IL2CPP_END_FINALLY(58)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(58)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x45, IL_0045)
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mFF908DB65A7128F68FC8CAEA84AA753B439FE40E(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
	}

IL_005a:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1532A53696EE625AE3777874840B492D52037C8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->get_pointerHandle_5();
		String_t* L_4;
		L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral2DAEEF072FFF48537E5ED531F51D87E1CF74D643, L_2, L_3, /*hidden argument*/NULL);
		Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C(L_4, ((int32_t)169), _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, _stringLiteral1532A53696EE625AE3777874840B492D52037C8E, /*hidden argument*/NULL);
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_007d;
	}

IL_003b:
	{
		__this->set_speechStartDetectedCallbackDelegate_10((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_speechEndDetectedCallbackDelegate_11((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_sessionStartedCallbackDelegate_12((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_sessionStoppedCallbackDelegate_13((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_7 = __this->get_address_of_gch_14();
		bool L_8;
		L_8 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_10 = __this->get_address_of_gch_14();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_10, /*hidden argument*/NULL);
	}

IL_0074:
	{
		il2cpp_codegen_memory_barrier();
		__this->set_disposed_15(1);
	}

IL_007d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * V_0 = NULL;
	SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * G_B8_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * L_7 = (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)il2cpp_codegen_object_new(SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = L_8->get__SessionStarted_0();
			EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_11 = V_0;
			SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * V_0 = NULL;
	SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * G_B8_0 = NULL;
	EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * L_7 = (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)il2cpp_codegen_object_new(SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_9 = L_8->get__SessionStopped_1();
			EventHandler_1_t7A63258A5969C858B1631271563423A32B0535F4 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_11 = V_0;
			SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_mBE3ECECF2F801B89577E6F5B65C436210E7AC013_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * V_0 = NULL;
	RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * G_B8_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * L_7 = (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 *)il2cpp_codegen_object_new(RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = L_8->get__SpeechStartDetected_2();
			EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_11 = V_0;
			RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * V_0 = NULL;
	RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * G_B8_0 = NULL;
	EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551_m3F8DF1DC97EE5C46681534A89E10BC1CFB9A8D97_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * L_7 = (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 *)il2cpp_codegen_object_new(RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_9 = L_8->get__SpeechEndDetected_3();
			EventHandler_1_t214C4477249EE7119DE65E07F526FB79B94814C9 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * L_11 = V_0;
			RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_mDAAC748F87875BAB00D8CFE54768FB1D7A1FE002_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___recoImplAction0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_recognizerLock_17();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
		__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		IL2CPP_LEAVE(0x30, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_4, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x30, IL_0030)
	}

IL_0030:
	{
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->get_isDisposing_16();
		il2cpp_codegen_memory_barrier();
		G_B8_0 = ((int32_t)(L_6));
		goto IL_0045;
	}

IL_0044:
	{
		G_B8_0 = 1;
	}

IL_0045:
	{
		V_2 = (bool)G_B8_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_10 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F_RuntimeMethod_var)));
	}

IL_005b:
	{
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = ___recoImplAction0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_11, (String_t*)NULL, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12 = ___recoImplAction0;
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xA3, FINALLY_006f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject * L_13 = __this->get_recognizerLock_17();
			V_3 = L_13;
			V_4 = (bool)0;
		}

IL_007a:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_14 = V_3;
			Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_14, (bool*)(&V_4), /*hidden argument*/NULL);
			int32_t L_15 = __this->get_activeAsyncRecognitionCounter_18();
			__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
			IL2CPP_LEAVE(0xA1, FINALLY_0095);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0095;
		}

FINALLY_0095:
		{ // begin finally (depth: 2)
			{
				bool L_16 = V_4;
				if (!L_16)
				{
					goto IL_00a0;
				}
			}

IL_0099:
			{
				RuntimeObject * L_17 = V_3;
				Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_17, /*hidden argument*/NULL);
			}

IL_00a0:
			{
				IL2CPP_END_FINALLY(149)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(149)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(111)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
	}

IL_00a3:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952 (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_asyncStartContinuousHandle_6();
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_3 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4((intptr_t)L_3, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_6 = __this->get_recoHandle_4();
		intptr_t* L_7 = __this->get_address_of_asyncStartContinuousHandle_6();
		intptr_t L_8;
		L_8 = Recognizer_recognizer_start_continuous_recognition_async_m64B1B19F379EA6A0BE20E374AF03B2BE2161B1F5(L_6, (intptr_t*)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_8, /*hidden argument*/NULL);
		intptr_t L_9 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_10;
		L_10 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_mCCCEF624CBF0A3A9086FBAC2F5EFD706FA474C45((intptr_t)L_9, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_10, /*hidden argument*/NULL);
		intptr_t L_11 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_12;
		L_12 = Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4((intptr_t)L_11, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E (Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_asyncStopContinuousHandle_7();
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_3 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4((intptr_t)L_3, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_6 = __this->get_recoHandle_4();
		intptr_t* L_7 = __this->get_address_of_asyncStopContinuousHandle_7();
		intptr_t L_8;
		L_8 = Recognizer_recognizer_stop_continuous_recognition_async_mA71C1B9B432CA57177A19527C2B77D89F0358853(L_6, (intptr_t*)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_8, /*hidden argument*/NULL);
		intptr_t L_9 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_10;
		L_10 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m8292C0C75C5AC4B53B05565881E97C8A9FC43AE5((intptr_t)L_9, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_10, /*hidden argument*/NULL);
		intptr_t L_11 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_12;
		L_12 = Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4((intptr_t)L_11, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * ___fromConfig0, SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * ___speechConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * V_4 = NULL;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_0 = ___speechConfig1;
		V_1 = (bool)((((RuntimeObject*)(SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral355878A388870DC1779B9524DFC7806DF3F6E3EF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48_RuntimeMethod_var)));
	}

IL_0014:
	{
		V_0 = (intptr_t)(0);
		intptr_t L_3 = V_0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_4, (intptr_t)L_3, (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)NULL, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		V_3 = (intptr_t)(0);
		GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * L_5 = ___fromConfig0;
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_6 = ___speechConfig1;
		NullCheck(L_6);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_7 = L_6->get_configHandle_0();
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_8 = V_2;
		NullCheck(L_5);
		intptr_t L_9;
		L_9 = GetRecognizerFromConfigDelegate_Invoke_m2702E96893F81AC86A4CA3CC87DB1B16957A6F39(L_5, (intptr_t*)(&V_3), L_7, L_8, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_3;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_11 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_11, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_12 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_12, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_13 = ___speechConfig1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_KeepAlive_m591D4B9DAF81CC50E1442CFD6528F7B1481DE4CA(L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_14 = V_4;
		V_5 = L_14;
		IL2CPP_LEAVE(0x6A, FINALLY_005f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		{
			InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_15 = V_2;
			if (!L_15)
			{
				goto IL_0069;
			}
		}

IL_0062:
		{
			InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(95)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_17 = V_5;
		return L_17;
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
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____recoHandle0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571 (intptr_t ___recoHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_handle_release)(___recoHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m64B1B19F379EA6A0BE20E374AF03B2BE2161B1F5 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_mCCCEF624CBF0A3A9086FBAC2F5EFD706FA474C45 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_mA71C1B9B432CA57177A19527C2B77D89F0358853 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m8292C0C75C5AC4B53B05565881E97C8A9FC43AE5 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4 (intptr_t ___asyncHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_async_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_async_handle_release)(___asyncHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_m88444A5A2BA7D9AEE9CDA1002B5A3940BD6231DB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____eventHandle0_marshaled, ___offset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_event_get_session_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_result", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____eventHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___eventHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_started_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_started_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_stopped_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_start_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_end_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognizing_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognizing_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognized_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognized_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_canceled_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_canceled_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mC3D7B7C3F0846CC09358F18309D027188F7B63AB (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translator_synthesizing_audio_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translator_synthesizing_audio_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___recoHandle0, NULL);
	}

	return returnValue;
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
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_2 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_2, NULL, (intptr_t)((intptr_t)EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_eventHandle_1(L_3);
		GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * L_4 = (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 *)il2cpp_codegen_object_new(GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782(L_4, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = __this->get_eventHandle_1();
		IL2CPP_RUNTIME_CLASS_INIT(SpxFactory_t9FE61355DE6A558857ECC04BFA8957529DF02088_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022(L_4, L_5, ((int32_t)37), /*hidden argument*/NULL);
		__this->set_U3CSessionIdU3Ek__BackingField_4(L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6 (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m0050DECB0EBB10E19BA62244433F38E906185002 (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_0, _stringLiteralAD1646DD3BCB50D02405E092BF9F99967377E943, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		String_t* L_3 = V_0;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218 (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		__this->set_progBag_1((PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 *)NULL);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___configPtr0;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_2 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_2, NULL, (intptr_t)((intptr_t)SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_configHandle_0(L_3);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = __this->get_configHandle_0();
		IL2CPP_RUNTIME_CLASS_INIT(SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E_il2cpp_TypeInfo_var);
		intptr_t L_5;
		L_5 = SpeechConfig_speech_config_get_property_bag_mE8DBDC6A1A6CF503CE40BFE269C6E9F374EC5440(L_4, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_0;
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_7 = (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 *)il2cpp_codegen_object_new(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_progBag_1(L_7);
		SpeechConfig_SetProperty_m0343E117564BF65434D42D18A14F1181B0A3F26A(__this, _stringLiteral4A7AB2F6B4BB9763BDAE9F4B653E5CA8E25A19F9, _stringLiteralD6EFEA28911C05150F90CA0C3A902792E8F9D73C, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * SpeechConfig_FromSubscription_m4DBE1634A3F8F32FC950537873ABE7A12DC244CE (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * V_1 = NULL;
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechConfig_t3F63A0A06649B05F74867424153144F20BE5403E_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpeechConfig_speech_config_from_subscription_mD0DEE32DBA5522798E980C672D9A3A83ED2A92AC((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_4 = (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C *)il2cpp_codegen_object_new(SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C_il2cpp_TypeInfo_var);
		SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_m80AA156A0161A5C4D741108B52CED971BD21C149 (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_m0343E117564BF65434D42D18A14F1181B0A3F26A (SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__cctor_m63E83D716E1E30B2017164775353D11368D9B44B (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_mD0DEE32DBA5522798E980C672D9A3A83ED2A92AC (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_release)(___config0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_mE8DBDC6A1A6CF503CE40BFE269C6E9F374EC5440 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____config0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___config0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m20C5296ECFA87A58E4076D6C1C7869E26A2E6251 (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_1;
		L_1 = SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_2;
		L_2 = CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544 (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877 (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m2208DDBBDF5DA96FDCB7FAC425537F2ED614B6EC (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8;
		L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ((SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_4 = (SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA *)il2cpp_codegen_object_new(SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA_il2cpp_TypeInfo_var);
		SpeechRecognitionResult__ctor_mFBCDCEC02A1772569BEE43A910AAD8581D23DB91(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m309DF39103EA63927A1294ABECCA3A00DDA709A3 (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_5;
		L_5 = SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_8;
		L_8 = SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_7;
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_13;
		L_13 = SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_0, _stringLiteral1F16CCC8B5C539FDA6D18899BE786616CC0A66C9, L_12, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0051;
	}

IL_0051:
	{
		String_t* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mFBCDCEC02A1772569BEE43A910AAD8581D23DB91 (SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D(__this, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_m3B1002094306793DAC89EA518CF3CF41EAB5CF53 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_1 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_2 = NULL;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_2 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var));
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_6 = V_2;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *>((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = V_0;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_9) == ((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_m6E364B7F5C809434CB074CECE7E15363960FA0E4 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_1 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_2 = NULL;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_2 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var));
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_6 = V_2;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *>((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = V_0;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_9) == ((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_mB16B2627C7EC9358785C45F43B43B96821CBE3B9 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_1 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_2 = NULL;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_2 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var));
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_6 = V_2;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *>((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = V_0;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_9) == ((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_mEFAD10146DFD2FBF3A41F4A77120DC470A4F15A8 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_1 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * V_2 = NULL;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_2 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA_il2cpp_TypeInfo_var));
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_6 = V_2;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = V_1;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *>((EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = V_0;
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_9) == ((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_m6B869F81EDC6097632FC76CB2E5F4F7216720281 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_0 = NULL;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_1 = NULL;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_2 = NULL;
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_2 = V_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441_il2cpp_TypeInfo_var));
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_6 = V_2;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_7 = V_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *>((EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_9 = V_0;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_9) == ((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_mA85E0EA8F11F8855B5EB6F057202E846E45369EA (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_0 = NULL;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_1 = NULL;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * V_2 = NULL;
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_2 = V_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441_il2cpp_TypeInfo_var));
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_6 = V_2;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_7 = V_1;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *>((EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_9 = V_0;
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_9) == ((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_mA0FC8B4E2AF88DB6B24BBCF989B1B18AB07CE177 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognizing_19();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_recognizingCallbackDelegate_22();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = ___value0;
		SpeechRecognizer_add__Recognizing_m3B1002094306793DAC89EA518CF3CF41EAB5CF53(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_mCB11534D510F0ABDAD02ECB810D074981FC7D232 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = ___value0;
		SpeechRecognizer_remove__Recognizing_m6E364B7F5C809434CB074CECE7E15363960FA0E4(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = __this->get__Recognizing_19();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_m2846E50B598DF8E1214C19D21EC1BD1B36099ACF (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = __this->get__Recognized_20();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_recognizedCallbackDelegate_23();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_7 = ___value0;
		SpeechRecognizer_add__Recognized_mB16B2627C7EC9358785C45F43B43B96821CBE3B9(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_mFFD94D676138DECD9849860624103C2ACD696620 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_0 = ___value0;
		SpeechRecognizer_remove__Recognized_mEFAD10146DFD2FBF3A41F4A77120DC470A4F15A8(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_1 = __this->get__Recognized_20();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_m04F7761EEF99D67A7E80182D9496BBE884453F11 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_0 = __this->get__Canceled_21();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_canceledCallbackDelegate_24();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_7 = ___value0;
		SpeechRecognizer_add__Canceled_m6B869F81EDC6097632FC76CB2E5F4F7216720281(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_mD1B228A88DCC8DD1B2DE6BE4B259695A6950EBC9 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_0 = ___value0;
		SpeechRecognizer_remove__Canceled_mA85E0EA8F11F8855B5EB6F057202E846E45369EA(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_1 = __this->get__Canceled_21();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m225021C6ED7191504492906319FF3EE5C85E4755 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * ___speechConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * L_0 = (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C * L_1 = ___speechConfig0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2;
		L_2 = Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48(L_0, L_1, /*hidden argument*/NULL);
		SpeechRecognizer__ctor_mD8D1E0C50CE3BD09DB5CB89DB5AF1E5BC6C92130(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_mD8D1E0C50CE3BD09DB5CB89DB5AF1E5BC6C92130 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = ___recoHandle0;
		Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095(__this, L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_1, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_2 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_2, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_22(L_2);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_3, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_23(L_3);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_4 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_4, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_24(L_4);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = ___recoHandle0;
		intptr_t L_6;
		L_6 = Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF(L_5, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_8 = (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 *)il2cpp_codegen_object_new(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16(L_8, (intptr_t)L_7, /*hidden argument*/NULL);
		SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpeechRecognizer_StartContinuousRecognitionAsync_m1B30FC1A71CB316ADFA4E6A64F78CCCF5CC06ADF (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m974E047E515FDC1ACF9E6A5C63872D587397F716(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpeechRecognizer_StopContinuousRecognitionAsync_m0F5549E0B97873692C02C8974AFCAC6CA8F13628 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m974E047E515FDC1ACF9E6A5C63872D587397F716(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_mB374A73D338B6F14B3E67FE11DCAA4F3A1668E3E (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x1D, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mC30A7439662E0696EB690A3C7E25360EE55F955C (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * G_B7_0 = NULL;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * G_B6_0 = NULL;
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * G_B10_0 = NULL;
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0115;
	}

IL_0013:
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		V_1 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_4, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_6 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_6, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_8 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_9;
		L_9 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_8, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_10 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_11;
		L_11 = Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1(L_10, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_12 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_13;
		L_13 = Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04(L_12, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_14 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_15;
		L_15 = Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5(L_14, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_15, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_16 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_17;
		L_17 = Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07(L_16, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		bool L_18 = ___disposing0;
		V_2 = L_18;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00f1;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_20 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_21 = L_20;
		G_B6_0 = L_21;
		if (L_21)
		{
			G_B7_0 = L_21;
			goto IL_00d8;
		}
	}
	{
		goto IL_00de;
	}

IL_00d8:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(G_B7_0, /*hidden argument*/NULL);
	}

IL_00de:
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_22;
		L_22 = SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_23 = L_22;
		G_B9_0 = L_23;
		if (L_23)
		{
			G_B10_0 = L_23;
			goto IL_00ea;
		}
	}
	{
		goto IL_00f0;
	}

IL_00ea:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00f0:
	{
	}

IL_00f1:
	{
		__this->set_recognizingCallbackDelegate_22((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_recognizedCallbackDelegate_23((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_canceledCallbackDelegate_24((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_audioInputKeepAlive_26((AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D *)NULL);
		bool L_24 = ___disposing0;
		Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC(__this, L_24, /*hidden argument*/NULL);
	}

IL_0115:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * V_0 = NULL;
	SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * G_B8_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * L_7 = (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = L_8->get__Recognizing_19();
			EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_11 = V_0;
			SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * V_0 = NULL;
	SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * G_B8_0 = NULL;
	EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * L_7 = (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_9 = L_8->get__Recognized_20();
			EventHandler_1_t088FB3E1D2F5F8DD10C1D6CAF322B18933DE59FA * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_11 = V_0;
			SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m79918F61C4F87768355921928000E08FC307AB5D_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m33AEAC62C1A072D18E7F9DAF44636FB08884E54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * G_B8_0 = NULL;
	EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E_m8C6131649638D3F61C524C6E7DA5C6F4D1AF20B4_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * L_7 = (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 *)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0_il2cpp_TypeInfo_var);
			SpeechRecognitionCanceledEventArgs__ctor_m20C5296ECFA87A58E4076D6C1C7869E26A2E6251(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_9 = L_8->get__Canceled_21();
			EventHandler_1_t336B3F8405DD7680E41352F7714FEE894659E441 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * L_11 = V_0;
			SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m33AEAC62C1A072D18E7F9DAF44636FB08884E54C(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m33AEAC62C1A072D18E7F9DAF44636FB08884E54C_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__52_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__53_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2 (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m1F8968787AE5DC4C1797C7BF824F938E48CB9E59 (SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_targetLanguages_2(L_0);
		intptr_t L_1 = ___configPtr0;
		SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * SpeechTranslationConfig_FromSubscription_mC93F8A57661AF5D8FAFDB59BB07A8C9B1CD8ADD0 (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * V_1 = NULL;
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_from_subscription_mF89C55819C6323C3C289F2413DBAB4DB8CE25CAA((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * L_4 = (SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 *)il2cpp_codegen_object_new(SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3_il2cpp_TypeInfo_var);
		SpeechTranslationConfig__ctor_m1F8968787AE5DC4C1797C7BF824F938E48CB9E59(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig_AddTargetLanguage_m3DB94368666228EC479A106DF14BD74E5E110284 (SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * __this, String_t* ___language0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = ((SpeechConfig_t43885B45EEFDBEFD82BA643B26FEEF568ECD677C *)__this)->get_configHandle_0();
		String_t* L_1 = ___language0;
		IL2CPP_RUNTIME_CLASS_INIT(SpeechTranslationConfig_t27255293A6F2AFF4F7951E6C4D78E3C051DB832A_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpeechTranslationConfig_speech_translation_config_add_target_language_m6860252786A03225DDB897D7D3BA543C7D728F56(L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__cctor_m95E536F0DF83447217C469AEE4040C7C815F0494 (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mF89C55819C6323C3C289F2413DBAB4DB8CE25CAA (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m6860252786A03225DDB897D7D3BA543C7D728F56 (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___config0, String_t* ___language1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_add_target_language", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Marshaling of parameter '___language1' to native representation
	char* ____language1_marshaled = NULL;
	____language1_marshaled = il2cpp_codegen_marshal_string(___language1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_add_target_language)(____config0_marshaled, ____language1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ____language1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___config0, NULL);
	}

	// Marshaling cleanup of parameter '___language1' native representation
	il2cpp_codegen_marshal_free(____language1_marshaled);
	____language1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_m48FE47FF7BDDD82E4C165CB95C5B76CA950A826A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B(((int32_t)25), /*hidden argument*/NULL);
		((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->set_BufferTooSmall_0((intptr_t)L_0);
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B(((int32_t)27), /*hidden argument*/NULL);
		((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->set_RuntimeError_1((intptr_t)L_1);
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B(((int32_t)33), /*hidden argument*/NULL);
		((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->set_InvalidHandle_2((intptr_t)L_2);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B(5, /*hidden argument*/NULL);
		((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->set_InvalidArgument_3((intptr_t)L_3);
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_m6AD40381FA1C56356C0CD443EBC0CE300718420B(4, /*hidden argument*/NULL);
		((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->set_NotFound_4((intptr_t)L_4);
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m8F5CCD9E83354AA83663732824933705D84B8E37 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = SpxError_error_get_message_m1DA6555D54DCF635C8E52156C1074BCA67A3E239((intptr_t)L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		intptr_t L_3 = V_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_6 = V_1;
		String_t* L_7;
		L_7 = Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350((intptr_t)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0026:
	{
		String_t* L_8 = V_0;
		V_3 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		String_t* L_9 = V_3;
		return L_9;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_get_error_code_m01B8458EEF708586124D197AB41670CC2A0A2104((intptr_t)L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = IntPtr_op_Explicit_m955DDFE2288BA8A4EE7ABBC7D2BDBD0E9004A88E((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08((intptr_t*)(&___errorHandle0), /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_2 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_mDDDA1AF9C3C4F347D2A8D3BED15A534C21F5678E (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA((intptr_t)L_0, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_mF63EFCD66ADE238A052501F9898A29E827C9D363 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m1DA6555D54DCF635C8E52156C1074BCA67A3E239 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_message", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_message)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m01B8458EEF708586124D197AB41670CC2A0A2104 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_error_code)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_release)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___hr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_3 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		intptr_t L_5 = ___hr0;
		String_t* L_6;
		L_6 = SpxError_GetMessage_m8F5CCD9E83354AA83663732824933705D84B8E37((intptr_t)L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = String_IsNullOrWhiteSpace_m2E583B338AA33E737AFFC4B5B2FB90404E0CD441(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11;
		L_11 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		String_t* L_12;
		L_12 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_1), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE)), L_11, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13;
		L_13 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_14;
		L_14 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_12, L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D994AF9D9226E9E4FB3842699E67F727590C94D)), L_14, /*hidden argument*/NULL);
		V_2 = L_15;
	}

IL_0056:
	{
		intptr_t L_16 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var)));
		bool L_17;
		L_17 = SpxError_ReleaseNoThrow_mF63EFCD66ADE238A052501F9898A29E827C9D363((intptr_t)L_16, /*hidden argument*/NULL);
		String_t* L_18 = V_2;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_19 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A_RuntimeMethod_var)));
	}

IL_0064:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___item0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_2 = ___message1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		___message1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA23629C306AA023437DA41361139F76CFB792614));
	}

IL_001d:
	{
		String_t* L_5 = ___message1;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554 (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1 (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		intptr_t L_3 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5;
		L_5 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
		L_6 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_1), _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE, L_6, /*hidden argument*/NULL);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_8;
		L_8 = CultureInfo_get_CurrentCulture_m45CEB001D1509B8171C3557DD56C7521A0F5803E(/*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_7, L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_5, _stringLiteral7BF1B4B734433B6AD600A9CCEB253AD568B4B6A7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		intptr_t L_11 = ___hr0;
		SpxError_Release_mDDDA1AF9C3C4F347D2A8D3BED15A534C21F5678E((intptr_t)L_11, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4 (String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxFactory__cctor_mF9F36B1F0B7DA0F13A10D1DA9639A1CD17151D11 (const RuntimeMethod* method)
{
	{
		DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097(/*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * ___functionPtr0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * L_3 = ___functionPtr0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = ___handle1;
		intptr_t L_5 = V_1;
		int32_t L_6 = ___maxCharCount2;
		NullCheck(L_3);
		intptr_t L_7;
		L_7 = GetResultDelegate_Invoke_m8DE930FC3B770969517CD7A9108BBF434E62E311(L_3, L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_1;
		String_t* L_9;
		L_9 = Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350((intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_LEAVE(0x34, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		String_t* L_11 = V_0;
		V_2 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5 (intptr_t* ___recoHandle0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695 (intptr_t* ___recoHandle0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_translation_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_Microsoft_CognitiveServices_Speech_core_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_translation_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m3D97148E711B9CBDC43DE2F620144D076553EBE3 (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_1;
		L_1 = TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_2;
		L_2 = CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28 (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionCanceledEventArgs_ToString_m919DFF681E3D819FEE6B6DDB7910D0847E0008FA (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_2;
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_5;
		L_5 = TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_4;
		int32_t L_8;
		L_8 = TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_t2FB6E2B8C856A812C3DE00077594AD904EA07CFD_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		int32_t L_12;
		L_12 = TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t04AABCA75040F116D5F5D8B907AFE39231AB0C15_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_0, _stringLiteral94ACA2C81E052FAFABB8EF261D2A67595EE46C0E, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097 (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ((SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_4 = (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 *)il2cpp_codegen_object_new(TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7_il2cpp_TypeInfo_var);
		TranslationRecognitionResult__ctor_m5812765FB155E9EBDA6AF0A34325C6A0EEA53FA3(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61 (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionEventArgs_ToString_mFACC9F0F2415EB7AE4789A22D9B935EE17719FD7 (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_2;
		L_2 = TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_5 = V_0;
		return L_5;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m5812765FB155E9EBDA6AF0A34325C6A0EEA53FA3 (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_GetTranslationTexts_m7DDE0276B1C0117AE493382A805E3B74774B25F4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_m12ECEE6B410CE3B59471CA921EEFCC536FDEABEA (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_translationTextResultMap_6();
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionResult_ToString_m8CFFF6195AD90FCECCA1D0A7A21AB0FC87404455 (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		String_t* L_6;
		L_6 = String_Format_mA3BB834FA13052393D767E65AD6AA9F5895106B8(L_0, _stringLiteral66B8240E15500AD983CC6249A0313DD49E22940E, L_1, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject* L_7;
		L_7 = TranslationRecognitionResult_get_Translations_m12ECEE6B410CE3B59471CA921EEFCC536FDEABEA(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tFBD6BBCAEB863478E70CD1504627E429F27569AA_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0037:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_10;
			L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t692ABF80A29FB82368A57AE22841134E3626E47A_il2cpp_TypeInfo_var, L_9);
			V_2 = L_10;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
			String_t* L_13 = V_0;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, _stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral67E3003FE5B0C609EB2073B105C585694FED0280);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
			String_t* L_16;
			L_16 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_16);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, _stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral39F33B0FE4D2999B413004105B540E9BDC49D767);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
			String_t* L_19;
			L_19 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_18;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC9242117927E8C104F78807A56EFE624837EF5BB);
			String_t* L_21;
			L_21 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_20, /*hidden argument*/NULL);
			V_0 = L_21;
		}

IL_007c:
		{
			RuntimeObject* L_22 = V_1;
			NullCheck(L_22);
			bool L_23;
			L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0037;
			}
		}

IL_0084:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_1;
			if (!L_24)
			{
				goto IL_0090;
			}
		}

IL_0089:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(134)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		String_t* L_26 = V_0;
		V_3 = L_26;
		goto IL_0095;
	}

IL_0095:
	{
		String_t* L_27 = V_3;
		return L_27;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m7DDE0276B1C0117AE493382A805E3B74774B25F4 (TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	uintptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	uintptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	uintptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * V_7 = NULL;
	Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * V_8 = NULL;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = ((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)__this)->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, _stringLiteral5CB81742644CCEA2B53FE5D7E08731904CD84E08, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)__this)->get_resultHandle_4();
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0115;
		}
	}
	{
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_4, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_translationTextResultMap_6(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		V_1 = (0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = ((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)__this)->get_resultHandle_4();
		intptr_t L_6;
		L_6 = RecognitionResult_translation_text_result_get_translation_count_m97936E19E9F9ED8E67F852A2F4ED0D4834818789(L_5, (uintptr_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_6;
		intptr_t L_7 = V_2;
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_7, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0100;
	}

IL_0052:
	{
		uint32_t L_8 = V_3;
		UIntPtr__ctor_m96753B0388D7FD036512FA40E278100721BC777A((uintptr_t*)(&V_4), L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		V_5 = (0);
		V_6 = (0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_9 = ((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)__this)->get_resultHandle_4();
		uintptr_t L_10 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
		Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_11 = ((Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var))->get_Null_6();
		Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_12 = ((Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var))->get_Null_6();
		intptr_t L_13;
		L_13 = RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F(L_9, L_10, L_11, L_12, (uintptr_t*)(&V_5), (uintptr_t*)(&V_6), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_13, /*hidden argument*/NULL);
		uint32_t L_14;
		L_14 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_5), /*hidden argument*/NULL);
		Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_15 = (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C *)il2cpp_codegen_object_new(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
		Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB(L_15, L_14, /*hidden argument*/NULL);
		V_7 = L_15;
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_16;
			L_16 = UIntPtr_ToUInt32_mB7F5C31A991016187B70A6CA4D667A04FCBA07CC((uintptr_t*)(&V_6), /*hidden argument*/NULL);
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_17 = (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C *)il2cpp_codegen_object_new(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
			Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB(L_17, L_16, /*hidden argument*/NULL);
			V_8 = L_17;
		}

IL_00a6:
		try
		{ // begin try (depth: 2)
			InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_18 = ((RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 *)__this)->get_resultHandle_4();
			uintptr_t L_19 = V_4;
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_20 = V_7;
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_21 = V_8;
			intptr_t L_22;
			L_22 = RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F(L_18, L_19, L_20, L_21, (uintptr_t*)(&V_5), (uintptr_t*)(&V_6), /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_22, /*hidden argument*/NULL);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_23 = __this->get_translationTextResultMap_6();
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_24 = V_7;
			NullCheck(L_24);
			String_t* L_25;
			L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_26 = V_8;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
			NullCheck(L_23);
			Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668(L_23, L_25, L_27, /*hidden argument*/Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
			IL2CPP_LEAVE(0xEC, FINALLY_00df);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00df;
		}

FINALLY_00df:
		{ // begin finally (depth: 2)
			{
				Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_28 = V_8;
				if (!L_28)
				{
					goto IL_00eb;
				}
			}

IL_00e3:
			{
				Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_29 = V_8;
				NullCheck(L_29);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_29);
			}

IL_00eb:
			{
				IL2CPP_END_FINALLY(223)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(223)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xEC, IL_00ec)
		}

IL_00ec:
		{
			IL2CPP_LEAVE(0xFB, FINALLY_00ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ee;
	}

FINALLY_00ee:
	{ // begin finally (depth: 1)
		{
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_30 = V_7;
			if (!L_30)
			{
				goto IL_00fa;
			}
		}

IL_00f2:
		{
			Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_31 = V_7;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_31);
		}

IL_00fa:
		{
			IL2CPP_END_FINALLY(238)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(238)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFB, IL_00fb)
	}

IL_00fb:
	{
		uint32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0100:
	{
		uint32_t L_33 = V_3;
		uint64_t L_34;
		L_34 = UIntPtr_ToUInt64_mF1EC8AE1580069E87844A57EF46876AA453ADFC8((uintptr_t*)(&V_1), /*hidden argument*/NULL);
		V_9 = (bool)((!(((uint64_t)((int64_t)((uint64_t)L_33))) >= ((uint64_t)L_34)))? 1 : 0);
		bool L_35 = V_9;
		if (L_35)
		{
			goto IL_0052;
		}
	}
	{
	}

IL_0115:
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
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_m3C4B4BC28C6DE51D11A82CF5818D8A158F0CC6A3 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_1 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_2 = NULL;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_2 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var));
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_6 = V_2;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *>((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = V_0;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_m98DBCAA8767F5899D9B74A18D8E206E7E500B47D (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_1 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_2 = NULL;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_2 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var));
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_6 = V_2;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *>((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = V_0;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_mE297B0F6067FA3E8FDFAB360566BDAAD0ED2A08B (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_1 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_2 = NULL;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_2 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var));
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_6 = V_2;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *>((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = V_0;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m855309B9D3CCEE2D8A726A8239B9F6C2D17C4E59 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_1 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * V_2 = NULL;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_2 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789_il2cpp_TypeInfo_var));
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_6 = V_2;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = V_1;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *>((EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = V_0;
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m5D0FAB1063EDD80A398B12FDCF9762D77A12F05A (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_0 = NULL;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_1 = NULL;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_2 = NULL;
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_2 = V_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7_il2cpp_TypeInfo_var));
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_6 = V_2;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_7 = V_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *>((EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_9 = V_0;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_9) == ((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_m7034C257BB657023953A5B9FE9B960B3C5BBED22 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_0 = NULL;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_1 = NULL;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * V_2 = NULL;
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_2 = V_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7_il2cpp_TypeInfo_var));
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_6 = V_2;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_7 = V_1;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *>((EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_9 = V_0;
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_9) == ((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognizing_m7D39C4E9BCC44A41944EC888689547D38DDB0C26 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognizing_19();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_recognizingCallbackDelegate_24();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = ___value0;
		TranslationRecognizer_add__Recognizing_m3C4B4BC28C6DE51D11A82CF5818D8A158F0CC6A3(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognizing_m27E12992D0F0744D8FFA011FDC12C5D97714F4AB (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognizing_m98DBCAA8767F5899D9B74A18D8E206E7E500B47D(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = __this->get__Recognizing_19();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognized_mC9F2F468A5E601F5FB3E58E603DA8F5007AC0D12 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = __this->get__Recognized_20();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_recognizedCallbackDelegate_25();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_7 = ___value0;
		TranslationRecognizer_add__Recognized_mE297B0F6067FA3E8FDFAB360566BDAAD0ED2A08B(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognized_m8D44FEBFFE7848B4C025887E3C88BB7B4AB810F8 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognized_m855309B9D3CCEE2D8A726A8239B9F6C2D17C4E59(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_1 = __this->get__Recognized_20();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Canceled_mFB5CBD8AA7DE6DB176BF315269FA095CC77268B0 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_0 = __this->get__Canceled_21();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = __this->get_canceledCallbackDelegate_26();
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_gch_14();
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_mBE5BF504F13C142394E6964DA0D64CA8E77DEE41(L_4, /*hidden argument*/NULL);
		intptr_t L_6;
		L_6 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_2, L_3, (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_7 = ___value0;
		TranslationRecognizer_add__Canceled_m5D0FAB1063EDD80A398B12FDCF9762D77A12F05A(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Canceled_m4B1C95E7AA02D3EA5657E9843895A3B0FD1CB581 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_0 = ___value0;
		TranslationRecognizer_remove__Canceled_m7034C257BB657023953A5B9FE9B960B3C5BBED22(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_1 = __this->get__Canceled_21();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_3 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_4;
		L_4 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_3, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m02D7A2E3788CC501FE8D4FEC5D4084FD6A8D9EDD (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * L_0 = (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechTranslationConfig_tA9E999B61554970E1C164FAED8160D68549664C3 * L_1 = ___config0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2;
		L_2 = Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48(L_0, L_1, /*hidden argument*/NULL);
		TranslationRecognizer__ctor_mBE738732382A4AF470048C69FDEA123824AEAE7E(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_mBE738732382A4AF470048C69FDEA123824AEAE7E (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = ___recoHandle0;
		Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095(__this, L_0, /*hidden argument*/NULL);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_1 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_1, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_24(L_1);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_2 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_2, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_25(L_2);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_3 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_3, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_26(L_3);
		CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 * L_4 = (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3(L_4, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_translationSynthesisCallbackDelegate_27(L_4);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_5, _stringLiteral7D62C11CCF10BDFC07ACE3D149248DE3F051849C, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_6 = ___recoHandle0;
		intptr_t L_7;
		L_7 = Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF(L_6, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_9 = (PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 *)il2cpp_codegen_object_new(PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC_inline(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TranslationRecognizer_StartContinuousRecognitionAsync_mA084AB62A6EBA0B07BB328289C39C90C2CBCA3A1 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m974E047E515FDC1ACF9E6A5C63872D587397F716(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TranslationRecognizer_StopContinuousRecognitionAsync_mF63D6A77759DC514E252A9A3BDAA3E122D9431AA (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_Run_m974E047E515FDC1ACF9E6A5C63872D587397F716(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Finalize_m2184E8E230C6A2427CC4A728AEE6C273A1EC9575 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x1D, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
	}

IL_001d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Dispose_mD25FF49087ACE034339817AC845CDF7AE7D03AA3 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * G_B7_0 = NULL;
	InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * G_B6_0 = NULL;
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * G_B10_0 = NULL;
	PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0133;
	}

IL_0013:
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_2 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		V_1 = (bool)((!(((RuntimeObject*)(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00dd;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_5;
		L_5 = Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F(L_4, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_6 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_7;
		L_7 = Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97(L_6, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_8 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_9;
		L_9 = Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0(L_8, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_10 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_11;
		L_11 = Recognizer_translator_synthesizing_audio_set_callback_mC3D7B7C3F0846CC09358F18309D027188F7B63AB(L_10, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_12 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_13;
		L_13 = Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1(L_12, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_14 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_15;
		L_15 = Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04(L_14, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_15, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_16 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_17;
		L_17 = Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5(L_16, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_17, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_18 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		intptr_t L_19;
		L_19 = Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07(L_18, (CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1((intptr_t)L_19, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		bool L_20 = ___disposing0;
		V_2 = L_20;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_22 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)__this)->get_recoHandle_4();
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_23 = L_22;
		G_B6_0 = L_23;
		if (L_23)
		{
			G_B7_0 = L_23;
			goto IL_00ef;
		}
	}
	{
		goto IL_00f5;
	}

IL_00ef:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_mFFFB9D0CAE3EEE02F0D3DA250D5E52F0DD51B098(G_B7_0, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_24;
		L_24 = TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_25 = L_24;
		G_B9_0 = L_25;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0101;
		}
	}
	{
		goto IL_0107;
	}

IL_0101:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_0107:
	{
	}

IL_0108:
	{
		__this->set_recognizingCallbackDelegate_24((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_recognizedCallbackDelegate_25((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_canceledCallbackDelegate_26((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_translationSynthesisCallbackDelegate_27((CallbackFunctionDelegate_t2BF382250D438A44BCA5A6F169BCB99D3AC38E37 *)NULL);
		__this->set_audioInputKeepAlive_28((AudioConfig_tDDDB75C17E458A0FD4AF9E3BC522640FAE270B7D *)NULL);
		bool L_26 = ___disposing0;
		Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC(__this, L_26, /*hidden argument*/NULL);
	}

IL_0133:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * V_0 = NULL;
	TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * G_B8_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * L_7 = (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = L_8->get__Recognizing_19();
			EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_11 = V_0;
			TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * V_0 = NULL;
	TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * G_B8_0 = NULL;
	EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * L_7 = (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_9 = L_8->get__Recognized_20();
			EventHandler_1_tE894595EA2555FEAD44FD0C773BB0798C8E3C789 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_11 = V_0;
			TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m63F40DF7C1FE84D58D06DAE88E8E4B9B319FAF8C_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m3E88BBA93CAB8AF753F5247AF742C94CA30399EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * V_0 = NULL;
	TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * G_B8_0 = NULL;
	EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * L_7 = (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 *)il2cpp_codegen_object_new(TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5_il2cpp_TypeInfo_var);
			TranslationRecognitionCanceledEventArgs__ctor_m3D97148E711B9CBDC43DE2F620144D076553EBE3(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_9 = L_8->get__Canceled_21();
			EventHandler_1_t88E29024ED5049BB4CEB30CC3EB6A1405E01D3A7 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_11 = V_0;
			TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_m3E88BBA93CAB8AF753F5247AF742C94CA30399EF(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m3E88BBA93CAB8AF753F5247AF742C94CA30399EF_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mBB211FFD4AEE25121C7BE9100FFA68205EE1698C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * V_0 = NULL;
	TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B4_0 = 0;
	EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * G_B8_0 = NULL;
	EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * G_B7_0 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_1;
			L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC_m8624B101EC23F03CAA1E99AA41A5B5108ED891BA_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0016;
			}
		}

IL_000c:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t896EEA1459EA1C0C640309A19882D6D9F9892551 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			G_B4_0 = ((int32_t)(L_4));
			goto IL_0017;
		}

IL_0016:
		{
			G_B4_0 = 1;
		}

IL_0017:
		{
			V_2 = (bool)G_B4_0;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001b:
		{
			goto IL_004d;
		}

IL_001e:
		{
			intptr_t L_6 = ___hevent1;
			TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * L_7 = (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 *)il2cpp_codegen_object_new(TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0_il2cpp_TypeInfo_var);
			TranslationSynthesisEventArgs__ctor_m7C2E636717FBAABA106F5EE32C4C9BDF21E59769(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_8 = V_0;
			NullCheck(L_8);
			EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * L_9 = L_8->get__Synthesizing_22();
			EventHandler_1_tF6B9B03BDFAD2CB01489DAC99BC6B858F59A93A9 * L_10 = L_9;
			G_B7_0 = L_10;
			if (L_10)
			{
				G_B8_0 = L_10;
				goto IL_0031;
			}
		}

IL_002e:
		{
			goto IL_0039;
		}

IL_0031:
		{
			TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * L_11 = V_0;
			TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * L_12 = V_1;
			NullCheck(G_B8_0);
			EventHandler_1_Invoke_mBB211FFD4AEE25121C7BE9100FFA68205EE1698C(G_B8_0, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_mBB211FFD4AEE25121C7BE9100FFA68205EE1698C_RuntimeMethod_var);
		}

IL_0039:
		{
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_13 = V_3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4(L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3 (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_m7C2E636717FBAABA106F5EE32C4C9BDF21E59769 (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ((SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 *)__this)->get_eventHandle_1();
		intptr_t L_2;
		L_2 = Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * L_4 = (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE *)il2cpp_codegen_object_new(TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE_il2cpp_TypeInfo_var);
		TranslationSynthesisResult__ctor_mB0B22C703623E1B5B61531197D9D1A29E3A77E7E(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_5(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327 (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisEventArgs_ToString_m0444E470A70689EB92906F62FEF6EC7E0AA9BC37 (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07657094245180507A188C63C49A070BC8752EA2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline(__this, /*hidden argument*/NULL);
		TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * L_2;
		L_2 = TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteral07657094245180507A188C63C49A070BC8752EA2, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_5 = V_0;
		return L_5;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_mB0B22C703623E1B5B61531197D9D1A29E3A77E7E (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_inline(/*hidden argument*/Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_RuntimeMethod_var);
		__this->set_audio_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_1 = ___resultPtr0;
		SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554((intptr_t)L_1, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_2 = ___resultPtr0;
		HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 * L_3 = (HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9 *)il2cpp_codegen_object_new(HandleRelease_tAF94C6B1BC189010FBBBCB231866A1DB01A193F9_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608(L_3, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *)il2cpp_codegen_object_new(InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_2(L_4);
		V_0 = 0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_5 = __this->get_resultHandle_2();
		intptr_t L_6;
		L_6 = RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_7);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_8 = __this->get_resultHandle_2();
		TranslationSynthesisResult_GetAudioData_m6C03D58F707C22D0C7369A78BD9B5091306EB6BF(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisResult_ToString_m1AA32514309BCCACC1F742CBE3DEB6F338248383 (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ResultReason_t6B76166BACAD1FE42DC6F7AF814A077B55F4711F_il2cpp_TypeInfo_var, &L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_audio_1();
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m061EEC38D33A13CC1E98DBD6869E97A0C2989F88(L_0, _stringLiteralC7EBE4EAAB6D68E9347038ACD59F39A9DE2D2040, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8;
		L_8 = TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11;
		L_11 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_11, _stringLiteralC6072FBFC31FE8C1C066271F63752A3B9B67AAD9, L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		String_t* L_15 = V_0;
		V_2 = L_15;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_m6C03D58F707C22D0C7369A78BD9B5091306EB6BF (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___resultHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_0 = ___resultHandle0;
		SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB(L_0, _stringLiteral84F70ACE509061C886C9B2FE8A2BF7B7FFC81F7F, /*hidden argument*/NULL);
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_1 = ___resultHandle0;
		bool L_2;
		L_2 = RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0085;
		}
	}
	{
		V_1 = 0;
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_4 = ___resultHandle0;
		intptr_t L_5;
		L_5 = RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF(L_4, (intptr_t)(0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_5;
		intptr_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var);
		intptr_t L_7 = ((SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t603AE1F7D309538B8E98DB9BBD5F59860DE60516_il2cpp_TypeInfo_var))->get_BufferTooSmall_0();
		bool L_8;
		L_8 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_11;
		L_11 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(L_10, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_11;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * L_12 = ___resultHandle0;
		intptr_t L_13 = V_4;
		intptr_t L_14;
		L_14 = RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF(L_12, (intptr_t)L_13, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->set_audio_1(L_16);
		intptr_t L_17 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = __this->get_audio_1();
		int32_t L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716((intptr_t)L_17, L_18, 0, L_19, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x7B, FINALLY_0070);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		intptr_t L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
	}

IL_007b:
	{
		goto IL_0085;
	}

IL_007d:
	{
		intptr_t L_21 = V_2;
		SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A((intptr_t)L_21, /*hidden argument*/NULL);
	}

IL_0085:
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, uint32_t ___maxLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		uint32_t L_0 = ___maxLength0;
		V_0 = (bool)(false? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD150B768BC4907FDDB1BE9F66C5E43806644D97C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95DC79C73A34C98991065992C9FD3B3F8A4AB21B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB_RuntimeMethod_var)));
	}

IL_0027:
	{
		uint32_t L_3 = ___maxLength0;
		__this->set_U3CLengthU3Ek__BackingField_7(L_3);
		uint32_t L_4;
		L_4 = Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B_inline(__this, /*hidden argument*/NULL);
		intptr_t L_5;
		memset((&L_5), 0, sizeof(L_5));
		IntPtr__ctor_m2CDDF5A1715E7BCFDFB6823D7A18339BD8EB0E90((&L_5), ((int64_t)((uint64_t)L_4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_6;
		L_6 = Marshal_AllocHGlobal_m03DAF8C089E28674E0D1A5B4F8CF8D9ADA7D98B5((intptr_t)L_5, /*hidden argument*/NULL);
		SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline(__this, (intptr_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__ctor_m4FE7724154AEF156C33C717C3926BDFFB4765CE8 (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m30896EE9F6765AB918312A413BFA0349482C681C(__this, (intptr_t)(0), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_7();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringHandle_ToString_mFD525DD4D087BF349DD515836BFD557459EC21B6 (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = SafeHandle_get_IsClosed_mD81377BB0EE9380CB82B2D846A5F5F7D9A880AD8(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0028;
	}

IL_001a:
	{
		intptr_t L_3 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		String_t* L_4;
		L_4 = Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0028;
	}

IL_0028:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8StringHandle_get_IsInvalid_m940B3EDA6BBB4EC7FD9DF81B8D30D2E8802EDA0A (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8StringHandle_ReleaseHandle_m5EDA9854A5457B311AFB282B1238EC36A7344A5E (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B *)__this)->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mC556D1077E92ACD2AC3FDEF3040B88FAC0F7F390((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		V_1 = (bool)1;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8StringHandle__cctor_mDE8139C4E47E3D5C1ECE938B88D17FB0AC38169F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * L_0 = (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C *)il2cpp_codegen_object_new(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var);
		Utf8StringHandle__ctor_m4FE7724154AEF156C33C717C3926BDFFB4765CE8(L_0, /*hidden argument*/NULL);
		((Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_StaticFields*)il2cpp_codegen_static_fields_for(Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C_il2cpp_TypeInfo_var))->set_Null_6(L_0);
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
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350 (intptr_t ___native0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_3;
		goto IL_007b;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0023:
	{
		intptr_t L_5 = ___native0;
		int32_t L_6 = V_0;
		intptr_t L_7;
		L_7 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		uint8_t L_8;
		L_8 = Marshal_ReadByte_m9C2A5414C70F6D09ABF46D6A6277D40D0126BB80((intptr_t)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B7_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)4194304)))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B7_0 = 0;
	}

IL_003c:
	{
		V_3 = (bool)G_B7_0;
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_11 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)((int32_t)4194304)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13;
		L_13 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		int32_t L_14 = ((int32_t)4194304);
		RuntimeObject * L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Format_m65D1D384B19FD8F7BD8BC71EE2B75E00488853DB(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CC1A826990E4F55C0AF3E80A72DC2D9003B1658)), L_15, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_17 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350_RuntimeMethod_var)));
	}

IL_0071:
	{
		intptr_t L_18 = ___native0;
		int32_t L_19 = V_0;
		String_t* L_20;
		L_20 = Utf8StringMarshaler_MarshalNativeToManaged_mCD30E546EC53D5843BA0116D1F3BF3A4AB286A5C((intptr_t)L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_21 = V_2;
		return L_21;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mCD30E546EC53D5843BA0116D1F3BF3A4AB286A5C (intptr_t ___native0, int32_t ___lengthInBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		intptr_t L_0 = ___native0;
		bool L_1;
		L_1 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (String_t*)NULL;
		goto IL_0045;
	}

IL_0015:
	{
		int32_t L_3 = ___lengthInBytes1;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_5;
		goto IL_0045;
	}

IL_0026:
	{
		int32_t L_6 = ___lengthInBytes1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		intptr_t L_8 = ___native0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_0;
		int32_t L_10 = ___lengthInBytes1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716((intptr_t)L_8, L_9, 0, L_10, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11;
		L_11 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_11, L_12);
		V_2 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_14 = V_2;
		return L_14;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05 (String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		intptr_t L_1;
		L_1 = Utf8StringMarshaler_MarshalManagedToNative_m66D4FA7339E9A5614B5CDAD7566BC204B6012231(L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_1;
		goto IL_000c;
	}

IL_000c:
	{
		intptr_t L_2 = V_1;
		return (intptr_t)L_2;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m66D4FA7339E9A5614B5CDAD7566BC204B6012231 (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___str0;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_2 = ___length1;
		*((int32_t*)L_2) = (int32_t)0;
		V_3 = (intptr_t)(0);
		goto IL_0050;
	}

IL_0015:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		String_t* L_4 = ___str0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		V_0 = L_5;
		int32_t* L_6 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		NullCheck(L_7);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)1));
		int32_t* L_8 = ___length1;
		int32_t L_9 = *((int32_t*)L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_10;
		L_10 = Marshal_AllocHGlobal_mB339DD0B9D5778400B8CA9BA45169C9C1C14835D(L_9, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		intptr_t L_12 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_0;
		NullCheck(L_13);
		Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731(L_11, 0, (intptr_t)L_12, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/NULL);
		intptr_t L_14 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_0;
		NullCheck(L_15);
		intptr_t L_16;
		L_16 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_14, ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), /*hidden argument*/NULL);
		Marshal_WriteByte_m2D3E96B7599CE41E3E61CDEB15125D63C8814890((intptr_t)L_16, (uint8_t)0, /*hidden argument*/NULL);
		intptr_t L_17 = V_1;
		V_3 = (intptr_t)L_17;
		goto IL_0050;
	}

IL_0050:
	{
		intptr_t L_18 = V_3;
		return (intptr_t)L_18;
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m2702E96893F81AC86A4CA3CC87DB1B16957A6F39 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = VirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetRecognizerFromConfigDelegate_BeginInvoke_m854AF865071E7DA771FE6CADEACCE24A01F2CD4D (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___speechconfig1, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___audioInput2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___phreco0);
	__d_args[1] = ___speechconfig1;
	__d_args[2] = ___audioInput2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_EndInvoke_m92BDCBE8922A4554BFAB9350E9E26003F07435E2 (GetRecognizerFromConfigDelegate_t80E276A34FE64CB8390866B6F01AD450A7307335 * __this, intptr_t* ___phreco0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___phreco0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_mC65F001DAB84BADED6EA18B339BEA78962B978DB(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_mD38F583FAFD30A50547FAA163FBE3C1D466174D4(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m8DE930FC3B770969517CD7A9108BBF434E62E311 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker3< intptr_t, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				if (___parameterCount == 2)
				{
					typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetResultDelegate_BeginInvoke_m742CA617B94FADDD74CD8635FAD801734DB3679B (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, InteropSafeHandle_tE736A853ABEA303189F146D1390BA9CE41A87A1D * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___handle0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___result1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___maxCharCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_EndInvoke_m2263350186806B5265FA56F3A0FF1C27BED622C3 (GetResultDelegate_t94979D7A95D5EF30834ED013F755BFF0231FC3C1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m3727BDA5C26E0220FA7BBE73C9E662774F5F1664_inline (SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6_inline (SessionEventArgs_t8849E6D9319DCDF5382BD6962979C563BFEE1A33 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB_inline (RecognitionEventArgs_tFCCF5520DA73A14ACE8453816CDB09D5FC94F9E5 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC_inline (RecognitionResult_tD00AB2D67927B8F4D6A1317B3AC0AA7909F27DE9 * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E_inline (SpeechRecognitionEventArgs_t2CF02F6CBBDA4E401982CEB5834CB2D4770A4210 * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_tA0D3A2C346E633C7CCCDF208BB89AA3543A138BA * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797_inline (CancellationDetails_t16C1B1DB805C763189509B35E5D2474ACEA97331 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544_inline (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877_inline (SpeechRecognitionCanceledEventArgs_t3020B814B695A07F6F68FE2FDF9B8F09906CC2E0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3_inline (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06_inline (SpeechRecognizer_tF03674EA58B3A572A3E0D97C6BFC1DAAEAABFD7E * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61_inline (TranslationRecognitionEventArgs_tF96226D2AE1D867FE133D2342614F8D501A4CD1D * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_t66127B016918DAE26F5414542434C6211955CFF7 * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28_inline (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C_inline (TranslationRecognitionCanceledEventArgs_tC643DFB62A87BAD9779E3B59A133274EB2F26EE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC_inline (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33_inline (TranslationRecognizer_tB75B00A3E01EB45762CF2C6673CE873E9BA7ADEC * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_tC1C33C2B3348CB3E0E38ED2B05E17FD9AB35A9C9 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327_inline (TranslationSynthesisEventArgs_t08AF02B29E71124BB09E37AA349935F0C6567DD0 * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A_inline (TranslationSynthesisResult_t743295A12FC144FE6225EC14F8EE262EE418D1AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B_inline (Utf8StringHandle_t41A49D5D6945DDA3753E6645C33D80CC3387739C * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_U3CLengthU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Array_Empty_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mF33DA05575571CE93B03D5965B4BE0EEE1586329_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ((EmptyArray_1_tB2402F7A8151EE5618C0BCC8815C169E00142333_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
