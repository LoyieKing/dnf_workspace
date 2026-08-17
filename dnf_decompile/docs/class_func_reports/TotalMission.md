# TotalMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## TotalMission

```asm
// === 08166306 TotalMission::TotalMission  [0x08166306-0x8166329] ===
 8166306:	55                   	push   %ebp
 8166307:	89 e5                	mov    %esp,%ebp
 8166309:	83 ec 18             	sub    $0x18,%esp
 816630c:	8b 45 08             	mov    0x8(%ebp),%eax
 816630f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8166316:	00 
 8166317:	89 04 24             	mov    %eax,(%esp)
 816631a:	e8 f3 eb ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 816631f:	8b 45 08             	mov    0x8(%ebp),%eax
 8166322:	c7 00 48 f0 b7 08    	movl   $0x8b7f048,(%eax)
 8166328:	c9                   	leave
 8166329:	c3                   	ret

```

```c
// TotalMission::TotalMission @ 0x8166306

/* TotalMission::TotalMission() */

void __thiscall TotalMission::TotalMission(TotalMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,6);
  *(undefined ***)this = &PTR__TotalMission_08b7f048;
  return;
}

```

---

## processMission

```asm
// === 08166378 TotalMission::processMission  [0x08166378-0x81663f3] ===
 8166378:	55                   	push   %ebp
 8166379:	89 e5                	mov    %esp,%ebp
 816637b:	83 ec 18             	sub    $0x18,%esp
 816637e:	8b 45 08             	mov    0x8(%ebp),%eax
 8166381:	83 c0 28             	add    $0x28,%eax
 8166384:	89 04 24             	mov    %eax,(%esp)
 8166387:	e8 50 21 00 00       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 816638c:	8b 55 10             	mov    0x10(%ebp),%edx
 816638f:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 8166393:	0f b7 d2             	movzwl %dx,%edx
 8166396:	39 d0                	cmp    %edx,%eax
 8166398:	0f 96 c0             	setbe  %al
 816639b:	84 c0                	test   %al,%al
 816639d:	75 52                	jne    81663f1 <_ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej+0x79>
 816639f:	8b 45 08             	mov    0x8(%ebp),%eax
 81663a2:	83 c0 28             	add    $0x28,%eax
 81663a5:	89 04 24             	mov    %eax,(%esp)
 81663a8:	e8 2f 21 00 00       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 81663ad:	8b 55 10             	mov    0x10(%ebp),%edx
 81663b0:	0f b7 52 04          	movzwl 0x4(%edx),%edx
 81663b4:	0f b7 d2             	movzwl %dx,%edx
 81663b7:	03 55 14             	add    0x14(%ebp),%edx
 81663ba:	39 d0                	cmp    %edx,%eax
 81663bc:	0f 96 c0             	setbe  %al
 81663bf:	84 c0                	test   %al,%al
 81663c1:	74 19                	je     81663dc <_ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej+0x64>
 81663c3:	8b 45 08             	mov    0x8(%ebp),%eax
 81663c6:	83 c0 28             	add    $0x28,%eax
 81663c9:	89 04 24             	mov    %eax,(%esp)
 81663cc:	e8 0b 21 00 00       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 81663d1:	89 c2                	mov    %eax,%edx
 81663d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81663d6:	66 89 50 04          	mov    %dx,0x4(%eax)
 81663da:	eb 16                	jmp    81663f2 <_ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej+0x7a>
 81663dc:	8b 45 10             	mov    0x10(%ebp),%eax
 81663df:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 81663e3:	8b 45 14             	mov    0x14(%ebp),%eax
 81663e6:	01 c2                	add    %eax,%edx
 81663e8:	8b 45 10             	mov    0x10(%ebp),%eax
 81663eb:	66 89 50 04          	mov    %dx,0x4(%eax)
 81663ef:	eb 01                	jmp    81663f2 <_ZN12TotalMission14processMissionEP5CUserR16HeroMissionValuej+0x7a>
 81663f1:	90                   	nop
 81663f2:	c9                   	leave
 81663f3:	c3                   	ret

```

```c
// TotalMission::processMission @ 0x8166378

/* TotalMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
TotalMission::processMission
          (TotalMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                    ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
  if (*(ushort *)(param_2 + 4) < uVar2) {
    uVar2 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                      ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
    if (*(ushort *)(param_2 + 4) + param_3 < uVar2) {
      *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
    }
    else {
      uVar1 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                        ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28));
      *(undefined2 *)(param_2 + 4) = uVar1;
    }
  }
  return;
}

```

---

## rewardMission

```asm
// === 081663f4 TotalMission::rewardMission  [0x081663f4-0x81663fd] ===
 81663f4:	55                   	push   %ebp
 81663f5:	89 e5                	mov    %esp,%ebp
 81663f7:	b8 01 00 00 00       	mov    $0x1,%eax
 81663fc:	5d                   	pop    %ebp
 81663fd:	c3                   	ret

```

```c
// TotalMission::rewardMission @ 0x81663f4

/* TotalMission::rewardMission(CUser*, HeroMissionValue&) */

undefined4 TotalMission::rewardMission(CUser *param_1,HeroMissionValue *param_2)

{
  return 1;
}

```

---

## rewardMission_081663fe

```asm
// === 081663fe TotalMission::rewardMission  [0x081663fe-0x8166521] ===
 81663fe:	55                   	push   %ebp
 81663ff:	89 e5                	mov    %esp,%ebp
 8166401:	83 ec 28             	sub    $0x28,%esp
 8166404:	8b 45 08             	mov    0x8(%ebp),%eax
 8166407:	89 04 24             	mov    %eax,(%esp)
 816640a:	e8 b3 eb ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 816640f:	83 f0 01             	xor    $0x1,%eax
 8166412:	84 c0                	test   %al,%al
 8166414:	74 13                	je     8166429 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x2b>
 8166416:	8b 45 10             	mov    0x10(%ebp),%eax
 8166419:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 816641d:	66 85 c0             	test   %ax,%ax
 8166420:	74 07                	je     8166429 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x2b>
 8166422:	b8 01 00 00 00       	mov    $0x1,%eax
 8166427:	eb 05                	jmp    816642e <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x30>
 8166429:	b8 00 00 00 00       	mov    $0x0,%eax
 816642e:	84 c0                	test   %al,%al
 8166430:	74 0a                	je     816643c <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x3e>
 8166432:	b8 00 00 00 00       	mov    $0x0,%eax
 8166437:	e9 e4 00 00 00       	jmp    8166520 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x122>
 816643c:	c6 45 f6 01          	movb   $0x1,-0xa(%ebp)
 8166440:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166443:	8b 55 14             	mov    0x14(%ebp),%edx
 8166446:	89 54 24 04          	mov    %edx,0x4(%esp)
 816644a:	89 04 24             	mov    %eax,(%esp)
 816644d:	e8 a4 20 00 00       	call   81684f6 <_ZNSt6vectorI16HeroMissionValueSaIS0_EE5beginEv>
 8166452:	83 ec 04             	sub    $0x4,%esp
 8166455:	eb 47                	jmp    816649e <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0xa0>
 8166457:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816645a:	89 04 24             	mov    %eax,(%esp)
 816645d:	e8 20 21 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 8166462:	8b 00                	mov    (%eax),%eax
 8166464:	83 f8 06             	cmp    $0x6,%eax
 8166467:	74 1b                	je     8166484 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x86>
 8166469:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816646c:	89 04 24             	mov    %eax,(%esp)
 816646f:	e8 0e 21 00 00       	call   8168582 <_ZNK9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEptEv>
 8166474:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8166478:	66 85 c0             	test   %ax,%ax
 816647b:	75 07                	jne    8166484 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x86>
 816647d:	b8 01 00 00 00       	mov    $0x1,%eax
 8166482:	eb 05                	jmp    8166489 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x8b>
 8166484:	b8 00 00 00 00       	mov    $0x0,%eax
 8166489:	84 c0                	test   %al,%al
 816648b:	74 06                	je     8166493 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x95>
 816648d:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8166491:	eb 36                	jmp    81664c9 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0xcb>
 8166493:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166496:	89 04 24             	mov    %eax,(%esp)
 8166499:	e8 ce 20 00 00       	call   816856c <_ZN9__gnu_cxx17__normal_iteratorIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEppEv>
 816649e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81664a1:	8b 55 14             	mov    0x14(%ebp),%edx
 81664a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81664a8:	89 04 24             	mov    %eax,(%esp)
 81664ab:	e8 6a 20 00 00       	call   816851a <_ZNSt6vectorI16HeroMissionValueSaIS0_EE3endEv>
 81664b0:	83 ec 04             	sub    $0x4,%esp
 81664b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81664b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81664ba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81664bd:	89 04 24             	mov    %eax,(%esp)
 81664c0:	e8 7b 20 00 00       	call   8168540 <_ZN9__gnu_cxxneIP16HeroMissionValueSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 81664c5:	84 c0                	test   %al,%al
 81664c7:	75 8e                	jne    8166457 <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x59>
 81664c9:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81664cd:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 81664d1:	74 49                	je     816651c <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x11e>
 81664d3:	8b 45 08             	mov    0x8(%ebp),%eax
 81664d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81664d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81664dd:	89 04 24             	mov    %eax,(%esp)
 81664e0:	e8 49 eb ff ff       	call   816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>
 81664e5:	88 45 f7             	mov    %al,-0x9(%ebp)
 81664e8:	8b 45 10             	mov    0x10(%ebp),%eax
 81664eb:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81664ef:	8d 50 01             	lea    0x1(%eax),%edx
 81664f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81664f5:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81664f9:	8b 45 10             	mov    0x10(%ebp),%eax
 81664fc:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 8166502:	8b 45 08             	mov    0x8(%ebp),%eax
 8166505:	89 04 24             	mov    %eax,(%esp)
 8166508:	e8 b5 ea ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 816650d:	84 c0                	test   %al,%al
 816650f:	74 0b                	je     816651c <_ZN12TotalMission13rewardMissionEP5CUserR16HeroMissionValueRSt6vectorIS2_SaIS2_EE+0x11e>
 8166511:	8b 45 10             	mov    0x10(%ebp),%eax
 8166514:	89 04 24             	mov    %eax,(%esp)
 8166517:	e8 96 e6 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 816651c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8166520:	c9                   	leave
 8166521:	c3                   	ret

```

```c
// TotalMission::rewardMission @ 0x81663fe

/* TotalMission::rewardMission(CUser*, HeroMissionValue&, std::vector<HeroMissionValue,
   std::allocator<HeroMissionValue> >&) */

undefined1 TotalMission::rewardMission(CUser *param_1,HeroMissionValue *param_2,vector *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_18 [4];
  __normal_iterator local_14 [6];
  char local_e;
  undefined1 local_d;
  
  cVar1 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
  if ((cVar1 == '\x01') || (*(short *)(param_3 + 10) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_d = 0;
  }
  else {
    local_e = '\x01';
    std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
    while( true ) {
      std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
      bVar2 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar2) break;
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                      ::operator->(local_18);
      if ((*piVar3 == 6) ||
         (iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_18), *(short *)(iVar4 + 10) != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_e = '\0';
        break;
      }
      __gnu_cxx::
      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
      ::operator++(local_18);
    }
    local_d = 0;
    if (local_e != '\0') {
      local_d = BaseHeroMissionCondition::rewardProcess
                          ((BaseHeroMissionCondition *)param_1,(CUser *)param_2);
      *(short *)(param_3 + 10) = *(short *)(param_3 + 10) + 1;
      *(undefined2 *)(param_3 + 6) = 1;
      cVar1 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
      if (cVar1 != '\0') {
        HeroMissionValue::reset((HeroMissionValue *)param_3);
      }
    }
  }
  return local_d;
}

```

---

## ~TotalMission

```asm
// === 0816632a TotalMission::~TotalMission  [0x0816632a-0x8166359] ===
 816632a:	55                   	push   %ebp
 816632b:	89 e5                	mov    %esp,%ebp
 816632d:	83 ec 18             	sub    $0x18,%esp
 8166330:	8b 45 08             	mov    0x8(%ebp),%eax
 8166333:	c7 00 48 f0 b7 08    	movl   $0x8b7f048,(%eax)
 8166339:	8b 45 08             	mov    0x8(%ebp),%eax
 816633c:	89 04 24             	mov    %eax,(%esp)
 816633f:	e8 f6 eb ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 8166344:	b8 00 00 00 00       	mov    $0x0,%eax
 8166349:	84 c0                	test   %al,%al
 816634b:	74 0b                	je     8166358 <_ZN12TotalMissionD1Ev+0x2e>
 816634d:	8b 45 08             	mov    0x8(%ebp),%eax
 8166350:	89 04 24             	mov    %eax,(%esp)
 8166353:	e8 98 e1 5b 00       	call   87244f0 <_ZdlPv>
 8166358:	c9                   	leave
 8166359:	c3                   	ret

```

```c
// TotalMission::~TotalMission @ 0x816632a

/* WARNING: Removing unreachable block (ram,0x0816634d) */
/* TotalMission::~TotalMission() */

void __thiscall TotalMission::~TotalMission(TotalMission *this)

{
  *(undefined ***)this = &PTR__TotalMission_08b7f048;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~TotalMission_0816635a

```asm
// === 0816635a TotalMission::~TotalMission  [0x0816635a-0x8166377] ===
 816635a:	55                   	push   %ebp
 816635b:	89 e5                	mov    %esp,%ebp
 816635d:	83 ec 18             	sub    $0x18,%esp
 8166360:	8b 45 08             	mov    0x8(%ebp),%eax
 8166363:	89 04 24             	mov    %eax,(%esp)
 8166366:	e8 bf ff ff ff       	call   816632a <_ZN12TotalMissionD1Ev>
 816636b:	8b 45 08             	mov    0x8(%ebp),%eax
 816636e:	89 04 24             	mov    %eax,(%esp)
 8166371:	e8 7a e1 5b 00       	call   87244f0 <_ZdlPv>
 8166376:	c9                   	leave
 8166377:	c3                   	ret

```

```c
// TotalMission::~TotalMission @ 0x816635a

/* TotalMission::~TotalMission() */

void __thiscall TotalMission::~TotalMission(TotalMission *this)

{
  ~TotalMission(this);
  operator_delete(this);
  return;
}

```

