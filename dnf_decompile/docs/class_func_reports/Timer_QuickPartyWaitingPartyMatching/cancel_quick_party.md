# cancel_quick_party

`_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE`

`Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `Timer_QuickPartyWaitingPartyMatching` | `0x0863ad96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863ad96  _ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE
#           Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*)
# range [0x0863ad96, 0x0863ae81]
0863ad96 +0x00:  push   %ebp
0863ad97 +0x01:  mov    %esp,%ebp
0863ad99 +0x03:  push   %esi
0863ad9a +0x04:  push   %ebx
0863ad9b +0x05:  sub    $0x20,%esp
0863ad9e +0x08:  mov    0xc(%ebp),%eax
0863ada1 +0x0b:  mov    %eax,(%esp)
0863ada4 +0x0e:  call   0826972c <_ZN10QuickParty11CQuickParty16get_party_objectEv>  ; QuickParty::CQuickParty::get_party_object()
0863ada9 +0x13:  mov    %eax,-0xc(%ebp)
0863adac +0x16:  cmpl   $0x0,-0xc(%ebp)
0863adb0 +0x1a:  jne    0863adbc <+0x26>
0863adb2 +0x1c:  mov    $0x0,%ebx
0863adb7 +0x21:  jmp    0863ae78 <+0xe2>
0863adbc +0x26:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863adc1 +0x2b:  mov    %eax,(%esp)
0863adc4 +0x2e:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0863adc9 +0x33:  movl   $0x0,0xc(%esp)
0863add1 +0x3b:  movl   $0x1,0x8(%esp)
0863add9 +0x43:  mov    -0xc(%ebp),%edx
0863addc +0x46:  mov    %edx,0x4(%esp)
0863ade0 +0x4a:  mov    %eax,(%esp)
0863ade3 +0x4d:  call   0826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>  ; QuickParty::CQuickPartySystemManager::cancel_quick_party(CParty*, bool, CUser*)
0863ade8 +0x52:  test   %al,%al
0863adea +0x54:  je     0863ae73 <+0xdd>
0863adf0 +0x5a:  lea    -0x18(%ebp),%eax
0863adf3 +0x5d:  mov    %eax,(%esp)
0863adf6 +0x60:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863adfb +0x65:  lea    -0x18(%ebp),%eax
0863adfe +0x68:  mov    %eax,(%esp)
0863ae01 +0x6b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0863ae06 +0x70:  movl   $0x17f,0x8(%esp)
0863ae0e +0x78:  movl   $0x0,0x4(%esp)
0863ae16 +0x80:  lea    -0x18(%ebp),%eax
0863ae19 +0x83:  mov    %eax,(%esp)
0863ae1c +0x86:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863ae21 +0x8b:  movl   $0x1,0x4(%esp)
0863ae29 +0x93:  lea    -0x18(%ebp),%eax
0863ae2c +0x96:  mov    %eax,(%esp)
0863ae2f +0x99:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863ae34 +0x9e:  lea    -0x18(%ebp),%eax
0863ae37 +0xa1:  mov    %eax,0x4(%esp)
0863ae3b +0xa5:  mov    -0xc(%ebp),%eax
0863ae3e +0xa8:  mov    %eax,(%esp)
0863ae41 +0xab:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0863ae46 +0xb0:  mov    $0x0,%ebx
0863ae4b +0xb5:  lea    -0x18(%ebp),%eax
0863ae4e +0xb8:  mov    %eax,(%esp)
0863ae51 +0xbb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863ae56 +0xc0:  jmp    0863ae78 <+0xe2>
0863ae58 +0xc2:  mov    %edx,%ebx
0863ae5a +0xc4:  mov    %eax,%esi
0863ae5c +0xc6:  lea    -0x18(%ebp),%eax
0863ae5f +0xc9:  mov    %eax,(%esp)
0863ae62 +0xcc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863ae67 +0xd1:  mov    %esi,%eax
0863ae69 +0xd3:  mov    %ebx,%edx
0863ae6b +0xd5:  mov    %eax,(%esp)
0863ae6e +0xd8:  call   08ae3750 <_Unwind_Resume>
0863ae73 +0xdd:  mov    $0x1,%ebx
0863ae78 +0xe2:  mov    %ebx,%eax
0863ae7a +0xe4:  add    $0x20,%esp
0863ae7d +0xe7:  pop    %ebx
0863ae7e +0xe8:  pop    %esi
0863ae7f +0xe9:  pop    %ebp
0863ae80 +0xea:  ret
0863ae81 +0xeb:  nop
```

## 反编译 C

```c
// Timer_QuickPartyWaitingPartyMatching::cancel_quick_party @ 0x863ad96

/* Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*) */

undefined4 __thiscall
Timer_QuickPartyWaitingPartyMatching::cancel_quick_party
          (Timer_QuickPartyWaitingPartyMatching *this,CQuickParty *param_1)

{
  char cVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  local_10 = (CParty *)QuickParty::CQuickParty::get_party_object(param_1);
  if (local_10 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (CGameManager *)G_CGameManager();
    this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
    cVar1 = QuickParty::CQuickPartySystemManager::cancel_quick_party
                      (this_01,local_10,true,(CUser *)0x0);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863ae01 to 0863ae45 has its CatchHandler @ 0863ae58 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x17f);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CParty::send_to_party(local_10,local_1c);
      uVar2 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar2;
}
```
