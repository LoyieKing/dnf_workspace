# ClearDungeonMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ClearDungeonMission

```asm
// === 08165342 ClearDungeonMission::ClearDungeonMission  [0x08165342-0x8165365] ===
 8165342:	55                   	push   %ebp
 8165343:	89 e5                	mov    %esp,%ebp
 8165345:	83 ec 18             	sub    $0x18,%esp
 8165348:	8b 45 08             	mov    0x8(%ebp),%eax
 816534b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8165352:	00 
 8165353:	89 04 24             	mov    %eax,(%esp)
 8165356:	e8 b7 fb ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 816535b:	8b 45 08             	mov    0x8(%ebp),%eax
 816535e:	c7 00 c0 f0 b7 08    	movl   $0x8b7f0c0,(%eax)
 8165364:	c9                   	leave
 8165365:	c3                   	ret

```

```c
// ClearDungeonMission::ClearDungeonMission @ 0x8165342

/* ClearDungeonMission::ClearDungeonMission() */

void __thiscall ClearDungeonMission::ClearDungeonMission(ClearDungeonMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,1);
  *(undefined ***)this = &PTR__ClearDungeonMission_08b7f0c0;
  return;
}

```

---

## processMission

```asm
// === 081653b4 ClearDungeonMission::processMission  [0x081653b4-0x8165483] ===
 81653b4:	55                   	push   %ebp
 81653b5:	89 e5                	mov    %esp,%ebp
 81653b7:	83 ec 18             	sub    $0x18,%esp
 81653ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81653bd:	83 c0 28             	add    $0x28,%eax
 81653c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81653c7:	00 
 81653c8:	89 04 24             	mov    %eax,(%esp)
 81653cb:	e8 fa 30 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81653d0:	0f b7 10             	movzwl (%eax),%edx
 81653d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81653d6:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81653da:	66 39 c2             	cmp    %ax,%dx
 81653dd:	0f 96 c0             	setbe  %al
 81653e0:	84 c0                	test   %al,%al
 81653e2:	0f 85 96 00 00 00    	jne    816547e <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xca>
 81653e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81653eb:	89 04 24             	mov    %eax,(%esp)
 81653ee:	e8 c3 fb ff ff       	call   8164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>
 81653f3:	83 f8 02             	cmp    $0x2,%eax
 81653f6:	75 14                	jne    816540c <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0x58>
 81653f8:	8b 45 10             	mov    0x10(%ebp),%eax
 81653fb:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81653ff:	66 83 f8 07          	cmp    $0x7,%ax
 8165403:	74 07                	je     816540c <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0x58>
 8165405:	b8 01 00 00 00       	mov    $0x1,%eax
 816540a:	eb 05                	jmp    8165411 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0x5d>
 816540c:	b8 00 00 00 00       	mov    $0x0,%eax
 8165411:	84 c0                	test   %al,%al
 8165413:	75 6c                	jne    8165481 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xcd>
 8165415:	8b 45 08             	mov    0x8(%ebp),%eax
 8165418:	83 c0 28             	add    $0x28,%eax
 816541b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165422:	00 
 8165423:	89 04 24             	mov    %eax,(%esp)
 8165426:	e8 9f 30 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 816542b:	0f b7 00             	movzwl (%eax),%eax
 816542e:	0f b7 d0             	movzwl %ax,%edx
 8165431:	8b 45 10             	mov    0x10(%ebp),%eax
 8165434:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8165438:	0f b7 c0             	movzwl %ax,%eax
 816543b:	03 45 14             	add    0x14(%ebp),%eax
 816543e:	39 c2                	cmp    %eax,%edx
 8165440:	0f 96 c0             	setbe  %al
 8165443:	84 c0                	test   %al,%al
 8165445:	74 22                	je     8165469 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xb5>
 8165447:	8b 45 08             	mov    0x8(%ebp),%eax
 816544a:	83 c0 28             	add    $0x28,%eax
 816544d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165454:	00 
 8165455:	89 04 24             	mov    %eax,(%esp)
 8165458:	e8 6d 30 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 816545d:	0f b7 10             	movzwl (%eax),%edx
 8165460:	8b 45 10             	mov    0x10(%ebp),%eax
 8165463:	66 89 50 04          	mov    %dx,0x4(%eax)
 8165467:	eb 19                	jmp    8165482 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xce>
 8165469:	8b 45 10             	mov    0x10(%ebp),%eax
 816546c:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 8165470:	8b 45 14             	mov    0x14(%ebp),%eax
 8165473:	01 c2                	add    %eax,%edx
 8165475:	8b 45 10             	mov    0x10(%ebp),%eax
 8165478:	66 89 50 04          	mov    %dx,0x4(%eax)
 816547c:	eb 04                	jmp    8165482 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xce>
 816547e:	90                   	nop
 816547f:	eb 01                	jmp    8165482 <_ZN19ClearDungeonMission14processMissionEP5CUserR16HeroMissionValuej+0xce>
 8165481:	90                   	nop
 8165482:	c9                   	leave
 8165483:	c3                   	ret

```

```c
// ClearDungeonMission::processMission @ 0x81653b4

/* ClearDungeonMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
ClearDungeonMission::processMission
          (ClearDungeonMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  puVar2 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
  if (*(ushort *)(param_2 + 4) < *puVar2) {
    iVar3 = BaseHeroMissionCondition::getMissionType((BaseHeroMissionCondition *)this);
    if ((iVar3 == 2) && (*(short *)(param_2 + 8) != 7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      puVar2 = (ushort *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      if (*(ushort *)(param_2 + 4) + param_3 < (uint)*puVar2) {
        *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
      }
      else {
        puVar4 = (undefined2 *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0
                           );
        *(undefined2 *)(param_2 + 4) = *puVar4;
      }
    }
  }
  return;
}

```

---

## rewardMission

```asm
// === 08165484 ClearDungeonMission::rewardMission  [0x08165484-0x8165693] ===
 8165484:	55                   	push   %ebp
 8165485:	89 e5                	mov    %esp,%ebp
 8165487:	56                   	push   %esi
 8165488:	53                   	push   %ebx
 8165489:	83 ec 30             	sub    $0x30,%esp
 816548c:	8b 45 08             	mov    0x8(%ebp),%eax
 816548f:	89 04 24             	mov    %eax,(%esp)
 8165492:	e8 2b fb ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165497:	83 f0 01             	xor    $0x1,%eax
 816549a:	84 c0                	test   %al,%al
 816549c:	74 13                	je     81654b1 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 816549e:	8b 45 10             	mov    0x10(%ebp),%eax
 81654a1:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81654a5:	66 85 c0             	test   %ax,%ax
 81654a8:	74 07                	je     81654b1 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 81654aa:	b8 01 00 00 00       	mov    $0x1,%eax
 81654af:	eb 05                	jmp    81654b6 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x32>
 81654b1:	b8 00 00 00 00       	mov    $0x0,%eax
 81654b6:	84 c0                	test   %al,%al
 81654b8:	74 66                	je     8165520 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x9c>
 81654ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81654bd:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81654c1:	0f b7 f0             	movzwl %ax,%esi
 81654c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81654c7:	8b 00                	mov    (%eax),%eax
 81654c9:	89 c3                	mov    %eax,%ebx
 81654cb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81654d2:	ff 
 81654d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81654d6:	89 04 24             	mov    %eax,(%esp)
 81654d9:	e8 c2 8a 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81654de:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81654e2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81654e6:	89 44 24 14          	mov    %eax,0x14(%esp)
 81654ea:	c7 44 24 10 28 db b7 	movl   $0x8b7db28,0x10(%esp)
 81654f1:	08 
 81654f2:	c7 44 24 0c ac 00 00 	movl   $0xac,0xc(%esp)
 81654f9:	00 
 81654fa:	c7 44 24 08 60 ef b7 	movl   $0x8b7ef60,0x8(%esp)
 8165501:	08 
 8165502:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8165509:	08 
 816550a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8165511:	e8 f4 e6 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165516:	b8 00 00 00 00       	mov    $0x0,%eax
 816551b:	e9 6d 01 00 00       	jmp    816568d <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x209>
 8165520:	8b 45 08             	mov    0x8(%ebp),%eax
 8165523:	89 04 24             	mov    %eax,(%esp)
 8165526:	e8 8b fa ff ff       	call   8164fb6 <_ZN24BaseHeroMissionCondition14getMissionTypeEv>
 816552b:	83 f8 02             	cmp    $0x2,%eax
 816552e:	75 14                	jne    8165544 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0xc0>
 8165530:	8b 45 10             	mov    0x10(%ebp),%eax
 8165533:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8165537:	66 83 f8 07          	cmp    $0x7,%ax
 816553b:	74 07                	je     8165544 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0xc0>
 816553d:	b8 01 00 00 00       	mov    $0x1,%eax
 8165542:	eb 05                	jmp    8165549 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0xc5>
 8165544:	b8 00 00 00 00       	mov    $0x0,%eax
 8165549:	84 c0                	test   %al,%al
 816554b:	74 66                	je     81655b3 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x12f>
 816554d:	8b 45 10             	mov    0x10(%ebp),%eax
 8165550:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8165554:	0f b7 f0             	movzwl %ax,%esi
 8165557:	8b 45 10             	mov    0x10(%ebp),%eax
 816555a:	8b 00                	mov    (%eax),%eax
 816555c:	89 c3                	mov    %eax,%ebx
 816555e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165565:	ff 
 8165566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165569:	89 04 24             	mov    %eax,(%esp)
 816556c:	e8 2f 8a 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165571:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165575:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165579:	89 44 24 14          	mov    %eax,0x14(%esp)
 816557d:	c7 44 24 10 90 db b7 	movl   $0x8b7db90,0x10(%esp)
 8165584:	08 
 8165585:	c7 44 24 0c b4 00 00 	movl   $0xb4,0xc(%esp)
 816558c:	00 
 816558d:	c7 44 24 08 60 ef b7 	movl   $0x8b7ef60,0x8(%esp)
 8165594:	08 
 8165595:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 816559c:	08 
 816559d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81655a4:	e8 61 e6 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81655a9:	b8 00 00 00 00       	mov    $0x0,%eax
 81655ae:	e9 da 00 00 00       	jmp    816568d <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x209>
 81655b3:	8b 45 10             	mov    0x10(%ebp),%eax
 81655b6:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 81655ba:	8b 45 08             	mov    0x8(%ebp),%eax
 81655bd:	83 c0 28             	add    $0x28,%eax
 81655c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81655c7:	00 
 81655c8:	89 04 24             	mov    %eax,(%esp)
 81655cb:	e8 fa 2e 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81655d0:	0f b7 00             	movzwl (%eax),%eax
 81655d3:	66 39 c3             	cmp    %ax,%bx
 81655d6:	0f 92 c0             	setb   %al
 81655d9:	84 c0                	test   %al,%al
 81655db:	74 63                	je     8165640 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x1bc>
 81655dd:	8b 45 10             	mov    0x10(%ebp),%eax
 81655e0:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81655e4:	0f b7 f0             	movzwl %ax,%esi
 81655e7:	8b 45 10             	mov    0x10(%ebp),%eax
 81655ea:	8b 00                	mov    (%eax),%eax
 81655ec:	89 c3                	mov    %eax,%ebx
 81655ee:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81655f5:	ff 
 81655f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81655f9:	89 04 24             	mov    %eax,(%esp)
 81655fc:	e8 9f 89 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165601:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165605:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165609:	89 44 24 14          	mov    %eax,0x14(%esp)
 816560d:	c7 44 24 10 d8 db b7 	movl   $0x8b7dbd8,0x10(%esp)
 8165614:	08 
 8165615:	c7 44 24 0c bb 00 00 	movl   $0xbb,0xc(%esp)
 816561c:	00 
 816561d:	c7 44 24 08 60 ef b7 	movl   $0x8b7ef60,0x8(%esp)
 8165624:	08 
 8165625:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 816562c:	08 
 816562d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8165634:	e8 d1 e5 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165639:	b8 00 00 00 00       	mov    $0x0,%eax
 816563e:	eb 4d                	jmp    816568d <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x209>
 8165640:	8b 45 08             	mov    0x8(%ebp),%eax
 8165643:	8b 55 0c             	mov    0xc(%ebp),%edx
 8165646:	89 54 24 04          	mov    %edx,0x4(%esp)
 816564a:	89 04 24             	mov    %eax,(%esp)
 816564d:	e8 dc f9 ff ff       	call   816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>
 8165652:	88 45 f7             	mov    %al,-0x9(%ebp)
 8165655:	8b 45 10             	mov    0x10(%ebp),%eax
 8165658:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 816565c:	8d 50 01             	lea    0x1(%eax),%edx
 816565f:	8b 45 10             	mov    0x10(%ebp),%eax
 8165662:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8165666:	8b 45 10             	mov    0x10(%ebp),%eax
 8165669:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 816566f:	8b 45 08             	mov    0x8(%ebp),%eax
 8165672:	89 04 24             	mov    %eax,(%esp)
 8165675:	e8 48 f9 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 816567a:	84 c0                	test   %al,%al
 816567c:	74 0b                	je     8165689 <_ZN19ClearDungeonMission13rewardMissionEP5CUserR16HeroMissionValue+0x205>
 816567e:	8b 45 10             	mov    0x10(%ebp),%eax
 8165681:	89 04 24             	mov    %eax,(%esp)
 8165684:	e8 29 f5 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 8165689:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 816568d:	83 c4 30             	add    $0x30,%esp
 8165690:	5b                   	pop    %ebx
 8165691:	5e                   	pop    %esi
 8165692:	5d                   	pop    %ebp
 8165693:	c3                   	ret

```

```c
// ClearDungeonMission::rewardMission @ 0x8165484

/* ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
ClearDungeonMission::rewardMission
          (ClearDungeonMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  
  cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
  if ((cVar4 == '\x01') || (*(short *)(param_2 + 10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar1 = *(ushort *)(param_2 + 10);
    uVar2 = *(undefined4 *)param_2;
    uVar6 = CUser::get_charac_no(param_1,-1);
    LogManager::logFormat
              (1,"localtaiwan/Event/EventHeroMission.cpp",
               "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xac,
               "[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",uVar6,uVar2,
               (uint)uVar1);
    uVar5 = 0;
  }
  else {
    iVar7 = BaseHeroMissionCondition::getMissionType((BaseHeroMissionCondition *)this);
    if ((iVar7 == 2) && (*(short *)(param_2 + 8) != 7)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = *(ushort *)(param_2 + 8);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xb4,
                 "[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",uVar6,
                 uVar2,(uint)uVar1);
      uVar5 = 0;
    }
    else {
      uVar1 = *(ushort *)(param_2 + 4);
      puVar8 = (ushort *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      if (uVar1 < *puVar8) {
        uVar1 = *(ushort *)(param_2 + 10);
        uVar2 = *(undefined4 *)param_2;
        uVar6 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "virtual bool ClearDungeonMission::rewardMission(CUser*, HeroMissionValue&)",0xbb
                   ,"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",uVar6,
                   uVar2,(uint)uVar1);
        uVar5 = 0;
      }
      else {
        uVar5 = BaseHeroMissionCondition::rewardProcess((BaseHeroMissionCondition *)this,param_1);
        *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + 1;
        *(undefined2 *)(param_2 + 6) = 1;
        cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
        if (cVar4 != '\0') {
          HeroMissionValue::reset(param_2);
        }
      }
    }
  }
  return uVar5;
}

```

---

## ~ClearDungeonMission

```asm
// === 08165366 ClearDungeonMission::~ClearDungeonMission  [0x08165366-0x8165395] ===
 8165366:	55                   	push   %ebp
 8165367:	89 e5                	mov    %esp,%ebp
 8165369:	83 ec 18             	sub    $0x18,%esp
 816536c:	8b 45 08             	mov    0x8(%ebp),%eax
 816536f:	c7 00 c0 f0 b7 08    	movl   $0x8b7f0c0,(%eax)
 8165375:	8b 45 08             	mov    0x8(%ebp),%eax
 8165378:	89 04 24             	mov    %eax,(%esp)
 816537b:	e8 ba fb ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 8165380:	b8 00 00 00 00       	mov    $0x0,%eax
 8165385:	84 c0                	test   %al,%al
 8165387:	74 0b                	je     8165394 <_ZN19ClearDungeonMissionD1Ev+0x2e>
 8165389:	8b 45 08             	mov    0x8(%ebp),%eax
 816538c:	89 04 24             	mov    %eax,(%esp)
 816538f:	e8 5c f1 5b 00       	call   87244f0 <_ZdlPv>
 8165394:	c9                   	leave
 8165395:	c3                   	ret

```

```c
// ClearDungeonMission::~ClearDungeonMission @ 0x8165366

/* WARNING: Removing unreachable block (ram,0x08165389) */
/* ClearDungeonMission::~ClearDungeonMission() */

void __thiscall ClearDungeonMission::~ClearDungeonMission(ClearDungeonMission *this)

{
  *(undefined ***)this = &PTR__ClearDungeonMission_08b7f0c0;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~ClearDungeonMission_08165396

```asm
// === 08165396 ClearDungeonMission::~ClearDungeonMission  [0x08165396-0x81653b3] ===
 8165396:	55                   	push   %ebp
 8165397:	89 e5                	mov    %esp,%ebp
 8165399:	83 ec 18             	sub    $0x18,%esp
 816539c:	8b 45 08             	mov    0x8(%ebp),%eax
 816539f:	89 04 24             	mov    %eax,(%esp)
 81653a2:	e8 bf ff ff ff       	call   8165366 <_ZN19ClearDungeonMissionD1Ev>
 81653a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81653aa:	89 04 24             	mov    %eax,(%esp)
 81653ad:	e8 3e f1 5b 00       	call   87244f0 <_ZdlPv>
 81653b2:	c9                   	leave
 81653b3:	c3                   	ret

```

```c
// ClearDungeonMission::~ClearDungeonMission @ 0x8165396

/* ClearDungeonMission::~ClearDungeonMission() */

void __thiscall ClearDungeonMission::~ClearDungeonMission(ClearDungeonMission *this)

{
  ~ClearDungeonMission(this);
  operator_delete(this);
  return;
}

```

