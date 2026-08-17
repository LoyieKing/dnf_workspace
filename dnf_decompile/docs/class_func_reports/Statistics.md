# Statistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## BreakJar

```asm
// === 0860b66c Statistics::BreakJar  [0x0860b66c-0x860b6a1] ===
 860b66c:	55                   	push   %ebp
 860b66d:	89 e5                	mov    %esp,%ebp
 860b66f:	83 ec 28             	sub    $0x28,%esp
 860b672:	8b 45 08             	mov    0x8(%ebp),%eax
 860b675:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860b678:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b67b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860b67e:	8b 45 10             	mov    0x10(%ebp),%eax
 860b681:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b684:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 860b68b:	00 
 860b68c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b68f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b693:	c7 04 24 37 00 00 00 	movl   $0x37,(%esp)
 860b69a:	e8 8f 02 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b69f:	c9                   	leave
 860b6a0:	c3                   	ret
 860b6a1:	90                   	nop

```

```c
// Statistics::BreakJar @ 0x860b66c

/* Statistics::BreakJar(unsigned int, unsigned int, int) */

void Statistics::BreakJar(uint param_1,uint param_2,int param_3)

{
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendSignal(0x37,&local_18,0xc);
  return;
}

```

---

## Composition

```asm
// === 0860b6a2 Statistics::Composition  [0x0860b6a2-0x860b6db] ===
 860b6a2:	55                   	push   %ebp
 860b6a3:	89 e5                	mov    %esp,%ebp
 860b6a5:	83 ec 28             	sub    $0x28,%esp
 860b6a8:	8b 45 08             	mov    0x8(%ebp),%eax
 860b6ab:	89 45 eb             	mov    %eax,-0x15(%ebp)
 860b6ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b6b1:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860b6b4:	c6 45 f3 63          	movb   $0x63,-0xd(%ebp)
 860b6b8:	8b 45 10             	mov    0x10(%ebp),%eax
 860b6bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b6be:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 860b6c5:	00 
 860b6c6:	8d 45 eb             	lea    -0x15(%ebp),%eax
 860b6c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b6cd:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 860b6d4:	e8 55 02 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b6d9:	c9                   	leave
 860b6da:	c3                   	ret
 860b6db:	90                   	nop

```

```c
// Statistics::Composition @ 0x860b6a2

/* Statistics::Composition(unsigned int, unsigned int, int) */

void Statistics::Composition(uint param_1,uint param_2,int param_3)

{
  uint local_19;
  uint local_15;
  undefined1 local_11;
  int local_10;
  
  local_19 = param_1;
  local_15 = param_2;
  local_11 = 99;
  local_10 = param_3;
  SendSignal(0x38,&local_19,0xd);
  return;
}

```

---

## Decomposition

```asm
// === 0860b6dc Statistics::Decomposition  [0x0860b6dc-0x860b715] ===
 860b6dc:	55                   	push   %ebp
 860b6dd:	89 e5                	mov    %esp,%ebp
 860b6df:	83 ec 28             	sub    $0x28,%esp
 860b6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 860b6e5:	89 45 eb             	mov    %eax,-0x15(%ebp)
 860b6e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b6eb:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860b6ee:	c6 45 f3 64          	movb   $0x64,-0xd(%ebp)
 860b6f2:	8b 45 10             	mov    0x10(%ebp),%eax
 860b6f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b6f8:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 860b6ff:	00 
 860b700:	8d 45 eb             	lea    -0x15(%ebp),%eax
 860b703:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b707:	c7 04 24 38 00 00 00 	movl   $0x38,(%esp)
 860b70e:	e8 1b 02 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b713:	c9                   	leave
 860b714:	c3                   	ret
 860b715:	90                   	nop

```

```c
// Statistics::Decomposition @ 0x860b6dc

/* Statistics::Decomposition(unsigned int, unsigned int, int) */

void Statistics::Decomposition(uint param_1,uint param_2,int param_3)

{
  uint local_19;
  uint local_15;
  undefined1 local_11;
  int local_10;
  
  local_19 = param_1;
  local_15 = param_2;
  local_11 = 100;
  local_10 = param_3;
  SendSignal(0x38,&local_19,0xd);
  return;
}

```

---

## DungeonClear

```asm
// === 0860b81c Statistics::DungeonClear  [0x0860b81c-0x860b867] ===
 860b81c:	55                   	push   %ebp
 860b81d:	89 e5                	mov    %esp,%ebp
 860b81f:	83 ec 38             	sub    $0x38,%esp
 860b822:	8b 45 08             	mov    0x8(%ebp),%eax
 860b825:	89 45 df             	mov    %eax,-0x21(%ebp)
 860b828:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b82b:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 860b82e:	8b 45 10             	mov    0x10(%ebp),%eax
 860b831:	89 45 e7             	mov    %eax,-0x19(%ebp)
 860b834:	8b 45 14             	mov    0x14(%ebp),%eax
 860b837:	89 45 eb             	mov    %eax,-0x15(%ebp)
 860b83a:	c6 45 f7 63          	movb   $0x63,-0x9(%ebp)
 860b83e:	8b 45 18             	mov    0x18(%ebp),%eax
 860b841:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860b844:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860b847:	89 45 f3             	mov    %eax,-0xd(%ebp)
 860b84a:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 860b851:	00 
 860b852:	8d 45 df             	lea    -0x21(%ebp),%eax
 860b855:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b859:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 860b860:	e8 c9 00 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b865:	c9                   	leave
 860b866:	c3                   	ret
 860b867:	90                   	nop

```

```c
// Statistics::DungeonClear @ 0x860b81c

/* Statistics::DungeonClear(unsigned int, unsigned int, int, int, int, int) */

void Statistics::DungeonClear
               (uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint local_25;
  uint local_21;
  int local_1d;
  int local_19;
  int local_15;
  int local_11;
  undefined1 local_d;
  
  local_25 = param_1;
  local_21 = param_2;
  local_1d = param_3;
  local_19 = param_4;
  local_d = 99;
  local_15 = param_5;
  local_11 = param_6;
  SendSignal(0x3c,&local_25,0x19);
  return;
}

```

---

## DungeonFail

```asm
// === 0860b8b4 Statistics::DungeonFail  [0x0860b8b4-0x860b8d7] ===
 860b8b4:	55                   	push   %ebp
 860b8b5:	89 e5                	mov    %esp,%ebp
 860b8b7:	83 ec 18             	sub    $0x18,%esp
 860b8ba:	e8 e8 ea ac ff       	call   80da3a7 <_Z11G_GameWorldv>
 860b8bf:	89 04 24             	mov    %eax,(%esp)
 860b8c2:	e8 6b 23 e4 ff       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 860b8c7:	8b 55 08             	mov    0x8(%ebp),%edx
 860b8ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 860b8ce:	89 04 24             	mov    %eax,(%esp)
 860b8d1:	e8 e4 08 00 00       	call   860c1ba <_ZN23StatisticsShusiaService17incDungeonFailureEi>
 860b8d6:	c9                   	leave
 860b8d7:	c3                   	ret

```

```c
// Statistics::DungeonFail @ 0x860b8b4

/* Statistics::DungeonFail(int) */

void Statistics::DungeonFail(int param_1)

{
  GameWorld *this;
  int iVar1;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::getStatisticsShusiaService(this);
  StatisticsShusiaService::incDungeonFailure(iVar1);
  return;
}

```

---

## DungeonGiveUp

```asm
// === 0860b868 Statistics::DungeonGiveUp  [0x0860b868-0x860b8b3] ===
 860b868:	55                   	push   %ebp
 860b869:	89 e5                	mov    %esp,%ebp
 860b86b:	83 ec 38             	sub    $0x38,%esp
 860b86e:	8b 45 08             	mov    0x8(%ebp),%eax
 860b871:	89 45 df             	mov    %eax,-0x21(%ebp)
 860b874:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b877:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 860b87a:	8b 45 10             	mov    0x10(%ebp),%eax
 860b87d:	89 45 e7             	mov    %eax,-0x19(%ebp)
 860b880:	8b 45 14             	mov    0x14(%ebp),%eax
 860b883:	89 45 eb             	mov    %eax,-0x15(%ebp)
 860b886:	c6 45 f7 67          	movb   $0x67,-0x9(%ebp)
 860b88a:	8b 45 18             	mov    0x18(%ebp),%eax
 860b88d:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860b890:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860b893:	89 45 f3             	mov    %eax,-0xd(%ebp)
 860b896:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 860b89d:	00 
 860b89e:	8d 45 df             	lea    -0x21(%ebp),%eax
 860b8a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b8a5:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 860b8ac:	e8 7d 00 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b8b1:	c9                   	leave
 860b8b2:	c3                   	ret
 860b8b3:	90                   	nop

```

```c
// Statistics::DungeonGiveUp @ 0x860b868

/* Statistics::DungeonGiveUp(unsigned int, unsigned int, int, int, int, int) */

void Statistics::DungeonGiveUp
               (uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint local_25;
  uint local_21;
  int local_1d;
  int local_19;
  int local_15;
  int local_11;
  undefined1 local_d;
  
  local_25 = param_1;
  local_21 = param_2;
  local_1d = param_3;
  local_19 = param_4;
  local_d = 0x67;
  local_15 = param_5;
  local_11 = param_6;
  SendSignal(0x3c,&local_25,0x19);
  return;
}

```

---

## PVPPlay2

```asm
// === 0860b8d8 Statistics::PVPPlay2  [0x0860b8d8-0x860b909] ===
 860b8d8:	55                   	push   %ebp
 860b8d9:	89 e5                	mov    %esp,%ebp
 860b8db:	83 ec 18             	sub    $0x18,%esp
 860b8de:	e8 c4 ea ac ff       	call   80da3a7 <_Z11G_GameWorldv>
 860b8e3:	89 04 24             	mov    %eax,(%esp)
 860b8e6:	e8 55 23 e4 ff       	call   844dc40 <_ZN9GameWorld16getStatisticsPvPEv>
 860b8eb:	8b 55 10             	mov    0x10(%ebp),%edx
 860b8ee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 860b8f2:	8b 55 0c             	mov    0xc(%ebp),%edx
 860b8f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 860b8f9:	8b 55 08             	mov    0x8(%ebp),%edx
 860b8fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 860b900:	89 04 24             	mov    %eax,(%esp)
 860b903:	e8 d2 0c 00 00       	call   860c5da <_ZN13StatisticsPvP16incPvPRoomResultEiii>
 860b908:	c9                   	leave
 860b909:	c3                   	ret

```

```c
// Statistics::PVPPlay2 @ 0x860b8d8

/* Statistics::PVPPlay2(int, int, int) */

void Statistics::PVPPlay2(int param_1,int param_2,int param_3)

{
  GameWorld *this;
  StatisticsPvP *this_00;
  
  this = (GameWorld *)G_GameWorld();
  this_00 = (StatisticsPvP *)GameWorld::getStatisticsPvP(this);
  StatisticsPvP::incPvPRoomResult(this_00,param_1,param_2,param_3);
  return;
}

```

---

## PvpPlay

```asm
// === 0860b74c Statistics::PvpPlay  [0x0860b74c-0x860b787] ===
 860b74c:	55                   	push   %ebp
 860b74d:	89 e5                	mov    %esp,%ebp
 860b74f:	83 ec 28             	sub    $0x28,%esp
 860b752:	8b 45 08             	mov    0x8(%ebp),%eax
 860b755:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860b758:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b75b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860b75e:	8b 45 10             	mov    0x10(%ebp),%eax
 860b761:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860b764:	8b 45 14             	mov    0x14(%ebp),%eax
 860b767:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b76a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 860b771:	00 
 860b772:	8d 45 e8             	lea    -0x18(%ebp),%eax
 860b775:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b779:	c7 04 24 3a 00 00 00 	movl   $0x3a,(%esp)
 860b780:	e8 a9 01 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b785:	c9                   	leave
 860b786:	c3                   	ret
 860b787:	90                   	nop

```

```c
// Statistics::PvpPlay @ 0x860b74c

/* Statistics::PvpPlay(unsigned int, unsigned int, int, int) */

void Statistics::PvpPlay(uint param_1,uint param_2,int param_3,int param_4)

{
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendSignal(0x3a,&local_1c,0x10);
  return;
}

```

---

## RankResult

```asm
// === 0860b788 Statistics::RankResult  [0x0860b788-0x860b81b] ===
 860b788:	55                   	push   %ebp
 860b789:	89 e5                	mov    %esp,%ebp
 860b78b:	57                   	push   %edi
 860b78c:	56                   	push   %esi
 860b78d:	53                   	push   %ebx
 860b78e:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 860b794:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 860b79a:	89 04 24             	mov    %eax,(%esp)
 860b79d:	e8 f6 4f 00 00       	call   8610798 <_ZN16MSG_STAT_RANKRESC1Ev>
 860b7a2:	8b 45 08             	mov    0x8(%ebp),%eax
 860b7a5:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 860b7ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b7ae:	89 45 80             	mov    %eax,-0x80(%ebp)
 860b7b1:	8b 45 10             	mov    0x10(%ebp),%eax
 860b7b4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 860b7b7:	8b 45 14             	mov    0x14(%ebp),%eax
 860b7ba:	89 45 88             	mov    %eax,-0x78(%ebp)
 860b7bd:	8b 45 18             	mov    0x18(%ebp),%eax
 860b7c0:	89 45 8c             	mov    %eax,-0x74(%ebp)
 860b7c3:	8b 45 20             	mov    0x20(%ebp),%eax
 860b7c6:	89 45 90             	mov    %eax,-0x70(%ebp)
 860b7c9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860b7cc:	89 45 94             	mov    %eax,-0x6c(%ebp)
 860b7cf:	8b 45 24             	mov    0x24(%ebp),%eax
 860b7d2:	8d 55 98             	lea    -0x68(%ebp),%edx
 860b7d5:	89 c3                	mov    %eax,%ebx
 860b7d7:	b8 14 00 00 00       	mov    $0x14,%eax
 860b7dc:	89 d7                	mov    %edx,%edi
 860b7de:	89 de                	mov    %ebx,%esi
 860b7e0:	89 c1                	mov    %eax,%ecx
 860b7e2:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 860b7e4:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 860b7eb:	00 
 860b7ec:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 860b7f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b7f6:	c7 04 24 3b 00 00 00 	movl   $0x3b,(%esp)
 860b7fd:	e8 2c 01 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b802:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 860b808:	89 04 24             	mov    %eax,(%esp)
 860b80b:	e8 9e 4f 00 00       	call   86107ae <_ZN16MSG_STAT_RANKRESD1Ev>
 860b810:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 860b816:	5b                   	pop    %ebx
 860b817:	5e                   	pop    %esi
 860b818:	5f                   	pop    %edi
 860b819:	5d                   	pop    %ebp
 860b81a:	c3                   	ret
 860b81b:	90                   	nop

```

```c
// Statistics::RankResult @ 0x860b788

/* Statistics::RankResult(unsigned int, unsigned int, int, int, int, int, int, GameResultType&) */

void Statistics::RankResult
               (uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,GameResultType *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c [23];
  
  bVar3 = 0;
  MSG_STAT_RANKRES::MSG_STAT_RANKRES((MSG_STAT_RANKRES *)&local_88);
  local_88 = param_1;
  local_84 = param_2;
  local_80 = param_3;
  local_7c = param_4;
  local_78 = param_5;
  local_74 = param_7;
  local_70 = param_6;
  puVar2 = local_6c;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)param_8;
    param_8 = param_8 + (uint)bVar3 * -8 + 4;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  SendSignal(0x3b,&local_88,0x6c);
  MSG_STAT_RANKRES::~MSG_STAT_RANKRES((MSG_STAT_RANKRES *)&local_88);
  return;
}

```

---

## SendSignal

```asm
// === 0860b92e Statistics::SendSignal  [0x0860b92e-0x860b933] ===
 860b92e:	55                   	push   %ebp
 860b92f:	89 e5                	mov    %esp,%ebp
 860b931:	5d                   	pop    %ebp
 860b932:	c3                   	ret
 860b933:	90                   	nop

```

```c
// Statistics::SendSignal @ 0x860b92e

/* Statistics::SendSignal(int, void*, int) */

void Statistics::SendSignal(int param_1,void *param_2,int param_3)

{
  return;
}

```

---

## Statistics

```asm
// === 0860b660 Statistics::Statistics  [0x0860b660-0x860b665] ===
 860b660:	55                   	push   %ebp
 860b661:	89 e5                	mov    %esp,%ebp
 860b663:	5d                   	pop    %ebp
 860b664:	c3                   	ret
 860b665:	90                   	nop

```

```c
// Statistics::Statistics @ 0x860b660

/* Statistics::Statistics() */

void __thiscall Statistics::Statistics(Statistics *this)

{
  return;
}

```

---

## UseCoin

```asm
// === 0860b716 Statistics::UseCoin  [0x0860b716-0x860b74b] ===
 860b716:	55                   	push   %ebp
 860b717:	89 e5                	mov    %esp,%ebp
 860b719:	83 ec 28             	sub    $0x28,%esp
 860b71c:	8b 45 08             	mov    0x8(%ebp),%eax
 860b71f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 860b722:	8b 45 0c             	mov    0xc(%ebp),%eax
 860b725:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860b728:	8b 45 10             	mov    0x10(%ebp),%eax
 860b72b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860b72e:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 860b735:	00 
 860b736:	8d 45 ec             	lea    -0x14(%ebp),%eax
 860b739:	89 44 24 04          	mov    %eax,0x4(%esp)
 860b73d:	c7 04 24 39 00 00 00 	movl   $0x39,(%esp)
 860b744:	e8 e5 01 00 00       	call   860b92e <_ZN10Statistics10SendSignalEiPvi>
 860b749:	c9                   	leave
 860b74a:	c3                   	ret
 860b74b:	90                   	nop

```

```c
// Statistics::UseCoin @ 0x860b716

/* Statistics::UseCoin(unsigned int, unsigned int, int) */

void Statistics::UseCoin(uint param_1,uint param_2,int param_3)

{
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendSignal(0x39,&local_18,0xc);
  return;
}

```

---

## UseShusiaService

```asm
// === 0860b90a Statistics::UseShusiaService  [0x0860b90a-0x860b92d] ===
 860b90a:	55                   	push   %ebp
 860b90b:	89 e5                	mov    %esp,%ebp
 860b90d:	83 ec 18             	sub    $0x18,%esp
 860b910:	e8 92 ea ac ff       	call   80da3a7 <_Z11G_GameWorldv>
 860b915:	89 04 24             	mov    %eax,(%esp)
 860b918:	e8 15 23 e4 ff       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 860b91d:	8b 55 08             	mov    0x8(%ebp),%edx
 860b920:	89 54 24 04          	mov    %edx,0x4(%esp)
 860b924:	89 04 24             	mov    %eax,(%esp)
 860b927:	e8 2c 0a 00 00       	call   860c358 <_ZN23StatisticsShusiaService15incServiceUsageEi>
 860b92c:	c9                   	leave
 860b92d:	c3                   	ret

```

```c
// Statistics::UseShusiaService @ 0x860b90a

/* Statistics::UseShusiaService(int) */

void Statistics::UseShusiaService(int param_1)

{
  GameWorld *this;
  int iVar1;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::getStatisticsShusiaService(this);
  StatisticsShusiaService::incServiceUsage(iVar1);
  return;
}

```

---

## ~Statistics

```asm
// === 0860b666 Statistics::~Statistics  [0x0860b666-0x860b66b] ===
 860b666:	55                   	push   %ebp
 860b667:	89 e5                	mov    %esp,%ebp
 860b669:	5d                   	pop    %ebp
 860b66a:	c3                   	ret
 860b66b:	90                   	nop

```

```c
// Statistics::~Statistics @ 0x860b666

/* Statistics::~Statistics() */

void __thiscall Statistics::~Statistics(Statistics *this)

{
  return;
}

```

