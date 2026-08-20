# UnSetCompression

`_ZN5yaSSL3SSL16UnSetCompressionEv`

`yaSSL::SSL::UnSetCompression()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ee70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ee70  _ZN5yaSSL3SSL16UnSetCompressionEv
#           yaSSL::SSL::UnSetCompression()
# range [0x0874ee70, 0x0874ee9e]
0874ee70 +0x00:  push   %ebp
0874ee71 +0x01:  mov    %esp,%ebp
0874ee73 +0x03:  push   %ebx
0874ee74 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ee79 +0x09:  add    $0xc1dd1f,%ebx
0874ee7f +0x0f:  sub    $0x14,%esp
0874ee82 +0x12:  mov    0x8(%ebp),%eax
0874ee85 +0x15:  add    $0x68,%eax
0874ee88 +0x18:  mov    %eax,(%esp)
0874ee8b +0x1b:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874ee90 +0x20:  movb   $0x0,0x12d(%eax)
0874ee97 +0x27:  add    $0x14,%esp
0874ee9a +0x2a:  pop    %ebx
0874ee9b +0x2b:  pop    %ebp
0874ee9c +0x2c:  ret
0874ee9d +0x2d:  nop
0874ee9e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::UnSetCompression @ 0x874ee70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::UnSetCompression() */

void __thiscall yaSSL::SSL::UnSetCompression(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(undefined1 *)(iVar1 + 0x12d) = 0;
  return;
}
```
