# get_digest

`_ZN5yaSSL3MD510get_digestEPh`

`yaSSL::MD5::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08799710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799710  _ZN5yaSSL3MD510get_digestEPh
#           yaSSL::MD5::get_digest(unsigned char*)
# range [0x08799710, 0x0879973e]
08799710 +0x00:  push   %ebp
08799711 +0x01:  mov    %esp,%ebp
08799713 +0x03:  push   %ebx
08799714 +0x04:  sub    $0x14,%esp
08799717 +0x07:  mov    0xc(%ebp),%eax
0879971a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879971f +0x0f:  add    $0xbd3479,%ebx
08799725 +0x15:  mov    %eax,0x4(%esp)
08799729 +0x19:  mov    0x8(%ebp),%eax
0879972c +0x1c:  mov    0x4(%eax),%eax
0879972f +0x1f:  mov    %eax,(%esp)
08799732 +0x22:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799737 +0x27:  add    $0x14,%esp
0879973a +0x2a:  pop    %ebx
0879973b +0x2b:  pop    %ebp
0879973c +0x2c:  ret
0879973d +0x2d:  nop
0879973e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::MD5::get_digest @ 0x8799710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::get_digest(unsigned char*) */

void __thiscall yaSSL::MD5::get_digest(MD5 *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
