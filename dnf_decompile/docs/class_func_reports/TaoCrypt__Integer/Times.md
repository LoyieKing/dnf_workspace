# Times

`_ZNK8TaoCrypt7Integer5TimesERKS0_`

`TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08762160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762160  _ZNK8TaoCrypt7Integer5TimesERKS0_
#           TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
# range [0x08762160, 0x087621a9]
08762160 +0x00:  push   %ebp
08762161 +0x01:  mov    %esp,%ebp
08762163 +0x03:  sub    $0x18,%esp
08762166 +0x06:  mov    %ebx,-0x8(%ebp)
08762169 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0876216e +0x0e:  add    $0xc0aa2a,%ebx
08762174 +0x14:  mov    %esi,-0x4(%ebp)
08762177 +0x17:  mov    0x8(%ebp),%esi
0876217a +0x1a:  mov    %esi,(%esp)
0876217d +0x1d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08762182 +0x22:  mov    0x10(%ebp),%eax
08762185 +0x25:  mov    %esi,(%esp)
08762188 +0x28:  mov    %eax,0x8(%esp)
0876218c +0x2c:  mov    0xc(%ebp),%eax
0876218f +0x2f:  mov    %eax,0x4(%esp)
08762193 +0x33:  call   08762100 <_ZN8TaoCrypt8MultiplyERNS_7IntegerERKS0_S3_>  ; TaoCrypt::Multiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08762198 +0x38:  mov    %esi,%eax
0876219a +0x3a:  mov    -0x8(%ebp),%ebx
0876219d +0x3d:  mov    -0x4(%ebp),%esi
087621a0 +0x40:  mov    %ebp,%esp
087621a2 +0x42:  pop    %ebp
087621a3 +0x43:  ret    $0x4
087621a6 +0x46:  lea    0x0(%esi),%esi
087621a9 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Times @ 0x8762160

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Times(Integer *param_1)

{
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  Integer(param_1);
  Multiply(param_1,in_stack_00000008,in_stack_0000000c);
  return param_1;
}
```
