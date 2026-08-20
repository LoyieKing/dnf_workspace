# get_digest

`_ZN5yaSSL3SHA10get_digestEPh`

`yaSSL::SHA::get_digest(unsigned char*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x087996e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087996e0  _ZN5yaSSL3SHA10get_digestEPh
#           yaSSL::SHA::get_digest(unsigned char*)
# range [0x087996e0, 0x0879970e]
087996e0 +0x00:  push   %ebp
087996e1 +0x01:  mov    %esp,%ebp
087996e3 +0x03:  push   %ebx
087996e4 +0x04:  sub    $0x14,%esp
087996e7 +0x07:  mov    0xc(%ebp),%eax
087996ea +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087996ef +0x0f:  add    $0xbd34a9,%ebx
087996f5 +0x15:  mov    %eax,0x4(%esp)
087996f9 +0x19:  mov    0x8(%ebp),%eax
087996fc +0x1c:  mov    0x4(%eax),%eax
087996ff +0x1f:  mov    %eax,(%esp)
08799702 +0x22:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799707 +0x27:  add    $0x14,%esp
0879970a +0x2a:  pop    %ebx
0879970b +0x2b:  pop    %ebp
0879970c +0x2c:  ret
0879970d +0x2d:  nop
0879970e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SHA::get_digest @ 0x87996e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::get_digest(unsigned char*) */

void __thiscall yaSSL::SHA::get_digest(SHA *this,uchar *param_1)

{
  TaoCrypt::HASHwithTransform::Final(*(HASHwithTransform **)(this + 4),param_1);
  return;
}
```
