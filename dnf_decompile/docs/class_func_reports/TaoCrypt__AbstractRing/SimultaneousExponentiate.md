# SimultaneousExponentiate

`_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j`

`TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractRing` | `0x087a5490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a5490  _ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j
#           TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
# range [0x087a5490, 0x087a54d9]
087a5490 +0x00:  push   %ebp
087a5491 +0x01:  mov    %esp,%ebp
087a5493 +0x03:  push   %ebx
087a5494 +0x04:  sub    $0x24,%esp
087a5497 +0x07:  mov    0x8(%ebp),%eax
087a549a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087a549f +0x0f:  add    $0xbc76f9,%ebx
087a54a5 +0x15:  mov    (%eax),%edx
087a54a7 +0x17:  mov    %eax,(%esp)
087a54aa +0x1a:  call   *0x5c(%edx)
087a54ad +0x1d:  mov    0x18(%ebp),%edx
087a54b0 +0x20:  mov    %edx,0x10(%esp)
087a54b4 +0x24:  mov    0x14(%ebp),%edx
087a54b7 +0x27:  mov    %eax,(%esp)
087a54ba +0x2a:  mov    %edx,0xc(%esp)
087a54be +0x2e:  mov    0x10(%ebp),%edx
087a54c1 +0x31:  mov    %edx,0x8(%esp)
087a54c5 +0x35:  mov    0xc(%ebp),%edx
087a54c8 +0x38:  mov    %edx,0x4(%esp)
087a54cc +0x3c:  call   087a48a0 <_ZNK8TaoCrypt13AbstractGroup20SimultaneousMultiplyEPNS_7IntegerERKS1_PS3_j>  ; TaoCrypt::AbstractGroup::SimultaneousMultiply(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
087a54d1 +0x41:  add    $0x24,%esp
087a54d4 +0x44:  pop    %ebx
087a54d5 +0x45:  pop    %ebp
087a54d6 +0x46:  ret
087a54d7 +0x47:  nop
087a54d8 +0x48:  nop
087a54d9 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::AbstractRing::SimultaneousExponentiate @ 0x87a5490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&,
   TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::AbstractRing::SimultaneousExponentiate
          (AbstractRing *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  AbstractGroup *this_00;
  
  this_00 = (AbstractGroup *)(**(code **)(*(int *)this + 0x5c))(this);
  AbstractGroup::SimultaneousMultiply(this_00,param_1,param_2,param_3,param_4);
  return;
}
```
