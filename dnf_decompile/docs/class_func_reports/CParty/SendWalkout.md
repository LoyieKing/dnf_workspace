# SendWalkout

`_ZN6CParty11SendWalkoutEi17ENUM_WALKOUT_TYPE`

`CParty::SendWalkout(int, ENUM_WALKOUT_TYPE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cb00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cb00  _ZN6CParty11SendWalkoutEi17ENUM_WALKOUT_TYPE
#           CParty::SendWalkout(int, ENUM_WALKOUT_TYPE)
# range [0x0859cb00, 0x0859cbab]
0859cb00 +0x00:  push   %ebp
0859cb01 +0x01:  mov    %esp,%ebp
0859cb03 +0x03:  push   %esi
0859cb04 +0x04:  push   %ebx
0859cb05 +0x05:  sub    $0x20,%esp
0859cb08 +0x08:  lea    -0x14(%ebp),%eax
0859cb0b +0x0b:  mov    %eax,(%esp)
0859cb0e +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859cb13 +0x13:  movl   $0xa,0x8(%esp)
0859cb1b +0x1b:  movl   $0x0,0x4(%esp)
0859cb23 +0x23:  lea    -0x14(%ebp),%eax
0859cb26 +0x26:  mov    %eax,(%esp)
0859cb29 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859cb2e +0x2e:  mov    0xc(%ebp),%eax
0859cb31 +0x31:  mov    %eax,0x4(%esp)
0859cb35 +0x35:  lea    -0x14(%ebp),%eax
0859cb38 +0x38:  mov    %eax,(%esp)
0859cb3b +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cb40 +0x40:  mov    0x10(%ebp),%eax
0859cb43 +0x43:  mov    %eax,0x4(%esp)
0859cb47 +0x47:  lea    -0x14(%ebp),%eax
0859cb4a +0x4a:  mov    %eax,(%esp)
0859cb4d +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859cb52 +0x52:  movl   $0x1,0x4(%esp)
0859cb5a +0x5a:  lea    -0x14(%ebp),%eax
0859cb5d +0x5d:  mov    %eax,(%esp)
0859cb60 +0x60:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859cb65 +0x65:  lea    -0x14(%ebp),%eax
0859cb68 +0x68:  mov    %eax,0x4(%esp)
0859cb6c +0x6c:  mov    0x8(%ebp),%eax
0859cb6f +0x6f:  mov    %eax,(%esp)
0859cb72 +0x72:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859cb77 +0x77:  mov    $0x1,%ebx
0859cb7c +0x7c:  lea    -0x14(%ebp),%eax
0859cb7f +0x7f:  mov    %eax,(%esp)
0859cb82 +0x82:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859cb87 +0x87:  mov    %ebx,%eax
0859cb89 +0x89:  add    $0x20,%esp
0859cb8c +0x8c:  pop    %ebx
0859cb8d +0x8d:  pop    %esi
0859cb8e +0x8e:  pop    %ebp
0859cb8f +0x8f:  ret
0859cb90 +0x90:  mov    %edx,%ebx
0859cb92 +0x92:  mov    %eax,%esi
0859cb94 +0x94:  lea    -0x14(%ebp),%eax
0859cb97 +0x97:  mov    %eax,(%esp)
0859cb9a +0x9a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859cb9f +0x9f:  mov    %esi,%eax
0859cba1 +0xa1:  mov    %ebx,%edx
0859cba3 +0xa3:  mov    %eax,(%esp)
0859cba6 +0xa6:  call   08ae3750 <_Unwind_Resume>
0859cbab +0xab:  nop
```

## 反编译 C

```c
// CParty::SendWalkout @ 0x859cb00

/* CParty::SendWalkout(int, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall CParty::SendWalkout(CParty *this,int param_1,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0859cb29 to 0859cb76 has its CatchHandler @ 0859cb90 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  send_to_party(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}
```
