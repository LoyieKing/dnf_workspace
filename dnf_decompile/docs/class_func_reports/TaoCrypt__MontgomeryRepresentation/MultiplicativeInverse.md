# MultiplicativeInverse

`_ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE`

`TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MontgomeryRepresentation` | `0x0875e2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875e2c0  _ZNK8TaoCrypt24MontgomeryRepresentation21MultiplicativeInverseERKNS_7IntegerE
#           TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse(TaoCrypt::Integer const&) const
# range [0x0875e2c0, 0x0875e3fe]
0875e2c0 +0x000:  push   %ebp
0875e2c1 +0x001:  mov    %esp,%ebp
0875e2c3 +0x003:  push   %edi
0875e2c4 +0x004:  push   %esi
0875e2c5 +0x005:  push   %ebx
0875e2c6 +0x006:  sub    $0x3c,%esp
0875e2c9 +0x009:  mov    0x8(%ebp),%esi
0875e2cc +0x00c:  mov    0xc(%ebp),%ecx
0875e2cf +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
0875e2d4 +0x014:  add    $0xc0e8c4,%ebx
0875e2da +0x01a:  movl   $0x0,-0x20(%ebp)
0875e2e1 +0x021:  mov    0xc(%esi),%edx
0875e2e4 +0x024:  mov    0x20(%esi),%eax
0875e2e7 +0x027:  mov    0x50(%esi),%edi
0875e2ea +0x02a:  mov    %edx,-0x1c(%ebp)
0875e2ed +0x02d:  mov    (%ecx),%edx
0875e2ef +0x02f:  mov    %eax,-0x24(%ebp)
0875e2f2 +0x032:  xor    %eax,%eax
0875e2f4 +0x034:  mov    0x4(%ecx),%ecx
0875e2f7 +0x037:  test   %edx,%edx
0875e2f9 +0x039:  je     0875e318 <+0x58>
0875e2fb +0x03b:  mov    %esi,-0x20(%ebp)
0875e2fe +0x03e:  mov    %edx,%esi
0875e300 +0x040:  mov    (%ecx,%eax,4),%edx
0875e303 +0x043:  mov    %edx,(%edi,%eax,4)
0875e306 +0x046:  add    $0x1,%eax
0875e309 +0x049:  cmp    %eax,%esi
0875e30b +0x04b:  ja     0875e300 <+0x40>
0875e30d +0x04d:  mov    0xc(%ebp),%edx
0875e310 +0x050:  mov    -0x20(%ebp),%esi
0875e313 +0x053:  mov    (%edx),%edx
0875e315 +0x055:  mov    %edx,-0x20(%ebp)
0875e318 +0x058:  mov    -0x1c(%ebp),%ecx
0875e31b +0x05b:  mov    -0x20(%ebp),%eax
0875e31e +0x05e:  add    %ecx,%ecx
0875e320 +0x060:  sub    %eax,%ecx
0875e322 +0x062:  lea    (%edi,%eax,4),%edx
0875e325 +0x065:  je     0875e33e <+0x7e>
0875e327 +0x067:  xor    %eax,%eax
0875e329 +0x069:  lea    0x0(%esi,%eiz,1),%esi
0875e330 +0x070:  movl   $0x0,(%edx,%eax,4)
0875e337 +0x077:  add    $0x1,%eax
0875e33a +0x07a:  cmp    %eax,%ecx
0875e33c +0x07c:  ja     0875e330 <+0x70>
0875e33e +0x07e:  mov    -0x1c(%ebp),%edx
0875e341 +0x081:  mov    -0x24(%ebp),%ecx
0875e344 +0x084:  mov    %edx,0x14(%esp)
0875e348 +0x088:  mov    0x40(%esi),%eax
0875e34b +0x08b:  mov    %eax,0x10(%esp)
0875e34f +0x08f:  mov    0x10(%esi),%eax
0875e352 +0x092:  mov    %ecx,(%esp)
0875e355 +0x095:  mov    %edi,0x8(%esp)
0875e359 +0x099:  mov    %eax,0xc(%esp)
0875e35d +0x09d:  lea    (%edi,%edx,8),%eax
0875e360 +0x0a0:  mov    %eax,0x4(%esp)
0875e364 +0x0a4:  call   0875e1e0 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j>  ; TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
0875e369 +0x0a9:  mov    -0x1c(%ebp),%eax
0875e36c +0x0ac:  mov    -0x1c(%ebp),%edx
0875e36f +0x0af:  mov    -0x24(%ebp),%ecx
0875e372 +0x0b2:  mov    %eax,0x14(%esp)
0875e376 +0x0b6:  mov    0x10(%esi),%eax
0875e379 +0x0b9:  mov    %edx,0xc(%esp)
0875e37d +0x0bd:  mov    %ecx,0x8(%esp)
0875e381 +0x0c1:  mov    %edi,0x4(%esp)
0875e385 +0x0c5:  mov    %eax,0x10(%esp)
0875e389 +0x0c9:  mov    %ecx,(%esp)
0875e38c +0x0cc:  call   0875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>  ; TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
0875e391 +0x0d1:  mov    -0x1c(%ebp),%edx
0875e394 +0x0d4:  shl    $0x5,%edx
0875e397 +0x0d7:  cmp    %edx,%eax
0875e399 +0x0d9:  ja     0875e3d0 <+0x110>
0875e39b +0x0db:  mov    -0x1c(%ebp),%ecx
0875e39e +0x0de:  sub    %eax,%edx
0875e3a0 +0x0e0:  mov    -0x24(%ebp),%eax
0875e3a3 +0x0e3:  mov    %ecx,0x10(%esp)
0875e3a7 +0x0e7:  mov    0x10(%esi),%ecx
0875e3aa +0x0ea:  mov    %eax,0x4(%esp)
0875e3ae +0x0ee:  mov    %eax,(%esp)
0875e3b1 +0x0f1:  mov    %edx,0x8(%esp)
0875e3b5 +0x0f5:  mov    %ecx,0xc(%esp)
0875e3b9 +0x0f9:  call   0875cf90 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j>  ; TaoCrypt::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
0875e3be +0x0fe:  add    $0x3c,%esp
0875e3c1 +0x101:  lea    0x1c(%esi),%eax
0875e3c4 +0x104:  pop    %ebx
0875e3c5 +0x105:  pop    %esi
0875e3c6 +0x106:  pop    %edi
0875e3c7 +0x107:  pop    %ebp
0875e3c8 +0x108:  ret
0875e3c9 +0x109:  lea    0x0(%esi,%eiz,1),%esi
0875e3d0 +0x110:  mov    -0x1c(%ebp),%ecx
0875e3d3 +0x113:  sub    %edx,%eax
0875e3d5 +0x115:  mov    %ecx,0x10(%esp)
0875e3d9 +0x119:  mov    0x10(%esi),%ecx
0875e3dc +0x11c:  mov    %eax,0x8(%esp)
0875e3e0 +0x120:  mov    -0x24(%ebp),%eax
0875e3e3 +0x123:  mov    %ecx,0xc(%esp)
0875e3e7 +0x127:  mov    %eax,0x4(%esp)
0875e3eb +0x12b:  mov    %eax,(%esp)
0875e3ee +0x12e:  call   0875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>  ; TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
0875e3f3 +0x133:  add    $0x3c,%esp
0875e3f6 +0x136:  lea    0x1c(%esi),%eax
0875e3f9 +0x139:  pop    %ebx
0875e3fa +0x13a:  pop    %esi
0875e3fb +0x13b:  pop    %edi
0875e3fc +0x13c:  pop    %ebp
0875e3fd +0x13d:  ret
0875e3fe +0x13e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse @ 0x875e2c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse(TaoCrypt::Integer const&) const */

MontgomeryRepresentation * __thiscall
TaoCrypt::MontgomeryRepresentation::MultiplicativeInverse
          (MontgomeryRepresentation *this,Integer *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_24;
  
  local_24 = 0;
  uVar1 = *(uint *)(this + 0xc);
  puVar2 = *(uint **)(this + 0x20);
  puVar3 = *(uint **)(this + 0x50);
  uVar6 = *(uint *)param_1;
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 4);
  if (uVar6 != 0) {
    do {
      puVar3[uVar5] = *(uint *)(iVar4 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    local_24 = *(int *)param_1;
  }
  uVar6 = uVar1 * 2 - local_24;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar3[local_24 + uVar5] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  MontgomeryReduce(puVar2,puVar3 + uVar1 * 2,puVar3,*(uint **)(this + 0x10),*(uint **)(this + 0x40),
                   uVar1);
  uVar6 = AlmostInverse(puVar2,puVar3,puVar2,uVar1,*(uint **)(this + 0x10),uVar1);
  if (uVar1 * 0x20 < uVar6) {
    DivideByPower2Mod(puVar2,puVar2,uVar6 + uVar1 * -0x20,*(uint **)(this + 0x10),uVar1);
    return this + 0x1c;
  }
  MultiplyByPower2Mod(puVar2,puVar2,uVar1 * 0x20 - uVar6,*(uint **)(this + 0x10),uVar1);
  return this + 0x1c;
}
```
