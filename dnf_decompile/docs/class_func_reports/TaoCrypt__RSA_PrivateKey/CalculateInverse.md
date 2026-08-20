# CalculateInverse

`_ZNK8TaoCrypt14RSA_PrivateKey16CalculateInverseERNS_21RandomNumberGeneratorERKNS_7IntegerE`

`TaoCrypt::RSA_PrivateKey::CalculateInverse(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_PrivateKey` | `0x08768000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08768000  _ZNK8TaoCrypt14RSA_PrivateKey16CalculateInverseERNS_21RandomNumberGeneratorERKNS_7IntegerE
#           TaoCrypt::RSA_PrivateKey::CalculateInverse(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&) const
# range [0x08768000, 0x0876839f]
08768000 +0x000:  push   %ebp
08768001 +0x001:  mov    %esp,%ebp
08768003 +0x003:  push   %edi
08768004 +0x004:  push   %esi
08768005 +0x005:  push   %ebx
08768006 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0876800b +0x00b:  add    $0xc04b8d,%ebx
08768011 +0x011:  sub    $0xec,%esp
08768017 +0x017:  mov    0xc(%ebp),%esi
0876801a +0x01a:  lea    -0xa4(%ebp),%edi
08768020 +0x020:  mov    %edi,-0x9c(%ebp)
08768026 +0x026:  mov    %esi,0x4(%esp)
0876802a +0x02a:  mov    -0x40(%ebx),%eax
08768030 +0x030:  add    $0x8,%eax
08768033 +0x033:  mov    %eax,-0xa0(%ebp)
08768039 +0x039:  mov    -0x2b0(%ebx),%eax
0876803f +0x03f:  add    $0x8,%eax
08768042 +0x042:  mov    %eax,-0xb4(%ebp)
08768048 +0x048:  mov    %eax,-0xa4(%ebp)
0876804e +0x04e:  lea    -0x98(%ebp),%eax
08768054 +0x054:  mov    %eax,-0xb0(%ebp)
0876805a +0x05a:  mov    %eax,(%esp)
0876805d +0x05d:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08768062 +0x062:  mov    (%esi),%eax
08768064 +0x064:  movl   $0x0,0x4(%esp)
0876806c +0x06c:  mov    %eax,0x8(%esp)
08768070 +0x070:  lea    -0x88(%ebp),%eax
08768076 +0x076:  mov    %eax,(%esp)
08768079 +0x079:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0876807e +0x07e:  lea    -0x78(%ebp),%edx
08768081 +0x081:  mov    %edx,-0xb8(%ebp)
08768087 +0x087:  mov    %edx,(%esp)
0876808a +0x08a:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0876808f +0x08f:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
08768094 +0x094:  lea    -0x38(%ebp),%edx
08768097 +0x097:  mov    %edx,-0xc0(%ebp)
0876809d +0x09d:  mov    %edx,(%esp)
087680a0 +0x0a0:  mov    %esi,0x4(%esp)
087680a4 +0x0a4:  mov    %eax,0x8(%esp)
087680a8 +0x0a8:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
087680ad +0x0ad:  sub    $0x4,%esp
087680b0 +0x0b0:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
087680b5 +0x0b5:  mov    -0xc0(%ebp),%edx
087680bb +0x0bb:  lea    -0x28(%ebp),%ecx
087680be +0x0be:  mov    %ecx,(%esp)
087680c1 +0x0c1:  mov    %ecx,-0xbc(%ebp)
087680c7 +0x0c7:  mov    %edx,0xc(%esp)
087680cb +0x0cb:  mov    %eax,0x8(%esp)
087680cf +0x0cf:  mov    0x10(%ebp),%eax
087680d2 +0x0d2:  mov    %eax,0x4(%esp)
087680d6 +0x0d6:  call   087614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>  ; TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087680db +0x0db:  mov    -0x38(%ebp),%eax
087680de +0x0de:  mov    -0x34(%ebp),%edx
087680e1 +0x0e1:  movl   $0x0,0x4(%esp)
087680e9 +0x0e9:  shl    $0x2,%eax
087680ec +0x0ec:  mov    %edx,(%esp)
087680ef +0x0ef:  mov    %edx,-0xc0(%ebp)
087680f5 +0x0f5:  mov    %eax,0x8(%esp)
087680f9 +0x0f9:  call   0807dcc0 <_init+0x5b8>
087680fe +0x0fe:  mov    -0xc0(%ebp),%edx
08768104 +0x104:  movb   $0x0,0x4(%esp)
08768109 +0x109:  mov    %edx,(%esp)
0876810c +0x10c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08768111 +0x111:  lea    -0x48(%ebp),%eax
08768114 +0x114:  mov    -0xbc(%ebp),%ecx
0876811a +0x11a:  mov    %eax,-0xac(%ebp)
08768120 +0x120:  mov    -0xac(%ebp),%edx
08768126 +0x126:  lea    0x10(%esi),%eax
08768129 +0x129:  mov    %eax,0xc(%esp)
0876812d +0x12d:  mov    %edi,0x4(%esp)
08768131 +0x131:  mov    %ecx,0x8(%esp)
08768135 +0x135:  mov    %edx,(%esp)
08768138 +0x138:  call   087a3e60 <_ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_>  ; TaoCrypt::AbstractRing::Exponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
0876813d +0x13d:  lea    -0x58(%ebp),%eax
08768140 +0x140:  mov    -0xac(%ebp),%edx
08768146 +0x146:  mov    %eax,-0xcc(%ebp)
0876814c +0x14c:  mov    0x14(%ebp),%eax
0876814f +0x14f:  sub    $0x4,%esp
08768152 +0x152:  mov    %eax,0x8(%esp)
08768156 +0x156:  mov    -0xcc(%ebp),%eax
0876815c +0x15c:  mov    %edx,0x4(%esp)
08768160 +0x160:  mov    %eax,(%esp)
08768163 +0x163:  call   08762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>  ; TaoCrypt::Integer::Times(TaoCrypt::Integer const&) const
08768168 +0x168:  mov    -0xb0(%ebp),%edx
0876816e +0x16e:  lea    -0x68(%ebp),%eax
08768171 +0x171:  mov    %eax,-0xc0(%ebp)
08768177 +0x177:  sub    $0x4,%esp
0876817a +0x17a:  mov    %edx,0x8(%esp)
0876817e +0x17e:  mov    -0xcc(%ebp),%edx
08768184 +0x184:  mov    %eax,(%esp)
08768187 +0x187:  mov    %edx,0x4(%esp)
0876818b +0x18b:  call   08762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>  ; TaoCrypt::Integer::Modulo(TaoCrypt::Integer const&) const
08768190 +0x190:  mov    -0xc0(%ebp),%eax
08768196 +0x196:  sub    $0x4,%esp
08768199 +0x199:  mov    %eax,0x4(%esp)
0876819d +0x19d:  mov    -0xb8(%ebp),%eax
087681a3 +0x1a3:  mov    %eax,(%esp)
087681a6 +0x1a6:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087681ab +0x1ab:  mov    -0x64(%ebp),%edx
087681ae +0x1ae:  movl   $0x0,0x4(%esp)
087681b6 +0x1b6:  mov    %edx,(%esp)
087681b9 +0x1b9:  mov    %edx,-0xc0(%ebp)
087681bf +0x1bf:  mov    %eax,-0xb0(%ebp)
087681c5 +0x1c5:  mov    -0x68(%ebp),%eax
087681c8 +0x1c8:  shl    $0x2,%eax
087681cb +0x1cb:  mov    %eax,0x8(%esp)
087681cf +0x1cf:  call   0807dcc0 <_init+0x5b8>
087681d4 +0x1d4:  mov    -0xc0(%ebp),%edx
087681da +0x1da:  movb   $0x0,0x4(%esp)
087681df +0x1df:  mov    %edx,(%esp)
087681e2 +0x1e2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087681e7 +0x1e7:  mov    -0x58(%ebp),%eax
087681ea +0x1ea:  mov    -0x54(%ebp),%edx
087681ed +0x1ed:  movl   $0x0,0x4(%esp)
087681f5 +0x1f5:  shl    $0x2,%eax
087681f8 +0x1f8:  mov    %edx,(%esp)
087681fb +0x1fb:  mov    %edx,-0xc0(%ebp)
08768201 +0x201:  mov    %eax,0x8(%esp)
08768205 +0x205:  call   0807dcc0 <_init+0x5b8>
0876820a +0x20a:  mov    -0xc0(%ebp),%edx
08768210 +0x210:  movb   $0x0,0x4(%esp)
08768215 +0x215:  mov    %edx,(%esp)
08768218 +0x218:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876821d +0x21d:  mov    -0xb0(%ebp),%edx
08768223 +0x223:  mov    -0xac(%ebp),%eax
08768229 +0x229:  mov    %edx,0x4(%esp)
0876822d +0x22d:  mov    %eax,(%esp)
08768230 +0x230:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08768235 +0x235:  lea    0x70(%esi),%eax
08768238 +0x238:  mov    -0xac(%ebp),%edx
0876823e +0x23e:  mov    %eax,0x18(%esp)
08768242 +0x242:  lea    0x30(%esi),%eax
08768245 +0x245:  mov    %eax,0x14(%esp)
08768249 +0x249:  lea    0x40(%esi),%eax
0876824c +0x24c:  mov    %eax,0x10(%esp)
08768250 +0x250:  lea    0x50(%esi),%eax
08768253 +0x253:  add    $0x60,%esi
08768256 +0x256:  mov    %eax,0xc(%esp)
0876825a +0x25a:  mov    0x8(%ebp),%eax
0876825d +0x25d:  mov    %edx,0x4(%esp)
08768261 +0x261:  mov    %esi,0x8(%esp)
08768265 +0x265:  mov    %eax,(%esp)
08768268 +0x268:  call   08762810 <_ZN8TaoCrypt11ModularRootERKNS_7IntegerES2_S2_S2_S2_S2_>  ; TaoCrypt::ModularRoot(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0876826d +0x26d:  mov    -0xbc(%ebp),%ecx
08768273 +0x273:  sub    $0x4,%esp
08768276 +0x276:  mov    %ecx,0x4(%esp)
0876827a +0x27a:  mov    %edi,(%esp)
0876827d +0x27d:  call   08764d20 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x1500>  ; TaoCrypt::Integer::IsSquare() const+0x1500
08768282 +0x282:  mov    0x8(%ebp),%edx
08768285 +0x285:  mov    %edi,(%esp)
08768288 +0x288:  mov    %edx,0x4(%esp)
0876828c +0x28c:  mov    %eax,0x8(%esp)
08768290 +0x290:  call   08764a30 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x1210>  ; TaoCrypt::Integer::IsSquare() const+0x1210
08768295 +0x295:  mov    %eax,0x4(%esp)
08768299 +0x299:  mov    0x8(%ebp),%eax
0876829c +0x29c:  mov    %eax,(%esp)
0876829f +0x29f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087682a4 +0x2a4:  mov    -0x48(%ebp),%eax
087682a7 +0x2a7:  mov    -0x44(%ebp),%esi
087682aa +0x2aa:  movl   $0x0,0x4(%esp)
087682b2 +0x2b2:  shl    $0x2,%eax
087682b5 +0x2b5:  mov    %esi,(%esp)
087682b8 +0x2b8:  mov    %eax,0x8(%esp)
087682bc +0x2bc:  call   0807dcc0 <_init+0x5b8>
087682c1 +0x2c1:  mov    %esi,(%esp)
087682c4 +0x2c4:  movb   $0x0,0x4(%esp)
087682c9 +0x2c9:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087682ce +0x2ce:  mov    -0x28(%ebp),%eax
087682d1 +0x2d1:  mov    -0x24(%ebp),%esi
087682d4 +0x2d4:  movl   $0x0,0x4(%esp)
087682dc +0x2dc:  shl    $0x2,%eax
087682df +0x2df:  mov    %esi,(%esp)
087682e2 +0x2e2:  mov    %eax,0x8(%esp)
087682e6 +0x2e6:  call   0807dcc0 <_init+0x5b8>
087682eb +0x2eb:  mov    %esi,(%esp)
087682ee +0x2ee:  movb   $0x0,0x4(%esp)
087682f3 +0x2f3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087682f8 +0x2f8:  mov    -0x78(%ebp),%eax
087682fb +0x2fb:  mov    -0xb4(%ebp),%edx
08768301 +0x301:  mov    -0x74(%ebp),%esi
08768304 +0x304:  movl   $0x0,0x4(%esp)
0876830c +0x30c:  shl    $0x2,%eax
0876830f +0x30f:  mov    %edx,-0xa4(%ebp)
08768315 +0x315:  mov    %esi,(%esp)
08768318 +0x318:  mov    %eax,0x8(%esp)
0876831c +0x31c:  call   0807dcc0 <_init+0x5b8>
08768321 +0x321:  mov    %esi,(%esp)
08768324 +0x324:  movb   $0x0,0x4(%esp)
08768329 +0x329:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876832e +0x32e:  mov    -0x88(%ebp),%eax
08768334 +0x334:  mov    -0x84(%ebp),%esi
0876833a +0x33a:  movl   $0x0,0x4(%esp)
08768342 +0x342:  shl    $0x2,%eax
08768345 +0x345:  mov    %esi,(%esp)
08768348 +0x348:  mov    %eax,0x8(%esp)
0876834c +0x34c:  call   0807dcc0 <_init+0x5b8>
08768351 +0x351:  mov    %esi,(%esp)
08768354 +0x354:  movb   $0x0,0x4(%esp)
08768359 +0x359:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876835e +0x35e:  mov    -0x98(%ebp),%eax
08768364 +0x364:  mov    -0x94(%ebp),%esi
0876836a +0x36a:  movl   $0x0,0x4(%esp)
08768372 +0x372:  shl    $0x2,%eax
08768375 +0x375:  mov    %esi,(%esp)
08768378 +0x378:  mov    %eax,0x8(%esp)
0876837c +0x37c:  call   0807dcc0 <_init+0x5b8>
08768381 +0x381:  mov    %esi,(%esp)
08768384 +0x384:  movb   $0x0,0x4(%esp)
08768389 +0x389:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876838e +0x38e:  mov    0x8(%ebp),%eax
08768391 +0x391:  lea    -0xc(%ebp),%esp
08768394 +0x394:  pop    %ebx
08768395 +0x395:  pop    %esi
08768396 +0x396:  pop    %edi
08768397 +0x397:  pop    %ebp
08768398 +0x398:  ret    $0x4
0876839b +0x39b:  nop
0876839c +0x39c:  nop
0876839d +0x39d:  nop
0876839e +0x39e:  nop
0876839f +0x39f:  nop
```

## 反编译 C

```c
// TaoCrypt::RSA_PrivateKey::CalculateInverse @ 0x8768000

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PrivateKey::CalculateInverse(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer
   const&) const */

RSA_PrivateKey * __thiscall
TaoCrypt::RSA_PrivateKey::CalculateInverse
          (RSA_PrivateKey *this,RandomNumberGenerator *param_1,Integer *param_2)

{
  undefined *puVar1;
  Integer *pIVar2;
  uint uVar3;
  undefined *local_a8;
  undefined *local_a4;
  Integer *local_a0;
  int local_9c;
  void *local_98;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x876800b;
  local_a4 = PTR_vtable_0936cb58 + 8;
  puVar1 = PTR_vtable_0936c8e8 + 8;
  local_a8 = puVar1;
  local_a0 = (Integer *)&local_a8;
  Integer::Integer((Integer *)&local_9c,(Integer *)param_1);
  Integer::Integer((Integer *)&local_8c,0,*(uint *)param_1);
  Integer::Integer((Integer *)&local_7c);
  Integer::One();
  Integer::Minus((Integer *)&local_3c);
  pIVar2 = (Integer *)Integer::One();
  Integer::Integer((Integer *)&local_2c,(RandomNumberGenerator *)param_2,pIVar2,(Integer *)&local_3c
                  );
  uVar3 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar3 & 0xffffff00);
  AbstractRing::Exponentiate((Integer *)&local_4c,(Integer *)&local_a8);
  Integer::Times((Integer *)&local_5c);
  Integer::Modulo((Integer *)&local_6c);
  pIVar2 = (Integer *)Integer::operator=((Integer *)&local_7c,(Integer *)&local_6c);
  uVar3 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar3 & 0xffffff00);
  Integer::operator=((Integer *)&local_4c,pIVar2);
  ModularRoot((Integer *)this,(Integer *)&local_4c,(Integer *)(param_1 + 0x60),
              (Integer *)(param_1 + 0x50),(Integer *)(param_1 + 0x40),(Integer *)(param_1 + 0x30));
  ModularArithmetic::MultiplicativeInverse((Integer *)&local_a8);
  pIVar2 = (Integer *)ModularArithmetic::Multiply((Integer *)&local_a8,(Integer *)this);
  Integer::operator=((Integer *)this,pIVar2);
  uVar3 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar3 & 0xffffff00);
  uVar3 = 0;
  local_a8 = puVar1;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar3 & 0xffffff00);
  uVar3 = 0;
  memset(local_98,0,local_9c << 2);
  operator_delete__(local_98,uVar3 & 0xffffff00);
  return this;
}
```
