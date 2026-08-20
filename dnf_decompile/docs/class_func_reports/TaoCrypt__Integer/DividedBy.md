# DividedBy

`_ZNK8TaoCrypt7Integer9DividedByEj`

`TaoCrypt::Integer::DividedBy(unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761a70  _ZNK8TaoCrypt7Integer9DividedByEj
#           TaoCrypt::Integer::DividedBy(unsigned int) const
# range [0x08761a70, 0x08761abe]
08761a70 +0x00:  push   %ebp
08761a71 +0x01:  mov    %esp,%ebp
08761a73 +0x03:  sub    $0x28,%esp
08761a76 +0x06:  mov    %ebx,-0x8(%ebp)
08761a79 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08761a7e +0x0e:  add    $0xc0b11a,%ebx
08761a84 +0x14:  mov    %esi,-0x4(%ebp)
08761a87 +0x17:  mov    0x8(%ebp),%esi
08761a8a +0x1a:  mov    %esi,(%esp)
08761a8d +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08761a92 +0x22:  mov    0x10(%ebp),%eax
08761a95 +0x25:  mov    %esi,0x4(%esp)
08761a99 +0x29:  mov    %eax,0xc(%esp)
08761a9d +0x2d:  mov    0xc(%ebp),%eax
08761aa0 +0x30:  mov    %eax,0x8(%esp)
08761aa4 +0x34:  lea    -0xc(%ebp),%eax
08761aa7 +0x37:  mov    %eax,(%esp)
08761aaa +0x3a:  call   08761740 <_ZN8TaoCrypt7Integer6DivideERjRS0_RKS0_j>  ; TaoCrypt::Integer::Divide(unsigned int&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned int)
08761aaf +0x3f:  mov    %esi,%eax
08761ab1 +0x41:  mov    -0x8(%ebp),%ebx
08761ab4 +0x44:  mov    -0x4(%ebp),%esi
08761ab7 +0x47:  mov    %ebp,%esp
08761ab9 +0x49:  pop    %ebp
08761aba +0x4a:  ret    $0x4
08761abd +0x4d:  nop
08761abe +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::DividedBy @ 0x8761a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DividedBy(unsigned int) const */

uint TaoCrypt::Integer::DividedBy(uint param_1)

{
  Integer *in_stack_00000008;
  uint in_stack_0000000c;
  uint local_10;
  
  Integer((Integer *)param_1);
  Divide(&local_10,(Integer *)param_1,in_stack_00000008,in_stack_0000000c);
  return param_1;
}
```
