# send_host_info

`_ZN6CParty14send_host_infoEv`

`CParty::send_host_info()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cdd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cdd2  _ZN6CParty14send_host_infoEv
#           CParty::send_host_info()
# range [0x0859cdd2, 0x0859cea1]
0859cdd2 +0x00:  push   %ebp
0859cdd3 +0x01:  mov    %esp,%ebp
0859cdd5 +0x03:  push   %esi
0859cdd6 +0x04:  push   %ebx
0859cdd7 +0x05:  sub    $0x20,%esp
0859cdda +0x08:  lea    -0x18(%ebp),%eax
0859cddd +0x0b:  mov    %eax,(%esp)
0859cde0 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859cde5 +0x13:  movl   $0x1a,0x8(%esp)
0859cded +0x1b:  movl   $0x0,0x4(%esp)
0859cdf5 +0x23:  lea    -0x18(%ebp),%eax
0859cdf8 +0x26:  mov    %eax,(%esp)
0859cdfb +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859ce00 +0x2e:  movl   $0x0,-0xc(%ebp)
0859ce07 +0x35:  jmp    0859ce67 <+0x95>
0859ce09 +0x37:  mov    -0xc(%ebp),%edx
0859ce0c +0x3a:  mov    0x8(%ebp),%ecx
0859ce0f +0x3d:  mov    %edx,%eax
0859ce11 +0x3f:  add    %eax,%eax
0859ce13 +0x41:  add    %edx,%eax
0859ce15 +0x43:  shl    $0x3,%eax
0859ce18 +0x46:  lea    (%ecx,%eax,1),%eax
0859ce1b +0x49:  add    $0x78,%eax
0859ce1e +0x4c:  mov    (%eax),%edx
0859ce20 +0x4e:  mov    0x8(%ebp),%eax
0859ce23 +0x51:  mov    0x70(%eax),%eax
0859ce26 +0x54:  cmp    %eax,%edx
0859ce28 +0x56:  jne    0859ce63 <+0x91>
0859ce2a +0x58:  mov    -0xc(%ebp),%eax
0859ce2d +0x5b:  mov    %eax,0x4(%esp)
0859ce31 +0x5f:  lea    -0x18(%ebp),%eax
0859ce34 +0x62:  mov    %eax,(%esp)
0859ce37 +0x65:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ce3c +0x6a:  movl   $0x1,0x4(%esp)
0859ce44 +0x72:  lea    -0x18(%ebp),%eax
0859ce47 +0x75:  mov    %eax,(%esp)
0859ce4a +0x78:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859ce4f +0x7d:  lea    -0x18(%ebp),%eax
0859ce52 +0x80:  mov    %eax,0x4(%esp)
0859ce56 +0x84:  mov    0x8(%ebp),%eax
0859ce59 +0x87:  mov    %eax,(%esp)
0859ce5c +0x8a:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859ce61 +0x8f:  jmp    0859ce8f <+0xbd>
0859ce63 +0x91:  addl   $0x1,-0xc(%ebp)
0859ce67 +0x95:  cmpl   $0x3,-0xc(%ebp)
0859ce6b +0x99:  setle  %al
0859ce6e +0x9c:  test   %al,%al
0859ce70 +0x9e:  jne    0859ce09 <+0x37>
0859ce72 +0xa0:  jmp    0859ce8f <+0xbd>
0859ce74 +0xa2:  mov    %edx,%ebx
0859ce76 +0xa4:  mov    %eax,%esi
0859ce78 +0xa6:  lea    -0x18(%ebp),%eax
0859ce7b +0xa9:  mov    %eax,(%esp)
0859ce7e +0xac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ce83 +0xb1:  mov    %esi,%eax
0859ce85 +0xb3:  mov    %ebx,%edx
0859ce87 +0xb5:  mov    %eax,(%esp)
0859ce8a +0xb8:  call   08ae3750 <_Unwind_Resume>
0859ce8f +0xbd:  lea    -0x18(%ebp),%eax
0859ce92 +0xc0:  mov    %eax,(%esp)
0859ce95 +0xc3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ce9a +0xc8:  add    $0x20,%esp
0859ce9d +0xcb:  pop    %ebx
0859ce9e +0xcc:  pop    %esi
0859ce9f +0xcd:  pop    %ebp
0859cea0 +0xce:  ret
0859cea1 +0xcf:  nop
```

## 反编译 C

```c
// CParty::send_host_info @ 0x859cdd2

/* CParty::send_host_info() */

void __thiscall CParty::send_host_info(CParty *this)

{
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0859cdfb to 0859ce60 has its CatchHandler @ 0859ce74 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1a);
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_0859ce8f:
      PacketGuard::~PacketGuard(local_1c);
      return;
    }
    if (*(int *)(this + local_10 * 0x18 + 0x78) == *(int *)(this + 0x70)) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      send_to_party(this,local_1c);
      goto LAB_0859ce8f;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
