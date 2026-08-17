# TaoCrypt__RSA_PrivateKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CalculateInverse

```asm
// === 08768000 TaoCrypt::RSA_PrivateKey::CalculateInverse  [0x08768000-0x876839f] ===
 8768000:	55                   	push   %ebp
 8768001:	89 e5                	mov    %esp,%ebp
 8768003:	57                   	push   %edi
 8768004:	56                   	push   %esi
 8768005:	53                   	push   %ebx
 8768006:	e8 ed ad fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876800b:	81 c3 8d 4b c0 00    	add    $0xc04b8d,%ebx
 8768011:	81 ec ec 00 00 00    	sub    $0xec,%esp
 8768017:	8b 75 0c             	mov    0xc(%ebp),%esi
 876801a:	8d bd 5c ff ff ff    	lea    -0xa4(%ebp),%edi
 8768020:	89 bd 64 ff ff ff    	mov    %edi,-0x9c(%ebp)
 8768026:	89 74 24 04          	mov    %esi,0x4(%esp)
 876802a:	8b 83 c0 ff ff ff    	mov    -0x40(%ebx),%eax
 8768030:	83 c0 08             	add    $0x8,%eax
 8768033:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8768039:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 876803f:	83 c0 08             	add    $0x8,%eax
 8768042:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8768048:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 876804e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8768054:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 876805a:	89 04 24             	mov    %eax,(%esp)
 876805d:	e8 0e 72 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8768062:	8b 06                	mov    (%esi),%eax
 8768064:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876806b:	00 
 876806c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8768070:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8768076:	89 04 24             	mov    %eax,(%esp)
 8768079:	e8 72 70 ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 876807e:	8d 55 88             	lea    -0x78(%ebp),%edx
 8768081:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 8768087:	89 14 24             	mov    %edx,(%esp)
 876808a:	e8 01 75 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 876808f:	e8 6c 71 ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 8768094:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8768097:	89 95 40 ff ff ff    	mov    %edx,-0xc0(%ebp)
 876809d:	89 14 24             	mov    %edx,(%esp)
 87680a0:	89 74 24 04          	mov    %esi,0x4(%esp)
 87680a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 87680a8:	e8 33 80 ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87680ad:	83 ec 04             	sub    $0x4,%esp
 87680b0:	e8 4b 71 ff ff       	call   875f200 <_ZN8TaoCrypt7Integer3OneEv>
 87680b5:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 87680bb:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 87680be:	89 0c 24             	mov    %ecx,(%esp)
 87680c1:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 87680c7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87680cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87680cf:	8b 45 10             	mov    0x10(%ebp),%eax
 87680d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87680d6:	e8 15 94 ff ff       	call   87614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>
 87680db:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87680de:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87680e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87680e8:	00 
 87680e9:	c1 e0 02             	shl    $0x2,%eax
 87680ec:	89 14 24             	mov    %edx,(%esp)
 87680ef:	89 95 40 ff ff ff    	mov    %edx,-0xc0(%ebp)
 87680f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 87680f9:	e8 c2 5b 91 ff       	call   807dcc0 <memset@plt>
 87680fe:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8768104:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8768109:	89 14 24             	mov    %edx,(%esp)
 876810c:	e8 0f f6 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8768111:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8768114:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 876811a:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8768120:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 8768126:	8d 46 10             	lea    0x10(%esi),%eax
 8768129:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876812d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8768131:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8768135:	89 14 24             	mov    %edx,(%esp)
 8768138:	e8 23 bd 03 00       	call   87a3e60 <_ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_>
 876813d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8768140:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 8768146:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 876814c:	8b 45 14             	mov    0x14(%ebp),%eax
 876814f:	83 ec 04             	sub    $0x4,%esp
 8768152:	89 44 24 08          	mov    %eax,0x8(%esp)
 8768156:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 876815c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8768160:	89 04 24             	mov    %eax,(%esp)
 8768163:	e8 f8 9f ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8768168:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876816e:	8d 45 98             	lea    -0x68(%ebp),%eax
 8768171:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8768177:	83 ec 04             	sub    $0x4,%esp
 876817a:	89 54 24 08          	mov    %edx,0x8(%esp)
 876817e:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8768184:	89 04 24             	mov    %eax,(%esp)
 8768187:	89 54 24 04          	mov    %edx,0x4(%esp)
 876818b:	e8 90 a4 ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8768190:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8768196:	83 ec 04             	sub    $0x4,%esp
 8768199:	89 44 24 04          	mov    %eax,0x4(%esp)
 876819d:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 87681a3:	89 04 24             	mov    %eax,(%esp)
 87681a6:	e8 b5 82 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87681ab:	8b 55 9c             	mov    -0x64(%ebp),%edx
 87681ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87681b5:	00 
 87681b6:	89 14 24             	mov    %edx,(%esp)
 87681b9:	89 95 40 ff ff ff    	mov    %edx,-0xc0(%ebp)
 87681bf:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 87681c5:	8b 45 98             	mov    -0x68(%ebp),%eax
 87681c8:	c1 e0 02             	shl    $0x2,%eax
 87681cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87681cf:	e8 ec 5a 91 ff       	call   807dcc0 <memset@plt>
 87681d4:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 87681da:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87681df:	89 14 24             	mov    %edx,(%esp)
 87681e2:	e8 39 f5 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87681e7:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87681ea:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87681ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87681f4:	00 
 87681f5:	c1 e0 02             	shl    $0x2,%eax
 87681f8:	89 14 24             	mov    %edx,(%esp)
 87681fb:	89 95 40 ff ff ff    	mov    %edx,-0xc0(%ebp)
 8768201:	89 44 24 08          	mov    %eax,0x8(%esp)
 8768205:	e8 b6 5a 91 ff       	call   807dcc0 <memset@plt>
 876820a:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8768210:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8768215:	89 14 24             	mov    %edx,(%esp)
 8768218:	e8 03 f5 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876821d:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 8768223:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8768229:	89 54 24 04          	mov    %edx,0x4(%esp)
 876822d:	89 04 24             	mov    %eax,(%esp)
 8768230:	e8 2b 82 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8768235:	8d 46 70             	lea    0x70(%esi),%eax
 8768238:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 876823e:	89 44 24 18          	mov    %eax,0x18(%esp)
 8768242:	8d 46 30             	lea    0x30(%esi),%eax
 8768245:	89 44 24 14          	mov    %eax,0x14(%esp)
 8768249:	8d 46 40             	lea    0x40(%esi),%eax
 876824c:	89 44 24 10          	mov    %eax,0x10(%esp)
 8768250:	8d 46 50             	lea    0x50(%esi),%eax
 8768253:	83 c6 60             	add    $0x60,%esi
 8768256:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876825a:	8b 45 08             	mov    0x8(%ebp),%eax
 876825d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8768261:	89 74 24 08          	mov    %esi,0x8(%esp)
 8768265:	89 04 24             	mov    %eax,(%esp)
 8768268:	e8 a3 a5 ff ff       	call   8762810 <_ZN8TaoCrypt11ModularRootERKNS_7IntegerES2_S2_S2_S2_S2_>
 876826d:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 8768273:	83 ec 04             	sub    $0x4,%esp
 8768276:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 876827a:	89 3c 24             	mov    %edi,(%esp)
 876827d:	e8 9e ca ff ff       	call   8764d20 <_ZNK8TaoCrypt17ModularArithmetic21MultiplicativeInverseERKNS_7IntegerE>
 8768282:	8b 55 08             	mov    0x8(%ebp),%edx
 8768285:	89 3c 24             	mov    %edi,(%esp)
 8768288:	89 54 24 04          	mov    %edx,0x4(%esp)
 876828c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8768290:	e8 9b c7 ff ff       	call   8764a30 <_ZNK8TaoCrypt17ModularArithmetic8MultiplyERKNS_7IntegerES3_>
 8768295:	89 44 24 04          	mov    %eax,0x4(%esp)
 8768299:	8b 45 08             	mov    0x8(%ebp),%eax
 876829c:	89 04 24             	mov    %eax,(%esp)
 876829f:	e8 bc 81 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87682a4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 87682a7:	8b 75 bc             	mov    -0x44(%ebp),%esi
 87682aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87682b1:	00 
 87682b2:	c1 e0 02             	shl    $0x2,%eax
 87682b5:	89 34 24             	mov    %esi,(%esp)
 87682b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87682bc:	e8 ff 59 91 ff       	call   807dcc0 <memset@plt>
 87682c1:	89 34 24             	mov    %esi,(%esp)
 87682c4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87682c9:	e8 52 f4 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87682ce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87682d1:	8b 75 dc             	mov    -0x24(%ebp),%esi
 87682d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87682db:	00 
 87682dc:	c1 e0 02             	shl    $0x2,%eax
 87682df:	89 34 24             	mov    %esi,(%esp)
 87682e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87682e6:	e8 d5 59 91 ff       	call   807dcc0 <memset@plt>
 87682eb:	89 34 24             	mov    %esi,(%esp)
 87682ee:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87682f3:	e8 28 f4 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87682f8:	8b 45 88             	mov    -0x78(%ebp),%eax
 87682fb:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8768301:	8b 75 8c             	mov    -0x74(%ebp),%esi
 8768304:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876830b:	00 
 876830c:	c1 e0 02             	shl    $0x2,%eax
 876830f:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 8768315:	89 34 24             	mov    %esi,(%esp)
 8768318:	89 44 24 08          	mov    %eax,0x8(%esp)
 876831c:	e8 9f 59 91 ff       	call   807dcc0 <memset@plt>
 8768321:	89 34 24             	mov    %esi,(%esp)
 8768324:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8768329:	e8 f2 f3 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876832e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8768334:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876833a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8768341:	00 
 8768342:	c1 e0 02             	shl    $0x2,%eax
 8768345:	89 34 24             	mov    %esi,(%esp)
 8768348:	89 44 24 08          	mov    %eax,0x8(%esp)
 876834c:	e8 6f 59 91 ff       	call   807dcc0 <memset@plt>
 8768351:	89 34 24             	mov    %esi,(%esp)
 8768354:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8768359:	e8 c2 f3 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876835e:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8768364:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876836a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8768371:	00 
 8768372:	c1 e0 02             	shl    $0x2,%eax
 8768375:	89 34 24             	mov    %esi,(%esp)
 8768378:	89 44 24 08          	mov    %eax,0x8(%esp)
 876837c:	e8 3f 59 91 ff       	call   807dcc0 <memset@plt>
 8768381:	89 34 24             	mov    %esi,(%esp)
 8768384:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8768389:	e8 92 f3 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876838e:	8b 45 08             	mov    0x8(%ebp),%eax
 8768391:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8768394:	5b                   	pop    %ebx
 8768395:	5e                   	pop    %esi
 8768396:	5f                   	pop    %edi
 8768397:	5d                   	pop    %ebp
 8768398:	c2 04 00             	ret    $0x4
 876839b:	90                   	nop
 876839c:	90                   	nop
 876839d:	90                   	nop
 876839e:	90                   	nop
 876839f:	90                   	nop

```

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

---

## Initialize

```asm
// === 08767ca0 TaoCrypt::RSA_PrivateKey::Initialize  [0x08767ca0-0x8767cdf] ===
 8767ca0:	55                   	push   %ebp
 8767ca1:	89 e5                	mov    %esp,%ebp
 8767ca3:	53                   	push   %ebx
 8767ca4:	e8 4f b1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767ca9:	81 c3 ef 4e c0 00    	add    $0xc04eef,%ebx
 8767caf:	83 ec 24             	sub    $0x24,%esp
 8767cb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767cb5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8767cb8:	8b 83 c8 fe ff ff    	mov    -0x138(%ebx),%eax
 8767cbe:	83 c0 08             	add    $0x8,%eax
 8767cc1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8767cc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8767cc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767ccb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8767cce:	89 04 24             	mov    %eax,(%esp)
 8767cd1:	e8 ea de fe ff       	call   8755bc0 <_ZN8TaoCrypt19RSA_Private_Decoder6DecodeERNS_14RSA_PrivateKeyE>
 8767cd6:	83 c4 24             	add    $0x24,%esp
 8767cd9:	5b                   	pop    %ebx
 8767cda:	5d                   	pop    %ebp
 8767cdb:	c3                   	ret
 8767cdc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::RSA_PrivateKey::Initialize @ 0x8767ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PrivateKey::Initialize(RSA_PrivateKey *this,Source *param_1)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8767ca9;
  local_10 = param_1;
  local_14 = PTR_vtable_0936ca60 + 8;
  RSA_Private_Decoder::Decode((RSA_Private_Decoder *)&local_14,this);
  return;
}

```

---

## RSA_PrivateKey

```asm
// === 08767ce0 TaoCrypt::RSA_PrivateKey::RSA_PrivateKey  [0x08767ce0-0x8767d6f] ===
 8767ce0:	55                   	push   %ebp
 8767ce1:	89 e5                	mov    %esp,%ebp
 8767ce3:	56                   	push   %esi
 8767ce4:	53                   	push   %ebx
 8767ce5:	e8 0e b1 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767cea:	81 c3 ae 4e c0 00    	add    $0xc04eae,%ebx
 8767cf0:	83 ec 10             	sub    $0x10,%esp
 8767cf3:	8b 75 08             	mov    0x8(%ebp),%esi
 8767cf6:	89 34 24             	mov    %esi,(%esp)
 8767cf9:	e8 92 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767cfe:	8d 46 10             	lea    0x10(%esi),%eax
 8767d01:	89 04 24             	mov    %eax,(%esp)
 8767d04:	e8 87 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d09:	8d 46 20             	lea    0x20(%esi),%eax
 8767d0c:	89 04 24             	mov    %eax,(%esp)
 8767d0f:	e8 7c 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d14:	8d 46 30             	lea    0x30(%esi),%eax
 8767d17:	89 04 24             	mov    %eax,(%esp)
 8767d1a:	e8 71 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d1f:	8d 46 40             	lea    0x40(%esi),%eax
 8767d22:	89 04 24             	mov    %eax,(%esp)
 8767d25:	e8 66 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d2a:	8d 46 50             	lea    0x50(%esi),%eax
 8767d2d:	89 04 24             	mov    %eax,(%esp)
 8767d30:	e8 5b 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d35:	8d 46 60             	lea    0x60(%esi),%eax
 8767d38:	89 04 24             	mov    %eax,(%esp)
 8767d3b:	e8 50 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d40:	8d 46 70             	lea    0x70(%esi),%eax
 8767d43:	89 04 24             	mov    %eax,(%esp)
 8767d46:	e8 45 78 ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8767d4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767d4e:	89 34 24             	mov    %esi,(%esp)
 8767d51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767d55:	e8 46 ff ff ff       	call   8767ca0 <_ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE>
 8767d5a:	83 c4 10             	add    $0x10,%esp
 8767d5d:	5b                   	pop    %ebx
 8767d5e:	5e                   	pop    %esi
 8767d5f:	5d                   	pop    %ebp
 8767d60:	c3                   	ret
 8767d61:	90                   	nop
 8767d62:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8767d69:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RSA_PrivateKey::RSA_PrivateKey @ 0x8767ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(TaoCrypt::Source&) */

void __thiscall TaoCrypt::RSA_PrivateKey::RSA_PrivateKey(RSA_PrivateKey *this,Source *param_1)

{
  Integer::Integer((Integer *)this);
  Integer::Integer((Integer *)(this + 0x10));
  Integer::Integer((Integer *)(this + 0x20));
  Integer::Integer((Integer *)(this + 0x30));
  Integer::Integer((Integer *)(this + 0x40));
  Integer::Integer((Integer *)(this + 0x50));
  Integer::Integer((Integer *)(this + 0x60));
  Integer::Integer((Integer *)(this + 0x70));
  Initialize(this,param_1);
  return;
}

```

