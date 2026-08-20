# STAICharacterCommonScript

`_ZN25STAICharacterCommonScriptC1Ev`

`STAICharacterCommonScript::STAICharacterCommonScript()`

| 类 | 地址 |
|---|---|
| `STAICharacterCommonScript` | `0x088c8a78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c8a78  _ZN25STAICharacterCommonScriptC1Ev
#           STAICharacterCommonScript::STAICharacterCommonScript()
# range [0x088c8a78, 0x088c903b]
088c8a78 +0x000:  push   %ebp
088c8a79 +0x001:  mov    %esp,%ebp
088c8a7b +0x003:  push   %edi
088c8a7c +0x004:  push   %esi
088c8a7d +0x005:  push   %ebx
088c8a7e +0x006:  sub    $0x2c,%esp
088c8a81 +0x009:  mov    0x8(%ebp),%eax
088c8a84 +0x00c:  movl   $&_ZTV25STAICharacterCommonScript+0x8,(%eax)
088c8a8a +0x012:  mov    0x8(%ebp),%eax
088c8a8d +0x015:  add    $0x4,%eax
088c8a90 +0x018:  mov    %eax,(%esp)
088c8a93 +0x01b:  call   088cc3e2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x2f3>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x2f3
088c8a98 +0x020:  mov    0x8(%ebp),%eax
088c8a9b +0x023:  add    $0xc,%eax
088c8a9e +0x026:  mov    %eax,(%esp)
088c8aa1 +0x029:  call   0836773e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x170a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x170a
088c8aa6 +0x02e:  mov    0x8(%ebp),%eax
088c8aa9 +0x031:  add    $0x64,%eax
088c8aac +0x034:  mov    %eax,(%esp)
088c8aaf +0x037:  call   088cc4f2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x403>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x403
088c8ab4 +0x03c:  mov    0x8(%ebp),%eax
088c8ab7 +0x03f:  lea    0x70(%eax),%esi
088c8aba +0x042:  mov    %esi,%edi
088c8abc +0x044:  mov    $0x1,%ebx
088c8ac1 +0x049:  jmp    088c8ad1 <+0x59>
088c8ac3 +0x04b:  mov    %edi,(%esp)
088c8ac6 +0x04e:  call   088cc564 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x475>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x475
088c8acb +0x053:  add    $0xc,%edi
088c8ace +0x056:  sub    $0x1,%ebx
088c8ad1 +0x059:  cmp    $0xffffffff,%ebx
088c8ad4 +0x05c:  setne  %al
088c8ad7 +0x05f:  test   %al,%al
088c8ad9 +0x061:  jne    088c8ac3 <+0x4b>
088c8adb +0x063:  jmp    088c8b16 <+0x9e>
088c8add +0x065:  mov    %edx,%edi
088c8adf +0x067:  mov    %eax,-0x24(%ebp)
088c8ae2 +0x06a:  test   %esi,%esi
088c8ae4 +0x06c:  je     088c8b0c <+0x94>
088c8ae6 +0x06e:  mov    $0x1,%eax
088c8aeb +0x073:  sub    %ebx,%eax
088c8aed +0x075:  mov    %eax,%edx
088c8aef +0x077:  mov    %edx,%eax
088c8af1 +0x079:  add    %eax,%eax
088c8af3 +0x07b:  add    %edx,%eax
088c8af5 +0x07d:  shl    $0x2,%eax
088c8af8 +0x080:  lea    (%esi,%eax,1),%ebx
088c8afb +0x083:  cmp    %esi,%ebx
088c8afd +0x085:  je     088c8b0c <+0x94>
088c8aff +0x087:  sub    $0xc,%ebx
088c8b02 +0x08a:  mov    %ebx,(%esp)
088c8b05 +0x08d:  call   088cc578 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x489>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x489
088c8b0a +0x092:  jmp    088c8afb <+0x83>
088c8b0c +0x094:  mov    -0x24(%ebp),%eax
088c8b0f +0x097:  mov    %edi,%edx
088c8b11 +0x099:  jmp    088c8ffd <+0x585>
088c8b16 +0x09e:  mov    0x8(%ebp),%eax
088c8b19 +0x0a1:  add    $0x88,%eax
088c8b1e +0x0a6:  mov    %eax,(%esp)
088c8b21 +0x0a9:  call   088cc5d6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x4e7>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x4e7
088c8b26 +0x0ae:  mov    0x8(%ebp),%eax
088c8b29 +0x0b1:  lea    0x94(%eax),%esi
088c8b2f +0x0b7:  mov    %esi,%edi
088c8b31 +0x0b9:  mov    $0x1,%ebx
088c8b36 +0x0be:  jmp    088c8b46 <+0xce>
088c8b38 +0x0c0:  mov    %edi,(%esp)
088c8b3b +0x0c3:  call   088cc648 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x559>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x559
088c8b40 +0x0c8:  add    $0xc,%edi
088c8b43 +0x0cb:  sub    $0x1,%ebx
088c8b46 +0x0ce:  cmp    $0xffffffff,%ebx
088c8b49 +0x0d1:  setne  %al
088c8b4c +0x0d4:  test   %al,%al
088c8b4e +0x0d6:  jne    088c8b38 <+0xc0>
088c8b50 +0x0d8:  jmp    088c8b8b <+0x113>
088c8b52 +0x0da:  mov    %edx,%edi
088c8b54 +0x0dc:  mov    %eax,-0x20(%ebp)
088c8b57 +0x0df:  test   %esi,%esi
088c8b59 +0x0e1:  je     088c8b81 <+0x109>
088c8b5b +0x0e3:  mov    $0x1,%eax
088c8b60 +0x0e8:  sub    %ebx,%eax
088c8b62 +0x0ea:  mov    %eax,%edx
088c8b64 +0x0ec:  mov    %edx,%eax
088c8b66 +0x0ee:  add    %eax,%eax
088c8b68 +0x0f0:  add    %edx,%eax
088c8b6a +0x0f2:  shl    $0x2,%eax
088c8b6d +0x0f5:  lea    (%esi,%eax,1),%ebx
088c8b70 +0x0f8:  cmp    %esi,%ebx
088c8b72 +0x0fa:  je     088c8b81 <+0x109>
088c8b74 +0x0fc:  sub    $0xc,%ebx
088c8b77 +0x0ff:  mov    %ebx,(%esp)
088c8b7a +0x102:  call   088cc65c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x56d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x56d
088c8b7f +0x107:  jmp    088c8b70 <+0xf8>
088c8b81 +0x109:  mov    -0x20(%ebp),%eax
088c8b84 +0x10c:  mov    %edi,%edx
088c8b86 +0x10e:  jmp    088c8fb1 <+0x539>
088c8b8b +0x113:  mov    0x8(%ebp),%eax
088c8b8e +0x116:  add    $0xac,%eax
088c8b93 +0x11b:  mov    %eax,(%esp)
088c8b96 +0x11e:  call   08366f48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf14>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf14
088c8b9b +0x123:  mov    0x8(%ebp),%eax
088c8b9e +0x126:  add    $0x2d0,%eax
088c8ba3 +0x12b:  mov    %eax,(%esp)
088c8ba6 +0x12e:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
088c8bab +0x133:  mov    0x8(%ebp),%eax
088c8bae +0x136:  add    $0x2dc,%eax
088c8bb3 +0x13b:  mov    %eax,(%esp)
088c8bb6 +0x13e:  call   080ccf60 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dad>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dad
088c8bbb +0x143:  mov    0x8(%ebp),%eax
088c8bbe +0x146:  add    $0x2e8,%eax
088c8bc3 +0x14b:  mov    %eax,(%esp)
088c8bc6 +0x14e:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
088c8bcb +0x153:  mov    0x8(%ebp),%eax
088c8bce +0x156:  lea    0x300(%eax),%esi
088c8bd4 +0x15c:  mov    %esi,%edi
088c8bd6 +0x15e:  mov    $0x6e,%ebx
088c8bdb +0x163:  jmp    088c8beb <+0x173>
088c8bdd +0x165:  mov    %edi,(%esp)
088c8be0 +0x168:  call   088cc328 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x239>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x239
088c8be5 +0x16d:  add    $0x18,%edi
088c8be8 +0x170:  sub    $0x1,%ebx
088c8beb +0x173:  cmp    $0xffffffff,%ebx
088c8bee +0x176:  setne  %al
088c8bf1 +0x179:  test   %al,%al
088c8bf3 +0x17b:  jne    088c8bdd <+0x165>
088c8bf5 +0x17d:  jmp    088c8c30 <+0x1b8>
088c8bf7 +0x17f:  mov    %edx,%edi
088c8bf9 +0x181:  mov    %eax,-0x1c(%ebp)
088c8bfc +0x184:  test   %esi,%esi
088c8bfe +0x186:  je     088c8c26 <+0x1ae>
088c8c00 +0x188:  mov    $0x6e,%eax
088c8c05 +0x18d:  sub    %ebx,%eax
088c8c07 +0x18f:  mov    %eax,%edx
088c8c09 +0x191:  mov    %edx,%eax
088c8c0b +0x193:  add    %eax,%eax
088c8c0d +0x195:  add    %edx,%eax
088c8c0f +0x197:  shl    $0x3,%eax
088c8c12 +0x19a:  lea    (%esi,%eax,1),%ebx
088c8c15 +0x19d:  cmp    %esi,%ebx
088c8c17 +0x19f:  je     088c8c26 <+0x1ae>
088c8c19 +0x1a1:  sub    $0x18,%ebx
088c8c1c +0x1a4:  mov    %ebx,(%esp)
088c8c1f +0x1a7:  call   088cc40a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x31b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x31b
088c8c24 +0x1ac:  jmp    088c8c15 <+0x19d>
088c8c26 +0x1ae:  mov    -0x1c(%ebp),%eax
088c8c29 +0x1b1:  mov    %edi,%edx
088c8c2b +0x1b3:  jmp    088c8f11 <+0x499>
088c8c30 +0x1b8:  mov    0x8(%ebp),%eax
088c8c33 +0x1bb:  add    $0xd68,%eax
088c8c38 +0x1c0:  mov    %eax,(%esp)
088c8c3b +0x1c3:  call   088cc6ba <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5cb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5cb
088c8c40 +0x1c8:  mov    0x8(%ebp),%eax
088c8c43 +0x1cb:  add    $0xd74,%eax
088c8c48 +0x1d0:  mov    %eax,(%esp)
088c8c4b +0x1d3:  call   088cc6ba <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5cb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5cb
088c8c50 +0x1d8:  mov    0x8(%ebp),%eax
088c8c53 +0x1db:  add    $0xd88,%eax
088c8c58 +0x1e0:  mov    %eax,(%esp)
088c8c5b +0x1e3:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
088c8c60 +0x1e8:  mov    0x8(%ebp),%eax
088c8c63 +0x1eb:  add    $0xd94,%eax
088c8c68 +0x1f0:  mov    %eax,(%esp)
088c8c6b +0x1f3:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
088c8c70 +0x1f8:  mov    0x8(%ebp),%eax
088c8c73 +0x1fb:  add    $0xdac,%eax
088c8c78 +0x200:  mov    %eax,(%esp)
088c8c7b +0x203:  call   088cc2fa <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x20b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x20b
088c8c80 +0x208:  mov    0x8(%ebp),%eax
088c8c83 +0x20b:  add    $0xe50,%eax
088c8c88 +0x210:  mov    %eax,(%esp)
088c8c8b +0x213:  call   088cc72c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x63d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x63d
088c8c90 +0x218:  mov    0x8(%ebp),%eax
088c8c93 +0x21b:  add    $0xe6c,%eax
088c8c98 +0x220:  mov    %eax,(%esp)
088c8c9b +0x223:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088c8ca0 +0x228:  mov    0x8(%ebp),%eax
088c8ca3 +0x22b:  add    $0xe78,%eax
088c8ca8 +0x230:  mov    %eax,(%esp)
088c8cab +0x233:  call   088cc2fa <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x20b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x20b
088c8cb0 +0x238:  mov    0x8(%ebp),%eax
088c8cb3 +0x23b:  add    $0xf20,%eax
088c8cb8 +0x240:  mov    %eax,(%esp)
088c8cbb +0x243:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088c8cc0 +0x248:  mov    0x8(%ebp),%eax
088c8cc3 +0x24b:  add    $0xf2c,%eax
088c8cc8 +0x250:  mov    %eax,(%esp)
088c8ccb +0x253:  call   083818cc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1136c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1136c
088c8cd0 +0x258:  mov    0x8(%ebp),%eax
088c8cd3 +0x25b:  add    $0xf38,%eax
088c8cd8 +0x260:  mov    %eax,(%esp)
088c8cdb +0x263:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088c8ce0 +0x268:  mov    0x8(%ebp),%eax
088c8ce3 +0x26b:  add    $0xf50,%eax
088c8ce8 +0x270:  mov    %eax,(%esp)
088c8ceb +0x273:  call   08368de8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2db4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2db4
088c8cf0 +0x278:  mov    0x8(%ebp),%eax
088c8cf3 +0x27b:  add    $0xf90,%eax
088c8cf8 +0x280:  mov    %eax,(%esp)
088c8cfb +0x283:  call   088cc4c2 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x3d3>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x3d3
088c8d00 +0x288:  mov    0x8(%ebp),%eax
088c8d03 +0x28b:  add    $0xf9c,%eax
088c8d08 +0x290:  mov    %eax,(%esp)
088c8d0b +0x293:  call   0838453c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13fdc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13fdc
088c8d10 +0x298:  mov    0x8(%ebp),%eax
088c8d13 +0x29b:  add    $0xfac,%eax
088c8d18 +0x2a0:  mov    %eax,(%esp)
088c8d1b +0x2a3:  call   08367eee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1eba>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1eba
088c8d20 +0x2a8:  mov    0x8(%ebp),%eax
088c8d23 +0x2ab:  add    $0xfec,%eax
088c8d28 +0x2b0:  mov    %eax,(%esp)
088c8d2b +0x2b3:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088c8d30 +0x2b8:  mov    0x8(%ebp),%eax
088c8d33 +0x2bb:  add    $0xff0,%eax
088c8d38 +0x2c0:  mov    %eax,(%esp)
088c8d3b +0x2c3:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088c8d40 +0x2c8:  mov    0x8(%ebp),%eax
088c8d43 +0x2cb:  mov    %eax,(%esp)
088c8d46 +0x2ce:  call   088c9592 <_ZN25STAICharacterCommonScript5clearEv>  ; STAICharacterCommonScript::clear()
088c8d4b +0x2d3:  jmp    088c9033 <+0x5bb>
088c8d50 +0x2d8:  mov    %edx,%ebx
088c8d52 +0x2da:  mov    %eax,%esi
088c8d54 +0x2dc:  mov    0x8(%ebp),%eax
088c8d57 +0x2df:  add    $0xff0,%eax
088c8d5c +0x2e4:  mov    %eax,(%esp)
088c8d5f +0x2e7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c8d64 +0x2ec:  mov    %esi,%eax
088c8d66 +0x2ee:  mov    %ebx,%edx
088c8d68 +0x2f0:  jmp    088c8d6a <+0x2f2>
088c8d6a +0x2f2:  mov    %edx,%ebx
088c8d6c +0x2f4:  mov    %eax,%esi
088c8d6e +0x2f6:  mov    0x8(%ebp),%eax
088c8d71 +0x2f9:  add    $0xfec,%eax
088c8d76 +0x2fe:  mov    %eax,(%esp)
088c8d79 +0x301:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088c8d7e +0x306:  mov    %esi,%eax
088c8d80 +0x308:  mov    %ebx,%edx
088c8d82 +0x30a:  jmp    088c8d84 <+0x30c>
088c8d84 +0x30c:  mov    %edx,%ebx
088c8d86 +0x30e:  mov    %eax,%esi
088c8d88 +0x310:  mov    0x8(%ebp),%eax
088c8d8b +0x313:  add    $0xfac,%eax
088c8d90 +0x318:  mov    %eax,(%esp)
088c8d93 +0x31b:  call   083680f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x20c0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x20c0
088c8d98 +0x320:  mov    %esi,%eax
088c8d9a +0x322:  mov    %ebx,%edx
088c8d9c +0x324:  jmp    088c8d9e <+0x326>
088c8d9e +0x326:  mov    %edx,%ebx
088c8da0 +0x328:  mov    %eax,%esi
088c8da2 +0x32a:  mov    0x8(%ebp),%eax
088c8da5 +0x32d:  add    $0xf9c,%eax
088c8daa +0x332:  mov    %eax,(%esp)
088c8dad +0x335:  call   08384550 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x13ff0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x13ff0
088c8db2 +0x33a:  mov    %esi,%eax
088c8db4 +0x33c:  mov    %ebx,%edx
088c8db6 +0x33e:  jmp    088c8db8 <+0x340>
088c8db8 +0x340:  mov    %edx,%ebx
088c8dba +0x342:  mov    %eax,%esi
088c8dbc +0x344:  mov    0x8(%ebp),%eax
088c8dbf +0x347:  add    $0xf90,%eax
088c8dc4 +0x34c:  mov    %eax,(%esp)
088c8dc7 +0x34f:  call   0837f8a0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf340>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf340
088c8dcc +0x354:  mov    %esi,%eax
088c8dce +0x356:  mov    %ebx,%edx
088c8dd0 +0x358:  jmp    088c8dd2 <+0x35a>
088c8dd2 +0x35a:  mov    %edx,%ebx
088c8dd4 +0x35c:  mov    %eax,%esi
088c8dd6 +0x35e:  mov    0x8(%ebp),%eax
088c8dd9 +0x361:  add    $0xf50,%eax
088c8dde +0x366:  mov    %eax,(%esp)
088c8de1 +0x369:  call   08368dfe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2dca>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2dca
088c8de6 +0x36e:  mov    %esi,%eax
088c8de8 +0x370:  mov    %ebx,%edx
088c8dea +0x372:  jmp    088c8dec <+0x374>
088c8dec +0x374:  mov    %edx,%ebx
088c8dee +0x376:  mov    %eax,%esi
088c8df0 +0x378:  mov    0x8(%ebp),%eax
088c8df3 +0x37b:  add    $0xf38,%eax
088c8df8 +0x380:  mov    %eax,(%esp)
088c8dfb +0x383:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c8e00 +0x388:  mov    %esi,%eax
088c8e02 +0x38a:  mov    %ebx,%edx
088c8e04 +0x38c:  jmp    088c8e06 <+0x38e>
088c8e06 +0x38e:  mov    %edx,%ebx
088c8e08 +0x390:  mov    %eax,%esi
088c8e0a +0x392:  mov    0x8(%ebp),%eax
088c8e0d +0x395:  add    $0xf2c,%eax
088c8e12 +0x39a:  mov    %eax,(%esp)
088c8e15 +0x39d:  call   083818e0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x11380>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x11380
088c8e1a +0x3a2:  mov    %esi,%eax
088c8e1c +0x3a4:  mov    %ebx,%edx
088c8e1e +0x3a6:  jmp    088c8e20 <+0x3a8>
088c8e20 +0x3a8:  mov    %edx,%ebx
088c8e22 +0x3aa:  mov    %eax,%esi
088c8e24 +0x3ac:  mov    0x8(%ebp),%eax
088c8e27 +0x3af:  add    $0xf20,%eax
088c8e2c +0x3b4:  mov    %eax,(%esp)
088c8e2f +0x3b7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c8e34 +0x3bc:  mov    %esi,%eax
088c8e36 +0x3be:  mov    %ebx,%edx
088c8e38 +0x3c0:  jmp    088c8e3a <+0x3c2>
088c8e3a +0x3c2:  mov    %edx,%ebx
088c8e3c +0x3c4:  mov    %eax,%esi
088c8e3e +0x3c6:  mov    0x8(%ebp),%eax
088c8e41 +0x3c9:  add    $0xe6c,%eax
088c8e46 +0x3ce:  mov    %eax,(%esp)
088c8e49 +0x3d1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088c8e4e +0x3d6:  mov    %esi,%eax
088c8e50 +0x3d8:  mov    %ebx,%edx
088c8e52 +0x3da:  jmp    088c8e54 <+0x3dc>
088c8e54 +0x3dc:  mov    %edx,%ebx
088c8e56 +0x3de:  mov    %eax,%esi
088c8e58 +0x3e0:  mov    0x8(%ebp),%eax
088c8e5b +0x3e3:  add    $0xe50,%eax
088c8e60 +0x3e8:  mov    %eax,(%esp)
088c8e63 +0x3eb:  call   088cc740 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x651>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x651
088c8e68 +0x3f0:  mov    %esi,%eax
088c8e6a +0x3f2:  mov    %ebx,%edx
088c8e6c +0x3f4:  jmp    088c8e6e <+0x3f6>
088c8e6e +0x3f6:  mov    %edx,%ebx
088c8e70 +0x3f8:  mov    %eax,%esi
088c8e72 +0x3fa:  mov    0x8(%ebp),%eax
088c8e75 +0x3fd:  add    $0xd94,%eax
088c8e7a +0x402:  mov    %eax,(%esp)
088c8e7d +0x405:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c8e82 +0x40a:  mov    %esi,%eax
088c8e84 +0x40c:  mov    %ebx,%edx
088c8e86 +0x40e:  jmp    088c8e88 <+0x410>
088c8e88 +0x410:  mov    %edx,%ebx
088c8e8a +0x412:  mov    %eax,%esi
088c8e8c +0x414:  mov    0x8(%ebp),%eax
088c8e8f +0x417:  add    $0xd88,%eax
088c8e94 +0x41c:  mov    %eax,(%esp)
088c8e97 +0x41f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
088c8e9c +0x424:  mov    %esi,%eax
088c8e9e +0x426:  mov    %ebx,%edx
088c8ea0 +0x428:  jmp    088c8ea2 <+0x42a>
088c8ea2 +0x42a:  mov    %edx,%ebx
088c8ea4 +0x42c:  mov    %eax,%esi
088c8ea6 +0x42e:  mov    0x8(%ebp),%eax
088c8ea9 +0x431:  add    $0xd74,%eax
088c8eae +0x436:  mov    %eax,(%esp)
088c8eb1 +0x439:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c8eb6 +0x43e:  mov    %esi,%eax
088c8eb8 +0x440:  mov    %ebx,%edx
088c8eba +0x442:  jmp    088c8ebc <+0x444>
088c8ebc +0x444:  mov    %edx,%ebx
088c8ebe +0x446:  mov    %eax,%esi
088c8ec0 +0x448:  mov    0x8(%ebp),%eax
088c8ec3 +0x44b:  add    $0xd68,%eax
088c8ec8 +0x450:  mov    %eax,(%esp)
088c8ecb +0x453:  call   088cc6ce <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x5df>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x5df
088c8ed0 +0x458:  mov    %esi,%eax
088c8ed2 +0x45a:  mov    %ebx,%edx
088c8ed4 +0x45c:  jmp    088c8ed6 <+0x45e>
088c8ed6 +0x45e:  mov    %edx,%esi
088c8ed8 +0x460:  mov    %eax,%edi
088c8eda +0x462:  mov    0x8(%ebp),%eax
088c8edd +0x465:  add    $0x300,%eax
088c8ee2 +0x46a:  test   %eax,%eax
088c8ee4 +0x46c:  je     088c8f0d <+0x495>
088c8ee6 +0x46e:  mov    0x8(%ebp),%eax
088c8ee9 +0x471:  add    $0x300,%eax
088c8eee +0x476:  lea    0xa68(%eax),%ebx
088c8ef4 +0x47c:  mov    0x8(%ebp),%eax
088c8ef7 +0x47f:  add    $0x300,%eax
088c8efc +0x484:  cmp    %eax,%ebx
088c8efe +0x486:  je     088c8f0d <+0x495>
088c8f00 +0x488:  sub    $0x18,%ebx
088c8f03 +0x48b:  mov    %ebx,(%esp)
088c8f06 +0x48e:  call   088cc40a <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x31b>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x31b
088c8f0b +0x493:  jmp    088c8ef4 <+0x47c>
088c8f0d +0x495:  mov    %edi,%eax
088c8f0f +0x497:  mov    %esi,%edx
088c8f11 +0x499:  mov    %edx,%ebx
088c8f13 +0x49b:  mov    %eax,%esi
088c8f15 +0x49d:  mov    0x8(%ebp),%eax
088c8f18 +0x4a0:  add    $0x2e8,%eax
088c8f1d +0x4a5:  mov    %eax,(%esp)
088c8f20 +0x4a8:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
088c8f25 +0x4ad:  mov    %esi,%eax
088c8f27 +0x4af:  mov    %ebx,%edx
088c8f29 +0x4b1:  jmp    088c8f2b <+0x4b3>
088c8f2b +0x4b3:  mov    %edx,%ebx
088c8f2d +0x4b5:  mov    %eax,%esi
088c8f2f +0x4b7:  mov    0x8(%ebp),%eax
088c8f32 +0x4ba:  add    $0x2dc,%eax
088c8f37 +0x4bf:  mov    %eax,(%esp)
088c8f3a +0x4c2:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c8f3f +0x4c7:  mov    %esi,%eax
088c8f41 +0x4c9:  mov    %ebx,%edx
088c8f43 +0x4cb:  jmp    088c8f45 <+0x4cd>
088c8f45 +0x4cd:  mov    %edx,%ebx
088c8f47 +0x4cf:  mov    %eax,%esi
088c8f49 +0x4d1:  mov    0x8(%ebp),%eax
088c8f4c +0x4d4:  add    $0x2d0,%eax
088c8f51 +0x4d9:  mov    %eax,(%esp)
088c8f54 +0x4dc:  call   080ccf74 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1dc1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1dc1
088c8f59 +0x4e1:  mov    %esi,%eax
088c8f5b +0x4e3:  mov    %ebx,%edx
088c8f5d +0x4e5:  jmp    088c8f5f <+0x4e7>
088c8f5f +0x4e7:  mov    %edx,%ebx
088c8f61 +0x4e9:  mov    %eax,%esi
088c8f63 +0x4eb:  mov    0x8(%ebp),%eax
088c8f66 +0x4ee:  add    $0xac,%eax
088c8f6b +0x4f3:  mov    %eax,(%esp)
088c8f6e +0x4f6:  call   083671a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1170>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1170
088c8f73 +0x4fb:  mov    %esi,%eax
088c8f75 +0x4fd:  mov    %ebx,%edx
088c8f77 +0x4ff:  jmp    088c8f79 <+0x501>
088c8f79 +0x501:  mov    %edx,%esi
088c8f7b +0x503:  mov    %eax,%edi
088c8f7d +0x505:  mov    0x8(%ebp),%eax
088c8f80 +0x508:  add    $0x94,%eax
088c8f85 +0x50d:  test   %eax,%eax
088c8f87 +0x50f:  je     088c8fad <+0x535>
088c8f89 +0x511:  mov    0x8(%ebp),%eax
088c8f8c +0x514:  add    $0x94,%eax
088c8f91 +0x519:  lea    0x18(%eax),%ebx
088c8f94 +0x51c:  mov    0x8(%ebp),%eax
088c8f97 +0x51f:  add    $0x94,%eax
088c8f9c +0x524:  cmp    %eax,%ebx
088c8f9e +0x526:  je     088c8fad <+0x535>
088c8fa0 +0x528:  sub    $0xc,%ebx
088c8fa3 +0x52b:  mov    %ebx,(%esp)
088c8fa6 +0x52e:  call   088cc65c <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x56d>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x56d
088c8fab +0x533:  jmp    088c8f94 <+0x51c>
088c8fad +0x535:  mov    %edi,%eax
088c8faf +0x537:  mov    %esi,%edx
088c8fb1 +0x539:  mov    %edx,%ebx
088c8fb3 +0x53b:  mov    %eax,%esi
088c8fb5 +0x53d:  mov    0x8(%ebp),%eax
088c8fb8 +0x540:  add    $0x88,%eax
088c8fbd +0x545:  mov    %eax,(%esp)
088c8fc0 +0x548:  call   088cc5ea <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x4fb>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x4fb
088c8fc5 +0x54d:  mov    %esi,%eax
088c8fc7 +0x54f:  mov    %ebx,%edx
088c8fc9 +0x551:  jmp    088c8fcb <+0x553>
088c8fcb +0x553:  mov    %edx,%esi
088c8fcd +0x555:  mov    %eax,%edi
088c8fcf +0x557:  mov    0x8(%ebp),%eax
088c8fd2 +0x55a:  add    $0x70,%eax
088c8fd5 +0x55d:  test   %eax,%eax
088c8fd7 +0x55f:  je     088c8ff9 <+0x581>
088c8fd9 +0x561:  mov    0x8(%ebp),%eax
088c8fdc +0x564:  add    $0x70,%eax
088c8fdf +0x567:  lea    0x18(%eax),%ebx
088c8fe2 +0x56a:  mov    0x8(%ebp),%eax
088c8fe5 +0x56d:  add    $0x70,%eax
088c8fe8 +0x570:  cmp    %eax,%ebx
088c8fea +0x572:  je     088c8ff9 <+0x581>
088c8fec +0x574:  sub    $0xc,%ebx
088c8fef +0x577:  mov    %ebx,(%esp)
088c8ff2 +0x57a:  call   088cc578 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x489>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x489
088c8ff7 +0x57f:  jmp    088c8fe2 <+0x56a>
088c8ff9 +0x581:  mov    %edi,%eax
088c8ffb +0x583:  mov    %esi,%edx
088c8ffd +0x585:  mov    %edx,%ebx
088c8fff +0x587:  mov    %eax,%esi
088c9001 +0x589:  mov    0x8(%ebp),%eax
088c9004 +0x58c:  add    $0x64,%eax
088c9007 +0x58f:  mov    %eax,(%esp)
088c900a +0x592:  call   088cc506 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x417>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x417
088c900f +0x597:  mov    %esi,%eax
088c9011 +0x599:  mov    %ebx,%edx
088c9013 +0x59b:  jmp    088c9015 <+0x59d>
088c9015 +0x59d:  mov    %edx,%ebx
088c9017 +0x59f:  mov    %eax,%esi
088c9019 +0x5a1:  mov    0x8(%ebp),%eax
088c901c +0x5a4:  add    $0x4,%eax
088c901f +0x5a7:  mov    %eax,(%esp)
088c9022 +0x5aa:  call   088cc3f6 <_GLOBAL__I_g_aiCharacterScriptBaseDirectory+0x307>  ; global constructors keyed to g_aiCharacterScriptBaseDirectory+0x307
088c9027 +0x5af:  mov    %esi,%eax
088c9029 +0x5b1:  mov    %ebx,%edx
088c902b +0x5b3:  mov    %eax,(%esp)
088c902e +0x5b6:  call   08ae3750 <_Unwind_Resume>
088c9033 +0x5bb:  add    $0x2c,%esp
088c9036 +0x5be:  pop    %ebx
088c9037 +0x5bf:  pop    %esi
088c9038 +0x5c0:  pop    %edi
088c9039 +0x5c1:  pop    %ebp
088c903a +0x5c2:  ret
088c903b +0x5c3:  nop
```

## 反编译 C

```c
// STAICharacterCommonScript::STAICharacterCommonScript @ 0x88c8a78

/* STAICharacterCommonScript::STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  int iVar1;
  vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *this_00;
  vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *this_01;
  APCSpeech *this_02;
  
  *(undefined ***)this = &PTR__STAICharacterCommonScript_08e0a1f0;
  MinimumInfo::MinimumInfo((MinimumInfo *)(this + 4));
  STRDCharacterStatus::STRDCharacterStatus((STRDCharacterStatus *)(this + 0xc));
                    /* try { // try from 088c8aaf to 088c8ab3 has its CatchHandler @ 088c9015 */
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::vector
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  this_00 = (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8ac6 to 088c8aca has its CatchHandler @ 088c8add */
    std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 088c8b21 to 088c8b25 has its CatchHandler @ 088c8fcb */
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::vector
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  this_01 = (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8b3b to 088c8b3f has its CatchHandler @ 088c8b52 */
    std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 088c8b96 to 088c8b9a has its CatchHandler @ 088c8f79 */
  STAIInfoScript::STAIInfoScript((STAIInfoScript *)(this + 0xac));
                    /* try { // try from 088c8ba6 to 088c8baa has its CatchHandler @ 088c8f5f */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
                    /* try { // try from 088c8bb6 to 088c8bba has its CatchHandler @ 088c8f45 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
                    /* try { // try from 088c8bc6 to 088c8bca has its CatchHandler @ 088c8f2b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x2e8));
  this_02 = (APCSpeech *)(this + 0x300);
  for (iVar1 = 0x6e; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8be0 to 088c8be4 has its CatchHandler @ 088c8bf7 */
    APCSpeech::APCSpeech(this_02);
    this_02 = this_02 + 0x18;
  }
                    /* try { // try from 088c8c3b to 088c8c3f has its CatchHandler @ 088c8ed6 */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
                    /* try { // try from 088c8c4b to 088c8c4f has its CatchHandler @ 088c8ebc */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
                    /* try { // try from 088c8c5b to 088c8c5f has its CatchHandler @ 088c8ea2 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
                    /* try { // try from 088c8c6b to 088c8c6f has its CatchHandler @ 088c8e88 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
  STRDCharacterStatusRate::STRDCharacterStatusRate((STRDCharacterStatusRate *)(this + 0xdac));
                    /* try { // try from 088c8c8b to 088c8c8f has its CatchHandler @ 088c8e6e */
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::vector
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
                    /* try { // try from 088c8c9b to 088c8c9f has its CatchHandler @ 088c8e54 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xe6c));
  STRDCharacterStatusRate::STRDCharacterStatusRate((STRDCharacterStatusRate *)(this + 0xe78));
                    /* try { // try from 088c8cbb to 088c8cbf has its CatchHandler @ 088c8e3a */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xf20));
                    /* try { // try from 088c8ccb to 088c8ccf has its CatchHandler @ 088c8e20 */
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::vector
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
                    /* try { // try from 088c8cdb to 088c8cdf has its CatchHandler @ 088c8e06 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xf38));
                    /* try { // try from 088c8ceb to 088c8cef has its CatchHandler @ 088c8dec */
  stEnamyDropAvatarInfo_t::stEnamyDropAvatarInfo_t((stEnamyDropAvatarInfo_t *)(this + 0xf50));
                    /* try { // try from 088c8cfb to 088c8cff has its CatchHandler @ 088c8dd2 */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::vector
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
                    /* try { // try from 088c8d0b to 088c8d0f has its CatchHandler @ 088c8db8 */
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
                    /* try { // try from 088c8d1b to 088c8d1f has its CatchHandler @ 088c8d9e */
  ActiveActionFileSet::ActiveActionFileSet((ActiveActionFileSet *)(this + 0xfac));
                    /* try { // try from 088c8d2b to 088c8d2f has its CatchHandler @ 088c8d84 */
  std::string::string((string *)(this + 0xfec));
                    /* try { // try from 088c8d3b to 088c8d3f has its CatchHandler @ 088c8d6a */
  std::string::string((string *)(this + 0xff0));
                    /* try { // try from 088c8d46 to 088c8d4a has its CatchHandler @ 088c8d50 */
  clear(this);
  return;
}
```
