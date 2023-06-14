#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7_RuntimeMethod_var;
extern const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0_RuntimeMethod_var;
extern const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8_RuntimeMethod_var;
extern const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
extern void PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16 (void);
// 0x00000002 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
extern void PropertyCollection_Close_mD793419024EB7ACA3C62AB9CEE62ED1FBC44594C (void);
// 0x00000003 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
extern void PropertyCollection_GetProperty_mB46C8DDFC2A6E4E889F19A64652A0088FEBDBC0D (void);
// 0x00000004 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
extern void PropertyCollection_SetProperty_mC57B30BC5A398CB9AAEEC6EFB9BD83582E694287 (void);
// 0x00000005 System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
extern void PropertyCollection_SetProperty_m9077DB9C7197005E2EC319DCDDDB5D2D6A4BB5AD (void);
// 0x00000006 System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
extern void PropertyCollection_GetPropertyString_mE73D236973BA07F7B404F35C923692A0CE8518E4 (void);
// 0x00000007 System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
extern void RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4 (void);
// 0x00000008 System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
extern void RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB (void);
// 0x00000009 System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
extern void RecognitionEventArgs_ToString_mA4E65635E5FC53A671A6D144257CF76DFB7506E6 (void);
// 0x0000000A System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
extern void RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D (void);
// 0x0000000B System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
extern void RecognitionResult_get_ResultId_m915CFF4CBDA1AA8DC7D2835A6DE90D55159FC682 (void);
// 0x0000000C Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
extern void RecognitionResult_get_Reason_m33507B6033662666A64544AD395297C07D4164D2 (void);
// 0x0000000D System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
extern void RecognitionResult_get_Text_mB148DB2F409F87052FA5D0614FC276C3A0469269 (void);
// 0x0000000E Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
extern void RecognitionResult_get_Properties_m339B52BE65A58DDE9C7AFBF62B887756D797A716 (void);
// 0x0000000F System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC (void);
// 0x00000010 System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
extern void RecognitionResult_ToString_m14FEF4EDC43FC4AC2D290A71740267C3D9291C00 (void);
// 0x00000011 Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889 (void);
// 0x00000012 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
extern void CancellationDetails__ctor_m13B844B20E71FFA2B106A0779178F21D1704AAF7 (void);
// 0x00000013 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
extern void CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234 (void);
// 0x00000014 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
extern void CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29 (void);
// 0x00000015 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
extern void CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797 (void);
// 0x00000016 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
extern void CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6 (void);
// 0x00000017 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
extern void CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1 (void);
// 0x00000018 System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
extern void CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8 (void);
// 0x00000019 System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
extern void CancellationDetails_ToString_mC336C2D271AD3AEE4A7C25EC0B54A41F4AE5EB98 (void);
// 0x0000001A System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStarted_mB51AF13DAE963482434F9AA4792BDF56AB25B2A6 (void);
// 0x0000001B System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStarted_mD30F07BD548E173B2ADFEFBE44890C5977DAE3E2 (void);
// 0x0000001C System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add__SessionStopped_m4CABF899344965E03F2F7410C351F29DE540667F (void);
// 0x0000001D System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove__SessionStopped_m91D3B927165E65B4AE83158F430B914AF2ED8920 (void);
// 0x0000001E System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechStartDetected_mFA7AB4FAA5C7E2846ED2AF76931D6FFD6368D1C0 (void);
// 0x0000001F System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechStartDetected_mE65E4F9ECE818C560D6921070EBFE611AE2D04F8 (void);
// 0x00000020 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add__SpeechEndDetected_m9C768EE246FFA134BD2A337FE0F8B83604C60DA9 (void);
// 0x00000021 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove__SpeechEndDetected_m778852C242125F896C30E4C6C3849012E9FD7621 (void);
// 0x00000022 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStarted_m20452C2B11AD486350699680D32877EF135EF81E (void);
// 0x00000023 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStarted_mCA0981C5C130D0448E68FE3AD5E1DE30C2CB2581 (void);
// 0x00000024 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_add_SessionStopped_m72BFF1ED1ABE73BF456D303E9338380AE218861A (void);
// 0x00000025 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
extern void Recognizer_remove_SessionStopped_m2185AA922564D7151E25DBD43D78DA415771E834 (void);
// 0x00000026 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechStartDetected_m56062E88C92AF457EA6E57417E133D938C354206 (void);
// 0x00000027 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechStartDetected_m2EF0884129072F7D5520763B643866986D2EB428 (void);
// 0x00000028 System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_add_SpeechEndDetected_m925EFEA65ED974DE068B4DA042FC368A396DF4FB (void);
// 0x00000029 System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
extern void Recognizer_remove_SpeechEndDetected_mAD9D4DDF76199AE46BE8EF9E369AB178D65C817D (void);
// 0x0000002A System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095 (void);
// 0x0000002B System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
extern void Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F (void);
// 0x0000002C System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
extern void Recognizer_Dispose_m0102FDEC834EB0B2A276EBA67002DAA6B7291036 (void);
// 0x0000002D System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
extern void Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC (void);
// 0x0000002E System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0 (void);
// 0x0000002F System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6 (void);
// 0x00000030 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83 (void);
// 0x00000031 System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7 (void);
// 0x00000032 System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
extern void Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F (void);
// 0x00000033 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
extern void Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952 (void);
// 0x00000034 System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
extern void Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E (void);
// 0x00000035 Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48 (void);
// 0x00000036 System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
extern void GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F (void);
// 0x00000037 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void GetRecognizerFromConfigDelegate_Invoke_m2702E96893F81AC86A4CA3CC87DB1B16957A6F39 (void);
// 0x00000038 System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
extern void GetRecognizerFromConfigDelegate_BeginInvoke_m854AF865071E7DA771FE6CADEACCE24A01F2CD4D (void);
// 0x00000039 System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
extern void GetRecognizerFromConfigDelegate_EndInvoke_m92BDCBE8922A4554BFAB9350E9E26003F07435E2 (void);
// 0x0000003A System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
extern void SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE (void);
// 0x0000003B System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
extern void SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6 (void);
// 0x0000003C System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
extern void SessionEventArgs_ToString_m0050DECB0EBB10E19BA62244433F38E906185002 (void);
// 0x0000003D System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
extern void SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218 (void);
// 0x0000003E Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
extern void SpeechConfig_FromSubscription_m4DBE1634A3F8F32FC950537873ABE7A12DC244CE (void);
// 0x0000003F System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
extern void SpeechConfig_set_SpeechRecognitionLanguage_m80AA156A0161A5C4D741108B52CED971BD21C149 (void);
// 0x00000040 System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
extern void SpeechConfig_SetProperty_m0343E117564BF65434D42D18A14F1181B0A3F26A (void);
// 0x00000041 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
extern void SpeechRecognitionResult__ctor_mFBCDCEC02A1772569BEE43A910AAD8581D23DB91 (void);
// 0x00000042 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A (void);
// 0x00000043 Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
extern void SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E (void);
// 0x00000044 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
extern void SpeechRecognitionEventArgs_ToString_m309DF39103EA63927A1294ABECCA3A00DDA709A3 (void);
// 0x00000045 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void SpeechRecognitionCanceledEventArgs__ctor_m20C5296ECFA87A58E4076D6C1C7869E26A2E6251 (void);
// 0x00000046 Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
extern void SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544 (void);
// 0x00000047 Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
extern void SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877 (void);
// 0x00000048 System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
extern void SpeechRecognitionCanceledEventArgs_ToString_m2208DDBBDF5DA96FDCB7FAC425537F2ED614B6EC (void);
// 0x00000049 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognizing_m3B1002094306793DAC89EA518CF3CF41EAB5CF53 (void);
// 0x0000004A System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognizing_m6E364B7F5C809434CB074CECE7E15363960FA0E4 (void);
// 0x0000004B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add__Recognized_mB16B2627C7EC9358785C45F43B43B96821CBE3B9 (void);
// 0x0000004C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove__Recognized_mEFAD10146DFD2FBF3A41F4A77120DC470A4F15A8 (void);
// 0x0000004D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add__Canceled_m6B869F81EDC6097632FC76CB2E5F4F7216720281 (void);
// 0x0000004E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove__Canceled_mA85E0EA8F11F8855B5EB6F057202E846E45369EA (void);
// 0x0000004F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognizing_mA0FC8B4E2AF88DB6B24BBCF989B1B18AB07CE177 (void);
// 0x00000050 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognizing_mCB11534D510F0ABDAD02ECB810D074981FC7D232 (void);
// 0x00000051 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_add_Recognized_m2846E50B598DF8E1214C19D21EC1BD1B36099ACF (void);
// 0x00000052 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
extern void SpeechRecognizer_remove_Recognized_mFFD94D676138DECD9849860624103C2ACD696620 (void);
// 0x00000053 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_add_Canceled_m04F7761EEF99D67A7E80182D9496BBE884453F11 (void);
// 0x00000054 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
extern void SpeechRecognizer_remove_Canceled_mD1B228A88DCC8DD1B2DE6BE4B259695A6950EBC9 (void);
// 0x00000055 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
extern void SpeechRecognizer__ctor_m225021C6ED7191504492906319FF3EE5C85E4755 (void);
// 0x00000056 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpeechRecognizer__ctor_mD8D1E0C50CE3BD09DB5CB89DB5AF1E5BC6C92130 (void);
// 0x00000057 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
extern void SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06 (void);
// 0x00000058 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3 (void);
// 0x00000059 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
extern void SpeechRecognizer_StartContinuousRecognitionAsync_m1B30FC1A71CB316ADFA4E6A64F78CCCF5CC06ADF (void);
// 0x0000005A System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
extern void SpeechRecognizer_StopContinuousRecognitionAsync_m0F5549E0B97873692C02C8974AFCAC6CA8F13628 (void);
// 0x0000005B System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
extern void SpeechRecognizer_Finalize_mB374A73D338B6F14B3E67FE11DCAA4F3A1668E3E (void);
// 0x0000005C System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
extern void SpeechRecognizer_Dispose_mC30A7439662E0696EB690A3C7E25360EE55F955C (void);
// 0x0000005D System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761 (void);
// 0x0000005E System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0 (void);
// 0x0000005F System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6 (void);
// 0x00000060 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__52_0()
extern void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14 (void);
// 0x00000061 System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__53_0()
extern void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2 (void);
// 0x00000062 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
extern void SpeechTranslationConfig__ctor_m1F8968787AE5DC4C1797C7BF824F938E48CB9E59 (void);
// 0x00000063 Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
extern void SpeechTranslationConfig_FromSubscription_mC93F8A57661AF5D8FAFDB59BB07A8C9B1CD8ADD0 (void);
// 0x00000064 System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
extern void SpeechTranslationConfig_AddTargetLanguage_m3DB94368666228EC479A106DF14BD74E5E110284 (void);
// 0x00000065 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
extern void TranslationRecognitionResult__ctor_m5812765FB155E9EBDA6AF0A34325C6A0EEA53FA3 (void);
// 0x00000066 System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
extern void TranslationRecognitionResult_get_Translations_m12ECEE6B410CE3B59471CA921EEFCC536FDEABEA (void);
// 0x00000067 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
extern void TranslationRecognitionResult_ToString_m8CFFF6195AD90FCECCA1D0A7A21AB0FC87404455 (void);
// 0x00000068 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
extern void TranslationRecognitionResult_GetTranslationTexts_m7DDE0276B1C0117AE493382A805E3B74774B25F4 (void);
// 0x00000069 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognizing_m3C4B4BC28C6DE51D11A82CF5818D8A158F0CC6A3 (void);
// 0x0000006A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognizing_m98DBCAA8767F5899D9B74A18D8E206E7E500B47D (void);
// 0x0000006B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add__Recognized_mE297B0F6067FA3E8FDFAB360566BDAAD0ED2A08B (void);
// 0x0000006C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove__Recognized_m855309B9D3CCEE2D8A726A8239B9F6C2D17C4E59 (void);
// 0x0000006D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add__Canceled_m5D0FAB1063EDD80A398B12FDCF9762D77A12F05A (void);
// 0x0000006E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove__Canceled_m7034C257BB657023953A5B9FE9B960B3C5BBED22 (void);
// 0x0000006F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognizing_m7D39C4E9BCC44A41944EC888689547D38DDB0C26 (void);
// 0x00000070 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognizing_m27E12992D0F0744D8FFA011FDC12C5D97714F4AB (void);
// 0x00000071 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_add_Recognized_mC9F2F468A5E601F5FB3E58E603DA8F5007AC0D12 (void);
// 0x00000072 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
extern void TranslationRecognizer_remove_Recognized_m8D44FEBFFE7848B4C025887E3C88BB7B4AB810F8 (void);
// 0x00000073 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_add_Canceled_mFB5CBD8AA7DE6DB176BF315269FA095CC77268B0 (void);
// 0x00000074 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
extern void TranslationRecognizer_remove_Canceled_m4B1C95E7AA02D3EA5657E9843895A3B0FD1CB581 (void);
// 0x00000075 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
extern void TranslationRecognizer__ctor_m02D7A2E3788CC501FE8D4FEC5D4084FD6A8D9EDD (void);
// 0x00000076 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationRecognizer__ctor_mBE738732382A4AF470048C69FDEA123824AEAE7E (void);
// 0x00000077 Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
extern void TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33 (void);
// 0x00000078 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
extern void TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC (void);
// 0x00000079 System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
extern void TranslationRecognizer_StartContinuousRecognitionAsync_mA084AB62A6EBA0B07BB328289C39C90C2CBCA3A1 (void);
// 0x0000007A System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
extern void TranslationRecognizer_StopContinuousRecognitionAsync_mF63D6A77759DC514E252A9A3BDAA3E122D9431AA (void);
// 0x0000007B System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
extern void TranslationRecognizer_Finalize_m2184E8E230C6A2427CC4A728AEE6C273A1EC9575 (void);
// 0x0000007C System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
extern void TranslationRecognizer_Dispose_mD25FF49087ACE034339817AC845CDF7AE7D03AA3 (void);
// 0x0000007D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8 (void);
// 0x0000007E System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D (void);
// 0x0000007F System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D (void);
// 0x00000080 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
extern void TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D (void);
// 0x00000081 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__45_0()
extern void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF (void);
// 0x00000082 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__46_0()
extern void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3 (void);
// 0x00000083 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
extern void TranslationSynthesisResult__ctor_mB0B22C703623E1B5B61531197D9D1A29E3A77E7E (void);
// 0x00000084 Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
extern void TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A (void);
// 0x00000085 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
extern void TranslationSynthesisResult_ToString_m1AA32514309BCCACC1F742CBE3DEB6F338248383 (void);
// 0x00000086 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void TranslationSynthesisResult_GetAudioData_m6C03D58F707C22D0C7369A78BD9B5091306EB6BF (void);
// 0x00000087 System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
extern void TranslationSynthesisEventArgs__ctor_m7C2E636717FBAABA106F5EE32C4C9BDF21E59769 (void);
// 0x00000088 Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
extern void TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327 (void);
// 0x00000089 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
extern void TranslationSynthesisEventArgs_ToString_m0444E470A70689EB92906F62FEF6EC7E0AA9BC37 (void);
// 0x0000008A System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097 (void);
// 0x0000008B Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
extern void TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61 (void);
// 0x0000008C System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
extern void TranslationRecognitionEventArgs_ToString_mFACC9F0F2415EB7AE4789A22D9B935EE17719FD7 (void);
// 0x0000008D System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
extern void TranslationRecognitionCanceledEventArgs__ctor_m3D97148E711B9CBDC43DE2F620144D076553EBE3 (void);
// 0x0000008E Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
extern void TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28 (void);
// 0x0000008F Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
extern void TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C (void);
// 0x00000090 System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
extern void TranslationRecognitionCanceledEventArgs_ToString_m919DFF681E3D819FEE6B6DDB7910D0847E0008FA (void);
// 0x00000091 System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
extern void Diagnostics_Args_mCDBBF96E237A2CAF455FF73C1C94D49F30D77A6E (void);
// 0x00000092 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C (void);
// 0x00000093 System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
extern void Diagnostics_SPX_TRACE_VERBOSE_mE1FF0AF8DD907A84172DF96CE725219027E966B6 (void);
// 0x00000094 System.Void Microsoft.CognitiveServices.Speech.Internal.DotNetFrameworkAnyCpuSupport::Initialize()
extern void DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097 (void);
// 0x00000095 System.Void Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::.cctor()
extern void CancellationDetails__cctor_m54158D73A871604F8C6956D8A006A76DC5AC0656 (void);
// 0x00000096 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
extern void CancellationDetails_result_get_reason_canceled_m33845CD15561E068A51326C8ECDB2E9D96C3147B (void);
// 0x00000097 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
extern void CancellationDetails_result_get_canceled_error_code_m1CAF11693039C29F8B99CF03FC987B79FEE02512 (void);
// 0x00000098 System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::.cctor()
extern void SpeechConfig__cctor_m63E83D716E1E30B2017164775353D11368D9B44B (void);
// 0x00000099 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechConfig_speech_config_from_subscription_mD0DEE32DBA5522798E980C672D9A3A83ED2A92AC (void);
// 0x0000009A System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
extern void SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5 (void);
// 0x0000009B System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void SpeechConfig_speech_config_get_property_bag_mE8DBDC6A1A6CF503CE40BFE269C6E9F374EC5440 (void);
// 0x0000009C System.Void Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::.cctor()
extern void SpeechTranslationConfig__cctor_m95E536F0DF83447217C469AEE4040C7C815F0494 (void);
// 0x0000009D System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
extern void SpeechTranslationConfig_speech_translation_config_from_subscription_mF89C55819C6323C3C289F2413DBAB4DB8CE25CAA (void);
// 0x0000009E System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
extern void SpeechTranslationConfig_speech_translation_config_add_target_language_m6860252786A03225DDB897D7D3BA543C7D728F56 (void);
// 0x0000009F System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::.cctor()
extern void DiagnosticsInterop__cctor_m98EEE43B710033456FD6F3BE38EF7A150C31A367 (void);
// 0x000000A0 System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
extern void DiagnosticsInterop_diagnostics_log_trace_string_m3C93FB7E7A1CA75D6A198492BF6F7A63F04069CB (void);
// 0x000000A1 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
extern void SpxError__cctor_m48FE47FF7BDDD82E4C165CB95C5B76CA950A826A (void);
// 0x000000A2 System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
extern void SpxError_GetMessage_m8F5CCD9E83354AA83663732824933705D84B8E37 (void);
// 0x000000A3 System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
extern void SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0 (void);
// 0x000000A4 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
extern void SpxError_Release_mDDDA1AF9C3C4F347D2A8D3BED15A534C21F5678E (void);
// 0x000000A5 System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
extern void SpxError_ReleaseNoThrow_mF63EFCD66ADE238A052501F9898A29E827C9D363 (void);
// 0x000000A6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
extern void SpxError_error_get_message_m1DA6555D54DCF635C8E52156C1074BCA67A3E239 (void);
// 0x000000A7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
extern void SpxError_error_get_error_code_m01B8458EEF708586124D197AB41670CC2A0A2104 (void);
// 0x000000A8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
extern void SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA (void);
// 0x000000A9 System.Void Microsoft.CognitiveServices.Speech.Internal.EventArgs::.cctor()
extern void EventArgs__cctor_mE78595AA6FFBC4FF1D68705351D96EE36736338C (void);
// 0x000000AA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
extern void EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F (void);
// 0x000000AB System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_m8AB265D671FFDC9DF4566FBBF57680D37119A173 (void);
// 0x000000AC System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
extern void HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608 (void);
// 0x000000AD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
extern void HandleRelease_Invoke_mE17F556505A2581D84BA5FFAE7AA3FA165E2A180 (void);
// 0x000000AE System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void HandleRelease_BeginInvoke_m5E792C418FEA5C04A6C45EC2D9CDAF5AB26485BC (void);
// 0x000000AF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
extern void HandleRelease_EndInvoke_m964A00E7DE88BFC32DA8082A56FF8B78B636F9A9 (void);
// 0x000000B0 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
extern void InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB (void);
// 0x000000B1 System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
extern void InteropSafeHandle_get_IsInvalid_mDE26E49246A7776ED8DF14FFB46555EB3791498F (void);
// 0x000000B2 System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
extern void InteropSafeHandle_ReleaseHandle_mA3454874F14CD3E6D2DFEC541D7ADC7C8D308C9B (void);
// 0x000000B3 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
extern void InteropSafeHandle_Dispose_m0C33AEB59BEB46CCDDB71A43B29FDB950AD8F132 (void);
// 0x000000B4 T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle(System.IntPtr)
// 0x000000B5 System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
extern void InteropSafeHandle_ToString_m128BFF870D6CD9E8009EBFD3B75F52BA155FB193 (void);
// 0x000000B6 System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
extern void InteropSafeHandle_Finalize_m4C027A992BD510065C15773F862DCD1AEF6E03B7 (void);
// 0x000000B7 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory::.cctor()
extern void SpxFactory__cctor_mF9F36B1F0B7DA0F13A10D1DA9639A1CD17151D11 (void);
// 0x000000B8 System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
extern void SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022 (void);
// 0x000000B9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5 (void);
// 0x000000BA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695 (void);
// 0x000000BB System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
extern void GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782 (void);
// 0x000000BC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void GetResultDelegate_Invoke_m8DE930FC3B770969517CD7A9108BBF434E62E311 (void);
// 0x000000BD System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern void GetResultDelegate_BeginInvoke_m742CA617B94FADDD74CD8635FAD801734DB3679B (void);
// 0x000000BE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::EndInvoke(System.IAsyncResult)
extern void GetResultDelegate_EndInvoke_m2263350186806B5265FA56F3A0FF1C27BED622C3 (void);
// 0x000000BF System.Void Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::.cctor()
extern void PropertyCollection__cctor_m2C6E4327FDB27261CCF1246637EDC2CFC6B44101 (void);
// 0x000000C0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467 (void);
// 0x000000C1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
extern void PropertyCollection_property_bag_get_string_m818B5A22A89856142C1149F68B29C06AE3DEE53E (void);
// 0x000000C2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
extern void PropertyCollection_property_bag_free_string_mE57DA048ED235338BE887E576C5DC562C7B53C77 (void);
// 0x000000C3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
extern void PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A (void);
// 0x000000C4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
extern void RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C (void);
// 0x000000C5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9 (void);
// 0x000000C6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568 (void);
// 0x000000C7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void RecognitionResult_result_get_property_bag_m8785C37DBE2AA60386232A5AB59B5DE34B3ED096 (void);
// 0x000000C8 System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
extern void RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB (void);
// 0x000000C9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
extern void RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD (void);
// 0x000000CA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_count(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr&)
extern void RecognitionResult_translation_text_result_get_translation_count_m97936E19E9F9ED8E67F852A2F4ED0D4834818789 (void);
// 0x000000CB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UIntPtr,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle,System.UIntPtr&,System.UIntPtr&)
extern void RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F (void);
// 0x000000CC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
extern void RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF (void);
// 0x000000CD System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
extern void CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3 (void);
// 0x000000CE System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CallbackFunctionDelegate_Invoke_m6A5AFAFAEB7C9E8215273EBBC585CCD49FA56E5E (void);
// 0x000000CF System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CallbackFunctionDelegate_BeginInvoke_m045ED9128899AB8653FFFE4302165596A2606F2C (void);
// 0x000000D0 System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
extern void CallbackFunctionDelegate_EndInvoke_m634677D6687588EC6726851A3C77A6D7A7AC3BA8 (void);
// 0x000000D1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF (void);
// 0x000000D2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
extern void Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571 (void);
// 0x000000D3 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_start_continuous_recognition_async_m64B1B19F379EA6A0BE20E374AF03B2BE2161B1F5 (void);
// 0x000000D4 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_start_continuous_recognition_async_wait_for_mCCCEF624CBF0A3A9086FBAC2F5EFD706FA474C45 (void);
// 0x000000D5 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_stop_continuous_recognition_async_mA71C1B9B432CA57177A19527C2B77D89F0358853 (void);
// 0x000000D6 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m8292C0C75C5AC4B53B05565881E97C8A9FC43AE5 (void);
// 0x000000D7 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
extern void Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4 (void);
// 0x000000D8 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
extern void Recognizer_recognizer_recognition_event_get_offset_m88444A5A2BA7D9AEE9CDA1002B5A3940BD6231DB (void);
// 0x000000D9 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
extern void Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143 (void);
// 0x000000DA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
extern void Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15 (void);
// 0x000000DB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1 (void);
// 0x000000DC System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04 (void);
// 0x000000DD System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5 (void);
// 0x000000DE System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07 (void);
// 0x000000DF System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F (void);
// 0x000000E0 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97 (void);
// 0x000000E1 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0 (void);
// 0x000000E2 System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
extern void Recognizer_translator_synthesizing_audio_set_callback_mC3D7B7C3F0846CC09358F18309D027188F7B63AB (void);
// 0x000000E3 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
extern void SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A (void);
// 0x000000E4 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
extern void SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB (void);
// 0x000000E5 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
extern void SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554 (void);
// 0x000000E6 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
extern void SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1 (void);
// 0x000000E7 System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
extern void SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4 (void);
// 0x000000E8 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350 (void);
// 0x000000E9 System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr,System.Int32)
extern void Utf8StringMarshaler_MarshalNativeToManaged_mCD30E546EC53D5843BA0116D1F3BF3A4AB286A5C (void);
// 0x000000EA System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
extern void Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05 (void);
// 0x000000EB System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
extern void Utf8StringMarshaler_MarshalManagedToNative_m66D4FA7339E9A5614B5CDAD7566BC204B6012231 (void);
// 0x000000EC System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor(System.UInt32)
extern void Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB (void);
// 0x000000ED System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.ctor()
extern void Utf8StringHandle__ctor_m4FE7724154AEF156C33C717C3926BDFFB4765CE8 (void);
// 0x000000EE System.UInt32 Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_Length()
extern void Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B (void);
// 0x000000EF System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ToString()
extern void Utf8StringHandle_ToString_mFD525DD4D087BF349DD515836BFD557459EC21B6 (void);
// 0x000000F0 System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::get_IsInvalid()
extern void Utf8StringHandle_get_IsInvalid_m940B3EDA6BBB4EC7FD9DF81B8D30D2E8802EDA0A (void);
// 0x000000F1 System.Boolean Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::ReleaseHandle()
extern void Utf8StringHandle_ReleaseHandle_m5EDA9854A5457B311AFB282B1238EC36A7344A5E (void);
// 0x000000F2 System.Void Microsoft.CognitiveServices.Speech.Internal.Utf8StringHandle::.cctor()
extern void Utf8StringHandle__cctor_mDE8139C4E47E3D5C1ECE938B88D17FB0AC38169F (void);
static Il2CppMethodPointer s_methodPointers[242] = 
{
	PropertyCollection__ctor_m934358D1B2B8D04C7BA5BD4AEAF1AFA4D55FDD16,
	PropertyCollection_Close_mD793419024EB7ACA3C62AB9CEE62ED1FBC44594C,
	PropertyCollection_GetProperty_mB46C8DDFC2A6E4E889F19A64652A0088FEBDBC0D,
	PropertyCollection_SetProperty_mC57B30BC5A398CB9AAEEC6EFB9BD83582E694287,
	PropertyCollection_SetProperty_m9077DB9C7197005E2EC319DCDDDB5D2D6A4BB5AD,
	PropertyCollection_GetPropertyString_mE73D236973BA07F7B404F35C923692A0CE8518E4,
	RecognitionEventArgs__ctor_mF97CBB7823218330FD1509B422D482DB9667C4F4,
	RecognitionEventArgs_get_Offset_m2FE83FC6E52EC6167370A8F3611C2BDE9142B9CB,
	RecognitionEventArgs_ToString_mA4E65635E5FC53A671A6D144257CF76DFB7506E6,
	RecognitionResult__ctor_m6596E3292B01FDF98E8D375C8A6CDD1F62152F9D,
	RecognitionResult_get_ResultId_m915CFF4CBDA1AA8DC7D2835A6DE90D55159FC682,
	RecognitionResult_get_Reason_m33507B6033662666A64544AD395297C07D4164D2,
	RecognitionResult_get_Text_mB148DB2F409F87052FA5D0614FC276C3A0469269,
	RecognitionResult_get_Properties_m339B52BE65A58DDE9C7AFBF62B887756D797A716,
	RecognitionResult_set_Properties_m11A837B8552A8C79C1175C204219A33B34185BCC,
	RecognitionResult_ToString_m14FEF4EDC43FC4AC2D290A71740267C3D9291C00,
	CancellationDetails_FromResult_mB0898D86FF88DAD1E41365DFA3511A52F37BE889,
	CancellationDetails__ctor_m13B844B20E71FFA2B106A0779178F21D1704AAF7,
	CancellationDetails_get_Reason_mC05DF8B39314B9E72D68CC52943C9212E071C234,
	CancellationDetails_set_Reason_m77B89790A7F18380A49B26B0C0F35A8D291FDB29,
	CancellationDetails_get_ErrorCode_mD2FBEB0CC845B821CB9F29B9A33967C47B570797,
	CancellationDetails_set_ErrorCode_mD9F7CFDD29B8C32AE8695E7D81C070E3681610F6,
	CancellationDetails_get_ErrorDetails_m8016F68E6666CAB7AC5187FB8B1E24799779A2E1,
	CancellationDetails_set_ErrorDetails_m7E3E03BC3D44539672C61C1191D8389E85A93EB8,
	CancellationDetails_ToString_mC336C2D271AD3AEE4A7C25EC0B54A41F4AE5EB98,
	Recognizer_add__SessionStarted_mB51AF13DAE963482434F9AA4792BDF56AB25B2A6,
	Recognizer_remove__SessionStarted_mD30F07BD548E173B2ADFEFBE44890C5977DAE3E2,
	Recognizer_add__SessionStopped_m4CABF899344965E03F2F7410C351F29DE540667F,
	Recognizer_remove__SessionStopped_m91D3B927165E65B4AE83158F430B914AF2ED8920,
	Recognizer_add__SpeechStartDetected_mFA7AB4FAA5C7E2846ED2AF76931D6FFD6368D1C0,
	Recognizer_remove__SpeechStartDetected_mE65E4F9ECE818C560D6921070EBFE611AE2D04F8,
	Recognizer_add__SpeechEndDetected_m9C768EE246FFA134BD2A337FE0F8B83604C60DA9,
	Recognizer_remove__SpeechEndDetected_m778852C242125F896C30E4C6C3849012E9FD7621,
	Recognizer_add_SessionStarted_m20452C2B11AD486350699680D32877EF135EF81E,
	Recognizer_remove_SessionStarted_mCA0981C5C130D0448E68FE3AD5E1DE30C2CB2581,
	Recognizer_add_SessionStopped_m72BFF1ED1ABE73BF456D303E9338380AE218861A,
	Recognizer_remove_SessionStopped_m2185AA922564D7151E25DBD43D78DA415771E834,
	Recognizer_add_SpeechStartDetected_m56062E88C92AF457EA6E57417E133D938C354206,
	Recognizer_remove_SpeechStartDetected_m2EF0884129072F7D5520763B643866986D2EB428,
	Recognizer_add_SpeechEndDetected_m925EFEA65ED974DE068B4DA042FC368A396DF4FB,
	Recognizer_remove_SpeechEndDetected_mAD9D4DDF76199AE46BE8EF9E369AB178D65C817D,
	Recognizer__ctor_m4CF24EAF3D22E3296C4D6F9BD0F10B4FECC21095,
	Recognizer_Finalize_m9B0225ED2E43136455B353B61F7BEB491497647F,
	Recognizer_Dispose_m0102FDEC834EB0B2A276EBA67002DAA6B7291036,
	Recognizer_Dispose_m81C61C96A77B73119F7D763BDF7CC52A42D07BCC,
	Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0,
	Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6,
	Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83,
	Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7,
	Recognizer_DoAsyncRecognitionAction_m356C944C71FE91B4BAF23F8644E5226BC2281A5F,
	Recognizer_StartContinuousRecognition_m6502DC45B3FA7EC1BA7553443EC530A0B9404952,
	Recognizer_StopContinuousRecognition_m3081F91831C28C5A252368C082A36D6F18D95F1E,
	Recognizer_FromConfig_m624A641BDC7E82D31AF63F672B1C5AD473576F48,
	GetRecognizerFromConfigDelegate__ctor_mF3BA936C260F6BAB5DB2ADEADCB2A1E7773D902F,
	GetRecognizerFromConfigDelegate_Invoke_m2702E96893F81AC86A4CA3CC87DB1B16957A6F39,
	GetRecognizerFromConfigDelegate_BeginInvoke_m854AF865071E7DA771FE6CADEACCE24A01F2CD4D,
	GetRecognizerFromConfigDelegate_EndInvoke_m92BDCBE8922A4554BFAB9350E9E26003F07435E2,
	SessionEventArgs__ctor_m95F99F2A12399E946D28791D89D5B9B171DF44CE,
	SessionEventArgs_get_SessionId_m1D765241B1B3CB6A50FF908CCF2D71E29F3317C6,
	SessionEventArgs_ToString_m0050DECB0EBB10E19BA62244433F38E906185002,
	SpeechConfig__ctor_m92E762B3564DA45D7CE16D13448C1A0F8F9DD218,
	SpeechConfig_FromSubscription_m4DBE1634A3F8F32FC950537873ABE7A12DC244CE,
	SpeechConfig_set_SpeechRecognitionLanguage_m80AA156A0161A5C4D741108B52CED971BD21C149,
	SpeechConfig_SetProperty_m0343E117564BF65434D42D18A14F1181B0A3F26A,
	SpeechRecognitionResult__ctor_mFBCDCEC02A1772569BEE43A910AAD8581D23DB91,
	SpeechRecognitionEventArgs__ctor_mF101A870572927EF44D1218A623AFDAE7FD2007A,
	SpeechRecognitionEventArgs_get_Result_m75DAC6080968DBC3699741A5D109AA9DAE83AD2E,
	SpeechRecognitionEventArgs_ToString_m309DF39103EA63927A1294ABECCA3A00DDA709A3,
	SpeechRecognitionCanceledEventArgs__ctor_m20C5296ECFA87A58E4076D6C1C7869E26A2E6251,
	SpeechRecognitionCanceledEventArgs_get_Reason_m4F827102F7B232357434FC2485B86FA864611544,
	SpeechRecognitionCanceledEventArgs_get_ErrorCode_m15B6B7CC814C1F8E56EC33FC7C10F9BB626D0877,
	SpeechRecognitionCanceledEventArgs_ToString_m2208DDBBDF5DA96FDCB7FAC425537F2ED614B6EC,
	SpeechRecognizer_add__Recognizing_m3B1002094306793DAC89EA518CF3CF41EAB5CF53,
	SpeechRecognizer_remove__Recognizing_m6E364B7F5C809434CB074CECE7E15363960FA0E4,
	SpeechRecognizer_add__Recognized_mB16B2627C7EC9358785C45F43B43B96821CBE3B9,
	SpeechRecognizer_remove__Recognized_mEFAD10146DFD2FBF3A41F4A77120DC470A4F15A8,
	SpeechRecognizer_add__Canceled_m6B869F81EDC6097632FC76CB2E5F4F7216720281,
	SpeechRecognizer_remove__Canceled_mA85E0EA8F11F8855B5EB6F057202E846E45369EA,
	SpeechRecognizer_add_Recognizing_mA0FC8B4E2AF88DB6B24BBCF989B1B18AB07CE177,
	SpeechRecognizer_remove_Recognizing_mCB11534D510F0ABDAD02ECB810D074981FC7D232,
	SpeechRecognizer_add_Recognized_m2846E50B598DF8E1214C19D21EC1BD1B36099ACF,
	SpeechRecognizer_remove_Recognized_mFFD94D676138DECD9849860624103C2ACD696620,
	SpeechRecognizer_add_Canceled_m04F7761EEF99D67A7E80182D9496BBE884453F11,
	SpeechRecognizer_remove_Canceled_mD1B228A88DCC8DD1B2DE6BE4B259695A6950EBC9,
	SpeechRecognizer__ctor_m225021C6ED7191504492906319FF3EE5C85E4755,
	SpeechRecognizer__ctor_mD8D1E0C50CE3BD09DB5CB89DB5AF1E5BC6C92130,
	SpeechRecognizer_get_Properties_mF11757D02F089D42245C9467ED7867CA72EF0F06,
	SpeechRecognizer_set_Properties_mC44814F40CF7AB23C51436D9BF19217ECC0291C3,
	SpeechRecognizer_StartContinuousRecognitionAsync_m1B30FC1A71CB316ADFA4E6A64F78CCCF5CC06ADF,
	SpeechRecognizer_StopContinuousRecognitionAsync_m0F5549E0B97873692C02C8974AFCAC6CA8F13628,
	SpeechRecognizer_Finalize_mB374A73D338B6F14B3E67FE11DCAA4F3A1668E3E,
	SpeechRecognizer_Dispose_mC30A7439662E0696EB690A3C7E25360EE55F955C,
	SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761,
	SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0,
	SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6,
	SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__52_0_m22C5FDB01D4C35E0FC766BD3B17B8017D2BF9A14,
	SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__53_0_m5FAF295D1B483FBAFDD23D29B937860284B151A2,
	SpeechTranslationConfig__ctor_m1F8968787AE5DC4C1797C7BF824F938E48CB9E59,
	SpeechTranslationConfig_FromSubscription_mC93F8A57661AF5D8FAFDB59BB07A8C9B1CD8ADD0,
	SpeechTranslationConfig_AddTargetLanguage_m3DB94368666228EC479A106DF14BD74E5E110284,
	TranslationRecognitionResult__ctor_m5812765FB155E9EBDA6AF0A34325C6A0EEA53FA3,
	TranslationRecognitionResult_get_Translations_m12ECEE6B410CE3B59471CA921EEFCC536FDEABEA,
	TranslationRecognitionResult_ToString_m8CFFF6195AD90FCECCA1D0A7A21AB0FC87404455,
	TranslationRecognitionResult_GetTranslationTexts_m7DDE0276B1C0117AE493382A805E3B74774B25F4,
	TranslationRecognizer_add__Recognizing_m3C4B4BC28C6DE51D11A82CF5818D8A158F0CC6A3,
	TranslationRecognizer_remove__Recognizing_m98DBCAA8767F5899D9B74A18D8E206E7E500B47D,
	TranslationRecognizer_add__Recognized_mE297B0F6067FA3E8FDFAB360566BDAAD0ED2A08B,
	TranslationRecognizer_remove__Recognized_m855309B9D3CCEE2D8A726A8239B9F6C2D17C4E59,
	TranslationRecognizer_add__Canceled_m5D0FAB1063EDD80A398B12FDCF9762D77A12F05A,
	TranslationRecognizer_remove__Canceled_m7034C257BB657023953A5B9FE9B960B3C5BBED22,
	TranslationRecognizer_add_Recognizing_m7D39C4E9BCC44A41944EC888689547D38DDB0C26,
	TranslationRecognizer_remove_Recognizing_m27E12992D0F0744D8FFA011FDC12C5D97714F4AB,
	TranslationRecognizer_add_Recognized_mC9F2F468A5E601F5FB3E58E603DA8F5007AC0D12,
	TranslationRecognizer_remove_Recognized_m8D44FEBFFE7848B4C025887E3C88BB7B4AB810F8,
	TranslationRecognizer_add_Canceled_mFB5CBD8AA7DE6DB176BF315269FA095CC77268B0,
	TranslationRecognizer_remove_Canceled_m4B1C95E7AA02D3EA5657E9843895A3B0FD1CB581,
	TranslationRecognizer__ctor_m02D7A2E3788CC501FE8D4FEC5D4084FD6A8D9EDD,
	TranslationRecognizer__ctor_mBE738732382A4AF470048C69FDEA123824AEAE7E,
	TranslationRecognizer_get_Properties_m6BC8980099CAA0785433CCD7F41D29A4AB29AD33,
	TranslationRecognizer_set_Properties_m8ECEB22B72F6B9FC63C4417639DC4868C667AFBC,
	TranslationRecognizer_StartContinuousRecognitionAsync_mA084AB62A6EBA0B07BB328289C39C90C2CBCA3A1,
	TranslationRecognizer_StopContinuousRecognitionAsync_mF63D6A77759DC514E252A9A3BDAA3E122D9431AA,
	TranslationRecognizer_Finalize_m2184E8E230C6A2427CC4A728AEE6C273A1EC9575,
	TranslationRecognizer_Dispose_mD25FF49087ACE034339817AC845CDF7AE7D03AA3,
	TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8,
	TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D,
	TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D,
	TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D,
	TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__45_0_mA213D2EA1A75F845961CD501A07CF3E596BFEFCF,
	TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__46_0_m0DF6C9E600E19949B631E358276B14B4E663CAC3,
	TranslationSynthesisResult__ctor_mB0B22C703623E1B5B61531197D9D1A29E3A77E7E,
	TranslationSynthesisResult_get_Reason_m1B3654E233011BE230214CBA096A0F83D3582E6A,
	TranslationSynthesisResult_ToString_m1AA32514309BCCACC1F742CBE3DEB6F338248383,
	TranslationSynthesisResult_GetAudioData_m6C03D58F707C22D0C7369A78BD9B5091306EB6BF,
	TranslationSynthesisEventArgs__ctor_m7C2E636717FBAABA106F5EE32C4C9BDF21E59769,
	TranslationSynthesisEventArgs_get_Result_mDE70ACFE02A978D6D49DEDEB9FF14DD9EABD2327,
	TranslationSynthesisEventArgs_ToString_m0444E470A70689EB92906F62FEF6EC7E0AA9BC37,
	TranslationRecognitionEventArgs__ctor_m668342D8A1A26DC406BA1302D719D26FB87E9097,
	TranslationRecognitionEventArgs_get_Result_mE7B91663C41DAC701E596C2F27A5181BFA6E1F61,
	TranslationRecognitionEventArgs_ToString_mFACC9F0F2415EB7AE4789A22D9B935EE17719FD7,
	TranslationRecognitionCanceledEventArgs__ctor_m3D97148E711B9CBDC43DE2F620144D076553EBE3,
	TranslationRecognitionCanceledEventArgs_get_Reason_mF0AC219F786AC312E189C4F26CAF02815F3FAB28,
	TranslationRecognitionCanceledEventArgs_get_ErrorCode_m24C28EE48B0B1061CEF1A4128A43CA3AE49FC19C,
	TranslationRecognitionCanceledEventArgs_ToString_m919DFF681E3D819FEE6B6DDB7910D0847E0008FA,
	Diagnostics_Args_mCDBBF96E237A2CAF455FF73C1C94D49F30D77A6E,
	Diagnostics_SPX_TRACE_VERBOSE_m661DAC1F87434E643E50C17AC840C78C6E26525C,
	Diagnostics_SPX_TRACE_VERBOSE_mE1FF0AF8DD907A84172DF96CE725219027E966B6,
	DotNetFrameworkAnyCpuSupport_Initialize_mFC7F9F36275811FDF216FC1436505208FAEE6097,
	CancellationDetails__cctor_m54158D73A871604F8C6956D8A006A76DC5AC0656,
	CancellationDetails_result_get_reason_canceled_m33845CD15561E068A51326C8ECDB2E9D96C3147B,
	CancellationDetails_result_get_canceled_error_code_m1CAF11693039C29F8B99CF03FC987B79FEE02512,
	SpeechConfig__cctor_m63E83D716E1E30B2017164775353D11368D9B44B,
	SpeechConfig_speech_config_from_subscription_mD0DEE32DBA5522798E980C672D9A3A83ED2A92AC,
	SpeechConfig_speech_config_release_mCA0761B5C1A35069CF0FFDFD9F4921F5B49392B5,
	SpeechConfig_speech_config_get_property_bag_mE8DBDC6A1A6CF503CE40BFE269C6E9F374EC5440,
	SpeechTranslationConfig__cctor_m95E536F0DF83447217C469AEE4040C7C815F0494,
	SpeechTranslationConfig_speech_translation_config_from_subscription_mF89C55819C6323C3C289F2413DBAB4DB8CE25CAA,
	SpeechTranslationConfig_speech_translation_config_add_target_language_m6860252786A03225DDB897D7D3BA543C7D728F56,
	DiagnosticsInterop__cctor_m98EEE43B710033456FD6F3BE38EF7A150C31A367,
	DiagnosticsInterop_diagnostics_log_trace_string_m3C93FB7E7A1CA75D6A198492BF6F7A63F04069CB,
	SpxError__cctor_m48FE47FF7BDDD82E4C165CB95C5B76CA950A826A,
	SpxError_GetMessage_m8F5CCD9E83354AA83663732824933705D84B8E37,
	SpxError_GetErrorCode_mCC22983D726665EE664A87ECC90F1A1EF952A8E0,
	SpxError_Release_mDDDA1AF9C3C4F347D2A8D3BED15A534C21F5678E,
	SpxError_ReleaseNoThrow_mF63EFCD66ADE238A052501F9898A29E827C9D363,
	SpxError_error_get_message_m1DA6555D54DCF635C8E52156C1074BCA67A3E239,
	SpxError_error_get_error_code_m01B8458EEF708586124D197AB41670CC2A0A2104,
	SpxError_error_release_mF08FBC53A655E337B793F3E930F33ADB9A222BFA,
	EventArgs__cctor_mE78595AA6FFBC4FF1D68705351D96EE36736338C,
	EventArgs_recognizer_event_handle_release_m6EF15DA0C2855777F8466C43410B604851713E9F,
	MonoPInvokeCallbackAttribute__ctor_m8AB265D671FFDC9DF4566FBBF57680D37119A173,
	HandleRelease__ctor_m90FECAC6DF8E753D6FDF7B04654F9064055F8608,
	HandleRelease_Invoke_mE17F556505A2581D84BA5FFAE7AA3FA165E2A180,
	HandleRelease_BeginInvoke_m5E792C418FEA5C04A6C45EC2D9CDAF5AB26485BC,
	HandleRelease_EndInvoke_m964A00E7DE88BFC32DA8082A56FF8B78B636F9A9,
	InteropSafeHandle__ctor_m76FADFD814DCAD2DA8F24B567A7C3B33707EDECB,
	InteropSafeHandle_get_IsInvalid_mDE26E49246A7776ED8DF14FFB46555EB3791498F,
	InteropSafeHandle_ReleaseHandle_mA3454874F14CD3E6D2DFEC541D7ADC7C8D308C9B,
	InteropSafeHandle_Dispose_m0C33AEB59BEB46CCDDB71A43B29FDB950AD8F132,
	NULL,
	InteropSafeHandle_ToString_m128BFF870D6CD9E8009EBFD3B75F52BA155FB193,
	InteropSafeHandle_Finalize_m4C027A992BD510065C15773F862DCD1AEF6E03B7,
	SpxFactory__cctor_mF9F36B1F0B7DA0F13A10D1DA9639A1CD17151D11,
	SpxFactory_GetDataFromHandleUsingDelegate_m338F75A11BBAF96269B68DCBA9695FA7C1A1E022,
	SpxFactory_recognizer_create_speech_recognizer_from_config_m9A773D0C8E7DFF621A1FAC66A7A963DEC5ABFCD5,
	SpxFactory_recognizer_create_translation_recognizer_from_config_m406623FDC056160BD39BF039F1CF54EAAE8DE695,
	GetResultDelegate__ctor_mC3E2D1427FB4CC2AC0DFDEBF7B1163BA3A40A782,
	GetResultDelegate_Invoke_m8DE930FC3B770969517CD7A9108BBF434E62E311,
	GetResultDelegate_BeginInvoke_m742CA617B94FADDD74CD8635FAD801734DB3679B,
	GetResultDelegate_EndInvoke_m2263350186806B5265FA56F3A0FF1C27BED622C3,
	PropertyCollection__cctor_m2C6E4327FDB27261CCF1246637EDC2CFC6B44101,
	PropertyCollection_property_bag_set_string_m733AAC3F116BD2B35294B023AB3C088F41B83467,
	PropertyCollection_property_bag_get_string_m818B5A22A89856142C1149F68B29C06AE3DEE53E,
	PropertyCollection_property_bag_free_string_mE57DA048ED235338BE887E576C5DC562C7B53C77,
	PropertyCollection_property_bag_release_mCF33EB1FFC4891A3D91615E9AB0D6B8E1F9B507A,
	RecognitionResult_result_get_reason_mAE215856532978A7F0ACC2E26FFEF1F54DFC259C,
	RecognitionResult_result_get_result_id_mD4275008D93D608F769E3861AF6116EBDE0353E9,
	RecognitionResult_result_get_text_m69EC06EF1F274D1D24FDA3EE43EFEDCDE0F04568,
	RecognitionResult_result_get_property_bag_m8785C37DBE2AA60386232A5AB59B5DE34B3ED096,
	RecognitionResult_recognizer_result_handle_is_valid_m9F376BACB126861937B5AF5289AD6347E38807BB,
	RecognitionResult_recognizer_result_handle_release_m80547B6E80108075B52EE3EA43BCAB2862A9DFFD,
	RecognitionResult_translation_text_result_get_translation_count_m97936E19E9F9ED8E67F852A2F4ED0D4834818789,
	RecognitionResult_translation_text_result_get_translation_m18F2D9448D5A8D8BCF5F5E88D525C9C3E0FA895F,
	RecognitionResult_translation_synthesis_result_get_audio_data_m40A231F54B754222875188DB5C60F87D1D8173AF,
	CallbackFunctionDelegate__ctor_m5EE2EDCF19A838B29EEAF1579442133CE64213A3,
	CallbackFunctionDelegate_Invoke_m6A5AFAFAEB7C9E8215273EBBC585CCD49FA56E5E,
	CallbackFunctionDelegate_BeginInvoke_m045ED9128899AB8653FFFE4302165596A2606F2C,
	CallbackFunctionDelegate_EndInvoke_m634677D6687588EC6726851A3C77A6D7A7AC3BA8,
	Recognizer_recognizer_get_property_bag_m537A092E0535573D227DA4C92374CF19DBDE5ABF,
	Recognizer_recognizer_handle_release_m7946D8CCDE3E61FF9FF5178F9010C40DD449E571,
	Recognizer_recognizer_start_continuous_recognition_async_m64B1B19F379EA6A0BE20E374AF03B2BE2161B1F5,
	Recognizer_recognizer_start_continuous_recognition_async_wait_for_mCCCEF624CBF0A3A9086FBAC2F5EFD706FA474C45,
	Recognizer_recognizer_stop_continuous_recognition_async_mA71C1B9B432CA57177A19527C2B77D89F0358853,
	Recognizer_recognizer_stop_continuous_recognition_async_wait_for_m8292C0C75C5AC4B53B05565881E97C8A9FC43AE5,
	Recognizer_recognizer_async_handle_release_m117B5F50FC982AC061352381CD204A5F539833E4,
	Recognizer_recognizer_recognition_event_get_offset_m88444A5A2BA7D9AEE9CDA1002B5A3940BD6231DB,
	Recognizer_recognizer_session_event_get_session_id_m9246542E81F6A80BDFCA55B5B811175B2AB1E143,
	Recognizer_recognizer_recognition_event_get_result_m371B5957C6C68199FABA0BA94153D03CD46D0C15,
	Recognizer_recognizer_session_started_set_callback_m8AACBCD3B2BE621FCC30258A4E3CFE883790C3C1,
	Recognizer_recognizer_session_stopped_set_callback_mA3515E9A66F469BC5F6D729C79FD3955833B1F04,
	Recognizer_recognizer_speech_start_detected_set_callback_mDCFA67F75E897FC96A92C6083868FEB23A12FEF5,
	Recognizer_recognizer_speech_end_detected_set_callback_m2ABCBF30B08DFBC3E22CD020DDB46CBF7225CE07,
	Recognizer_recognizer_recognizing_set_callback_mCCDA84171EC506B190ECFC59E140BEC62C0E0B3F,
	Recognizer_recognizer_recognized_set_callback_mB722B08BD4311AA7B85119D27DF87B1852BC9B97,
	Recognizer_recognizer_canceled_set_callback_m715F293902F2CE86CF39A86218279A56631E94A0,
	Recognizer_translator_synthesizing_audio_set_callback_mC3D7B7C3F0846CC09358F18309D027188F7B63AB,
	SpxExceptionThrower_ThrowIfFail_m3878189458E0CC587149957904AAFC1EE5547B2A,
	SpxExceptionThrower_ThrowIfNull_mF6A6FEE215DE753CA9CE5BA1CB41BD4C5336E8CB,
	SpxExceptionThrower_ThrowIfNull_m0522BD919DD4E3D21C1841ABB2364D71A7D87554,
	SpxExceptionThrower_LogErrorIfFail_m3B1615BB744FC601FC8D853DDA76E75472B7DFD1,
	SpxExceptionThrower_LogError_m41DBDD7ABB2E3862BE4224232379741042BD8DE4,
	Utf8StringMarshaler_MarshalNativeToManaged_m191264776E7367BB8FBE776F79643944FC913350,
	Utf8StringMarshaler_MarshalNativeToManaged_mCD30E546EC53D5843BA0116D1F3BF3A4AB286A5C,
	Utf8StringMarshaler_MarshalManagedToNative_mE04598EBA44405F47BDF6AB60512F68151926B05,
	Utf8StringMarshaler_MarshalManagedToNative_m66D4FA7339E9A5614B5CDAD7566BC204B6012231,
	Utf8StringHandle__ctor_mCA756BE1111A6633BC03D1778BC5228C884E25CB,
	Utf8StringHandle__ctor_m4FE7724154AEF156C33C717C3926BDFFB4765CE8,
	Utf8StringHandle_get_Length_mA9D38B410D30CE39F7A0D53B48BAB14D4821F74B,
	Utf8StringHandle_ToString_mFD525DD4D087BF349DD515836BFD557459EC21B6,
	Utf8StringHandle_get_IsInvalid_m940B3EDA6BBB4EC7FD9DF81B8D30D2E8802EDA0A,
	Utf8StringHandle_ReleaseHandle_m5EDA9854A5457B311AFB282B1238EC36A7344A5E,
	Utf8StringHandle__cctor_mDE8139C4E47E3D5C1ECE938B88D17FB0AC38169F,
};
static const int32_t s_InvokerIndices[242] = 
{
	5322,
	6529,
	4745,
	2909,
	3124,
	1053,
	5322,
	6517,
	6429,
	5322,
	6429,
	6389,
	6429,
	6429,
	5360,
	6429,
	9115,
	5360,
	6389,
	5320,
	6389,
	5320,
	6429,
	5360,
	6429,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	6529,
	6529,
	5241,
	8073,
	8073,
	8073,
	8073,
	5360,
	6529,
	6529,
	8470,
	3119,
	1494,
	416,
	2486,
	5322,
	6429,
	6429,
	5322,
	8470,
	5360,
	3124,
	5322,
	5322,
	6429,
	6429,
	5322,
	6389,
	6389,
	6429,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	6429,
	5360,
	6429,
	6429,
	6529,
	5241,
	8073,
	8073,
	8073,
	6529,
	6529,
	5322,
	8470,
	5360,
	5322,
	6429,
	6429,
	6529,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	5360,
	6429,
	5360,
	6429,
	6429,
	6529,
	5241,
	8073,
	8073,
	8073,
	8073,
	6529,
	6529,
	5322,
	6389,
	6429,
	5360,
	5322,
	6429,
	6429,
	5322,
	6429,
	6429,
	5322,
	6389,
	6389,
	6429,
	9115,
	7659,
	7265,
	9489,
	9489,
	8406,
	8406,
	9489,
	7864,
	9016,
	8406,
	9489,
	7864,
	8409,
	9489,
	7227,
	9489,
	9113,
	8977,
	9325,
	8855,
	9016,
	9016,
	9016,
	9489,
	9016,
	5360,
	3119,
	4640,
	1571,
	4641,
	3085,
	6313,
	6313,
	5241,
	-1,
	6429,
	6529,
	9489,
	7928,
	7864,
	7864,
	3119,
	1497,
	462,
	4641,
	9489,
	7518,
	7518,
	9016,
	9016,
	8406,
	7876,
	7876,
	8406,
	8859,
	9016,
	8406,
	6881,
	7874,
	3119,
	1775,
	440,
	5360,
	8406,
	9016,
	8406,
	8405,
	8406,
	8405,
	9016,
	8406,
	7876,
	8406,
	7878,
	7878,
	7878,
	7878,
	7878,
	7878,
	7878,
	7878,
	9325,
	8681,
	8642,
	9325,
	9328,
	9113,
	8454,
	9017,
	8406,
	5440,
	6529,
	6516,
	6429,
	6313,
	6313,
	9489,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[11] = 
{
	{ 0x0600002E, 10,  (void**)&Recognizer_FireEvent_SetSessionStarted_mCC473D570D6B919C075BF1CFC1CA0851B50593B0_RuntimeMethod_var, 0 },
	{ 0x0600002F, 11,  (void**)&Recognizer_FireEvent_SetSessionStopped_m968E83FD61DADDCACA8FF7C147DDD978B90BE7D6_RuntimeMethod_var, 0 },
	{ 0x06000030, 13,  (void**)&Recognizer_FireEvent_SpeechStartDetected_m33A741C8D99C4AA8F3E167D94D940AFACE4B4A83_RuntimeMethod_var, 0 },
	{ 0x06000031, 12,  (void**)&Recognizer_FireEvent_SpeechEndDetected_m17619B95226DF134395C3C0FC338950E48AC26B7_RuntimeMethod_var, 0 },
	{ 0x0600005D, 16,  (void**)&SpeechRecognizer_FireEvent_Recognizing_mD274DCE5A0246E3902FD44DD1D53E53F1EA7A761_RuntimeMethod_var, 0 },
	{ 0x0600005E, 15,  (void**)&SpeechRecognizer_FireEvent_Recognized_m31CC22893C29F3C9BBC5001BAFBA7D273D0D7CC0_RuntimeMethod_var, 0 },
	{ 0x0600005F, 14,  (void**)&SpeechRecognizer_FireEvent_Canceled_m93C333A0AB8EE94406D474B31FA1079A9B6A8BD6_RuntimeMethod_var, 0 },
	{ 0x0600007D, 19,  (void**)&TranslationRecognizer_FireEvent_Recognizing_m328B5B866E5913ADFA7C3C9801FD8E2801F11CE8_RuntimeMethod_var, 0 },
	{ 0x0600007E, 18,  (void**)&TranslationRecognizer_FireEvent_Recognized_m334114A20B8E7A60F19DD22CE9B14BBCB305CE0D_RuntimeMethod_var, 0 },
	{ 0x0600007F, 17,  (void**)&TranslationRecognizer_FireEvent_Canceled_m4B1F0D5DBB607794E80789D38D72416A5014174D_RuntimeMethod_var, 0 },
	{ 0x06000080, 20,  (void**)&TranslationRecognizer_FireEvent_SynthesisResult_m8037C70CEFB60A79996F34C03737252F3A71316D_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x060000B4, { 0, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, 463 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_CognitiveServices_Speech_csharp_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_CognitiveServices_Speech_csharp_CodeGenModule = 
{
	"Microsoft.CognitiveServices.Speech.csharp.dll",
	242,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	11,
	s_reversePInvokeIndices,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	g_Microsoft_CognitiveServices_Speech_csharp_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
