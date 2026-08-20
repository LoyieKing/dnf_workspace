# dispatch_sig

`_ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci`

`Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedStart` | `0x084df47a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084df47a  _ZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPci
#           Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)
# range [0x084df47a, 0x084df6a3]
084df47a +0x000:  push   %ebp
084df47b +0x001:  mov    %esp,%ebp
084df47d +0x003:  push   %esi
084df47e +0x004:  push   %ebx
084df47f +0x005:  sub    $0x40,%esp
084df482 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df487 +0x00d:  mov    %eax,(%esp)
084df48a +0x010:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
084df48f +0x015:  test   %al,%al
084df491 +0x017:  je     084df49d <+0x23>
084df493 +0x019:  mov    $0x0,%ebx
084df498 +0x01e:  jmp    084df69b <+0x221>
084df49d +0x023:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084df4a2 +0x028:  mov    0x1a8(%eax),%eax
084df4a8 +0x02e:  cmp    $0x1,%eax
084df4ab +0x031:  je     084df4bd <+0x43>
084df4ad +0x033:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084df4b2 +0x038:  mov    0x1a8(%eax),%eax
084df4b8 +0x03e:  cmp    $0x2,%eax
084df4bb +0x041:  jne    084df4c4 <+0x4a>
084df4bd +0x043:  mov    $0x1,%eax
084df4c2 +0x048:  jmp    084df4c9 <+0x4f>
084df4c4 +0x04a:  mov    $0x0,%eax
084df4c9 +0x04f:  test   %al,%al
084df4cb +0x051:  je     084df4d7 <+0x5d>
084df4cd +0x053:  mov    $0x0,%ebx
084df4d2 +0x058:  jmp    084df69b <+0x221>
084df4d7 +0x05d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df4dc +0x062:  add    $0x68,%eax
084df4df +0x065:  movl   $0x2aff,0x4(%esp)
084df4e7 +0x06d:  mov    %eax,(%esp)
084df4ea +0x070:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
084df4ef +0x075:  test   %al,%al
084df4f1 +0x077:  je     084df568 <+0xee>
084df4f3 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084df4f8 +0x07e:  add    $0x68,%eax
084df4fb +0x081:  movl   $0x0,0x8(%esp)
084df503 +0x089:  movl   $0x2aff,0x4(%esp)
084df50b +0x091:  mov    %eax,(%esp)
084df50e +0x094:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
084df513 +0x099:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df518 +0x09e:  movl   $0x0,0x8(%esp)
084df520 +0x0a6:  movl   $0x2aff,0x4(%esp)
084df528 +0x0ae:  mov    %eax,(%esp)
084df52b +0x0b1:  call   086c8e4e <_ZN9GameWorld30send_all_dungeon_inout_messageEib>  ; GameWorld::send_all_dungeon_inout_message(int, bool)
084df530 +0x0b6:  movl   $0x0,0xc(%esp)
084df538 +0x0be:  movl   $0x4b9a,0x8(%esp)
084df540 +0x0c6:  movl   $&_ZZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084df548 +0x0ce:  lea    -0x2c(%ebp),%eax
084df54b +0x0d1:  mov    %eax,(%esp)
084df54e +0x0d4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084df553 +0x0d9:  movl   $"ULTIMATE_LOG : VILLAGE ATTACKTED START!! ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
084df55b +0x0e1:  lea    -0x2c(%ebp),%eax
084df55e +0x0e4:  mov    %eax,(%esp)
084df561 +0x0e7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084df566 +0x0ec:  jmp    084df59e <+0x124>
084df568 +0x0ee:  movl   $0x0,0xc(%esp)
084df570 +0x0f6:  movl   $0x4b9d,0x8(%esp)
084df578 +0x0fe:  movl   $&_ZZN26Inter_VillageAttackedStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084df580 +0x106:  lea    -0x1c(%ebp),%eax
084df583 +0x109:  mov    %eax,(%esp)
084df586 +0x10c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084df58b +0x111:  movl   $"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
084df593 +0x119:  lea    -0x1c(%ebp),%eax
084df596 +0x11c:  mov    %eax,(%esp)
084df599 +0x11f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084df59e +0x124:  mov    0x10(%ebp),%eax
084df5a1 +0x127:  mov    %eax,-0xc(%ebp)
084df5a4 +0x12a:  lea    -0x38(%ebp),%eax
084df5a7 +0x12d:  mov    %eax,(%esp)
084df5aa +0x130:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084df5af +0x135:  lea    -0x38(%ebp),%eax
084df5b2 +0x138:  mov    %eax,(%esp)
084df5b5 +0x13b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084df5ba +0x140:  movl   $0xf1,0x8(%esp)
084df5c2 +0x148:  movl   $0x0,0x4(%esp)
084df5ca +0x150:  lea    -0x38(%ebp),%eax
084df5cd +0x153:  mov    %eax,(%esp)
084df5d0 +0x156:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084df5d5 +0x15b:  movl   $0x0,0x4(%esp)
084df5dd +0x163:  lea    -0x38(%ebp),%eax
084df5e0 +0x166:  mov    %eax,(%esp)
084df5e3 +0x169:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df5e8 +0x16e:  mov    -0xc(%ebp),%eax
084df5eb +0x171:  mov    0xa(%eax),%eax
084df5ee +0x174:  mov    %eax,0x4(%esp)
084df5f2 +0x178:  lea    -0x38(%ebp),%eax
084df5f5 +0x17b:  mov    %eax,(%esp)
084df5f8 +0x17e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df5fd +0x183:  mov    -0xc(%ebp),%eax
084df600 +0x186:  mov    0xe(%eax),%eax
084df603 +0x189:  mov    %eax,0x4(%esp)
084df607 +0x18d:  lea    -0x38(%ebp),%eax
084df60a +0x190:  mov    %eax,(%esp)
084df60d +0x193:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df612 +0x198:  mov    -0xc(%ebp),%eax
084df615 +0x19b:  mov    0x12(%eax),%eax
084df618 +0x19e:  mov    %eax,0x4(%esp)
084df61c +0x1a2:  lea    -0x38(%ebp),%eax
084df61f +0x1a5:  mov    %eax,(%esp)
084df622 +0x1a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df627 +0x1ad:  movl   $0x0,0x4(%esp)
084df62f +0x1b5:  lea    -0x38(%ebp),%eax
084df632 +0x1b8:  mov    %eax,(%esp)
084df635 +0x1bb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084df63a +0x1c0:  movl   $0x1,0x4(%esp)
084df642 +0x1c8:  lea    -0x38(%ebp),%eax
084df645 +0x1cb:  mov    %eax,(%esp)
084df648 +0x1ce:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084df64d +0x1d3:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084df652 +0x1d8:  lea    -0x38(%ebp),%edx
084df655 +0x1db:  mov    %edx,0x4(%esp)
084df659 +0x1df:  mov    %eax,(%esp)
084df65c +0x1e2:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084df661 +0x1e7:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
084df666 +0x1ec:  mov    %eax,(%esp)
084df669 +0x1ef:  call   086b4a20 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv>  ; village_attacked::CVillageMonsterMgr::OnStartVillageAttacked()
084df66e +0x1f4:  mov    $0x0,%ebx
084df673 +0x1f9:  lea    -0x38(%ebp),%eax
084df676 +0x1fc:  mov    %eax,(%esp)
084df679 +0x1ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df67e +0x204:  jmp    084df69b <+0x221>
084df680 +0x206:  mov    %edx,%ebx
084df682 +0x208:  mov    %eax,%esi
084df684 +0x20a:  lea    -0x38(%ebp),%eax
084df687 +0x20d:  mov    %eax,(%esp)
084df68a +0x210:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084df68f +0x215:  mov    %esi,%eax
084df691 +0x217:  mov    %ebx,%edx
084df693 +0x219:  mov    %eax,(%esp)
084df696 +0x21c:  call   08ae3750 <_Unwind_Resume>
084df69b +0x221:  mov    %ebx,%eax
084df69d +0x223:  add    $0x40,%esp
084df6a0 +0x226:  pop    %ebx
084df6a1 +0x227:  pop    %esi
084df6a2 +0x228:  pop    %ebp
084df6a3 +0x229:  ret
```

## 反编译 C

```c
// Inter_VillageAttackedStart::dispatch_sig @ 0x84df47a

/* Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
    iVar4 = G_CEnvironment();
    if ((*(int *)(iVar4 + 0x1a8) == 1) || (iVar4 = G_CEnvironment(), *(int *)(iVar4 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar4 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar4 + 0x68);
      if (cVar2 == '\0') {
        cMyTrace::cMyTrace(local_20,
                           "virtual int Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)"
                           ,0x4b9d,0);
        cMyTrace::operator()(local_20,"ULTIMATE_LOG : ALLEADY ULTIMATE DUNGEON CLOSE!!");
      }
      else {
        iVar4 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar4 + 0x68),0x2aff,false);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(pGVar3,0x2aff,false);
        cMyTrace::cMyTrace(local_30,
                           "virtual int Inter_VillageAttackedStart::dispatch_sig(CUser*, char*, int)"
                           ,0x4b9a,0);
        cMyTrace::operator()
                  (local_30,"ULTIMATE_LOG : VILLAGE ATTACKTED START!! ULTIMATE DUNGEON CLOSE!!");
      }
      local_10 = param_3;
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084df5b5 to 084df66d has its CatchHandler @ 084df680 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xf1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 0xe));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,*(int *)(local_10 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      pGVar3 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar3,local_3c);
      village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(GlobalData::s_villageMonsterMgr);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return 0;
}
```
