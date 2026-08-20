# send_hellParty_value

`_ZN6CParty20send_hellParty_valueEv`

`CParty::send_hellParty_value()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b697c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b697c  _ZN6CParty20send_hellParty_valueEv
#           CParty::send_hellParty_value()
# range [0x085b697c, 0x085b6a47]
085b697c +0x00:  push   %ebp
085b697d +0x01:  mov    %esp,%ebp
085b697f +0x03:  push   %esi
085b6980 +0x04:  push   %ebx
085b6981 +0x05:  sub    $0x30,%esp
085b6984 +0x08:  lea    -0x18(%ebp),%eax
085b6987 +0x0b:  mov    %eax,(%esp)
085b698a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b698f +0x13:  movl   $0xcf,0x8(%esp)
085b6997 +0x1b:  movl   $0x0,0x4(%esp)
085b699f +0x23:  lea    -0x18(%ebp),%eax
085b69a2 +0x26:  mov    %eax,(%esp)
085b69a5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b69aa +0x2e:  mov    0x8(%ebp),%eax
085b69ad +0x31:  flds   0xb0c(%eax)
085b69b3 +0x37:  flds   ""
085b69b9 +0x3d:  fmulp  %st,%st(1)
085b69bb +0x3f:  mov    0x8(%ebp),%eax
085b69be +0x42:  mov    0xd0c(%eax),%eax
085b69c4 +0x48:  mov    %eax,-0x1c(%ebp)
085b69c7 +0x4b:  fildl  -0x1c(%ebp)
085b69ca +0x4e:  fdivrp %st,%st(1)
085b69cc +0x50:  fnstcw -0x1e(%ebp)
085b69cf +0x53:  movzwl -0x1e(%ebp),%eax
085b69d3 +0x57:  mov    $0xc,%ah
085b69d5 +0x59:  mov    %ax,-0x20(%ebp)
085b69d9 +0x5d:  fldcw  -0x20(%ebp)
085b69dc +0x60:  fistpl -0xc(%ebp)
085b69df +0x63:  fldcw  -0x1e(%ebp)
085b69e2 +0x66:  mov    -0xc(%ebp),%eax
085b69e5 +0x69:  mov    %eax,0x4(%esp)
085b69e9 +0x6d:  lea    -0x18(%ebp),%eax
085b69ec +0x70:  mov    %eax,(%esp)
085b69ef +0x73:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b69f4 +0x78:  movl   $0x1,0x4(%esp)
085b69fc +0x80:  lea    -0x18(%ebp),%eax
085b69ff +0x83:  mov    %eax,(%esp)
085b6a02 +0x86:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b6a07 +0x8b:  lea    -0x18(%ebp),%eax
085b6a0a +0x8e:  mov    %eax,0x4(%esp)
085b6a0e +0x92:  mov    0x8(%ebp),%eax
085b6a11 +0x95:  mov    %eax,(%esp)
085b6a14 +0x98:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b6a19 +0x9d:  jmp    085b6a36 <+0xba>
085b6a1b +0x9f:  mov    %edx,%ebx
085b6a1d +0xa1:  mov    %eax,%esi
085b6a1f +0xa3:  lea    -0x18(%ebp),%eax
085b6a22 +0xa6:  mov    %eax,(%esp)
085b6a25 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b6a2a +0xae:  mov    %esi,%eax
085b6a2c +0xb0:  mov    %ebx,%edx
085b6a2e +0xb2:  mov    %eax,(%esp)
085b6a31 +0xb5:  call   08ae3750 <_Unwind_Resume>
085b6a36 +0xba:  lea    -0x18(%ebp),%eax
085b6a39 +0xbd:  mov    %eax,(%esp)
085b6a3c +0xc0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b6a41 +0xc5:  add    $0x30,%esp
085b6a44 +0xc8:  pop    %ebx
085b6a45 +0xc9:  pop    %esi
085b6a46 +0xca:  pop    %ebp
085b6a47 +0xcb:  ret
```

## 反编译 C

```c
// CParty::send_hellParty_value @ 0x85b697c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CParty::send_hellParty_value() */

void __thiscall CParty::send_hellParty_value(CParty *this)

{
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085b69a5 to 085b6a18 has its CatchHandler @ 085b6a1b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xcf);
  local_10 = (int)ROUND((_DAT_08cbbbcc * *(float *)(this + 0xb0c)) / (float)*(int *)(this + 0xd0c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_10);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  send_to_party(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
