# NotifyGhostTime

`_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii`

`pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082eff42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eff42  _ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii
#           pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int)
# range [0x082eff42, 0x082f0021]
082eff42 +0x00:  push   %ebp
082eff43 +0x01:  mov    %esp,%ebp
082eff45 +0x03:  push   %esi
082eff46 +0x04:  push   %ebx
082eff47 +0x05:  sub    $0x20,%esp
082eff4a +0x08:  cmpl   $0x0,0x8(%ebp)
082eff4e +0x0c:  je     082f0019 <+0xd7>
082eff54 +0x12:  lea    -0x14(%ebp),%eax
082eff57 +0x15:  mov    %eax,(%esp)
082eff5a +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082eff5f +0x1d:  lea    -0x14(%ebp),%eax
082eff62 +0x20:  mov    %eax,(%esp)
082eff65 +0x23:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
082eff6a +0x28:  movl   $0x185,0x8(%esp)
082eff72 +0x30:  movl   $0x0,0x4(%esp)
082eff7a +0x38:  lea    -0x14(%ebp),%eax
082eff7d +0x3b:  mov    %eax,(%esp)
082eff80 +0x3e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082eff85 +0x43:  mov    0xc(%ebp),%eax
082eff88 +0x46:  mov    %eax,0x4(%esp)
082eff8c +0x4a:  lea    -0x14(%ebp),%eax
082eff8f +0x4d:  mov    %eax,(%esp)
082eff92 +0x50:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082eff97 +0x55:  mov    0x10(%ebp),%eax
082eff9a +0x58:  mov    %eax,0x4(%esp)
082eff9e +0x5c:  lea    -0x14(%ebp),%eax
082effa1 +0x5f:  mov    %eax,(%esp)
082effa4 +0x62:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082effa9 +0x67:  movl   $0x1,0x4(%esp)
082effb1 +0x6f:  lea    -0x14(%ebp),%eax
082effb4 +0x72:  mov    %eax,(%esp)
082effb7 +0x75:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082effbc +0x7a:  lea    -0x14(%ebp),%eax
082effbf +0x7d:  mov    %eax,0x4(%esp)
082effc3 +0x81:  mov    0x8(%ebp),%eax
082effc6 +0x84:  mov    %eax,(%esp)
082effc9 +0x87:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082effce +0x8c:  mov    0x8(%ebp),%eax
082effd1 +0x8f:  mov    %eax,(%esp)
082effd4 +0x92:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082effd9 +0x97:  mov    %eax,0x8(%esp)
082effdd +0x9b:  mov    0x10(%ebp),%eax
082effe0 +0x9e:  mov    %eax,0x4(%esp)
082effe4 +0xa2:  mov    0x8(%ebp),%eax
082effe7 +0xa5:  mov    %eax,(%esp)
082effea +0xa8:  call   0863b242 <_ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij>  ; Timer_AssaultGhostTimer::RegisterNextTimer(CUser*, int, unsigned int)
082effef +0xad:  jmp    082f000c <+0xca>
082efff1 +0xaf:  mov    %edx,%ebx
082efff3 +0xb1:  mov    %eax,%esi
082efff5 +0xb3:  lea    -0x14(%ebp),%eax
082efff8 +0xb6:  mov    %eax,(%esp)
082efffb +0xb9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f0000 +0xbe:  mov    %esi,%eax
082f0002 +0xc0:  mov    %ebx,%edx
082f0004 +0xc2:  mov    %eax,(%esp)
082f0007 +0xc5:  call   08ae3750 <_Unwind_Resume>
082f000c +0xca:  lea    -0x14(%ebp),%eax
082f000f +0xcd:  mov    %eax,(%esp)
082f0012 +0xd0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f0017 +0xd5:  jmp    082f001a <+0xd8>
082f0019 +0xd7:  nop
082f001a +0xd8:  add    $0x20,%esp
082f001d +0xdb:  pop    %ebx
082f001e +0xdc:  pop    %esi
082f001f +0xdd:  pop    %ebp
082f0020 +0xde:  ret
082f0021 +0xdf:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::NotifyGhostTime @ 0x82eff42

/* pvp_assault::CAssaultMgr::NotifyGhostTime(CUser*, int, int) */

void pvp_assault::CAssaultMgr::NotifyGhostTime(CUser *param_1,int param_2,int param_3)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082eff65 to 082effee has its CatchHandler @ 082efff1 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x185);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    Timer_AssaultGhostTimer::RegisterNextTimer(param_1,param_3,uVar1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
