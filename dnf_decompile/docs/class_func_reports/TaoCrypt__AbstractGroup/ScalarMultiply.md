# ScalarMultiply

`_ZNK8TaoCrypt13AbstractGroup14ScalarMultiplyERKNS_7IntegerES3_`

`TaoCrypt::AbstractGroup::ScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a3ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3ec0  _ZNK8TaoCrypt13AbstractGroup14ScalarMultiplyERKNS_7IntegerES3_
#           TaoCrypt::AbstractGroup::ScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a3ec0, 0x087a3f1c]
087a3ec0 +0x00:  push   %ebp
087a3ec1 +0x01:  mov    %esp,%ebp
087a3ec3 +0x03:  sub    $0x38,%esp
087a3ec6 +0x06:  mov    %ebx,-0xc(%ebp)
087a3ec9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3ece +0x0e:  add    $0xbc8cca,%ebx
087a3ed4 +0x14:  mov    %esi,-0x8(%ebp)
087a3ed7 +0x17:  mov    0x8(%ebp),%esi
087a3eda +0x1a:  mov    %edi,-0x4(%ebp)
087a3edd +0x1d:  mov    0xc(%ebp),%edi
087a3ee0 +0x20:  mov    %esi,(%esp)
087a3ee3 +0x23:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a3ee8 +0x28:  mov    0x14(%ebp),%edx
087a3eeb +0x2b:  mov    (%edi),%eax
087a3eed +0x2d:  mov    %esi,0x4(%esp)
087a3ef1 +0x31:  mov    %edi,(%esp)
087a3ef4 +0x34:  mov    %edx,0xc(%esp)
087a3ef8 +0x38:  mov    0x10(%ebp),%edx
087a3efb +0x3b:  movl   $0x1,0x10(%esp)
087a3f03 +0x43:  mov    %edx,0x8(%esp)
087a3f07 +0x47:  call   *0x34(%eax)
087a3f0a +0x4a:  mov    %esi,%eax
087a3f0c +0x4c:  mov    -0xc(%ebp),%ebx
087a3f0f +0x4f:  mov    -0x8(%ebp),%esi
087a3f12 +0x52:  mov    -0x4(%ebp),%edi
087a3f15 +0x55:  mov    %ebp,%esp
087a3f17 +0x57:  pop    %ebp
087a3f18 +0x58:  ret    $0x4
087a3f1b +0x5b:  nop
087a3f1c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::ScalarMultiply @ 0x87a3ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::ScalarMultiply(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

Integer * TaoCrypt::AbstractGroup::ScalarMultiply(Integer *param_1,Integer *param_2)

{
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  Integer::Integer(param_1);
  (**(code **)(*(int *)param_2 + 0x34))(param_2,param_1,in_stack_0000000c,in_stack_00000010,1);
  return param_1;
}
```
