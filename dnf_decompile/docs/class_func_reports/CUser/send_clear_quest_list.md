# send_clear_quest_list

`_ZN5CUser21send_clear_quest_listEv`

`CUser::send_clear_quest_list()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b044` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b044  _ZN5CUser21send_clear_quest_listEv
#           CUser::send_clear_quest_list()
# range [0x0868b044, 0x0868b105]
0868b044 +0x00:  push   %ebp
0868b045 +0x01:  mov    %esp,%ebp
0868b047 +0x03:  push   %esi
0868b048 +0x04:  push   %ebx
0868b049 +0x05:  sub    $0x20,%esp
0868b04c +0x08:  lea    -0x14(%ebp),%eax
0868b04f +0x0b:  mov    %eax,(%esp)
0868b052 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868b057 +0x13:  movl   $0x163,0x8(%esp)
0868b05f +0x1b:  movl   $0x0,0x4(%esp)
0868b067 +0x23:  lea    -0x14(%ebp),%eax
0868b06a +0x26:  mov    %eax,(%esp)
0868b06d +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868b072 +0x2e:  movl   $0x7530,0x4(%esp)
0868b07a +0x36:  lea    -0x14(%ebp),%eax
0868b07d +0x39:  mov    %eax,(%esp)
0868b080 +0x3c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868b085 +0x41:  mov    0x8(%ebp),%eax
0868b088 +0x44:  mov    %eax,(%esp)
0868b08b +0x47:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0868b090 +0x4c:  add    $0x4,%eax
0868b093 +0x4f:  mov    %eax,(%esp)
0868b096 +0x52:  call   0808bb80 <_ZNK8WongWork11CQuestClear15getClearedQuestEv>  ; WongWork::CQuestClear::getClearedQuest() const
0868b09b +0x57:  movl   $0x7530,0x8(%esp)
0868b0a3 +0x5f:  mov    %eax,0x4(%esp)
0868b0a7 +0x63:  lea    -0x14(%ebp),%eax
0868b0aa +0x66:  mov    %eax,(%esp)
0868b0ad +0x69:  call   0815096a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x29f
0868b0b2 +0x6e:  movl   $0x1,0x4(%esp)
0868b0ba +0x76:  lea    -0x14(%ebp),%eax
0868b0bd +0x79:  mov    %eax,(%esp)
0868b0c0 +0x7c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868b0c5 +0x81:  lea    -0x14(%ebp),%eax
0868b0c8 +0x84:  mov    %eax,0x4(%esp)
0868b0cc +0x88:  mov    0x8(%ebp),%eax
0868b0cf +0x8b:  mov    %eax,(%esp)
0868b0d2 +0x8e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868b0d7 +0x93:  jmp    0868b0f4 <+0xb0>
0868b0d9 +0x95:  mov    %edx,%ebx
0868b0db +0x97:  mov    %eax,%esi
0868b0dd +0x99:  lea    -0x14(%ebp),%eax
0868b0e0 +0x9c:  mov    %eax,(%esp)
0868b0e3 +0x9f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868b0e8 +0xa4:  mov    %esi,%eax
0868b0ea +0xa6:  mov    %ebx,%edx
0868b0ec +0xa8:  mov    %eax,(%esp)
0868b0ef +0xab:  call   08ae3750 <_Unwind_Resume>
0868b0f4 +0xb0:  lea    -0x14(%ebp),%eax
0868b0f7 +0xb3:  mov    %eax,(%esp)
0868b0fa +0xb6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868b0ff +0xbb:  add    $0x20,%esp
0868b102 +0xbe:  pop    %ebx
0868b103 +0xbf:  pop    %esi
0868b104 +0xc0:  pop    %ebp
0868b105 +0xc1:  ret
```

## 反编译 C

```c
// CUser::send_clear_quest_list @ 0x868b044

/* CUser::send_clear_quest_list() */

void __thiscall CUser::send_clear_quest_list(CUser *this)

{
  int iVar1;
  char *pcVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0868b06d to 0868b0d6 has its CatchHandler @ 0868b0d9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x163);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,30000);
  iVar1 = getCurCharacQuestR(this);
  pcVar2 = (char *)WongWork::CQuestClear::getClearedQuest((CQuestClear *)(iVar1 + 4));
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,pcVar2,30000);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
