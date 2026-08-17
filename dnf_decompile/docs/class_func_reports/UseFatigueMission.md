# UseFatigueMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## UseFatigueMission

```asm
// === 08165694 UseFatigueMission::UseFatigueMission  [0x08165694-0x81656b7] ===
 8165694:	55                   	push   %ebp
 8165695:	89 e5                	mov    %esp,%ebp
 8165697:	83 ec 18             	sub    $0x18,%esp
 816569a:	8b 45 08             	mov    0x8(%ebp),%eax
 816569d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81656a4:	00 
 81656a5:	89 04 24             	mov    %eax,(%esp)
 81656a8:	e8 65 f8 ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 81656ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81656b0:	c7 00 a8 f0 b7 08    	movl   $0x8b7f0a8,(%eax)
 81656b6:	c9                   	leave
 81656b7:	c3                   	ret

```

```c
// UseFatigueMission::UseFatigueMission @ 0x8165694

/* UseFatigueMission::UseFatigueMission() */

void __thiscall UseFatigueMission::UseFatigueMission(UseFatigueMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,2);
  *(undefined ***)this = &PTR__UseFatigueMission_08b7f0a8;
  return;
}

```

---

## processMission

```asm
// === 08165706 UseFatigueMission::processMission  [0x08165706-0x81657a1] ===
 8165706:	55                   	push   %ebp
 8165707:	89 e5                	mov    %esp,%ebp
 8165709:	83 ec 18             	sub    $0x18,%esp
 816570c:	8b 45 08             	mov    0x8(%ebp),%eax
 816570f:	83 c0 28             	add    $0x28,%eax
 8165712:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165719:	00 
 816571a:	89 04 24             	mov    %eax,(%esp)
 816571d:	e8 a8 2d 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8165722:	0f b7 10             	movzwl (%eax),%edx
 8165725:	8b 45 10             	mov    0x10(%ebp),%eax
 8165728:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 816572c:	66 39 c2             	cmp    %ax,%dx
 816572f:	0f 96 c0             	setbe  %al
 8165732:	84 c0                	test   %al,%al
 8165734:	75 69                	jne    816579f <_ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej+0x99>
 8165736:	8b 45 08             	mov    0x8(%ebp),%eax
 8165739:	83 c0 28             	add    $0x28,%eax
 816573c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165743:	00 
 8165744:	89 04 24             	mov    %eax,(%esp)
 8165747:	e8 7e 2d 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 816574c:	0f b7 00             	movzwl (%eax),%eax
 816574f:	0f b7 d0             	movzwl %ax,%edx
 8165752:	8b 45 10             	mov    0x10(%ebp),%eax
 8165755:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8165759:	0f b7 c0             	movzwl %ax,%eax
 816575c:	03 45 14             	add    0x14(%ebp),%eax
 816575f:	39 c2                	cmp    %eax,%edx
 8165761:	0f 96 c0             	setbe  %al
 8165764:	84 c0                	test   %al,%al
 8165766:	74 22                	je     816578a <_ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej+0x84>
 8165768:	8b 45 08             	mov    0x8(%ebp),%eax
 816576b:	83 c0 28             	add    $0x28,%eax
 816576e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165775:	00 
 8165776:	89 04 24             	mov    %eax,(%esp)
 8165779:	e8 4c 2d 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 816577e:	0f b7 10             	movzwl (%eax),%edx
 8165781:	8b 45 10             	mov    0x10(%ebp),%eax
 8165784:	66 89 50 04          	mov    %dx,0x4(%eax)
 8165788:	eb 16                	jmp    81657a0 <_ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej+0x9a>
 816578a:	8b 45 10             	mov    0x10(%ebp),%eax
 816578d:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 8165791:	8b 45 14             	mov    0x14(%ebp),%eax
 8165794:	01 c2                	add    %eax,%edx
 8165796:	8b 45 10             	mov    0x10(%ebp),%eax
 8165799:	66 89 50 04          	mov    %dx,0x4(%eax)
 816579d:	eb 01                	jmp    81657a0 <_ZN17UseFatigueMission14processMissionEP5CUserR16HeroMissionValuej+0x9a>
 816579f:	90                   	nop
 81657a0:	c9                   	leave
 81657a1:	c3                   	ret

```

```c
// UseFatigueMission::processMission @ 0x8165706

/* UseFatigueMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
UseFatigueMission::processMission
          (UseFatigueMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
  if (*(ushort *)(param_2 + 4) < *puVar1) {
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (*(ushort *)(param_2 + 4) + param_3 < (uint)*puVar1) {
      *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + (short)param_3;
    }
    else {
      puVar2 = (undefined2 *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
      *(undefined2 *)(param_2 + 4) = *puVar2;
    }
  }
  return;
}

```

---

## rewardMission

```asm
// === 081657a2 UseFatigueMission::rewardMission  [0x081657a2-0x816591f] ===
 81657a2:	55                   	push   %ebp
 81657a3:	89 e5                	mov    %esp,%ebp
 81657a5:	56                   	push   %esi
 81657a6:	53                   	push   %ebx
 81657a7:	83 ec 30             	sub    $0x30,%esp
 81657aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81657ad:	89 04 24             	mov    %eax,(%esp)
 81657b0:	e8 0d f8 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 81657b5:	83 f0 01             	xor    $0x1,%eax
 81657b8:	84 c0                	test   %al,%al
 81657ba:	74 13                	je     81657cf <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 81657bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81657bf:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81657c3:	66 85 c0             	test   %ax,%ax
 81657c6:	74 07                	je     81657cf <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 81657c8:	b8 01 00 00 00       	mov    $0x1,%eax
 81657cd:	eb 05                	jmp    81657d4 <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x32>
 81657cf:	b8 00 00 00 00       	mov    $0x0,%eax
 81657d4:	84 c0                	test   %al,%al
 81657d6:	74 66                	je     816583e <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x9c>
 81657d8:	8b 45 10             	mov    0x10(%ebp),%eax
 81657db:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81657df:	0f b7 f0             	movzwl %ax,%esi
 81657e2:	8b 45 10             	mov    0x10(%ebp),%eax
 81657e5:	8b 00                	mov    (%eax),%eax
 81657e7:	89 c3                	mov    %eax,%ebx
 81657e9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81657f0:	ff 
 81657f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81657f4:	89 04 24             	mov    %eax,(%esp)
 81657f7:	e8 a4 87 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81657fc:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165800:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165804:	89 44 24 14          	mov    %eax,0x14(%esp)
 8165808:	c7 44 24 10 28 db b7 	movl   $0x8b7db28,0x10(%esp)
 816580f:	08 
 8165810:	c7 44 24 0c e5 00 00 	movl   $0xe5,0xc(%esp)
 8165817:	00 
 8165818:	c7 44 24 08 00 ef b7 	movl   $0x8b7ef00,0x8(%esp)
 816581f:	08 
 8165820:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8165827:	08 
 8165828:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816582f:	e8 d6 e3 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165834:	b8 00 00 00 00       	mov    $0x0,%eax
 8165839:	e9 da 00 00 00       	jmp    8165918 <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x176>
 816583e:	8b 45 10             	mov    0x10(%ebp),%eax
 8165841:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 8165845:	8b 45 08             	mov    0x8(%ebp),%eax
 8165848:	83 c0 28             	add    $0x28,%eax
 816584b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165852:	00 
 8165853:	89 04 24             	mov    %eax,(%esp)
 8165856:	e8 6f 2c 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 816585b:	0f b7 00             	movzwl (%eax),%eax
 816585e:	66 39 c3             	cmp    %ax,%bx
 8165861:	0f 92 c0             	setb   %al
 8165864:	84 c0                	test   %al,%al
 8165866:	74 63                	je     81658cb <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x129>
 8165868:	8b 45 10             	mov    0x10(%ebp),%eax
 816586b:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 816586f:	0f b7 f0             	movzwl %ax,%esi
 8165872:	8b 45 10             	mov    0x10(%ebp),%eax
 8165875:	8b 00                	mov    (%eax),%eax
 8165877:	89 c3                	mov    %eax,%ebx
 8165879:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165880:	ff 
 8165881:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165884:	89 04 24             	mov    %eax,(%esp)
 8165887:	e8 14 87 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 816588c:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165890:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165894:	89 44 24 14          	mov    %eax,0x14(%esp)
 8165898:	c7 44 24 10 d8 db b7 	movl   $0x8b7dbd8,0x10(%esp)
 816589f:	08 
 81658a0:	c7 44 24 0c ec 00 00 	movl   $0xec,0xc(%esp)
 81658a7:	00 
 81658a8:	c7 44 24 08 00 ef b7 	movl   $0x8b7ef00,0x8(%esp)
 81658af:	08 
 81658b0:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 81658b7:	08 
 81658b8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81658bf:	e8 46 e3 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81658c4:	b8 00 00 00 00       	mov    $0x0,%eax
 81658c9:	eb 4d                	jmp    8165918 <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x176>
 81658cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81658ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81658d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81658d5:	89 04 24             	mov    %eax,(%esp)
 81658d8:	e8 51 f7 ff ff       	call   816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>
 81658dd:	88 45 f7             	mov    %al,-0x9(%ebp)
 81658e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81658e3:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81658e7:	8d 50 01             	lea    0x1(%eax),%edx
 81658ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81658ed:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81658f1:	8b 45 10             	mov    0x10(%ebp),%eax
 81658f4:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 81658fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81658fd:	89 04 24             	mov    %eax,(%esp)
 8165900:	e8 bd f6 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165905:	84 c0                	test   %al,%al
 8165907:	74 0b                	je     8165914 <_ZN17UseFatigueMission13rewardMissionEP5CUserR16HeroMissionValue+0x172>
 8165909:	8b 45 10             	mov    0x10(%ebp),%eax
 816590c:	89 04 24             	mov    %eax,(%esp)
 816590f:	e8 9e f2 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 8165914:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8165918:	83 c4 30             	add    $0x30,%esp
 816591b:	5b                   	pop    %ebx
 816591c:	5e                   	pop    %esi
 816591d:	5d                   	pop    %ebp
 816591e:	c3                   	ret
 816591f:	90                   	nop

```

```c
// UseFatigueMission::rewardMission @ 0x81657a2

/* UseFatigueMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
UseFatigueMission::rewardMission(UseFatigueMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  
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
               "virtual bool UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)",0xe5,
               "[HeroMission] Already reward. (charac:%u,mission:%d,count:%d)",uVar6,uVar2,
               (uint)uVar1);
    uVar5 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar7 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (uVar1 < *puVar7) {
      uVar1 = *(ushort *)(param_2 + 10);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "virtual bool UseFatigueMission::rewardMission(CUser*, HeroMissionValue&)",0xec,
                 "[HeroMission] Invalid reward condition. (charac:%u,mission:%d,count:%d)",uVar6,
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
  return uVar5;
}

```

---

## ~UseFatigueMission

```asm
// === 081656b8 UseFatigueMission::~UseFatigueMission  [0x081656b8-0x81656e7] ===
 81656b8:	55                   	push   %ebp
 81656b9:	89 e5                	mov    %esp,%ebp
 81656bb:	83 ec 18             	sub    $0x18,%esp
 81656be:	8b 45 08             	mov    0x8(%ebp),%eax
 81656c1:	c7 00 a8 f0 b7 08    	movl   $0x8b7f0a8,(%eax)
 81656c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81656ca:	89 04 24             	mov    %eax,(%esp)
 81656cd:	e8 68 f8 ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 81656d2:	b8 00 00 00 00       	mov    $0x0,%eax
 81656d7:	84 c0                	test   %al,%al
 81656d9:	74 0b                	je     81656e6 <_ZN17UseFatigueMissionD1Ev+0x2e>
 81656db:	8b 45 08             	mov    0x8(%ebp),%eax
 81656de:	89 04 24             	mov    %eax,(%esp)
 81656e1:	e8 0a ee 5b 00       	call   87244f0 <_ZdlPv>
 81656e6:	c9                   	leave
 81656e7:	c3                   	ret

```

```c
// UseFatigueMission::~UseFatigueMission @ 0x81656b8

/* WARNING: Removing unreachable block (ram,0x081656db) */
/* UseFatigueMission::~UseFatigueMission() */

void __thiscall UseFatigueMission::~UseFatigueMission(UseFatigueMission *this)

{
  *(undefined ***)this = &PTR__UseFatigueMission_08b7f0a8;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~UseFatigueMission_081656e8

```asm
// === 081656e8 UseFatigueMission::~UseFatigueMission  [0x081656e8-0x8165705] ===
 81656e8:	55                   	push   %ebp
 81656e9:	89 e5                	mov    %esp,%ebp
 81656eb:	83 ec 18             	sub    $0x18,%esp
 81656ee:	8b 45 08             	mov    0x8(%ebp),%eax
 81656f1:	89 04 24             	mov    %eax,(%esp)
 81656f4:	e8 bf ff ff ff       	call   81656b8 <_ZN17UseFatigueMissionD1Ev>
 81656f9:	8b 45 08             	mov    0x8(%ebp),%eax
 81656fc:	89 04 24             	mov    %eax,(%esp)
 81656ff:	e8 ec ed 5b 00       	call   87244f0 <_ZdlPv>
 8165704:	c9                   	leave
 8165705:	c3                   	ret

```

```c
// UseFatigueMission::~UseFatigueMission @ 0x81656e8

/* UseFatigueMission::~UseFatigueMission() */

void __thiscall UseFatigueMission::~UseFatigueMission(UseFatigueMission *this)

{
  ~UseFatigueMission(this);
  operator_delete(this);
  return;
}

```

