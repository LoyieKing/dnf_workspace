# UseCubeMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## UseCubeMission

```asm
// === 08165920 UseCubeMission::UseCubeMission  [0x08165920-0x8165943] ===
 8165920:	55                   	push   %ebp
 8165921:	89 e5                	mov    %esp,%ebp
 8165923:	83 ec 18             	sub    $0x18,%esp
 8165926:	8b 45 08             	mov    0x8(%ebp),%eax
 8165929:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8165930:	00 
 8165931:	89 04 24             	mov    %eax,(%esp)
 8165934:	e8 d9 f5 ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 8165939:	8b 45 08             	mov    0x8(%ebp),%eax
 816593c:	c7 00 90 f0 b7 08    	movl   $0x8b7f090,(%eax)
 8165942:	c9                   	leave
 8165943:	c3                   	ret

```

```c
// UseCubeMission::UseCubeMission @ 0x8165920

/* UseCubeMission::UseCubeMission() */

void __thiscall UseCubeMission::UseCubeMission(UseCubeMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,3);
  *(undefined ***)this = &PTR__UseCubeMission_08b7f090;
  return;
}

```

---

## processMission

```asm
// === 08165992 UseCubeMission::processMission  [0x08165992-0x8165a2d] ===
 8165992:	55                   	push   %ebp
 8165993:	89 e5                	mov    %esp,%ebp
 8165995:	83 ec 18             	sub    $0x18,%esp
 8165998:	8b 45 08             	mov    0x8(%ebp),%eax
 816599b:	83 c0 28             	add    $0x28,%eax
 816599e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81659a5:	00 
 81659a6:	89 04 24             	mov    %eax,(%esp)
 81659a9:	e8 1c 2b 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81659ae:	0f b7 10             	movzwl (%eax),%edx
 81659b1:	8b 45 10             	mov    0x10(%ebp),%eax
 81659b4:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81659b8:	66 39 c2             	cmp    %ax,%dx
 81659bb:	0f 96 c0             	setbe  %al
 81659be:	84 c0                	test   %al,%al
 81659c0:	75 69                	jne    8165a2b <_ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej+0x99>
 81659c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81659c5:	83 c0 28             	add    $0x28,%eax
 81659c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81659cf:	00 
 81659d0:	89 04 24             	mov    %eax,(%esp)
 81659d3:	e8 f2 2a 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81659d8:	0f b7 00             	movzwl (%eax),%eax
 81659db:	0f b7 d0             	movzwl %ax,%edx
 81659de:	8b 45 10             	mov    0x10(%ebp),%eax
 81659e1:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81659e5:	0f b7 c0             	movzwl %ax,%eax
 81659e8:	03 45 14             	add    0x14(%ebp),%eax
 81659eb:	39 c2                	cmp    %eax,%edx
 81659ed:	0f 96 c0             	setbe  %al
 81659f0:	84 c0                	test   %al,%al
 81659f2:	74 22                	je     8165a16 <_ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej+0x84>
 81659f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81659f7:	83 c0 28             	add    $0x28,%eax
 81659fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165a01:	00 
 8165a02:	89 04 24             	mov    %eax,(%esp)
 8165a05:	e8 c0 2a 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8165a0a:	0f b7 10             	movzwl (%eax),%edx
 8165a0d:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a10:	66 89 50 04          	mov    %dx,0x4(%eax)
 8165a14:	eb 16                	jmp    8165a2c <_ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej+0x9a>
 8165a16:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a19:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 8165a1d:	8b 45 14             	mov    0x14(%ebp),%eax
 8165a20:	01 c2                	add    %eax,%edx
 8165a22:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a25:	66 89 50 04          	mov    %dx,0x4(%eax)
 8165a29:	eb 01                	jmp    8165a2c <_ZN14UseCubeMission14processMissionEP5CUserR16HeroMissionValuej+0x9a>
 8165a2b:	90                   	nop
 8165a2c:	c9                   	leave
 8165a2d:	c3                   	ret

```

```c
// UseCubeMission::processMission @ 0x8165992

/* UseCubeMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void __thiscall
UseCubeMission::processMission
          (UseCubeMission *this,CUser *param_1,HeroMissionValue *param_2,uint param_3)

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
// === 08165a2e UseCubeMission::rewardMission  [0x08165a2e-0x8165bab] ===
 8165a2e:	55                   	push   %ebp
 8165a2f:	89 e5                	mov    %esp,%ebp
 8165a31:	56                   	push   %esi
 8165a32:	53                   	push   %ebx
 8165a33:	83 ec 30             	sub    $0x30,%esp
 8165a36:	8b 45 08             	mov    0x8(%ebp),%eax
 8165a39:	89 04 24             	mov    %eax,(%esp)
 8165a3c:	e8 81 f5 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165a41:	83 f0 01             	xor    $0x1,%eax
 8165a44:	84 c0                	test   %al,%al
 8165a46:	74 13                	je     8165a5b <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 8165a48:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a4b:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165a4f:	66 85 c0             	test   %ax,%ax
 8165a52:	74 07                	je     8165a5b <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x2d>
 8165a54:	b8 01 00 00 00       	mov    $0x1,%eax
 8165a59:	eb 05                	jmp    8165a60 <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x32>
 8165a5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8165a60:	84 c0                	test   %al,%al
 8165a62:	74 66                	je     8165aca <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x9c>
 8165a64:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a67:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165a6b:	0f b7 f0             	movzwl %ax,%esi
 8165a6e:	8b 45 10             	mov    0x10(%ebp),%eax
 8165a71:	8b 00                	mov    (%eax),%eax
 8165a73:	89 c3                	mov    %eax,%ebx
 8165a75:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165a7c:	ff 
 8165a7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165a80:	89 04 24             	mov    %eax,(%esp)
 8165a83:	e8 18 85 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165a88:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165a8c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165a90:	89 44 24 14          	mov    %eax,0x14(%esp)
 8165a94:	c7 44 24 10 28 db b7 	movl   $0x8b7db28,0x10(%esp)
 8165a9b:	08 
 8165a9c:	c7 44 24 0c 17 01 00 	movl   $0x117,0xc(%esp)
 8165aa3:	00 
 8165aa4:	c7 44 24 08 a0 ee b7 	movl   $0x8b7eea0,0x8(%esp)
 8165aab:	08 
 8165aac:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8165ab3:	08 
 8165ab4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8165abb:	e8 4a e1 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165ac0:	b8 00 00 00 00       	mov    $0x0,%eax
 8165ac5:	e9 da 00 00 00       	jmp    8165ba4 <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x176>
 8165aca:	8b 45 10             	mov    0x10(%ebp),%eax
 8165acd:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 8165ad1:	8b 45 08             	mov    0x8(%ebp),%eax
 8165ad4:	83 c0 28             	add    $0x28,%eax
 8165ad7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165ade:	00 
 8165adf:	89 04 24             	mov    %eax,(%esp)
 8165ae2:	e8 e3 29 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8165ae7:	0f b7 00             	movzwl (%eax),%eax
 8165aea:	66 39 c3             	cmp    %ax,%bx
 8165aed:	0f 92 c0             	setb   %al
 8165af0:	84 c0                	test   %al,%al
 8165af2:	74 63                	je     8165b57 <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x129>
 8165af4:	8b 45 10             	mov    0x10(%ebp),%eax
 8165af7:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165afb:	0f b7 f0             	movzwl %ax,%esi
 8165afe:	8b 45 10             	mov    0x10(%ebp),%eax
 8165b01:	8b 00                	mov    (%eax),%eax
 8165b03:	89 c3                	mov    %eax,%ebx
 8165b05:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165b0c:	ff 
 8165b0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165b10:	89 04 24             	mov    %eax,(%esp)
 8165b13:	e8 88 84 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165b18:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165b1c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165b20:	89 44 24 14          	mov    %eax,0x14(%esp)
 8165b24:	c7 44 24 10 d8 db b7 	movl   $0x8b7dbd8,0x10(%esp)
 8165b2b:	08 
 8165b2c:	c7 44 24 0c 1e 01 00 	movl   $0x11e,0xc(%esp)
 8165b33:	00 
 8165b34:	c7 44 24 08 a0 ee b7 	movl   $0x8b7eea0,0x8(%esp)
 8165b3b:	08 
 8165b3c:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8165b43:	08 
 8165b44:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8165b4b:	e8 ba e0 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165b50:	b8 00 00 00 00       	mov    $0x0,%eax
 8165b55:	eb 4d                	jmp    8165ba4 <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x176>
 8165b57:	8b 45 08             	mov    0x8(%ebp),%eax
 8165b5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8165b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8165b61:	89 04 24             	mov    %eax,(%esp)
 8165b64:	e8 c5 f4 ff ff       	call   816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>
 8165b69:	88 45 f7             	mov    %al,-0x9(%ebp)
 8165b6c:	8b 45 10             	mov    0x10(%ebp),%eax
 8165b6f:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165b73:	8d 50 01             	lea    0x1(%eax),%edx
 8165b76:	8b 45 10             	mov    0x10(%ebp),%eax
 8165b79:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8165b7d:	8b 45 10             	mov    0x10(%ebp),%eax
 8165b80:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 8165b86:	8b 45 08             	mov    0x8(%ebp),%eax
 8165b89:	89 04 24             	mov    %eax,(%esp)
 8165b8c:	e8 31 f4 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165b91:	84 c0                	test   %al,%al
 8165b93:	74 0b                	je     8165ba0 <_ZN14UseCubeMission13rewardMissionEP5CUserR16HeroMissionValue+0x172>
 8165b95:	8b 45 10             	mov    0x10(%ebp),%eax
 8165b98:	89 04 24             	mov    %eax,(%esp)
 8165b9b:	e8 12 f0 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 8165ba0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8165ba4:	83 c4 30             	add    $0x30,%esp
 8165ba7:	5b                   	pop    %ebx
 8165ba8:	5e                   	pop    %esi
 8165ba9:	5d                   	pop    %ebp
 8165baa:	c3                   	ret
 8165bab:	90                   	nop

```

```c
// UseCubeMission::rewardMission @ 0x8165a2e

/* UseCubeMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
UseCubeMission::rewardMission(UseCubeMission *this,CUser *param_1,HeroMissionValue *param_2)

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
               "virtual bool UseCubeMission::rewardMission(CUser*, HeroMissionValue&)",0x117,
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
                 "virtual bool UseCubeMission::rewardMission(CUser*, HeroMissionValue&)",0x11e,
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

## ~UseCubeMission

```asm
// === 08165944 UseCubeMission::~UseCubeMission  [0x08165944-0x8165973] ===
 8165944:	55                   	push   %ebp
 8165945:	89 e5                	mov    %esp,%ebp
 8165947:	83 ec 18             	sub    $0x18,%esp
 816594a:	8b 45 08             	mov    0x8(%ebp),%eax
 816594d:	c7 00 90 f0 b7 08    	movl   $0x8b7f090,(%eax)
 8165953:	8b 45 08             	mov    0x8(%ebp),%eax
 8165956:	89 04 24             	mov    %eax,(%esp)
 8165959:	e8 dc f5 ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 816595e:	b8 00 00 00 00       	mov    $0x0,%eax
 8165963:	84 c0                	test   %al,%al
 8165965:	74 0b                	je     8165972 <_ZN14UseCubeMissionD1Ev+0x2e>
 8165967:	8b 45 08             	mov    0x8(%ebp),%eax
 816596a:	89 04 24             	mov    %eax,(%esp)
 816596d:	e8 7e eb 5b 00       	call   87244f0 <_ZdlPv>
 8165972:	c9                   	leave
 8165973:	c3                   	ret

```

```c
// UseCubeMission::~UseCubeMission @ 0x8165944

/* WARNING: Removing unreachable block (ram,0x08165967) */
/* UseCubeMission::~UseCubeMission() */

void __thiscall UseCubeMission::~UseCubeMission(UseCubeMission *this)

{
  *(undefined ***)this = &PTR__UseCubeMission_08b7f090;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~UseCubeMission_08165974

```asm
// === 08165974 UseCubeMission::~UseCubeMission  [0x08165974-0x8165991] ===
 8165974:	55                   	push   %ebp
 8165975:	89 e5                	mov    %esp,%ebp
 8165977:	83 ec 18             	sub    $0x18,%esp
 816597a:	8b 45 08             	mov    0x8(%ebp),%eax
 816597d:	89 04 24             	mov    %eax,(%esp)
 8165980:	e8 bf ff ff ff       	call   8165944 <_ZN14UseCubeMissionD1Ev>
 8165985:	8b 45 08             	mov    0x8(%ebp),%eax
 8165988:	89 04 24             	mov    %eax,(%esp)
 816598b:	e8 60 eb 5b 00       	call   87244f0 <_ZdlPv>
 8165990:	c9                   	leave
 8165991:	c3                   	ret

```

```c
// UseCubeMission::~UseCubeMission @ 0x8165974

/* UseCubeMission::~UseCubeMission() */

void __thiscall UseCubeMission::~UseCubeMission(UseCubeMission *this)

{
  ~UseCubeMission(this);
  operator_delete(this);
  return;
}

```

