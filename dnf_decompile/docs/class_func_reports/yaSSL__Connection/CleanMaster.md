# CleanMaster

`_ZN5yaSSL10Connection11CleanMasterEv`

`yaSSL::Connection::CleanMaster()`

| 类 | 地址 |
|---|---|
| `yaSSL::Connection` | `0x08747cb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747cb0  _ZN5yaSSL10Connection11CleanMasterEv
#           yaSSL::Connection::CleanMaster()
# range [0x08747cb0, 0x08747d0f]
08747cb0 +0x00:  push   %ebp
08747cb1 +0x01:  mov    %esp,%ebp
08747cb3 +0x03:  sub    $0x18,%esp
08747cb6 +0x06:  mov    %esi,-0x4(%ebp)
08747cb9 +0x09:  mov    0x8(%ebp),%esi
08747cbc +0x0c:  mov    %ebx,-0x8(%ebp)
08747cbf +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08747cc4 +0x14:  add    $0xc24ed4,%ebx
08747cca +0x1a:  cmpb   $0x0,0x129(%esi)
08747cd1 +0x21:  jne    08747cf7 <+0x47>
08747cd3 +0x23:  mov    0x134(%esi),%eax
08747cd9 +0x29:  movl   $0x30,0x4(%esp)
08747ce1 +0x31:  mov    %eax,0x8(%esp)
08747ce5 +0x35:  lea    0x4(%esi),%eax
08747ce8 +0x38:  mov    %eax,(%esp)
08747ceb +0x3b:  call   08747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>  ; yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&)
08747cf0 +0x40:  movb   $0x1,0x129(%esi)
08747cf7 +0x47:  mov    -0x8(%ebp),%ebx
08747cfa +0x4a:  mov    -0x4(%ebp),%esi
08747cfd +0x4d:  mov    %ebp,%esp
08747cff +0x4f:  pop    %ebp
08747d00 +0x50:  ret
08747d01 +0x51:  jmp    08747d10 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ServerHello&)
08747d03 +0x53:  nop
08747d04 +0x54:  nop
08747d05 +0x55:  nop
08747d06 +0x56:  nop
08747d07 +0x57:  nop
08747d08 +0x58:  nop
08747d09 +0x59:  nop
08747d0a +0x5a:  nop
08747d0b +0x5b:  nop
08747d0c +0x5c:  nop
08747d0d +0x5d:  nop
08747d0e +0x5e:  nop
08747d0f +0x5f:  nop
```

## 反编译 C

```c
// yaSSL::Connection::CleanMaster @ 0x8747cb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::CleanMaster() */

void __thiscall yaSSL::Connection::CleanMaster(Connection *this)

{
  if (this[0x129] == (Connection)0x0) {
    clean((uchar *)(this + 4),0x30,*(RandomPool **)(this + 0x134));
    this[0x129] = (Connection)0x1;
  }
  return;
}
```
