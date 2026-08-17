# break_away_prevent__CBreakAwayPreventSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CBreakAwayPreventSystem

```asm
// === 0831c3e0 break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem  [0x0831c3e0-0x831c485] ===
 831c3e0:	55                   	push   %ebp
 831c3e1:	89 e5                	mov    %esp,%ebp
 831c3e3:	56                   	push   %esi
 831c3e4:	53                   	push   %ebx
 831c3e5:	83 ec 10             	sub    $0x10,%esp
 831c3e8:	8b 45 08             	mov    0x8(%ebp),%eax
 831c3eb:	89 04 24             	mov    %eax,(%esp)
 831c3ee:	e8 bd 0e 00 00       	call   831d2b0 <_ZN37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGERC1Ev>
 831c3f3:	8b 45 08             	mov    0x8(%ebp),%eax
 831c3f6:	05 e4 02 00 00       	add    $0x2e4,%eax
 831c3fb:	89 04 24             	mov    %eax,(%esp)
 831c3fe:	e8 21 12 00 00       	call   831d624 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 831c403:	8b 45 08             	mov    0x8(%ebp),%eax
 831c406:	05 fc 02 00 00       	add    $0x2fc,%eax
 831c40b:	89 c3                	mov    %eax,%ebx
 831c40d:	be 04 00 00 00       	mov    $0x4,%esi
 831c412:	eb 0e                	jmp    831c422 <_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev+0x42>
 831c414:	89 1c 24             	mov    %ebx,(%esp)
 831c417:	e8 92 0f 00 00       	call   831d3ae <_ZN15STRewardDataKeyC1Ev>
 831c41c:	83 c3 03             	add    $0x3,%ebx
 831c41f:	83 ee 01             	sub    $0x1,%esi
 831c422:	83 fe ff             	cmp    $0xffffffff,%esi
 831c425:	0f 95 c0             	setne  %al
 831c428:	84 c0                	test   %al,%al
 831c42a:	75 e8                	jne    831c414 <_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev+0x34>
 831c42c:	8b 45 08             	mov    0x8(%ebp),%eax
 831c42f:	05 0b 03 00 00       	add    $0x30b,%eax
 831c434:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831c43b:	00 
 831c43c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831c443:	00 
 831c444:	89 04 24             	mov    %eax,(%esp)
 831c447:	e8 74 18 d6 ff       	call   807dcc0 <memset@plt>
 831c44c:	8b 45 08             	mov    0x8(%ebp),%eax
 831c44f:	05 e4 02 00 00       	add    $0x2e4,%eax
 831c454:	89 04 24             	mov    %eax,(%esp)
 831c457:	e8 42 12 00 00       	call   831d69e <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
 831c45c:	eb 20                	jmp    831c47e <_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev+0x9e>
 831c45e:	89 d3                	mov    %edx,%ebx
 831c460:	89 c6                	mov    %eax,%esi
 831c462:	8b 45 08             	mov    0x8(%ebp),%eax
 831c465:	05 e4 02 00 00       	add    $0x2e4,%eax
 831c46a:	89 04 24             	mov    %eax,(%esp)
 831c46d:	e8 d6 10 00 00       	call   831d548 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 831c472:	89 f0                	mov    %esi,%eax
 831c474:	89 da                	mov    %ebx,%edx
 831c476:	89 04 24             	mov    %eax,(%esp)
 831c479:	e8 d2 72 7c 00       	call   8ae3750 <_Unwind_Resume>
 831c47e:	83 c4 10             	add    $0x10,%esp
 831c481:	5b                   	pop    %ebx
 831c482:	5e                   	pop    %esi
 831c483:	5d                   	pop    %ebp
 831c484:	c3                   	ret
 831c485:	90                   	nop

```

```c
// break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem @ 0x831c3e0

/* break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem() */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem(CBreakAwayPreventSystem *this)

{
  STRewardDataKey *this_00;
  int iVar1;
  
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER::SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER
            ((SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *)this);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::map((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
         *)(this + 0x2e4));
  this_00 = (STRewardDataKey *)(this + 0x2fc);
  for (iVar1 = 4; iVar1 != -1; iVar1 = iVar1 + -1) {
    STRewardDataKey::STRewardDataKey(this_00);
    this_00 = this_00 + 3;
  }
  memset(this + 0x30b,0,0x1f);
                    /* try { // try from 0831c457 to 0831c45b has its CatchHandler @ 0831c45e */
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::clear((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
           *)(this + 0x2e4));
  return;
}

```

---

## GM_UpdateUvList

```asm
// === 0831ca5a break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList  [0x0831ca5a-0x831cb55] ===
 831ca5a:	55                   	push   %ebp
 831ca5b:	89 e5                	mov    %esp,%ebp
 831ca5d:	83 ec 18             	sub    $0x18,%esp
 831ca60:	8b 45 08             	mov    0x8(%ebp),%eax
 831ca63:	05 0b 03 00 00       	add    $0x30b,%eax
 831ca68:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831ca6f:	00 
 831ca70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831ca77:	00 
 831ca78:	89 04 24             	mov    %eax,(%esp)
 831ca7b:	e8 40 12 d6 ff       	call   807dcc0 <memset@plt>
 831ca80:	8b 45 10             	mov    0x10(%ebp),%eax
 831ca83:	83 f8 02             	cmp    $0x2,%eax
 831ca86:	74 40                	je     831cac8 <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0x6e>
 831ca88:	83 f8 02             	cmp    $0x2,%eax
 831ca8b:	77 0a                	ja     831ca97 <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0x3d>
 831ca8d:	83 f8 01             	cmp    $0x1,%eax
 831ca90:	74 14                	je     831caa6 <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0x4c>
 831ca92:	e9 95 00 00 00       	jmp    831cb2c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xd2>
 831ca97:	83 f8 03             	cmp    $0x3,%eax
 831ca9a:	74 4e                	je     831caea <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0x90>
 831ca9c:	83 f8 04             	cmp    $0x4,%eax
 831ca9f:	74 6b                	je     831cb0c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xb2>
 831caa1:	e9 86 00 00 00       	jmp    831cb2c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xd2>
 831caa6:	8b 45 08             	mov    0x8(%ebp),%eax
 831caa9:	05 0b 03 00 00       	add    $0x30b,%eax
 831caae:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cab5:	00 
 831cab6:	c7 44 24 04 c0 42 c2 	movl   $0x8c242c0,0x4(%esp)
 831cabd:	08 
 831cabe:	89 04 24             	mov    %eax,(%esp)
 831cac1:	e8 da 0d d6 ff       	call   807d8a0 <memcpy@plt>
 831cac6:	eb 64                	jmp    831cb2c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xd2>
 831cac8:	8b 45 08             	mov    0x8(%ebp),%eax
 831cacb:	05 0b 03 00 00       	add    $0x30b,%eax
 831cad0:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cad7:	00 
 831cad8:	c7 44 24 04 c0 42 c2 	movl   $0x8c242c0,0x4(%esp)
 831cadf:	08 
 831cae0:	89 04 24             	mov    %eax,(%esp)
 831cae3:	e8 b8 0d d6 ff       	call   807d8a0 <memcpy@plt>
 831cae8:	eb 42                	jmp    831cb2c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xd2>
 831caea:	8b 45 08             	mov    0x8(%ebp),%eax
 831caed:	05 0b 03 00 00       	add    $0x30b,%eax
 831caf2:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831caf9:	00 
 831cafa:	c7 44 24 04 c0 42 c2 	movl   $0x8c242c0,0x4(%esp)
 831cb01:	08 
 831cb02:	89 04 24             	mov    %eax,(%esp)
 831cb05:	e8 96 0d d6 ff       	call   807d8a0 <memcpy@plt>
 831cb0a:	eb 20                	jmp    831cb2c <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj+0xd2>
 831cb0c:	8b 45 08             	mov    0x8(%ebp),%eax
 831cb0f:	05 0b 03 00 00       	add    $0x30b,%eax
 831cb14:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cb1b:	00 
 831cb1c:	c7 44 24 04 e0 42 c2 	movl   $0x8c242e0,0x4(%esp)
 831cb23:	08 
 831cb24:	89 04 24             	mov    %eax,(%esp)
 831cb27:	e8 74 0d d6 ff       	call   807d8a0 <memcpy@plt>
 831cb2c:	8b 45 08             	mov    0x8(%ebp),%eax
 831cb2f:	05 0b 03 00 00       	add    $0x30b,%eax
 831cb34:	89 44 24 04          	mov    %eax,0x4(%esp)
 831cb38:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cb3b:	89 04 24             	mov    %eax,(%esp)
 831cb3e:	e8 f7 bb 11 00       	call   843873a <_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc>
 831cb43:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cb46:	89 04 24             	mov    %eax,(%esp)
 831cb49:	e8 f4 b3 e0 ff       	call   8127f42 <_ZN29CLocalChina_DB_BreakAwayReset11makeRequestEj>
 831cb4e:	b8 01 00 00 00       	mov    $0x1,%eax
 831cb53:	c9                   	leave
 831cb54:	c3                   	ret
 831cb55:	90                   	nop

```

```c
// break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList @ 0x831ca5a

/* break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList(unsigned int, unsigned int) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::GM_UpdateUvList
          (CBreakAwayPreventSystem *this,uint param_1,uint param_2)

{
  memset(this + 0x30b,0,0x1f);
  if (param_2 == 2) {
    memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
  }
  else if (param_2 < 3) {
    if (param_2 == 1) {
      memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
    }
  }
  else if (param_2 == 3) {
    memcpy(this + 0x30b,"000000000000000000111000010001",0x1f);
  }
  else if (param_2 == 4) {
    memcpy(this + 0x30b,"000000000000000000111000001000",0x1f);
  }
  DB_UpdateBreakAwayUvList::makeRequest(param_1,(char *)(this + 0x30b));
  CLocalChina_DB_BreakAwayReset::makeRequest(param_1);
  return 1;
}

```

---

## calBreakAwayUserPoint

```asm
// === 0831c810 break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint  [0x0831c810-0x831c871] ===
 831c810:	55                   	push   %ebp
 831c811:	89 e5                	mov    %esp,%ebp
 831c813:	83 ec 10             	sub    $0x10,%esp
 831c816:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 831c81d:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 831c824:	c7 45 fc 0f 00 00 00 	movl   $0xf,-0x4(%ebp)
 831c82b:	eb 26                	jmp    831c853 <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x43>
 831c82d:	8b 45 fc             	mov    -0x4(%ebp),%eax
 831c830:	8b 55 08             	mov    0x8(%ebp),%edx
 831c833:	0f b6 84 02 0b 03 00 	movzbl 0x30b(%edx,%eax,1),%eax
 831c83a:	00 
 831c83b:	3c 31                	cmp    $0x31,%al
 831c83d:	75 10                	jne    831c84f <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x3f>
 831c83f:	83 7d fc 15          	cmpl   $0x15,-0x4(%ebp)
 831c843:	76 06                	jbe    831c84b <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x3b>
 831c845:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 831c849:	eb 04                	jmp    831c84f <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x3f>
 831c84b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 831c84f:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 831c853:	83 7d fc 1c          	cmpl   $0x1c,-0x4(%ebp)
 831c857:	0f 96 c0             	setbe  %al
 831c85a:	84 c0                	test   %al,%al
 831c85c:	75 cf                	jne    831c82d <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x1d>
 831c85e:	83 7d f8 01          	cmpl   $0x1,-0x8(%ebp)
 831c862:	74 07                	je     831c86b <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x5b>
 831c864:	b8 00 00 00 00       	mov    $0x0,%eax
 831c869:	eb 05                	jmp    831c870 <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv+0x60>
 831c86b:	b8 01 00 00 00       	mov    $0x1,%eax
 831c870:	c9                   	leave
 831c871:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint @ 0x831c810

/* break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint() */

bool __thiscall
break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint(CBreakAwayPreventSystem *this)

{
  int local_c;
  uint local_8;
  
  local_c = 0;
  for (local_8 = 0xf; local_8 < 0x1d; local_8 = local_8 + 1) {
    if ((this[local_8 + 0x30b] == (CBreakAwayPreventSystem)0x31) && (0x15 < local_8)) {
      local_c = local_c + 1;
    }
  }
  return local_c == 1;
}

```

---

## getDiffConnectDay

```asm
// === 0831c794 break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay  [0x0831c794-0x831c80f] ===
 831c794:	55                   	push   %ebp
 831c795:	89 e5                	mov    %esp,%ebp
 831c797:	83 ec 28             	sub    $0x28,%esp
 831c79a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 831c79e:	75 07                	jne    831c7a7 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj+0x13>
 831c7a0:	b8 00 00 00 00       	mov    $0x0,%eax
 831c7a5:	eb 67                	jmp    831c80e <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj+0x7a>
 831c7a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 831c7aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c7ae:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 831c7b5:	e8 2f fb 14 00       	call   846c2e9 <_Z19getPrevScheduleTimeil>
 831c7ba:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831c7bd:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 831c7c4:	e8 d5 f4 da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 831c7c9:	89 c1                	mov    %eax,%ecx
 831c7cb:	2b 4d f0             	sub    -0x10(%ebp),%ecx
 831c7ce:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 831c7d3:	89 c8                	mov    %ecx,%eax
 831c7d5:	f7 ea                	imul   %edx
 831c7d7:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 831c7da:	89 c2                	mov    %eax,%edx
 831c7dc:	c1 fa 10             	sar    $0x10,%edx
 831c7df:	89 c8                	mov    %ecx,%eax
 831c7e1:	c1 f8 1f             	sar    $0x1f,%eax
 831c7e4:	89 d1                	mov    %edx,%ecx
 831c7e6:	29 c1                	sub    %eax,%ecx
 831c7e8:	89 c8                	mov    %ecx,%eax
 831c7ea:	89 45 e8             	mov    %eax,-0x18(%ebp)
 831c7ed:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 831c7f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 831c7f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c7fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 831c7fe:	89 04 24             	mov    %eax,(%esp)
 831c801:	e8 2b 2d d6 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 831c806:	8b 00                	mov    (%eax),%eax
 831c808:	89 45 f4             	mov    %eax,-0xc(%ebp)
 831c80b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 831c80e:	c9                   	leave
 831c80f:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay @ 0x831c794

/* break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int) */

size_t __thiscall
break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay
          (CBreakAwayPreventSystem *this,uint param_1)

{
  size_t sVar1;
  int iVar2;
  size_t *psVar3;
  size_t local_1c [6];
  
  if (param_1 == 0) {
    sVar1 = 0;
  }
  else {
    local_1c[2] = getPrevScheduleTime(0,param_1);
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c[0] = (int)(iVar2 - local_1c[2]) / 0x15180;
    local_1c[1] = 0;
    psVar3 = std::max<size_t>(local_1c + 1,local_1c);
    sVar1 = *psVar3;
  }
  return sVar1;
}

```

---

## giveBreakAwayDungeonClearReward

```asm
// === 0831d164 break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward  [0x0831d164-0x831d206] ===
 831d164:	55                   	push   %ebp
 831d165:	89 e5                	mov    %esp,%ebp
 831d167:	83 ec 28             	sub    $0x28,%esp
 831d16a:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 831d16e:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d171:	89 04 24             	mov    %eax,(%esp)
 831d174:	e8 77 03 00 00       	call   831d4f0 <_ZN5CUser23getBreakAwayRewardOrderEv>
 831d179:	83 f8 01             	cmp    $0x1,%eax
 831d17c:	0f 94 c0             	sete   %al
 831d17f:	84 c0                	test   %al,%al
 831d181:	74 3f                	je     831d1c2 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0x5e>
 831d183:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d186:	89 04 24             	mov    %eax,(%esp)
 831d189:	e8 70 03 00 00       	call   831d4fe <_ZN5CUser22getBreakAwayAccureCeraEv>
 831d18e:	8b 55 0c             	mov    0xc(%ebp),%edx
 831d191:	89 54 24 0c          	mov    %edx,0xc(%esp)
 831d195:	89 44 24 08          	mov    %eax,0x8(%esp)
 831d199:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 831d1a0:	00 
 831d1a1:	8b 45 08             	mov    0x8(%ebp),%eax
 831d1a4:	89 04 24             	mov    %eax,(%esp)
 831d1a7:	e8 c6 f6 ff ff       	call   831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>
 831d1ac:	88 45 f7             	mov    %al,-0x9(%ebp)
 831d1af:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 831d1b3:	74 4c                	je     831d201 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0x9d>
 831d1b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d1b8:	89 04 24             	mov    %eax,(%esp)
 831d1bb:	e8 a8 bc 1b 00       	call   84d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>
 831d1c0:	eb 43                	jmp    831d205 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0xa1>
 831d1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d1c5:	89 04 24             	mov    %eax,(%esp)
 831d1c8:	e8 31 03 00 00       	call   831d4fe <_ZN5CUser22getBreakAwayAccureCeraEv>
 831d1cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 831d1d0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 831d1d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 831d1d8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 831d1df:	00 
 831d1e0:	8b 45 08             	mov    0x8(%ebp),%eax
 831d1e3:	89 04 24             	mov    %eax,(%esp)
 831d1e6:	e8 87 f6 ff ff       	call   831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>
 831d1eb:	88 45 f7             	mov    %al,-0x9(%ebp)
 831d1ee:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 831d1f2:	74 10                	je     831d204 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0xa0>
 831d1f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d1f7:	89 04 24             	mov    %eax,(%esp)
 831d1fa:	e8 69 bc 1b 00       	call   84d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>
 831d1ff:	eb 04                	jmp    831d205 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0xa1>
 831d201:	90                   	nop
 831d202:	eb 01                	jmp    831d205 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser+0xa1>
 831d204:	90                   	nop
 831d205:	c9                   	leave
 831d206:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward @ 0x831d164

/* break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward(CUser*) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward
          (CBreakAwayPreventSystem *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CUser::getBreakAwayRewardOrder(param_1);
  if (iVar2 == 1) {
    iVar2 = CUser::getBreakAwayAccureCera(param_1);
    cVar1 = selectReward(this,1,iVar2,param_1);
    if (cVar1 != '\0') {
      Inter_LoadEtc::giveBreakAwayReward(param_1);
    }
  }
  else {
    iVar2 = CUser::getBreakAwayAccureCera(param_1);
    cVar1 = selectReward(this,3,iVar2,param_1);
    if (cVar1 != '\0') {
      Inter_LoadEtc::giveBreakAwayReward(param_1);
    }
  }
  return;
}

```

---

## loadDbData

```asm
// === 0831c49e break_away_prevent::CBreakAwayPreventSystem::loadDbData  [0x0831c49e-0x831c793] ===
 831c49e:	55                   	push   %ebp
 831c49f:	89 e5                	mov    %esp,%ebp
 831c4a1:	56                   	push   %esi
 831c4a2:	53                   	push   %ebx
 831c4a3:	83 ec 60             	sub    $0x60,%esp
 831c4a6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 831c4ad:	8b 45 08             	mov    0x8(%ebp),%eax
 831c4b0:	c7 44 24 08 e4 02 00 	movl   $0x2e4,0x8(%esp)
 831c4b7:	00 
 831c4b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 831c4bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c4bf:	89 04 24             	mov    %eax,(%esp)
 831c4c2:	e8 d9 13 d6 ff       	call   807d8a0 <memcpy@plt>
 831c4c7:	8b 45 08             	mov    0x8(%ebp),%eax
 831c4ca:	05 e4 02 00 00       	add    $0x2e4,%eax
 831c4cf:	89 04 24             	mov    %eax,(%esp)
 831c4d2:	e8 c7 11 00 00       	call   831d69e <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
 831c4d7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 831c4de:	e9 90 02 00 00       	jmp    831c773 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x2d5>
 831c4e3:	8d 45 c9             	lea    -0x37(%ebp),%eax
 831c4e6:	89 04 24             	mov    %eax,(%esp)
 831c4e9:	e8 c0 0e 00 00       	call   831d3ae <_ZN15STRewardDataKeyC1Ev>
 831c4ee:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 831c4f1:	89 04 24             	mov    %eax,(%esp)
 831c4f4:	e8 cf 0e 00 00       	call   831d3c8 <_ZN12STRewardDataC1Ev>
 831c4f9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c4fc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c4ff:	89 d0                	mov    %edx,%eax
 831c501:	01 c0                	add    %eax,%eax
 831c503:	01 d0                	add    %edx,%eax
 831c505:	c1 e0 03             	shl    $0x3,%eax
 831c508:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c50b:	83 c0 10             	add    $0x10,%eax
 831c50e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 831c512:	88 45 c9             	mov    %al,-0x37(%ebp)
 831c515:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c518:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c51b:	89 d0                	mov    %edx,%eax
 831c51d:	01 c0                	add    %eax,%eax
 831c51f:	01 d0                	add    %edx,%eax
 831c521:	c1 e0 03             	shl    $0x3,%eax
 831c524:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c527:	83 c0 10             	add    $0x10,%eax
 831c52a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 831c52e:	88 45 ca             	mov    %al,-0x36(%ebp)
 831c531:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c534:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c537:	89 d0                	mov    %edx,%eax
 831c539:	01 c0                	add    %eax,%eax
 831c53b:	01 d0                	add    %edx,%eax
 831c53d:	c1 e0 03             	shl    $0x3,%eax
 831c540:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c543:	83 c0 10             	add    $0x10,%eax
 831c546:	0f b6 00             	movzbl (%eax),%eax
 831c549:	88 45 cb             	mov    %al,-0x35(%ebp)
 831c54c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c54f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c552:	89 d0                	mov    %edx,%eax
 831c554:	01 c0                	add    %eax,%eax
 831c556:	01 d0                	add    %edx,%eax
 831c558:	c1 e0 03             	shl    $0x3,%eax
 831c55b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c55e:	83 c0 14             	add    $0x14,%eax
 831c561:	8b 00                	mov    (%eax),%eax
 831c563:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 831c566:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c569:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c56c:	89 d0                	mov    %edx,%eax
 831c56e:	01 c0                	add    %eax,%eax
 831c570:	01 d0                	add    %edx,%eax
 831c572:	c1 e0 03             	shl    $0x3,%eax
 831c575:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c578:	83 c0 18             	add    $0x18,%eax
 831c57b:	8b 00                	mov    (%eax),%eax
 831c57d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 831c580:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c583:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c586:	89 d0                	mov    %edx,%eax
 831c588:	01 c0                	add    %eax,%eax
 831c58a:	01 d0                	add    %edx,%eax
 831c58c:	c1 e0 03             	shl    $0x3,%eax
 831c58f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c592:	83 c0 1c             	add    $0x1c,%eax
 831c595:	8b 00                	mov    (%eax),%eax
 831c597:	89 45 bc             	mov    %eax,-0x44(%ebp)
 831c59a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c59d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c5a0:	89 d0                	mov    %edx,%eax
 831c5a2:	01 c0                	add    %eax,%eax
 831c5a4:	01 d0                	add    %edx,%eax
 831c5a6:	c1 e0 03             	shl    $0x3,%eax
 831c5a9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c5ac:	83 c0 20             	add    $0x20,%eax
 831c5af:	8b 00                	mov    (%eax),%eax
 831c5b1:	89 45 c0             	mov    %eax,-0x40(%ebp)
 831c5b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 831c5b7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 831c5ba:	89 d0                	mov    %edx,%eax
 831c5bc:	01 c0                	add    %eax,%eax
 831c5be:	01 d0                	add    %edx,%eax
 831c5c0:	c1 e0 03             	shl    $0x3,%eax
 831c5c3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 831c5c6:	83 c0 24             	add    $0x24,%eax
 831c5c9:	8b 00                	mov    (%eax),%eax
 831c5cb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 831c5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 831c5d1:	8d 88 e4 02 00 00    	lea    0x2e4(%eax),%ecx
 831c5d7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 831c5da:	8d 55 c9             	lea    -0x37(%ebp),%edx
 831c5dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 831c5e1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 831c5e5:	89 04 24             	mov    %eax,(%esp)
 831c5e8:	e8 c5 10 00 00       	call   831d6b2 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 831c5ed:	83 ec 04             	sub    $0x4,%esp
 831c5f0:	8b 45 08             	mov    0x8(%ebp),%eax
 831c5f3:	8d 90 e4 02 00 00    	lea    0x2e4(%eax),%edx
 831c5f9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 831c5fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c600:	89 04 24             	mov    %eax,(%esp)
 831c603:	e8 d6 10 00 00       	call   831d6de <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 831c608:	83 ec 04             	sub    $0x4,%esp
 831c60b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 831c60e:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c612:	8d 45 b0             	lea    -0x50(%ebp),%eax
 831c615:	89 04 24             	mov    %eax,(%esp)
 831c618:	e8 e7 10 00 00       	call   831d704 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15STRewardDataKey16STRewardDataListEEneERKS5_>
 831c61d:	84 c0                	test   %al,%al
 831c61f:	74 22                	je     831c643 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x1a5>
 831c621:	8d 45 b0             	lea    -0x50(%ebp),%eax
 831c624:	89 04 24             	mov    %eax,(%esp)
 831c627:	e8 ec 10 00 00       	call   831d718 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15STRewardDataKey16STRewardDataListEEptEv>
 831c62c:	8d 50 04             	lea    0x4(%eax),%edx
 831c62f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 831c632:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c636:	89 14 24             	mov    %edx,(%esp)
 831c639:	e8 e8 10 00 00       	call   831d726 <_ZNSt4listI12STRewardDataSaIS0_EE9push_backERKS0_>
 831c63e:	e9 2c 01 00 00       	jmp    831c76f <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x2d1>
 831c643:	8d 45 a8             	lea    -0x58(%ebp),%eax
 831c646:	89 04 24             	mov    %eax,(%esp)
 831c649:	e8 c4 0d 00 00       	call   831d412 <_ZN16STRewardDataListC1Ev>
 831c64e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 831c651:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c655:	8d 45 a8             	lea    -0x58(%ebp),%eax
 831c658:	89 04 24             	mov    %eax,(%esp)
 831c65b:	e8 c6 10 00 00       	call   831d726 <_ZNSt4listI12STRewardDataSaIS0_EE9push_backERKS0_>
 831c660:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831c663:	8d 55 a8             	lea    -0x58(%ebp),%edx
 831c666:	89 54 24 08          	mov    %edx,0x8(%esp)
 831c66a:	8d 55 c9             	lea    -0x37(%ebp),%edx
 831c66d:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c671:	89 04 24             	mov    %eax,(%esp)
 831c674:	e8 e3 10 00 00       	call   831d75c <_ZSt9make_pairIR15STRewardDataKeyR16STRewardDataListESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 831c679:	83 ec 04             	sub    $0x4,%esp
 831c67c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831c67f:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c683:	8d 45 d8             	lea    -0x28(%ebp),%eax
 831c686:	89 04 24             	mov    %eax,(%esp)
 831c689:	e8 2c 11 00 00       	call   831d7ba <_ZNSt4pairIK15STRewardDataKey16STRewardDataListEC1IS0_S2_EEOS_IT_T0_E>
 831c68e:	8b 45 08             	mov    0x8(%ebp),%eax
 831c691:	8d 88 e4 02 00 00    	lea    0x2e4(%eax),%ecx
 831c697:	8d 45 d0             	lea    -0x30(%ebp),%eax
 831c69a:	8d 55 d8             	lea    -0x28(%ebp),%edx
 831c69d:	89 54 24 08          	mov    %edx,0x8(%esp)
 831c6a1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 831c6a5:	89 04 24             	mov    %eax,(%esp)
 831c6a8:	e8 55 11 00 00       	call   831d802 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE6insertERKS6_>
 831c6ad:	83 ec 04             	sub    $0x4,%esp
 831c6b0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 831c6b3:	89 04 24             	mov    %eax,(%esp)
 831c6b6:	e8 cb 0e 00 00       	call   831d586 <_ZNSt4pairIK15STRewardDataKey16STRewardDataListED1Ev>
 831c6bb:	eb 2a                	jmp    831c6e7 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x249>
 831c6bd:	89 d3                	mov    %edx,%ebx
 831c6bf:	89 c6                	mov    %eax,%esi
 831c6c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 831c6c4:	89 04 24             	mov    %eax,(%esp)
 831c6c7:	e8 ba 0e 00 00       	call   831d586 <_ZNSt4pairIK15STRewardDataKey16STRewardDataListED1Ev>
 831c6cc:	89 f0                	mov    %esi,%eax
 831c6ce:	89 da                	mov    %ebx,%edx
 831c6d0:	eb 00                	jmp    831c6d2 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x234>
 831c6d2:	89 d3                	mov    %edx,%ebx
 831c6d4:	89 c6                	mov    %eax,%esi
 831c6d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831c6d9:	89 04 24             	mov    %eax,(%esp)
 831c6dc:	e8 8f 0e 00 00       	call   831d570 <_ZNSt4pairI15STRewardDataKey16STRewardDataListED1Ev>
 831c6e1:	89 f0                	mov    %esi,%eax
 831c6e3:	89 da                	mov    %ebx,%edx
 831c6e5:	eb 6d                	jmp    831c754 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x2b6>
 831c6e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831c6ea:	89 04 24             	mov    %eax,(%esp)
 831c6ed:	e8 7e 0e 00 00       	call   831d570 <_ZNSt4pairI15STRewardDataKey16STRewardDataListED1Ev>
 831c6f2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c6f5:	0f b6 4d cb          	movzbl -0x35(%ebp),%ecx
 831c6f9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 831c6fc:	89 d0                	mov    %edx,%eax
 831c6fe:	01 c0                	add    %eax,%eax
 831c700:	01 d0                	add    %edx,%eax
 831c702:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 831c705:	05 f0 02 00 00       	add    $0x2f0,%eax
 831c70a:	88 48 0e             	mov    %cl,0xe(%eax)
 831c70d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c710:	0f b6 4d c9          	movzbl -0x37(%ebp),%ecx
 831c714:	8b 5d 08             	mov    0x8(%ebp),%ebx
 831c717:	89 d0                	mov    %edx,%eax
 831c719:	01 c0                	add    %eax,%eax
 831c71b:	01 d0                	add    %edx,%eax
 831c71d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 831c720:	05 f0 02 00 00       	add    $0x2f0,%eax
 831c725:	88 48 0c             	mov    %cl,0xc(%eax)
 831c728:	8b 55 f0             	mov    -0x10(%ebp),%edx
 831c72b:	0f b6 4d ca          	movzbl -0x36(%ebp),%ecx
 831c72f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 831c732:	89 d0                	mov    %edx,%eax
 831c734:	01 c0                	add    %eax,%eax
 831c736:	01 d0                	add    %edx,%eax
 831c738:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 831c73b:	05 f0 02 00 00       	add    $0x2f0,%eax
 831c740:	88 48 0d             	mov    %cl,0xd(%eax)
 831c743:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 831c747:	8d 45 a8             	lea    -0x58(%ebp),%eax
 831c74a:	89 04 24             	mov    %eax,(%esp)
 831c74d:	e8 0a 0e 00 00       	call   831d55c <_ZN16STRewardDataListD1Ev>
 831c752:	eb 1b                	jmp    831c76f <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x2d1>
 831c754:	89 d3                	mov    %edx,%ebx
 831c756:	89 c6                	mov    %eax,%esi
 831c758:	8d 45 a8             	lea    -0x58(%ebp),%eax
 831c75b:	89 04 24             	mov    %eax,(%esp)
 831c75e:	e8 f9 0d 00 00       	call   831d55c <_ZN16STRewardDataListD1Ev>
 831c763:	89 f0                	mov    %esi,%eax
 831c765:	89 da                	mov    %ebx,%edx
 831c767:	89 04 24             	mov    %eax,(%esp)
 831c76a:	e8 e1 6f 7c 00       	call   8ae3750 <_Unwind_Resume>
 831c76f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 831c773:	8b 45 08             	mov    0x8(%ebp),%eax
 831c776:	8b 80 e0 02 00 00    	mov    0x2e0(%eax),%eax
 831c77c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 831c77f:	0f 9f c0             	setg   %al
 831c782:	84 c0                	test   %al,%al
 831c784:	0f 85 59 fd ff ff    	jne    831c4e3 <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER+0x45>
 831c78a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 831c78d:	83 c4 00             	add    $0x0,%esp
 831c790:	5b                   	pop    %ebx
 831c791:	5e                   	pop    %esi
 831c792:	5d                   	pop    %ebp
 831c793:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::loadDbData @ 0x831c49e

/* break_away_prevent::CBreakAwayPreventSystem::loadDbData(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER*)
    */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::loadDbData
          (CBreakAwayPreventSystem *this,SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *param_1)

{
  char cVar1;
  int iVar2;
  STRewardDataList local_5c [8];
  STRewardDataKey local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  CBreakAwayPreventSystem local_3b;
  CBreakAwayPreventSystem local_3a;
  CBreakAwayPreventSystem local_39;
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  local_38 [4];
  pair local_34 [8];
  pair<STRewardDataKey_const,STRewardDataList> local_2c [12];
  STRewardDataKey local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = 0;
  memcpy(this,param_1,0x2e4);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::clear((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
           *)(this + 0x2e4));
  for (local_10 = 0; local_10 < *(int *)(this + 0x2e0); local_10 = local_10 + 1) {
    STRewardDataKey::STRewardDataKey((STRewardDataKey *)&local_3b);
    STRewardData::STRewardData((STRewardData *)&local_50);
    local_3b = this[local_10 * 0x18 + 0x11];
    local_3a = this[local_10 * 0x18 + 0x12];
    local_39 = this[local_10 * 0x18 + 0x10];
    local_50 = *(undefined4 *)(this + local_10 * 0x18 + 0x14);
    local_4c = *(undefined4 *)(this + local_10 * 0x18 + 0x18);
    local_48 = *(undefined4 *)(this + local_10 * 0x18 + 0x1c);
    local_44 = *(undefined4 *)(this + local_10 * 0x18 + 0x20);
    local_40 = *(undefined4 *)(this + local_10 * 0x18 + 0x24);
    std::
    map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
    ::find(local_54);
    std::
    map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
    ::end(local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                       local_54,(_Rb_tree_iterator *)local_38);
    if (cVar1 == '\0') {
      STRewardDataList::STRewardDataList(local_5c);
                    /* try { // try from 0831c65b to 0831c678 has its CatchHandler @ 0831c754 */
      std::list<STRewardData,std::allocator<STRewardData>>::push_back
                ((list<STRewardData,std::allocator<STRewardData>> *)local_5c,
                 (STRewardData *)&local_50);
      std::make_pair<STRewardDataKey&,STRewardDataList&>(local_20,(STRewardDataList *)&local_3b);
                    /* try { // try from 0831c689 to 0831c68d has its CatchHandler @ 0831c6d2 */
      std::pair<STRewardDataKey_const,STRewardDataList>::pair<STRewardDataKey,STRewardDataList>
                (local_2c,local_20);
                    /* try { // try from 0831c6a8 to 0831c6ac has its CatchHandler @ 0831c6bd */
      std::
      map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
      ::insert(local_34);
                    /* try { // try from 0831c6b6 to 0831c6ba has its CatchHandler @ 0831c6d2 */
      std::pair<STRewardDataKey_const,STRewardDataList>::~pair(local_2c);
                    /* try { // try from 0831c6ed to 0831c6f1 has its CatchHandler @ 0831c754 */
      std::pair<STRewardDataKey,STRewardDataList>::~pair
                ((pair<STRewardDataKey,STRewardDataList> *)local_20);
      this[local_14 * 3 + 0x2fe] = local_39;
      this[local_14 * 3 + 0x2fc] = local_3b;
      this[local_14 * 3 + 0x2fd] = local_3a;
      local_14 = local_14 + 1;
      STRewardDataList::~STRewardDataList(local_5c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator->
                        ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                         local_54);
      std::list<STRewardData,std::allocator<STRewardData>>::push_back
                ((list<STRewardData,std::allocator<STRewardData>> *)(iVar2 + 4),
                 (STRewardData *)&local_50);
    }
  }
  return;
}

```

---

## selectReward

```asm
// === 0831c872 break_away_prevent::CBreakAwayPreventSystem::selectReward  [0x0831c872-0x831ca59] ===
 831c872:	55                   	push   %ebp
 831c873:	89 e5                	mov    %esp,%ebp
 831c875:	83 ec 58             	sub    $0x58,%esp
 831c878:	8b 55 0c             	mov    0xc(%ebp),%edx
 831c87b:	89 d0                	mov    %edx,%eax
 831c87d:	01 c0                	add    %eax,%eax
 831c87f:	01 d0                	add    %edx,%eax
 831c881:	05 f0 02 00 00       	add    $0x2f0,%eax
 831c886:	03 45 08             	add    0x8(%ebp),%eax
 831c889:	8d 48 0c             	lea    0xc(%eax),%ecx
 831c88c:	8b 45 08             	mov    0x8(%ebp),%eax
 831c88f:	8d 90 e4 02 00 00    	lea    0x2e4(%eax),%edx
 831c895:	8d 45 dc             	lea    -0x24(%ebp),%eax
 831c898:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 831c89c:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c8a0:	89 04 24             	mov    %eax,(%esp)
 831c8a3:	e8 0a 0e 00 00       	call   831d6b2 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 831c8a8:	83 ec 04             	sub    $0x4,%esp
 831c8ab:	8b 45 08             	mov    0x8(%ebp),%eax
 831c8ae:	8d 90 e4 02 00 00    	lea    0x2e4(%eax),%edx
 831c8b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831c8b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c8bb:	89 04 24             	mov    %eax,(%esp)
 831c8be:	e8 1b 0e 00 00       	call   831d6de <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 831c8c3:	83 ec 04             	sub    $0x4,%esp
 831c8c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831c8c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c8cd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 831c8d0:	89 04 24             	mov    %eax,(%esp)
 831c8d3:	e8 56 0f 00 00       	call   831d82e <_ZNKSt17_Rb_tree_iteratorISt4pairIK15STRewardDataKey16STRewardDataListEEeqERKS5_>
 831c8d8:	84 c0                	test   %al,%al
 831c8da:	74 0a                	je     831c8e6 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x74>
 831c8dc:	b8 00 00 00 00       	mov    $0x0,%eax
 831c8e1:	e9 71 01 00 00       	jmp    831ca57 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x1e5>
 831c8e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 831c8e9:	89 04 24             	mov    %eax,(%esp)
 831c8ec:	e8 27 0e 00 00       	call   831d718 <_ZNKSt17_Rb_tree_iteratorISt4pairIK15STRewardDataKey16STRewardDataListEEptEv>
 831c8f1:	83 c0 04             	add    $0x4,%eax
 831c8f4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 831c8f7:	8b 45 10             	mov    0x10(%ebp),%eax
 831c8fa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 831c8fd:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 831c901:	79 0a                	jns    831c90d <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x9b>
 831c903:	b8 00 00 00 00       	mov    $0x0,%eax
 831c908:	e9 4a 01 00 00       	jmp    831ca57 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x1e5>
 831c90d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 831c910:	89 04 24             	mov    %eax,(%esp)
 831c913:	e8 b2 0b 00 00       	call   831d4ca <_ZN18STBreakAwayRewardsC1Ev>
 831c918:	8b 45 0c             	mov    0xc(%ebp),%eax
 831c91b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 831c91e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c921:	8b 55 e8             	mov    -0x18(%ebp),%edx
 831c924:	89 54 24 04          	mov    %edx,0x4(%esp)
 831c928:	89 04 24             	mov    %eax,(%esp)
 831c92b:	e8 12 0f 00 00       	call   831d842 <_ZNSt4listI12STRewardDataSaIS0_EE5beginEv>
 831c930:	83 ec 04             	sub    $0x4,%esp
 831c933:	e9 d9 00 00 00       	jmp    831ca11 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x19f>
 831c938:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c93b:	89 04 24             	mov    %eax,(%esp)
 831c93e:	e8 71 0f 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c943:	8b 00                	mov    (%eax),%eax
 831c945:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831c948:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c94b:	89 04 24             	mov    %eax,(%esp)
 831c94e:	e8 61 0f 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c953:	8b 40 04             	mov    0x4(%eax),%eax
 831c956:	89 45 f4             	mov    %eax,-0xc(%ebp)
 831c959:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c95c:	89 04 24             	mov    %eax,(%esp)
 831c95f:	e8 50 0f 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c964:	8b 40 08             	mov    0x8(%eax),%eax
 831c967:	89 45 c8             	mov    %eax,-0x38(%ebp)
 831c96a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c96d:	89 04 24             	mov    %eax,(%esp)
 831c970:	e8 3f 0f 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c975:	8b 40 0c             	mov    0xc(%eax),%eax
 831c978:	89 45 cc             	mov    %eax,-0x34(%ebp)
 831c97b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c97e:	89 04 24             	mov    %eax,(%esp)
 831c981:	e8 2e 0f 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c986:	8b 40 10             	mov    0x10(%eax),%eax
 831c989:	89 45 d0             	mov    %eax,-0x30(%ebp)
 831c98c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 831c98f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 831c992:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c995:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831c998:	7e 0a                	jle    831c9a4 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x132>
 831c99a:	b8 00 00 00 00       	mov    $0x0,%eax
 831c99f:	e9 b3 00 00 00       	jmp    831ca57 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x1e5>
 831c9a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831c9a7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831c9aa:	7f 5a                	jg     831ca06 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x194>
 831c9ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 831c9af:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831c9b2:	7c 52                	jl     831ca06 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x194>
 831c9b4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c9b7:	89 04 24             	mov    %eax,(%esp)
 831c9ba:	e8 f5 0e 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c9bf:	8b 40 08             	mov    0x8(%eax),%eax
 831c9c2:	89 45 c8             	mov    %eax,-0x38(%ebp)
 831c9c5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c9c8:	89 04 24             	mov    %eax,(%esp)
 831c9cb:	e8 e4 0e 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c9d0:	8b 40 0c             	mov    0xc(%eax),%eax
 831c9d3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 831c9d6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831c9d9:	89 04 24             	mov    %eax,(%esp)
 831c9dc:	e8 d3 0e 00 00       	call   831d8b4 <_ZNKSt14_List_iteratorI12STRewardDataEptEv>
 831c9e1:	8b 40 10             	mov    0x10(%eax),%eax
 831c9e4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 831c9e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 831c9ea:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 831c9ed:	8d 45 c8             	lea    -0x38(%ebp),%eax
 831c9f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 831c9f4:	8b 45 14             	mov    0x14(%ebp),%eax
 831c9f7:	89 04 24             	mov    %eax,(%esp)
 831c9fa:	e8 29 0b 00 00       	call   831d528 <_ZN5CUser19setBreakAwayRewardsERK18STBreakAwayRewards>
 831c9ff:	b8 01 00 00 00       	mov    $0x1,%eax
 831ca04:	eb 51                	jmp    831ca57 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0x1e5>
 831ca06:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831ca09:	89 04 24             	mov    %eax,(%esp)
 831ca0c:	e8 8f 0e 00 00       	call   831d8a0 <_ZNSt14_List_iteratorI12STRewardDataEppEv>
 831ca11:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831ca14:	8b 55 e8             	mov    -0x18(%ebp),%edx
 831ca17:	89 54 24 04          	mov    %edx,0x4(%esp)
 831ca1b:	89 04 24             	mov    %eax,(%esp)
 831ca1e:	e8 45 0e 00 00       	call   831d868 <_ZNSt4listI12STRewardDataSaIS0_EE3endEv>
 831ca23:	83 ec 04             	sub    $0x4,%esp
 831ca26:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831ca29:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ca2d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 831ca30:	89 04 24             	mov    %eax,(%esp)
 831ca33:	e8 54 0e 00 00       	call   831d88c <_ZNKSt14_List_iteratorI12STRewardDataEneERKS1_>
 831ca38:	84 c0                	test   %al,%al
 831ca3a:	0f 85 f8 fe ff ff    	jne    831c938 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser+0xc6>
 831ca40:	8d 45 c8             	lea    -0x38(%ebp),%eax
 831ca43:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ca47:	8b 45 14             	mov    0x14(%ebp),%eax
 831ca4a:	89 04 24             	mov    %eax,(%esp)
 831ca4d:	e8 d6 0a 00 00       	call   831d528 <_ZN5CUser19setBreakAwayRewardsERK18STBreakAwayRewards>
 831ca52:	b8 01 00 00 00       	mov    $0x1,%eax
 831ca57:	c9                   	leave
 831ca58:	c3                   	ret
 831ca59:	90                   	nop

```

```c
// break_away_prevent::CBreakAwayPreventSystem::selectReward @ 0x831c872

/* break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::selectReward
          (CBreakAwayPreventSystem *this,int param_1,int param_2,CUser *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  _List_iterator<STRewardData> local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  STRewardDataKey local_28 [4];
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  local_24 [4];
  _List_iterator local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::find(local_28);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator==
                    ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                     local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_1c = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator->
                         ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                          local_28);
    local_1c = local_1c + 4;
    local_18 = param_2;
    if (param_2 < 0) {
      uVar2 = 0;
    }
    else {
      STBreakAwayRewards::STBreakAwayRewards((STBreakAwayRewards *)&local_3c);
      local_2c = param_1;
      std::list<STRewardData,std::allocator<STRewardData>>::begin();
      while( true ) {
        std::list<STRewardData,std::allocator<STRewardData>>::end();
        cVar1 = std::_List_iterator<STRewardData>::operator!=(local_40,local_20);
        if (cVar1 == '\0') break;
        piVar3 = (int *)std::_List_iterator<STRewardData>::operator->(local_40);
        local_14 = *piVar3;
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_10 = *(int *)(iVar4 + 4);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_3c = *(undefined4 *)(iVar4 + 8);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_38 = *(undefined4 *)(iVar4 + 0xc);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_34 = *(undefined4 *)(iVar4 + 0x10);
        local_30 = local_18;
        if (local_18 < local_14) {
          return 0;
        }
        if ((local_14 <= local_18) && (local_18 <= local_10)) {
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_3c = *(undefined4 *)(iVar4 + 8);
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_38 = *(undefined4 *)(iVar4 + 0xc);
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_34 = *(undefined4 *)(iVar4 + 0x10);
          local_30 = local_18;
          CUser::setBreakAwayRewards(param_3,(STBreakAwayRewards *)&local_3c);
          return 1;
        }
        std::_List_iterator<STRewardData>::operator++(local_40);
      }
      CUser::setBreakAwayRewards(param_3,(STBreakAwayRewards *)&local_3c);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## startBreakAwayPreventSystem

```asm
// === 0831ce78 break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem  [0x0831ce78-0x831d163] ===
 831ce78:	55                   	push   %ebp
 831ce79:	89 e5                	mov    %esp,%ebp
 831ce7b:	83 ec 28             	sub    $0x28,%esp
 831ce7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ce81:	8b 80 3c 3f 00 00    	mov    0x3f3c(%eax),%eax
 831ce87:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ce8b:	8b 45 08             	mov    0x8(%ebp),%eax
 831ce8e:	89 04 24             	mov    %eax,(%esp)
 831ce91:	e8 fe f8 ff ff       	call   831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>
 831ce96:	89 45 ec             	mov    %eax,-0x14(%ebp)
 831ce99:	8b 45 08             	mov    0x8(%ebp),%eax
 831ce9c:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 831cea0:	98                   	cwtl
 831cea1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831cea4:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cea7:	8b 80 3c 3f 00 00    	mov    0x3f3c(%eax),%eax
 831cead:	85 c0                	test   %eax,%eax
 831ceaf:	74 0c                	je     831cebd <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x45>
 831ceb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 831ceb4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 831ceb7:	0f 8c b1 00 00 00    	jl     831cf6e <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0xf6>
 831cebd:	8b 45 08             	mov    0x8(%ebp),%eax
 831cec0:	89 04 24             	mov    %eax,(%esp)
 831cec3:	e8 48 f9 ff ff       	call   831c810 <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv>
 831cec8:	88 45 f4             	mov    %al,-0xc(%ebp)
 831cecb:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 831cecf:	0f 84 7a 02 00 00    	je     831d14f <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2d7>
 831ced5:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ced8:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831cede:	85 c0                	test   %eax,%eax
 831cee0:	78 63                	js     831cf45 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0xcd>
 831cee2:	c6 45 f5 00          	movb   $0x0,-0xb(%ebp)
 831cee6:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cee9:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831ceef:	8b 55 10             	mov    0x10(%ebp),%edx
 831cef2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 831cef6:	89 44 24 08          	mov    %eax,0x8(%esp)
 831cefa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831cf01:	00 
 831cf02:	8b 45 08             	mov    0x8(%ebp),%eax
 831cf05:	89 04 24             	mov    %eax,(%esp)
 831cf08:	e8 65 f9 ff ff       	call   831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>
 831cf0d:	88 45 f5             	mov    %al,-0xb(%ebp)
 831cf10:	80 7d f5 00          	cmpb   $0x0,-0xb(%ebp)
 831cf14:	0f 84 38 02 00 00    	je     831d152 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2da>
 831cf1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 831cf21:	00 
 831cf22:	8b 45 10             	mov    0x10(%ebp),%eax
 831cf25:	89 04 24             	mov    %eax,(%esp)
 831cf28:	e8 df 05 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831cf2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 831cf34:	00 
 831cf35:	8b 45 10             	mov    0x10(%ebp),%eax
 831cf38:	89 04 24             	mov    %eax,(%esp)
 831cf3b:	e8 9e 05 00 00       	call   831d4de <_ZN5CUser23setBreakAwayRewardOrderE28ENUM_BREAK_AWAY_REWARD_ORDER>
 831cf40:	e9 1d 02 00 00       	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831cf45:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cf48:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 831cf4e:	85 c0                	test   %eax,%eax
 831cf50:	0f 85 ff 01 00 00    	jne    831d155 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2dd>
 831cf56:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831cf5d:	00 
 831cf5e:	8b 45 10             	mov    0x10(%ebp),%eax
 831cf61:	89 04 24             	mov    %eax,(%esp)
 831cf64:	e8 a3 05 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831cf69:	e9 f4 01 00 00       	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831cf6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cf71:	8b 80 48 3f 00 00    	mov    0x3f48(%eax),%eax
 831cf77:	85 c0                	test   %eax,%eax
 831cf79:	0f 85 f0 00 00 00    	jne    831d06f <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x1f7>
 831cf7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cf82:	8b 80 4c 3f 00 00    	mov    0x3f4c(%eax),%eax
 831cf88:	85 c0                	test   %eax,%eax
 831cf8a:	0f 84 df 00 00 00    	je     831d06f <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x1f7>
 831cf90:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cf93:	8b 90 40 3f 00 00    	mov    0x3f40(%eax),%edx
 831cf99:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cf9c:	8b 80 44 3f 00 00    	mov    0x3f44(%eax),%eax
 831cfa2:	39 c2                	cmp    %eax,%edx
 831cfa4:	0f 86 c5 00 00 00    	jbe    831d06f <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x1f7>
 831cfaa:	8b 45 08             	mov    0x8(%ebp),%eax
 831cfad:	0f b6 80 02 03 00 00 	movzbl 0x302(%eax),%eax
 831cfb4:	0f be c0             	movsbl %al,%eax
 831cfb7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831cfba:	0f 8f 98 01 00 00    	jg     831d158 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2e0>
 831cfc0:	8b 45 08             	mov    0x8(%ebp),%eax
 831cfc3:	0f b6 80 03 03 00 00 	movzbl 0x303(%eax),%eax
 831cfca:	0f be c0             	movsbl %al,%eax
 831cfcd:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831cfd0:	0f 8c 85 01 00 00    	jl     831d15b <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2e3>
 831cfd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cfd9:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831cfdf:	85 c0                	test   %eax,%eax
 831cfe1:	78 63                	js     831d046 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x1ce>
 831cfe3:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 831cfe7:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cfea:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831cff0:	8b 55 10             	mov    0x10(%ebp),%edx
 831cff3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 831cff7:	89 44 24 08          	mov    %eax,0x8(%esp)
 831cffb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 831d002:	00 
 831d003:	8b 45 08             	mov    0x8(%ebp),%eax
 831d006:	89 04 24             	mov    %eax,(%esp)
 831d009:	e8 64 f8 ff ff       	call   831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>
 831d00e:	88 45 f6             	mov    %al,-0xa(%ebp)
 831d011:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 831d015:	0f 84 43 01 00 00    	je     831d15e <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2e6>
 831d01b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 831d022:	00 
 831d023:	8b 45 10             	mov    0x10(%ebp),%eax
 831d026:	89 04 24             	mov    %eax,(%esp)
 831d029:	e8 de 04 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831d02e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 831d035:	00 
 831d036:	8b 45 10             	mov    0x10(%ebp),%eax
 831d039:	89 04 24             	mov    %eax,(%esp)
 831d03c:	e8 9d 04 00 00       	call   831d4de <_ZN5CUser23setBreakAwayRewardOrderE28ENUM_BREAK_AWAY_REWARD_ORDER>
 831d041:	e9 1c 01 00 00       	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d046:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d049:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 831d04f:	85 c0                	test   %eax,%eax
 831d051:	0f 85 0a 01 00 00    	jne    831d161 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2e9>
 831d057:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831d05e:	00 
 831d05f:	8b 45 10             	mov    0x10(%ebp),%eax
 831d062:	89 04 24             	mov    %eax,(%esp)
 831d065:	e8 a2 04 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831d06a:	e9 f3 00 00 00       	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d06f:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d072:	8b 80 48 3f 00 00    	mov    0x3f48(%eax),%eax
 831d078:	85 c0                	test   %eax,%eax
 831d07a:	0f 85 e2 00 00 00    	jne    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d080:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d083:	8b 80 4c 3f 00 00    	mov    0x3f4c(%eax),%eax
 831d089:	85 c0                	test   %eax,%eax
 831d08b:	0f 84 d1 00 00 00    	je     831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d091:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d094:	8b 90 40 3f 00 00    	mov    0x3f40(%eax),%edx
 831d09a:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d09d:	8b 80 44 3f 00 00    	mov    0x3f44(%eax),%eax
 831d0a3:	39 c2                	cmp    %eax,%edx
 831d0a5:	0f 83 b7 00 00 00    	jae    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 831d0ae:	0f b6 80 08 03 00 00 	movzbl 0x308(%eax),%eax
 831d0b5:	0f be c0             	movsbl %al,%eax
 831d0b8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831d0bb:	0f 8f a1 00 00 00    	jg     831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d0c1:	8b 45 08             	mov    0x8(%ebp),%eax
 831d0c4:	0f b6 80 09 03 00 00 	movzbl 0x309(%eax),%eax
 831d0cb:	0f be c0             	movsbl %al,%eax
 831d0ce:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 831d0d1:	0f 8c 8b 00 00 00    	jl     831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d0d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d0da:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831d0e0:	85 c0                	test   %eax,%eax
 831d0e2:	78 49                	js     831d12d <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2b5>
 831d0e4:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 831d0e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d0eb:	8b 80 18 3f 00 00    	mov    0x3f18(%eax),%eax
 831d0f1:	8b 55 10             	mov    0x10(%ebp),%edx
 831d0f4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 831d0f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 831d0fc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 831d103:	00 
 831d104:	8b 45 08             	mov    0x8(%ebp),%eax
 831d107:	89 04 24             	mov    %eax,(%esp)
 831d10a:	e8 63 f7 ff ff       	call   831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>
 831d10f:	88 45 f7             	mov    %al,-0x9(%ebp)
 831d112:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 831d116:	74 4a                	je     831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d118:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 831d11f:	00 
 831d120:	8b 45 10             	mov    0x10(%ebp),%eax
 831d123:	89 04 24             	mov    %eax,(%esp)
 831d126:	e8 e1 03 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831d12b:	eb 35                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d12d:	8b 45 0c             	mov    0xc(%ebp),%eax
 831d130:	8b 80 54 3f 00 00    	mov    0x3f54(%eax),%eax
 831d136:	85 c0                	test   %eax,%eax
 831d138:	75 28                	jne    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d13a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831d141:	00 
 831d142:	8b 45 10             	mov    0x10(%ebp),%eax
 831d145:	89 04 24             	mov    %eax,(%esp)
 831d148:	e8 bf 03 00 00       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 831d14d:	eb 13                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d14f:	90                   	nop
 831d150:	eb 10                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d152:	90                   	nop
 831d153:	eb 0d                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d155:	90                   	nop
 831d156:	eb 0a                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d158:	90                   	nop
 831d159:	eb 07                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d15b:	90                   	nop
 831d15c:	eb 04                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d15e:	90                   	nop
 831d15f:	eb 01                	jmp    831d162 <_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser+0x2ea>
 831d161:	90                   	nop
 831d162:	c9                   	leave
 831d163:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem @ 0x831ce78

/* break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem(SIG_LOGIN_DATA const*,
   CUser*) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem
          (CBreakAwayPreventSystem *this,SIG_LOGIN_DATA *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3f3c));
  if ((*(int *)(param_1 + 0x3f3c) == 0) || (*(short *)(this + 0xc) <= iVar2)) {
    cVar1 = calBreakAwayUserPoint(this);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3f18) < 0) {
        if (*(int *)(param_1 + 0x3f54) == 0) {
          CUser::setBreakAwayRewardData(param_2,false);
        }
      }
      else {
        cVar1 = selectReward(this,0,*(int *)(param_1 + 0x3f18),param_2);
        if (cVar1 != '\0') {
          CUser::setBreakAwayRewardData(param_2,true);
          CUser::setBreakAwayRewardOrder(param_2,1);
        }
      }
    }
  }
  else if (((*(int *)(param_1 + 0x3f48) == 0) && (*(int *)(param_1 + 0x3f4c) != 0)) &&
          (*(uint *)(param_1 + 0x3f44) < *(uint *)(param_1 + 0x3f40))) {
    if (((char)this[0x302] <= iVar2) && (iVar2 <= (char)this[0x303])) {
      if (*(int *)(param_1 + 0x3f18) < 0) {
        if (*(int *)(param_1 + 0x3f54) == 0) {
          CUser::setBreakAwayRewardData(param_2,false);
        }
      }
      else {
        cVar1 = selectReward(this,2,*(int *)(param_1 + 0x3f18),param_2);
        if (cVar1 != '\0') {
          CUser::setBreakAwayRewardData(param_2,true);
          CUser::setBreakAwayRewardOrder(param_2,3);
        }
      }
    }
  }
  else if (((*(int *)(param_1 + 0x3f48) == 0) && (*(int *)(param_1 + 0x3f4c) != 0)) &&
          ((*(uint *)(param_1 + 0x3f40) < *(uint *)(param_1 + 0x3f44) &&
           (((char)this[0x308] <= iVar2 && (iVar2 <= (char)this[0x309])))))) {
    if (*(int *)(param_1 + 0x3f18) < 0) {
      if (*(int *)(param_1 + 0x3f54) == 0) {
        CUser::setBreakAwayRewardData(param_2,false);
      }
    }
    else {
      cVar1 = selectReward(this,4,*(int *)(param_1 + 0x3f18),param_2);
      if (cVar1 != '\0') {
        CUser::setBreakAwayRewardData(param_2,true);
      }
    }
  }
  return;
}

```

---

## updateUsedCera

```asm
// === 0831ce5e break_away_prevent::CBreakAwayPreventSystem::updateUsedCera  [0x0831ce5e-0x831ce77] ===
 831ce5e:	55                   	push   %ebp
 831ce5f:	89 e5                	mov    %esp,%ebp
 831ce61:	83 ec 18             	sub    $0x18,%esp
 831ce64:	8b 45 10             	mov    0x10(%ebp),%eax
 831ce67:	89 44 24 04          	mov    %eax,0x4(%esp)
 831ce6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ce6e:	89 04 24             	mov    %eax,(%esp)
 831ce71:	e8 f4 b6 11 00       	call   843856a <_ZN29DB_UpdateBreakAwayAccruedCera11makeRequestEjj>
 831ce76:	c9                   	leave
 831ce77:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::updateUsedCera @ 0x831ce5e

/* break_away_prevent::CBreakAwayPreventSystem::updateUsedCera(unsigned int, unsigned int) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
          (CBreakAwayPreventSystem *this,uint param_1,uint param_2)

{
  DB_UpdateBreakAwayAccruedCera::makeRequest(param_1,param_2);
  return;
}

```

---

## updateUvList

```asm
// === 0831cb56 break_away_prevent::CBreakAwayPreventSystem::updateUvList  [0x0831cb56-0x831ce5d] ===
 831cb56:	55                   	push   %ebp
 831cb57:	89 e5                	mov    %esp,%ebp
 831cb59:	56                   	push   %esi
 831cb5a:	53                   	push   %ebx
 831cb5b:	83 ec 40             	sub    $0x40,%esp
 831cb5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cb61:	8b 80 50 3f 00 00    	mov    0x3f50(%eax),%eax
 831cb67:	89 44 24 04          	mov    %eax,0x4(%esp)
 831cb6b:	8b 45 08             	mov    0x8(%ebp),%eax
 831cb6e:	89 04 24             	mov    %eax,(%esp)
 831cb71:	e8 1e fc ff ff       	call   831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>
 831cb76:	89 45 ec             	mov    %eax,-0x14(%ebp)
 831cb79:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 831cb7d:	79 07                	jns    831cb86 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x30>
 831cb7f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 831cb86:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cb89:	8b 80 58 39 00 00    	mov    0x3958(%eax),%eax
 831cb8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 831cb93:	8b 45 08             	mov    0x8(%ebp),%eax
 831cb96:	89 04 24             	mov    %eax,(%esp)
 831cb99:	e8 f6 fb ff ff       	call   831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>
 831cb9e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 831cba1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 831cba5:	75 73                	jne    831cc1a <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0xc4>
 831cba7:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cbaa:	8b 80 50 3f 00 00    	mov    0x3f50(%eax),%eax
 831cbb0:	85 c0                	test   %eax,%eax
 831cbb2:	75 17                	jne    831cbcb <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x75>
 831cbb4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 831cbb8:	75 09                	jne    831cbc3 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x6d>
 831cbba:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 831cbc1:	eb 57                	jmp    831cc1a <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0xc4>
 831cbc3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 831cbc6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 831cbc9:	eb 4f                	jmp    831cc1a <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0xc4>
 831cbcb:	8b 45 08             	mov    0x8(%ebp),%eax
 831cbce:	05 0b 03 00 00       	add    $0x30b,%eax
 831cbd3:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cbda:	00 
 831cbdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831cbe2:	00 
 831cbe3:	89 04 24             	mov    %eax,(%esp)
 831cbe6:	e8 d5 10 d6 ff       	call   807dcc0 <memset@plt>
 831cbeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cbee:	8d 90 1c 3f 00 00    	lea    0x3f1c(%eax),%edx
 831cbf4:	8b 45 08             	mov    0x8(%ebp),%eax
 831cbf7:	05 0b 03 00 00       	add    $0x30b,%eax
 831cbfc:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cc03:	00 
 831cc04:	89 54 24 04          	mov    %edx,0x4(%esp)
 831cc08:	89 04 24             	mov    %eax,(%esp)
 831cc0b:	e8 90 0c d6 ff       	call   807d8a0 <memcpy@plt>
 831cc10:	bb 01 00 00 00       	mov    $0x1,%ebx
 831cc15:	e9 3b 02 00 00       	jmp    831ce55 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x2ff>
 831cc1a:	83 7d ec 1d          	cmpl   $0x1d,-0x14(%ebp)
 831cc1e:	7e 39                	jle    831cc59 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x103>
 831cc20:	8b 45 08             	mov    0x8(%ebp),%eax
 831cc23:	05 0b 03 00 00       	add    $0x30b,%eax
 831cc28:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cc2f:	00 
 831cc30:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 831cc37:	00 
 831cc38:	89 04 24             	mov    %eax,(%esp)
 831cc3b:	e8 80 10 d6 ff       	call   807dcc0 <memset@plt>
 831cc40:	8b 45 08             	mov    0x8(%ebp),%eax
 831cc43:	c6 80 28 03 00 00 31 	movb   $0x31,0x328(%eax)
 831cc4a:	8b 45 08             	mov    0x8(%ebp),%eax
 831cc4d:	c6 80 29 03 00 00 00 	movb   $0x0,0x329(%eax)
 831cc54:	e9 d9 01 00 00       	jmp    831ce32 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x2dc>
 831cc59:	8b 75 ec             	mov    -0x14(%ebp),%esi
 831cc5c:	8d 45 eb             	lea    -0x15(%ebp),%eax
 831cc5f:	89 04 24             	mov    %eax,(%esp)
 831cc62:	e8 69 34 3c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 831cc67:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cc6a:	8d 90 1c 3f 00 00    	lea    0x3f1c(%eax),%edx
 831cc70:	8d 45 eb             	lea    -0x15(%ebp),%eax
 831cc73:	89 44 24 08          	mov    %eax,0x8(%esp)
 831cc77:	89 54 24 04          	mov    %edx,0x4(%esp)
 831cc7b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831cc7e:	89 04 24             	mov    %eax,(%esp)
 831cc81:	e8 aa a9 3e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 831cc86:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 831cc8d:	00 
 831cc8e:	89 74 24 08          	mov    %esi,0x8(%esp)
 831cc92:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831cc95:	89 44 24 04          	mov    %eax,0x4(%esp)
 831cc99:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cc9c:	89 04 24             	mov    %eax,(%esp)
 831cc9f:	e8 6c ab 3e 00       	call   8707810 <_ZNSsC1ERKSsjj>
 831cca4:	eb 15                	jmp    831ccbb <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x165>
 831cca6:	89 d3                	mov    %edx,%ebx
 831cca8:	89 c6                	mov    %eax,%esi
 831ccaa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831ccad:	89 04 24             	mov    %eax,(%esp)
 831ccb0:	e8 2b af 3e 00       	call   8707be0 <_ZNSsD1Ev>
 831ccb5:	89 f0                	mov    %esi,%eax
 831ccb7:	89 da                	mov    %ebx,%edx
 831ccb9:	eb 22                	jmp    831ccdd <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x187>
 831ccbb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 831ccbe:	89 04 24             	mov    %eax,(%esp)
 831ccc1:	e8 1a af 3e 00       	call   8707be0 <_ZNSsD1Ev>
 831ccc6:	eb 30                	jmp    831ccf8 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x1a2>
 831ccc8:	89 d3                	mov    %edx,%ebx
 831ccca:	89 c6                	mov    %eax,%esi
 831cccc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cccf:	89 04 24             	mov    %eax,(%esp)
 831ccd2:	e8 09 af 3e 00       	call   8707be0 <_ZNSsD1Ev>
 831ccd7:	89 f0                	mov    %esi,%eax
 831ccd9:	89 da                	mov    %ebx,%edx
 831ccdb:	eb 00                	jmp    831ccdd <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x187>
 831ccdd:	89 d3                	mov    %edx,%ebx
 831ccdf:	89 c6                	mov    %eax,%esi
 831cce1:	8d 45 eb             	lea    -0x15(%ebp),%eax
 831cce4:	89 04 24             	mov    %eax,(%esp)
 831cce7:	e8 04 34 3c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 831ccec:	89 f0                	mov    %esi,%eax
 831ccee:	89 da                	mov    %ebx,%edx
 831ccf0:	89 04 24             	mov    %eax,(%esp)
 831ccf3:	e8 58 6a 7c 00       	call   8ae3750 <_Unwind_Resume>
 831ccf8:	8d 45 eb             	lea    -0x15(%ebp),%eax
 831ccfb:	89 04 24             	mov    %eax,(%esp)
 831ccfe:	e8 ed 33 3c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 831cd03:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 831cd0a:	eb 17                	jmp    831cd23 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x1cd>
 831cd0c:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 831cd13:	00 
 831cd14:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cd17:	89 04 24             	mov    %eax,(%esp)
 831cd1a:	e8 a1 b0 3e 00       	call   8707dc0 <_ZNSs9push_backEc>
 831cd1f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 831cd23:	8b 45 ec             	mov    -0x14(%ebp),%eax
 831cd26:	83 e8 01             	sub    $0x1,%eax
 831cd29:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 831cd2c:	0f 9f c0             	setg   %al
 831cd2f:	84 c0                	test   %al,%al
 831cd31:	75 d9                	jne    831cd0c <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x1b6>
 831cd33:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 831cd3a:	00 
 831cd3b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cd3e:	89 04 24             	mov    %eax,(%esp)
 831cd41:	e8 7a b0 3e 00       	call   8707dc0 <_ZNSs9push_backEc>
 831cd46:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cd49:	89 04 24             	mov    %eax,(%esp)
 831cd4c:	e8 0f 99 3e 00       	call   8706660 <_ZNKSs4sizeEv>
 831cd51:	83 f8 1e             	cmp    $0x1e,%eax
 831cd54:	0f 95 c0             	setne  %al
 831cd57:	84 c0                	test   %al,%al
 831cd59:	74 55                	je     831cdb0 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x25a>
 831cd5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 831cd5e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 831cd64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831cd6b:	00 
 831cd6c:	89 04 24             	mov    %eax,(%esp)
 831cd6f:	e8 d7 c2 de ff       	call   810904b <_Z14NumberToStringji>
 831cd74:	89 44 24 14          	mov    %eax,0x14(%esp)
 831cd78:	c7 44 24 10 00 43 c2 	movl   $0x8c24300,0x10(%esp)
 831cd7f:	08 
 831cd80:	c7 44 24 0c 1c 01 00 	movl   $0x11c,0xc(%esp)
 831cd87:	00 
 831cd88:	c7 44 24 08 60 4f c2 	movl   $0x8c24f60,0x8(%esp)
 831cd8f:	08 
 831cd90:	c7 44 24 04 2b 43 c2 	movl   $0x8c2432b,0x4(%esp)
 831cd97:	08 
 831cd98:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 831cd9f:	e8 66 6e 7b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 831cda4:	bb 00 00 00 00       	mov    $0x0,%ebx
 831cda9:	be 00 00 00 00       	mov    $0x0,%esi
 831cdae:	eb 73                	jmp    831ce23 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x2cd>
 831cdb0:	8b 45 08             	mov    0x8(%ebp),%eax
 831cdb3:	05 0b 03 00 00       	add    $0x30b,%eax
 831cdb8:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 831cdbf:	00 
 831cdc0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 831cdc7:	00 
 831cdc8:	89 04 24             	mov    %eax,(%esp)
 831cdcb:	e8 f0 0e d6 ff       	call   807dcc0 <memset@plt>
 831cdd0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cdd3:	89 04 24             	mov    %eax,(%esp)
 831cdd6:	e8 85 98 3e 00       	call   8706660 <_ZNKSs4sizeEv>
 831cddb:	89 c6                	mov    %eax,%esi
 831cddd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831cde0:	89 04 24             	mov    %eax,(%esp)
 831cde3:	e8 08 97 3e 00       	call   87064f0 <_ZNKSs5c_strEv>
 831cde8:	8b 55 08             	mov    0x8(%ebp),%edx
 831cdeb:	81 c2 0b 03 00 00    	add    $0x30b,%edx
 831cdf1:	89 74 24 08          	mov    %esi,0x8(%esp)
 831cdf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 831cdf9:	89 14 24             	mov    %edx,(%esp)
 831cdfc:	e8 cf 0a d6 ff       	call   807d8d0 <strncpy@plt>
 831ce01:	be 01 00 00 00       	mov    $0x1,%esi
 831ce06:	eb 1b                	jmp    831ce23 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x2cd>
 831ce08:	89 d3                	mov    %edx,%ebx
 831ce0a:	89 c6                	mov    %eax,%esi
 831ce0c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831ce0f:	89 04 24             	mov    %eax,(%esp)
 831ce12:	e8 c9 ad 3e 00       	call   8707be0 <_ZNSsD1Ev>
 831ce17:	89 f0                	mov    %esi,%eax
 831ce19:	89 da                	mov    %ebx,%edx
 831ce1b:	89 04 24             	mov    %eax,(%esp)
 831ce1e:	e8 2d 69 7c 00       	call   8ae3750 <_Unwind_Resume>
 831ce23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 831ce26:	89 04 24             	mov    %eax,(%esp)
 831ce29:	e8 b2 ad 3e 00       	call   8707be0 <_ZNSsD1Ev>
 831ce2e:	85 f6                	test   %esi,%esi
 831ce30:	74 23                	je     831ce55 <_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA+0x2ff>
 831ce32:	8b 45 08             	mov    0x8(%ebp),%eax
 831ce35:	8d 90 0b 03 00 00    	lea    0x30b(%eax),%edx
 831ce3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 831ce3e:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 831ce44:	89 54 24 04          	mov    %edx,0x4(%esp)
 831ce48:	89 04 24             	mov    %eax,(%esp)
 831ce4b:	e8 ea b8 11 00       	call   843873a <_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc>
 831ce50:	bb 01 00 00 00       	mov    $0x1,%ebx
 831ce55:	89 d8                	mov    %ebx,%eax
 831ce57:	83 c4 40             	add    $0x40,%esp
 831ce5a:	5b                   	pop    %ebx
 831ce5b:	5e                   	pop    %esi
 831ce5c:	5d                   	pop    %ebp
 831ce5d:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::updateUvList @ 0x831cb56

/* break_away_prevent::CBreakAwayPreventSystem::updateUvList(SIG_LOGIN_DATA const*) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::updateUvList
          (CBreakAwayPreventSystem *this,SIG_LOGIN_DATA *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  char *__src;
  undefined4 unaff_EBX;
  string local_24 [4];
  string local_20 [7];
  allocator<char> local_19;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3f50));
  if ((int)local_18 < 0) {
    local_18 = 0;
  }
  local_14 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3958));
  if (local_18 == 0) {
    if (*(int *)(param_1 + 0x3f50) != 0) {
      memset(this + 0x30b,0,0x1f);
      memcpy(this + 0x30b,param_1 + 0x3f1c,0x1f);
      return 1;
    }
    local_18 = local_14;
    if (local_14 == 0) {
      local_18 = 1;
    }
  }
  uVar1 = local_18;
  if ((int)local_18 < 0x1e) {
    std::allocator<char>::allocator();
                    /* try { // try from 0831cc81 to 0831cc85 has its CatchHandler @ 0831ccdd */
    std::string::string(local_20,(char *)(param_1 + 0x3f1c),(allocator *)&local_19);
                    /* try { // try from 0831cc9f to 0831cca3 has its CatchHandler @ 0831cca6 */
    std::string::string(local_24,local_20,uVar1,0x1e);
                    /* try { // try from 0831ccc1 to 0831ccc5 has its CatchHandler @ 0831ccc8 */
    std::string::~string(local_20);
    std::allocator<char>::~allocator(&local_19);
    for (local_10 = 0; local_10 < (int)(local_18 - 1); local_10 = local_10 + 1) {
                    /* try { // try from 0831cd1a to 0831cde7 has its CatchHandler @ 0831ce08 */
      std::string::push_back(local_24,'0');
    }
    std::string::push_back(local_24,'1');
    iVar2 = std::string::size(local_24);
    if (iVar2 == 0x1e) {
      memset(this + 0x30b,0,0x1f);
      __n = std::string::size(local_24);
      __src = (char *)std::string::c_str(local_24);
      strncpy((char *)(this + 0x30b),__src,__n);
    }
    else {
      uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      LogManager::logFormat
                (1,"BreakAwayPreventSystem.cpp",
                 "bool break_away_prevent::CBreakAwayPreventSystem::updateUvList(const SIG_LOGIN_DATA*)"
                 ,0x11c,"BREAK_AWAY : UV_INFO SIZE ERROR!! M_ID(%s)",uVar3);
      unaff_EBX = 0;
    }
    std::string::~string(local_24);
    if (iVar2 != 0x1e) {
      return unaff_EBX;
    }
  }
  else {
    memset(this + 0x30b,0x30,0x1f);
    this[0x328] = (CBreakAwayPreventSystem)0x31;
    this[0x329] = (CBreakAwayPreventSystem)0x0;
  }
  DB_UpdateBreakAwayUvList::makeRequest(*(uint *)(param_1 + 0xc0),(char *)(this + 0x30b));
  return 1;
}

```

---

## ~CBreakAwayPreventSystem

```asm
// === 0831c486 break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem  [0x0831c486-0x831c49d] ===
 831c486:	55                   	push   %ebp
 831c487:	89 e5                	mov    %esp,%ebp
 831c489:	83 ec 18             	sub    $0x18,%esp
 831c48c:	8b 45 08             	mov    0x8(%ebp),%eax
 831c48f:	05 e4 02 00 00       	add    $0x2e4,%eax
 831c494:	89 04 24             	mov    %eax,(%esp)
 831c497:	e8 ac 10 00 00       	call   831d548 <_ZNSt3mapI15STRewardDataKey16STRewardDataListSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 831c49c:	c9                   	leave
 831c49d:	c3                   	ret

```

```c
// break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem @ 0x831c486

/* break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem() */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem(CBreakAwayPreventSystem *this)

{
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::~map((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
          *)(this + 0x2e4));
  return;
}

```

