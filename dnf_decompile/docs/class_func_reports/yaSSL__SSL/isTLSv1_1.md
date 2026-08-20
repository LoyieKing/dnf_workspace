# isTLSv1_1

`_ZNK5yaSSL3SSL9isTLSv1_1Ev`

`yaSSL::SSL::isTLSv1_1() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e970  _ZNK5yaSSL3SSL9isTLSv1_1Ev
#           yaSSL::SSL::isTLSv1_1() const
# range [0x0874e970, 0x0874e99e]
0874e970 +0x00:  push   %ebp
0874e971 +0x01:  mov    %esp,%ebp
0874e973 +0x03:  push   %ebx
0874e974 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e979 +0x09:  add    $0xc1e21f,%ebx
0874e97f +0x0f:  sub    $0x14,%esp
0874e982 +0x12:  mov    0x8(%ebp),%eax
0874e985 +0x15:  add    $0x68,%eax
0874e988 +0x18:  mov    %eax,(%esp)
0874e98b +0x1b:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874e990 +0x20:  movzbl 0x12b(%eax),%eax
0874e997 +0x27:  add    $0x14,%esp
0874e99a +0x2a:  pop    %ebx
0874e99b +0x2b:  pop    %ebp
0874e99c +0x2c:  ret
0874e99d +0x2d:  nop
0874e99e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::isTLSv1_1 @ 0x874e970

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::isTLSv1_1() const */

undefined1 __thiscall yaSSL::SSL::isTLSv1_1(SSL *this)

{
  int iVar1;
  
  iVar1 = Security::get_connection((Security *)(this + 0x68));
  return *(undefined1 *)(iVar1 + 299);
}
```
