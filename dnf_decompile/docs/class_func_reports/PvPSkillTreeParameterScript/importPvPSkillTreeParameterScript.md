# importPvPSkillTreeParameterScript

`_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc`

`PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(char const*)`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5cf16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5cf16  _ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc
#           PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(char const*)
# range [0x08a5cf16, 0x08a5db59]
08a5cf16 +0x000:  push   %ebp
08a5cf17 +0x001:  mov    %esp,%ebp
08a5cf19 +0x003:  push   %esi
08a5cf1a +0x004:  push   %ebx
08a5cf1b +0x005:  sub    $0x2d0,%esp
08a5cf21 +0x00b:  mov    0xc(%ebp),%eax
08a5cf24 +0x00e:  mov    %eax,0x4(%esp)
08a5cf28 +0x012:  movl   $&g_pvpSkillTreeScriptBaseDirectory,(%esp)
08a5cf2f +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08a5cf34 +0x01e:  xor    $0x1,%eax
08a5cf37 +0x021:  test   %al,%al
08a5cf39 +0x023:  je     08a5cf45 <+0x2f>
08a5cf3b +0x025:  mov    $0x0,%ebx
08a5cf40 +0x02a:  jmp    08a5db4e <+0xc38>
08a5cf45 +0x02f:  lea    -0x200(%ebp),%eax
08a5cf4b +0x035:  mov    %eax,(%esp)
08a5cf4e +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a5cf53 +0x03d:  movb   $0x0,-0x201(%ebp)
08a5cf5a +0x044:  lea    -0x204(%ebp),%eax
08a5cf60 +0x04a:  mov    %eax,(%esp)
08a5cf63 +0x04d:  call   08a5e74e <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x93>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x93
08a5cf68 +0x052:  jmp    08a5cf77 <+0x61>
08a5cf6a +0x054:  nop
08a5cf6b +0x055:  jmp    08a5cf77 <+0x61>
08a5cf6d +0x057:  nop
08a5cf6e +0x058:  jmp    08a5cf77 <+0x61>
08a5cf70 +0x05a:  nop
08a5cf71 +0x05b:  jmp    08a5cf77 <+0x61>
08a5cf73 +0x05d:  nop
08a5cf74 +0x05e:  jmp    08a5cf77 <+0x61>
08a5cf76 +0x060:  nop
08a5cf77 +0x061:  movl   $0x1,0x4(%esp)
08a5cf7f +0x069:  lea    -0x200(%ebp),%eax
08a5cf85 +0x06f:  mov    %eax,(%esp)
08a5cf88 +0x072:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a5cf8d +0x077:  xor    $0x1,%eax
08a5cf90 +0x07a:  test   %al,%al
08a5cf92 +0x07c:  jne    08a5db1a <+0xc04>
08a5cf98 +0x082:  movl   $"[level]",0x4(%esp)
08a5cfa0 +0x08a:  lea    -0x200(%ebp),%eax
08a5cfa6 +0x090:  mov    %eax,(%esp)
08a5cfa9 +0x093:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5cfae +0x098:  test   %al,%al
08a5cfb0 +0x09a:  je     08a5cfde <+0xc8>
08a5cfb2 +0x09c:  lea    -0x201(%ebp),%eax
08a5cfb8 +0x0a2:  mov    %eax,(%esp)
08a5cfbb +0x0a5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5cfc0 +0x0aa:  mov    %eax,-0x208(%ebp)
08a5cfc6 +0x0b0:  movzbl -0x201(%ebp),%eax
08a5cfcd +0x0b7:  xor    $0x1,%eax
08a5cfd0 +0x0ba:  test   %al,%al
08a5cfd2 +0x0bc:  je     08a5cf6a <+0x54>
08a5cfd4 +0x0be:  mov    $0x0,%ebx
08a5cfd9 +0x0c3:  jmp    08a5db40 <+0xc2a>
08a5cfde +0x0c8:  movl   $"[job index]",0x4(%esp)
08a5cfe6 +0x0d0:  lea    -0x200(%ebp),%eax
08a5cfec +0x0d6:  mov    %eax,(%esp)
08a5cfef +0x0d9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5cff4 +0x0de:  test   %al,%al
08a5cff6 +0x0e0:  je     08a5d028 <+0x112>
08a5cff8 +0x0e2:  lea    -0x201(%ebp),%eax
08a5cffe +0x0e8:  mov    %eax,(%esp)
08a5d001 +0x0eb:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d006 +0x0f0:  mov    %al,-0x204(%ebp)
08a5d00c +0x0f6:  movzbl -0x201(%ebp),%eax
08a5d013 +0x0fd:  xor    $0x1,%eax
08a5d016 +0x100:  test   %al,%al
08a5d018 +0x102:  je     08a5cf6d <+0x57>
08a5d01e +0x108:  mov    $0x0,%ebx
08a5d023 +0x10d:  jmp    08a5db40 <+0xc2a>
08a5d028 +0x112:  movl   $"[grow type index]",0x4(%esp)
08a5d030 +0x11a:  lea    -0x200(%ebp),%eax
08a5d036 +0x120:  mov    %eax,(%esp)
08a5d039 +0x123:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5d03e +0x128:  test   %al,%al
08a5d040 +0x12a:  je     08a5d072 <+0x15c>
08a5d042 +0x12c:  lea    -0x201(%ebp),%eax
08a5d048 +0x132:  mov    %eax,(%esp)
08a5d04b +0x135:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d050 +0x13a:  mov    %al,-0x203(%ebp)
08a5d056 +0x140:  movzbl -0x201(%ebp),%eax
08a5d05d +0x147:  xor    $0x1,%eax
08a5d060 +0x14a:  test   %al,%al
08a5d062 +0x14c:  je     08a5cf70 <+0x5a>
08a5d068 +0x152:  mov    $0x0,%ebx
08a5d06d +0x157:  jmp    08a5db40 <+0xc2a>
08a5d072 +0x15c:  movl   $"[awakening type]",0x4(%esp)
08a5d07a +0x164:  lea    -0x200(%ebp),%eax
08a5d080 +0x16a:  mov    %eax,(%esp)
08a5d083 +0x16d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5d088 +0x172:  test   %al,%al
08a5d08a +0x174:  je     08a5d0bc <+0x1a6>
08a5d08c +0x176:  lea    -0x201(%ebp),%eax
08a5d092 +0x17c:  mov    %eax,(%esp)
08a5d095 +0x17f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d09a +0x184:  mov    %al,-0x202(%ebp)
08a5d0a0 +0x18a:  movzbl -0x201(%ebp),%eax
08a5d0a7 +0x191:  xor    $0x1,%eax
08a5d0aa +0x194:  test   %al,%al
08a5d0ac +0x196:  je     08a5cf73 <+0x5d>
08a5d0b2 +0x19c:  mov    $0x0,%ebx
08a5d0b7 +0x1a1:  jmp    08a5db40 <+0xc2a>
08a5d0bc +0x1a6:  movl   $"[skill]",0x4(%esp)
08a5d0c4 +0x1ae:  lea    -0x200(%ebp),%eax
08a5d0ca +0x1b4:  mov    %eax,(%esp)
08a5d0cd +0x1b7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5d0d2 +0x1bc:  test   %al,%al
08a5d0d4 +0x1be:  je     08a5d760 <+0x84a>
08a5d0da +0x1c4:  lea    -0x220(%ebp),%eax
08a5d0e0 +0x1ca:  mov    %eax,(%esp)
08a5d0e3 +0x1cd:  call   08a5e7a0 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xe5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xe5
08a5d0e8 +0x1d2:  movl   $0x0,-0x10(%ebp)
08a5d0ef +0x1d9:  lea    -0x22c(%ebp),%eax
08a5d0f5 +0x1df:  mov    %eax,(%esp)
08a5d0f8 +0x1e2:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a5d0fd +0x1e7:  lea    -0x201(%ebp),%eax
08a5d103 +0x1ed:  mov    %eax,(%esp)
08a5d106 +0x1f0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d10b +0x1f5:  mov    %eax,-0x22c(%ebp)
08a5d111 +0x1fb:  movzbl -0x201(%ebp),%eax
08a5d118 +0x202:  xor    $0x1,%eax
08a5d11b +0x205:  test   %al,%al
08a5d11d +0x207:  jne    08a5d417 <+0x501>
08a5d123 +0x20d:  lea    -0x201(%ebp),%eax
08a5d129 +0x213:  mov    %eax,(%esp)
08a5d12c +0x216:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d131 +0x21b:  mov    %eax,-0x228(%ebp)
08a5d137 +0x221:  movzbl -0x201(%ebp),%eax
08a5d13e +0x228:  xor    $0x1,%eax
08a5d141 +0x22b:  test   %al,%al
08a5d143 +0x22d:  jne    08a5d41a <+0x504>
08a5d149 +0x233:  lea    -0x22c(%ebp),%eax
08a5d14f +0x239:  mov    %eax,0x4(%esp)
08a5d153 +0x23d:  lea    -0x220(%ebp),%eax
08a5d159 +0x243:  mov    %eax,(%esp)
08a5d15c +0x246:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08a5d161 +0x24b:  mov    0x8(%ebp),%eax
08a5d164 +0x24e:  lea    0x30(%eax),%ecx
08a5d167 +0x251:  lea    -0x230(%ebp),%eax
08a5d16d +0x257:  lea    -0x204(%ebp),%edx
08a5d173 +0x25d:  mov    %edx,0x8(%esp)
08a5d177 +0x261:  mov    %ecx,0x4(%esp)
08a5d17b +0x265:  mov    %eax,(%esp)
08a5d17e +0x268:  call   08a5e8f0 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x235>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x235
08a5d183 +0x26d:  sub    $0x4,%esp
08a5d186 +0x270:  mov    0x8(%ebp),%eax
08a5d189 +0x273:  lea    0x30(%eax),%edx
08a5d18c +0x276:  lea    -0x1fc(%ebp),%eax
08a5d192 +0x27c:  mov    %edx,0x4(%esp)
08a5d196 +0x280:  mov    %eax,(%esp)
08a5d199 +0x283:  call   083932c4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d64
08a5d19e +0x288:  sub    $0x4,%esp
08a5d1a1 +0x28b:  lea    -0x1fc(%ebp),%eax
08a5d1a7 +0x291:  mov    %eax,0x4(%esp)
08a5d1ab +0x295:  lea    -0x230(%ebp),%eax
08a5d1b1 +0x29b:  mov    %eax,(%esp)
08a5d1b4 +0x29e:  call   083932ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d8a
08a5d1b9 +0x2a3:  test   %al,%al
08a5d1bb +0x2a5:  je     08a5d2c4 <+0x3ae>
08a5d1c1 +0x2ab:  lea    -0x230(%ebp),%eax
08a5d1c7 +0x2b1:  mov    %eax,(%esp)
08a5d1ca +0x2b4:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5d1cf +0x2b9:  lea    0x4(%eax),%ecx
08a5d1d2 +0x2bc:  lea    -0x234(%ebp),%eax
08a5d1d8 +0x2c2:  lea    -0x22c(%ebp),%edx
08a5d1de +0x2c8:  mov    %edx,0x8(%esp)
08a5d1e2 +0x2cc:  mov    %ecx,0x4(%esp)
08a5d1e6 +0x2d0:  mov    %eax,(%esp)
08a5d1e9 +0x2d3:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08a5d1ee +0x2d8:  sub    $0x4,%esp
08a5d1f1 +0x2db:  lea    -0x230(%ebp),%eax
08a5d1f7 +0x2e1:  mov    %eax,(%esp)
08a5d1fa +0x2e4:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5d1ff +0x2e9:  lea    0x4(%eax),%edx
08a5d202 +0x2ec:  lea    -0x1f8(%ebp),%eax
08a5d208 +0x2f2:  mov    %edx,0x4(%esp)
08a5d20c +0x2f6:  mov    %eax,(%esp)
08a5d20f +0x2f9:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08a5d214 +0x2fe:  sub    $0x4,%esp
08a5d217 +0x301:  lea    -0x1f8(%ebp),%eax
08a5d21d +0x307:  mov    %eax,0x4(%esp)
08a5d221 +0x30b:  lea    -0x234(%ebp),%eax
08a5d227 +0x311:  mov    %eax,(%esp)
08a5d22a +0x314:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08a5d22f +0x319:  test   %al,%al
08a5d231 +0x31b:  je     08a5d24f <+0x339>
08a5d233 +0x31d:  lea    -0x234(%ebp),%eax
08a5d239 +0x323:  mov    %eax,(%esp)
08a5d23c +0x326:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08a5d241 +0x32b:  mov    -0x228(%ebp),%edx
08a5d247 +0x331:  mov    %edx,0x4(%eax)
08a5d24a +0x334:  jmp    08a5d0ef <+0x1d9>
08a5d24f +0x339:  lea    -0x1e4(%ebp),%eax
08a5d255 +0x33f:  lea    -0x22c(%ebp),%edx
08a5d25b +0x345:  add    $0x4,%edx
08a5d25e +0x348:  mov    %edx,0x8(%esp)
08a5d262 +0x34c:  lea    -0x22c(%ebp),%edx
08a5d268 +0x352:  mov    %edx,0x4(%esp)
08a5d26c +0x356:  mov    %eax,(%esp)
08a5d26f +0x359:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08a5d274 +0x35e:  sub    $0x4,%esp
08a5d277 +0x361:  lea    -0x1e4(%ebp),%eax
08a5d27d +0x367:  mov    %eax,0x4(%esp)
08a5d281 +0x36b:  lea    -0x1ec(%ebp),%eax
08a5d287 +0x371:  mov    %eax,(%esp)
08a5d28a +0x374:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08a5d28f +0x379:  lea    -0x230(%ebp),%eax
08a5d295 +0x37f:  mov    %eax,(%esp)
08a5d298 +0x382:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5d29d +0x387:  lea    0x4(%eax),%ecx
08a5d2a0 +0x38a:  lea    -0x1f4(%ebp),%eax
08a5d2a6 +0x390:  lea    -0x1ec(%ebp),%edx
08a5d2ac +0x396:  mov    %edx,0x8(%esp)
08a5d2b0 +0x39a:  mov    %ecx,0x4(%esp)
08a5d2b4 +0x39e:  mov    %eax,(%esp)
08a5d2b7 +0x3a1:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08a5d2bc +0x3a6:  sub    $0x4,%esp
08a5d2bf +0x3a9:  jmp    08a5d0ef <+0x1d9>
08a5d2c4 +0x3ae:  lea    -0x2c4(%ebp),%eax
08a5d2ca +0x3b4:  mov    %eax,(%esp)
08a5d2cd +0x3b7:  call   08a5e7e6 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x12b>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x12b
08a5d2d2 +0x3bc:  lea    -0x1cc(%ebp),%eax
08a5d2d8 +0x3c2:  lea    -0x22c(%ebp),%edx
08a5d2de +0x3c8:  add    $0x4,%edx
08a5d2e1 +0x3cb:  mov    %edx,0x8(%esp)
08a5d2e5 +0x3cf:  lea    -0x22c(%ebp),%edx
08a5d2eb +0x3d5:  mov    %edx,0x4(%esp)
08a5d2ef +0x3d9:  mov    %eax,(%esp)
08a5d2f2 +0x3dc:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08a5d2f7 +0x3e1:  sub    $0x4,%esp
08a5d2fa +0x3e4:  lea    -0x1cc(%ebp),%eax
08a5d300 +0x3ea:  mov    %eax,0x4(%esp)
08a5d304 +0x3ee:  lea    -0x1d4(%ebp),%eax
08a5d30a +0x3f4:  mov    %eax,(%esp)
08a5d30d +0x3f7:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08a5d312 +0x3fc:  lea    -0x1dc(%ebp),%eax
08a5d318 +0x402:  lea    -0x1d4(%ebp),%edx
08a5d31e +0x408:  mov    %edx,0x8(%esp)
08a5d322 +0x40c:  lea    -0x2c4(%ebp),%edx
08a5d328 +0x412:  mov    %edx,0x4(%esp)
08a5d32c +0x416:  mov    %eax,(%esp)
08a5d32f +0x419:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08a5d334 +0x41e:  sub    $0x4,%esp
08a5d337 +0x421:  lea    -0x178(%ebp),%eax
08a5d33d +0x427:  lea    -0x2c4(%ebp),%edx
08a5d343 +0x42d:  mov    %edx,0x8(%esp)
08a5d347 +0x431:  lea    -0x204(%ebp),%edx
08a5d34d +0x437:  mov    %edx,0x4(%esp)
08a5d351 +0x43b:  mov    %eax,(%esp)
08a5d354 +0x43e:  call   08a5e91c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x261>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x261
08a5d359 +0x443:  sub    $0x4,%esp
08a5d35c +0x446:  lea    -0x178(%ebp),%eax
08a5d362 +0x44c:  mov    %eax,0x4(%esp)
08a5d366 +0x450:  lea    -0x1bc(%ebp),%eax
08a5d36c +0x456:  mov    %eax,(%esp)
08a5d36f +0x459:  call   08a5e9f0 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x335>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x335
08a5d374 +0x45e:  mov    0x8(%ebp),%eax
08a5d377 +0x461:  lea    0x30(%eax),%ecx
08a5d37a +0x464:  lea    -0x1c4(%ebp),%eax
08a5d380 +0x46a:  lea    -0x1bc(%ebp),%edx
08a5d386 +0x470:  mov    %edx,0x8(%esp)
08a5d38a +0x474:  mov    %ecx,0x4(%esp)
08a5d38e +0x478:  mov    %eax,(%esp)
08a5d391 +0x47b:  call   08a5ea38 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x37d>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x37d
08a5d396 +0x480:  sub    $0x4,%esp
08a5d399 +0x483:  lea    -0x1bc(%ebp),%eax
08a5d39f +0x489:  mov    %eax,(%esp)
08a5d3a2 +0x48c:  call   083ce366 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68332>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68332
08a5d3a7 +0x491:  jmp    08a5d3d9 <+0x4c3>
08a5d3a9 +0x493:  mov    %edx,%ebx
08a5d3ab +0x495:  mov    %eax,%esi
08a5d3ad +0x497:  lea    -0x1bc(%ebp),%eax
08a5d3b3 +0x49d:  mov    %eax,(%esp)
08a5d3b6 +0x4a0:  call   083ce366 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68332>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68332
08a5d3bb +0x4a5:  mov    %esi,%eax
08a5d3bd +0x4a7:  mov    %ebx,%edx
08a5d3bf +0x4a9:  jmp    08a5d3c1 <+0x4ab>
08a5d3c1 +0x4ab:  mov    %edx,%ebx
08a5d3c3 +0x4ad:  mov    %eax,%esi
08a5d3c5 +0x4af:  lea    -0x178(%ebp),%eax
08a5d3cb +0x4b5:  mov    %eax,(%esp)
08a5d3ce +0x4b8:  call   08a5e8ae <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x1f3>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x1f3
08a5d3d3 +0x4bd:  mov    %esi,%eax
08a5d3d5 +0x4bf:  mov    %ebx,%edx
08a5d3d7 +0x4c1:  jmp    08a5d3e9 <+0x4d3>
08a5d3d9 +0x4c3:  lea    -0x178(%ebp),%eax
08a5d3df +0x4c9:  mov    %eax,(%esp)
08a5d3e2 +0x4cc:  call   08a5e8ae <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x1f3>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x1f3
08a5d3e7 +0x4d1:  jmp    08a5d404 <+0x4ee>
08a5d3e9 +0x4d3:  mov    %edx,%ebx
08a5d3eb +0x4d5:  mov    %eax,%esi
08a5d3ed +0x4d7:  lea    -0x2c4(%ebp),%eax
08a5d3f3 +0x4dd:  mov    %eax,(%esp)
08a5d3f6 +0x4e0:  call   083ce2f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x682c4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x682c4
08a5d3fb +0x4e5:  mov    %esi,%eax
08a5d3fd +0x4e7:  mov    %ebx,%edx
08a5d3ff +0x4e9:  jmp    08a5d72a <+0x814>
08a5d404 +0x4ee:  lea    -0x2c4(%ebp),%eax
08a5d40a +0x4f4:  mov    %eax,(%esp)
08a5d40d +0x4f7:  call   083ce2f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x682c4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x682c4
08a5d412 +0x4fc:  jmp    08a5d0ef <+0x1d9>
08a5d417 +0x501:  nop
08a5d418 +0x502:  jmp    08a5d41b <+0x505>
08a5d41a +0x504:  nop
08a5d41b +0x505:  mov    0x8(%ebp),%edx
08a5d41e +0x508:  lea    -0x224(%ebp),%eax
08a5d424 +0x50e:  lea    -0x204(%ebp),%ecx
08a5d42a +0x514:  mov    %ecx,0x8(%esp)
08a5d42e +0x518:  mov    %edx,0x4(%esp)
08a5d432 +0x51c:  mov    %eax,(%esp)
08a5d435 +0x51f:  call   08a5ea64 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x3a9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x3a9
08a5d43a +0x524:  sub    $0x4,%esp
08a5d43d +0x527:  mov    0x8(%ebp),%edx
08a5d440 +0x52a:  lea    -0x134(%ebp),%eax
08a5d446 +0x530:  mov    %edx,0x4(%esp)
08a5d44a +0x534:  mov    %eax,(%esp)
08a5d44d +0x537:  call   083930f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b98
08a5d452 +0x53c:  sub    $0x4,%esp
08a5d455 +0x53f:  lea    -0x134(%ebp),%eax
08a5d45b +0x545:  mov    %eax,0x4(%esp)
08a5d45f +0x549:  lea    -0x224(%ebp),%eax
08a5d465 +0x54f:  mov    %eax,(%esp)
08a5d468 +0x552:  call   0839311e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bbe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bbe
08a5d46d +0x557:  test   %al,%al
08a5d46f +0x559:  je     08a5d55a <+0x644>
08a5d475 +0x55f:  lea    -0x10c(%ebp),%eax
08a5d47b +0x565:  lea    -0x220(%ebp),%edx
08a5d481 +0x56b:  mov    %edx,0x8(%esp)
08a5d485 +0x56f:  lea    -0x208(%ebp),%edx
08a5d48b +0x575:  mov    %edx,0x4(%esp)
08a5d48f +0x579:  mov    %eax,(%esp)
08a5d492 +0x57c:  call   08a5ea90 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x3d5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x3d5
08a5d497 +0x581:  sub    $0x4,%esp
08a5d49a +0x584:  lea    -0x10c(%ebp),%eax
08a5d4a0 +0x58a:  mov    %eax,0x4(%esp)
08a5d4a4 +0x58e:  lea    -0x128(%ebp),%eax
08a5d4aa +0x594:  mov    %eax,(%esp)
08a5d4ad +0x597:  call   08a5eb2a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x46f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x46f
08a5d4b2 +0x59c:  lea    -0x224(%ebp),%eax
08a5d4b8 +0x5a2:  mov    %eax,(%esp)
08a5d4bb +0x5a5:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
08a5d4c0 +0x5aa:  lea    0x4(%eax),%ecx
08a5d4c3 +0x5ad:  lea    -0x130(%ebp),%eax
08a5d4c9 +0x5b3:  lea    -0x128(%ebp),%edx
08a5d4cf +0x5b9:  mov    %edx,0x8(%esp)
08a5d4d3 +0x5bd:  mov    %ecx,0x4(%esp)
08a5d4d7 +0x5c1:  mov    %eax,(%esp)
08a5d4da +0x5c4:  call   08a5eb64 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x4a9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x4a9
08a5d4df +0x5c9:  sub    $0x4,%esp
08a5d4e2 +0x5cc:  movzbl -0x12c(%ebp),%eax
08a5d4e9 +0x5d3:  mov    $0x1,%esi
08a5d4ee +0x5d8:  xor    %eax,%esi
08a5d4f0 +0x5da:  lea    -0x128(%ebp),%eax
08a5d4f6 +0x5e0:  mov    %eax,(%esp)
08a5d4f9 +0x5e3:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d4fe +0x5e8:  jmp    08a5d533 <+0x61d>
08a5d500 +0x5ea:  mov    %edx,%ebx
08a5d502 +0x5ec:  mov    %eax,%esi
08a5d504 +0x5ee:  lea    -0x128(%ebp),%eax
08a5d50a +0x5f4:  mov    %eax,(%esp)
08a5d50d +0x5f7:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d512 +0x5fc:  mov    %esi,%eax
08a5d514 +0x5fe:  mov    %ebx,%edx
08a5d516 +0x600:  jmp    08a5d518 <+0x602>
08a5d518 +0x602:  mov    %edx,%ebx
08a5d51a +0x604:  mov    %eax,%esi
08a5d51c +0x606:  lea    -0x10c(%ebp),%eax
08a5d522 +0x60c:  mov    %eax,(%esp)
08a5d525 +0x60f:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d52a +0x614:  mov    %esi,%eax
08a5d52c +0x616:  mov    %ebx,%edx
08a5d52e +0x618:  jmp    08a5d72a <+0x814>
08a5d533 +0x61d:  lea    -0x10c(%ebp),%eax
08a5d539 +0x623:  mov    %eax,(%esp)
08a5d53c +0x626:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d541 +0x62b:  mov    %esi,%eax
08a5d543 +0x62d:  test   %al,%al
08a5d545 +0x62f:  je     08a5d723 <+0x80d>
08a5d54b +0x635:  mov    $0x0,%ebx
08a5d550 +0x63a:  mov    $0x0,%esi
08a5d555 +0x63f:  jmp    08a5d745 <+0x82f>
08a5d55a +0x644:  lea    -0x24c(%ebp),%eax
08a5d560 +0x64a:  mov    %eax,(%esp)
08a5d563 +0x64d:  call   08a5eb90 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x4d5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x4d5
08a5d568 +0x652:  lea    -0xcc(%ebp),%eax
08a5d56e +0x658:  lea    -0x220(%ebp),%edx
08a5d574 +0x65e:  mov    %edx,0x8(%esp)
08a5d578 +0x662:  lea    -0x208(%ebp),%edx
08a5d57e +0x668:  mov    %edx,0x4(%esp)
08a5d582 +0x66c:  mov    %eax,(%esp)
08a5d585 +0x66f:  call   08a5ea90 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x3d5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x3d5
08a5d58a +0x674:  sub    $0x4,%esp
08a5d58d +0x677:  lea    -0xcc(%ebp),%eax
08a5d593 +0x67d:  mov    %eax,0x4(%esp)
08a5d597 +0x681:  lea    -0xe8(%ebp),%eax
08a5d59d +0x687:  mov    %eax,(%esp)
08a5d5a0 +0x68a:  call   08a5eb2a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x46f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x46f
08a5d5a5 +0x68f:  lea    -0xf0(%ebp),%eax
08a5d5ab +0x695:  lea    -0xe8(%ebp),%edx
08a5d5b1 +0x69b:  mov    %edx,0x8(%esp)
08a5d5b5 +0x69f:  lea    -0x24c(%ebp),%edx
08a5d5bb +0x6a5:  mov    %edx,0x4(%esp)
08a5d5bf +0x6a9:  mov    %eax,(%esp)
08a5d5c2 +0x6ac:  call   08a5eb64 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x4a9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x4a9
08a5d5c7 +0x6b1:  sub    $0x4,%esp
08a5d5ca +0x6b4:  movzbl -0xec(%ebp),%eax
08a5d5d1 +0x6bb:  mov    $0x1,%esi
08a5d5d6 +0x6c0:  xor    %eax,%esi
08a5d5d8 +0x6c2:  lea    -0xe8(%ebp),%eax
08a5d5de +0x6c8:  mov    %eax,(%esp)
08a5d5e1 +0x6cb:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d5e6 +0x6d0:  jmp    08a5d61b <+0x705>
08a5d5e8 +0x6d2:  mov    %edx,%ebx
08a5d5ea +0x6d4:  mov    %eax,%esi
08a5d5ec +0x6d6:  lea    -0xe8(%ebp),%eax
08a5d5f2 +0x6dc:  mov    %eax,(%esp)
08a5d5f5 +0x6df:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d5fa +0x6e4:  mov    %esi,%eax
08a5d5fc +0x6e6:  mov    %ebx,%edx
08a5d5fe +0x6e8:  jmp    08a5d600 <+0x6ea>
08a5d600 +0x6ea:  mov    %edx,%ebx
08a5d602 +0x6ec:  mov    %eax,%esi
08a5d604 +0x6ee:  lea    -0xcc(%ebp),%eax
08a5d60a +0x6f4:  mov    %eax,(%esp)
08a5d60d +0x6f7:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d612 +0x6fc:  mov    %esi,%eax
08a5d614 +0x6fe:  mov    %ebx,%edx
08a5d616 +0x700:  jmp    08a5d6f2 <+0x7dc>
08a5d61b +0x705:  lea    -0xcc(%ebp),%eax
08a5d621 +0x70b:  mov    %eax,(%esp)
08a5d624 +0x70e:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d629 +0x713:  mov    %esi,%eax
08a5d62b +0x715:  test   %al,%al
08a5d62d +0x717:  je     08a5d63e <+0x728>
08a5d62f +0x719:  mov    $0x0,%ebx
08a5d634 +0x71e:  mov    $0x0,%esi
08a5d639 +0x723:  jmp    08a5d70a <+0x7f4>
08a5d63e +0x728:  lea    -0x8c(%ebp),%eax
08a5d644 +0x72e:  lea    -0x24c(%ebp),%edx
08a5d64a +0x734:  mov    %edx,0x8(%esp)
08a5d64e +0x738:  lea    -0x204(%ebp),%edx
08a5d654 +0x73e:  mov    %edx,0x4(%esp)
08a5d658 +0x742:  mov    %eax,(%esp)
08a5d65b +0x745:  call   08a5eba3 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x4e8>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x4e8
08a5d660 +0x74a:  sub    $0x4,%esp
08a5d663 +0x74d:  lea    -0x8c(%ebp),%eax
08a5d669 +0x753:  mov    %eax,0x4(%esp)
08a5d66d +0x757:  lea    -0xa8(%ebp),%eax
08a5d673 +0x75d:  mov    %eax,(%esp)
08a5d676 +0x760:  call   08a5ebe8 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x52d>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x52d
08a5d67b +0x765:  mov    0x8(%ebp),%edx
08a5d67e +0x768:  lea    -0xb0(%ebp),%eax
08a5d684 +0x76e:  lea    -0xa8(%ebp),%ecx
08a5d68a +0x774:  mov    %ecx,0x8(%esp)
08a5d68e +0x778:  mov    %edx,0x4(%esp)
08a5d692 +0x77c:  mov    %eax,(%esp)
08a5d695 +0x77f:  call   08a5ec30 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x575>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x575
08a5d69a +0x784:  sub    $0x4,%esp
08a5d69d +0x787:  lea    -0xa8(%ebp),%eax
08a5d6a3 +0x78d:  mov    %eax,(%esp)
08a5d6a6 +0x790:  call   083ce198 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68164>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68164
08a5d6ab +0x795:  jmp    08a5d6dd <+0x7c7>
08a5d6ad +0x797:  mov    %edx,%ebx
08a5d6af +0x799:  mov    %eax,%esi
08a5d6b1 +0x79b:  lea    -0xa8(%ebp),%eax
08a5d6b7 +0x7a1:  mov    %eax,(%esp)
08a5d6ba +0x7a4:  call   083ce198 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68164>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68164
08a5d6bf +0x7a9:  mov    %esi,%eax
08a5d6c1 +0x7ab:  mov    %ebx,%edx
08a5d6c3 +0x7ad:  jmp    08a5d6c5 <+0x7af>
08a5d6c5 +0x7af:  mov    %edx,%ebx
08a5d6c7 +0x7b1:  mov    %eax,%esi
08a5d6c9 +0x7b3:  lea    -0x8c(%ebp),%eax
08a5d6cf +0x7b9:  mov    %eax,(%esp)
08a5d6d2 +0x7bc:  call   08a5e8da <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x21f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x21f
08a5d6d7 +0x7c1:  mov    %esi,%eax
08a5d6d9 +0x7c3:  mov    %ebx,%edx
08a5d6db +0x7c5:  jmp    08a5d6f2 <+0x7dc>
08a5d6dd +0x7c7:  lea    -0x8c(%ebp),%eax
08a5d6e3 +0x7cd:  mov    %eax,(%esp)
08a5d6e6 +0x7d0:  call   08a5e8da <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x21f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x21f
08a5d6eb +0x7d5:  mov    $0x1,%esi
08a5d6f0 +0x7da:  jmp    08a5d70a <+0x7f4>
08a5d6f2 +0x7dc:  mov    %edx,%ebx
08a5d6f4 +0x7de:  mov    %eax,%esi
08a5d6f6 +0x7e0:  lea    -0x24c(%ebp),%eax
08a5d6fc +0x7e6:  mov    %eax,(%esp)
08a5d6ff +0x7e9:  call   083ce184 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68150>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68150
08a5d704 +0x7ee:  mov    %esi,%eax
08a5d706 +0x7f0:  mov    %ebx,%edx
08a5d708 +0x7f2:  jmp    08a5d72a <+0x814>
08a5d70a +0x7f4:  lea    -0x24c(%ebp),%eax
08a5d710 +0x7fa:  mov    %eax,(%esp)
08a5d713 +0x7fd:  call   083ce184 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68150>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68150
08a5d718 +0x802:  test   %esi,%esi
08a5d71a +0x804:  jne    08a5d723 <+0x80d>
08a5d71c +0x806:  mov    $0x0,%esi
08a5d721 +0x80b:  jmp    08a5d745 <+0x82f>
08a5d723 +0x80d:  mov    $0x1,%esi
08a5d728 +0x812:  jmp    08a5d745 <+0x82f>
08a5d72a +0x814:  mov    %edx,%ebx
08a5d72c +0x816:  mov    %eax,%esi
08a5d72e +0x818:  lea    -0x220(%ebp),%eax
08a5d734 +0x81e:  mov    %eax,(%esp)
08a5d737 +0x821:  call   083f0004 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89fd0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89fd0
08a5d73c +0x826:  mov    %esi,%eax
08a5d73e +0x828:  mov    %ebx,%edx
08a5d740 +0x82a:  jmp    08a5db22 <+0xc0c>
08a5d745 +0x82f:  lea    -0x220(%ebp),%eax
08a5d74b +0x835:  mov    %eax,(%esp)
08a5d74e +0x838:  call   083f0004 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89fd0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89fd0
08a5d753 +0x83d:  test   %esi,%esi
08a5d755 +0x83f:  je     08a5db40 <+0xc2a>
08a5d75b +0x845:  jmp    08a5cf77 <+0x61>
08a5d760 +0x84a:  movl   $"[static basic skill]",0x4(%esp)
08a5d768 +0x852:  lea    -0x200(%ebp),%eax
08a5d76e +0x858:  mov    %eax,(%esp)
08a5d771 +0x85b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5d776 +0x860:  test   %al,%al
08a5d778 +0x862:  je     08a5cf76 <+0x60>
08a5d77e +0x868:  mov    0x8(%ebp),%edx
08a5d781 +0x86b:  lea    -0x250(%ebp),%eax
08a5d787 +0x871:  lea    -0x204(%ebp),%ecx
08a5d78d +0x877:  mov    %ecx,0x8(%esp)
08a5d791 +0x87b:  mov    %edx,0x4(%esp)
08a5d795 +0x87f:  mov    %eax,(%esp)
08a5d798 +0x882:  call   08a5ea64 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x3a9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x3a9
08a5d79d +0x887:  sub    $0x4,%esp
08a5d7a0 +0x88a:  mov    0x8(%ebp),%edx
08a5d7a3 +0x88d:  lea    -0x70(%ebp),%eax
08a5d7a6 +0x890:  mov    %edx,0x4(%esp)
08a5d7aa +0x894:  mov    %eax,(%esp)
08a5d7ad +0x897:  call   083930f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b98
08a5d7b2 +0x89c:  sub    $0x4,%esp
08a5d7b5 +0x89f:  lea    -0x70(%ebp),%eax
08a5d7b8 +0x8a2:  mov    %eax,0x4(%esp)
08a5d7bc +0x8a6:  lea    -0x250(%ebp),%eax
08a5d7c2 +0x8ac:  mov    %eax,(%esp)
08a5d7c5 +0x8af:  call   0839311e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bbe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bbe
08a5d7ca +0x8b4:  test   %al,%al
08a5d7cc +0x8b6:  je     08a5db13 <+0xbfd>
08a5d7d2 +0x8bc:  movl   $0x0,-0xc(%ebp)
08a5d7d9 +0x8c3:  lea    -0x250(%ebp),%eax
08a5d7df +0x8c9:  mov    %eax,(%esp)
08a5d7e2 +0x8cc:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
08a5d7e7 +0x8d1:  lea    0x4(%eax),%ecx
08a5d7ea +0x8d4:  lea    -0x254(%ebp),%eax
08a5d7f0 +0x8da:  lea    -0x208(%ebp),%edx
08a5d7f6 +0x8e0:  mov    %edx,0x8(%esp)
08a5d7fa +0x8e4:  mov    %ecx,0x4(%esp)
08a5d7fe +0x8e8:  mov    %eax,(%esp)
08a5d801 +0x8eb:  call   08a5ec5c <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x5a1>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x5a1
08a5d806 +0x8f0:  sub    $0x4,%esp
08a5d809 +0x8f3:  lea    -0x250(%ebp),%eax
08a5d80f +0x8f9:  mov    %eax,(%esp)
08a5d812 +0x8fc:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
08a5d817 +0x901:  lea    0x4(%eax),%edx
08a5d81a +0x904:  lea    -0x6c(%ebp),%eax
08a5d81d +0x907:  mov    %edx,0x4(%esp)
08a5d821 +0x90b:  mov    %eax,(%esp)
08a5d824 +0x90e:  call   08393184 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c24>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c24
08a5d829 +0x913:  sub    $0x4,%esp
08a5d82c +0x916:  lea    -0x6c(%ebp),%eax
08a5d82f +0x919:  mov    %eax,0x4(%esp)
08a5d833 +0x91d:  lea    -0x254(%ebp),%eax
08a5d839 +0x923:  mov    %eax,(%esp)
08a5d83c +0x926:  call   083931aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c4a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c4a
08a5d841 +0x92b:  test   %al,%al
08a5d843 +0x92d:  je     08a5d85e <+0x948>
08a5d845 +0x92f:  lea    -0x254(%ebp),%eax
08a5d84b +0x935:  mov    %eax,(%esp)
08a5d84e +0x938:  call   083931dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c7c
08a5d853 +0x93d:  add    $0x10,%eax
08a5d856 +0x940:  mov    %eax,-0xc(%ebp)
08a5d859 +0x943:  jmp    08a5d94e <+0xa38>
08a5d85e +0x948:  lea    -0x26c(%ebp),%eax
08a5d864 +0x94e:  mov    %eax,(%esp)
08a5d867 +0x951:  call   08a5e7a0 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xe5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xe5
08a5d86c +0x956:  lea    -0x4c(%ebp),%eax
08a5d86f +0x959:  lea    -0x26c(%ebp),%edx
08a5d875 +0x95f:  mov    %edx,0x8(%esp)
08a5d879 +0x963:  lea    -0x208(%ebp),%edx
08a5d87f +0x969:  mov    %edx,0x4(%esp)
08a5d883 +0x96d:  mov    %eax,(%esp)
08a5d886 +0x970:  call   08a5ea90 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x3d5>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x3d5
08a5d88b +0x975:  sub    $0x4,%esp
08a5d88e +0x978:  lea    -0x4c(%ebp),%eax
08a5d891 +0x97b:  mov    %eax,0x4(%esp)
08a5d895 +0x97f:  lea    -0x68(%ebp),%eax
08a5d898 +0x982:  mov    %eax,(%esp)
08a5d89b +0x985:  call   08a5eb2a <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x46f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x46f
08a5d8a0 +0x98a:  lea    -0x250(%ebp),%eax
08a5d8a6 +0x990:  mov    %eax,(%esp)
08a5d8a9 +0x993:  call   08393150 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22bf0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22bf0
08a5d8ae +0x998:  lea    0x4(%eax),%ecx
08a5d8b1 +0x99b:  lea    -0x274(%ebp),%eax
08a5d8b7 +0x9a1:  lea    -0x68(%ebp),%edx
08a5d8ba +0x9a4:  mov    %edx,0x8(%esp)
08a5d8be +0x9a8:  mov    %ecx,0x4(%esp)
08a5d8c2 +0x9ac:  mov    %eax,(%esp)
08a5d8c5 +0x9af:  call   08a5eb64 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x4a9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x4a9
08a5d8ca +0x9b4:  sub    $0x4,%esp
08a5d8cd +0x9b7:  lea    -0x68(%ebp),%eax
08a5d8d0 +0x9ba:  mov    %eax,(%esp)
08a5d8d3 +0x9bd:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d8d8 +0x9c2:  jmp    08a5d904 <+0x9ee>
08a5d8da +0x9c4:  mov    %edx,%ebx
08a5d8dc +0x9c6:  mov    %eax,%esi
08a5d8de +0x9c8:  lea    -0x68(%ebp),%eax
08a5d8e1 +0x9cb:  mov    %eax,(%esp)
08a5d8e4 +0x9ce:  call   083f004a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8a016>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8a016
08a5d8e9 +0x9d3:  mov    %esi,%eax
08a5d8eb +0x9d5:  mov    %ebx,%edx
08a5d8ed +0x9d7:  jmp    08a5d8ef <+0x9d9>
08a5d8ef +0x9d9:  mov    %edx,%ebx
08a5d8f1 +0x9db:  mov    %eax,%esi
08a5d8f3 +0x9dd:  lea    -0x4c(%ebp),%eax
08a5d8f6 +0x9e0:  mov    %eax,(%esp)
08a5d8f9 +0x9e3:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d8fe +0x9e8:  mov    %esi,%eax
08a5d900 +0x9ea:  mov    %ebx,%edx
08a5d902 +0x9ec:  jmp    08a5d933 <+0xa1d>
08a5d904 +0x9ee:  lea    -0x4c(%ebp),%eax
08a5d907 +0x9f1:  mov    %eax,(%esp)
08a5d90a +0x9f4:  call   08a5e8c4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x209>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x209
08a5d90f +0x9f9:  lea    -0x274(%ebp),%eax
08a5d915 +0x9ff:  mov    %eax,(%esp)
08a5d918 +0xa02:  call   083931dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22c7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22c7c
08a5d91d +0xa07:  add    $0x10,%eax
08a5d920 +0xa0a:  mov    %eax,-0xc(%ebp)
08a5d923 +0xa0d:  lea    -0x26c(%ebp),%eax
08a5d929 +0xa13:  mov    %eax,(%esp)
08a5d92c +0xa16:  call   083f0004 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89fd0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89fd0
08a5d931 +0xa1b:  jmp    08a5d94e <+0xa38>
08a5d933 +0xa1d:  mov    %edx,%ebx
08a5d935 +0xa1f:  mov    %eax,%esi
08a5d937 +0xa21:  lea    -0x26c(%ebp),%eax
08a5d93d +0xa27:  mov    %eax,(%esp)
08a5d940 +0xa2a:  call   083f0004 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x89fd0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x89fd0
08a5d945 +0xa2f:  mov    %esi,%eax
08a5d947 +0xa31:  mov    %ebx,%edx
08a5d949 +0xa33:  jmp    08a5db22 <+0xc0c>
08a5d94e +0xa38:  lea    -0x27c(%ebp),%eax
08a5d954 +0xa3e:  mov    %eax,(%esp)
08a5d957 +0xa41:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a5d95c +0xa46:  lea    -0x201(%ebp),%eax
08a5d962 +0xa4c:  mov    %eax,(%esp)
08a5d965 +0xa4f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d96a +0xa54:  mov    %eax,-0x27c(%ebp)
08a5d970 +0xa5a:  movzbl -0x201(%ebp),%eax
08a5d977 +0xa61:  xor    $0x1,%eax
08a5d97a +0xa64:  test   %al,%al
08a5d97c +0xa66:  je     08a5d983 <+0xa6d>
08a5d97e +0xa68:  jmp    08a5db0e <+0xbf8>
08a5d983 +0xa6d:  lea    -0x201(%ebp),%eax
08a5d989 +0xa73:  mov    %eax,(%esp)
08a5d98c +0xa76:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5d991 +0xa7b:  mov    %eax,-0x278(%ebp)
08a5d997 +0xa81:  movzbl -0x201(%ebp),%eax
08a5d99e +0xa88:  xor    $0x1,%eax
08a5d9a1 +0xa8b:  test   %al,%al
08a5d9a3 +0xa8d:  je     08a5d9aa <+0xa94>
08a5d9a5 +0xa8f:  jmp    08a5db0e <+0xbf8>
08a5d9aa +0xa94:  lea    -0x27c(%ebp),%eax
08a5d9b0 +0xa9a:  mov    %eax,0x4(%esp)
08a5d9b4 +0xa9e:  mov    -0xc(%ebp),%eax
08a5d9b7 +0xaa1:  mov    %eax,(%esp)
08a5d9ba +0xaa4:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
08a5d9bf +0xaa9:  mov    0x8(%ebp),%eax
08a5d9c2 +0xaac:  lea    0x30(%eax),%ecx
08a5d9c5 +0xaaf:  lea    -0x280(%ebp),%eax
08a5d9cb +0xab5:  lea    -0x204(%ebp),%edx
08a5d9d1 +0xabb:  mov    %edx,0x8(%esp)
08a5d9d5 +0xabf:  mov    %ecx,0x4(%esp)
08a5d9d9 +0xac3:  mov    %eax,(%esp)
08a5d9dc +0xac6:  call   08a5e8f0 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x235>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x235
08a5d9e1 +0xacb:  sub    $0x4,%esp
08a5d9e4 +0xace:  mov    0x8(%ebp),%eax
08a5d9e7 +0xad1:  lea    0x30(%eax),%edx
08a5d9ea +0xad4:  lea    -0x30(%ebp),%eax
08a5d9ed +0xad7:  mov    %edx,0x4(%esp)
08a5d9f1 +0xadb:  mov    %eax,(%esp)
08a5d9f4 +0xade:  call   083932c4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d64
08a5d9f9 +0xae3:  sub    $0x4,%esp
08a5d9fc +0xae6:  lea    -0x30(%ebp),%eax
08a5d9ff +0xae9:  mov    %eax,0x4(%esp)
08a5da03 +0xaed:  lea    -0x280(%ebp),%eax
08a5da09 +0xaf3:  mov    %eax,(%esp)
08a5da0c +0xaf6:  call   083932ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22d8a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22d8a
08a5da11 +0xafb:  test   %al,%al
08a5da13 +0xafd:  je     08a5db07 <+0xbf1>
08a5da19 +0xb03:  lea    -0x280(%ebp),%eax
08a5da1f +0xb09:  mov    %eax,(%esp)
08a5da22 +0xb0c:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5da27 +0xb11:  lea    0x1c(%eax),%ecx
08a5da2a +0xb14:  lea    -0x284(%ebp),%eax
08a5da30 +0xb1a:  lea    -0x27c(%ebp),%edx
08a5da36 +0xb20:  mov    %edx,0x8(%esp)
08a5da3a +0xb24:  mov    %ecx,0x4(%esp)
08a5da3e +0xb28:  mov    %eax,(%esp)
08a5da41 +0xb2b:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08a5da46 +0xb30:  sub    $0x4,%esp
08a5da49 +0xb33:  lea    -0x280(%ebp),%eax
08a5da4f +0xb39:  mov    %eax,(%esp)
08a5da52 +0xb3c:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5da57 +0xb41:  lea    0x1c(%eax),%edx
08a5da5a +0xb44:  lea    -0x2c(%ebp),%eax
08a5da5d +0xb47:  mov    %edx,0x4(%esp)
08a5da61 +0xb4b:  mov    %eax,(%esp)
08a5da64 +0xb4e:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08a5da69 +0xb53:  sub    $0x4,%esp
08a5da6c +0xb56:  lea    -0x2c(%ebp),%eax
08a5da6f +0xb59:  mov    %eax,0x4(%esp)
08a5da73 +0xb5d:  lea    -0x284(%ebp),%eax
08a5da79 +0xb63:  mov    %eax,(%esp)
08a5da7c +0xb66:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08a5da81 +0xb6b:  test   %al,%al
08a5da83 +0xb6d:  je     08a5daa1 <+0xb8b>
08a5da85 +0xb6f:  lea    -0x284(%ebp),%eax
08a5da8b +0xb75:  mov    %eax,(%esp)
08a5da8e +0xb78:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08a5da93 +0xb7d:  mov    -0x278(%ebp),%edx
08a5da99 +0xb83:  mov    %edx,0x4(%eax)
08a5da9c +0xb86:  jmp    08a5d94e <+0xa38>
08a5daa1 +0xb8b:  lea    -0x18(%ebp),%eax
08a5daa4 +0xb8e:  lea    -0x27c(%ebp),%edx
08a5daaa +0xb94:  add    $0x4,%edx
08a5daad +0xb97:  mov    %edx,0x8(%esp)
08a5dab1 +0xb9b:  lea    -0x27c(%ebp),%edx
08a5dab7 +0xba1:  mov    %edx,0x4(%esp)
08a5dabb +0xba5:  mov    %eax,(%esp)
08a5dabe +0xba8:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08a5dac3 +0xbad:  sub    $0x4,%esp
08a5dac6 +0xbb0:  lea    -0x18(%ebp),%eax
08a5dac9 +0xbb3:  mov    %eax,0x4(%esp)
08a5dacd +0xbb7:  lea    -0x20(%ebp),%eax
08a5dad0 +0xbba:  mov    %eax,(%esp)
08a5dad3 +0xbbd:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08a5dad8 +0xbc2:  lea    -0x280(%ebp),%eax
08a5dade +0xbc8:  mov    %eax,(%esp)
08a5dae1 +0xbcb:  call   0839331c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22dbc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22dbc
08a5dae6 +0xbd0:  lea    0x1c(%eax),%ecx
08a5dae9 +0xbd3:  lea    -0x28(%ebp),%eax
08a5daec +0xbd6:  lea    -0x20(%ebp),%edx
08a5daef +0xbd9:  mov    %edx,0x8(%esp)
08a5daf3 +0xbdd:  mov    %ecx,0x4(%esp)
08a5daf7 +0xbe1:  mov    %eax,(%esp)
08a5dafa +0xbe4:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08a5daff +0xbe9:  sub    $0x4,%esp
08a5db02 +0xbec:  jmp    08a5d94e <+0xa38>
08a5db07 +0xbf1:  mov    $0x0,%ebx
08a5db0c +0xbf6:  jmp    08a5db40 <+0xc2a>
08a5db0e +0xbf8:  jmp    08a5cf77 <+0x61>
08a5db13 +0xbfd:  mov    $0x0,%ebx
08a5db18 +0xc02:  jmp    08a5db40 <+0xc2a>
08a5db1a +0xc04:  nop
08a5db1b +0xc05:  mov    $0x1,%ebx
08a5db20 +0xc0a:  jmp    08a5db40 <+0xc2a>
08a5db22 +0xc0c:  mov    %edx,%ebx
08a5db24 +0xc0e:  mov    %eax,%esi
08a5db26 +0xc10:  lea    -0x200(%ebp),%eax
08a5db2c +0xc16:  mov    %eax,(%esp)
08a5db2f +0xc19:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5db34 +0xc1e:  mov    %esi,%eax
08a5db36 +0xc20:  mov    %ebx,%edx
08a5db38 +0xc22:  mov    %eax,(%esp)
08a5db3b +0xc25:  call   08ae3750 <_Unwind_Resume>
08a5db40 +0xc2a:  lea    -0x200(%ebp),%eax
08a5db46 +0xc30:  mov    %eax,(%esp)
08a5db49 +0xc33:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5db4e +0xc38:  mov    %ebx,%eax
08a5db50 +0xc3a:  lea    -0x8(%ebp),%esp
08a5db53 +0xc3d:  add    $0x0,%esp
08a5db56 +0xc40:  pop    %ebx
08a5db57 +0xc41:  pop    %esi
08a5db58 +0xc42:  pop    %ebp
08a5db59 +0xc43:  ret
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript @ 0x8a5cf16

/* PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(char const*) */

undefined4 __thiscall
PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript
          (PvPSkillTreeParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 unaff_EBX;
  FAIR_PVP_SKILL_TREE_SKILL_PER_POINT local_2c8 [64];
  _Rb_tree_iterator<std::pair<int_const,int>> local_288 [4];
  PvPSkillTreeKey local_284 [4];
  int local_280;
  undefined4 local_27c;
  _Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> local_278 [8];
  PvPSkillTreeValue local_270 [24];
  _Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>> local_258 [4];
  PvPSkillTreeKey local_254 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_250 [24];
  _Rb_tree_iterator<std::pair<int_const,int>> local_238 [4];
  PvPSkillTreeKey local_234 [4];
  int local_230;
  undefined4 local_22c;
  PvPSkillTreeKey local_228 [4];
  PvPSkillTreeValue local_224 [24];
  undefined4 local_20c;
  PvPSkillTreeKey local_208;
  undefined1 local_207;
  undefined1 local_206;
  bool local_205;
  string local_204;
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_200 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1fc [4];
  pair local_1f8 [8];
  pair<int_const,int> local_1f0 [8];
  int local_1e8 [2];
  pair local_1e0 [8];
  pair<int_const,int> local_1d8 [8];
  int local_1d0 [2];
  pair local_1c8 [8];
  pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT> local_1c0 [68];
  PvPSkillTreeKey local_17c [68];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_138 [4];
  pair local_134 [4];
  char local_130;
  pair<int_const,PvPSkillTreeValue> local_12c [28];
  pair<int,PvPSkillTreeValue> local_110 [28];
  pair local_f4 [4];
  char local_f0;
  pair<int_const,PvPSkillTreeValue> local_ec [28];
  pair<int,PvPSkillTreeValue> local_d0 [28];
  pair local_b4 [8];
  pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
  local_ac [28];
  PvPSkillTreeKey local_90 [28];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_74 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_70 [4];
  pair<int_const,PvPSkillTreeValue> local_6c [28];
  pair<int,PvPSkillTreeValue> local_50 [28];
  map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
  local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_10;
  
  cVar1 = loadRDARScriptFile(g_pvpSkillTreeScriptBaseDirectory,param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_204);
    local_205 = false;
    PvPSkillTreeKey::PvPSkillTreeKey(&local_208);
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                    /* try { // try from 08a5cf88 to 08a5d0e7 has its CatchHandler @ 08a5db22 */
                cVar1 = ScanType((string *)&local_204,true);
                if (cVar1 != '\x01') {
                  unaff_EBX = 1;
                  goto LAB_08a5db40;
                }
                bVar2 = std::operator==(&local_204,"[level]");
                if (!bVar2) break;
                local_20c = ScanInt(&local_205);
                if (local_205 != true) {
                  unaff_EBX = 0;
                  goto LAB_08a5db40;
                }
              }
              bVar2 = std::operator==(&local_204,"[job index]");
              if (!bVar2) break;
              local_208 = (PvPSkillTreeKey)ScanInt(&local_205);
              if (local_205 != true) {
                unaff_EBX = 0;
                goto LAB_08a5db40;
              }
            }
            bVar2 = std::operator==(&local_204,"[grow type index]");
            if (!bVar2) break;
            local_207 = ScanInt(&local_205);
            if (local_205 != true) {
              unaff_EBX = 0;
              goto LAB_08a5db40;
            }
          }
          bVar2 = std::operator==(&local_204,"[awakening type]");
          if (!bVar2) break;
          local_206 = ScanInt(&local_205);
          if (local_205 != true) {
            unaff_EBX = 0;
            goto LAB_08a5db40;
          }
        }
        bVar2 = std::operator==(&local_204,"[skill]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_204,"[static basic skill]");
        if (bVar2) {
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::find(local_254);
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::end(local_74);
          cVar1 = std::
                  _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                                *)local_254,(_Rb_tree_iterator *)local_74);
          if (cVar1 == '\0') {
            unaff_EBX = 0;
            goto LAB_08a5db40;
          }
          local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)0x0;
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_254);
          std::
          map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
          ::find((int *)local_258);
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_254);
          std::
          map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
          ::end(local_70);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator!=
                            (local_258,(_Rb_tree_iterator *)local_70);
          if (cVar1 == '\0') {
            PvPSkillTreeValue::PvPSkillTreeValue(local_270);
                    /* try { // try from 08a5d886 to 08a5d88a has its CatchHandler @ 08a5d933 */
            std::make_pair<int&,PvPSkillTreeValue&>((int *)local_50,(PvPSkillTreeValue *)&local_20c)
            ;
                    /* try { // try from 08a5d89b to 08a5d89f has its CatchHandler @ 08a5d8ef */
            std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_6c,local_50);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                          *)local_254);
                    /* try { // try from 08a5d8c5 to 08a5d8c9 has its CatchHandler @ 08a5d8da */
            std::
            map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
            ::insert(local_278);
                    /* try { // try from 08a5d8d3 to 08a5d8d7 has its CatchHandler @ 08a5d8ef */
            std::pair<int_const,PvPSkillTreeValue>::~pair(local_6c);
                    /* try { // try from 08a5d90a to 08a5d90e has its CatchHandler @ 08a5d933 */
            std::pair<int,PvPSkillTreeValue>::~pair(local_50);
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                              (local_278);
            local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar3 + 0x10);
                    /* try { // try from 08a5d92c to 08a5d930 has its CatchHandler @ 08a5db22 */
            PvPSkillTreeValue::~PvPSkillTreeValue(local_270);
          }
          else {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                              (local_258);
            local_10 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (iVar3 + 0x10);
          }
          while( true ) {
            std::pair<int,int>::pair((pair<int,int> *)&local_280);
                    /* try { // try from 08a5d965 to 08a5dafe has its CatchHandler @ 08a5db22 */
            local_280 = ScanInt(&local_205);
            if ((local_205 != true) || (local_27c = ScanInt(&local_205), local_205 != true)) break;
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_10,(pair *)&local_280);
            std::
            map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
            ::find(local_284);
            std::
            map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
            ::end(local_34);
            cVar1 = std::
                    _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                    ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                                  *)local_284,(_Rb_tree_iterator *)local_34);
            if (cVar1 == '\0') {
              unaff_EBX = 0;
              goto LAB_08a5db40;
            }
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_284);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                      ((int *)local_288);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_284);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30)
            ;
            cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              (local_288,(_Rb_tree_iterator *)local_30);
            if (cVar1 == '\0') {
              std::make_pair<int&,int&>(local_1c,&local_280);
              std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
              std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
              ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                            *)local_284);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                        (local_2c);
            }
            else {
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_288);
              *(undefined4 *)(iVar3 + 4) = local_27c;
            }
          }
        }
      }
      PvPSkillTreeValue::PvPSkillTreeValue(local_224);
      local_14 = 0;
      while( true ) {
        std::pair<int,int>::pair((pair<int,int> *)&local_230);
                    /* try { // try from 08a5d106 to 08a5d2d1 has its CatchHandler @ 08a5d72a */
        local_230 = ScanInt(&local_205);
        if ((local_205 != true) || (local_22c = ScanInt(&local_205), local_205 != true)) break;
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_224,
                   (pair *)&local_230);
        std::
        map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
        ::find(local_234);
        std::
        map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
        ::end(local_200);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                              *)local_234,(_Rb_tree_iterator *)local_200);
        if (cVar1 == '\0') {
          FAIR_PVP_SKILL_TREE_SKILL_PER_POINT::FAIR_PVP_SKILL_TREE_SKILL_PER_POINT(local_2c8);
                    /* try { // try from 08a5d2f2 to 08a5d358 has its CatchHandler @ 08a5d3e9 */
          std::make_pair<int&,int&>(local_1d0,&local_230);
          std::pair<int_const,int>::pair<int,int>(local_1d8,(pair *)local_1d0);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_1e0);
          std::make_pair<PvPSkillTreeKey&,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT&>
                    (local_17c,(FAIR_PVP_SKILL_TREE_SKILL_PER_POINT *)&local_208);
                    /* try { // try from 08a5d36f to 08a5d373 has its CatchHandler @ 08a5d3c1 */
          std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::
          pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>(local_1c0,local_17c);
                    /* try { // try from 08a5d391 to 08a5d395 has its CatchHandler @ 08a5d3a9 */
          std::
          map<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>>
          ::insert(local_1c8);
                    /* try { // try from 08a5d3a2 to 08a5d3a6 has its CatchHandler @ 08a5d3c1 */
          std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::~pair(local_1c0);
                    /* try { // try from 08a5d3e2 to 08a5d3e6 has its CatchHandler @ 08a5d3e9 */
          std::pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>::~pair
                    ((pair<PvPSkillTreeKey,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT> *)local_17c);
                    /* try { // try from 08a5d40d to 08a5d496 has its CatchHandler @ 08a5d72a */
          FAIR_PVP_SKILL_TREE_SKILL_PER_POINT::~FAIR_PVP_SKILL_TREE_SKILL_PER_POINT(local_2c8);
        }
        else {
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
          operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_234);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_238);
          std::
          _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>::
          operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                      *)local_234);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1fc);
          cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            (local_238,(_Rb_tree_iterator *)local_1fc);
          if (cVar1 == '\0') {
            std::make_pair<int&,int&>(local_1e8,&local_230);
            std::pair<int_const,int>::pair<int,int>(local_1f0,(pair *)local_1e8);
            std::
            _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
            ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,FAIR_PVP_SKILL_TREE_SKILL_PER_POINT>>
                          *)local_234);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_1f8);
          }
          else {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_238);
            *(undefined4 *)(iVar3 + 4) = local_22c;
          }
        }
      }
      std::
      map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
      ::find(local_228);
      std::
      map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
      ::end(local_138);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
              ::operator!=((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                            *)local_228,(_Rb_tree_iterator *)local_138);
      if (cVar1 == '\0') {
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::map(local_250);
                    /* try { // try from 08a5d585 to 08a5d589 has its CatchHandler @ 08a5d6f2 */
        std::make_pair<int&,PvPSkillTreeValue&>((int *)local_d0,(PvPSkillTreeValue *)&local_20c);
                    /* try { // try from 08a5d5a0 to 08a5d5a4 has its CatchHandler @ 08a5d600 */
        std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_ec,local_d0);
                    /* try { // try from 08a5d5c2 to 08a5d5c6 has its CatchHandler @ 08a5d5e8 */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::insert(local_f4);
        cVar1 = local_f0;
                    /* try { // try from 08a5d5e1 to 08a5d5e5 has its CatchHandler @ 08a5d600 */
        std::pair<int_const,PvPSkillTreeValue>::~pair(local_ec);
                    /* try { // try from 08a5d624 to 08a5d65f has its CatchHandler @ 08a5d6f2 */
        std::pair<int,PvPSkillTreeValue>::~pair(local_d0);
        if (cVar1 == '\x01') {
          std::
          make_pair<PvPSkillTreeKey&,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>&>
                    (local_90,(map *)&local_208);
                    /* try { // try from 08a5d676 to 08a5d67a has its CatchHandler @ 08a5d6c5 */
          std::
          pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::
          pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
                    (local_ac,local_90);
                    /* try { // try from 08a5d695 to 08a5d699 has its CatchHandler @ 08a5d6ad */
          std::
          map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
          ::insert(local_b4);
                    /* try { // try from 08a5d6a6 to 08a5d6aa has its CatchHandler @ 08a5d6c5 */
          std::
          pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::~pair(local_ac);
                    /* try { // try from 08a5d6e6 to 08a5d6ea has its CatchHandler @ 08a5d6f2 */
          std::
          pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
          ::~pair((pair<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>
                   *)local_90);
        }
        else {
          unaff_EBX = 0;
        }
                    /* try { // try from 08a5d713 to 08a5d717 has its CatchHandler @ 08a5d72a */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::~map(local_250);
        if (cVar1 == '\x01') goto LAB_08a5d723;
        bVar2 = false;
      }
      else {
        std::make_pair<int&,PvPSkillTreeValue&>((int *)local_110,(PvPSkillTreeValue *)&local_20c);
                    /* try { // try from 08a5d4ad to 08a5d4b1 has its CatchHandler @ 08a5d518 */
        std::pair<int_const,PvPSkillTreeValue>::pair<int,PvPSkillTreeValue>(local_12c,local_110);
        std::
        _Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
        ::operator->((_Rb_tree_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                      *)local_228);
                    /* try { // try from 08a5d4da to 08a5d4de has its CatchHandler @ 08a5d500 */
        std::
        map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
        ::insert(local_134);
        cVar1 = local_130;
                    /* try { // try from 08a5d4f9 to 08a5d4fd has its CatchHandler @ 08a5d518 */
        std::pair<int_const,PvPSkillTreeValue>::~pair(local_12c);
                    /* try { // try from 08a5d53c to 08a5d567 has its CatchHandler @ 08a5d72a */
        std::pair<int,PvPSkillTreeValue>::~pair(local_110);
        if (cVar1 == '\x01') {
LAB_08a5d723:
          bVar2 = true;
        }
        else {
          unaff_EBX = 0;
          bVar2 = false;
        }
      }
                    /* try { // try from 08a5d74e to 08a5d86b has its CatchHandler @ 08a5db22 */
      PvPSkillTreeValue::~PvPSkillTreeValue(local_224);
    } while (bVar2);
LAB_08a5db40:
    std::string::~string((string *)&local_204);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
