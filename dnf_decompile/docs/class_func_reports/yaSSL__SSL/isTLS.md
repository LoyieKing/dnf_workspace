# isTLS

`_ZNK5yaSSL3SSL5isTLSEv`

`yaSSL::SSL::isTLS() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e9a0  _ZNK5yaSSL3SSL5isTLSEv
#           yaSSL::SSL::isTLS() const
# range [0x0874e9a0, 0x0874e9ce]
0874e9a0 +0x00:  push   %ebp
0874e9a1 +0x01:  mov    %esp,%ebp
0874e9a3 +0x03:  push   %ebx
0874e9a4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e9a9 +0x09:  add    $0xc1e1ef,%ebx
0874e9af +0x0f:  sub    $0x14,%esp
0874e9b2 +0x12:  mov    0x8(%ebp),%eax
0874e9b5 +0x15:  add    $0x68,%eax
0874e9b8 +0x18:  mov    %eax,(%esp)
0874e9bb +0x1b:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874e9c0 +0x20:  movzbl 0x12a(%eax),%eax
0874e9c7 +0x27:  add    $0x14,%esp
0874e9ca +0x2a:  pop    %ebx
0874e9cb +0x2b:  pop    %ebp
0874e9cc +0x2c:  ret
0874e9cd +0x2d:  nop
0874e9ce +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::isTLS @ 0x874e9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::isTLS() const */

undefined1 __thiscall yaSSL::SSL::isTLS(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 0x12a);
}
```
