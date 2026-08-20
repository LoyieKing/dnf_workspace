# send_matching_update_quick_party

`_ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb`

`QuickParty::CQuickParty::send_matching_update_quick_party(char, unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269a8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269a8e  _ZN10QuickParty11CQuickParty32send_matching_update_quick_partyEctb
#           QuickParty::CQuickParty::send_matching_update_quick_party(char, unsigned short, bool)
# range [0x08269a8e, 0x08269bb5]
08269a8e +0x000:  push   %ebp
08269a8f +0x001:  mov    %esp,%ebp
08269a91 +0x003:  push   %esi
08269a92 +0x004:  push   %ebx
08269a93 +0x005:  sub    $0x40,%esp
08269a96 +0x008:  mov    0xc(%ebp),%ecx
08269a99 +0x00b:  mov    0x10(%ebp),%edx
08269a9c +0x00e:  mov    0x14(%ebp),%eax
08269a9f +0x011:  mov    %cl,-0x2c(%ebp)
08269aa2 +0x014:  mov    %dx,-0x30(%ebp)
08269aa6 +0x018:  mov    %al,-0x34(%ebp)
08269aa9 +0x01b:  movl   $0x0,-0x10(%ebp)
08269ab0 +0x022:  jmp    08269ba0 <+0x112>
08269ab5 +0x027:  mov    -0x10(%ebp),%eax
08269ab8 +0x02a:  mov    %eax,0x4(%esp)
08269abc +0x02e:  mov    0x8(%ebp),%eax
08269abf +0x031:  mov    %eax,(%esp)
08269ac2 +0x034:  call   082696d0 <_ZN10QuickParty11CQuickParty16get_party_objectEi>  ; QuickParty::CQuickParty::get_party_object(int)
08269ac7 +0x039:  mov    %eax,-0xc(%ebp)
08269aca +0x03c:  cmpl   $0x0,-0xc(%ebp)
08269ace +0x040:  je     08269b9b <+0x10d>
08269ad4 +0x046:  lea    -0x1c(%ebp),%eax
08269ad7 +0x049:  mov    %eax,(%esp)
08269ada +0x04c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08269adf +0x051:  lea    -0x1c(%ebp),%eax
08269ae2 +0x054:  mov    %eax,(%esp)
08269ae5 +0x057:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08269aea +0x05c:  movl   $0x180,0x8(%esp)
08269af2 +0x064:  movl   $0x0,0x4(%esp)
08269afa +0x06c:  lea    -0x1c(%ebp),%eax
08269afd +0x06f:  mov    %eax,(%esp)
08269b00 +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08269b05 +0x077:  movsbl -0x2c(%ebp),%eax
08269b09 +0x07b:  mov    %eax,0x4(%esp)
08269b0d +0x07f:  lea    -0x1c(%ebp),%eax
08269b10 +0x082:  mov    %eax,(%esp)
08269b13 +0x085:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08269b18 +0x08a:  movzwl -0x30(%ebp),%eax
08269b1c +0x08e:  mov    %eax,0x4(%esp)
08269b20 +0x092:  lea    -0x1c(%ebp),%eax
08269b23 +0x095:  mov    %eax,(%esp)
08269b26 +0x098:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08269b2b +0x09d:  cmpb   $0x0,-0x34(%ebp)
08269b2f +0x0a1:  je     08269b38 <+0xaa>
08269b31 +0x0a3:  mov    $0x1,%eax
08269b36 +0x0a8:  jmp    08269b3d <+0xaf>
08269b38 +0x0aa:  mov    $0x0,%eax
08269b3d +0x0af:  mov    %eax,0x4(%esp)
08269b41 +0x0b3:  lea    -0x1c(%ebp),%eax
08269b44 +0x0b6:  mov    %eax,(%esp)
08269b47 +0x0b9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08269b4c +0x0be:  movl   $0x1,0x4(%esp)
08269b54 +0x0c6:  lea    -0x1c(%ebp),%eax
08269b57 +0x0c9:  mov    %eax,(%esp)
08269b5a +0x0cc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08269b5f +0x0d1:  lea    -0x1c(%ebp),%eax
08269b62 +0x0d4:  mov    %eax,0x4(%esp)
08269b66 +0x0d8:  mov    -0xc(%ebp),%eax
08269b69 +0x0db:  mov    %eax,(%esp)
08269b6c +0x0de:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08269b71 +0x0e3:  jmp    08269b8e <+0x100>
08269b73 +0x0e5:  mov    %edx,%ebx
08269b75 +0x0e7:  mov    %eax,%esi
08269b77 +0x0e9:  lea    -0x1c(%ebp),%eax
08269b7a +0x0ec:  mov    %eax,(%esp)
08269b7d +0x0ef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08269b82 +0x0f4:  mov    %esi,%eax
08269b84 +0x0f6:  mov    %ebx,%edx
08269b86 +0x0f8:  mov    %eax,(%esp)
08269b89 +0x0fb:  call   08ae3750 <_Unwind_Resume>
08269b8e +0x100:  lea    -0x1c(%ebp),%eax
08269b91 +0x103:  mov    %eax,(%esp)
08269b94 +0x106:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08269b99 +0x10b:  jmp    08269b9c <+0x10e>
08269b9b +0x10d:  nop
08269b9c +0x10e:  addl   $0x1,-0x10(%ebp)
08269ba0 +0x112:  cmpl   $0x3,-0x10(%ebp)
08269ba4 +0x116:  setle  %al
08269ba7 +0x119:  test   %al,%al
08269ba9 +0x11b:  jne    08269ab5 <+0x27>
08269baf +0x121:  add    $0x40,%esp
08269bb2 +0x124:  pop    %ebx
08269bb3 +0x125:  pop    %esi
08269bb4 +0x126:  pop    %ebp
08269bb5 +0x127:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::send_matching_update_quick_party @ 0x8269a8e

/* QuickParty::CQuickParty::send_matching_update_quick_party(char, unsigned short, bool) */

void __thiscall
QuickParty::CQuickParty::send_matching_update_quick_party
          (CQuickParty *this,char param_1,ushort param_2,bool param_3)

{
  PacketGuard local_20 [12];
  int local_14;
  CParty *local_10;
  
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_10 = (CParty *)get_party_object(this,local_14);
    if (local_10 != (CParty *)0x0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08269ae5 to 08269b70 has its CatchHandler @ 08269b73 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x180);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)param_3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CParty::send_to_party(local_10,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return;
}
```
