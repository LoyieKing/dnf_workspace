# DivideByPowerOf2

`_ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j`

`TaoCrypt::Integer::DivideByPowerOf2(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761ac0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761ac0  _ZN8TaoCrypt7Integer16DivideByPowerOf2ERS0_S1_RKS0_j
#           TaoCrypt::Integer::DivideByPowerOf2(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&, unsigned int)
# range [0x08761ac0, 0x08761e49]
08761ac0 +0x000:  push   %ebp
08761ac1 +0x001:  mov    %esp,%ebp
08761ac3 +0x003:  push   %edi
08761ac4 +0x004:  push   %esi
08761ac5 +0x005:  push   %ebx
08761ac6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08761acb +0x00b:  add    $0xc0b0cd,%ebx
08761ad1 +0x011:  sub    $0x4c,%esp
08761ad4 +0x014:  mov    0xc(%ebp),%edx
08761ad7 +0x017:  mov    0x10(%ebp),%eax
08761ada +0x01a:  mov    %edx,(%esp)
08761add +0x01d:  mov    %eax,0x4(%esp)
08761ae1 +0x021:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08761ae6 +0x026:  mov    0x14(%ebp),%ecx
08761ae9 +0x029:  mov    0xc(%ebp),%eax
08761aec +0x02c:  mov    %ecx,0x4(%esp)
08761af0 +0x030:  mov    %eax,(%esp)
08761af3 +0x033:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
08761af8 +0x038:  mov    0x10(%ebp),%edx
08761afb +0x03b:  mov    0x14(%ebp),%esi
08761afe +0x03e:  mov    %edx,(%esp)
08761b01 +0x041:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08761b06 +0x046:  add    $0x1f,%esi
08761b09 +0x049:  shr    $0x5,%esi
08761b0c +0x04c:  cmp    %esi,%eax
08761b0e +0x04e:  jb     08761c48 <+0x188>
08761b14 +0x054:  cmp    $0x8,%esi
08761b17 +0x057:  jbe    08761d38 <+0x278>
08761b1d +0x05d:  cmp    $0x10,%esi
08761b20 +0x060:  mov    $0x10,%edi
08761b25 +0x065:  jbe    08761b50 <+0x90>
08761b27 +0x067:  cmp    $0x20,%esi
08761b2a +0x06a:  mov    $0x20,%di
08761b2e +0x06e:  jbe    08761b50 <+0x90>
08761b30 +0x070:  cmp    $0x40,%esi
08761b33 +0x073:  mov    $0x40,%di
08761b37 +0x077:  jbe    08761b50 <+0x90>
08761b39 +0x079:  lea    -0x1(%esi),%eax
08761b3c +0x07c:  mov    $0x1,%di
08761b40 +0x080:  mov    %eax,(%esp)
08761b43 +0x083:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
08761b48 +0x088:  mov    %eax,%ecx
08761b4a +0x08a:  shl    %cl,%edi
08761b4c +0x08c:  lea    0x0(%esi,%eiz,1),%esi
08761b50 +0x090:  mov    0x8(%ebp),%eax
08761b53 +0x093:  mov    (%eax),%ecx
08761b55 +0x095:  mov    0x4(%eax),%edx
08761b58 +0x098:  cmp    %edi,%ecx
08761b5a +0x09a:  je     08761bbe <+0xfe>
08761b5c +0x09c:  test   %edi,%edi
08761b5e +0x09e:  movl   $0x0,-0x3c(%ebp)
08761b65 +0x0a5:  jne    08761e00 <+0x340>
08761b6b +0x0ab:  cmp    %ecx,%edi
08761b6d +0x0ad:  mov    %ecx,%eax
08761b6f +0x0af:  cmovbe %edi,%eax
08761b72 +0x0b2:  shl    $0x2,%eax
08761b75 +0x0b5:  mov    %eax,0x8(%esp)
08761b79 +0x0b9:  mov    -0x3c(%ebp),%eax
08761b7c +0x0bc:  mov    %edx,0x4(%esp)
08761b80 +0x0c0:  mov    %edx,-0x44(%ebp)
08761b83 +0x0c3:  mov    %ecx,-0x40(%ebp)
08761b86 +0x0c6:  mov    %eax,(%esp)
08761b89 +0x0c9:  call   0807d8a0 <_init+0x198>
08761b8e +0x0ce:  mov    -0x40(%ebp),%ecx
08761b91 +0x0d1:  mov    -0x44(%ebp),%edx
08761b94 +0x0d4:  movl   $0x0,0x4(%esp)
08761b9c +0x0dc:  shl    $0x2,%ecx
08761b9f +0x0df:  mov    %ecx,0x8(%esp)
08761ba3 +0x0e3:  mov    %edx,(%esp)
08761ba6 +0x0e6:  call   0807dcc0 <_init+0x5b8>
08761bab +0x0eb:  mov    -0x44(%ebp),%edx
08761bae +0x0ee:  movb   $0x0,0x4(%esp)
08761bb3 +0x0f3:  mov    %edx,(%esp)
08761bb6 +0x0f6:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761bbb +0x0fb:  mov    -0x3c(%ebp),%edx
08761bbe +0x0fe:  mov    0x8(%ebp),%ecx
08761bc1 +0x101:  test   %esi,%esi
08761bc3 +0x103:  mov    0x10(%ebp),%eax
08761bc6 +0x106:  mov    %edx,0x4(%ecx)
08761bc9 +0x109:  mov    %edi,(%ecx)
08761bcb +0x10b:  mov    0x4(%eax),%ecx
08761bce +0x10e:  je     08761bed <+0x12d>
08761bd0 +0x110:  xor    %eax,%eax
08761bd2 +0x112:  lea    0x0(%esi),%esi
08761bd8 +0x118:  mov    (%ecx,%eax,4),%edi
08761bdb +0x11b:  mov    %edi,(%edx,%eax,4)
08761bde +0x11e:  add    $0x1,%eax
08761be1 +0x121:  cmp    %eax,%esi
08761be3 +0x123:  ja     08761bd8 <+0x118>
08761be5 +0x125:  mov    0x8(%ebp),%edx
08761be8 +0x128:  mov    (%edx),%edi
08761bea +0x12a:  mov    0x4(%edx),%edx
08761bed +0x12d:  sub    %esi,%edi
08761bef +0x12f:  lea    (%edx,%esi,4),%edx
08761bf2 +0x132:  je     08761c06 <+0x146>
08761bf4 +0x134:  xor    %eax,%eax
08761bf6 +0x136:  xchg   %ax,%ax
08761bf8 +0x138:  movl   $0x0,(%edx,%eax,4)
08761bff +0x13f:  add    $0x1,%eax
08761c02 +0x142:  cmp    %eax,%edi
08761c04 +0x144:  ja     08761bf8 <+0x138>
08761c06 +0x146:  mov    0x14(%ebp),%ecx
08761c09 +0x149:  and    $0x1f,%ecx
08761c0c +0x14c:  je     08761c27 <+0x167>
08761c0e +0x14e:  mov    0x8(%ebp),%edx
08761c11 +0x151:  lea    -0x4(,%esi,4),%eax
08761c18 +0x158:  add    0x4(%edx),%eax
08761c1b +0x15b:  mov    $0x1,%edx
08761c20 +0x160:  shl    %cl,%edx
08761c22 +0x162:  sub    $0x1,%edx
08761c25 +0x165:  and    %edx,(%eax)
08761c27 +0x167:  mov    0x8(%ebp),%edx
08761c2a +0x16a:  mov    0x10(%ebp),%ecx
08761c2d +0x16d:  movl   $0x0,0xc(%edx)
08761c34 +0x174:  cmpl   $0x1,0xc(%ecx)
08761c38 +0x178:  je     08761d48 <+0x288>
08761c3e +0x17e:  lea    -0xc(%ebp),%esp
08761c41 +0x181:  pop    %ebx
08761c42 +0x182:  pop    %esi
08761c43 +0x183:  pop    %edi
08761c44 +0x184:  pop    %ebp
08761c45 +0x185:  ret
08761c46 +0x186:  xchg   %ax,%ax
08761c48 +0x188:  mov    0x10(%ebp),%ecx
08761c4b +0x18b:  mov    %ecx,(%esp)
08761c4e +0x18e:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
08761c53 +0x193:  cmp    $0x8,%eax
08761c56 +0x196:  jbe    08761d28 <+0x268>
08761c5c +0x19c:  cmp    $0x10,%eax
08761c5f +0x19f:  mov    $0x10,%esi
08761c64 +0x1a4:  jbe    08761c90 <+0x1d0>
08761c66 +0x1a6:  cmp    $0x20,%eax
08761c69 +0x1a9:  mov    $0x20,%si
08761c6d +0x1ad:  jbe    08761c90 <+0x1d0>
08761c6f +0x1af:  cmp    $0x40,%eax
08761c72 +0x1b2:  mov    $0x40,%si
08761c76 +0x1b6:  jbe    08761c90 <+0x1d0>
08761c78 +0x1b8:  sub    $0x1,%eax
08761c7b +0x1bb:  mov    $0x1,%si
08761c7f +0x1bf:  mov    %eax,(%esp)
08761c82 +0x1c2:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
08761c87 +0x1c7:  mov    %eax,%ecx
08761c89 +0x1c9:  shl    %cl,%esi
08761c8b +0x1cb:  nop
08761c8c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
08761c90 +0x1d0:  mov    0x8(%ebp),%eax
08761c93 +0x1d3:  mov    (%eax),%edx
08761c95 +0x1d5:  mov    0x4(%eax),%edi
08761c98 +0x1d8:  cmp    %esi,%edx
08761c9a +0x1da:  je     08761cf2 <+0x232>
08761c9c +0x1dc:  xor    %ecx,%ecx
08761c9e +0x1de:  test   %esi,%esi
08761ca0 +0x1e0:  jne    08761e28 <+0x368>
08761ca6 +0x1e6:  cmp    %edx,%esi
08761ca8 +0x1e8:  mov    %edx,%eax
08761caa +0x1ea:  cmovbe %esi,%eax
08761cad +0x1ed:  shl    $0x2,%eax
08761cb0 +0x1f0:  mov    %ecx,(%esp)
08761cb3 +0x1f3:  mov    %ecx,-0x40(%ebp)
08761cb6 +0x1f6:  mov    %edi,0x4(%esp)
08761cba +0x1fa:  mov    %edx,-0x44(%ebp)
08761cbd +0x1fd:  mov    %eax,0x8(%esp)
08761cc1 +0x201:  call   0807d8a0 <_init+0x198>
08761cc6 +0x206:  mov    -0x44(%ebp),%edx
08761cc9 +0x209:  mov    %edi,(%esp)
08761ccc +0x20c:  movl   $0x0,0x4(%esp)
08761cd4 +0x214:  shl    $0x2,%edx
08761cd7 +0x217:  mov    %edx,0x8(%esp)
08761cdb +0x21b:  call   0807dcc0 <_init+0x5b8>
08761ce0 +0x220:  mov    %edi,(%esp)
08761ce3 +0x223:  movb   $0x0,0x4(%esp)
08761ce8 +0x228:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761ced +0x22d:  mov    -0x40(%ebp),%ecx
08761cf0 +0x230:  mov    %ecx,%edi
08761cf2 +0x232:  mov    0x8(%ebp),%edx
08761cf5 +0x235:  test   %esi,%esi
08761cf7 +0x237:  mov    0x10(%ebp),%eax
08761cfa +0x23a:  mov    %edi,0x4(%edx)
08761cfd +0x23d:  mov    %esi,(%edx)
08761cff +0x23f:  mov    0x4(%eax),%ecx
08761d02 +0x242:  je     08761c27 <+0x167>
08761d08 +0x248:  xor    %eax,%eax
08761d0a +0x24a:  lea    0x0(%esi),%esi
08761d10 +0x250:  mov    (%ecx,%eax,4),%edx
08761d13 +0x253:  mov    %edx,(%edi,%eax,4)
08761d16 +0x256:  add    $0x1,%eax
08761d19 +0x259:  cmp    %esi,%eax
08761d1b +0x25b:  jb     08761d10 <+0x250>
08761d1d +0x25d:  jmp    08761c27 <+0x167>
08761d22 +0x262:  lea    0x0(%esi),%esi
08761d28 +0x268:  mov    -0x6678b8(%ebx,%eax,4),%esi
08761d2f +0x26f:  jmp    08761c90 <+0x1d0>
08761d34 +0x274:  lea    0x0(%esi,%eiz,1),%esi
08761d38 +0x278:  mov    -0x6678b8(%ebx,%esi,4),%edi
08761d3f +0x27f:  jmp    08761b50 <+0x90>
08761d44 +0x284:  lea    0x0(%esi,%eiz,1),%esi
08761d48 +0x288:  mov    %edx,(%esp)
08761d4b +0x28b:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
08761d50 +0x290:  test   %al,%al
08761d52 +0x292:  jne    08761c3e <+0x17e>
08761d58 +0x298:  mov    0xc(%ebp),%eax
08761d5b +0x29b:  lea    -0x28(%ebp),%edi
08761d5e +0x29e:  lea    -0x38(%ebp),%esi
08761d61 +0x2a1:  mov    %eax,(%esp)
08761d64 +0x2a4:  call   08761570 <_ZN8TaoCrypt7IntegermmEv>  ; TaoCrypt::Integer::operator--()
08761d69 +0x2a9:  mov    0x14(%ebp),%edx
08761d6c +0x2ac:  mov    %edi,(%esp)
08761d6f +0x2af:  mov    %edx,0x4(%esp)
08761d73 +0x2b3:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
08761d78 +0x2b8:  mov    0x8(%ebp),%ecx
08761d7b +0x2bb:  sub    $0x4,%esp
08761d7e +0x2be:  mov    %ecx,0x8(%esp)
08761d82 +0x2c2:  mov    %edi,0x4(%esp)
08761d86 +0x2c6:  mov    %esi,(%esp)
08761d89 +0x2c9:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
08761d8e +0x2ce:  mov    0x8(%ebp),%eax
08761d91 +0x2d1:  sub    $0x4,%esp
08761d94 +0x2d4:  mov    %esi,0x4(%esp)
08761d98 +0x2d8:  mov    %eax,(%esp)
08761d9b +0x2db:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08761da0 +0x2e0:  mov    -0x38(%ebp),%eax
08761da3 +0x2e3:  mov    -0x34(%ebp),%esi
08761da6 +0x2e6:  movl   $0x0,0x4(%esp)
08761dae +0x2ee:  shl    $0x2,%eax
08761db1 +0x2f1:  mov    %esi,(%esp)
08761db4 +0x2f4:  mov    %eax,0x8(%esp)
08761db8 +0x2f8:  call   0807dcc0 <_init+0x5b8>
08761dbd +0x2fd:  mov    %esi,(%esp)
08761dc0 +0x300:  movb   $0x0,0x4(%esp)
08761dc5 +0x305:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761dca +0x30a:  mov    -0x28(%ebp),%eax
08761dcd +0x30d:  mov    -0x24(%ebp),%esi
08761dd0 +0x310:  movl   $0x0,0x4(%esp)
08761dd8 +0x318:  shl    $0x2,%eax
08761ddb +0x31b:  mov    %eax,0x8(%esp)
08761ddf +0x31f:  mov    %esi,(%esp)
08761de2 +0x322:  call   0807dcc0 <_init+0x5b8>
08761de7 +0x327:  movb   $0x0,0x4(%esp)
08761dec +0x32c:  mov    %esi,(%esp)
08761def +0x32f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761df4 +0x334:  jmp    08761c3e <+0x17e>
08761df9 +0x339:  lea    0x0(%esi,%eiz,1),%esi
08761e00 +0x340:  lea    0x0(,%edi,4),%eax
08761e07 +0x347:  mov    %edx,-0x44(%ebp)
08761e0a +0x34a:  mov    %ecx,-0x40(%ebp)
08761e0d +0x34d:  movb   $0x0,0x4(%esp)
08761e12 +0x352:  mov    %eax,(%esp)
08761e15 +0x355:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08761e1a +0x35a:  mov    -0x40(%ebp),%ecx
08761e1d +0x35d:  mov    -0x44(%ebp),%edx
08761e20 +0x360:  mov    %eax,-0x3c(%ebp)
08761e23 +0x363:  jmp    08761b6b <+0xab>
08761e28 +0x368:  lea    0x0(,%esi,4),%eax
08761e2f +0x36f:  mov    %edx,-0x44(%ebp)
08761e32 +0x372:  movb   $0x0,0x4(%esp)
08761e37 +0x377:  mov    %eax,(%esp)
08761e3a +0x37a:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08761e3f +0x37f:  mov    -0x44(%ebp),%edx
08761e42 +0x382:  mov    %eax,%ecx
08761e44 +0x384:  jmp    08761ca6 <+0x1e6>
08761e49 +0x389:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::DivideByPowerOf2 @ 0x8761ac0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::DivideByPowerOf2(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer
   const&, unsigned int) */

void TaoCrypt::Integer::DivideByPowerOf2
               (Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  void *__dest;
  uint uVar8;
  uint uVar9;
  void *local_40;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x8761acb;
  operator=(param_2,param_3);
  uVar9 = param_4;
  operator>>=(param_2,param_4);
  uVar6 = WordCount(param_3);
  uVar8 = param_4 + 0x1f >> 5;
  if (uVar6 < uVar8) {
    uVar6 = WordCount(param_3);
    if (uVar6 < 9) {
      uVar8 = (&RoundupSizeTable)[uVar6];
    }
    else {
      uVar8 = 0x10;
      if (((0x10 < uVar6) && (uVar8 = 0x20, 0x20 < uVar6)) && (uVar8 = 0x40, 0x40 < uVar6)) {
        bVar4 = BitPrecision(uVar6 - 1);
        uVar8 = 1 << (bVar4 & 0x1f);
      }
    }
    uVar6 = *(uint *)param_1;
    pvVar2 = *(void **)(param_1 + 4);
    __dest = pvVar2;
    if (uVar6 != uVar8) {
      __dest = (void *)0x0;
      if (uVar8 != 0) {
        __dest = operator_new__(uVar8 * 4,uVar9 & 0xffffff00);
      }
      uVar9 = uVar6;
      if (uVar8 <= uVar6) {
        uVar9 = uVar8;
      }
      memcpy(__dest,pvVar2,uVar9 << 2);
      uVar9 = 0;
      memset(pvVar2,0,uVar6 << 2);
      operator_delete__(pvVar2,uVar9 & 0xffffff00);
    }
    *(void **)(param_1 + 4) = __dest;
    *(uint *)param_1 = uVar8;
    iVar3 = *(int *)(param_3 + 4);
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)__dest + uVar9 * 4) = *(undefined4 *)(iVar3 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
  }
  else {
    if (uVar8 < 9) {
      uVar6 = (&RoundupSizeTable)[uVar8];
    }
    else {
      uVar6 = 0x10;
      if (((0x10 < uVar8) && (uVar6 = 0x20, 0x20 < uVar8)) && (uVar6 = 0x40, 0x40 < uVar8)) {
        bVar4 = BitPrecision(uVar8 - 1);
        uVar6 = 1 << (bVar4 & 0x1f);
      }
    }
    uVar1 = *(uint *)param_1;
    pvVar2 = *(void **)(param_1 + 4);
    local_40 = pvVar2;
    if (uVar1 != uVar6) {
      local_40 = (void *)0x0;
      if (uVar6 != 0) {
        local_40 = operator_new__(uVar6 * 4,uVar9 & 0xffffff00);
      }
      uVar9 = uVar1;
      if (uVar6 <= uVar1) {
        uVar9 = uVar6;
      }
      memcpy(local_40,pvVar2,uVar9 << 2);
      uVar9 = 0;
      memset(pvVar2,0,uVar1 << 2);
      operator_delete__(pvVar2,uVar9 & 0xffffff00);
    }
    *(void **)(param_1 + 4) = local_40;
    *(uint *)param_1 = uVar6;
    iVar3 = *(int *)(param_3 + 4);
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_40 + uVar9 * 4) = *(undefined4 *)(iVar3 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
      uVar6 = *(uint *)param_1;
      local_40 = *(void **)(param_1 + 4);
    }
    if (uVar6 != uVar8) {
      uVar9 = 0;
      do {
        *(undefined4 *)((int)local_40 + uVar9 * 4 + uVar8 * 4) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6 - uVar8);
    }
    if ((param_4 & 0x1f) != 0) {
      puVar7 = (uint *)(uVar8 * 4 + -4 + *(int *)(param_1 + 4));
      *puVar7 = *puVar7 & (1 << (sbyte)(param_4 & 0x1f)) - 1U;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(int *)(param_3 + 0xc) == 1) && (cVar5 = operator!(param_1), cVar5 == '\0')) {
    operator--(param_2);
    Power2((Integer *)&local_2c,param_4);
    Minus((Integer *)&local_3c);
    operator=(param_1,(Integer *)&local_3c);
    uVar9 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar9 & 0xffffff00);
    uVar9 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar9 & 0xffffff00);
  }
  return;
}
```
