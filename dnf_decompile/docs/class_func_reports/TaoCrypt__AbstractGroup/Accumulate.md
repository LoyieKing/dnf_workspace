# Accumulate

`_ZNK8TaoCrypt13AbstractGroup10AccumulateERNS_7IntegerERKS1_`

`TaoCrypt::AbstractGroup::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a3e10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3e10  _ZNK8TaoCrypt13AbstractGroup10AccumulateERNS_7IntegerERKS1_
#           TaoCrypt::AbstractGroup::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const
# range [0x087a3e10, 0x087a3e59]
087a3e10 +0x00:  push   %ebp
087a3e11 +0x01:  mov    %esp,%ebp
087a3e13 +0x03:  sub    $0x18,%esp
087a3e16 +0x06:  mov    0x8(%ebp),%eax
087a3e19 +0x09:  mov    %ebx,-0x8(%ebp)
087a3e1c +0x0c:  mov    0x10(%ebp),%ecx
087a3e1f +0x0f:  mov    %esi,-0x4(%ebp)
087a3e22 +0x12:  mov    0xc(%ebp),%esi
087a3e25 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3e2a +0x1a:  add    $0xbc8d6e,%ebx
087a3e30 +0x20:  mov    (%eax),%edx
087a3e32 +0x22:  mov    %ecx,0x8(%esp)
087a3e36 +0x26:  mov    %esi,0x4(%esp)
087a3e3a +0x2a:  mov    %eax,(%esp)
087a3e3d +0x2d:  call   *0x10(%edx)
087a3e40 +0x30:  mov    %esi,(%esp)
087a3e43 +0x33:  mov    %eax,0x4(%esp)
087a3e47 +0x37:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087a3e4c +0x3c:  mov    -0x8(%ebp),%ebx
087a3e4f +0x3f:  mov    -0x4(%ebp),%esi
087a3e52 +0x42:  mov    %ebp,%esp
087a3e54 +0x44:  pop    %ebp
087a3e55 +0x45:  ret
087a3e56 +0x46:  lea    0x0(%esi),%esi
087a3e59 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::Accumulate @ 0x87a3e10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

void __thiscall
TaoCrypt::AbstractGroup::Accumulate(AbstractGroup *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)(**(code **)(*(int *)this + 0x10))(this,param_1,param_2);
  Integer::operator=(param_1,pIVar1);
  return;
}
```
