# ~STAICharacterCommonScript

`_ZN25STAICharacterCommonScriptD1Ev`

`STAICharacterCommonScript::~STAICharacterCommonScript()`

| 类 | 地址 |
|---|---|
| `STAICharacterCommonScript` | `0x088c903c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c903c  _ZN25STAICharacterCommonScriptD1Ev
#           STAICharacterCommonScript::~STAICharacterCommonScript()
# range [0x088c903c, 0x088c9573]
088c903c +0x000:  push   %ebp
088c903d +0x001:  mov    %esp,%ebp
088c903f +0x003:  push   %edi
088c9040 +0x004:  push   %esi
088c9041 +0x005:  push   %ebx
088c9042 +0x006:  sub    $0x1c,%esp
088c9045 +0x009:  mov    0x8(%ebp),%eax
088c9048 +0x00c:  movl   $&_ZTV25STAICharacterCommonScript+0x8,(%eax)
088c904e +0x012:  mov    0x8(%ebp),%eax
088c9051 +0x015:  mov    %eax,(%esp)
088c9054 +0x018:  call   088c98bc <_ZN25STAICharacterCommonScript7destroyEv>  ; STAICharacterCommonScript::destroy()
088c9059 +0x01d:  jmp    088c9075 <+0x39>
088c905b +0x01f:  mov    %edx,%ebx
088c905d +0x021:  mov    %eax,%esi
088c905f +0x023:  mov    0x8(%ebp),%eax
088c9062 +0x026:  add    $0xff0,%eax
088c9067 +0x02b:  mov    %eax,(%esp)
088c906a +0x02e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c906f +0x033:  mov    %esi,%eax
088c9071 +0x035:  mov    %ebx,%edx
088c9073 +0x037:  jmp    088c9087 <+0x4b>
088c9075 +0x039:  mov    0x8(%ebp),%eax
088c9078 +0x03c:  add    $0xff0,%eax
088c907d +0x041:  mov    %eax,(%esp)
088c9080 +0x044:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c9085 +0x049:  jmp    088c90a1 <+0x65>
088c9087 +0x04b:  mov    %edx,%ebx
088c9089 +0x04d:  mov    %eax,%esi
088c908b +0x04f:  mov    0x8(%ebp),%eax
088c908e +0x052:  add    $0xfec,%eax
088c9093 +0x057:  mov    %eax,(%esp)
088c9096 +0x05a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c909b +0x05f:  mov    %esi,%eax
088c909d +0x061:  mov    %ebx,%edx
088c909f +0x063:  jmp    088c90b3 <+0x77>
088c90a1 +0x065:  mov    0x8(%ebp),%eax
088c90a4 +0x068:  add    $0xfec,%eax
088c90a9 +0x06d:  mov    %eax,(%esp)
088c90ac +0x070:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c90b1 +0x075:  jmp    088c90cd <+0x91>
088c90b3 +0x077:  mov    %edx,%ebx
088c90b5 +0x079:  mov    %eax,%esi
088c90b7 +0x07b:  mov    0x8(%ebp),%eax
088c90ba +0x07e:  add    $0xfac,%eax
088c90bf +0x083:  mov    %eax,(%esp)
088c90c2 +0x086:  call   083680f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x20c0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x20c0
088c90c7 +0x08b:  mov    %esi,%eax
088c90c9 +0x08d:  mov    %ebx,%edx
088c90cb +0x08f:  jmp    088c90df <+0xa3>
088c90cd +0x091:  mov    0x8(%ebp),%eax
088c90d0 +0x094:  add    $0xfac,%eax
088c90d5 +0x099:  mov    %eax,(%esp)
088c90d8 +0x09c:  call   083680f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x20c0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x20c0
088c90dd +0x0a1:  jmp    088c90f9 <+0xbd>
088c90df +0x0a3:  mov    %edx,%ebx
088c90e1 +0x0a5:  mov    %eax,%esi
088c90e3 +0x0a7:  mov    0x8(%ebp),%eax
088c90e6 +0x0aa:  add    $0xf9c,%eax
088c90eb +0x0af:  mov    %eax,(%esp)
088c90ee +0x0b2:  call   08384550 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13ff0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13ff0
088c90f3 +0x0b7:  mov    %esi,%eax
088c90f5 +0x0b9:  mov    %ebx,%edx
088c90f7 +0x0bb:  jmp    088c910b <+0xcf>
088c90f9 +0x0bd:  mov    0x8(%ebp),%eax
088c90fc +0x0c0:  add    $0xf9c,%eax
088c9101 +0x0c5:  mov    %eax,(%esp)
088c9104 +0x0c8:  call   08384550 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13ff0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13ff0
088c9109 +0x0cd:  jmp    088c9125 <+0xe9>
088c910b +0x0cf:  mov    %edx,%ebx
088c910d +0x0d1:  mov    %eax,%esi
088c910f +0x0d3:  mov    0x8(%ebp),%eax
088c9112 +0x0d6:  add    $0xf90,%eax
088c9117 +0x0db:  mov    %eax,(%esp)
088c911a +0x0de:  call   0837f8a0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf340>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf340
088c911f +0x0e3:  mov    %esi,%eax
088c9121 +0x0e5:  mov    %ebx,%edx
088c9123 +0x0e7:  jmp    088c9137 <+0xfb>
088c9125 +0x0e9:  mov    0x8(%ebp),%eax
088c9128 +0x0ec:  add    $0xf90,%eax
088c912d +0x0f1:  mov    %eax,(%esp)
088c9130 +0x0f4:  call   0837f8a0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf340>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf340
088c9135 +0x0f9:  jmp    088c9151 <+0x115>
088c9137 +0x0fb:  mov    %edx,%ebx
088c9139 +0x0fd:  mov    %eax,%esi
088c913b +0x0ff:  mov    0x8(%ebp),%eax
088c913e +0x102:  add    $0xf50,%eax
088c9143 +0x107:  mov    %eax,(%esp)
088c9146 +0x10a:  call   08368dfe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2dca>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2dca
088c914b +0x10f:  mov    %esi,%eax
088c914d +0x111:  mov    %ebx,%edx
088c914f +0x113:  jmp    088c9163 <+0x127>
088c9151 +0x115:  mov    0x8(%ebp),%eax
088c9154 +0x118:  add    $0xf50,%eax
088c9159 +0x11d:  mov    %eax,(%esp)
088c915c +0x120:  call   08368dfe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2dca>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2dca
088c9161 +0x125:  jmp    088c917d <+0x141>
088c9163 +0x127:  mov    %edx,%ebx
088c9165 +0x129:  mov    %eax,%esi
088c9167 +0x12b:  mov    0x8(%ebp),%eax
088c916a +0x12e:  add    $0xf38,%eax
088c916f +0x133:  mov    %eax,(%esp)
088c9172 +0x136:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c9177 +0x13b:  mov    %esi,%eax
088c9179 +0x13d:  mov    %ebx,%edx
088c917b +0x13f:  jmp    088c918f <+0x153>
088c917d +0x141:  mov    0x8(%ebp),%eax
088c9180 +0x144:  add    $0xf38,%eax
088c9185 +0x149:  mov    %eax,(%esp)
088c9188 +0x14c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c918d +0x151:  jmp    088c91a9 <+0x16d>
088c918f +0x153:  mov    %edx,%ebx
088c9191 +0x155:  mov    %eax,%esi
088c9193 +0x157:  mov    0x8(%ebp),%eax
088c9196 +0x15a:  add    $0xf2c,%eax
088c919b +0x15f:  mov    %eax,(%esp)
088c919e +0x162:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
088c91a3 +0x167:  mov    %esi,%eax
088c91a5 +0x169:  mov    %ebx,%edx
088c91a7 +0x16b:  jmp    088c91bb <+0x17f>
088c91a9 +0x16d:  mov    0x8(%ebp),%eax
088c91ac +0x170:  add    $0xf2c,%eax
088c91b1 +0x175:  mov    %eax,(%esp)
088c91b4 +0x178:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
088c91b9 +0x17d:  jmp    088c91d5 <+0x199>
088c91bb +0x17f:  mov    %edx,%ebx
088c91bd +0x181:  mov    %eax,%esi
088c91bf +0x183:  mov    0x8(%ebp),%eax
088c91c2 +0x186:  add    $0xf20,%eax
088c91c7 +0x18b:  mov    %eax,(%esp)
088c91ca +0x18e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c91cf +0x193:  mov    %esi,%eax
088c91d1 +0x195:  mov    %ebx,%edx
088c91d3 +0x197:  jmp    088c91e7 <+0x1ab>
088c91d5 +0x199:  mov    0x8(%ebp),%eax
088c91d8 +0x19c:  add    $0xf20,%eax
088c91dd +0x1a1:  mov    %eax,(%esp)
088c91e0 +0x1a4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c91e5 +0x1a9:  jmp    088c9201 <+0x1c5>
088c91e7 +0x1ab:  mov    %edx,%ebx
088c91e9 +0x1ad:  mov    %eax,%esi
088c91eb +0x1af:  mov    0x8(%ebp),%eax
088c91ee +0x1b2:  add    $0xe6c,%eax
088c91f3 +0x1b7:  mov    %eax,(%esp)
088c91f6 +0x1ba:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c91fb +0x1bf:  mov    %esi,%eax
088c91fd +0x1c1:  mov    %ebx,%edx
088c91ff +0x1c3:  jmp    088c9213 <+0x1d7>
088c9201 +0x1c5:  mov    0x8(%ebp),%eax
088c9204 +0x1c8:  add    $0xe6c,%eax
088c9209 +0x1cd:  mov    %eax,(%esp)
088c920c +0x1d0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c9211 +0x1d5:  jmp    088c922d <+0x1f1>
088c9213 +0x1d7:  mov    %edx,%ebx
088c9215 +0x1d9:  mov    %eax,%esi
088c9217 +0x1db:  mov    0x8(%ebp),%eax
088c921a +0x1de:  add    $0xe50,%eax
088c921f +0x1e3:  mov    %eax,(%esp)
088c9222 +0x1e6:  call   088cc740 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x651>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x651
088c9227 +0x1eb:  mov    %esi,%eax
088c9229 +0x1ed:  mov    %ebx,%edx
088c922b +0x1ef:  jmp    088c923f <+0x203>
088c922d +0x1f1:  mov    0x8(%ebp),%eax
088c9230 +0x1f4:  add    $0xe50,%eax
088c9235 +0x1f9:  mov    %eax,(%esp)
088c9238 +0x1fc:  call   088cc740 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x651>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x651
088c923d +0x201:  jmp    088c9259 <+0x21d>
088c923f +0x203:  mov    %edx,%ebx
088c9241 +0x205:  mov    %eax,%esi
088c9243 +0x207:  mov    0x8(%ebp),%eax
088c9246 +0x20a:  add    $0xd94,%eax
088c924b +0x20f:  mov    %eax,(%esp)
088c924e +0x212:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c9253 +0x217:  mov    %esi,%eax
088c9255 +0x219:  mov    %ebx,%edx
088c9257 +0x21b:  jmp    088c926b <+0x22f>
088c9259 +0x21d:  mov    0x8(%ebp),%eax
088c925c +0x220:  add    $0xd94,%eax
088c9261 +0x225:  mov    %eax,(%esp)
088c9264 +0x228:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c9269 +0x22d:  jmp    088c9285 <+0x249>
088c926b +0x22f:  mov    %edx,%ebx
088c926d +0x231:  mov    %eax,%esi
088c926f +0x233:  mov    0x8(%ebp),%eax
088c9272 +0x236:  add    $0xd88,%eax
088c9277 +0x23b:  mov    %eax,(%esp)
088c927a +0x23e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c927f +0x243:  mov    %esi,%eax
088c9281 +0x245:  mov    %ebx,%edx
088c9283 +0x247:  jmp    088c9297 <+0x25b>
088c9285 +0x249:  mov    0x8(%ebp),%eax
088c9288 +0x24c:  add    $0xd88,%eax
088c928d +0x251:  mov    %eax,(%esp)
088c9290 +0x254:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c9295 +0x259:  jmp    088c92b1 <+0x275>
088c9297 +0x25b:  mov    %edx,%ebx
088c9299 +0x25d:  mov    %eax,%esi
088c929b +0x25f:  mov    0x8(%ebp),%eax
088c929e +0x262:  add    $0xd74,%eax
088c92a3 +0x267:  mov    %eax,(%esp)
088c92a6 +0x26a:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c92ab +0x26f:  mov    %esi,%eax
088c92ad +0x271:  mov    %ebx,%edx
088c92af +0x273:  jmp    088c92c3 <+0x287>
088c92b1 +0x275:  mov    0x8(%ebp),%eax
088c92b4 +0x278:  add    $0xd74,%eax
088c92b9 +0x27d:  mov    %eax,(%esp)
088c92bc +0x280:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c92c1 +0x285:  jmp    088c92dd <+0x2a1>
088c92c3 +0x287:  mov    %edx,%ebx
088c92c5 +0x289:  mov    %eax,%esi
088c92c7 +0x28b:  mov    0x8(%ebp),%eax
088c92ca +0x28e:  add    $0xd68,%eax
088c92cf +0x293:  mov    %eax,(%esp)
088c92d2 +0x296:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c92d7 +0x29b:  mov    %esi,%eax
088c92d9 +0x29d:  mov    %ebx,%edx
088c92db +0x29f:  jmp    088c92ef <+0x2b3>
088c92dd +0x2a1:  mov    0x8(%ebp),%eax
088c92e0 +0x2a4:  add    $0xd68,%eax
088c92e5 +0x2a9:  mov    %eax,(%esp)
088c92e8 +0x2ac:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c92ed +0x2b1:  jmp    088c932c <+0x2f0>
088c92ef +0x2b3:  mov    %edx,%esi
088c92f1 +0x2b5:  mov    %eax,%edi
088c92f3 +0x2b7:  mov    0x8(%ebp),%eax
088c92f6 +0x2ba:  add    $0x300,%eax
088c92fb +0x2bf:  test   %eax,%eax
088c92fd +0x2c1:  je     088c9326 <+0x2ea>
088c92ff +0x2c3:  mov    0x8(%ebp),%eax
088c9302 +0x2c6:  add    $0x300,%eax
088c9307 +0x2cb:  lea    0xa68(%eax),%ebx
088c930d +0x2d1:  mov    0x8(%ebp),%eax
088c9310 +0x2d4:  add    $0x300,%eax
088c9315 +0x2d9:  cmp    %eax,%ebx
088c9317 +0x2db:  je     088c9326 <+0x2ea>
088c9319 +0x2dd:  sub    $0x18,%ebx
088c931c +0x2e0:  mov    %ebx,(%esp)
088c931f +0x2e3:  call   088cc40a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x31b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x31b
088c9324 +0x2e8:  jmp    088c930d <+0x2d1>
088c9326 +0x2ea:  mov    %edi,%eax
088c9328 +0x2ec:  mov    %esi,%edx
088c932a +0x2ee:  jmp    088c935f <+0x323>
088c932c +0x2f0:  mov    0x8(%ebp),%eax
088c932f +0x2f3:  add    $0x300,%eax
088c9334 +0x2f8:  test   %eax,%eax
088c9336 +0x2fa:  je     088c9379 <+0x33d>
088c9338 +0x2fc:  mov    0x8(%ebp),%eax
088c933b +0x2ff:  add    $0x300,%eax
088c9340 +0x304:  lea    0xa68(%eax),%ebx
088c9346 +0x30a:  mov    0x8(%ebp),%eax
088c9349 +0x30d:  add    $0x300,%eax
088c934e +0x312:  cmp    %eax,%ebx
088c9350 +0x314:  je     088c9379 <+0x33d>
088c9352 +0x316:  sub    $0x18,%ebx
088c9355 +0x319:  mov    %ebx,(%esp)
088c9358 +0x31c:  call   088cc40a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x31b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x31b
088c935d +0x321:  jmp    088c9346 <+0x30a>
088c935f +0x323:  mov    %edx,%ebx
088c9361 +0x325:  mov    %eax,%esi
088c9363 +0x327:  mov    0x8(%ebp),%eax
088c9366 +0x32a:  add    $0x2e8,%eax
088c936b +0x32f:  mov    %eax,(%esp)
088c936e +0x332:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
088c9373 +0x337:  mov    %esi,%eax
088c9375 +0x339:  mov    %ebx,%edx
088c9377 +0x33b:  jmp    088c938b <+0x34f>
088c9379 +0x33d:  mov    0x8(%ebp),%eax
088c937c +0x340:  add    $0x2e8,%eax
088c9381 +0x345:  mov    %eax,(%esp)
088c9384 +0x348:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
088c9389 +0x34d:  jmp    088c93a5 <+0x369>
088c938b +0x34f:  mov    %edx,%ebx
088c938d +0x351:  mov    %eax,%esi
088c938f +0x353:  mov    0x8(%ebp),%eax
088c9392 +0x356:  add    $0x2dc,%eax
088c9397 +0x35b:  mov    %eax,(%esp)
088c939a +0x35e:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c939f +0x363:  mov    %esi,%eax
088c93a1 +0x365:  mov    %ebx,%edx
088c93a3 +0x367:  jmp    088c93b7 <+0x37b>
088c93a5 +0x369:  mov    0x8(%ebp),%eax
088c93a8 +0x36c:  add    $0x2dc,%eax
088c93ad +0x371:  mov    %eax,(%esp)
088c93b0 +0x374:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c93b5 +0x379:  jmp    088c93d1 <+0x395>
088c93b7 +0x37b:  mov    %edx,%ebx
088c93b9 +0x37d:  mov    %eax,%esi
088c93bb +0x37f:  mov    0x8(%ebp),%eax
088c93be +0x382:  add    $0x2d0,%eax
088c93c3 +0x387:  mov    %eax,(%esp)
088c93c6 +0x38a:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c93cb +0x38f:  mov    %esi,%eax
088c93cd +0x391:  mov    %ebx,%edx
088c93cf +0x393:  jmp    088c93e3 <+0x3a7>
088c93d1 +0x395:  mov    0x8(%ebp),%eax
088c93d4 +0x398:  add    $0x2d0,%eax
088c93d9 +0x39d:  mov    %eax,(%esp)
088c93dc +0x3a0:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c93e1 +0x3a5:  jmp    088c93fd <+0x3c1>
088c93e3 +0x3a7:  mov    %edx,%ebx
088c93e5 +0x3a9:  mov    %eax,%esi
088c93e7 +0x3ab:  mov    0x8(%ebp),%eax
088c93ea +0x3ae:  add    $0xac,%eax
088c93ef +0x3b3:  mov    %eax,(%esp)
088c93f2 +0x3b6:  call   083671a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1170>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1170
088c93f7 +0x3bb:  mov    %esi,%eax
088c93f9 +0x3bd:  mov    %ebx,%edx
088c93fb +0x3bf:  jmp    088c940f <+0x3d3>
088c93fd +0x3c1:  mov    0x8(%ebp),%eax
088c9400 +0x3c4:  add    $0xac,%eax
088c9405 +0x3c9:  mov    %eax,(%esp)
088c9408 +0x3cc:  call   083671a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1170>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1170
088c940d +0x3d1:  jmp    088c9449 <+0x40d>
088c940f +0x3d3:  mov    %edx,%esi
088c9411 +0x3d5:  mov    %eax,%edi
088c9413 +0x3d7:  mov    0x8(%ebp),%eax
088c9416 +0x3da:  add    $0x94,%eax
088c941b +0x3df:  test   %eax,%eax
088c941d +0x3e1:  je     088c9443 <+0x407>
088c941f +0x3e3:  mov    0x8(%ebp),%eax
088c9422 +0x3e6:  add    $0x94,%eax
088c9427 +0x3eb:  lea    0x18(%eax),%ebx
088c942a +0x3ee:  mov    0x8(%ebp),%eax
088c942d +0x3f1:  add    $0x94,%eax
088c9432 +0x3f6:  cmp    %eax,%ebx
088c9434 +0x3f8:  je     088c9443 <+0x407>
088c9436 +0x3fa:  sub    $0xc,%ebx
088c9439 +0x3fd:  mov    %ebx,(%esp)
088c943c +0x400:  call   088cc65c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x56d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x56d
088c9441 +0x405:  jmp    088c942a <+0x3ee>
088c9443 +0x407:  mov    %edi,%eax
088c9445 +0x409:  mov    %esi,%edx
088c9447 +0x40b:  jmp    088c9479 <+0x43d>
088c9449 +0x40d:  mov    0x8(%ebp),%eax
088c944c +0x410:  add    $0x94,%eax
088c9451 +0x415:  test   %eax,%eax
088c9453 +0x417:  je     088c9493 <+0x457>
088c9455 +0x419:  mov    0x8(%ebp),%eax
088c9458 +0x41c:  add    $0x94,%eax
088c945d +0x421:  lea    0x18(%eax),%ebx
088c9460 +0x424:  mov    0x8(%ebp),%eax
088c9463 +0x427:  add    $0x94,%eax
088c9468 +0x42c:  cmp    %eax,%ebx
088c946a +0x42e:  je     088c9493 <+0x457>
088c946c +0x430:  sub    $0xc,%ebx
088c946f +0x433:  mov    %ebx,(%esp)
088c9472 +0x436:  call   088cc65c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x56d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x56d
088c9477 +0x43b:  jmp    088c9460 <+0x424>
088c9479 +0x43d:  mov    %edx,%ebx
088c947b +0x43f:  mov    %eax,%esi
088c947d +0x441:  mov    0x8(%ebp),%eax
088c9480 +0x444:  add    $0x88,%eax
088c9485 +0x449:  mov    %eax,(%esp)
088c9488 +0x44c:  call   088cc5ea <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x4fb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x4fb
088c948d +0x451:  mov    %esi,%eax
088c948f +0x453:  mov    %ebx,%edx
088c9491 +0x455:  jmp    088c94a5 <+0x469>
088c9493 +0x457:  mov    0x8(%ebp),%eax
088c9496 +0x45a:  add    $0x88,%eax
088c949b +0x45f:  mov    %eax,(%esp)
088c949e +0x462:  call   088cc5ea <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x4fb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x4fb
088c94a3 +0x467:  jmp    088c94d9 <+0x49d>
088c94a5 +0x469:  mov    %edx,%esi
088c94a7 +0x46b:  mov    %eax,%edi
088c94a9 +0x46d:  mov    0x8(%ebp),%eax
088c94ac +0x470:  add    $0x70,%eax
088c94af +0x473:  test   %eax,%eax
088c94b1 +0x475:  je     088c94d3 <+0x497>
088c94b3 +0x477:  mov    0x8(%ebp),%eax
088c94b6 +0x47a:  add    $0x70,%eax
088c94b9 +0x47d:  lea    0x18(%eax),%ebx
088c94bc +0x480:  mov    0x8(%ebp),%eax
088c94bf +0x483:  add    $0x70,%eax
088c94c2 +0x486:  cmp    %eax,%ebx
088c94c4 +0x488:  je     088c94d3 <+0x497>
088c94c6 +0x48a:  sub    $0xc,%ebx
088c94c9 +0x48d:  mov    %ebx,(%esp)
088c94cc +0x490:  call   088cc578 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x489>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x489
088c94d1 +0x495:  jmp    088c94bc <+0x480>
088c94d3 +0x497:  mov    %edi,%eax
088c94d5 +0x499:  mov    %esi,%edx
088c94d7 +0x49b:  jmp    088c9503 <+0x4c7>
088c94d9 +0x49d:  mov    0x8(%ebp),%eax
088c94dc +0x4a0:  add    $0x70,%eax
088c94df +0x4a3:  test   %eax,%eax
088c94e1 +0x4a5:  je     088c951b <+0x4df>
088c94e3 +0x4a7:  mov    0x8(%ebp),%eax
088c94e6 +0x4aa:  add    $0x70,%eax
088c94e9 +0x4ad:  lea    0x18(%eax),%ebx
088c94ec +0x4b0:  mov    0x8(%ebp),%eax
088c94ef +0x4b3:  add    $0x70,%eax
088c94f2 +0x4b6:  cmp    %eax,%ebx
088c94f4 +0x4b8:  je     088c951b <+0x4df>
088c94f6 +0x4ba:  sub    $0xc,%ebx
088c94f9 +0x4bd:  mov    %ebx,(%esp)
088c94fc +0x4c0:  call   088cc578 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x489>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x489
088c9501 +0x4c5:  jmp    088c94ec <+0x4b0>
088c9503 +0x4c7:  mov    %edx,%ebx
088c9505 +0x4c9:  mov    %eax,%esi
088c9507 +0x4cb:  mov    0x8(%ebp),%eax
088c950a +0x4ce:  add    $0x64,%eax
088c950d +0x4d1:  mov    %eax,(%esp)
088c9510 +0x4d4:  call   088cc506 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x417>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x417
088c9515 +0x4d9:  mov    %esi,%eax
088c9517 +0x4db:  mov    %ebx,%edx
088c9519 +0x4dd:  jmp    088c952b <+0x4ef>
088c951b +0x4df:  mov    0x8(%ebp),%eax
088c951e +0x4e2:  add    $0x64,%eax
088c9521 +0x4e5:  mov    %eax,(%esp)
088c9524 +0x4e8:  call   088cc506 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x417>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x417
088c9529 +0x4ed:  jmp    088c9549 <+0x50d>
088c952b +0x4ef:  mov    %edx,%ebx
088c952d +0x4f1:  mov    %eax,%esi
088c952f +0x4f3:  mov    0x8(%ebp),%eax
088c9532 +0x4f6:  add    $0x4,%eax
088c9535 +0x4f9:  mov    %eax,(%esp)
088c9538 +0x4fc:  call   088cc3f6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x307>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x307
088c953d +0x501:  mov    %esi,%eax
088c953f +0x503:  mov    %ebx,%edx
088c9541 +0x505:  mov    %eax,(%esp)
088c9544 +0x508:  call   08ae3750 <_Unwind_Resume>
088c9549 +0x50d:  mov    0x8(%ebp),%eax
088c954c +0x510:  add    $0x4,%eax
088c954f +0x513:  mov    %eax,(%esp)
088c9552 +0x516:  call   088cc3f6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x307>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x307
088c9557 +0x51b:  mov    $0x0,%eax
088c955c +0x520:  test   %al,%al
088c955e +0x522:  je     088c956b <+0x52f>
088c9560 +0x524:  mov    0x8(%ebp),%eax
088c9563 +0x527:  mov    %eax,(%esp)
088c9566 +0x52a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088c956b +0x52f:  add    $0x1c,%esp
088c956e +0x532:  pop    %ebx
088c956f +0x533:  pop    %esi
088c9570 +0x534:  pop    %edi
088c9571 +0x535:  pop    %ebp
088c9572 +0x536:  ret
088c9573 +0x537:  nop
```

## 反编译 C

```c
// STAICharacterCommonScript::~STAICharacterCommonScript @ 0x88c903c

/* WARNING: Removing unreachable block (ram,0x088c9560) */
/* STAICharacterCommonScript::~STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::~STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  APCSpeech *this_00;
  vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *this_01;
  vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *this_02;
  
  *(undefined ***)this = &PTR__STAICharacterCommonScript_08e0a1f0;
                    /* try { // try from 088c9054 to 088c9058 has its CatchHandler @ 088c905b */
  destroy(this);
                    /* try { // try from 088c9080 to 088c9084 has its CatchHandler @ 088c9087 */
  std::string::~string((string *)(this + 0xff0));
                    /* try { // try from 088c90ac to 088c90b0 has its CatchHandler @ 088c90b3 */
  std::string::~string((string *)(this + 0xfec));
                    /* try { // try from 088c90d8 to 088c90dc has its CatchHandler @ 088c90df */
  ActiveActionFileSet::~ActiveActionFileSet((ActiveActionFileSet *)(this + 0xfac));
                    /* try { // try from 088c9104 to 088c9108 has its CatchHandler @ 088c910b */
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
                    /* try { // try from 088c9130 to 088c9134 has its CatchHandler @ 088c9137 */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::~vector
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
                    /* try { // try from 088c915c to 088c9160 has its CatchHandler @ 088c9163 */
  stEnamyDropAvatarInfo_t::~stEnamyDropAvatarInfo_t((stEnamyDropAvatarInfo_t *)(this + 0xf50));
                    /* try { // try from 088c9188 to 088c918c has its CatchHandler @ 088c918f */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf38));
                    /* try { // try from 088c91b4 to 088c91b8 has its CatchHandler @ 088c91bb */
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::~vector
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
                    /* try { // try from 088c91e0 to 088c91e4 has its CatchHandler @ 088c91e7 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf20));
                    /* try { // try from 088c920c to 088c9210 has its CatchHandler @ 088c9213 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe6c));
                    /* try { // try from 088c9238 to 088c923c has its CatchHandler @ 088c923f */
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::~vector
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
                    /* try { // try from 088c9264 to 088c9268 has its CatchHandler @ 088c926b */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
                    /* try { // try from 088c9290 to 088c9294 has its CatchHandler @ 088c9297 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
                    /* try { // try from 088c92bc to 088c92c0 has its CatchHandler @ 088c92c3 */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::~vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
                    /* try { // try from 088c92e8 to 088c92ec has its CatchHandler @ 088c92ef */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::~vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
  if (this != (STAICharacterCommonScript *)0xfffffd00) {
    this_00 = (APCSpeech *)(this + 0xd68);
    while (this_00 != (APCSpeech *)(this + 0x300)) {
      this_00 = this_00 + -0x18;
                    /* try { // try from 088c9358 to 088c935c has its CatchHandler @ 088c935f */
      APCSpeech::~APCSpeech(this_00);
    }
  }
                    /* try { // try from 088c9384 to 088c9388 has its CatchHandler @ 088c938b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x2e8));
                    /* try { // try from 088c93b0 to 088c93b4 has its CatchHandler @ 088c93b7 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
                    /* try { // try from 088c93dc to 088c93e0 has its CatchHandler @ 088c93e3 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
                    /* try { // try from 088c9408 to 088c940c has its CatchHandler @ 088c940f */
  STAIInfoScript::~STAIInfoScript((STAIInfoScript *)(this + 0xac));
  if (this != (STAICharacterCommonScript *)0xffffff6c) {
    this_01 = (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0xac);
    while (this_01 !=
           (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94)) {
      this_01 = this_01 + -0xc;
                    /* try { // try from 088c9472 to 088c9476 has its CatchHandler @ 088c9479 */
      std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::~vector(this_01);
    }
  }
                    /* try { // try from 088c949e to 088c94a2 has its CatchHandler @ 088c94a5 */
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::~vector
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  if (this != (STAICharacterCommonScript *)0xffffff90) {
    this_02 = (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x88)
    ;
    while (this_02 !=
           (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70)) {
      this_02 = this_02 + -0xc;
                    /* try { // try from 088c94fc to 088c9500 has its CatchHandler @ 088c9503 */
      std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::~vector(this_02);
    }
  }
                    /* try { // try from 088c9524 to 088c9528 has its CatchHandler @ 088c952b */
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::~vector
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  MinimumInfo::~MinimumInfo((MinimumInfo *)(this + 4));
  return;
}
```
