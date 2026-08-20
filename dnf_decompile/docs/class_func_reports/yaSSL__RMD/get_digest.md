# get_digest

`_ZN5yaSSL3RMD10get_digestEPh`

`yaSSL::RMD::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08799660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799660  _ZN5yaSSL3RMD10get_digestEPh
#           yaSSL::RMD::get_digest(unsigned char*)
# range [0x08799660, 0x0879968e]
08799660 +0x00:  push   %ebp
08799661 +0x01:  mov    %esp,%ebp
08799663 +0x03:  push   %ebx
08799664 +0x04:  sub    $0x14,%esp
08799667 +0x07:  mov    0xc(%ebp),%eax
0879966a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879966f +0x0f:  add    $0xbd3529,%ebx
08799675 +0x15:  mov    %eax,0x4(%esp)
08799679 +0x19:  mov    0x8(%ebp),%eax
0879967c +0x1c:  mov    0x4(%eax),%eax
0879967f +0x1f:  mov    %eax,(%esp)
08799682 +0x22:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799687 +0x27:  add    $0x14,%esp
0879968a +0x2a:  pop    %ebx
0879968b +0x2b:  pop    %ebp
0879968c +0x2c:  ret
0879968d +0x2d:  nop
0879968e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::RMD::get_digest @ 0x8799660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::get_digest(unsigned char*) */

void __thiscall yaSSL::RMD::get_digest(RMD *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
