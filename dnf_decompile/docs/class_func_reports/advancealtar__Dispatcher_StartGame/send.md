# send

`_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase`

`advancealtar::Dispatcher_StartGame::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_StartGame` | `0x0813f92a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f92a  _ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase
#           advancealtar::Dispatcher_StartGame::send(CUser*, ParamBase&)
# range [0x0813f92a, 0x0813facf]
0813f92a +0x000:  push   %ebp
0813f92b +0x001:  mov    %esp,%ebp
0813f92d +0x003:  push   %esi
0813f92e +0x004:  push   %ebx
0813f92f +0x005:  sub    $0x30,%esp
0813f932 +0x008:  mov    0x10(%ebp),%eax
0813f935 +0x00b:  mov    %eax,-0x14(%ebp)
0813f938 +0x00e:  mov    -0x14(%ebp),%eax
0813f93b +0x011:  mov    0x4(%eax),%eax
0813f93e +0x014:  test   %eax,%eax
0813f940 +0x016:  jne    0813f94d <+0x23>
0813f942 +0x018:  mov    0xc(%ebp),%eax
0813f945 +0x01b:  mov    %eax,(%esp)
0813f948 +0x01e:  call   0812fdd4 <_ZN12advancealtar12StageControl9gotoStageEP5CUser>  ; advancealtar::StageControl::gotoStage(CUser*)
0813f94d +0x023:  lea    -0x20(%ebp),%eax
0813f950 +0x026:  mov    %eax,(%esp)
0813f953 +0x029:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0813f958 +0x02e:  movl   $0x23c,0x8(%esp)
0813f960 +0x036:  movl   $0x1,0x4(%esp)
0813f968 +0x03e:  lea    -0x20(%ebp),%eax
0813f96b +0x041:  mov    %eax,(%esp)
0813f96e +0x044:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0813f973 +0x049:  movl   $0x1,0x4(%esp)
0813f97b +0x051:  lea    -0x20(%ebp),%eax
0813f97e +0x054:  mov    %eax,(%esp)
0813f981 +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0813f986 +0x05c:  mov    -0x14(%ebp),%eax
0813f989 +0x05f:  movl   $0x8,0x8(%esp)
0813f991 +0x067:  mov    %eax,0x4(%esp)
0813f995 +0x06b:  lea    -0x20(%ebp),%eax
0813f998 +0x06e:  mov    %eax,(%esp)
0813f99b +0x071:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0813f9a0 +0x076:  mov    -0x14(%ebp),%eax
0813f9a3 +0x079:  mov    0x4(%eax),%eax
0813f9a6 +0x07c:  test   %eax,%eax
0813f9a8 +0x07e:  je     0813f9d4 <+0xaa>
0813f9aa +0x080:  movl   $0x1,0x4(%esp)
0813f9b2 +0x088:  lea    -0x20(%ebp),%eax
0813f9b5 +0x08b:  mov    %eax,(%esp)
0813f9b8 +0x08e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813f9bd +0x093:  lea    -0x20(%ebp),%eax
0813f9c0 +0x096:  mov    %eax,0x4(%esp)
0813f9c4 +0x09a:  mov    0xc(%ebp),%eax
0813f9c7 +0x09d:  mov    %eax,(%esp)
0813f9ca +0x0a0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0813f9cf +0x0a5:  jmp    0813fabe <+0x194>
0813f9d4 +0x0aa:  mov    0xc(%ebp),%eax
0813f9d7 +0x0ad:  add    $0x8df60,%eax
0813f9dc +0x0b2:  movl   $0x1,0x4(%esp)
0813f9e4 +0x0ba:  mov    %eax,(%esp)
0813f9e7 +0x0bd:  call   08131254 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE>  ; advancealtar::CharacAdvanceAltarManager::setCurrentAdvanceAltarData(advancealtar::RidableId::T)
0813f9ec +0x0c2:  movl   $0xd,0x4(%esp)
0813f9f4 +0x0ca:  mov    0xc(%ebp),%eax
0813f9f7 +0x0cd:  mov    %eax,(%esp)
0813f9fa +0x0d0:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0813f9ff +0x0d5:  movl   $0x1,0x4(%esp)
0813fa07 +0x0dd:  lea    -0x20(%ebp),%eax
0813fa0a +0x0e0:  mov    %eax,(%esp)
0813fa0d +0x0e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0813fa12 +0x0e8:  movl   $0x0,-0x10(%ebp)
0813fa19 +0x0ef:  jmp    0813fa71 <+0x147>
0813fa1b +0x0f1:  mov    0xc(%ebp),%eax
0813fa1e +0x0f4:  lea    0x8df60(%eax),%edx
0813fa24 +0x0fa:  mov    -0x10(%ebp),%eax
0813fa27 +0x0fd:  mov    %eax,0x4(%esp)
0813fa2b +0x101:  mov    %edx,(%esp)
0813fa2e +0x104:  call   081316e8 <_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi>  ; advancealtar::CharacAdvanceAltarManager::getAdvanceAltarDataByIndex(int)
0813fa33 +0x109:  mov    %eax,-0xc(%ebp)
0813fa36 +0x10c:  cmpl   $0x0,-0xc(%ebp)
0813fa3a +0x110:  je     0813fa6c <+0x142>
0813fa3c +0x112:  mov    -0xc(%ebp),%eax
0813fa3f +0x115:  mov    %eax,0x4(%esp)
0813fa43 +0x119:  lea    -0x20(%ebp),%eax
0813fa46 +0x11c:  mov    %eax,(%esp)
0813fa49 +0x11f:  call   08141781 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE>  ; advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&)
0813fa4e +0x124:  mov    -0xc(%ebp),%eax
0813fa51 +0x127:  movzbl 0x20(%eax),%eax
0813fa55 +0x12b:  test   %al,%al
0813fa57 +0x12d:  je     0813fa6d <+0x143>
0813fa59 +0x12f:  mov    -0xc(%ebp),%eax
0813fa5c +0x132:  movb   $0x0,0x20(%eax)
0813fa60 +0x136:  mov    -0xc(%ebp),%eax
0813fa63 +0x139:  movb   $0x1,0xcc(%eax)
0813fa6a +0x140:  jmp    0813fa6d <+0x143>
0813fa6c +0x142:  nop
0813fa6d +0x143:  addl   $0x1,-0x10(%ebp)
0813fa71 +0x147:  cmpl   $0x0,-0x10(%ebp)
0813fa75 +0x14b:  setle  %al
0813fa78 +0x14e:  test   %al,%al
0813fa7a +0x150:  jne    0813fa1b <+0xf1>
0813fa7c +0x152:  movl   $0x1,0x4(%esp)
0813fa84 +0x15a:  lea    -0x20(%ebp),%eax
0813fa87 +0x15d:  mov    %eax,(%esp)
0813fa8a +0x160:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813fa8f +0x165:  lea    -0x20(%ebp),%eax
0813fa92 +0x168:  mov    %eax,0x4(%esp)
0813fa96 +0x16c:  mov    0xc(%ebp),%eax
0813fa99 +0x16f:  mov    %eax,(%esp)
0813fa9c +0x172:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0813faa1 +0x177:  jmp    0813fabe <+0x194>
0813faa3 +0x179:  mov    %edx,%ebx
0813faa5 +0x17b:  mov    %eax,%esi
0813faa7 +0x17d:  lea    -0x20(%ebp),%eax
0813faaa +0x180:  mov    %eax,(%esp)
0813faad +0x183:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813fab2 +0x188:  mov    %esi,%eax
0813fab4 +0x18a:  mov    %ebx,%edx
0813fab6 +0x18c:  mov    %eax,(%esp)
0813fab9 +0x18f:  call   08ae3750 <_Unwind_Resume>
0813fabe +0x194:  lea    -0x20(%ebp),%eax
0813fac1 +0x197:  mov    %eax,(%esp)
0813fac4 +0x19a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813fac9 +0x19f:  add    $0x30,%esp
0813facc +0x1a2:  pop    %ebx
0813facd +0x1a3:  pop    %esi
0813face +0x1a4:  pop    %ebp
0813facf +0x1a5:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_StartGame::send @ 0x813f92a

/* advancealtar::Dispatcher_StartGame::send(CUser*, ParamBase&) */

void __thiscall
advancealtar::Dispatcher_StartGame::send
          (Dispatcher_StartGame *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  AdvanceAltarData *local_10;
  
  local_18 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    StageControl::gotoStage(param_1);
  }
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0813f96e to 0813faa0 has its CatchHandler @ 0813faa3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x23c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_18,8);
  if (*(int *)(local_18 + 4) == 0) {
    CharacAdvanceAltarManager::setCurrentAdvanceAltarData
              ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),1);
    CUser::set_state(param_1,0xd);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,1);
    for (local_14 = 0; local_14 < 1; local_14 = local_14 + 1) {
      local_10 = (AdvanceAltarData *)
                 CharacAdvanceAltarManager::getAdvanceAltarDataByIndex
                           ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),local_14);
      if (local_10 != (AdvanceAltarData *)0x0) {
        putRidableInfoToPacket(local_24,local_10);
        if (local_10[0x20] != (AdvanceAltarData)0x0) {
          local_10[0x20] = (AdvanceAltarData)0x0;
          local_10[0xcc] = (AdvanceAltarData)0x1;
        }
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
  }
  else {
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
