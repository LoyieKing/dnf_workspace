# RecoverFatigue

`_ZN5CUser14RecoverFatigueEi`

`CUser::RecoverFatigue(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08657ada` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08657ada  _ZN5CUser14RecoverFatigueEi
#           CUser::RecoverFatigue(int)
# range [0x08657ada, 0x08657f0f]
08657ada +0x000:  push   %ebp
08657adb +0x001:  mov    %esp,%ebp
08657add +0x003:  push   %esi
08657ade +0x004:  push   %ebx
08657adf +0x005:  sub    $0x20,%esp
08657ae2 +0x008:  mov    0x8(%ebp),%eax
08657ae5 +0x00b:  mov    %eax,(%esp)
08657ae8 +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657aed +0x013:  test   %eax,%eax
08657aef +0x015:  sete   %al
08657af2 +0x018:  test   %al,%al
08657af4 +0x01a:  jne    08657f07 <+0x42d>
08657afa +0x020:  mov    0xc(%ebp),%eax
08657afd +0x023:  movzwl %ax,%edx
08657b00 +0x026:  mov    0x8(%ebp),%eax
08657b03 +0x029:  mov    %edx,0x4(%esp)
08657b07 +0x02d:  mov    %eax,(%esp)
08657b0a +0x030:  call   086963d0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2c25>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2c25
08657b0f +0x035:  mov    0x8(%ebp),%eax
08657b12 +0x038:  mov    0xc(%ebp),%edx
08657b15 +0x03b:  mov    %edx,0x4(%esp)
08657b19 +0x03f:  mov    %eax,(%esp)
08657b1c +0x042:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
08657b21 +0x047:  mov    0x8(%ebp),%eax
08657b24 +0x04a:  mov    %eax,(%esp)
08657b27 +0x04d:  call   08696528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d7d
08657b2c +0x052:  test   %eax,%eax
08657b2e +0x054:  setne  %al
08657b31 +0x057:  test   %al,%al
08657b33 +0x059:  je     08657b75 <+0x9b>
08657b35 +0x05b:  mov    0x8(%ebp),%eax
08657b38 +0x05e:  mov    %eax,(%esp)
08657b3b +0x061:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08657b40 +0x066:  mov    %eax,%ebx
08657b42 +0x068:  mov    0x8(%ebp),%eax
08657b45 +0x06b:  mov    %eax,(%esp)
08657b48 +0x06e:  call   08696528 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d7d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d7d
08657b4d +0x073:  mov    %eax,%esi
08657b4f +0x075:  mov    0x8(%ebp),%eax
08657b52 +0x078:  mov    %eax,(%esp)
08657b55 +0x07b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08657b5a +0x080:  mov    %ebx,0x8(%esp)
08657b5e +0x084:  mov    %esi,0x4(%esp)
08657b62 +0x088:  mov    %eax,(%esp)
08657b65 +0x08b:  call   0842f0f0 <_ZN20DB_UpdateSchoolPoint11makeRequestEjii>  ; DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int)
08657b6a +0x090:  mov    0x8(%ebp),%eax
08657b6d +0x093:  mov    %eax,(%esp)
08657b70 +0x096:  call   0869650c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2d61>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2d61
08657b75 +0x09b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08657b7a +0x0a0:  movl   $0x2,0x4(%esp)
08657b82 +0x0a8:  mov    %eax,(%esp)
08657b85 +0x0ab:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08657b8a +0x0b0:  mov    %eax,-0x18(%ebp)
08657b8d +0x0b3:  mov    0x8(%ebp),%eax
08657b90 +0x0b6:  mov    %eax,(%esp)
08657b93 +0x0b9:  call   0812cdbe <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x3a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x3a
08657b98 +0x0be:  mov    %eax,-0x14(%ebp)
08657b9b +0x0c1:  cmpl   $0x0,-0x14(%ebp)
08657b9f +0x0c5:  je     08657d68 <+0x28e>
08657ba5 +0x0cb:  cmpl   $0x0,-0x18(%ebp)
08657ba9 +0x0cf:  je     08657c0f <+0x135>
08657bab +0x0d1:  mov    -0x18(%ebp),%eax
08657bae +0x0d4:  mov    (%eax),%eax
08657bb0 +0x0d6:  add    $0x34,%eax
08657bb3 +0x0d9:  mov    (%eax),%edx
08657bb5 +0x0db:  mov    -0x18(%ebp),%eax
08657bb8 +0x0de:  movl   $0x0,0x4(%esp)
08657bc0 +0x0e6:  mov    %eax,(%esp)
08657bc3 +0x0e9:  call   *%edx
08657bc5 +0x0eb:  test   %al,%al
08657bc7 +0x0ed:  je     08657c01 <+0x127>
08657bc9 +0x0ef:  mov    -0x18(%ebp),%eax
08657bcc +0x0f2:  mov    %eax,(%esp)
08657bcf +0x0f5:  call   0812ce54 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xd0>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xd0
08657bd4 +0x0fa:  mov    &DEFAULT_MAX_FATIGUE,%edx
08657bda +0x100:  mov    %eax,%ecx
08657bdc +0x102:  imul   %edx,%ecx
08657bdf +0x105:  mov    $0x51eb851f,%edx
08657be4 +0x10a:  mov    %ecx,%eax
08657be6 +0x10c:  imul   %edx
08657be8 +0x10e:  sar    $0x5,%edx
08657beb +0x111:  mov    %ecx,%eax
08657bed +0x113:  sar    $0x1f,%eax
08657bf0 +0x116:  mov    %edx,%ecx
08657bf2 +0x118:  sub    %eax,%ecx
08657bf4 +0x11a:  mov    %ecx,%eax
08657bf6 +0x11c:  mov    %eax,%edx
08657bf8 +0x11e:  mov    -0x14(%ebp),%eax
08657bfb +0x121:  mov    %dx,0x35(%eax)
08657bff +0x125:  jmp    08657c0f <+0x135>
08657c01 +0x127:  mov    &DEFAULT_MAX_FATIGUE,%eax
08657c06 +0x12c:  mov    %eax,%edx
08657c08 +0x12e:  mov    -0x14(%ebp),%eax
08657c0b +0x131:  mov    %dx,0x35(%eax)
08657c0f +0x135:  mov    0x8(%ebp),%eax
08657c12 +0x138:  mov    %eax,(%esp)
08657c15 +0x13b:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
08657c1a +0x140:  test   %al,%al
08657c1c +0x142:  je     08657d68 <+0x28e>
08657c22 +0x148:  cmpl   $0x0,-0x18(%ebp)
08657c26 +0x14c:  je     08657c4d <+0x173>
08657c28 +0x14e:  mov    -0x18(%ebp),%eax
08657c2b +0x151:  mov    (%eax),%eax
08657c2d +0x153:  add    $0x34,%eax
08657c30 +0x156:  mov    (%eax),%edx
08657c32 +0x158:  mov    -0x18(%ebp),%eax
08657c35 +0x15b:  movl   $0x0,0x4(%esp)
08657c3d +0x163:  mov    %eax,(%esp)
08657c40 +0x166:  call   *%edx
08657c42 +0x168:  test   %al,%al
08657c44 +0x16a:  je     08657c4d <+0x173>
08657c46 +0x16c:  mov    $0x1,%eax
08657c4b +0x171:  jmp    08657c52 <+0x178>
08657c4d +0x173:  mov    $0x0,%eax
08657c52 +0x178:  test   %al,%al
08657c54 +0x17a:  je     08657d19 <+0x23f>
08657c5a +0x180:  mov    -0x18(%ebp),%eax
08657c5d +0x183:  mov    %eax,(%esp)
08657c60 +0x186:  call   0812ce54 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xd0>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xd0
08657c65 +0x18b:  mov    &DEFAULT_MAX_FATIGUE,%edx
08657c6b +0x191:  mov    %eax,%ecx
08657c6d +0x193:  imul   %edx,%ecx
08657c70 +0x196:  mov    $0x51eb851f,%edx
08657c75 +0x19b:  mov    %ecx,%eax
08657c77 +0x19d:  imul   %edx
08657c79 +0x19f:  sar    $0x5,%edx
08657c7c +0x1a2:  mov    %ecx,%eax
08657c7e +0x1a4:  sar    $0x1f,%eax
08657c81 +0x1a7:  mov    %edx,%ecx
08657c83 +0x1a9:  sub    %eax,%ecx
08657c85 +0x1ab:  mov    %ecx,%eax
08657c87 +0x1ad:  mov    %eax,%edx
08657c89 +0x1af:  mov    &DEFAULT_MAX_FATIGUE,%eax
08657c8e +0x1b4:  mov    %edx,%ecx
08657c90 +0x1b6:  sub    %ax,%cx
08657c93 +0x1b9:  mov    %ecx,%eax
08657c95 +0x1bb:  mov    %ax,-0xe(%ebp)
08657c99 +0x1bf:  mov    0x8(%ebp),%eax
08657c9c +0x1c2:  add    $0x7121c,%eax
08657ca1 +0x1c7:  mov    %eax,(%esp)
08657ca4 +0x1ca:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657ca9 +0x1cf:  movzwl %ax,%edx
08657cac +0x1d2:  mov    &DEFAULT_MAX_FATIGUE,%eax
08657cb1 +0x1d7:  mov    %edx,%ecx
08657cb3 +0x1d9:  imul   %eax,%ecx
08657cb6 +0x1dc:  mov    $0x51eb851f,%edx
08657cbb +0x1e1:  mov    %ecx,%eax
08657cbd +0x1e3:  imul   %edx
08657cbf +0x1e5:  sar    $0x5,%edx
08657cc2 +0x1e8:  mov    %ecx,%eax
08657cc4 +0x1ea:  sar    $0x1f,%eax
08657cc7 +0x1ed:  mov    %edx,%ecx
08657cc9 +0x1ef:  sub    %eax,%ecx
08657ccb +0x1f1:  mov    %ecx,%eax
08657ccd +0x1f3:  mov    %eax,%ebx
08657ccf +0x1f5:  movzwl -0xe(%ebp),%esi
08657cd3 +0x1f9:  mov    0x8(%ebp),%eax
08657cd6 +0x1fc:  add    $0x7121c,%eax
08657cdb +0x201:  mov    %eax,(%esp)
08657cde +0x204:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657ce3 +0x209:  movzwl %ax,%eax
08657ce6 +0x20c:  mov    %esi,%ecx
08657ce8 +0x20e:  imul   %eax,%ecx
08657ceb +0x211:  mov    $0x51eb851f,%edx
08657cf0 +0x216:  mov    %ecx,%eax
08657cf2 +0x218:  imul   %edx
08657cf4 +0x21a:  sar    $0x5,%edx
08657cf7 +0x21d:  mov    %ecx,%eax
08657cf9 +0x21f:  sar    $0x1f,%eax
08657cfc +0x222:  mov    %edx,%ecx
08657cfe +0x224:  sub    %eax,%ecx
08657d00 +0x226:  mov    %ecx,%eax
08657d02 +0x228:  lea    (%ebx,%eax,1),%eax
08657d05 +0x22b:  movzwl %ax,%edx
08657d08 +0x22e:  mov    0x8(%ebp),%eax
08657d0b +0x231:  mov    %edx,0x4(%esp)
08657d0f +0x235:  mov    %eax,(%esp)
08657d12 +0x238:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
08657d17 +0x23d:  jmp    08657d68 <+0x28e>
08657d19 +0x23f:  mov    0x8(%ebp),%eax
08657d1c +0x242:  mov    %eax,(%esp)
08657d1f +0x245:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
08657d24 +0x24a:  movzwl %ax,%ebx
08657d27 +0x24d:  mov    0x8(%ebp),%eax
08657d2a +0x250:  add    $0x7121c,%eax
08657d2f +0x255:  mov    %eax,(%esp)
08657d32 +0x258:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657d37 +0x25d:  movzwl %ax,%eax
08657d3a +0x260:  mov    %ebx,%ecx
08657d3c +0x262:  imul   %eax,%ecx
08657d3f +0x265:  mov    $0x51eb851f,%edx
08657d44 +0x26a:  mov    %ecx,%eax
08657d46 +0x26c:  imul   %edx
08657d48 +0x26e:  sar    $0x5,%edx
08657d4b +0x271:  mov    %ecx,%eax
08657d4d +0x273:  sar    $0x1f,%eax
08657d50 +0x276:  mov    %edx,%ecx
08657d52 +0x278:  sub    %eax,%ecx
08657d54 +0x27a:  mov    %ecx,%eax
08657d56 +0x27c:  movzwl %ax,%edx
08657d59 +0x27f:  mov    0x8(%ebp),%eax
08657d5c +0x282:  mov    %edx,0x4(%esp)
08657d60 +0x286:  mov    %eax,(%esp)
08657d63 +0x289:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
08657d68 +0x28e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08657d6d +0x293:  movl   $0x57,0x4(%esp)
08657d75 +0x29b:  mov    %eax,(%esp)
08657d78 +0x29e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08657d7d +0x2a3:  mov    (%eax),%edx
08657d7f +0x2a5:  add    $0x34,%edx
08657d82 +0x2a8:  mov    (%edx),%edx
08657d84 +0x2aa:  movl   $0x0,0x4(%esp)
08657d8c +0x2b2:  mov    %eax,(%esp)
08657d8f +0x2b5:  call   *%edx
08657d91 +0x2b7:  test   %al,%al
08657d93 +0x2b9:  je     08657e9c <+0x3c2>
08657d99 +0x2bf:  mov    0x8(%ebp),%eax
08657d9c +0x2c2:  mov    %eax,(%esp)
08657d9f +0x2c5:  call   0812cdbe <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x3a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x3a
08657da4 +0x2ca:  mov    %eax,-0xc(%ebp)
08657da7 +0x2cd:  mov    -0xc(%ebp),%eax
08657daa +0x2d0:  movzwl 0x35(%eax),%ebx
08657dae +0x2d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08657db3 +0x2d9:  movzwl 0x51c(%eax),%eax
08657dba +0x2e0:  lea    (%ebx,%eax,1),%edx
08657dbd +0x2e3:  mov    -0xc(%ebp),%eax
08657dc0 +0x2e6:  mov    %dx,0x35(%eax)
08657dc4 +0x2ea:  mov    0x8(%ebp),%eax
08657dc7 +0x2ed:  add    $0x7121c,%eax
08657dcc +0x2f2:  mov    %eax,(%esp)
08657dcf +0x2f5:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657dd4 +0x2fa:  test   %ax,%ax
08657dd7 +0x2fd:  je     08657def <+0x315>
08657dd9 +0x2ff:  mov    0x8(%ebp),%eax
08657ddc +0x302:  mov    %eax,(%esp)
08657ddf +0x305:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
08657de4 +0x30a:  test   %eax,%eax
08657de6 +0x30c:  je     08657def <+0x315>
08657de8 +0x30e:  mov    $0x1,%eax
08657ded +0x313:  jmp    08657df4 <+0x31a>
08657def +0x315:  mov    $0x0,%eax
08657df4 +0x31a:  test   %al,%al
08657df6 +0x31c:  je     08657e54 <+0x37a>
08657df8 +0x31e:  mov    0x8(%ebp),%eax
08657dfb +0x321:  add    $0x7121c,%eax
08657e00 +0x326:  mov    %eax,(%esp)
08657e03 +0x329:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657e08 +0x32e:  movzwl %ax,%edx
08657e0b +0x331:  mov    &DEFAULT_MAX_FATIGUE,%eax
08657e10 +0x336:  mov    %edx,%ecx
08657e12 +0x338:  imul   %eax,%ecx
08657e15 +0x33b:  mov    $0x51eb851f,%edx
08657e1a +0x340:  mov    %ecx,%eax
08657e1c +0x342:  imul   %edx
08657e1e +0x344:  sar    $0x5,%edx
08657e21 +0x347:  mov    %ecx,%eax
08657e23 +0x349:  sar    $0x1f,%eax
08657e26 +0x34c:  mov    %edx,%ecx
08657e28 +0x34e:  sub    %eax,%ecx
08657e2a +0x350:  mov    %ecx,%eax
08657e2c +0x352:  mov    %eax,%ebx
08657e2e +0x354:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08657e33 +0x359:  movzwl 0x51c(%eax),%eax
08657e3a +0x360:  lea    (%ebx,%eax,1),%eax
08657e3d +0x363:  movzwl %ax,%edx
08657e40 +0x366:  mov    0x8(%ebp),%eax
08657e43 +0x369:  mov    %edx,0x4(%esp)
08657e47 +0x36d:  mov    %eax,(%esp)
08657e4a +0x370:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
08657e4f +0x375:  jmp    08657efa <+0x420>
08657e54 +0x37a:  mov    0x8(%ebp),%eax
08657e57 +0x37d:  add    $0x7121c,%eax
08657e5c +0x382:  mov    %eax,(%esp)
08657e5f +0x385:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657e64 +0x38a:  movzwl %ax,%edx
08657e67 +0x38d:  mov    &DEFAULT_MAX_FATIGUE,%eax
08657e6c +0x392:  mov    %edx,%ecx
08657e6e +0x394:  imul   %eax,%ecx
08657e71 +0x397:  mov    $0x51eb851f,%edx
08657e76 +0x39c:  mov    %ecx,%eax
08657e78 +0x39e:  imul   %edx
08657e7a +0x3a0:  sar    $0x5,%edx
08657e7d +0x3a3:  mov    %ecx,%eax
08657e7f +0x3a5:  sar    $0x1f,%eax
08657e82 +0x3a8:  mov    %edx,%ecx
08657e84 +0x3aa:  sub    %eax,%ecx
08657e86 +0x3ac:  mov    %ecx,%eax
08657e88 +0x3ae:  movzwl %ax,%edx
08657e8b +0x3b1:  mov    0x8(%ebp),%eax
08657e8e +0x3b4:  mov    %edx,0x4(%esp)
08657e92 +0x3b8:  mov    %eax,(%esp)
08657e95 +0x3bb:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
08657e9a +0x3c0:  jmp    08657efa <+0x420>
08657e9c +0x3c2:  mov    0x8(%ebp),%eax
08657e9f +0x3c5:  mov    %eax,(%esp)
08657ea2 +0x3c8:  call   0812ce36 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xb2>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xb2
08657ea7 +0x3cd:  test   %al,%al
08657ea9 +0x3cf:  je     08657efa <+0x420>
08657eab +0x3d1:  mov    0x8(%ebp),%eax
08657eae +0x3d4:  mov    %eax,(%esp)
08657eb1 +0x3d7:  call   0812cdd6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x52>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x52
08657eb6 +0x3dc:  movzwl %ax,%ebx
08657eb9 +0x3df:  mov    0x8(%ebp),%eax
08657ebc +0x3e2:  add    $0x7121c,%eax
08657ec1 +0x3e7:  mov    %eax,(%esp)
08657ec4 +0x3ea:  call   0812cdae <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x2a>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x2a
08657ec9 +0x3ef:  movzwl %ax,%eax
08657ecc +0x3f2:  mov    %ebx,%ecx
08657ece +0x3f4:  imul   %eax,%ecx
08657ed1 +0x3f7:  mov    $0x51eb851f,%edx
08657ed6 +0x3fc:  mov    %ecx,%eax
08657ed8 +0x3fe:  imul   %edx
08657eda +0x400:  sar    $0x5,%edx
08657edd +0x403:  mov    %ecx,%eax
08657edf +0x405:  sar    $0x1f,%eax
08657ee2 +0x408:  mov    %edx,%ecx
08657ee4 +0x40a:  sub    %eax,%ecx
08657ee6 +0x40c:  mov    %ecx,%eax
08657ee8 +0x40e:  movzwl %ax,%edx
08657eeb +0x411:  mov    0x8(%ebp),%eax
08657eee +0x414:  mov    %edx,0x4(%esp)
08657ef2 +0x418:  mov    %eax,(%esp)
08657ef5 +0x41b:  call   0812cdf6 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0x72>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0x72
08657efa +0x420:  mov    0x8(%ebp),%eax
08657efd +0x423:  mov    %eax,(%esp)
08657f00 +0x426:  call   0869645e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2cb3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2cb3
08657f05 +0x42b:  jmp    08657f08 <+0x42e>
08657f07 +0x42d:  nop
08657f08 +0x42e:  add    $0x20,%esp
08657f0b +0x431:  pop    %ebx
08657f0c +0x432:  pop    %esi
08657f0d +0x433:  pop    %ebp
08657f0e +0x434:  ret
08657f0f +0x435:  nop
```

## 反编译 C

```c
// CUser::RecoverFatigue @ 0x8657ada

/* CUser::RecoverFatigue(int) */

void __thiscall CUser::RecoverFatigue(CUser *this,int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  CMaxFatigueFactorEvent *this_00;
  int *piVar7;
  uint uVar8;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 != 0) {
    CUserCharacInfo::setCurCharacPremiumFatigue((CUserCharacInfo *)this,(ushort)param_1);
    CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,param_1);
    iVar4 = CUserCharacInfo::getCurCharacSchoolPoint((CUserCharacInfo *)this);
    if (iVar4 != 0) {
      iVar4 = GetUID(this);
      iVar5 = CUserCharacInfo::getCurCharacSchoolPoint((CUserCharacInfo *)this);
      uVar6 = get_acc_id(this);
      DB_UpdateSchoolPoint::makeRequest(uVar6,iVar5,iVar4);
      CUserCharacInfo::resetCurCharacSchoolPoint((CUserCharacInfo *)this);
    }
    this_00 = (CMaxFatigueFactorEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,2)
    ;
    iVar4 = CUserCharacInfo::getCurCharacW((CUserCharacInfo *)this);
    if (iVar4 != 0) {
      if (this_00 != (CMaxFatigueFactorEvent *)0x0) {
        cVar2 = (**(code **)(*(int *)this_00 + 0x34))(this_00,0);
        if (cVar2 == '\0') {
          *(short *)(iVar4 + 0x35) = (short)DEFAULT_MAX_FATIGUE;
        }
        else {
          iVar5 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(this_00);
          *(short *)(iVar4 + 0x35) = (short)((iVar5 * DEFAULT_MAX_FATIGUE) / 100);
        }
      }
      cVar2 = IsHavePremiumAdvantage(this);
      if (cVar2 != '\0') {
        if ((this_00 == (CMaxFatigueFactorEvent *)0x0) ||
           (cVar2 = (**(code **)(*(int *)this_00 + 0x34))(this_00,0), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar4 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(this_00);
          iVar4 = iVar4 * DEFAULT_MAX_FATIGUE;
          sVar3 = (short)DEFAULT_MAX_FATIGUE;
          uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
          iVar5 = (uVar6 & 0xffff) * DEFAULT_MAX_FATIGUE;
          uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    ((CUserCharacInfo *)this,
                     (short)(iVar5 / 100) +
                     (short)((int)((uint)(ushort)((short)(iVar4 / 100) - sVar3) * (uVar6 & 0xffff))
                            / 100));
        }
        else {
          uVar6 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)this);
          uVar8 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
          CUserCharacInfo::setCurCharacMaxPremiumFatigue
                    ((CUserCharacInfo *)this,
                     (ushort)((int)((uVar6 & 0xffff) * (uVar8 & 0xffff)) / 100));
        }
      }
    }
    piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
    cVar2 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
    if (cVar2 == '\0') {
      cVar2 = IsHavePremiumAdvantage(this);
      if (cVar2 != '\0') {
        uVar6 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)this);
        uVar8 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
        CUserCharacInfo::setCurCharacMaxPremiumFatigue
                  ((CUserCharacInfo *)this,
                   (ushort)((int)((uVar6 & 0xffff) * (uVar8 & 0xffff)) / 100));
      }
    }
    else {
      iVar4 = CUserCharacInfo::getCurCharacW((CUserCharacInfo *)this);
      sVar3 = *(short *)(iVar4 + 0x35);
      iVar5 = G_CDataManager();
      *(short *)(iVar4 + 0x35) = sVar3 + *(short *)(iVar5 + 0x51c);
      sVar3 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
      if ((sVar3 == 0) || (iVar4 = GetPCRoomNo(this), iVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
        iVar5 = (uVar6 & 0xffff) * DEFAULT_MAX_FATIGUE;
        iVar4 = G_CDataManager();
        CUserCharacInfo::setCurCharacMaxPremiumFatigue
                  ((CUserCharacInfo *)this,(short)(iVar5 / 100) + *(short *)(iVar4 + 0x51c));
      }
      else {
        uVar6 = WongWork::CUserPremium::GetAdvantageFatigueRate((CUserPremium *)(this + 0x7121c));
        CUserCharacInfo::setCurCharacMaxPremiumFatigue
                  ((CUserCharacInfo *)this,
                   (ushort)((int)((uVar6 & 0xffff) * DEFAULT_MAX_FATIGUE) / 100));
      }
    }
    CUserCharacInfo::resetCurCharacUsedFatigue((CUserCharacInfo *)this);
    return;
  }
  return;
}
```
