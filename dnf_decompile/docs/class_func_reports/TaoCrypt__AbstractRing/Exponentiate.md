# Exponentiate

`_ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_`

`TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractRing` | `0x087a3e60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3e60  _ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_
#           TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a3e60, 0x087a3ebc]
087a3e60 +0x00:  push   %ebp
087a3e61 +0x01:  mov    %esp,%ebp
087a3e63 +0x03:  sub    $0x38,%esp
087a3e66 +0x06:  mov    %ebx,-0xc(%ebp)
087a3e69 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3e6e +0x0e:  add    $0xbc8d2a,%ebx
087a3e74 +0x14:  mov    %esi,-0x8(%ebp)
087a3e77 +0x17:  mov    0x8(%ebp),%esi
087a3e7a +0x1a:  mov    %edi,-0x4(%ebp)
087a3e7d +0x1d:  mov    0xc(%ebp),%edi
087a3e80 +0x20:  mov    %esi,(%esp)
087a3e83 +0x23:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a3e88 +0x28:  mov    0x14(%ebp),%edx
087a3e8b +0x2b:  mov    (%edi),%eax
087a3e8d +0x2d:  mov    %esi,0x4(%esp)
087a3e91 +0x31:  mov    %edi,(%esp)
087a3e94 +0x34:  mov    %edx,0xc(%esp)
087a3e98 +0x38:  mov    0x10(%ebp),%edx
087a3e9b +0x3b:  movl   $0x1,0x10(%esp)
087a3ea3 +0x43:  mov    %edx,0x8(%esp)
087a3ea7 +0x47:  call   *0x58(%eax)
087a3eaa +0x4a:  mov    %esi,%eax
087a3eac +0x4c:  mov    -0xc(%ebp),%ebx
087a3eaf +0x4f:  mov    -0x8(%ebp),%esi
087a3eb2 +0x52:  mov    -0x4(%ebp),%edi
087a3eb5 +0x55:  mov    %ebp,%esp
087a3eb7 +0x57:  pop    %ebp
087a3eb8 +0x58:  ret    $0x4
087a3ebb +0x5b:  nop
087a3ebc +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AbstractRing::Exponentiate @ 0x87a3e60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::AbstractRing::Exponentiate(Integer *param_1,Integer *param_2)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  Integer::Integer(param_1);
  (**(code **)(*(int *)param_2 + 0x58))(param_2,param_1,in_stack_0000000c,in_stack_00000010,1);
  return param_1;
}
```
