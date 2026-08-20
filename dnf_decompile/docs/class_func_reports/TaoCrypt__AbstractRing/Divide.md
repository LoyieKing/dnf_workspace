# Divide

`_ZNK8TaoCrypt12AbstractRing6DivideERKNS_7IntegerES3_`

`TaoCrypt::AbstractRing::Divide(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractRing` | `0x087a3fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3fb0  _ZNK8TaoCrypt12AbstractRing6DivideERKNS_7IntegerES3_
#           TaoCrypt::AbstractRing::Divide(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087a3fb0, 0x087a403e]
087a3fb0 +0x00:  push   %ebp
087a3fb1 +0x01:  mov    %esp,%ebp
087a3fb3 +0x03:  sub    $0x48,%esp
087a3fb6 +0x06:  mov    %ebx,-0xc(%ebp)
087a3fb9 +0x09:  mov    0xc(%ebp),%eax
087a3fbc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3fc1 +0x11:  add    $0xbc8bd7,%ebx
087a3fc7 +0x17:  mov    %esi,-0x8(%ebp)
087a3fca +0x1a:  mov    0x8(%ebp),%esi
087a3fcd +0x1d:  mov    %edi,-0x4(%ebp)
087a3fd0 +0x20:  lea    -0x28(%ebp),%edi
087a3fd3 +0x23:  mov    %eax,0x4(%esp)
087a3fd7 +0x27:  mov    %edi,(%esp)
087a3fda +0x2a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087a3fdf +0x2f:  mov    (%esi),%eax
087a3fe1 +0x31:  mov    0x40(%eax),%edx
087a3fe4 +0x34:  mov    %esi,(%esp)
087a3fe7 +0x37:  mov    %edx,-0x2c(%ebp)
087a3fea +0x3a:  mov    0x10(%ebp),%edx
087a3fed +0x3d:  mov    %edx,0x4(%esp)
087a3ff1 +0x41:  call   *0x44(%eax)
087a3ff4 +0x44:  mov    %edi,0x4(%esp)
087a3ff8 +0x48:  mov    %esi,(%esp)
087a3ffb +0x4b:  mov    %eax,0x8(%esp)
087a3fff +0x4f:  call   *-0x2c(%ebp)
087a4002 +0x52:  mov    -0x24(%ebp),%esi
087a4005 +0x55:  movl   $0x0,0x4(%esp)
087a400d +0x5d:  mov    %esi,(%esp)
087a4010 +0x60:  mov    %eax,%edi
087a4012 +0x62:  mov    -0x28(%ebp),%eax
087a4015 +0x65:  shl    $0x2,%eax
087a4018 +0x68:  mov    %eax,0x8(%esp)
087a401c +0x6c:  call   0807dcc0 <_init+0x5b8>
087a4021 +0x71:  mov    %esi,(%esp)
087a4024 +0x74:  movb   $0x0,0x4(%esp)
087a4029 +0x79:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a402e +0x7e:  mov    %edi,%eax
087a4030 +0x80:  mov    -0xc(%ebp),%ebx
087a4033 +0x83:  mov    -0x8(%ebp),%esi
087a4036 +0x86:  mov    -0x4(%ebp),%edi
087a4039 +0x89:  mov    %ebp,%esp
087a403b +0x8b:  pop    %ebp
087a403c +0x8c:  ret
087a403d +0x8d:  nop
087a403e +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::AbstractRing::Divide @ 0x87a3fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractRing::Divide(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

undefined4 __thiscall
TaoCrypt::AbstractRing::Divide(AbstractRing *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c,param_1);
  pcVar1 = *(code **)(*(int *)this + 0x40);
  uVar2 = (**(code **)(*(int *)this + 0x44))(this,param_2);
  uVar2 = (*pcVar1)(this,(Integer *)&local_2c,uVar2);
  uVar3 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar3 & 0xffffff00);
  return uVar2;
}
```
