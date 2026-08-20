# importPairPvPSkillPointScript

`_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc`

`PvPSkillTreeParameterScript::importPairPvPSkillPointScript(char const*)`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5e226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5e226  _ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc
#           PvPSkillTreeParameterScript::importPairPvPSkillPointScript(char const*)
# range [0x08a5e226, 0x08a5e651]
08a5e226 +0x000:  push   %ebp
08a5e227 +0x001:  mov    %esp,%ebp
08a5e229 +0x003:  push   %esi
08a5e22a +0x004:  push   %ebx
08a5e22b +0x005:  sub    $0xd0,%esp
08a5e231 +0x00b:  mov    0xc(%ebp),%eax
08a5e234 +0x00e:  mov    %eax,0x4(%esp)
08a5e238 +0x012:  movl   $"",(%esp)
08a5e23f +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08a5e244 +0x01e:  xor    $0x1,%eax
08a5e247 +0x021:  test   %al,%al
08a5e249 +0x023:  je     08a5e255 <+0x2f>
08a5e24b +0x025:  mov    $0x0,%ebx
08a5e250 +0x02a:  jmp    08a5e646 <+0x420>
08a5e255 +0x02f:  lea    -0x90(%ebp),%eax
08a5e25b +0x035:  mov    %eax,(%esp)
08a5e25e +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a5e263 +0x03d:  movb   $0x0,-0x91(%ebp)
08a5e26a +0x044:  lea    -0xac(%ebp),%eax
08a5e270 +0x04a:  mov    %eax,(%esp)
08a5e273 +0x04d:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
08a5e278 +0x052:  movl   $0x0,-0x14(%ebp)
08a5e27f +0x059:  movl   $0x0,-0x10(%ebp)
08a5e286 +0x060:  movl   $0x37,-0xc(%ebp)
08a5e28d +0x067:  jmp    08a5e296 <+0x70>
08a5e28f +0x069:  nop
08a5e290 +0x06a:  jmp    08a5e296 <+0x70>
08a5e292 +0x06c:  nop
08a5e293 +0x06d:  jmp    08a5e296 <+0x70>
08a5e295 +0x06f:  nop
08a5e296 +0x070:  movl   $0x1,0x4(%esp)
08a5e29e +0x078:  lea    -0x90(%ebp),%eax
08a5e2a4 +0x07e:  mov    %eax,(%esp)
08a5e2a7 +0x081:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a5e2ac +0x086:  xor    $0x1,%eax
08a5e2af +0x089:  test   %al,%al
08a5e2b1 +0x08b:  jne    08a5e5ea <+0x3c4>
08a5e2b7 +0x091:  movl   $"[skill point]",0x4(%esp)
08a5e2bf +0x099:  lea    -0x90(%ebp),%eax
08a5e2c5 +0x09f:  mov    %eax,(%esp)
08a5e2c8 +0x0a2:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5e2cd +0x0a7:  test   %al,%al
08a5e2cf +0x0a9:  je     08a5e4ac <+0x286>
08a5e2d5 +0x0af:  jmp    08a5e2d8 <+0xb2>
08a5e2d7 +0x0b1:  nop
08a5e2d8 +0x0b2:  lea    -0x91(%ebp),%eax
08a5e2de +0x0b8:  mov    %eax,(%esp)
08a5e2e1 +0x0bb:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
08a5e2e6 +0x0c0:  fnstcw -0xba(%ebp)
08a5e2ec +0x0c6:  movzwl -0xba(%ebp),%eax
08a5e2f3 +0x0cd:  mov    $0xc,%ah
08a5e2f5 +0x0cf:  mov    %ax,-0xbc(%ebp)
08a5e2fc +0x0d6:  fldcw  -0xbc(%ebp)
08a5e302 +0x0dc:  fistpl -0xc0(%ebp)
08a5e308 +0x0e2:  fldcw  -0xba(%ebp)
08a5e30e +0x0e8:  mov    -0xc0(%ebp),%eax
08a5e314 +0x0ee:  mov    %eax,-0xb0(%ebp)
08a5e31a +0x0f4:  movzbl -0x91(%ebp),%eax
08a5e321 +0x0fb:  xor    $0x1,%eax
08a5e324 +0x0fe:  test   %al,%al
08a5e326 +0x100:  jne    08a5e466 <+0x240>
08a5e32c +0x106:  mov    -0x14(%ebp),%eax
08a5e32f +0x109:  mov    %eax,-0x74(%ebp)
08a5e332 +0x10c:  lea    -0x74(%ebp),%edx
08a5e335 +0x10f:  addl   $0x1,-0x14(%ebp)
08a5e339 +0x113:  lea    -0x7c(%ebp),%eax
08a5e33c +0x116:  lea    -0xb0(%ebp),%ecx
08a5e342 +0x11c:  mov    %ecx,0x8(%esp)
08a5e346 +0x120:  mov    %edx,0x4(%esp)
08a5e34a +0x124:  mov    %eax,(%esp)
08a5e34d +0x127:  call   080da687 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x824>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x824
08a5e352 +0x12c:  sub    $0x4,%esp
08a5e355 +0x12f:  lea    -0x7c(%ebp),%eax
08a5e358 +0x132:  mov    %eax,0x4(%esp)
08a5e35c +0x136:  lea    -0x84(%ebp),%eax
08a5e362 +0x13c:  mov    %eax,(%esp)
08a5e365 +0x13f:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08a5e36a +0x144:  lea    -0x8c(%ebp),%eax
08a5e370 +0x14a:  lea    -0x84(%ebp),%edx
08a5e376 +0x150:  mov    %edx,0x8(%esp)
08a5e37a +0x154:  lea    -0xac(%ebp),%edx
08a5e380 +0x15a:  mov    %edx,0x4(%esp)
08a5e384 +0x15e:  mov    %eax,(%esp)
08a5e387 +0x161:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08a5e38c +0x166:  sub    $0x4,%esp
08a5e38f +0x169:  lea    -0xac(%ebp),%eax
08a5e395 +0x16f:  mov    %eax,(%esp)
08a5e398 +0x172:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
08a5e39d +0x177:  mov    -0xc(%ebp),%edx
08a5e3a0 +0x17a:  cmp    %edx,%eax
08a5e3a2 +0x17c:  sete   %al
08a5e3a5 +0x17f:  test   %al,%al
08a5e3a7 +0x181:  je     08a5e2d7 <+0xb1>
08a5e3ad +0x187:  mov    -0x10(%ebp),%eax
08a5e3b0 +0x18a:  mov    %eax,-0x30(%ebp)
08a5e3b3 +0x18d:  lea    -0x30(%ebp),%edx
08a5e3b6 +0x190:  addl   $0x1,-0x10(%ebp)
08a5e3ba +0x194:  lea    -0x4c(%ebp),%eax
08a5e3bd +0x197:  lea    -0xac(%ebp),%ecx
08a5e3c3 +0x19d:  mov    %ecx,0x8(%esp)
08a5e3c7 +0x1a1:  mov    %edx,0x4(%esp)
08a5e3cb +0x1a5:  mov    %eax,(%esp)
08a5e3ce +0x1a8:  call   084b4964 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa17>  ; global constructors keyed to game_master::CMacro::Reset()+0xa17
08a5e3d3 +0x1ad:  sub    $0x4,%esp
08a5e3d6 +0x1b0:  lea    -0x4c(%ebp),%eax
08a5e3d9 +0x1b3:  mov    %eax,0x4(%esp)
08a5e3dd +0x1b7:  lea    -0x68(%ebp),%eax
08a5e3e0 +0x1ba:  mov    %eax,(%esp)
08a5e3e3 +0x1bd:  call   084b49b0 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa63>  ; global constructors keyed to game_master::CMacro::Reset()+0xa63
08a5e3e8 +0x1c2:  mov    0x8(%ebp),%eax
08a5e3eb +0x1c5:  lea    0x18(%eax),%ecx
08a5e3ee +0x1c8:  lea    -0x70(%ebp),%eax
08a5e3f1 +0x1cb:  lea    -0x68(%ebp),%edx
08a5e3f4 +0x1ce:  mov    %edx,0x8(%esp)
08a5e3f8 +0x1d2:  mov    %ecx,0x4(%esp)
08a5e3fc +0x1d6:  mov    %eax,(%esp)
08a5e3ff +0x1d9:  call   084b49ea <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xa9d>  ; global constructors keyed to game_master::CMacro::Reset()+0xa9d
08a5e404 +0x1de:  sub    $0x4,%esp
08a5e407 +0x1e1:  lea    -0x68(%ebp),%eax
08a5e40a +0x1e4:  mov    %eax,(%esp)
08a5e40d +0x1e7:  call   083ce248 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68214>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68214
08a5e412 +0x1ec:  jmp    08a5e441 <+0x21b>
08a5e414 +0x1ee:  mov    %edx,%ebx
08a5e416 +0x1f0:  mov    %eax,%esi
08a5e418 +0x1f2:  lea    -0x68(%ebp),%eax
08a5e41b +0x1f5:  mov    %eax,(%esp)
08a5e41e +0x1f8:  call   083ce248 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x68214>  ; global constructors keyed to CServerEvent::m_nExpRate+0x68214
08a5e423 +0x1fd:  mov    %esi,%eax
08a5e425 +0x1ff:  mov    %ebx,%edx
08a5e427 +0x201:  jmp    08a5e429 <+0x203>
08a5e429 +0x203:  mov    %edx,%ebx
08a5e42b +0x205:  mov    %eax,%esi
08a5e42d +0x207:  lea    -0x4c(%ebp),%eax
08a5e430 +0x20a:  mov    %eax,(%esp)
08a5e433 +0x20d:  call   084b4450 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x503>  ; global constructors keyed to game_master::CMacro::Reset()+0x503
08a5e438 +0x212:  mov    %esi,%eax
08a5e43a +0x214:  mov    %ebx,%edx
08a5e43c +0x216:  jmp    08a5e5f2 <+0x3cc>
08a5e441 +0x21b:  lea    -0x4c(%ebp),%eax
08a5e444 +0x21e:  mov    %eax,(%esp)
08a5e447 +0x221:  call   084b4450 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x503>  ; global constructors keyed to game_master::CMacro::Reset()+0x503
08a5e44c +0x226:  lea    -0xac(%ebp),%eax
08a5e452 +0x22c:  mov    %eax,(%esp)
08a5e455 +0x22f:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08a5e45a +0x234:  movl   $0x0,-0x14(%ebp)
08a5e461 +0x23b:  jmp    08a5e2d8 <+0xb2>
08a5e466 +0x240:  nop
08a5e467 +0x241:  lea    -0xac(%ebp),%eax
08a5e46d +0x247:  mov    %eax,(%esp)
08a5e470 +0x24a:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
08a5e475 +0x24f:  mov    -0xc(%ebp),%edx
08a5e478 +0x252:  cmp    %edx,%eax
08a5e47a +0x254:  je     08a5e495 <+0x26f>
08a5e47c +0x256:  lea    -0xac(%ebp),%eax
08a5e482 +0x25c:  mov    %eax,(%esp)
08a5e485 +0x25f:  call   08235840 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaeea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaeea
08a5e48a +0x264:  test   %eax,%eax
08a5e48c +0x266:  je     08a5e495 <+0x26f>
08a5e48e +0x268:  mov    $0x1,%eax
08a5e493 +0x26d:  jmp    08a5e49a <+0x274>
08a5e495 +0x26f:  mov    $0x0,%eax
08a5e49a +0x274:  test   %al,%al
08a5e49c +0x276:  je     08a5e28f <+0x69>
08a5e4a2 +0x27c:  mov    $0x0,%ebx
08a5e4a7 +0x281:  jmp    08a5e60a <+0x3e4>
08a5e4ac +0x286:  movl   $"[version]",0x4(%esp)
08a5e4b4 +0x28e:  lea    -0x90(%ebp),%eax
08a5e4ba +0x294:  mov    %eax,(%esp)
08a5e4bd +0x297:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5e4c2 +0x29c:  test   %al,%al
08a5e4c4 +0x29e:  je     08a5e4f8 <+0x2d2>
08a5e4c6 +0x2a0:  lea    -0x91(%ebp),%eax
08a5e4cc +0x2a6:  mov    %eax,(%esp)
08a5e4cf +0x2a9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5e4d4 +0x2ae:  mov    %eax,%edx
08a5e4d6 +0x2b0:  mov    0x8(%ebp),%eax
08a5e4d9 +0x2b3:  mov    %dl,0x50(%eax)
08a5e4dc +0x2b6:  movzbl -0x91(%ebp),%eax
08a5e4e3 +0x2bd:  xor    $0x1,%eax
08a5e4e6 +0x2c0:  test   %al,%al
08a5e4e8 +0x2c2:  je     08a5e292 <+0x6c>
08a5e4ee +0x2c8:  mov    $0x0,%ebx
08a5e4f3 +0x2cd:  jmp    08a5e60a <+0x3e4>
08a5e4f8 +0x2d2:  movl   $"[init skill tree]",0x4(%esp)
08a5e500 +0x2da:  lea    -0x90(%ebp),%eax
08a5e506 +0x2e0:  mov    %eax,(%esp)
08a5e509 +0x2e3:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a5e50e +0x2e8:  test   %al,%al
08a5e510 +0x2ea:  je     08a5e295 <+0x6f>
08a5e516 +0x2f0:  movl   $0x0,-0xb4(%ebp)
08a5e520 +0x2fa:  movl   $0x0,-0xb8(%ebp)
08a5e52a +0x304:  jmp    08a5e52d <+0x307>
08a5e52c +0x306:  nop
08a5e52d +0x307:  lea    -0x91(%ebp),%eax
08a5e533 +0x30d:  mov    %eax,(%esp)
08a5e536 +0x310:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5e53b +0x315:  mov    %eax,-0xb4(%ebp)
08a5e541 +0x31b:  movzbl -0x91(%ebp),%eax
08a5e548 +0x322:  xor    $0x1,%eax
08a5e54b +0x325:  test   %al,%al
08a5e54d +0x327:  je     08a5e555 <+0x32f>
08a5e54f +0x329:  nop
08a5e550 +0x32a:  jmp    08a5e296 <+0x70>
08a5e555 +0x32f:  lea    -0x91(%ebp),%eax
08a5e55b +0x335:  mov    %eax,(%esp)
08a5e55e +0x338:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a5e563 +0x33d:  mov    %eax,-0xb8(%ebp)
08a5e569 +0x343:  movzbl -0x91(%ebp),%eax
08a5e570 +0x34a:  xor    $0x1,%eax
08a5e573 +0x34d:  test   %al,%al
08a5e575 +0x34f:  je     08a5e581 <+0x35b>
08a5e577 +0x351:  mov    $0x0,%ebx
08a5e57c +0x356:  jmp    08a5e60a <+0x3e4>
08a5e581 +0x35b:  lea    -0x1c(%ebp),%eax
08a5e584 +0x35e:  lea    -0xb8(%ebp),%edx
08a5e58a +0x364:  mov    %edx,0x8(%esp)
08a5e58e +0x368:  lea    -0xb4(%ebp),%edx
08a5e594 +0x36e:  mov    %edx,0x4(%esp)
08a5e598 +0x372:  mov    %eax,(%esp)
08a5e59b +0x375:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08a5e5a0 +0x37a:  sub    $0x4,%esp
08a5e5a3 +0x37d:  lea    -0x1c(%ebp),%eax
08a5e5a6 +0x380:  mov    %eax,0x4(%esp)
08a5e5aa +0x384:  lea    -0x24(%ebp),%eax
08a5e5ad +0x387:  mov    %eax,(%esp)
08a5e5b0 +0x38a:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08a5e5b5 +0x38f:  mov    0x8(%ebp),%eax
08a5e5b8 +0x392:  lea    0x54(%eax),%ecx
08a5e5bb +0x395:  lea    -0x2c(%ebp),%eax
08a5e5be +0x398:  lea    -0x24(%ebp),%edx
08a5e5c1 +0x39b:  mov    %edx,0x8(%esp)
08a5e5c5 +0x39f:  mov    %ecx,0x4(%esp)
08a5e5c9 +0x3a3:  mov    %eax,(%esp)
08a5e5cc +0x3a6:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08a5e5d1 +0x3ab:  sub    $0x4,%esp
08a5e5d4 +0x3ae:  movzbl -0x28(%ebp),%eax
08a5e5d8 +0x3b2:  xor    $0x1,%eax
08a5e5db +0x3b5:  test   %al,%al
08a5e5dd +0x3b7:  je     08a5e52c <+0x306>
08a5e5e3 +0x3bd:  mov    $0x0,%ebx
08a5e5e8 +0x3c2:  jmp    08a5e60a <+0x3e4>
08a5e5ea +0x3c4:  nop
08a5e5eb +0x3c5:  mov    $0x1,%ebx
08a5e5f0 +0x3ca:  jmp    08a5e60a <+0x3e4>
08a5e5f2 +0x3cc:  mov    %edx,%ebx
08a5e5f4 +0x3ce:  mov    %eax,%esi
08a5e5f6 +0x3d0:  lea    -0xac(%ebp),%eax
08a5e5fc +0x3d6:  mov    %eax,(%esp)
08a5e5ff +0x3d9:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08a5e604 +0x3de:  mov    %esi,%eax
08a5e606 +0x3e0:  mov    %ebx,%edx
08a5e608 +0x3e2:  jmp    08a5e61a <+0x3f4>
08a5e60a +0x3e4:  lea    -0xac(%ebp),%eax
08a5e610 +0x3ea:  mov    %eax,(%esp)
08a5e613 +0x3ed:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08a5e618 +0x3f2:  jmp    08a5e638 <+0x412>
08a5e61a +0x3f4:  mov    %edx,%ebx
08a5e61c +0x3f6:  mov    %eax,%esi
08a5e61e +0x3f8:  lea    -0x90(%ebp),%eax
08a5e624 +0x3fe:  mov    %eax,(%esp)
08a5e627 +0x401:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5e62c +0x406:  mov    %esi,%eax
08a5e62e +0x408:  mov    %ebx,%edx
08a5e630 +0x40a:  mov    %eax,(%esp)
08a5e633 +0x40d:  call   08ae3750 <_Unwind_Resume>
08a5e638 +0x412:  lea    -0x90(%ebp),%eax
08a5e63e +0x418:  mov    %eax,(%esp)
08a5e641 +0x41b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5e646 +0x420:  mov    %ebx,%eax
08a5e648 +0x422:  lea    -0x8(%ebp),%esp
08a5e64b +0x425:  add    $0x0,%esp
08a5e64e +0x428:  pop    %ebx
08a5e64f +0x429:  pop    %esi
08a5e650 +0x42a:  pop    %ebp
08a5e651 +0x42b:  ret
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::importPairPvPSkillPointScript @ 0x8a5e226

/* PvPSkillTreeParameterScript::importPairPvPSkillPointScript(char const*) */

undefined4 __thiscall
PvPSkillTreeParameterScript::importPairPvPSkillPointScript
          (PvPSkillTreeParameterScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  PvPSkillTreeParameterScript PVar3;
  int iVar4;
  undefined4 uVar5;
  longdouble lVar6;
  int local_b8;
  int local_b4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_b0 [27];
  bool local_95;
  string local_94;
  pair local_90 [8];
  pair<int_const,int> local_88 [8];
  int local_80 [2];
  int local_78;
  pair local_74 [8];
  pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
  local_6c [28];
  pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>> local_50 [28];
  int local_34;
  pair local_30 [4];
  char local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_94);
    local_95 = false;
                    /* try { // try from 08a5e273 to 08a5e277 has its CatchHandler @ 08a5e61a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_b0);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0x37;
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08a5e2a7 to 08a5e3d2 has its CatchHandler @ 08a5e5f2 */
          cVar1 = ScanType((string *)&local_94,true);
          if (cVar1 != '\x01') {
            uVar5 = 1;
            goto LAB_08a5e60a;
          }
          bVar2 = std::operator==(&local_94,"[skill point]");
          if (!bVar2) break;
          while( true ) {
            lVar6 = (longdouble)ScanFloat(&local_95);
            local_b4 = (int)ROUND(lVar6);
            if (local_95 != true) break;
            local_78 = local_18;
            local_18 = local_18 + 1;
            std::make_pair<int,int&>(local_80,&local_78);
            std::pair<int_const,int>::pair<int,int>(local_88,(pair *)local_80);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_90);
            iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                              (local_b0);
            if (iVar4 == local_10) {
              local_34 = local_14;
              local_14 = local_14 + 1;
              std::
              make_pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>&>
                        ((int *)local_50,(map *)&local_34);
                    /* try { // try from 08a5e3e3 to 08a5e3e7 has its CatchHandler @ 08a5e429 */
              std::
              pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ::pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                        (local_6c,local_50);
                    /* try { // try from 08a5e3ff to 08a5e403 has its CatchHandler @ 08a5e414 */
              std::
              map<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>>>
              ::insert(local_74);
                    /* try { // try from 08a5e40d to 08a5e411 has its CatchHandler @ 08a5e429 */
              std::
              pair<int_const,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
              ::~pair(local_6c);
                    /* try { // try from 08a5e447 to 08a5e5d0 has its CatchHandler @ 08a5e5f2 */
              std::
              pair<int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>::
              ~pair(local_50);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
                        (local_b0);
              local_18 = 0;
            }
          }
          iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                            (local_b0);
          if ((iVar4 == local_10) ||
             (iVar4 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      size(local_b0), iVar4 == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar5 = 0;
            goto LAB_08a5e60a;
          }
        }
        bVar2 = std::operator==(&local_94,"[version]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_94,"[init skill tree]");
        if (bVar2) {
          local_b8 = 0;
          while (local_b8 = ScanInt(&local_95), local_95 == true) {
            ScanInt(&local_95);
            if (local_95 != true) {
              uVar5 = 0;
              goto LAB_08a5e60a;
            }
            std::make_pair<int&,int&>(local_20,&local_b8);
            std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_30);
            if (local_2c != '\x01') {
              uVar5 = 0;
              goto LAB_08a5e60a;
            }
          }
        }
      }
      PVar3 = (PvPSkillTreeParameterScript)ScanInt(&local_95);
      this[0x50] = PVar3;
    } while (local_95 == true);
    uVar5 = 0;
LAB_08a5e60a:
                    /* try { // try from 08a5e613 to 08a5e617 has its CatchHandler @ 08a5e61a */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_b0);
    std::string::~string((string *)&local_94);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
