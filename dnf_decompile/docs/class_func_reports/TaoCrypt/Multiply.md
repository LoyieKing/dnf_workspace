# Multiply

`_ZN8TaoCrypt8MultiplyERNS_7IntegerERKS0_S3_`

`TaoCrypt::Multiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08762100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762100  _ZN8TaoCrypt8MultiplyERNS_7IntegerERKS0_S3_
#           TaoCrypt::Multiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08762100, 0x0876215e]
08762100 +0x00:  push   %ebp
08762101 +0x01:  mov    %esp,%ebp
08762103 +0x03:  sub    $0x28,%esp
08762106 +0x06:  mov    %ebx,-0xc(%ebp)
08762109 +0x09:  mov    0x8(%ebp),%eax
0876210c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08762111 +0x11:  add    $0xc0aa87,%ebx
08762117 +0x17:  mov    %esi,-0x8(%ebp)
0876211a +0x1a:  mov    0x10(%ebp),%esi
0876211d +0x1d:  mov    %edi,-0x4(%ebp)
08762120 +0x20:  mov    0xc(%ebp),%edi
08762123 +0x23:  mov    %eax,(%esp)
08762126 +0x26:  mov    %esi,0x8(%esp)
0876212a +0x2a:  mov    %edi,0x4(%esp)
0876212e +0x2e:  call   08761e50 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveMultiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08762133 +0x33:  cmpl   $0x1,0xc(%edi)
08762137 +0x37:  setne  %dl
0876213a +0x3a:  cmpl   $0x1,0xc(%esi)
0876213e +0x3e:  setne  %al
08762141 +0x41:  cmp    %al,%dl
08762143 +0x43:  je     08762150 <+0x50>
08762145 +0x45:  mov    0x8(%ebp),%eax
08762148 +0x48:  mov    %eax,(%esp)
0876214b +0x4b:  call   0875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>  ; TaoCrypt::Integer::Negate()
08762150 +0x50:  mov    -0xc(%ebp),%ebx
08762153 +0x53:  mov    -0x8(%ebp),%esi
08762156 +0x56:  mov    -0x4(%ebp),%edi
08762159 +0x59:  mov    %ebp,%esp
0876215b +0x5b:  pop    %ebp
0876215c +0x5c:  ret
0876215d +0x5d:  nop
0876215e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Multiply @ 0x8762100

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Multiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void TaoCrypt::Multiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  PositiveMultiply(param_1,param_2,param_3);
  if ((*(int *)(param_2 + 0xc) != 1) != (*(int *)(param_3 + 0xc) != 1)) {
    Integer::Negate(param_1);
  }
  return;
}
```
