# CompressionOn

`_ZNK5yaSSL3SSL13CompressionOnEv`

`yaSSL::SSL::CompressionOn() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e9d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e9d0  _ZNK5yaSSL3SSL13CompressionOnEv
#           yaSSL::SSL::CompressionOn() const
# range [0x0874e9d0, 0x0874e9fe]
0874e9d0 +0x00:  push   %ebp
0874e9d1 +0x01:  mov    %esp,%ebp
0874e9d3 +0x03:  push   %ebx
0874e9d4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e9d9 +0x09:  add    $0xc1e1bf,%ebx
0874e9df +0x0f:  sub    $0x14,%esp
0874e9e2 +0x12:  mov    0x8(%ebp),%eax
0874e9e5 +0x15:  add    $0x68,%eax
0874e9e8 +0x18:  mov    %eax,(%esp)
0874e9eb +0x1b:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874e9f0 +0x20:  movzbl 0x12d(%eax),%eax
0874e9f7 +0x27:  add    $0x14,%esp
0874e9fa +0x2a:  pop    %ebx
0874e9fb +0x2b:  pop    %ebp
0874e9fc +0x2c:  ret
0874e9fd +0x2d:  nop
0874e9fe +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::CompressionOn @ 0x874e9d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::CompressionOn() const */

undefined1 __thiscall yaSSL::SSL::CompressionOn(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 0x12d);
}
```
