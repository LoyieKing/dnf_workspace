# _makeEventCharacter

`_ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri`

`CEventCharacterHandler::_makeEventCharacter(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e2a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e2a4  _ZN22CEventCharacterHandler19_makeEventCharacterEP5CUseri
#           CEventCharacterHandler::_makeEventCharacter(CUser*, int)
# range [0x0848e2a4, 0x0848e635]
0848e2a4 +0x000:  push   %ebp
0848e2a5 +0x001:  mov    %esp,%ebp
0848e2a7 +0x003:  push   %edi
0848e2a8 +0x004:  push   %esi
0848e2a9 +0x005:  push   %ebx
0848e2aa +0x006:  sub    $0x6c,%esp
0848e2ad +0x009:  movl   $0xffffffff,-0x34(%ebp)
0848e2b4 +0x010:  lea    -0x34(%ebp),%eax
0848e2b7 +0x013:  mov    %eax,0xc(%esp)
0848e2bb +0x017:  mov    0x10(%ebp),%eax
0848e2be +0x01a:  mov    %eax,0x8(%esp)
0848e2c2 +0x01e:  mov    0xc(%ebp),%eax
0848e2c5 +0x021:  mov    %eax,0x4(%esp)
0848e2c9 +0x025:  mov    0x8(%ebp),%eax
0848e2cc +0x028:  mov    %eax,(%esp)
0848e2cf +0x02b:  call   0848ebd6 <_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi>  ; CEventCharacterHandler::_checkMakeCommand(CUser*, int, int&)
0848e2d4 +0x030:  xor    $0x1,%eax
0848e2d7 +0x033:  test   %al,%al
0848e2d9 +0x035:  je     0848e2e5 <+0x41>
0848e2db +0x037:  mov    $0x0,%ebx
0848e2e0 +0x03c:  jmp    0848e629 <+0x385>
0848e2e5 +0x041:  mov    -0x34(%ebp),%edi
0848e2e8 +0x044:  mov    0xc(%ebp),%eax
0848e2eb +0x047:  mov    %eax,(%esp)
0848e2ee +0x04a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0848e2f3 +0x04f:  mov    %eax,%esi
0848e2f5 +0x051:  mov    0xc(%ebp),%eax
0848e2f8 +0x054:  mov    %eax,(%esp)
0848e2fb +0x057:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0848e300 +0x05c:  movl   $0x0,0x4(%esp)
0848e308 +0x064:  mov    %eax,(%esp)
0848e30b +0x067:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0848e310 +0x06c:  mov    %eax,%ebx
0848e312 +0x06e:  movl   $0x0,0xc(%esp)
0848e31a +0x076:  movl   $0x2b,0x8(%esp)
0848e322 +0x07e:  movl   $&_ZZN22CEventCharacterHandler19_makeEventCharacterEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0848e32a +0x086:  lea    -0x30(%ebp),%eax
0848e32d +0x089:  mov    %eax,(%esp)
0848e330 +0x08c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0848e335 +0x091:  mov    0x10(%ebp),%eax
0848e338 +0x094:  mov    %eax,0x14(%esp)
0848e33c +0x098:  mov    %edi,0x10(%esp)
0848e340 +0x09c:  mov    %esi,0xc(%esp)
0848e344 +0x0a0:  mov    %ebx,0x8(%esp)
0848e348 +0x0a4:  movl   $"%s:'%s' Make Event Character(%d) level(%d).",0x4(%esp)
0848e350 +0x0ac:  lea    -0x30(%ebp),%eax
0848e353 +0x0af:  mov    %eax,(%esp)
0848e356 +0x0b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0848e35b +0x0b7:  lea    -0x50(%ebp),%eax
0848e35e +0x0ba:  mov    %eax,(%esp)
0848e361 +0x0bd:  call   0848ecce <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x1c>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x1c
0848e366 +0x0c2:  mov    -0x34(%ebp),%ebx
0848e369 +0x0c5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0848e36e +0x0ca:  lea    0xa86c(%eax),%edx
0848e374 +0x0d0:  lea    -0x50(%ebp),%eax
0848e377 +0x0d3:  mov    %eax,0xc(%esp)
0848e37b +0x0d7:  mov    0x10(%ebp),%eax
0848e37e +0x0da:  mov    %eax,0x8(%esp)
0848e382 +0x0de:  mov    %ebx,0x4(%esp)
0848e386 +0x0e2:  mov    %edx,(%esp)
0848e389 +0x0e5:  call   0895b722 <_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo>  ; EventCharacterParameterScript::GetEventCharacterInfo(int, int, STEventCharacterInfo&) const
0848e38e +0x0ea:  xor    $0x1,%eax
0848e391 +0x0ed:  test   %al,%al
0848e393 +0x0ef:  je     0848e39f <+0xfb>
0848e395 +0x0f1:  mov    $0x0,%ebx
0848e39a +0x0f6:  jmp    0848e61e <+0x37a>
0848e39f +0x0fb:  cmpl   $0xe,0x10(%ebp)
0848e3a3 +0x0ff:  jle    0848e444 <+0x1a0>
0848e3a9 +0x105:  movl   $0xf,0x8(%esp)
0848e3b1 +0x10d:  mov    0xc(%ebp),%eax
0848e3b4 +0x110:  mov    %eax,0x4(%esp)
0848e3b8 +0x114:  mov    0x8(%ebp),%eax
0848e3bb +0x117:  mov    %eax,(%esp)
0848e3be +0x11a:  call   0848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>  ; CEventCharacterHandler::_SetLevel(CUser*, int)
0848e3c3 +0x11f:  movzbl -0x50(%ebp),%eax
0848e3c7 +0x123:  test   %al,%al
0848e3c9 +0x125:  je     0848e3f0 <+0x14c>
0848e3cb +0x127:  movzbl -0x50(%ebp),%eax
0848e3cf +0x12b:  movzbl %al,%eax
0848e3d2 +0x12e:  mov    %eax,0xc(%esp)
0848e3d6 +0x132:  movl   $0x1,0x8(%esp)
0848e3de +0x13a:  mov    0xc(%ebp),%eax
0848e3e1 +0x13d:  mov    %eax,0x4(%esp)
0848e3e5 +0x141:  mov    0x8(%ebp),%eax
0848e3e8 +0x144:  mov    %eax,(%esp)
0848e3eb +0x147:  call   0848ea50 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii>  ; CEventCharacterHandler::_SetGrowType(CUser*, int, int)
0848e3f0 +0x14c:  cmpl   $0xf,0x10(%ebp)
0848e3f4 +0x150:  jle    0848e45d <+0x1b9>
0848e3f6 +0x152:  mov    0x10(%ebp),%eax
0848e3f9 +0x155:  mov    %eax,0x8(%esp)
0848e3fd +0x159:  mov    0xc(%ebp),%eax
0848e400 +0x15c:  mov    %eax,0x4(%esp)
0848e404 +0x160:  mov    0x8(%ebp),%eax
0848e407 +0x163:  mov    %eax,(%esp)
0848e40a +0x166:  call   0848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>  ; CEventCharacterHandler::_SetLevel(CUser*, int)
0848e40f +0x16b:  cmpl   $0x31,0x10(%ebp)
0848e413 +0x16f:  jle    0848e45d <+0x1b9>
0848e415 +0x171:  movzbl -0x4f(%ebp),%eax
0848e419 +0x175:  test   %al,%al
0848e41b +0x177:  je     0848e45d <+0x1b9>
0848e41d +0x179:  movzbl -0x4f(%ebp),%eax
0848e421 +0x17d:  movzbl %al,%eax
0848e424 +0x180:  mov    %eax,0xc(%esp)
0848e428 +0x184:  movl   $0x2,0x8(%esp)
0848e430 +0x18c:  mov    0xc(%ebp),%eax
0848e433 +0x18f:  mov    %eax,0x4(%esp)
0848e437 +0x193:  mov    0x8(%ebp),%eax
0848e43a +0x196:  mov    %eax,(%esp)
0848e43d +0x199:  call   0848ea50 <_ZN22CEventCharacterHandler12_SetGrowTypeEP5CUserii>  ; CEventCharacterHandler::_SetGrowType(CUser*, int, int)
0848e442 +0x19e:  jmp    0848e45d <+0x1b9>
0848e444 +0x1a0:  mov    0x10(%ebp),%eax
0848e447 +0x1a3:  mov    %eax,0x8(%esp)
0848e44b +0x1a7:  mov    0xc(%ebp),%eax
0848e44e +0x1aa:  mov    %eax,0x4(%esp)
0848e452 +0x1ae:  mov    0x8(%ebp),%eax
0848e455 +0x1b1:  mov    %eax,(%esp)
0848e458 +0x1b4:  call   0848eade <_ZN22CEventCharacterHandler9_SetLevelEP5CUseri>  ; CEventCharacterHandler::_SetLevel(CUser*, int)
0848e45d +0x1b9:  movl   $0x1,0x8(%esp)
0848e465 +0x1c1:  movl   $0x2,0x4(%esp)
0848e46d +0x1c9:  mov    0xc(%ebp),%eax
0848e470 +0x1cc:  mov    %eax,(%esp)
0848e473 +0x1cf:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
0848e478 +0x1d4:  movl   $0x1,0x8(%esp)
0848e480 +0x1dc:  movl   $0x1a,0x4(%esp)
0848e488 +0x1e4:  mov    0xc(%ebp),%eax
0848e48b +0x1e7:  mov    %eax,(%esp)
0848e48e +0x1ea:  call   086780fa <_ZN5CUser15AddDungeonClearEii>  ; CUser::AddDungeonClear(int, int)
0848e493 +0x1ef:  mov    0xc(%ebp),%eax
0848e496 +0x1f2:  mov    %eax,0x4(%esp)
0848e49a +0x1f6:  mov    0x8(%ebp),%eax
0848e49d +0x1f9:  mov    %eax,(%esp)
0848e4a0 +0x1fc:  call   0848e652 <_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser>  ; CEventCharacterHandler::_SetClearedQuest(CUser*)
0848e4a5 +0x201:  lea    -0x54(%ebp),%eax
0848e4a8 +0x204:  lea    -0x50(%ebp),%edx
0848e4ab +0x207:  add    $0x4,%edx
0848e4ae +0x20a:  mov    %edx,0x4(%esp)
0848e4b2 +0x20e:  mov    %eax,(%esp)
0848e4b5 +0x211:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0848e4ba +0x216:  sub    $0x4,%esp
0848e4bd +0x219:  jmp    0848e4ff <+0x25b>
0848e4bf +0x21b:  lea    -0x54(%ebp),%eax
0848e4c2 +0x21e:  mov    %eax,(%esp)
0848e4c5 +0x221:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0848e4ca +0x226:  mov    0x4(%eax),%ebx
0848e4cd +0x229:  lea    -0x54(%ebp),%eax
0848e4d0 +0x22c:  mov    %eax,(%esp)
0848e4d3 +0x22f:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
0848e4d8 +0x234:  mov    (%eax),%eax
0848e4da +0x236:  mov    %ebx,0xc(%esp)
0848e4de +0x23a:  mov    %eax,0x8(%esp)
0848e4e2 +0x23e:  mov    0xc(%ebp),%eax
0848e4e5 +0x241:  mov    %eax,0x4(%esp)
0848e4e9 +0x245:  mov    0x8(%ebp),%eax
0848e4ec +0x248:  mov    %eax,(%esp)
0848e4ef +0x24b:  call   0848e7d6 <_ZN22CEventCharacterHandler15_MasterNewSkillEP5CUserii>  ; CEventCharacterHandler::_MasterNewSkill(CUser*, int, int)
0848e4f4 +0x250:  lea    -0x54(%ebp),%eax
0848e4f7 +0x253:  mov    %eax,(%esp)
0848e4fa +0x256:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
0848e4ff +0x25b:  lea    -0x20(%ebp),%eax
0848e502 +0x25e:  lea    -0x50(%ebp),%edx
0848e505 +0x261:  add    $0x4,%edx
0848e508 +0x264:  mov    %edx,0x4(%esp)
0848e50c +0x268:  mov    %eax,(%esp)
0848e50f +0x26b:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0848e514 +0x270:  sub    $0x4,%esp
0848e517 +0x273:  lea    -0x20(%ebp),%eax
0848e51a +0x276:  mov    %eax,0x4(%esp)
0848e51e +0x27a:  lea    -0x54(%ebp),%eax
0848e521 +0x27d:  mov    %eax,(%esp)
0848e524 +0x280:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
0848e529 +0x285:  test   %al,%al
0848e52b +0x287:  jne    0848e4bf <+0x21b>
0848e52d +0x289:  lea    -0x58(%ebp),%eax
0848e530 +0x28c:  lea    -0x50(%ebp),%edx
0848e533 +0x28f:  add    $0x10,%edx
0848e536 +0x292:  mov    %edx,0x4(%esp)
0848e53a +0x296:  mov    %eax,(%esp)
0848e53d +0x299:  call   0848edb4 <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x102>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x102
0848e542 +0x29e:  sub    $0x4,%esp
0848e545 +0x2a1:  jmp    0848e599 <+0x2f5>
0848e547 +0x2a3:  lea    -0x58(%ebp),%eax
0848e54a +0x2a6:  mov    %eax,(%esp)
0848e54d +0x2a9:  call   0848ee40 <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x18e>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x18e
0848e552 +0x2ae:  mov    0x8(%eax),%esi
0848e555 +0x2b1:  lea    -0x58(%ebp),%eax
0848e558 +0x2b4:  mov    %eax,(%esp)
0848e55b +0x2b7:  call   0848ee40 <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x18e>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x18e
0848e560 +0x2bc:  mov    0x4(%eax),%ebx
0848e563 +0x2bf:  lea    -0x58(%ebp),%eax
0848e566 +0x2c2:  mov    %eax,(%esp)
0848e569 +0x2c5:  call   0848ee40 <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x18e>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x18e
0848e56e +0x2ca:  mov    (%eax),%eax
0848e570 +0x2cc:  mov    %esi,0x10(%esp)
0848e574 +0x2d0:  mov    %ebx,0xc(%esp)
0848e578 +0x2d4:  mov    %eax,0x8(%esp)
0848e57c +0x2d8:  mov    0xc(%ebp),%eax
0848e57f +0x2db:  mov    %eax,0x4(%esp)
0848e583 +0x2df:  mov    0x8(%ebp),%eax
0848e586 +0x2e2:  mov    %eax,(%esp)
0848e589 +0x2e5:  call   0848e8e2 <_ZN22CEventCharacterHandler8_AddItemEP5CUsermii>  ; CEventCharacterHandler::_AddItem(CUser*, unsigned long, int, int)
0848e58e +0x2ea:  lea    -0x58(%ebp),%eax
0848e591 +0x2ed:  mov    %eax,(%esp)
0848e594 +0x2f0:  call   0848ee2a <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x178>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x178
0848e599 +0x2f5:  lea    -0x1c(%ebp),%eax
0848e59c +0x2f8:  lea    -0x50(%ebp),%edx
0848e59f +0x2fb:  add    $0x10,%edx
0848e5a2 +0x2fe:  mov    %edx,0x4(%esp)
0848e5a6 +0x302:  mov    %eax,(%esp)
0848e5a9 +0x305:  call   0848edd8 <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x126>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x126
0848e5ae +0x30a:  sub    $0x4,%esp
0848e5b1 +0x30d:  lea    -0x1c(%ebp),%eax
0848e5b4 +0x310:  mov    %eax,0x4(%esp)
0848e5b8 +0x314:  lea    -0x58(%ebp),%eax
0848e5bb +0x317:  mov    %eax,(%esp)
0848e5be +0x31a:  call   0848edfe <_GLOBAL__I__Z30CEventCharacterHandlerInstancev+0x14c>  ; global constructors keyed to CEventCharacterHandlerInstance()+0x14c
0848e5c3 +0x31f:  test   %al,%al
0848e5c5 +0x321:  jne    0848e547 <+0x2a3>
0848e5c7 +0x323:  mov    0xc(%ebp),%eax
0848e5ca +0x326:  mov    %eax,0x4(%esp)
0848e5ce +0x32a:  mov    0x8(%ebp),%eax
0848e5d1 +0x32d:  mov    %eax,(%esp)
0848e5d4 +0x330:  call   0848e636 <_ZN22CEventCharacterHandler22_UpdateEventCharacInfoEP5CUser>  ; CEventCharacterHandler::_UpdateEventCharacInfo(CUser*)
0848e5d9 +0x335:  movl   $0x0,0xc(%esp)
0848e5e1 +0x33d:  movl   $0x25,0x8(%esp)
0848e5e9 +0x345:  movl   $0x1,0x4(%esp)
0848e5f1 +0x34d:  mov    0xc(%ebp),%eax
0848e5f4 +0x350:  mov    %eax,(%esp)
0848e5f7 +0x353:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0848e5fc +0x358:  mov    $0x1,%ebx
0848e601 +0x35d:  jmp    0848e61e <+0x37a>
0848e603 +0x35f:  mov    %edx,%ebx
0848e605 +0x361:  mov    %eax,%esi
0848e607 +0x363:  lea    -0x50(%ebp),%eax
0848e60a +0x366:  mov    %eax,(%esp)
0848e60d +0x369:  call   083ce3ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x683ba>  ; global constructors keyed to CServerEvent::m_nExpRate+0x683ba
0848e612 +0x36e:  mov    %esi,%eax
0848e614 +0x370:  mov    %ebx,%edx
0848e616 +0x372:  mov    %eax,(%esp)
0848e619 +0x375:  call   08ae3750 <_Unwind_Resume>
0848e61e +0x37a:  lea    -0x50(%ebp),%eax
0848e621 +0x37d:  mov    %eax,(%esp)
0848e624 +0x380:  call   083ce3ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x683ba>  ; global constructors keyed to CServerEvent::m_nExpRate+0x683ba
0848e629 +0x385:  mov    %ebx,%eax
0848e62b +0x387:  lea    -0xc(%ebp),%esp
0848e62e +0x38a:  add    $0x0,%esp
0848e631 +0x38d:  pop    %ebx
0848e632 +0x38e:  pop    %esi
0848e633 +0x38f:  pop    %edi
0848e634 +0x390:  pop    %ebp
0848e635 +0x391:  ret
```

## 反编译 C

```c
// CEventCharacterHandler::_makeEventCharacter @ 0x848e2a4

/* CEventCharacterHandler::_makeEventCharacter(CUser*, int) */

undefined4 __thiscall
CEventCharacterHandler::_makeEventCharacter(CEventCharacterHandler *this,CUser *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulong *puVar8;
  undefined4 uVar9;
  __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
  local_5c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_58 [4];
  STEventCharacterInfo local_54;
  byte local_53;
  int local_38;
  cMyTrace local_34 [16];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [16];
  
  local_38 = -1;
  cVar1 = _checkMakeCommand(this,param_1,param_2,&local_38);
  iVar7 = local_38;
  if (cVar1 == '\x01') {
    uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_34,"bool CEventCharacterHandler::_makeEventCharacter(CUser*, int)",0x2b
                       ,0);
    cMyTrace::operator()
              (local_34,"%s:\'%s\' Make Event Character(%d) level(%d).",uVar4,uVar9,iVar7,param_2);
    STEventCharacterInfo::STEventCharacterInfo(&local_54);
    iVar7 = local_38;
                    /* try { // try from 0848e369 to 0848e5fb has its CatchHandler @ 0848e603 */
    iVar5 = G_CDataManager();
    cVar1 = EventCharacterParameterScript::GetEventCharacterInfo
                      ((EventCharacterParameterScript *)(iVar5 + 0xa86c),iVar7,param_2,&local_54);
    if (cVar1 == '\x01') {
      if (param_2 < 0xf) {
        _SetLevel(this,param_1,param_2);
      }
      else {
        _SetLevel(this,param_1,0xf);
        if (local_54 != (STEventCharacterInfo)0x0) {
          _SetGrowType(this,param_1,1,(uint)(byte)local_54);
        }
        if (0xf < param_2) {
          _SetLevel(this,param_1,param_2);
          if ((0x31 < param_2) && (local_53 != 0)) {
            _SetGrowType(this,param_1,2,(uint)local_53);
          }
        }
      }
      CUser::AddDungeonClear(param_1,2,1);
      CUser::AddDungeonClear(param_1,0x1a,1);
      _SetClearedQuest(this,param_1);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar2 = __gnu_cxx::operator!=(local_58,local_24);
        if (!bVar2) break;
        iVar7 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_58);
        iVar7 = *(int *)(iVar7 + 4);
        piVar6 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_58);
        _MasterNewSkill(this,param_1,*piVar6,iVar7);
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_58);
      }
      std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::begin();
      while( true ) {
        std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>::end();
        bVar2 = __gnu_cxx::operator!=(local_5c,local_20);
        if (!bVar2) break;
        iVar7 = __gnu_cxx::
                __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                ::operator*(local_5c);
        iVar7 = *(int *)(iVar7 + 8);
        iVar5 = __gnu_cxx::
                __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                ::operator*(local_5c);
        iVar5 = *(int *)(iVar5 + 4);
        puVar8 = (ulong *)__gnu_cxx::
                          __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
                          ::operator*(local_5c);
        _AddItem(this,param_1,*puVar8,iVar5,iVar7);
        __gnu_cxx::
        __normal_iterator<STEventCharacterItem*,std::vector<STEventCharacterItem,std::allocator<STEventCharacterItem>>>
        ::operator++(local_5c);
      }
      _UpdateEventCharacInfo(this,param_1);
      CUser::SendNotiPacket(param_1,1,0x25,0);
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    STEventCharacterInfo::~STEventCharacterInfo(&local_54);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}
```
