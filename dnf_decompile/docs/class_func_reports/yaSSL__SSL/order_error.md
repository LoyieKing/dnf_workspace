# order_error

`_ZN5yaSSL3SSL11order_errorEv`

`yaSSL::SSL::order_error()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e030  _ZN5yaSSL3SSL11order_errorEv
#           yaSSL::SSL::order_error()
# range [0x0874e030, 0x0874e05c]
0874e030 +0x00:  push   %ebp
0874e031 +0x01:  mov    %esp,%ebp
0874e033 +0x03:  push   %ebx
0874e034 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874e039 +0x09:  add    $0xc1eb5f,%ebx
0874e03f +0x0f:  sub    $0x14,%esp
0874e042 +0x12:  mov    0x8(%ebp),%eax
0874e045 +0x15:  movl   $0x6c,0x4(%esp)
0874e04d +0x1d:  mov    %eax,(%esp)
0874e050 +0x20:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874e055 +0x25:  add    $0x14,%esp
0874e058 +0x28:  pop    %ebx
0874e059 +0x29:  pop    %ebp
0874e05a +0x2a:  ret
0874e05b +0x2b:  nop
0874e05c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::order_error @ 0x874e030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::order_error() */

void __thiscall yaSSL::SSL::order_error(SSL *this)

{
  SetError(this,0x6c);
  return;
}
```
