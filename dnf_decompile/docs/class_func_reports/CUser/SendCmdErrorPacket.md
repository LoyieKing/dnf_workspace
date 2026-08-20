# SendCmdErrorPacket

`_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh`

`CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867bf42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867bf42  _ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh
#           CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
# range [0x0867bf42, 0x0867bfad]
0867bf42 +0x00:  push   %ebp
0867bf43 +0x01:  mov    %esp,%ebp
0867bf45 +0x03:  push   %esi
0867bf46 +0x04:  push   %ebx
0867bf47 +0x05:  sub    $0x30,%esp
0867bf4a +0x08:  mov    0x10(%ebp),%eax
0867bf4d +0x0b:  mov    %al,-0x1c(%ebp)
0867bf50 +0x0e:  lea    -0x14(%ebp),%eax
0867bf53 +0x11:  mov    %eax,(%esp)
0867bf56 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867bf5b +0x19:  movzbl -0x1c(%ebp),%eax
0867bf5f +0x1d:  lea    -0x14(%ebp),%edx
0867bf62 +0x20:  mov    %edx,0xc(%esp)
0867bf66 +0x24:  mov    %eax,0x8(%esp)
0867bf6a +0x28:  mov    0xc(%ebp),%eax
0867bf6d +0x2b:  mov    %eax,0x4(%esp)
0867bf71 +0x2f:  mov    0x8(%ebp),%eax
0867bf74 +0x32:  mov    %eax,(%esp)
0867bf77 +0x35:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0867bf7c +0x3a:  mov    %eax,%ebx
0867bf7e +0x3c:  lea    -0x14(%ebp),%eax
0867bf81 +0x3f:  mov    %eax,(%esp)
0867bf84 +0x42:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bf89 +0x47:  mov    %ebx,%eax
0867bf8b +0x49:  add    $0x30,%esp
0867bf8e +0x4c:  pop    %ebx
0867bf8f +0x4d:  pop    %esi
0867bf90 +0x4e:  pop    %ebp
0867bf91 +0x4f:  ret
0867bf92 +0x50:  mov    %edx,%ebx
0867bf94 +0x52:  mov    %eax,%esi
0867bf96 +0x54:  lea    -0x14(%ebp),%eax
0867bf99 +0x57:  mov    %eax,(%esp)
0867bf9c +0x5a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867bfa1 +0x5f:  mov    %esi,%eax
0867bfa3 +0x61:  mov    %ebx,%edx
0867bfa5 +0x63:  mov    %eax,(%esp)
0867bfa8 +0x66:  call   08ae3750 <_Unwind_Resume>
0867bfad +0x6b:  nop
```

## 反编译 C

```c
// CUser::SendCmdErrorPacket @ 0x867bf42

/* CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char) */

undefined4 __thiscall CUser::SendCmdErrorPacket(CUser *this,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867bf77 to 0867bf7b has its CatchHandler @ 0867bf92 */
  uVar1 = SendCmdErrorPacket(this,param_2,param_3,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
