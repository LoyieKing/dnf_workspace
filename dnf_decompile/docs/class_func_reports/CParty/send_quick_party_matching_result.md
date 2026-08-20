# send_quick_party_matching_result

`_ZN6CParty32send_quick_party_matching_resultEbP5CUser`

`CParty::send_quick_party_matching_result(bool, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b73e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b73e  _ZN6CParty32send_quick_party_matching_resultEbP5CUser
#           CParty::send_quick_party_matching_result(bool, CUser*)
# range [0x0859b73e, 0x0859b813]
0859b73e +0x00:  push   %ebp
0859b73f +0x01:  mov    %esp,%ebp
0859b741 +0x03:  push   %esi
0859b742 +0x04:  push   %ebx
0859b743 +0x05:  sub    $0x30,%esp
0859b746 +0x08:  mov    0xc(%ebp),%eax
0859b749 +0x0b:  mov    %al,-0x1c(%ebp)
0859b74c +0x0e:  lea    -0x14(%ebp),%eax
0859b74f +0x11:  mov    %eax,(%esp)
0859b752 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859b757 +0x19:  movl   $0x17e,0x8(%esp)
0859b75f +0x21:  movl   $0x0,0x4(%esp)
0859b767 +0x29:  lea    -0x14(%ebp),%eax
0859b76a +0x2c:  mov    %eax,(%esp)
0859b76d +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859b772 +0x34:  movzbl -0x1c(%ebp),%eax
0859b776 +0x38:  mov    %eax,0x4(%esp)
0859b77a +0x3c:  lea    -0x14(%ebp),%eax
0859b77d +0x3f:  mov    %eax,(%esp)
0859b780 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859b785 +0x47:  movl   $0x1,0x4(%esp)
0859b78d +0x4f:  lea    -0x14(%ebp),%eax
0859b790 +0x52:  mov    %eax,(%esp)
0859b793 +0x55:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859b798 +0x5a:  mov    0x8(%ebp),%eax
0859b79b +0x5d:  mov    %eax,(%esp)
0859b79e +0x60:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859b7a3 +0x65:  cmp    $0x2,%eax
0859b7a6 +0x68:  jle    0859b7b5 <+0x77>
0859b7a8 +0x6a:  cmpl   $0x0,0x10(%ebp)
0859b7ac +0x6e:  je     0859b7b5 <+0x77>
0859b7ae +0x70:  mov    $0x1,%eax
0859b7b3 +0x75:  jmp    0859b7ba <+0x7c>
0859b7b5 +0x77:  mov    $0x0,%eax
0859b7ba +0x7c:  test   %al,%al
0859b7bc +0x7e:  je     0859b7d2 <+0x94>
0859b7be +0x80:  lea    -0x14(%ebp),%eax
0859b7c1 +0x83:  mov    %eax,0x4(%esp)
0859b7c5 +0x87:  mov    0x10(%ebp),%eax
0859b7c8 +0x8a:  mov    %eax,(%esp)
0859b7cb +0x8d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859b7d0 +0x92:  jmp    0859b801 <+0xc3>
0859b7d2 +0x94:  lea    -0x14(%ebp),%eax
0859b7d5 +0x97:  mov    %eax,0x4(%esp)
0859b7d9 +0x9b:  mov    0x8(%ebp),%eax
0859b7dc +0x9e:  mov    %eax,(%esp)
0859b7df +0xa1:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859b7e4 +0xa6:  jmp    0859b801 <+0xc3>
0859b7e6 +0xa8:  mov    %edx,%ebx
0859b7e8 +0xaa:  mov    %eax,%esi
0859b7ea +0xac:  lea    -0x14(%ebp),%eax
0859b7ed +0xaf:  mov    %eax,(%esp)
0859b7f0 +0xb2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859b7f5 +0xb7:  mov    %esi,%eax
0859b7f7 +0xb9:  mov    %ebx,%edx
0859b7f9 +0xbb:  mov    %eax,(%esp)
0859b7fc +0xbe:  call   08ae3750 <_Unwind_Resume>
0859b801 +0xc3:  lea    -0x14(%ebp),%eax
0859b804 +0xc6:  mov    %eax,(%esp)
0859b807 +0xc9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859b80c +0xce:  add    $0x30,%esp
0859b80f +0xd1:  pop    %ebx
0859b810 +0xd2:  pop    %esi
0859b811 +0xd3:  pop    %ebp
0859b812 +0xd4:  ret
0859b813 +0xd5:  nop
```

## 反编译 C

```c
// CParty::send_quick_party_matching_result @ 0x859b73e

/* CParty::send_quick_party_matching_result(bool, CUser*) */

void __thiscall CParty::send_quick_party_matching_result(CParty *this,bool param_1,CUser *param_2)

{
  bool bVar1;
  int iVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0859b76d to 0859b7e3 has its CatchHandler @ 0859b7e6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x17e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  iVar2 = get_member_count(this);
  if ((iVar2 < 3) || (param_2 == (CUser *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CUser::Send(param_2,local_18);
  }
  else {
    send_to_party(this,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
