# send_party_realtime_info

`_ZN6CParty24send_party_realtime_infoEv`

`CParty::send_party_realtime_info()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cd24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cd24  _ZN6CParty24send_party_realtime_infoEv
#           CParty::send_party_realtime_info()
# range [0x0859cd24, 0x0859cdbb]
0859cd24 +0x00:  push   %ebp
0859cd25 +0x01:  mov    %esp,%ebp
0859cd27 +0x03:  push   %esi
0859cd28 +0x04:  push   %ebx
0859cd29 +0x05:  sub    $0x20,%esp
0859cd2c +0x08:  lea    -0x14(%ebp),%eax
0859cd2f +0x0b:  mov    %eax,(%esp)
0859cd32 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859cd37 +0x13:  movl   $0x99,0x8(%esp)
0859cd3f +0x1b:  movl   $0x0,0x4(%esp)
0859cd47 +0x23:  lea    -0x14(%ebp),%eax
0859cd4a +0x26:  mov    %eax,(%esp)
0859cd4d +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859cd52 +0x2e:  lea    -0x14(%ebp),%eax
0859cd55 +0x31:  mov    %eax,0x4(%esp)
0859cd59 +0x35:  mov    0x8(%ebp),%eax
0859cd5c +0x38:  mov    %eax,(%esp)
0859cd5f +0x3b:  call   0859cbac <_ZN6CParty23get_party_realtime_infoER11PacketGuard>  ; CParty::get_party_realtime_info(PacketGuard&)
0859cd64 +0x40:  test   %al,%al
0859cd66 +0x42:  je     0859cdaa <+0x86>
0859cd68 +0x44:  movl   $0x1,0x4(%esp)
0859cd70 +0x4c:  lea    -0x14(%ebp),%eax
0859cd73 +0x4f:  mov    %eax,(%esp)
0859cd76 +0x52:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859cd7b +0x57:  lea    -0x14(%ebp),%eax
0859cd7e +0x5a:  mov    %eax,0x4(%esp)
0859cd82 +0x5e:  mov    0x8(%ebp),%eax
0859cd85 +0x61:  mov    %eax,(%esp)
0859cd88 +0x64:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0859cd8d +0x69:  jmp    0859cdaa <+0x86>
0859cd8f +0x6b:  mov    %edx,%ebx
0859cd91 +0x6d:  mov    %eax,%esi
0859cd93 +0x6f:  lea    -0x14(%ebp),%eax
0859cd96 +0x72:  mov    %eax,(%esp)
0859cd99 +0x75:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859cd9e +0x7a:  mov    %esi,%eax
0859cda0 +0x7c:  mov    %ebx,%edx
0859cda2 +0x7e:  mov    %eax,(%esp)
0859cda5 +0x81:  call   08ae3750 <_Unwind_Resume>
0859cdaa +0x86:  lea    -0x14(%ebp),%eax
0859cdad +0x89:  mov    %eax,(%esp)
0859cdb0 +0x8c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859cdb5 +0x91:  add    $0x20,%esp
0859cdb8 +0x94:  pop    %ebx
0859cdb9 +0x95:  pop    %esi
0859cdba +0x96:  pop    %ebp
0859cdbb +0x97:  ret
```

## 反编译 C

```c
// CParty::send_party_realtime_info @ 0x859cd24

/* CParty::send_party_realtime_info() */

void __thiscall CParty::send_party_realtime_info(CParty *this)

{
  char cVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0859cd4d to 0859cd8c has its CatchHandler @ 0859cd8f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x99);
  cVar1 = get_party_realtime_info(this,local_18);
  if (cVar1 != '\0') {
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_party(this,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
