# init

`_ZN10CSkillList4initEv`

`CSkillList::init()`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x08350c26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350c26  _ZN10CSkillList4initEv
#           CSkillList::init()
# range [0x08350c26, 0x083519a5]
08350c26 +0x000:  push   %ebp
08350c27 +0x001:  mov    %esp,%ebp
08350c29 +0x003:  push   %edi
08350c2a +0x004:  push   %esi
08350c2b +0x005:  push   %ebx
08350c2c +0x006:  sub    $0xbac,%esp
08350c32 +0x00c:  lea    -0x368(%ebp),%eax
08350c38 +0x012:  mov    %eax,(%esp)
08350c3b +0x015:  call   08375642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf60e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf60e
08350c40 +0x01a:  movl   $0x0,-0x7c(%ebp)
08350c47 +0x021:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350c4c +0x026:  mov    %eax,(%esp)
08350c4f +0x029:  call   086227f0 <_ZN11sync_script11CSyncScript20truncate_skill_indexEv>  ; sync_script::CSyncScript::truncate_skill_index()
08350c54 +0x02e:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350c59 +0x033:  mov    %eax,(%esp)
08350c5c +0x036:  call   08622d92 <_ZN11sync_script11CSyncScript19trancate_skill_infoEv>  ; sync_script::CSyncScript::trancate_skill_info()
08350c61 +0x03b:  movl   $0x0,-0x78(%ebp)
08350c68 +0x042:  movl   $0x0,-0x74(%ebp)
08350c6f +0x049:  lea    -0xa8(%ebp),%eax
08350c75 +0x04f:  mov    %eax,(%esp)
08350c78 +0x052:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08350c7d +0x057:  movl   $0x0,-0x70(%ebp)
08350c84 +0x05e:  jmp    08351846 <+0xc20>
08350c89 +0x063:  mov    -0x70(%ebp),%edx
08350c8c +0x066:  mov    %edx,%eax
08350c8e +0x068:  add    %eax,%eax
08350c90 +0x06a:  add    %edx,%eax
08350c92 +0x06c:  shl    $0x3,%eax
08350c95 +0x06f:  lea    &g_staSkillScriptFileList(%eax),%edx
08350c9b +0x075:  lea    -0xb7c(%ebp),%eax
08350ca1 +0x07b:  mov    %edx,0x4(%esp)
08350ca5 +0x07f:  mov    %eax,(%esp)
08350ca8 +0x082:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08350cad +0x087:  sub    $0x4,%esp
08350cb0 +0x08a:  mov    -0xb7c(%ebp),%eax
08350cb6 +0x090:  mov    %eax,-0xa8(%ebp)
08350cbc +0x096:  jmp    083517f8 <+0xbd2>
08350cc1 +0x09b:  lea    -0xa8(%ebp),%eax
08350cc7 +0x0a1:  mov    %eax,(%esp)
08350cca +0x0a4:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08350ccf +0x0a9:  add    $0x4,%eax
08350cd2 +0x0ac:  mov    %eax,(%esp)
08350cd5 +0x0af:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08350cda +0x0b4:  mov    %eax,-0x74(%ebp)
08350cdd +0x0b7:  cmpl   $0x0,-0x74(%ebp)
08350ce1 +0x0bb:  je     08351841 <+0xc1b>
08350ce7 +0x0c1:  mov    -0x70(%ebp),%eax
08350cea +0x0c4:  movl   $0xffffffff,0x10(%esp)
08350cf2 +0x0cc:  movl   $0x0,0xc(%esp)
08350cfa +0x0d4:  mov    %eax,0x8(%esp)
08350cfe +0x0d8:  mov    -0x74(%ebp),%eax
08350d01 +0x0db:  mov    %eax,0x4(%esp)
08350d05 +0x0df:  lea    -0x368(%ebp),%eax
08350d0b +0x0e5:  mov    %eax,(%esp)
08350d0e +0x0e8:  call   08a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>  ; ImportSkillScript(STSkillScript*, char const*, ENUM_CHARACTERJOB, int, int)
08350d13 +0x0ed:  xor    $0x1,%eax
08350d16 +0x0f0:  test   %al,%al
08350d18 +0x0f2:  je     08350d37 <+0x111>
08350d1a +0x0f4:  mov    -0x74(%ebp),%eax
08350d1d +0x0f7:  mov    %eax,0x4(%esp)
08350d21 +0x0fb:  movl   $"Skill Script Error: %s\n",(%esp)
08350d28 +0x102:  call   0807db60 <_init+0x458>
08350d2d +0x107:  mov    $0x0,%ebx
08350d32 +0x10c:  jmp    0835198a <+0xd64>
08350d37 +0x111:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350d3c +0x116:  mov    -0x70(%ebp),%edx
08350d3f +0x119:  mov    %edx,0x8(%esp)
08350d43 +0x11d:  lea    -0x368(%ebp),%edx
08350d49 +0x123:  mov    %edx,0x4(%esp)
08350d4d +0x127:  mov    %eax,(%esp)
08350d50 +0x12a:  call   0862262c <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti>  ; sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)
08350d55 +0x12f:  xor    $0x1,%eax
08350d58 +0x132:  test   %al,%al
08350d5a +0x134:  je     08350d79 <+0x153>
08350d5c +0x136:  mov    -0x74(%ebp),%eax
08350d5f +0x139:  mov    %eax,0x4(%esp)
08350d63 +0x13d:  movl   $"insert_skill_index Error: %s\n",(%esp)
08350d6a +0x144:  call   0807db60 <_init+0x458>
08350d6f +0x149:  mov    $0x0,%ebx
08350d74 +0x14e:  jmp    0835198a <+0xd64>
08350d79 +0x153:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350d7e +0x158:  mov    %eax,(%esp)
08350d81 +0x15b:  call   082a7208 <_GLOBAL__I__ZN4CLog5this_E+0x362f>  ; global constructors keyed to CLog::this_+0x362f
08350d86 +0x160:  test   %al,%al
08350d88 +0x162:  je     08351090 <+0x46a>
08350d8e +0x168:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350d93 +0x16d:  movl   $0x0,0xc(%esp)
08350d9b +0x175:  mov    -0x70(%ebp),%edx
08350d9e +0x178:  mov    %edx,0x8(%esp)
08350da2 +0x17c:  lea    -0x368(%ebp),%edx
08350da8 +0x182:  mov    %edx,0x4(%esp)
08350dac +0x186:  mov    %eax,(%esp)
08350daf +0x189:  call   08622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>  ; sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)
08350db4 +0x18e:  xor    $0x1,%eax
08350db7 +0x191:  test   %al,%al
08350db9 +0x193:  je     08350dd8 <+0x1b2>
08350dbb +0x195:  mov    -0x74(%ebp),%eax
08350dbe +0x198:  mov    %eax,0x4(%esp)
08350dc2 +0x19c:  movl   $"insert_skill_info Error: %s\n",(%esp)
08350dc9 +0x1a3:  call   0807db60 <_init+0x458>
08350dce +0x1a8:  mov    $0x0,%ebx
08350dd3 +0x1ad:  jmp    0835198a <+0xd64>
08350dd8 +0x1b2:  lea    -0x614(%ebp),%eax
08350dde +0x1b8:  mov    %eax,(%esp)
08350de1 +0x1bb:  call   08375642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf60e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf60e
08350de6 +0x1c0:  mov    -0x70(%ebp),%eax
08350de9 +0x1c3:  movl   $0xffffffff,0x10(%esp)
08350df1 +0x1cb:  movl   $0x4,0xc(%esp)
08350df9 +0x1d3:  mov    %eax,0x8(%esp)
08350dfd +0x1d7:  mov    -0x74(%ebp),%eax
08350e00 +0x1da:  mov    %eax,0x4(%esp)
08350e04 +0x1de:  lea    -0x614(%ebp),%eax
08350e0a +0x1e4:  mov    %eax,(%esp)
08350e0d +0x1e7:  call   08a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>  ; ImportSkillScript(STSkillScript*, char const*, ENUM_CHARACTERJOB, int, int)
08350e12 +0x1ec:  xor    $0x1,%eax
08350e15 +0x1ef:  test   %al,%al
08350e17 +0x1f1:  je     08350e3b <+0x215>
08350e19 +0x1f3:  mov    -0x74(%ebp),%eax
08350e1c +0x1f6:  mov    %eax,0x4(%esp)
08350e20 +0x1fa:  movl   $"Skill Script Error: %s\n",(%esp)
08350e27 +0x201:  call   0807db60 <_init+0x458>
08350e2c +0x206:  mov    $0x0,%ebx
08350e31 +0x20b:  mov    $0x0,%esi
08350e36 +0x210:  jmp    0835107a <+0x454>
08350e3b +0x215:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350e40 +0x21a:  movl   $0x4,0xc(%esp)
08350e48 +0x222:  mov    -0x70(%ebp),%edx
08350e4b +0x225:  mov    %edx,0x8(%esp)
08350e4f +0x229:  lea    -0x614(%ebp),%edx
08350e55 +0x22f:  mov    %edx,0x4(%esp)
08350e59 +0x233:  mov    %eax,(%esp)
08350e5c +0x236:  call   08622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>  ; sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)
08350e61 +0x23b:  xor    $0x1,%eax
08350e64 +0x23e:  test   %al,%al
08350e66 +0x240:  je     08350e8a <+0x264>
08350e68 +0x242:  mov    -0x74(%ebp),%eax
08350e6b +0x245:  mov    %eax,0x4(%esp)
08350e6f +0x249:  movl   $"insert_skill_info Error: %s\n",(%esp)
08350e76 +0x250:  call   0807db60 <_init+0x458>
08350e7b +0x255:  mov    $0x0,%ebx
08350e80 +0x25a:  mov    $0x0,%esi
08350e85 +0x25f:  jmp    0835107a <+0x454>
08350e8a +0x264:  lea    -0x8c0(%ebp),%eax
08350e90 +0x26a:  mov    %eax,(%esp)
08350e93 +0x26d:  call   08375642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf60e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf60e
08350e98 +0x272:  mov    -0x70(%ebp),%eax
08350e9b +0x275:  movl   $0xffffffff,0x10(%esp)
08350ea3 +0x27d:  movl   $0x6,0xc(%esp)
08350eab +0x285:  mov    %eax,0x8(%esp)
08350eaf +0x289:  mov    -0x74(%ebp),%eax
08350eb2 +0x28c:  mov    %eax,0x4(%esp)
08350eb6 +0x290:  lea    -0x8c0(%ebp),%eax
08350ebc +0x296:  mov    %eax,(%esp)
08350ebf +0x299:  call   08a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>  ; ImportSkillScript(STSkillScript*, char const*, ENUM_CHARACTERJOB, int, int)
08350ec4 +0x29e:  xor    $0x1,%eax
08350ec7 +0x2a1:  test   %al,%al
08350ec9 +0x2a3:  je     08350eed <+0x2c7>
08350ecb +0x2a5:  mov    -0x74(%ebp),%eax
08350ece +0x2a8:  mov    %eax,0x4(%esp)
08350ed2 +0x2ac:  movl   $"Skill Script Error: %s\n",(%esp)
08350ed9 +0x2b3:  call   0807db60 <_init+0x458>
08350ede +0x2b8:  mov    $0x0,%ebx
08350ee3 +0x2bd:  mov    $0x0,%esi
08350ee8 +0x2c2:  jmp    0835103f <+0x419>
08350eed +0x2c7:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350ef2 +0x2cc:  movl   $0x6,0xc(%esp)
08350efa +0x2d4:  mov    -0x70(%ebp),%edx
08350efd +0x2d7:  mov    %edx,0x8(%esp)
08350f01 +0x2db:  lea    -0x8c0(%ebp),%edx
08350f07 +0x2e1:  mov    %edx,0x4(%esp)
08350f0b +0x2e5:  mov    %eax,(%esp)
08350f0e +0x2e8:  call   08622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>  ; sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)
08350f13 +0x2ed:  xor    $0x1,%eax
08350f16 +0x2f0:  test   %al,%al
08350f18 +0x2f2:  je     08350f3c <+0x316>
08350f1a +0x2f4:  mov    -0x74(%ebp),%eax
08350f1d +0x2f7:  mov    %eax,0x4(%esp)
08350f21 +0x2fb:  movl   $"insert_skill_info Error: %s\n",(%esp)
08350f28 +0x302:  call   0807db60 <_init+0x458>
08350f2d +0x307:  mov    $0x0,%ebx
08350f32 +0x30c:  mov    $0x0,%esi
08350f37 +0x311:  jmp    0835103f <+0x419>
08350f3c +0x316:  lea    -0xb6c(%ebp),%eax
08350f42 +0x31c:  mov    %eax,(%esp)
08350f45 +0x31f:  call   08375642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf60e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf60e
08350f4a +0x324:  mov    -0x70(%ebp),%eax
08350f4d +0x327:  movl   $0xffffffff,0x10(%esp)
08350f55 +0x32f:  movl   $0xb,0xc(%esp)
08350f5d +0x337:  mov    %eax,0x8(%esp)
08350f61 +0x33b:  mov    -0x74(%ebp),%eax
08350f64 +0x33e:  mov    %eax,0x4(%esp)
08350f68 +0x342:  lea    -0xb6c(%ebp),%eax
08350f6e +0x348:  mov    %eax,(%esp)
08350f71 +0x34b:  call   08a9792f <_Z17ImportSkillScriptP13STSkillScriptPKc17ENUM_CHARACTERJOBii>  ; ImportSkillScript(STSkillScript*, char const*, ENUM_CHARACTERJOB, int, int)
08350f76 +0x350:  xor    $0x1,%eax
08350f79 +0x353:  test   %al,%al
08350f7b +0x355:  je     08350f9c <+0x376>
08350f7d +0x357:  mov    -0x74(%ebp),%eax
08350f80 +0x35a:  mov    %eax,0x4(%esp)
08350f84 +0x35e:  movl   $"Skill Script Error: %s\n",(%esp)
08350f8b +0x365:  call   0807db60 <_init+0x458>
08350f90 +0x36a:  mov    $0x0,%ebx
08350f95 +0x36f:  mov    $0x0,%esi
08350f9a +0x374:  jmp    08351007 <+0x3e1>
08350f9c +0x376:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08350fa1 +0x37b:  movl   $0xb,0xc(%esp)
08350fa9 +0x383:  mov    -0x70(%ebp),%edx
08350fac +0x386:  mov    %edx,0x8(%esp)
08350fb0 +0x38a:  lea    -0xb6c(%ebp),%edx
08350fb6 +0x390:  mov    %edx,0x4(%esp)
08350fba +0x394:  mov    %eax,(%esp)
08350fbd +0x397:  call   08622e08 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii>  ; sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)
08350fc2 +0x39c:  xor    $0x1,%eax
08350fc5 +0x39f:  test   %al,%al
08350fc7 +0x3a1:  je     08350fe8 <+0x3c2>
08350fc9 +0x3a3:  mov    -0x74(%ebp),%eax
08350fcc +0x3a6:  mov    %eax,0x4(%esp)
08350fd0 +0x3aa:  movl   $"insert_skill_info Error: %s\n",(%esp)
08350fd7 +0x3b1:  call   0807db60 <_init+0x458>
08350fdc +0x3b6:  mov    $0x0,%ebx
08350fe1 +0x3bb:  mov    $0x0,%esi
08350fe6 +0x3c0:  jmp    08351007 <+0x3e1>
08350fe8 +0x3c2:  mov    $0x1,%esi
08350fed +0x3c7:  jmp    08351007 <+0x3e1>
08350fef +0x3c9:  mov    %edx,%ebx
08350ff1 +0x3cb:  mov    %eax,%esi
08350ff3 +0x3cd:  lea    -0xb6c(%ebp),%eax
08350ff9 +0x3d3:  mov    %eax,(%esp)
08350ffc +0x3d6:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351001 +0x3db:  mov    %esi,%eax
08351003 +0x3dd:  mov    %ebx,%edx
08351005 +0x3df:  jmp    08351027 <+0x401>
08351007 +0x3e1:  lea    -0xb6c(%ebp),%eax
0835100d +0x3e7:  mov    %eax,(%esp)
08351010 +0x3ea:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351015 +0x3ef:  test   %esi,%esi
08351017 +0x3f1:  jne    08351020 <+0x3fa>
08351019 +0x3f3:  mov    $0x0,%esi
0835101e +0x3f8:  jmp    0835103f <+0x419>
08351020 +0x3fa:  mov    $0x1,%esi
08351025 +0x3ff:  jmp    0835103f <+0x419>
08351027 +0x401:  mov    %edx,%ebx
08351029 +0x403:  mov    %eax,%esi
0835102b +0x405:  lea    -0x8c0(%ebp),%eax
08351031 +0x40b:  mov    %eax,(%esp)
08351034 +0x40e:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351039 +0x413:  mov    %esi,%eax
0835103b +0x415:  mov    %ebx,%edx
0835103d +0x417:  jmp    0835105f <+0x439>
0835103f +0x419:  lea    -0x8c0(%ebp),%eax
08351045 +0x41f:  mov    %eax,(%esp)
08351048 +0x422:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
0835104d +0x427:  test   %esi,%esi
0835104f +0x429:  jne    08351058 <+0x432>
08351051 +0x42b:  mov    $0x0,%esi
08351056 +0x430:  jmp    0835107a <+0x454>
08351058 +0x432:  mov    $0x1,%esi
0835105d +0x437:  jmp    0835107a <+0x454>
0835105f +0x439:  mov    %edx,%ebx
08351061 +0x43b:  mov    %eax,%esi
08351063 +0x43d:  lea    -0x614(%ebp),%eax
08351069 +0x443:  mov    %eax,(%esp)
0835106c +0x446:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351071 +0x44b:  mov    %esi,%eax
08351073 +0x44d:  mov    %ebx,%edx
08351075 +0x44f:  jmp    0835196c <+0xd46>
0835107a +0x454:  lea    -0x614(%ebp),%eax
08351080 +0x45a:  mov    %eax,(%esp)
08351083 +0x45d:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351088 +0x462:  test   %esi,%esi
0835108a +0x464:  je     0835198a <+0xd64>
08351090 +0x46a:  movl   $0x19c,(%esp)
08351097 +0x471:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835109c +0x476:  mov    %eax,%esi
0835109e +0x478:  mov    %esi,%eax
083510a0 +0x47a:  mov    %eax,(%esp)
083510a3 +0x47d:  call   08374944 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe910>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe910
083510a8 +0x482:  jmp    083510bf <+0x499>
083510aa +0x484:  mov    %edx,%ebx
083510ac +0x486:  mov    %eax,%edi
083510ae +0x488:  mov    %esi,(%esp)
083510b1 +0x48b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083510b6 +0x490:  mov    %edi,%eax
083510b8 +0x492:  mov    %ebx,%edx
083510ba +0x494:  jmp    0835196c <+0xd46>
083510bf +0x499:  mov    %esi,-0x7c(%ebp)
083510c2 +0x49c:  mov    -0x368(%ebp),%eax
083510c8 +0x4a2:  mov    %eax,0x4(%esp)
083510cc +0x4a6:  mov    -0x7c(%ebp),%eax
083510cf +0x4a9:  mov    %eax,(%esp)
083510d2 +0x4ac:  call   08374b6c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb38>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb38
083510d7 +0x4b1:  lea    -0x368(%ebp),%eax
083510dd +0x4b7:  add    $0x1dc,%eax
083510e2 +0x4bc:  mov    %eax,(%esp)
083510e5 +0x4bf:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083510ea +0x4c4:  mov    %eax,%edx
083510ec +0x4c6:  movzbl -0x108(%ebp),%eax
083510f3 +0x4cd:  movzbl %al,%eax
083510f6 +0x4d0:  mov    %edx,0xc(%esp)
083510fa +0x4d4:  mov    %eax,0x8(%esp)
083510fe +0x4d8:  lea    -0x368(%ebp),%eax
08351104 +0x4de:  add    $0x60,%eax
08351107 +0x4e1:  mov    %eax,0x4(%esp)
0835110b +0x4e5:  mov    -0x7c(%ebp),%eax
0835110e +0x4e8:  mov    %eax,(%esp)
08351111 +0x4eb:  call   083507e8 <_ZN6CSkill18reform_ui_group_noERibi>  ; CSkill::reform_ui_group_no(int&, bool, int)
08351116 +0x4f0:  mov    -0x308(%ebp),%eax
0835111c +0x4f6:  mov    %eax,0x4(%esp)
08351120 +0x4fa:  mov    -0x7c(%ebp),%eax
08351123 +0x4fd:  mov    %eax,(%esp)
08351126 +0x500:  call   08374b84 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb50>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb50
0835112b +0x505:  mov    -0x70(%ebp),%eax
0835112e +0x508:  mov    %eax,0x4(%esp)
08351132 +0x50c:  mov    -0x7c(%ebp),%eax
08351135 +0x50f:  mov    %eax,(%esp)
08351138 +0x512:  call   08374ba4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb70>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb70
0835113d +0x517:  mov    -0x30c(%ebp),%eax
08351143 +0x51d:  movsbl %al,%eax
08351146 +0x520:  mov    %eax,0x4(%esp)
0835114a +0x524:  mov    -0x7c(%ebp),%eax
0835114d +0x527:  mov    %eax,(%esp)
08351150 +0x52a:  call   08374bb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb7e>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb7e
08351155 +0x52f:  mov    -0x338(%ebp),%eax
0835115b +0x535:  mov    %eax,0x4(%esp)
0835115f +0x539:  mov    -0x7c(%ebp),%eax
08351162 +0x53c:  mov    %eax,(%esp)
08351165 +0x53f:  call   08374bca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb96>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb96
0835116a +0x544:  mov    -0x334(%ebp),%edx
08351170 +0x54a:  mov    -0x7c(%ebp),%eax
08351173 +0x54d:  mov    %edx,0xc8(%eax)
08351179 +0x553:  movzbl -0x180(%ebp),%eax
08351180 +0x55a:  movzbl %al,%eax
08351183 +0x55d:  mov    %eax,0x4(%esp)
08351187 +0x561:  mov    -0x7c(%ebp),%eax
0835118a +0x564:  mov    %eax,(%esp)
0835118d +0x567:  call   08374b2c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeaf8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeaf8
08351192 +0x56c:  mov    -0x174(%ebp),%eax
08351198 +0x572:  mov    %eax,0x4(%esp)
0835119c +0x576:  mov    -0x7c(%ebp),%eax
0835119f +0x579:  mov    %eax,(%esp)
083511a2 +0x57c:  call   08374b48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb14>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb14
083511a7 +0x581:  mov    -0x178(%ebp),%eax
083511ad +0x587:  mov    %eax,0x4(%esp)
083511b1 +0x58b:  mov    -0x7c(%ebp),%eax
083511b4 +0x58e:  mov    %eax,(%esp)
083511b7 +0x591:  call   08374b5a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb26>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb26
083511bc +0x596:  movl   $0x0,-0x58(%ebp)
083511c3 +0x59d:  jmp    083511fb <+0x5d5>
083511c5 +0x59f:  mov    -0x58(%ebp),%eax
083511c8 +0x5a2:  mov    %eax,0x4(%esp)
083511cc +0x5a6:  lea    -0x368(%ebp),%eax
083511d2 +0x5ac:  add    $0x1dc,%eax
083511d7 +0x5b1:  mov    %eax,(%esp)
083511da +0x5b4:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
083511df +0x5b9:  mov    (%eax),%edx
083511e1 +0x5bb:  mov    -0x58(%ebp),%eax
083511e4 +0x5be:  mov    %edx,0x8(%esp)
083511e8 +0x5c2:  mov    %eax,0x4(%esp)
083511ec +0x5c6:  mov    -0x7c(%ebp),%eax
083511ef +0x5c9:  mov    %eax,(%esp)
083511f2 +0x5cc:  call   08374c1a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebe6
083511f7 +0x5d1:  addl   $0x1,-0x58(%ebp)
083511fb +0x5d5:  lea    -0x368(%ebp),%eax
08351201 +0x5db:  add    $0x1dc,%eax
08351206 +0x5e0:  mov    %eax,(%esp)
08351209 +0x5e3:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835120e +0x5e8:  cmp    -0x58(%ebp),%eax
08351211 +0x5eb:  seta   %al
08351214 +0x5ee:  test   %al,%al
08351216 +0x5f0:  jne    083511c5 <+0x59f>
08351218 +0x5f2:  movl   $0x0,-0x54(%ebp)
0835121f +0x5f9:  jmp    08351248 <+0x622>
08351221 +0x5fb:  mov    -0x54(%ebp),%eax
08351224 +0x5fe:  add    $0x18,%eax
08351227 +0x601:  mov    -0x364(%ebp,%eax,4),%eax
0835122e +0x608:  mov    %eax,0x8(%esp)
08351232 +0x60c:  mov    -0x54(%ebp),%eax
08351235 +0x60f:  mov    %eax,0x4(%esp)
08351239 +0x613:  mov    -0x7c(%ebp),%eax
0835123c +0x616:  mov    %eax,(%esp)
0835123f +0x619:  call   08374bdc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeba8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeba8
08351244 +0x61e:  addl   $0x1,-0x54(%ebp)
08351248 +0x622:  cmpl   $0x5,-0x54(%ebp)
0835124c +0x626:  setle  %al
0835124f +0x629:  test   %al,%al
08351251 +0x62b:  jne    08351221 <+0x5fb>
08351253 +0x62d:  movl   $0x0,-0x50(%ebp)
0835125a +0x634:  jmp    08351283 <+0x65d>
0835125c +0x636:  mov    -0x50(%ebp),%eax
0835125f +0x639:  add    $0x1c,%eax
08351262 +0x63c:  mov    -0x35c(%ebp,%eax,4),%eax
08351269 +0x643:  mov    %eax,0x8(%esp)
0835126d +0x647:  mov    -0x50(%ebp),%eax
08351270 +0x64a:  mov    %eax,0x4(%esp)
08351274 +0x64e:  mov    -0x7c(%ebp),%eax
08351277 +0x651:  mov    %eax,(%esp)
0835127a +0x654:  call   08374bf2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebbe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebbe
0835127f +0x659:  addl   $0x1,-0x50(%ebp)
08351283 +0x65d:  cmpl   $0x5,-0x50(%ebp)
08351287 +0x661:  setle  %al
0835128a +0x664:  test   %al,%al
0835128c +0x666:  jne    0835125c <+0x636>
0835128e +0x668:  movl   $0x0,-0x4c(%ebp)
08351295 +0x66f:  jmp    08351307 <+0x6e1>
08351297 +0x671:  lea    -0x368(%ebp),%eax
0835129d +0x677:  add    $0xf4,%eax
083512a2 +0x67c:  mov    %eax,(%esp)
083512a5 +0x67f:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
083512aa +0x684:  xor    $0x1,%eax
083512ad +0x687:  test   %al,%al
083512af +0x689:  je     08351303 <+0x6dd>
083512b1 +0x68b:  lea    -0x368(%ebp),%eax
083512b7 +0x691:  add    $0xf4,%eax
083512bc +0x696:  mov    %eax,(%esp)
083512bf +0x699:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083512c4 +0x69e:  cmp    -0x4c(%ebp),%eax
083512c7 +0x6a1:  seta   %al
083512ca +0x6a4:  test   %al,%al
083512cc +0x6a6:  je     08351303 <+0x6dd>
083512ce +0x6a8:  mov    -0x4c(%ebp),%eax
083512d1 +0x6ab:  mov    %eax,0x4(%esp)
083512d5 +0x6af:  lea    -0x368(%ebp),%eax
083512db +0x6b5:  add    $0xf4,%eax
083512e0 +0x6ba:  mov    %eax,(%esp)
083512e3 +0x6bd:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
083512e8 +0x6c2:  mov    (%eax),%edx
083512ea +0x6c4:  mov    -0x4c(%ebp),%eax
083512ed +0x6c7:  add    $0x1,%eax
083512f0 +0x6ca:  mov    %edx,0x8(%esp)
083512f4 +0x6ce:  mov    %eax,0x4(%esp)
083512f8 +0x6d2:  mov    -0x7c(%ebp),%eax
083512fb +0x6d5:  mov    %eax,(%esp)
083512fe +0x6d8:  call   083506ae <_ZN6CSkill27set_fitness_second_growtypeEii>  ; CSkill::set_fitness_second_growtype(int, int)
08351303 +0x6dd:  addl   $0x1,-0x4c(%ebp)
08351307 +0x6e1:  cmpl   $0x1,-0x4c(%ebp)
0835130b +0x6e5:  setbe  %al
0835130e +0x6e8:  test   %al,%al
08351310 +0x6ea:  jne    08351297 <+0x671>
08351312 +0x6ec:  movl   $0x0,-0x48(%ebp)
08351319 +0x6f3:  jmp    0835136d <+0x747>
0835131b +0x6f5:  movl   $0x0,-0x44(%ebp)
08351322 +0x6fc:  jmp    0835135e <+0x738>
08351324 +0x6fe:  mov    -0x48(%ebp),%edx
08351327 +0x701:  mov    -0x44(%ebp),%eax
0835132a +0x704:  shl    $0x2,%edx
0835132d +0x707:  lea    (%edx,%eax,1),%eax
08351330 +0x70a:  add    $0x24,%eax
08351333 +0x70d:  mov    -0x364(%ebp,%eax,4),%eax
0835133a +0x714:  mov    -0x44(%ebp),%edx
0835133d +0x717:  add    $0x1,%edx
08351340 +0x71a:  mov    %eax,0xc(%esp)
08351344 +0x71e:  mov    %edx,0x8(%esp)
08351348 +0x722:  mov    -0x48(%ebp),%eax
0835134b +0x725:  mov    %eax,0x4(%esp)
0835134f +0x729:  mov    -0x7c(%ebp),%eax
08351352 +0x72c:  mov    %eax,(%esp)
08351355 +0x72f:  call   0835057a <_ZN6CSkill27set_second_growtype_fitnessEiii>  ; CSkill::set_second_growtype_fitness(int, int, int)
0835135a +0x734:  addl   $0x1,-0x44(%ebp)
0835135e +0x738:  cmpl   $0x1,-0x44(%ebp)
08351362 +0x73c:  setle  %al
08351365 +0x73f:  test   %al,%al
08351367 +0x741:  jne    08351324 <+0x6fe>
08351369 +0x743:  addl   $0x1,-0x48(%ebp)
0835136d +0x747:  cmpl   $0x5,-0x48(%ebp)
08351371 +0x74b:  setle  %al
08351374 +0x74e:  test   %al,%al
08351376 +0x750:  jne    0835131b <+0x6f5>
08351378 +0x752:  movl   $0x0,-0x40(%ebp)
0835137f +0x759:  jmp    083513d3 <+0x7ad>
08351381 +0x75b:  movl   $0x0,-0x3c(%ebp)
08351388 +0x762:  jmp    083513c4 <+0x79e>
0835138a +0x764:  mov    -0x40(%ebp),%edx
0835138d +0x767:  mov    -0x3c(%ebp),%eax
08351390 +0x76a:  shl    $0x2,%edx
08351393 +0x76d:  lea    (%edx,%eax,1),%eax
08351396 +0x770:  add    $0x24,%eax
08351399 +0x773:  mov    -0x35c(%ebp,%eax,4),%eax
083513a0 +0x77a:  mov    -0x3c(%ebp),%edx
083513a3 +0x77d:  add    $0x1,%edx
083513a6 +0x780:  mov    %eax,0xc(%esp)
083513aa +0x784:  mov    %edx,0x8(%esp)
083513ae +0x788:  mov    -0x40(%ebp),%eax
083513b1 +0x78b:  mov    %eax,0x4(%esp)
083513b5 +0x78f:  mov    -0x7c(%ebp),%eax
083513b8 +0x792:  mov    %eax,(%esp)
083513bb +0x795:  call   08350614 <_ZN6CSkill29set_second_growtype_max_levelEiii>  ; CSkill::set_second_growtype_max_level(int, int, int)
083513c0 +0x79a:  addl   $0x1,-0x3c(%ebp)
083513c4 +0x79e:  cmpl   $0x1,-0x3c(%ebp)
083513c8 +0x7a2:  setle  %al
083513cb +0x7a5:  test   %al,%al
083513cd +0x7a7:  jne    0835138a <+0x764>
083513cf +0x7a9:  addl   $0x1,-0x40(%ebp)
083513d3 +0x7ad:  cmpl   $0x5,-0x40(%ebp)
083513d7 +0x7b1:  setle  %al
083513da +0x7b4:  test   %al,%al
083513dc +0x7b6:  jne    08351381 <+0x75b>
083513de +0x7b8:  lea    -0x368(%ebp),%eax
083513e4 +0x7be:  add    $0x18,%eax
083513e7 +0x7c1:  mov    %eax,(%esp)
083513ea +0x7c4:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083513ef +0x7c9:  mov    %eax,-0x6c(%ebp)
083513f2 +0x7cc:  movl   $0x0,-0x38(%ebp)
083513f9 +0x7d3:  jmp    08351428 <+0x802>
083513fb +0x7d5:  mov    -0x38(%ebp),%eax
083513fe +0x7d8:  mov    %eax,0x4(%esp)
08351402 +0x7dc:  lea    -0x368(%ebp),%eax
08351408 +0x7e2:  add    $0x18,%eax
0835140b +0x7e5:  mov    %eax,(%esp)
0835140e +0x7e8:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08351413 +0x7ed:  mov    (%eax),%eax
08351415 +0x7ef:  mov    %eax,0x4(%esp)
08351419 +0x7f3:  mov    -0x7c(%ebp),%eax
0835141c +0x7f6:  mov    %eax,(%esp)
0835141f +0x7f9:  call   0834ffe8 <_ZN6CSkill11add_need_spEi>  ; CSkill::add_need_sp(int)
08351424 +0x7fe:  addl   $0x1,-0x38(%ebp)
08351428 +0x802:  mov    -0x38(%ebp),%eax
0835142b +0x805:  cmp    -0x6c(%ebp),%eax
0835142e +0x808:  setl   %al
08351431 +0x80b:  test   %al,%al
08351433 +0x80d:  jne    083513fb <+0x7d5>
08351435 +0x80f:  lea    -0x368(%ebp),%eax
0835143b +0x815:  add    $0x24,%eax
0835143e +0x818:  mov    %eax,(%esp)
08351441 +0x81b:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08351446 +0x820:  mov    %eax,-0x68(%ebp)
08351449 +0x823:  movl   $0x0,-0x34(%ebp)
08351450 +0x82a:  jmp    0835147f <+0x859>
08351452 +0x82c:  mov    -0x34(%ebp),%eax
08351455 +0x82f:  mov    %eax,0x4(%esp)
08351459 +0x833:  lea    -0x368(%ebp),%eax
0835145f +0x839:  add    $0x24,%eax
08351462 +0x83c:  mov    %eax,(%esp)
08351465 +0x83f:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
0835146a +0x844:  mov    (%eax),%eax
0835146c +0x846:  mov    %eax,0x4(%esp)
08351470 +0x84a:  mov    -0x7c(%ebp),%eax
08351473 +0x84d:  mov    %eax,(%esp)
08351476 +0x850:  call   08350006 <_ZN6CSkill12add_need_sfpEi>  ; CSkill::add_need_sfp(int)
0835147b +0x855:  addl   $0x1,-0x34(%ebp)
0835147f +0x859:  mov    -0x34(%ebp),%eax
08351482 +0x85c:  cmp    -0x68(%ebp),%eax
08351485 +0x85f:  setl   %al
08351488 +0x862:  test   %al,%al
0835148a +0x864:  jne    08351452 <+0x82c>
0835148c +0x866:  lea    -0x368(%ebp),%eax
08351492 +0x86c:  add    $0x44,%eax
08351495 +0x86f:  mov    %eax,(%esp)
08351498 +0x872:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835149d +0x877:  mov    %eax,-0x64(%ebp)
083514a0 +0x87a:  movl   $0x0,-0x30(%ebp)
083514a7 +0x881:  jmp    08351516 <+0x8f0>
083514a9 +0x883:  mov    -0x30(%ebp),%eax
083514ac +0x886:  mov    %eax,0x4(%esp)
083514b0 +0x88a:  lea    -0x368(%ebp),%eax
083514b6 +0x890:  add    $0x44,%eax
083514b9 +0x893:  mov    %eax,(%esp)
083514bc +0x896:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
083514c1 +0x89b:  mov    (%eax),%eax
083514c3 +0x89d:  mov    %eax,-0xa4(%ebp)
083514c9 +0x8a3:  mov    -0x30(%ebp),%eax
083514cc +0x8a6:  mov    %eax,0x4(%esp)
083514d0 +0x8aa:  lea    -0x368(%ebp),%eax
083514d6 +0x8b0:  add    $0x50,%eax
083514d9 +0x8b3:  mov    %eax,(%esp)
083514dc +0x8b6:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
083514e1 +0x8bb:  mov    (%eax),%eax
083514e3 +0x8bd:  mov    %eax,-0xa0(%ebp)
083514e9 +0x8c3:  mov    -0xa4(%ebp),%eax
083514ef +0x8c9:  mov    %eax,0x4(%esp)
083514f3 +0x8cd:  mov    -0xa0(%ebp),%eax
083514f9 +0x8d3:  mov    %eax,0x8(%esp)
083514fd +0x8d7:  mov    -0x9c(%ebp),%eax
08351503 +0x8dd:  mov    %eax,0xc(%esp)
08351507 +0x8e1:  mov    -0x7c(%ebp),%eax
0835150a +0x8e4:  mov    %eax,(%esp)
0835150d +0x8e7:  call   0834ffca <_ZN6CSkill17add_learned_skillE10_pre_skill>  ; CSkill::add_learned_skill(_pre_skill)
08351512 +0x8ec:  addl   $0x1,-0x30(%ebp)
08351516 +0x8f0:  mov    -0x30(%ebp),%eax
08351519 +0x8f3:  cmp    -0x64(%ebp),%eax
0835151c +0x8f6:  setl   %al
0835151f +0x8f9:  test   %al,%al
08351521 +0x8fb:  jne    083514a9 <+0x883>
08351523 +0x8fd:  lea    -0x368(%ebp),%eax
08351529 +0x903:  add    $0x204,%eax
0835152e +0x908:  mov    %eax,(%esp)
08351531 +0x90b:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08351536 +0x910:  mov    %eax,-0x60(%ebp)
08351539 +0x913:  movl   $0x0,-0x2c(%ebp)
08351540 +0x91a:  jmp    08351575 <+0x94f>
08351542 +0x91c:  mov    -0x2c(%ebp),%eax
08351545 +0x91f:  mov    %eax,0x4(%esp)
08351549 +0x923:  lea    -0x368(%ebp),%eax
0835154f +0x929:  add    $0x204,%eax
08351554 +0x92e:  mov    %eax,(%esp)
08351557 +0x931:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
0835155c +0x936:  mov    -0x7c(%ebp),%edx
0835155f +0x939:  add    $0xe4,%edx
08351565 +0x93f:  mov    %eax,0x4(%esp)
08351569 +0x943:  mov    %edx,(%esp)
0835156c +0x946:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08351571 +0x94b:  addl   $0x1,-0x2c(%ebp)
08351575 +0x94f:  mov    -0x2c(%ebp),%eax
08351578 +0x952:  cmp    -0x60(%ebp),%eax
0835157b +0x955:  setl   %al
0835157e +0x958:  test   %al,%al
08351580 +0x95a:  jne    08351542 <+0x91c>
08351582 +0x95c:  lea    -0x368(%ebp),%eax
08351588 +0x962:  add    $0x210,%eax
0835158d +0x967:  mov    %eax,(%esp)
08351590 +0x96a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08351595 +0x96f:  mov    %eax,-0x5c(%ebp)
08351598 +0x972:  movl   $0x0,-0x28(%ebp)
0835159f +0x979:  jmp    083515d4 <+0x9ae>
083515a1 +0x97b:  mov    -0x28(%ebp),%eax
083515a4 +0x97e:  mov    %eax,0x4(%esp)
083515a8 +0x982:  lea    -0x368(%ebp),%eax
083515ae +0x988:  add    $0x210,%eax
083515b3 +0x98d:  mov    %eax,(%esp)
083515b6 +0x990:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
083515bb +0x995:  mov    -0x7c(%ebp),%edx
083515be +0x998:  add    $0xf0,%edx
083515c4 +0x99e:  mov    %eax,0x4(%esp)
083515c8 +0x9a2:  mov    %edx,(%esp)
083515cb +0x9a5:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
083515d0 +0x9aa:  addl   $0x1,-0x28(%ebp)
083515d4 +0x9ae:  mov    -0x28(%ebp),%eax
083515d7 +0x9b1:  cmp    -0x5c(%ebp),%eax
083515da +0x9b4:  setl   %al
083515dd +0x9b7:  test   %al,%al
083515df +0x9b9:  jne    083515a1 <+0x97b>
083515e1 +0x9bb:  mov    -0x32c(%ebp),%edx
083515e7 +0x9c1:  mov    -0x7c(%ebp),%eax
083515ea +0x9c4:  mov    %edx,0xfc(%eax)
083515f0 +0x9ca:  mov    -0x328(%ebp),%edx
083515f6 +0x9d0:  mov    -0x7c(%ebp),%eax
083515f9 +0x9d3:  mov    %edx,0x100(%eax)
083515ff +0x9d9:  mov    -0x354(%ebp),%edx
08351605 +0x9df:  mov    -0x7c(%ebp),%eax
08351608 +0x9e2:  mov    %edx,0x104(%eax)
0835160e +0x9e8:  movl   $0x0,-0x24(%ebp)
08351615 +0x9ef:  jmp    08351726 <+0xb00>
0835161a +0x9f4:  lea    -0xb4(%ebp),%eax
08351620 +0x9fa:  mov    %eax,(%esp)
08351623 +0x9fd:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08351628 +0xa02:  movl   $0x0,-0x20(%ebp)
0835162f +0xa09:  jmp    083516ac <+0xa86>
08351631 +0xa0b:  mov    -0x24(%ebp),%eax
08351634 +0xa0e:  mov    %eax,0x4(%esp)
08351638 +0xa12:  lea    -0x368(%ebp),%eax
0835163e +0xa18:  add    $0x1a8,%eax
08351643 +0xa1d:  mov    %eax,(%esp)
08351646 +0xa20:  call   0838f828 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f2c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f2c8
0835164b +0xa25:  mov    -0x20(%ebp),%edx
0835164e +0xa28:  mov    %edx,0x4(%esp)
08351652 +0xa2c:  mov    %eax,(%esp)
08351655 +0xa2f:  call   0838f842 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f2e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f2e2
0835165a +0xa34:  flds   (%eax)
0835165c +0xa36:  fnstcw -0xb8a(%ebp)
08351662 +0xa3c:  movzwl -0xb8a(%ebp),%eax
08351669 +0xa43:  mov    $0xc,%ah
0835166b +0xa45:  mov    %ax,-0xb8c(%ebp)
08351672 +0xa4c:  fldcw  -0xb8c(%ebp)
08351678 +0xa52:  fistpl -0xb90(%ebp)
0835167e +0xa58:  fldcw  -0xb8a(%ebp)
08351684 +0xa5e:  mov    -0xb90(%ebp),%eax
0835168a +0xa64:  mov    %eax,-0x94(%ebp)
08351690 +0xa6a:  lea    -0x94(%ebp),%eax
08351696 +0xa70:  mov    %eax,0x4(%esp)
0835169a +0xa74:  lea    -0xb4(%ebp),%eax
083516a0 +0xa7a:  mov    %eax,(%esp)
083516a3 +0xa7d:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
083516a8 +0xa82:  addl   $0x1,-0x20(%ebp)
083516ac +0xa86:  mov    -0x24(%ebp),%eax
083516af +0xa89:  mov    %eax,0x4(%esp)
083516b3 +0xa8d:  lea    -0x368(%ebp),%eax
083516b9 +0xa93:  add    $0x1a8,%eax
083516be +0xa98:  mov    %eax,(%esp)
083516c1 +0xa9b:  call   0838f828 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f2c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f2c8
083516c6 +0xaa0:  mov    %eax,(%esp)
083516c9 +0xaa3:  call   082f10ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xe72>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xe72
083516ce +0xaa8:  cmp    -0x20(%ebp),%eax
083516d1 +0xaab:  seta   %al
083516d4 +0xaae:  test   %al,%al
083516d6 +0xab0:  jne    08351631 <+0xa0b>
083516dc +0xab6:  mov    -0x7c(%ebp),%eax
083516df +0xab9:  lea    0x108(%eax),%edx
083516e5 +0xabf:  lea    -0xb4(%ebp),%eax
083516eb +0xac5:  mov    %eax,0x4(%esp)
083516ef +0xac9:  mov    %edx,(%esp)
083516f2 +0xacc:  call   0838f86e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f30e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f30e
083516f7 +0xad1:  jmp    08351714 <+0xaee>
083516f9 +0xad3:  mov    %edx,%ebx
083516fb +0xad5:  mov    %eax,%esi
083516fd +0xad7:  lea    -0xb4(%ebp),%eax
08351703 +0xadd:  mov    %eax,(%esp)
08351706 +0xae0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0835170b +0xae5:  mov    %esi,%eax
0835170d +0xae7:  mov    %ebx,%edx
0835170f +0xae9:  jmp    0835196c <+0xd46>
08351714 +0xaee:  lea    -0xb4(%ebp),%eax
0835171a +0xaf4:  mov    %eax,(%esp)
0835171d +0xaf7:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08351722 +0xafc:  addl   $0x1,-0x24(%ebp)
08351726 +0xb00:  lea    -0x368(%ebp),%eax
0835172c +0xb06:  add    $0x1a8,%eax
08351731 +0xb0b:  mov    %eax,(%esp)
08351734 +0xb0e:  call   0838f806 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f2a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f2a6
08351739 +0xb13:  cmp    -0x24(%ebp),%eax
0835173c +0xb16:  seta   %al
0835173f +0xb19:  test   %al,%al
08351741 +0xb1b:  jne    0835161a <+0x9f4>
08351747 +0xb21:  movzbl -0x108(%ebp),%eax
0835174e +0xb28:  mov    %eax,%edx
08351750 +0xb2a:  mov    -0x7c(%ebp),%eax
08351753 +0xb2d:  mov    %dl,0x120(%eax)
08351759 +0xb33:  mov    -0x7c(%ebp),%eax
0835175c +0xb36:  add    $0x124,%eax
08351761 +0xb3b:  lea    -0x368(%ebp),%edx
08351767 +0xb41:  add    $0x170,%edx
0835176d +0xb47:  mov    %edx,0x4(%esp)
08351771 +0xb4b:  mov    %eax,(%esp)
08351774 +0xb4e:  call   0838f8e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f382>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f382
08351779 +0xb53:  movzbl -0xe8(%ebp),%edx
08351780 +0xb5a:  mov    -0x7c(%ebp),%eax
08351783 +0xb5d:  mov    %dl,0x130(%eax)
08351789 +0xb63:  lea    -0x368(%ebp),%eax
0835178f +0xb69:  add    $0x4,%eax
08351792 +0xb6c:  mov    %eax,(%esp)
08351795 +0xb6f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0835179a +0xb74:  mov    %eax,0x4(%esp)
0835179e +0xb78:  mov    -0x7c(%ebp),%eax
083517a1 +0xb7b:  mov    %eax,(%esp)
083517a4 +0xb7e:  call   08374c30 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xebfc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xebfc
083517a9 +0xb83:  mov    -0x330(%ebp),%edx
083517af +0xb89:  mov    -0x7c(%ebp),%eax
083517b2 +0xb8c:  mov    %edx,0x198(%eax)
083517b8 +0xb92:  mov    -0x7c(%ebp),%eax
083517bb +0xb95:  mov    %eax,0x8(%esp)
083517bf +0xb99:  mov    -0x70(%ebp),%eax
083517c2 +0xb9c:  mov    %eax,0x4(%esp)
083517c6 +0xba0:  mov    0x8(%ebp),%eax
083517c9 +0xba3:  mov    %eax,(%esp)
083517cc +0xba6:  call   083519a6 <_ZN10CSkillList12insert_skillEiP6CSkill>  ; CSkillList::insert_skill(int, CSkill*)
083517d1 +0xbab:  lea    -0x90(%ebp),%eax
083517d7 +0xbb1:  movl   $0x0,0x8(%esp)
083517df +0xbb9:  lea    -0xa8(%ebp),%edx
083517e5 +0xbbf:  mov    %edx,0x4(%esp)
083517e9 +0xbc3:  mov    %eax,(%esp)
083517ec +0xbc6:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
083517f1 +0xbcb:  sub    $0x4,%esp
083517f4 +0xbce:  addl   $0x1,-0x78(%ebp)
083517f8 +0xbd2:  mov    -0x70(%ebp),%edx
083517fb +0xbd5:  mov    %edx,%eax
083517fd +0xbd7:  add    %eax,%eax
083517ff +0xbd9:  add    %edx,%eax
08351801 +0xbdb:  shl    $0x3,%eax
08351804 +0xbde:  lea    &g_staSkillScriptFileList(%eax),%edx
0835180a +0xbe4:  lea    -0x98(%ebp),%eax
08351810 +0xbea:  mov    %edx,0x4(%esp)
08351814 +0xbee:  mov    %eax,(%esp)
08351817 +0xbf1:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0835181c +0xbf6:  sub    $0x4,%esp
0835181f +0xbf9:  lea    -0x98(%ebp),%eax
08351825 +0xbff:  mov    %eax,0x4(%esp)
08351829 +0xc03:  lea    -0xa8(%ebp),%eax
0835182f +0xc09:  mov    %eax,(%esp)
08351832 +0xc0c:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08351837 +0xc11:  test   %al,%al
08351839 +0xc13:  jne    08350cc1 <+0x9b>
0835183f +0xc19:  jmp    08351842 <+0xc1c>
08351841 +0xc1b:  nop
08351842 +0xc1c:  addl   $0x1,-0x70(%ebp)
08351846 +0xc20:  cmpl   $0xa,-0x70(%ebp)
0835184a +0xc24:  setle  %al
0835184d +0xc27:  test   %al,%al
0835184f +0xc29:  jne    08350c89 <+0x63>
08351855 +0xc2f:  movl   $0x0,-0x1c(%ebp)
0835185c +0xc36:  jmp    08351956 <+0xd30>
08351861 +0xc3b:  lea    -0xbc(%ebp),%eax
08351867 +0xc41:  mov    %eax,(%esp)
0835186a +0xc44:  call   0838fb58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5f8
0835186f +0xc49:  mov    -0x1c(%ebp),%edx
08351872 +0xc4c:  mov    %edx,%eax
08351874 +0xc4e:  shl    $0x2,%eax
08351877 +0xc51:  add    %edx,%eax
08351879 +0xc53:  shl    $0x2,%eax
0835187c +0xc56:  mov    %eax,%edx
0835187e +0xc58:  add    0x8(%ebp),%edx
08351881 +0xc5b:  lea    -0xb88(%ebp),%eax
08351887 +0xc61:  mov    %edx,0x4(%esp)
0835188b +0xc65:  mov    %eax,(%esp)
0835188e +0xc68:  call   0838f6d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f178>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f178
08351893 +0xc6d:  sub    $0x4,%esp
08351896 +0xc70:  mov    -0xb88(%ebp),%eax
0835189c +0xc76:  mov    -0xb84(%ebp),%edx
083518a2 +0xc7c:  mov    %eax,-0xbc(%ebp)
083518a8 +0xc82:  mov    %edx,-0xb8(%ebp)
083518ae +0xc88:  jmp    0835190b <+0xce5>
083518b0 +0xc8a:  lea    -0xbc(%ebp),%eax
083518b6 +0xc90:  mov    %eax,(%esp)
083518b9 +0xc93:  call   0838fb5e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f5fe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f5fe
083518be +0xc98:  mov    0x4(%eax),%eax
083518c1 +0xc9b:  mov    %eax,-0x7c(%ebp)
083518c4 +0xc9e:  mov    -0x7c(%ebp),%eax
083518c7 +0xca1:  mov    %eax,(%esp)
083518ca +0xca4:  call   08350024 <_ZN6CSkill20set_prelearned_skillEv>  ; CSkill::set_prelearned_skill()
083518cf +0xca9:  mov    -0x7c(%ebp),%eax
083518d2 +0xcac:  mov    %eax,0x8(%esp)
083518d6 +0xcb0:  mov    -0x1c(%ebp),%eax
083518d9 +0xcb3:  mov    %eax,0x4(%esp)
083518dd +0xcb7:  mov    0x8(%ebp),%eax
083518e0 +0xcba:  mov    %eax,(%esp)
083518e3 +0xcbd:  call   08351e18 <_ZN10CSkillList23set_post_learning_skillEiP6CSkill>  ; CSkillList::set_post_learning_skill(int, CSkill*)
083518e8 +0xcc2:  lea    -0x84(%ebp),%eax
083518ee +0xcc8:  movl   $0x0,0x8(%esp)
083518f6 +0xcd0:  lea    -0xbc(%ebp),%edx
083518fc +0xcd6:  mov    %edx,0x4(%esp)
08351900 +0xcda:  mov    %eax,(%esp)
08351903 +0xcdd:  call   0838fb72 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f612>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f612
08351908 +0xce2:  sub    $0x4,%esp
0835190b +0xce5:  mov    -0x1c(%ebp),%edx
0835190e +0xce8:  mov    %edx,%eax
08351910 +0xcea:  shl    $0x2,%eax
08351913 +0xced:  add    %edx,%eax
08351915 +0xcef:  shl    $0x2,%eax
08351918 +0xcf2:  mov    %eax,%edx
0835191a +0xcf4:  add    0x8(%ebp),%edx
0835191d +0xcf7:  lea    -0x8c(%ebp),%eax
08351923 +0xcfd:  mov    %edx,0x4(%esp)
08351927 +0xd01:  mov    %eax,(%esp)
0835192a +0xd04:  call   0838f6fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f19e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f19e
0835192f +0xd09:  sub    $0x4,%esp
08351932 +0xd0c:  lea    -0x8c(%ebp),%eax
08351938 +0xd12:  mov    %eax,0x4(%esp)
0835193c +0xd16:  lea    -0xbc(%ebp),%eax
08351942 +0xd1c:  mov    %eax,(%esp)
08351945 +0xd1f:  call   0838f724 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1f1c4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1f1c4
0835194a +0xd24:  test   %al,%al
0835194c +0xd26:  jne    083518b0 <+0xc8a>
08351952 +0xd2c:  addl   $0x1,-0x1c(%ebp)
08351956 +0xd30:  cmpl   $0xa,-0x1c(%ebp)
0835195a +0xd34:  setle  %al
0835195d +0xd37:  test   %al,%al
0835195f +0xd39:  jne    08351861 <+0xc3b>
08351965 +0xd3f:  mov    $0x1,%ebx
0835196a +0xd44:  jmp    0835198a <+0xd64>
0835196c +0xd46:  mov    %edx,%ebx
0835196e +0xd48:  mov    %eax,%esi
08351970 +0xd4a:  lea    -0x368(%ebp),%eax
08351976 +0xd50:  mov    %eax,(%esp)
08351979 +0xd53:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
0835197e +0xd58:  mov    %esi,%eax
08351980 +0xd5a:  mov    %ebx,%edx
08351982 +0xd5c:  mov    %eax,(%esp)
08351985 +0xd5f:  call   08ae3750 <_Unwind_Resume>
0835198a +0xd64:  lea    -0x368(%ebp),%eax
08351990 +0xd6a:  mov    %eax,(%esp)
08351993 +0xd6d:  call   0837a0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9b9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9b9a
08351998 +0xd72:  mov    %ebx,%eax
0835199a +0xd74:  lea    -0xc(%ebp),%esp
0835199d +0xd77:  add    $0x0,%esp
083519a0 +0xd7a:  pop    %ebx
083519a1 +0xd7b:  pop    %esi
083519a2 +0xd7c:  pop    %edi
083519a3 +0xd7d:  pop    %ebp
083519a4 +0xd7e:  ret
083519a5 +0xd7f:  nop
```

## 反编译 C

```c
// CSkillList::init @ 0x8350c26

/* CSkillList::init() */

undefined4 __thiscall CSkillList::init(CSkillList *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  CSkill *this_00;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  vector<float,std::allocator<float>> *pvVar8;
  char *pcVar9;
  int iVar10;
  undefined4 unaff_EBX;
  undefined4 local_b8c;
  undefined4 local_b88;
  undefined4 local_b80 [4];
  STSkillScript local_b70 [684];
  STSkillScript local_8c4 [684];
  STSkillScript local_618 [684];
  int local_36c;
  string asStack_368 [8];
  int aiStack_360 [3];
  vector<int,std::allocator<int>> avStack_354 [12];
  vector<int,std::allocator<int>> avStack_348 [12];
  int local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  vector<int,std::allocator<int>> avStack_328 [12];
  vector<int,std::allocator<int>> avStack_31c [16];
  int local_30c [37];
  vector<int,std::allocator<int>> avStack_278 [124];
  vector avStack_1fc [56];
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  avStack_1c4 [52];
  vector<int,std::allocator<int>> avStack_190 [12];
  bool local_184;
  int local_17c;
  int local_178;
  vector<int,std::allocator<int>> avStack_168 [12];
  vector<int,std::allocator<int>> avStack_15c [80];
  CSkill local_10c;
  CSkill local_ec;
  undefined4 local_c0;
  undefined4 local_bc;
  vector<int,std::allocator<int>> local_b8 [12];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_9c [4];
  int local_98;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_94 [4];
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> local_90 [8]
  ;
  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
  local_88 [8];
  CSkill *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  
  STSkillScript::STSkillScript((STSkillScript *)&local_36c);
  local_80 = (CSkill *)0x0;
                    /* try { // try from 08350c47 to 08350de5 has its CatchHandler @ 0835196c */
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_skill_index(pCVar3);
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::trancate_skill_info(pCVar3);
  local_7c = 0;
  local_78 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac);
  local_74 = 0;
  do {
    if (10 < local_74) {
      for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
        __gnu_cxx::
        _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
        ::_Hashtable_iterator();
        __gnu_cxx::
        hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::begin
                  ((hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
                    *)&local_b8c);
        local_c0 = local_b8c;
        local_bc = local_b88;
        while( true ) {
          __gnu_cxx::
          hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::end
                    (local_90);
          cVar2 = __gnu_cxx::
                  _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                  ::operator!=((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                                *)&local_c0,(_Hashtable_iterator *)local_90);
          if (cVar2 == '\0') break;
          iVar10 = __gnu_cxx::
                   _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                   ::operator->((_Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
                                 *)&local_c0);
          local_80 = *(CSkill **)(iVar10 + 4);
          CSkill::set_prelearned_skill(local_80);
          set_post_learning_skill(this,local_20,local_80);
          __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CSkill*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CSkill*>>,std::equal_to<int>,std::allocator<CSkill*>>
          ::operator++(local_88,(int)&local_c0);
        }
      }
      unaff_EBX = 1;
LAB_0835198a:
      STSkillScript::~STSkillScript((STSkillScript *)&local_36c);
      return unaff_EBX;
    }
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_b80);
    local_ac = local_b80[0];
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_9c);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac,
                         (_Rb_tree_iterator *)local_9c);
      if (cVar2 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_ac);
      local_78 = std::string::c_str((string *)(iVar10 + 4));
      if (local_78 == 0) break;
      cVar2 = ImportSkillScript(&local_36c,local_78,local_74,0,0xffffffff);
      if (cVar2 != '\x01') {
        printf("Skill Script Error: %s\n",local_78);
        unaff_EBX = 0;
        goto LAB_0835198a;
      }
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::insert_skill_index
                        (pCVar3,(STSkillScript *)&local_36c,local_74);
      if (cVar2 != '\x01') {
        printf("insert_skill_index Error: %s\n",local_78);
        unaff_EBX = 0;
        goto LAB_0835198a;
      }
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::IsEnable(pCVar3);
      if (cVar2 != '\0') {
        pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar2 = sync_script::CSyncScript::insert_skill_info
                          (pCVar3,(STSkillScript *)&local_36c,local_74,0);
        if (cVar2 != '\x01') {
          printf("insert_skill_info Error: %s\n",local_78);
          unaff_EBX = 0;
          goto LAB_0835198a;
        }
        STSkillScript::STSkillScript(local_618);
                    /* try { // try from 08350e0d to 08350e97 has its CatchHandler @ 0835105f */
        cVar2 = ImportSkillScript(local_618,local_78,local_74,4,0xffffffff);
        if (cVar2 == '\x01') {
          pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
          cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_618,local_74,4);
          if (cVar2 == '\x01') {
            STSkillScript::STSkillScript(local_8c4);
                    /* try { // try from 08350ebf to 08350f49 has its CatchHandler @ 08351027 */
            cVar2 = ImportSkillScript(local_8c4,local_78,local_74,6,0xffffffff);
            if (cVar2 == '\x01') {
              pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
              cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_8c4,local_74,6);
              if (cVar2 == '\x01') {
                STSkillScript::STSkillScript(local_b70);
                    /* try { // try from 08350f71 to 08350fdb has its CatchHandler @ 08350fef */
                cVar2 = ImportSkillScript(local_b70,local_78,local_74,0xb,0xffffffff);
                if (cVar2 == '\x01') {
                  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
                  cVar2 = sync_script::CSyncScript::insert_skill_info(pCVar3,local_b70,local_74,0xb)
                  ;
                  if (cVar2 == '\x01') {
                    bVar1 = true;
                  }
                  else {
                    printf("insert_skill_info Error: %s\n",local_78);
                    unaff_EBX = 0;
                    bVar1 = false;
                  }
                }
                else {
                  printf("Skill Script Error: %s\n",local_78);
                  unaff_EBX = 0;
                  bVar1 = false;
                }
                    /* try { // try from 08351010 to 08351014 has its CatchHandler @ 08351027 */
                STSkillScript::~STSkillScript(local_b70);
                if (bVar1) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
              }
              else {
                printf("insert_skill_info Error: %s\n",local_78);
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
            else {
              printf("Skill Script Error: %s\n",local_78);
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 08351048 to 0835104c has its CatchHandler @ 0835105f */
            STSkillScript::~STSkillScript(local_8c4);
            if (bVar1) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            printf("insert_skill_info Error: %s\n",local_78);
            unaff_EBX = 0;
            bVar1 = false;
          }
        }
        else {
          printf("Skill Script Error: %s\n",local_78);
          unaff_EBX = 0;
          bVar1 = false;
        }
                    /* try { // try from 08351083 to 0835109b has its CatchHandler @ 0835196c */
        STSkillScript::~STSkillScript(local_618);
        if (!bVar1) goto LAB_0835198a;
      }
      this_00 = operator_new(0x19c);
                    /* try { // try from 083510a3 to 083510a7 has its CatchHandler @ 083510aa */
      CSkill::CSkill(this_00);
      local_80 = this_00;
      CSkill::set_index(this_00,local_36c);
      iVar10 = std::vector<int,std::allocator<int>>::size(avStack_190);
      CSkill::reform_ui_group_no(local_80,local_30c,(bool)local_10c,iVar10);
      CSkill::set_group(local_80,local_30c[0]);
      CSkill::set_job_type(local_80,local_74);
      CSkill::set_skill_type(local_80,(char)avStack_31c._12_4_);
      CSkill::set_level_limit(local_80,local_33c);
      *(undefined4 *)(local_80 + 200) = local_338;
      CSkill::SetStealable(local_80,local_184);
      CSkill::SetStealLevelPenalty(local_80,local_178);
      CSkill::SetStealSPPenalty(local_80,local_17c);
      local_5c = 0;
      while (uVar4 = std::vector<int,std::allocator<int>>::size(avStack_190), local_5c < uVar4) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](avStack_190,local_5c);
        CSkill::set_fitGrowType(local_80,local_5c,*piVar6);
        local_5c = local_5c + 1;
      }
      for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
        CSkill::set_fitness(local_80,local_58,*(int *)(asStack_368 + (local_58 + 0x18) * 4));
      }
      for (local_54 = 0; local_54 < 6; local_54 = local_54 + 1) {
        CSkill::set_type_max_level(local_80,local_54,aiStack_360[local_54 + 0x1c]);
      }
      for (local_50 = 0; local_50 < 2; local_50 = local_50 + 1) {
                    /* try { // try from 083512a5 to 08351627 has its CatchHandler @ 0835196c */
        cVar2 = std::vector<int,std::allocator<int>>::empty();
        if ((cVar2 != '\x01') &&
           (uVar4 = std::vector<int,std::allocator<int>>::size(avStack_278), local_50 < uVar4)) {
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](avStack_278,local_50);
          CSkill::set_fitness_second_growtype(local_80,local_50 + 1,*piVar6);
        }
      }
      for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
        for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
          CSkill::set_second_growtype_fitness
                    (local_80,local_4c,local_48 + 1,
                     *(int *)(asStack_368 + (local_4c * 4 + local_48 + 0x24) * 4));
        }
      }
      for (local_44 = 0; local_44 < 6; local_44 = local_44 + 1) {
        for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
          CSkill::set_second_growtype_max_level
                    (local_80,local_44,local_40 + 1,aiStack_360[local_44 * 4 + local_40 + 0x24]);
        }
      }
      local_70 = std::vector<int,std::allocator<int>>::size(avStack_354);
      for (local_3c = 0; (int)local_3c < local_70; local_3c = local_3c + 1) {
        std::vector<int,std::allocator<int>>::at(avStack_354,local_3c);
        CSkill::add_need_sp((int)local_80);
      }
      local_6c = std::vector<int,std::allocator<int>>::size(avStack_348);
      for (local_38 = 0; (int)local_38 < local_6c; local_38 = local_38 + 1) {
        std::vector<int,std::allocator<int>>::at(avStack_348,local_38);
        CSkill::add_need_sfp((int)local_80);
      }
      local_68 = std::vector<int,std::allocator<int>>::size(avStack_328);
      for (local_34 = 0; (int)local_34 < local_68; local_34 = local_34 + 1) {
        puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::at(avStack_328,local_34);
        local_a8 = *puVar5;
        puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::at(avStack_31c,local_34);
        local_a4 = *puVar5;
        CSkill::add_learned_skill(local_80,local_a8,local_a4,local_a0);
      }
      local_64 = std::vector<int,std::allocator<int>>::size(avStack_168);
      for (local_30 = 0; (int)local_30 < local_64; local_30 = local_30 + 1) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::at(avStack_168,local_30);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_80 + 0xe4),piVar6);
      }
      local_60 = std::vector<int,std::allocator<int>>::size(avStack_15c);
      for (local_2c = 0; (int)local_2c < local_60; local_2c = local_2c + 1) {
        piVar6 = (int *)std::vector<int,std::allocator<int>>::at(avStack_15c,local_2c);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_80 + 0xf0),piVar6);
      }
      *(undefined4 *)(local_80 + 0xfc) = local_330;
      *(undefined4 *)(local_80 + 0x100) = local_32c;
      *(int *)(local_80 + 0x104) = aiStack_360[2];
      local_28 = 0;
      while (uVar4 = std::
                     vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                     ::size(avStack_1c4), local_28 < uVar4) {
        std::vector<int,std::allocator<int>>::vector(local_b8);
        local_24 = 0;
        while( true ) {
          pvVar8 = (vector<float,std::allocator<float>> *)
                   std::
                   vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                   ::operator[](avStack_1c4,local_28);
          uVar4 = std::vector<float,std::allocator<float>>::size(pvVar8);
          if (uVar4 <= local_24) break;
          pvVar8 = (vector<float,std::allocator<float>> *)
                   std::
                   vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
                   ::operator[](avStack_1c4,local_28);
                    /* try { // try from 08351655 to 083516f6 has its CatchHandler @ 083516f9 */
          pfVar7 = (float *)std::vector<float,std::allocator<float>>::at(pvVar8,local_24);
          local_98 = (int)ROUND(*pfVar7);
          std::vector<int,std::allocator<int>>::push_back(local_b8,&local_98);
          local_24 = local_24 + 1;
        }
        std::
        vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
        ::push_back((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                     *)(local_80 + 0x108),(vector *)local_b8);
                    /* try { // try from 0835171d to 0835192e has its CatchHandler @ 0835196c */
        std::vector<int,std::allocator<int>>::~vector(local_b8);
        local_28 = local_28 + 1;
      }
      local_80[0x120] = local_10c;
      std::vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>>::operator=
                ((vector<STKeyCommandUnit,std::allocator<STKeyCommandUnit>> *)(local_80 + 0x124),
                 avStack_1fc);
      local_80[0x130] = local_ec;
      pcVar9 = (char *)std::string::c_str(asStack_368);
      CSkill::setSkillName(local_80,pcVar9);
      *(undefined4 *)(local_80 + 0x198) = local_334;
      insert_skill(this,local_74,local_80);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_94,(int)&local_ac);
      local_7c = local_7c + 1;
    }
    local_74 = local_74 + 1;
  } while( true );
}
```
