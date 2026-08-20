# send

`_ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase`

`Dispatcher_Debug_Clear_Quest::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Debug_Clear_Quest` | `0x081dfb40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dfb40  _ZN28Dispatcher_Debug_Clear_Quest4sendEP5CUserR9ParamBase
#           Dispatcher_Debug_Clear_Quest::send(CUser*, ParamBase&)
# range [0x081dfb40, 0x081dfc97]
081dfb40 +0x000:  push   %ebp
081dfb41 +0x001:  mov    %esp,%ebp
081dfb43 +0x003:  push   %esi
081dfb44 +0x004:  push   %ebx
081dfb45 +0x005:  sub    $0x30,%esp
081dfb48 +0x008:  mov    0x10(%ebp),%eax
081dfb4b +0x00b:  mov    %eax,-0x10(%ebp)
081dfb4e +0x00e:  lea    -0x1c(%ebp),%eax
081dfb51 +0x011:  mov    %eax,(%esp)
081dfb54 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dfb59 +0x019:  movl   $0x1c9,0x8(%esp)
081dfb61 +0x021:  movl   $0x1,0x4(%esp)
081dfb69 +0x029:  lea    -0x1c(%ebp),%eax
081dfb6c +0x02c:  mov    %eax,(%esp)
081dfb6f +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dfb74 +0x034:  movl   $0x1,0x4(%esp)
081dfb7c +0x03c:  lea    -0x1c(%ebp),%eax
081dfb7f +0x03f:  mov    %eax,(%esp)
081dfb82 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dfb87 +0x047:  mov    -0x10(%ebp),%eax
081dfb8a +0x04a:  mov    0x14(%eax),%eax
081dfb8d +0x04d:  mov    %eax,0x4(%esp)
081dfb91 +0x051:  lea    -0x1c(%ebp),%eax
081dfb94 +0x054:  mov    %eax,(%esp)
081dfb97 +0x057:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081dfb9c +0x05c:  movl   $0x0,-0xc(%ebp)
081dfba3 +0x063:  jmp    081dfbcf <+0x8f>
081dfba5 +0x065:  mov    -0xc(%ebp),%eax
081dfba8 +0x068:  mov    -0x10(%ebp),%edx
081dfbab +0x06b:  add    $0x18,%edx
081dfbae +0x06e:  mov    %eax,0x4(%esp)
081dfbb2 +0x072:  mov    %edx,(%esp)
081dfbb5 +0x075:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081dfbba +0x07a:  mov    (%eax),%eax
081dfbbc +0x07c:  mov    %eax,0x4(%esp)
081dfbc0 +0x080:  lea    -0x1c(%ebp),%eax
081dfbc3 +0x083:  mov    %eax,(%esp)
081dfbc6 +0x086:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081dfbcb +0x08b:  addl   $0x1,-0xc(%ebp)
081dfbcf +0x08f:  mov    -0x10(%ebp),%eax
081dfbd2 +0x092:  mov    0x14(%eax),%eax
081dfbd5 +0x095:  cmp    -0xc(%ebp),%eax
081dfbd8 +0x098:  setg   %al
081dfbdb +0x09b:  test   %al,%al
081dfbdd +0x09d:  jne    081dfba5 <+0x65>
081dfbdf +0x09f:  movl   $0x1,0x4(%esp)
081dfbe7 +0x0a7:  lea    -0x1c(%ebp),%eax
081dfbea +0x0aa:  mov    %eax,(%esp)
081dfbed +0x0ad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081dfbf2 +0x0b2:  lea    -0x1c(%ebp),%eax
081dfbf5 +0x0b5:  mov    %eax,0x4(%esp)
081dfbf9 +0x0b9:  mov    0xc(%ebp),%eax
081dfbfc +0x0bc:  mov    %eax,(%esp)
081dfbff +0x0bf:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081dfc04 +0x0c4:  mov    0xc(%ebp),%eax
081dfc07 +0x0c7:  mov    %eax,(%esp)
081dfc0a +0x0ca:  call   0868b044 <_ZN5CUser21send_clear_quest_listEv>  ; CUser::send_clear_quest_list()
081dfc0f +0x0cf:  lea    -0x28(%ebp),%eax
081dfc12 +0x0d2:  mov    %eax,(%esp)
081dfc15 +0x0d5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dfc1a +0x0da:  lea    -0x28(%ebp),%ebx
081dfc1d +0x0dd:  mov    0xc(%ebp),%eax
081dfc20 +0x0e0:  mov    %eax,(%esp)
081dfc23 +0x0e3:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
081dfc28 +0x0e8:  mov    %ebx,0x4(%esp)
081dfc2c +0x0ec:  mov    %eax,(%esp)
081dfc2f +0x0ef:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
081dfc34 +0x0f4:  lea    -0x28(%ebp),%eax
081dfc37 +0x0f7:  mov    %eax,0x4(%esp)
081dfc3b +0x0fb:  mov    0xc(%ebp),%eax
081dfc3e +0x0fe:  mov    %eax,(%esp)
081dfc41 +0x101:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081dfc46 +0x106:  jmp    081dfc5d <+0x11d>
081dfc48 +0x108:  mov    %edx,%ebx
081dfc4a +0x10a:  mov    %eax,%esi
081dfc4c +0x10c:  lea    -0x28(%ebp),%eax
081dfc4f +0x10f:  mov    %eax,(%esp)
081dfc52 +0x112:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dfc57 +0x117:  mov    %esi,%eax
081dfc59 +0x119:  mov    %ebx,%edx
081dfc5b +0x11b:  jmp    081dfc6a <+0x12a>
081dfc5d +0x11d:  lea    -0x28(%ebp),%eax
081dfc60 +0x120:  mov    %eax,(%esp)
081dfc63 +0x123:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dfc68 +0x128:  jmp    081dfc85 <+0x145>
081dfc6a +0x12a:  mov    %edx,%ebx
081dfc6c +0x12c:  mov    %eax,%esi
081dfc6e +0x12e:  lea    -0x1c(%ebp),%eax
081dfc71 +0x131:  mov    %eax,(%esp)
081dfc74 +0x134:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dfc79 +0x139:  mov    %esi,%eax
081dfc7b +0x13b:  mov    %ebx,%edx
081dfc7d +0x13d:  mov    %eax,(%esp)
081dfc80 +0x140:  call   08ae3750 <_Unwind_Resume>
081dfc85 +0x145:  lea    -0x1c(%ebp),%eax
081dfc88 +0x148:  mov    %eax,(%esp)
081dfc8b +0x14b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dfc90 +0x150:  add    $0x30,%esp
081dfc93 +0x153:  pop    %ebx
081dfc94 +0x154:  pop    %esi
081dfc95 +0x155:  pop    %ebp
081dfc96 +0x156:  ret
081dfc97 +0x157:  nop
```

## 反编译 C

```c
// Dispatcher_Debug_Clear_Quest::send @ 0x81dfb40

/* Dispatcher_Debug_Clear_Quest::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Debug_Clear_Quest::send
          (Dispatcher_Debug_Clear_Quest *this,CUser *param_1,ParamBase *param_2)

{
  int *piVar1;
  UserQuest *this_00;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081dfb6f to 081dfc19 has its CatchHandler @ 081dfc6a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1c9);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x14));
  for (local_10 = 0; (int)local_10 < *(int *)(local_14 + 0x14); local_10 = local_10 + 1) {
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(local_14 + 0x18),local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  CUser::send_clear_quest_list(param_1);
  PacketGuard::PacketGuard(local_2c);
  this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 081dfc2f to 081dfc45 has its CatchHandler @ 081dfc48 */
  UserQuest::get_quest_info(this_00,(char *)local_2c);
  CUser::Send(param_1,local_2c);
                    /* try { // try from 081dfc63 to 081dfc67 has its CatchHandler @ 081dfc6a */
  PacketGuard::~PacketGuard(local_2c);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
