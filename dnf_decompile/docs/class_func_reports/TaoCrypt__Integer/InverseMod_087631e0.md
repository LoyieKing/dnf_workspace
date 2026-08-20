# InverseMod

`_ZNK8TaoCrypt7Integer10InverseModERKS0_`

`TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x087631e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087631e0  _ZNK8TaoCrypt7Integer10InverseModERKS0_
#           TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const
# range [0x087631e0, 0x0876357f]
087631e0 +0x000:  push   %ebp
087631e1 +0x001:  mov    %esp,%ebp
087631e3 +0x003:  push   %edi
087631e4 +0x004:  push   %esi
087631e5 +0x005:  push   %ebx
087631e6 +0x006:  sub    $0xbc,%esp
087631ec +0x00c:  mov    0xc(%ebp),%edi
087631ef +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
087631f4 +0x014:  add    $0xc099a4,%ebx
087631fa +0x01a:  mov    0x10(%ebp),%esi
087631fd +0x01d:  cmpl   $0x1,0xc(%edi)
08763201 +0x021:  je     08763213 <+0x33>
08763203 +0x023:  mov    %esi,0x4(%esp)
08763207 +0x027:  mov    %edi,(%esp)
0876320a +0x02a:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
0876320f +0x02f:  test   %eax,%eax
08763211 +0x031:  js     08763288 <+0xa8>
08763213 +0x033:  lea    -0x34(%ebp),%eax
08763216 +0x036:  mov    %esi,0x8(%esp)
0876321a +0x03a:  mov    %eax,(%esp)
0876321d +0x03d:  mov    %eax,-0xa8(%ebp)
08763223 +0x043:  mov    %edi,0x4(%esp)
08763227 +0x047:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
0876322c +0x04c:  mov    -0xa8(%ebp),%eax
08763232 +0x052:  sub    $0x4,%esp
08763235 +0x055:  mov    %eax,0x4(%esp)
08763239 +0x059:  mov    0x8(%ebp),%eax
0876323c +0x05c:  mov    %esi,0x8(%esp)
08763240 +0x060:  mov    %eax,(%esp)
08763243 +0x063:  call   087631e0 <+0x0>
08763248 +0x068:  mov    -0x30(%ebp),%esi
0876324b +0x06b:  mov    -0x34(%ebp),%eax
0876324e +0x06e:  sub    $0x4,%esp
08763251 +0x071:  shl    $0x2,%eax
08763254 +0x074:  mov    %eax,0x8(%esp)
08763258 +0x078:  movl   $0x0,0x4(%esp)
08763260 +0x080:  mov    %esi,(%esp)
08763263 +0x083:  call   0807dcc0 <_init+0x5b8>
08763268 +0x088:  movb   $0x0,0x4(%esp)
0876326d +0x08d:  mov    %esi,(%esp)
08763270 +0x090:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08763275 +0x095:  mov    0x8(%ebp),%eax
08763278 +0x098:  lea    -0xc(%ebp),%esp
0876327b +0x09b:  pop    %ebx
0876327c +0x09c:  pop    %esi
0876327d +0x09d:  pop    %edi
0876327e +0x09e:  pop    %ebp
0876327f +0x09f:  ret    $0x4
08763282 +0x0a2:  lea    0x0(%esi),%esi
08763288 +0x0a8:  movl   $0x0,0x4(%esp)
08763290 +0x0b0:  mov    %esi,(%esp)
08763293 +0x0b3:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
08763298 +0x0b8:  test   %al,%al
0876329a +0x0ba:  jne    087632c8 <+0xe8>
0876329c +0x0bc:  mov    %esi,(%esp)
0876329f +0x0bf:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
087632a4 +0x0c4:  test   %al,%al
087632a6 +0x0c6:  je     08763410 <+0x230>
087632ac +0x0cc:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
087632b1 +0x0d1:  mov    0x8(%ebp),%edx
087632b4 +0x0d4:  mov    %edx,(%esp)
087632b7 +0x0d7:  mov    %eax,0x4(%esp)
087632bb +0x0db:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087632c0 +0x0e0:  jmp    08763275 <+0x95>
087632c2 +0x0e2:  lea    0x0(%esi),%esi
087632c8 +0x0e8:  mov    (%esi),%ecx
087632ca +0x0ea:  xor    %eax,%eax
087632cc +0x0ec:  lea    0x0(,%ecx,4),%edx
087632d3 +0x0f3:  test   %edx,%edx
087632d5 +0x0f5:  mov    %edx,-0x24(%ebp)
087632d8 +0x0f8:  je     087632ed <+0x10d>
087632da +0x0fa:  shl    $0x4,%ecx
087632dd +0x0fd:  movb   $0x0,0x4(%esp)
087632e2 +0x102:  mov    %ecx,(%esp)
087632e5 +0x105:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087632ea +0x10a:  mov    -0x24(%ebp),%edx
087632ed +0x10d:  shl    $0x2,%edx
087632f0 +0x110:  mov    %edx,-0x9c(%ebp)
087632f6 +0x116:  mov    %edx,0x8(%esp)
087632fa +0x11a:  mov    %eax,-0x20(%ebp)
087632fd +0x11d:  movl   $0x0,0x4(%esp)
08763305 +0x125:  mov    %eax,(%esp)
08763308 +0x128:  call   0807dcc0 <_init+0x5b8>
0876330d +0x12d:  mov    (%esi),%eax
0876330f +0x12f:  lea    -0x94(%ebp),%ecx
08763315 +0x135:  mov    %ecx,(%esp)
08763318 +0x138:  mov    %ecx,-0xa4(%ebp)
0876331e +0x13e:  movl   $0x0,0x4(%esp)
08763326 +0x146:  mov    %eax,0x8(%esp)
0876332a +0x14a:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0876332f +0x14f:  mov    (%esi),%eax
08763331 +0x151:  mov    -0x20(%ebp),%edx
08763334 +0x154:  mov    %eax,0x14(%esp)
08763338 +0x158:  mov    0x4(%esi),%eax
0876333b +0x15b:  mov    %edx,-0xa0(%ebp)
08763341 +0x161:  mov    %eax,0x10(%esp)
08763345 +0x165:  mov    (%edi),%eax
08763347 +0x167:  mov    %eax,0xc(%esp)
0876334b +0x16b:  mov    0x4(%edi),%eax
0876334e +0x16e:  mov    %edx,0x4(%esp)
08763352 +0x172:  mov    %eax,0x8(%esp)
08763356 +0x176:  mov    -0x90(%ebp),%eax
0876335c +0x17c:  mov    %eax,(%esp)
0876335f +0x17f:  call   0875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>  ; TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
08763364 +0x184:  mov    (%esi),%edi
08763366 +0x186:  mov    %edi,0x10(%esp)
0876336a +0x18a:  mov    0x4(%esi),%esi
0876336d +0x18d:  mov    %eax,0x8(%esp)
08763371 +0x191:  mov    -0x90(%ebp),%eax
08763377 +0x197:  mov    %esi,0xc(%esp)
0876337b +0x19b:  mov    %eax,0x4(%esp)
0876337f +0x19f:  mov    %eax,(%esp)
08763382 +0x1a2:  call   0875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>  ; TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
08763387 +0x1a7:  mov    -0xa4(%ebp),%ecx
0876338d +0x1ad:  mov    0x8(%ebp),%edi
08763390 +0x1b0:  mov    %ecx,0x4(%esp)
08763394 +0x1b4:  mov    %edi,(%esp)
08763397 +0x1b7:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0876339c +0x1bc:  mov    -0x94(%ebp),%eax
087633a2 +0x1c2:  mov    -0x90(%ebp),%esi
087633a8 +0x1c8:  movl   $0x0,0x4(%esp)
087633b0 +0x1d0:  shl    $0x2,%eax
087633b3 +0x1d3:  mov    %esi,(%esp)
087633b6 +0x1d6:  mov    %eax,0x8(%esp)
087633ba +0x1da:  call   0807dcc0 <_init+0x5b8>
087633bf +0x1df:  mov    %esi,(%esp)
087633c2 +0x1e2:  movb   $0x0,0x4(%esp)
087633c7 +0x1e7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087633cc +0x1ec:  mov    -0xa0(%ebp),%edx
087633d2 +0x1f2:  mov    -0x9c(%ebp),%eax
087633d8 +0x1f8:  movl   $0x0,0x4(%esp)
087633e0 +0x200:  mov    %edx,(%esp)
087633e3 +0x203:  mov    %eax,0x8(%esp)
087633e7 +0x207:  call   0807dcc0 <_init+0x5b8>
087633ec +0x20c:  mov    -0xa0(%ebp),%edx
087633f2 +0x212:  movb   $0x0,0x4(%esp)
087633f7 +0x217:  mov    %edx,(%esp)
087633fa +0x21a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087633ff +0x21f:  mov    0x8(%ebp),%eax
08763402 +0x222:  lea    -0xc(%ebp),%esp
08763405 +0x225:  pop    %ebx
08763406 +0x226:  pop    %esi
08763407 +0x227:  pop    %edi
08763408 +0x228:  pop    %ebp
08763409 +0x229:  ret    $0x4
0876340c +0x22c:  lea    0x0(%esi,%eiz,1),%esi
08763410 +0x230:  movl   $0x0,0x4(%esp)
08763418 +0x238:  mov    %edi,(%esp)
0876341b +0x23b:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
08763420 +0x240:  test   %al,%al
08763422 +0x242:  je     087632ac <+0xcc>
08763428 +0x248:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
0876342d +0x24d:  mov    %edi,(%esp)
08763430 +0x250:  mov    %eax,0x4(%esp)
08763434 +0x254:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08763439 +0x259:  test   %eax,%eax
0876343b +0x25b:  je     08763490 <+0x2b0>
0876343d +0x25d:  lea    -0x44(%ebp),%eax
08763440 +0x260:  mov    %eax,-0x9c(%ebp)
08763446 +0x266:  mov    %eax,(%esp)
08763449 +0x269:  mov    %edi,0x8(%esp)
0876344d +0x26d:  mov    %esi,0x4(%esp)
08763451 +0x271:  call   087631e0 <+0x0>
08763456 +0x276:  mov    -0x9c(%ebp),%edx
0876345c +0x27c:  sub    $0x4,%esp
0876345f +0x27f:  mov    %edx,(%esp)
08763462 +0x282:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
08763467 +0x287:  test   %al,%al
08763469 +0x289:  je     087634b0 <+0x2d0>
0876346b +0x28b:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08763470 +0x290:  mov    0x8(%ebp),%edi
08763473 +0x293:  mov    %edi,(%esp)
08763476 +0x296:  mov    %eax,0x4(%esp)
0876347a +0x29a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0876347f +0x29f:  mov    -0x40(%ebp),%esi
08763482 +0x2a2:  mov    -0x44(%ebp),%eax
08763485 +0x2a5:  jmp    08763251 <+0x71>
0876348a +0x2aa:  lea    0x0(%esi),%esi
08763490 +0x2b0:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
08763495 +0x2b5:  mov    0x8(%ebp),%edi
08763498 +0x2b8:  mov    %edi,(%esp)
0876349b +0x2bb:  mov    %eax,0x4(%esp)
0876349f +0x2bf:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087634a4 +0x2c4:  jmp    08763275 <+0x95>
087634a9 +0x2c9:  lea    0x0(%esi,%eiz,1),%esi
087634b0 +0x2d0:  lea    -0x74(%ebp),%ecx
087634b3 +0x2d3:  mov    %ecx,-0xa4(%ebp)
087634b9 +0x2d9:  mov    %ecx,(%esp)
087634bc +0x2dc:  movl   $0x1,0x4(%esp)
087634c4 +0x2e4:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
087634c9 +0x2e9:  mov    -0x9c(%ebp),%edx
087634cf +0x2ef:  lea    -0x54(%ebp),%eax
087634d2 +0x2f2:  mov    %eax,-0xa8(%ebp)
087634d8 +0x2f8:  mov    %edi,0x4(%esp)
087634dc +0x2fc:  mov    %eax,(%esp)
087634df +0x2ff:  mov    %edx,0x8(%esp)
087634e3 +0x303:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
087634e8 +0x308:  mov    -0xa8(%ebp),%eax
087634ee +0x30e:  lea    -0x64(%ebp),%edx
087634f1 +0x311:  mov    %edx,-0xa0(%ebp)
087634f7 +0x317:  sub    $0x4,%esp
087634fa +0x31a:  mov    %eax,0x8(%esp)
087634fe +0x31e:  mov    %esi,0x4(%esp)
08763502 +0x322:  lea    -0x84(%ebp),%esi
08763508 +0x328:  mov    %edx,(%esp)
0876350b +0x32b:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08763510 +0x330:  mov    -0xa4(%ebp),%ecx
08763516 +0x336:  mov    -0xa0(%ebp),%edx
0876351c +0x33c:  sub    $0x4,%esp
0876351f +0x33f:  mov    %ecx,0x8(%esp)
08763523 +0x343:  mov    %edx,0x4(%esp)
08763527 +0x347:  mov    %esi,(%esp)
0876352a +0x34a:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
0876352f +0x34f:  sub    $0x4,%esp
08763532 +0x352:  mov    %edi,0x8(%esp)
08763536 +0x356:  mov    0x8(%ebp),%edi
08763539 +0x359:  mov    %esi,0x4(%esp)
0876353d +0x35d:  mov    %edi,(%esp)
08763540 +0x360:  call   08763150 <_ZNK8TaoCrypt7Integer9DividedByERKS0_>  ; TaoCrypt::Integer::DividedBy(TaoCrypt::Integer const&) const
08763545 +0x365:  sub    $0x4,%esp
08763548 +0x368:  mov    %esi,(%esp)
0876354b +0x36b:  call   08763c70 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x450>  ; TaoCrypt::Integer::IsSquare() const+0x450
08763550 +0x370:  mov    -0xa0(%ebp),%edx
08763556 +0x376:  mov    %edx,(%esp)
08763559 +0x379:  call   08763c70 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x450>  ; TaoCrypt::Integer::IsSquare() const+0x450
0876355e +0x37e:  mov    -0xa8(%ebp),%eax
08763564 +0x384:  mov    %eax,(%esp)
08763567 +0x387:  call   08763c70 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x450>  ; TaoCrypt::Integer::IsSquare() const+0x450
0876356c +0x38c:  mov    -0xa4(%ebp),%ecx
08763572 +0x392:  mov    %ecx,(%esp)
08763575 +0x395:  call   08763c70 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x450>  ; TaoCrypt::Integer::IsSquare() const+0x450
0876357a +0x39a:  jmp    0876347f <+0x29f>
0876357f +0x39f:  nop
```

## 反编译 C

```c
// TaoCrypt::Integer::InverseMod @ 0x87631e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::InverseMod(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::InverseMod(Integer *param_1)

{
  uint *__s;
  char cVar1;
  int iVar2;
  Integer *pIVar3;
  size_t __n;
  void *__s_00;
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  uint uVar4;
  int local_98;
  uint *local_94;
  Integer local_88 [16];
  Integer local_78 [16];
  Integer local_68 [16];
  Integer local_58 [16];
  int local_48;
  void *local_44;
  int local_38;
  void *local_34;
  int local_28;
  uint *local_24;
  
  if ((*(int *)(in_stack_00000008 + 0xc) == 1) ||
     (iVar2 = Compare(in_stack_00000008,in_stack_0000000c), -1 < iVar2)) {
    Modulo((Integer *)&local_38);
    InverseMod(param_1);
    __s_00 = local_34;
  }
  else {
    uVar4 = 0;
    cVar1 = GetBit(in_stack_0000000c,0);
    if (cVar1 != '\0') {
      local_24 = (uint *)0x0;
      local_28 = *(int *)in_stack_0000000c * 4;
      if (local_28 != 0) {
        local_24 = operator_new__(*(int *)in_stack_0000000c << 4,uVar4 & 0xffffff00);
      }
      __n = local_28 << 2;
      memset(local_24,0,__n);
      Integer((Integer *)&local_98,0,*(uint *)in_stack_0000000c);
      __s = local_24;
      uVar4 = AlmostInverse(local_94,local_24,*(uint **)(in_stack_00000008 + 4),
                            *(uint *)in_stack_00000008,*(uint **)(in_stack_0000000c + 4),
                            *(uint *)in_stack_0000000c);
      DivideByPower2Mod(local_94,local_94,uVar4,*(uint **)(in_stack_0000000c + 4),
                        *(uint *)in_stack_0000000c);
      Integer(param_1,(Integer *)&local_98);
      uVar4 = 0;
      memset(local_94,0,local_98 << 2);
      operator_delete__(local_94,uVar4 & 0xffffff00);
      uVar4 = 0;
      memset(__s,0,__n);
      operator_delete__(__s,uVar4 & 0xffffff00);
      return param_1;
    }
    cVar1 = operator!(in_stack_0000000c);
    if ((cVar1 != '\0') || (cVar1 = GetBit(in_stack_00000008,0), cVar1 == '\0')) {
      pIVar3 = (Integer *)Zero();
      Integer(param_1,pIVar3);
      return param_1;
    }
    pIVar3 = (Integer *)One();
    iVar2 = Compare(in_stack_00000008,pIVar3);
    if (iVar2 == 0) {
      pIVar3 = (Integer *)One();
      Integer(param_1,pIVar3);
      return param_1;
    }
    InverseMod((Integer *)&local_48);
    cVar1 = operator!((Integer *)&local_48);
    if (cVar1 == '\0') {
      Integer(local_78,1);
      Minus(local_58);
      Times(local_68);
      Plus(local_88);
      DividedBy(param_1);
      ~Integer(local_88);
      ~Integer(local_68);
      ~Integer(local_58);
      ~Integer(local_78);
      local_38 = local_48;
      __s_00 = local_44;
    }
    else {
      pIVar3 = (Integer *)Zero();
      Integer(param_1,pIVar3);
      local_38 = local_48;
      __s_00 = local_44;
    }
  }
  uVar4 = 0;
  memset(__s_00,0,local_38 << 2);
  operator_delete__(__s_00,uVar4 & 0xffffff00);
  return param_1;
}
```
