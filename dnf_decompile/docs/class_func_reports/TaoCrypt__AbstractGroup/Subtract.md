# Subtract

`_ZNK8TaoCrypt13AbstractGroup8SubtractERKNS_7IntegerES3_`

`TaoCrypt::AbstractGroup::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a4040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a4040  _ZNK8TaoCrypt13AbstractGroup8SubtractERKNS_7IntegerES3_
#           TaoCrypt::AbstractGroup::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a4040, 0x087a40ce]
087a4040 +0x00:  push   %ebp
087a4041 +0x01:  mov    %esp,%ebp
087a4043 +0x03:  sub    $0x48,%esp
087a4046 +0x06:  mov    %ebx,-0xc(%ebp)
087a4049 +0x09:  mov    0xc(%ebp),%eax
087a404c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a4051 +0x11:  add    $0xbc8b47,%ebx
087a4057 +0x17:  mov    %esi,-0x8(%ebp)
087a405a +0x1a:  mov    0x8(%ebp),%esi
087a405d +0x1d:  mov    %edi,-0x4(%ebp)
087a4060 +0x20:  lea    -0x28(%ebp),%edi
087a4063 +0x23:  mov    %eax,0x4(%esp)
087a4067 +0x27:  mov    %edi,(%esp)
087a406a +0x2a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a406f +0x2f:  mov    (%esi),%eax
087a4071 +0x31:  mov    0x10(%eax),%edx
087a4074 +0x34:  mov    %esi,(%esp)
087a4077 +0x37:  mov    %edx,-0x2c(%ebp)
087a407a +0x3a:  mov    0x10(%ebp),%edx
087a407d +0x3d:  mov    %edx,0x4(%esp)
087a4081 +0x41:  call   *0x14(%eax)
087a4084 +0x44:  mov    %edi,0x4(%esp)
087a4088 +0x48:  mov    %esi,(%esp)
087a408b +0x4b:  mov    %eax,0x8(%esp)
087a408f +0x4f:  call   *-0x2c(%ebp)
087a4092 +0x52:  mov    -0x24(%ebp),%esi
087a4095 +0x55:  movl   $0x0,0x4(%esp)
087a409d +0x5d:  mov    %esi,(%esp)
087a40a0 +0x60:  mov    %eax,%edi
087a40a2 +0x62:  mov    -0x28(%ebp),%eax
087a40a5 +0x65:  shl    $0x2,%eax
087a40a8 +0x68:  mov    %eax,0x8(%esp)
087a40ac +0x6c:  call   0807dcc0 <_init+0x5b8>
087a40b1 +0x71:  mov    %esi,(%esp)
087a40b4 +0x74:  movb   $0x0,0x4(%esp)
087a40b9 +0x79:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a40be +0x7e:  mov    %edi,%eax
087a40c0 +0x80:  mov    -0xc(%ebp),%ebx
087a40c3 +0x83:  mov    -0x8(%ebp),%esi
087a40c6 +0x86:  mov    -0x4(%ebp),%edi
087a40c9 +0x89:  mov    %ebp,%esp
087a40cb +0x8b:  pop    %ebp
087a40cc +0x8c:  ret
087a40cd +0x8d:  nop
087a40ce +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::Subtract @ 0x87a4040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractGroup::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

undefined4 __thiscall
TaoCrypt::AbstractGroup::Subtract(AbstractGroup *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c,param_1);
  pcVar1 = *(code **)(*(int *)this + 0x10);
  uVar2 = (**(code **)(*(int *)this + 0x14))(this,param_2);
  uVar2 = (*pcVar1)(this,(Integer *)&local_2c,uVar2);
  uVar3 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar3 & 0xffffff00);
  return uVar2;
}
```
