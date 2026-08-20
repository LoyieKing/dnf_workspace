# SimultaneousExponentiate

`_ZNK8TaoCrypt17ModularArithmetic24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j`

`TaoCrypt::ModularArithmetic::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x08762a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08762a20  _ZNK8TaoCrypt17ModularArithmetic24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j
#           TaoCrypt::ModularArithmetic::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
# range [0x08762a20, 0x08762d3c]
08762a20 +0x000:  push   %ebp
08762a21 +0x001:  mov    %esp,%ebp
08762a23 +0x003:  push   %edi
08762a24 +0x004:  push   %esi
08762a25 +0x005:  push   %ebx
08762a26 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08762a2b +0x00b:  add    $0xc0a16d,%ebx
08762a31 +0x011:  sub    $0xdc,%esp
08762a37 +0x017:  mov    0x8(%ebp),%esi
08762a3a +0x01a:  movl   $0x0,0x4(%esp)
08762a42 +0x022:  lea    0xc(%esi),%edi
08762a45 +0x025:  mov    %edi,(%esp)
08762a48 +0x028:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
08762a4d +0x02d:  test   %al,%al
08762a4f +0x02f:  je     08762d10 <+0x2f0>
08762a55 +0x035:  lea    -0xb0(%ebp),%eax
08762a5b +0x03b:  mov    %edi,0x4(%esp)
08762a5f +0x03f:  lea    -0x58(%ebp),%edi
08762a62 +0x042:  mov    %eax,(%esp)
08762a65 +0x045:  mov    %eax,-0xc0(%ebp)
08762a6b +0x04b:  call   0875f910 <_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE>  ; TaoCrypt::MontgomeryRepresentation::MontgomeryRepresentation(TaoCrypt::Integer const&)
08762a70 +0x050:  mov    -0xa4(%ebp),%esi
08762a76 +0x056:  mov    0x10(%ebp),%eax
08762a79 +0x059:  mov    %edi,(%esp)
08762a7c +0x05c:  shl    $0x5,%esi
08762a7f +0x05f:  mov    %eax,0x4(%esp)
08762a83 +0x063:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762a88 +0x068:  mov    %esi,0x4(%esp)
08762a8c +0x06c:  mov    %edi,(%esp)
08762a8f +0x06f:  lea    -0x48(%ebp),%edi
08762a92 +0x072:  call   0875eda0 <_ZN8TaoCrypt7IntegerlSEj>  ; TaoCrypt::Integer::operator<<=(unsigned int)
08762a97 +0x077:  mov    %edi,(%esp)
08762a9a +0x07a:  mov    %eax,0x4(%esp)
08762a9e +0x07e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08762aa3 +0x083:  mov    -0x58(%ebp),%eax
08762aa6 +0x086:  mov    -0x54(%ebp),%esi
08762aa9 +0x089:  movl   $0x0,0x4(%esp)
08762ab1 +0x091:  shl    $0x2,%eax
08762ab4 +0x094:  mov    %esi,(%esp)
08762ab7 +0x097:  mov    %eax,0x8(%esp)
08762abb +0x09b:  call   0807dcc0 <_init+0x5b8>
08762ac0 +0x0a0:  mov    %esi,(%esp)
08762ac3 +0x0a3:  movb   $0x0,0x4(%esp)
08762ac8 +0x0a8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762acd +0x0ad:  lea    -0x28(%ebp),%edx
08762ad0 +0x0b0:  lea    -0xa4(%ebp),%eax
08762ad6 +0x0b6:  mov    %edx,(%esp)
08762ad9 +0x0b9:  mov    %edx,-0xc4(%ebp)
08762adf +0x0bf:  mov    %eax,0x8(%esp)
08762ae3 +0x0c3:  mov    %edi,0x4(%esp)
08762ae7 +0x0c7:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08762aec +0x0cc:  mov    -0x48(%ebp),%eax
08762aef +0x0cf:  mov    -0x44(%ebp),%esi
08762af2 +0x0d2:  shl    $0x2,%eax
08762af5 +0x0d5:  sub    $0x4,%esp
08762af8 +0x0d8:  mov    %esi,(%esp)
08762afb +0x0db:  mov    %eax,0x8(%esp)
08762aff +0x0df:  movl   $0x0,0x4(%esp)
08762b07 +0x0e7:  call   0807dcc0 <_init+0x5b8>
08762b0c +0x0ec:  mov    %esi,(%esp)
08762b0f +0x0ef:  movb   $0x0,0x4(%esp)
08762b14 +0x0f4:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762b19 +0x0f9:  mov    0x18(%ebp),%eax
08762b1c +0x0fc:  mov    -0xc4(%ebp),%edx
08762b22 +0x102:  mov    %eax,0x10(%esp)
08762b26 +0x106:  mov    0x14(%ebp),%eax
08762b29 +0x109:  mov    %edx,0x8(%esp)
08762b2d +0x10d:  mov    %eax,0xc(%esp)
08762b31 +0x111:  mov    0xc(%ebp),%eax
08762b34 +0x114:  mov    %eax,0x4(%esp)
08762b38 +0x118:  mov    -0xc0(%ebp),%eax
08762b3e +0x11e:  mov    %eax,(%esp)
08762b41 +0x121:  call   087a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>  ; TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
08762b46 +0x126:  mov    -0x28(%ebp),%eax
08762b49 +0x129:  mov    -0x24(%ebp),%esi
08762b4c +0x12c:  movl   $0x0,0x4(%esp)
08762b54 +0x134:  shl    $0x2,%eax
08762b57 +0x137:  mov    %eax,0x8(%esp)
08762b5b +0x13b:  mov    %esi,(%esp)
08762b5e +0x13e:  call   0807dcc0 <_init+0x5b8>
08762b63 +0x143:  movb   $0x0,0x4(%esp)
08762b68 +0x148:  mov    %esi,(%esp)
08762b6b +0x14b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762b70 +0x150:  mov    0x18(%ebp),%edi
08762b73 +0x153:  test   %edi,%edi
08762b75 +0x155:  je     08762c02 <+0x1e2>
08762b7b +0x15b:  mov    0xc(%ebp),%esi
08762b7e +0x15e:  lea    -0x38(%ebp),%eax
08762b81 +0x161:  xor    %edi,%edi
08762b83 +0x163:  mov    %eax,-0xbc(%ebp)
08762b89 +0x169:  lea    0x0(%esi,%eiz,1),%esi
08762b90 +0x170:  mov    -0xc0(%ebp),%eax
08762b96 +0x176:  add    $0x1,%edi
08762b99 +0x179:  mov    %esi,0x8(%esp)
08762b9d +0x17d:  mov    %eax,0x4(%esp)
08762ba1 +0x181:  mov    -0xbc(%ebp),%eax
08762ba7 +0x187:  mov    %eax,(%esp)
08762baa +0x18a:  call   0875f380 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE>  ; TaoCrypt::MontgomeryRepresentation::ConvertOut(TaoCrypt::Integer const&) const
08762baf +0x18f:  mov    -0xbc(%ebp),%eax
08762bb5 +0x195:  sub    $0x4,%esp
08762bb8 +0x198:  mov    %esi,(%esp)
08762bbb +0x19b:  add    $0x10,%esi
08762bbe +0x19e:  mov    %eax,0x4(%esp)
08762bc2 +0x1a2:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08762bc7 +0x1a7:  mov    -0x38(%ebp),%eax
08762bca +0x1aa:  mov    -0x34(%ebp),%edx
08762bcd +0x1ad:  movl   $0x0,0x4(%esp)
08762bd5 +0x1b5:  shl    $0x2,%eax
08762bd8 +0x1b8:  mov    %edx,(%esp)
08762bdb +0x1bb:  mov    %edx,-0xc4(%ebp)
08762be1 +0x1c1:  mov    %eax,0x8(%esp)
08762be5 +0x1c5:  call   0807dcc0 <_init+0x5b8>
08762bea +0x1ca:  mov    -0xc4(%ebp),%edx
08762bf0 +0x1d0:  movb   $0x0,0x4(%esp)
08762bf5 +0x1d5:  mov    %edx,(%esp)
08762bf8 +0x1d8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762bfd +0x1dd:  cmp    %edi,0x18(%ebp)
08762c00 +0x1e0:  ja     08762b90 <+0x170>
08762c02 +0x1e2:  mov    -0x52c(%ebx),%eax
08762c08 +0x1e8:  mov    -0x60(%ebp),%esi
08762c0b +0x1eb:  movl   $0x0,0x4(%esp)
08762c13 +0x1f3:  add    $0x8,%eax
08762c16 +0x1f6:  mov    %eax,-0xb0(%ebp)
08762c1c +0x1fc:  mov    -0x64(%ebp),%eax
08762c1f +0x1ff:  mov    %esi,(%esp)
08762c22 +0x202:  shl    $0x2,%eax
08762c25 +0x205:  mov    %eax,0x8(%esp)
08762c29 +0x209:  call   0807dcc0 <_init+0x5b8>
08762c2e +0x20e:  mov    %esi,(%esp)
08762c31 +0x211:  movb   $0x0,0x4(%esp)
08762c36 +0x216:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762c3b +0x21b:  mov    -0x74(%ebp),%eax
08762c3e +0x21e:  mov    -0x70(%ebp),%esi
08762c41 +0x221:  movl   $0x0,0x4(%esp)
08762c49 +0x229:  shl    $0x2,%eax
08762c4c +0x22c:  mov    %esi,(%esp)
08762c4f +0x22f:  mov    %eax,0x8(%esp)
08762c53 +0x233:  call   0807dcc0 <_init+0x5b8>
08762c58 +0x238:  mov    %esi,(%esp)
08762c5b +0x23b:  movb   $0x0,0x4(%esp)
08762c60 +0x240:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762c65 +0x245:  mov    -0x2b0(%ebx),%eax
08762c6b +0x24b:  mov    -0x80(%ebp),%esi
08762c6e +0x24e:  movl   $0x0,0x4(%esp)
08762c76 +0x256:  add    $0x8,%eax
08762c79 +0x259:  mov    %eax,-0xb0(%ebp)
08762c7f +0x25f:  mov    -0x84(%ebp),%eax
08762c85 +0x265:  mov    %esi,(%esp)
08762c88 +0x268:  shl    $0x2,%eax
08762c8b +0x26b:  mov    %eax,0x8(%esp)
08762c8f +0x26f:  call   0807dcc0 <_init+0x5b8>
08762c94 +0x274:  mov    %esi,(%esp)
08762c97 +0x277:  movb   $0x0,0x4(%esp)
08762c9c +0x27c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762ca1 +0x281:  mov    -0x94(%ebp),%eax
08762ca7 +0x287:  mov    -0x90(%ebp),%esi
08762cad +0x28d:  movl   $0x0,0x4(%esp)
08762cb5 +0x295:  shl    $0x2,%eax
08762cb8 +0x298:  mov    %esi,(%esp)
08762cbb +0x29b:  mov    %eax,0x8(%esp)
08762cbf +0x29f:  call   0807dcc0 <_init+0x5b8>
08762cc4 +0x2a4:  mov    %esi,(%esp)
08762cc7 +0x2a7:  movb   $0x0,0x4(%esp)
08762ccc +0x2ac:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762cd1 +0x2b1:  mov    -0xa4(%ebp),%eax
08762cd7 +0x2b7:  mov    -0xa0(%ebp),%esi
08762cdd +0x2bd:  movl   $0x0,0x4(%esp)
08762ce5 +0x2c5:  shl    $0x2,%eax
08762ce8 +0x2c8:  mov    %esi,(%esp)
08762ceb +0x2cb:  mov    %eax,0x8(%esp)
08762cef +0x2cf:  call   0807dcc0 <_init+0x5b8>
08762cf4 +0x2d4:  mov    %esi,(%esp)
08762cf7 +0x2d7:  movb   $0x0,0x4(%esp)
08762cfc +0x2dc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08762d01 +0x2e1:  lea    -0xc(%ebp),%esp
08762d04 +0x2e4:  pop    %ebx
08762d05 +0x2e5:  pop    %esi
08762d06 +0x2e6:  pop    %edi
08762d07 +0x2e7:  pop    %ebp
08762d08 +0x2e8:  ret
08762d09 +0x2e9:  lea    0x0(%esi,%eiz,1),%esi
08762d10 +0x2f0:  mov    0x18(%ebp),%eax
08762d13 +0x2f3:  mov    %esi,(%esp)
08762d16 +0x2f6:  mov    %eax,0x10(%esp)
08762d1a +0x2fa:  mov    0x14(%ebp),%eax
08762d1d +0x2fd:  mov    %eax,0xc(%esp)
08762d21 +0x301:  mov    0x10(%ebp),%eax
08762d24 +0x304:  mov    %eax,0x8(%esp)
08762d28 +0x308:  mov    0xc(%ebp),%eax
08762d2b +0x30b:  mov    %eax,0x4(%esp)
08762d2f +0x30f:  call   087a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>  ; TaoCrypt::AbstractRing::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer const&, TaoCrypt::Integer const*, unsigned int) const
08762d34 +0x314:  lea    -0xc(%ebp),%esp
08762d37 +0x317:  pop    %ebx
08762d38 +0x318:  pop    %esi
08762d39 +0x319:  pop    %edi
08762d3a +0x31a:  pop    %ebp
08762d3b +0x31b:  ret
08762d3c +0x31c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::SimultaneousExponentiate @ 0x8762a20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer
   const&, TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::ModularArithmetic::SimultaneousExponentiate
          (ModularArithmetic *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  void *pvVar1;
  char cVar2;
  Integer *pIVar3;
  uint uVar4;
  uint uVar5;
  undefined *local_b4 [3];
  int local_a8;
  void *local_a4;
  int local_98;
  void *local_94;
  int local_88;
  void *local_84;
  int local_78;
  void *local_74;
  int local_68;
  void *local_64;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x8762a2b;
  cVar2 = Integer::GetBit((Integer *)(this + 0xc),0);
  if (cVar2 != '\0') {
    MontgomeryRepresentation::MontgomeryRepresentation
              ((MontgomeryRepresentation *)local_b4,(Integer *)(this + 0xc));
    uVar4 = local_a8 << 5;
    Integer::Integer((Integer *)&local_5c,param_2);
    pIVar3 = (Integer *)Integer::operator<<=((Integer *)&local_5c,uVar4);
    Integer::Integer((Integer *)&local_4c,pIVar3);
    uVar4 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar4 & 0xffffff00);
    Integer::Modulo((Integer *)&local_2c);
    uVar4 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar4 & 0xffffff00);
    AbstractRing::SimultaneousExponentiate
              ((AbstractRing *)local_b4,param_1,(Integer *)&local_2c,param_3,param_4);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar4 & 0xffffff00);
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        MontgomeryRepresentation::ConvertOut((Integer *)&local_3c);
        Integer::operator=(param_1,(Integer *)&local_3c);
        pvVar1 = local_38;
        uVar5 = 0;
        memset(local_38,0,local_3c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        param_1 = param_1 + 0x10;
      } while (uVar4 < param_4);
    }
    uVar4 = 0;
    local_b4[0] = PTR_vtable_0936c66c + 8;
    memset(local_64,0,local_68 << 2);
    operator_delete__(local_64,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_74,0,local_78 << 2);
    operator_delete__(local_74,uVar4 & 0xffffff00);
    uVar4 = 0;
    local_b4[0] = PTR_vtable_0936c8e8 + 8;
    memset(local_84,0,local_88 << 2);
    operator_delete__(local_84,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_94,0,local_98 << 2);
    operator_delete__(local_94,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_a4,0,local_a8 << 2);
    operator_delete__(local_a4,uVar4 & 0xffffff00);
    return;
  }
  AbstractRing::SimultaneousExponentiate((AbstractRing *)this,param_1,param_2,param_3,param_4);
  return;
}
```
