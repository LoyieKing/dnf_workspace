# expert_job__CAlchemist

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CAlchemist

```asm
// === 085d11b4 expert_job::CAlchemist::CAlchemist  [0x085d11b4-0x85d11cf] ===
 85d11b4:	55                   	push   %ebp
 85d11b5:	89 e5                	mov    %esp,%ebp
 85d11b7:	83 ec 18             	sub    $0x18,%esp
 85d11ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85d11bd:	89 04 24             	mov    %eax,(%esp)
 85d11c0:	e8 ef e0 ec ff       	call   849f2b4 <_ZN10expert_job10CExpertJobC1Ev>
 85d11c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d11c8:	c7 00 48 fa cb 08    	movl   $0x8cbfa48,(%eax)
 85d11ce:	c9                   	leave
 85d11cf:	c3                   	ret

```

```c
// expert_job::CAlchemist::CAlchemist @ 0x85d11b4

/* expert_job::CAlchemist::CAlchemist() */

void __thiscall expert_job::CAlchemist::CAlchemist(CAlchemist *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cbfa48;
  return;
}

```

---

## CheckUsableStackableItem

```asm
// === 085d18e2 expert_job::CAlchemist::CheckUsableStackableItem  [0x085d18e2-0x85d1978] ===
 85d18e2:	55                   	push   %ebp
 85d18e3:	89 e5                	mov    %esp,%ebp
 85d18e5:	53                   	push   %ebx
 85d18e6:	83 ec 24             	sub    $0x24,%esp
 85d18e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d18ec:	89 04 24             	mov    %eax,(%esp)
 85d18ef:	e8 de b0 c5 ff       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 85d18f4:	83 f8 02             	cmp    $0x2,%eax
 85d18f7:	0f 94 c0             	sete   %al
 85d18fa:	84 c0                	test   %al,%al
 85d18fc:	74 70                	je     85d196e <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x8c>
 85d18fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1901:	89 04 24             	mov    %eax,(%esp)
 85d1904:	e8 43 38 08 00       	call   865514c <_ZN5CUser8GetPartyEv>
 85d1909:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d190c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85d1910:	74 5c                	je     85d196e <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x8c>
 85d1912:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d1919:	eb 48                	jmp    85d1963 <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x81>
 85d191b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d191e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1922:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d1925:	89 04 24             	mov    %eax,(%esp)
 85d1928:	e8 37 3e b7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85d192d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d1930:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d1934:	74 29                	je     85d195f <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x7d>
 85d1936:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d1939:	89 04 24             	mov    %eax,(%esp)
 85d193c:	e8 c9 00 00 00       	call   85d1a0a <_ZN5CUser19GetUseAPCPotionTimeEv>
 85d1941:	89 c3                	mov    %eax,%ebx
 85d1943:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d194a:	e8 4f a3 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d194f:	39 c3                	cmp    %eax,%ebx
 85d1951:	0f 9f c0             	setg   %al
 85d1954:	84 c0                	test   %al,%al
 85d1956:	74 07                	je     85d195f <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x7d>
 85d1958:	b8 00 00 00 00       	mov    $0x0,%eax
 85d195d:	eb 14                	jmp    85d1973 <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x91>
 85d195f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d1963:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 85d1967:	0f 9e c0             	setle  %al
 85d196a:	84 c0                	test   %al,%al
 85d196c:	75 ad                	jne    85d191b <_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem+0x39>
 85d196e:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1973:	83 c4 24             	add    $0x24,%esp
 85d1976:	5b                   	pop    %ebx
 85d1977:	5d                   	pop    %ebp
 85d1978:	c3                   	ret

```

```c
// expert_job::CAlchemist::CheckUsableStackableItem @ 0x85d18e2

/* expert_job::CAlchemist::CheckUsableStackableItem(CUser*, CItem const*) */

undefined4 expert_job::CAlchemist::CheckUsableStackableItem(CUser *param_1,CItem *param_2)

{
  int iVar1;
  CParty *this;
  CUser *this_00;
  int iVar2;
  int local_14;
  
  iVar1 = CStackableItem::get_sub_type((CStackableItem *)param_2);
  if ((iVar1 == 2) && (this = (CParty *)CUser::GetParty(param_1), this != (CParty *)0x0)) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      this_00 = (CUser *)CParty::get_user(this,local_14);
      if (this_00 != (CUser *)0x0) {
        iVar1 = CUser::GetUseAPCPotionTime(this_00);
        iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (iVar2 < iVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

```

---

## GetAssaultPrevent

```asm
// === 085d137c expert_job::CAlchemist::GetAssaultPrevent  [0x085d137c-0x85d1423] ===
 85d137c:	55                   	push   %ebp
 85d137d:	89 e5                	mov    %esp,%ebp
 85d137f:	83 ec 28             	sub    $0x28,%esp
 85d1382:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1385:	89 04 24             	mov    %eax,(%esp)
 85d1388:	e8 bf 3d 08 00       	call   865514c <_ZN5CUser8GetPartyEv>
 85d138d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d1390:	c7 44 24 04 4a ac 27 	movl   $0x27ac4a,0x4(%esp)
 85d1397:	00 
 85d1398:	8b 45 08             	mov    0x8(%ebp),%eax
 85d139b:	89 04 24             	mov    %eax,(%esp)
 85d139e:	e8 7b fe ff ff       	call   85d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>
 85d13a3:	84 c0                	test   %al,%al
 85d13a5:	74 07                	je     85d13ae <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x32>
 85d13a7:	b8 01 00 00 00       	mov    $0x1,%eax
 85d13ac:	eb 74                	jmp    85d1422 <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0xa6>
 85d13ae:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85d13b2:	74 69                	je     85d141d <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0xa1>
 85d13b4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d13bb:	eb 55                	jmp    85d1412 <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x96>
 85d13bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d13c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d13c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d13c7:	89 04 24             	mov    %eax,(%esp)
 85d13ca:	e8 95 43 b7 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85d13cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d13d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d13d6:	74 32                	je     85d140a <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x8e>
 85d13d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d13db:	3b 45 08             	cmp    0x8(%ebp),%eax
 85d13de:	74 2d                	je     85d140d <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x91>
 85d13e0:	c7 44 24 04 4a ac 27 	movl   $0x27ac4a,0x4(%esp)
 85d13e7:	00 
 85d13e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d13eb:	89 04 24             	mov    %eax,(%esp)
 85d13ee:	e8 2b fe ff ff       	call   85d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>
 85d13f3:	84 c0                	test   %al,%al
 85d13f5:	74 17                	je     85d140e <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x92>
 85d13f7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d13fb:	74 06                	je     85d1403 <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x87>
 85d13fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1400:	c6 00 01             	movb   $0x1,(%eax)
 85d1403:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1408:	eb 18                	jmp    85d1422 <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0xa6>
 85d140a:	90                   	nop
 85d140b:	eb 01                	jmp    85d140e <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x92>
 85d140d:	90                   	nop
 85d140e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d1412:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 85d1416:	0f 9e c0             	setle  %al
 85d1419:	84 c0                	test   %al,%al
 85d141b:	75 a0                	jne    85d13bd <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb+0x41>
 85d141d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d1422:	c9                   	leave
 85d1423:	c3                   	ret

```

```c
// expert_job::CAlchemist::GetAssaultPrevent @ 0x85d137c

/* expert_job::CAlchemist::GetAssaultPrevent(CUser*, bool*) */

undefined4 expert_job::CAlchemist::GetAssaultPrevent(CUser *param_1,bool *param_2)

{
  char cVar1;
  CParty *this;
  undefined4 uVar2;
  CUser *pCVar3;
  int local_14;
  
  this = (CParty *)CUser::GetParty(param_1);
  cVar1 = IsExistContinuousEffectItem(param_1,0x27ac4a);
  if (cVar1 == '\0') {
    if (this != (CParty *)0x0) {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        pCVar3 = (CUser *)CParty::get_user(this,local_14);
        if (((pCVar3 != (CUser *)0x0) && (pCVar3 != param_1)) &&
           (cVar1 = IsExistContinuousEffectItem(pCVar3,0x27ac4a), cVar1 != '\0')) {
          if (param_2 != (bool *)0x0) {
            *param_2 = true;
          }
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## GetItemUpgradeSuccessRate

```asm
// === 085d1360 expert_job::CAlchemist::GetItemUpgradeSuccessRate  [0x085d1360-0x85d137b] ===
 85d1360:	55                   	push   %ebp
 85d1361:	89 e5                	mov    %esp,%ebp
 85d1363:	83 ec 04             	sub    $0x4,%esp
 85d1366:	a1 78 77 4f 09       	mov    0x94f7778,%eax
 85d136b:	89 45 fc             	mov    %eax,-0x4(%ebp)
 85d136e:	db 45 fc             	fildl  -0x4(%ebp)
 85d1371:	d9 05 3c fa cb 08    	flds   0x8cbfa3c
 85d1377:	de f9                	fdivrp %st,%st(1)
 85d1379:	c9                   	leave
 85d137a:	c3                   	ret
 85d137b:	90                   	nop

```

```c
// expert_job::CAlchemist::GetItemUpgradeSuccessRate @ 0x85d1360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CAlchemist::GetItemUpgradeSuccessRate() */

longdouble expert_job::CAlchemist::GetItemUpgradeSuccessRate(void)

{
  return (longdouble)g_alchemistInfo / (longdouble)_DAT_08cbfa3c;
}

```

---

## GetQuestItemDropRate

```asm
// === 085d12ee expert_job::CAlchemist::GetQuestItemDropRate  [0x085d12ee-0x85d135f] ===
 85d12ee:	55                   	push   %ebp
 85d12ef:	89 e5                	mov    %esp,%ebp
 85d12f1:	83 ec 18             	sub    $0x18,%esp
 85d12f4:	c7 44 24 04 52 ac 27 	movl   $0x27ac52,0x4(%esp)
 85d12fb:	00 
 85d12fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d12ff:	89 04 24             	mov    %eax,(%esp)
 85d1302:	e8 17 ff ff ff       	call   85d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>
 85d1307:	84 c0                	test   %al,%al
 85d1309:	75 17                	jne    85d1322 <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri+0x34>
 85d130b:	c7 44 24 04 8e 1f 00 	movl   $0x1f8e,0x4(%esp)
 85d1312:	00 
 85d1313:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1316:	89 04 24             	mov    %eax,(%esp)
 85d1319:	e8 00 ff ff ff       	call   85d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>
 85d131e:	84 c0                	test   %al,%al
 85d1320:	74 07                	je     85d1329 <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri+0x3b>
 85d1322:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1327:	eb 05                	jmp    85d132e <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri+0x40>
 85d1329:	b8 00 00 00 00       	mov    $0x0,%eax
 85d132e:	84 c0                	test   %al,%al
 85d1330:	74 29                	je     85d135b <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri+0x6d>
 85d1332:	a1 7c 77 4f 09       	mov    0x94f777c,%eax
 85d1337:	05 10 27 00 00       	add    $0x2710,%eax
 85d133c:	89 c1                	mov    %eax,%ecx
 85d133e:	0f af 4d 0c          	imul   0xc(%ebp),%ecx
 85d1342:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 85d1347:	89 c8                	mov    %ecx,%eax
 85d1349:	f7 ea                	imul   %edx
 85d134b:	c1 fa 0c             	sar    $0xc,%edx
 85d134e:	89 c8                	mov    %ecx,%eax
 85d1350:	c1 f8 1f             	sar    $0x1f,%eax
 85d1353:	89 d1                	mov    %edx,%ecx
 85d1355:	29 c1                	sub    %eax,%ecx
 85d1357:	89 c8                	mov    %ecx,%eax
 85d1359:	eb 03                	jmp    85d135e <_ZN10expert_job10CAlchemist20GetQuestItemDropRateEP5CUseri+0x70>
 85d135b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d135e:	c9                   	leave
 85d135f:	c3                   	ret

```

```c
// expert_job::CAlchemist::GetQuestItemDropRate @ 0x85d12ee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* expert_job::CAlchemist::GetQuestItemDropRate(CUser*, int) */

int expert_job::CAlchemist::GetQuestItemDropRate(CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = IsExistContinuousEffectItem(param_1,0x27ac52);
  if ((cVar2 == '\0') && (cVar2 = IsExistContinuousEffectItem(param_1,0x1f8e), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    param_2 = ((_DAT_094f777c + 10000) * param_2) / 10000;
  }
  return param_2;
}

```

---

## IsExistContinuousEffectItem

```asm
// === 085d121e expert_job::CAlchemist::IsExistContinuousEffectItem  [0x085d121e-0x85d12ed] ===
 85d121e:	55                   	push   %ebp
 85d121f:	89 e5                	mov    %esp,%ebp
 85d1221:	53                   	push   %ebx
 85d1222:	83 ec 24             	sub    $0x24,%esp
 85d1225:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1228:	89 04 24             	mov    %eax,(%esp)
 85d122b:	e8 02 f2 b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d1230:	85 c0                	test   %eax,%eax
 85d1232:	0f 95 c0             	setne  %al
 85d1235:	84 c0                	test   %al,%al
 85d1237:	0f 84 a7 00 00 00    	je     85d12e4 <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0xc6>
 85d123d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1240:	89 04 24             	mov    %eax,(%esp)
 85d1243:	e8 b2 07 00 00       	call   85d19fa <_ZNK15CUserCharacInfo27GetCurCharacEffectItemListREv>
 85d1248:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d124b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d124e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d1251:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1255:	89 04 24             	mov    %eax,(%esp)
 85d1258:	e8 bb 07 00 00       	call   85d1a18 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE5beginEv>
 85d125d:	83 ec 04             	sub    $0x4,%esp
 85d1260:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d1263:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d1266:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d126a:	89 04 24             	mov    %eax,(%esp)
 85d126d:	e8 d2 07 00 00       	call   85d1a44 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE3endEv>
 85d1272:	83 ec 04             	sub    $0x4,%esp
 85d1275:	eb 57                	jmp    85d12ce <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0xb0>
 85d1277:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d127a:	89 04 24             	mov    %eax,(%esp)
 85d127d:	e8 30 08 00 00       	call   85d1ab2 <_ZNK9__gnu_cxx17__normal_iteratorIPK18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEdeEv>
 85d1282:	8b 10                	mov    (%eax),%edx
 85d1284:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1287:	39 c2                	cmp    %eax,%edx
 85d1289:	0f 94 c0             	sete   %al
 85d128c:	84 c0                	test   %al,%al
 85d128e:	74 33                	je     85d12c3 <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0xa5>
 85d1290:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d1297:	e8 02 aa af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d129c:	89 c3                	mov    %eax,%ebx
 85d129e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d12a1:	89 04 24             	mov    %eax,(%esp)
 85d12a4:	e8 09 08 00 00       	call   85d1ab2 <_ZNK9__gnu_cxx17__normal_iteratorIPK18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEdeEv>
 85d12a9:	8b 40 04             	mov    0x4(%eax),%eax
 85d12ac:	39 c3                	cmp    %eax,%ebx
 85d12ae:	0f 92 c0             	setb   %al
 85d12b1:	84 c0                	test   %al,%al
 85d12b3:	74 07                	je     85d12bc <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0x9e>
 85d12b5:	b8 01 00 00 00       	mov    $0x1,%eax
 85d12ba:	eb 2d                	jmp    85d12e9 <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0xcb>
 85d12bc:	b8 00 00 00 00       	mov    $0x0,%eax
 85d12c1:	eb 26                	jmp    85d12e9 <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0xcb>
 85d12c3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d12c6:	89 04 24             	mov    %eax,(%esp)
 85d12c9:	e8 ce 07 00 00       	call   85d1a9c <_ZN9__gnu_cxx17__normal_iteratorIPK18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEppEv>
 85d12ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85d12d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d12d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d12d8:	89 04 24             	mov    %eax,(%esp)
 85d12db:	e8 90 07 00 00       	call   85d1a70 <_ZN9__gnu_cxxneIPK18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85d12e0:	84 c0                	test   %al,%al
 85d12e2:	75 93                	jne    85d1277 <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri+0x59>
 85d12e4:	b8 00 00 00 00       	mov    $0x0,%eax
 85d12e9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85d12ec:	c9                   	leave
 85d12ed:	c3                   	ret

```

```c
// expert_job::CAlchemist::IsExistContinuousEffectItem @ 0x85d121e

/* expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int) */

undefined4 expert_job::CAlchemist::IsExistContinuousEffectItem(CUser *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  undefined4 local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    local_10 = CUserCharacInfo::GetCurCharacEffectItemListR((CUserCharacInfo *)param_1);
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                      ::operator*(local_14);
      if (*piVar3 == param_2) {
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar2 = __gnu_cxx::
                __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                ::operator*(local_14);
        if (uVar4 < *(uint *)(iVar2 + 4)) {
          return 1;
        }
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
      ::operator++(local_14);
    }
  }
  return 0;
}

```

---

## OnTeleportCharacter

```asm
// === 085d1424 expert_job::CAlchemist::OnTeleportCharacter  [0x085d1424-0x85d1693] ===
 85d1424:	55                   	push   %ebp
 85d1425:	89 e5                	mov    %esp,%ebp
 85d1427:	56                   	push   %esi
 85d1428:	53                   	push   %ebx
 85d1429:	83 ec 60             	sub    $0x60,%esp
 85d142c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d142f:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85d1432:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 85d1436:	0f 84 9b 00 00 00    	je     85d14d7 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0xb3>
 85d143c:	e8 66 8f b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d1441:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1444:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1448:	89 04 24             	mov    %eax,(%esp)
 85d144b:	e8 2c 35 0f 00       	call   86c497c <_ZNK9GameWorld13get_gate_areaEi>
 85d1450:	89 45 10             	mov    %eax,0x10(%ebp)
 85d1453:	8b 45 10             	mov    0x10(%ebp),%eax
 85d1456:	c1 e8 1f             	shr    $0x1f,%eax
 85d1459:	84 c0                	test   %al,%al
 85d145b:	74 0a                	je     85d1467 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x43>
 85d145d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d1462:	e9 23 02 00 00       	jmp    85d168a <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x266>
 85d1467:	e8 3b 8f b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d146c:	8d 55 18             	lea    0x18(%ebp),%edx
 85d146f:	89 54 24 10          	mov    %edx,0x10(%esp)
 85d1473:	8d 55 14             	lea    0x14(%ebp),%edx
 85d1476:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d147a:	8b 55 10             	mov    0x10(%ebp),%edx
 85d147d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d1481:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1484:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1488:	89 04 24             	mov    %eax,(%esp)
 85d148b:	e8 8e 32 0f 00       	call   86c471e <_ZNK9GameWorld21get_area_center_pointEiiRiS0_>
 85d1490:	83 f0 01             	xor    $0x1,%eax
 85d1493:	84 c0                	test   %al,%al
 85d1495:	74 40                	je     85d14d7 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0xb3>
 85d1497:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85d149e:	00 
 85d149f:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 85d14a6:	00 
 85d14a7:	c7 44 24 04 e0 f9 cb 	movl   $0x8cbf9e0,0x4(%esp)
 85d14ae:	08 
 85d14af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d14b2:	89 04 24             	mov    %eax,(%esp)
 85d14b5:	e8 5e e2 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d14ba:	c7 44 24 04 a0 ed cb 	movl   $0x8cbeda0,0x4(%esp)
 85d14c1:	08 
 85d14c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d14c5:	89 04 24             	mov    %eax,(%esp)
 85d14c8:	e8 bb e2 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d14cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d14d2:	e9 b3 01 00 00       	jmp    85d168a <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x266>
 85d14d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d14da:	89 04 24             	mov    %eax,(%esp)
 85d14dd:	e8 82 40 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d14e2:	0f be c0             	movsbl %al,%eax
 85d14e5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d14e8:	75 18                	jne    85d1502 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0xde>
 85d14ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d14f1:	00 
 85d14f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d14f5:	89 04 24             	mov    %eax,(%esp)
 85d14f8:	e8 c1 fe 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d14fd:	3b 45 10             	cmp    0x10(%ebp),%eax
 85d1500:	74 07                	je     85d1509 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0xe5>
 85d1502:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1507:	eb 05                	jmp    85d150e <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0xea>
 85d1509:	b8 00 00 00 00       	mov    $0x0,%eax
 85d150e:	84 c0                	test   %al,%al
 85d1510:	74 69                	je     85d157b <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x157>
 85d1512:	8b 75 18             	mov    0x18(%ebp),%esi
 85d1515:	8b 5d 14             	mov    0x14(%ebp),%ebx
 85d1518:	e8 8a 8e b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d151d:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 85d1524:	00 
 85d1525:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 85d152c:	00 
 85d152d:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 85d1534:	00 
 85d1535:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85d153c:	00 
 85d153d:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85d1544:	00 
 85d1545:	89 74 24 14          	mov    %esi,0x14(%esp)
 85d1549:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85d154d:	8b 55 10             	mov    0x10(%ebp),%edx
 85d1550:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d1554:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1557:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d155b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d155e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1562:	89 04 24             	mov    %eax,(%esp)
 85d1565:	e8 1a 45 0f 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 85d156a:	83 f0 01             	xor    $0x1,%eax
 85d156d:	84 c0                	test   %al,%al
 85d156f:	74 31                	je     85d15a2 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x17e>
 85d1571:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d1576:	e9 0f 01 00 00       	jmp    85d168a <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x266>
 85d157b:	8b 45 18             	mov    0x18(%ebp),%eax
 85d157e:	0f b7 d0             	movzwl %ax,%edx
 85d1581:	8b 45 14             	mov    0x14(%ebp),%eax
 85d1584:	0f b7 c0             	movzwl %ax,%eax
 85d1587:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d158e:	00 
 85d158f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d1593:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1597:	8b 45 08             	mov    0x8(%ebp),%eax
 85d159a:	89 04 24             	mov    %eax,(%esp)
 85d159d:	e8 88 f8 d1 ff       	call   82f0e2a <_ZN5CUser12set_positionEttc>
 85d15a2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d15a5:	89 04 24             	mov    %eax,(%esp)
 85d15a8:	e8 9f c7 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d15ad:	c7 44 24 08 8a 00 00 	movl   $0x8a,0x8(%esp)
 85d15b4:	00 
 85d15b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d15bc:	00 
 85d15bd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d15c0:	89 04 24             	mov    %eax,(%esp)
 85d15c3:	e8 34 a3 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d15c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d15cb:	89 04 24             	mov    %eax,(%esp)
 85d15ce:	e8 a9 8d b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85d15d3:	0f b7 c0             	movzwl %ax,%eax
 85d15d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d15da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d15dd:	89 04 24             	mov    %eax,(%esp)
 85d15e0:	e8 bf 88 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d15e5:	8b 45 14             	mov    0x14(%ebp),%eax
 85d15e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d15ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d15ef:	89 04 24             	mov    %eax,(%esp)
 85d15f2:	e8 ad 88 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d15f7:	8b 45 18             	mov    0x18(%ebp),%eax
 85d15fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d15fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d1601:	89 04 24             	mov    %eax,(%esp)
 85d1604:	e8 9b 88 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d1609:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1610:	00 
 85d1611:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d1614:	89 04 24             	mov    %eax,(%esp)
 85d1617:	e8 04 a3 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d161c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d1623:	00 
 85d1624:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d1627:	89 04 24             	mov    %eax,(%esp)
 85d162a:	e8 29 a3 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d162f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d1633:	75 06                	jne    85d163b <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x217>
 85d1635:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d1639:	74 22                	je     85d165d <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x239>
 85d163b:	e8 67 8d b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d1640:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85d1643:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d1647:	8b 55 10             	mov    0x10(%ebp),%edx
 85d164a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d164e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1651:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1655:	89 04 24             	mov    %eax,(%esp)
 85d1658:	e8 0b 6b 0f 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 85d165d:	bb 01 00 00 00       	mov    $0x1,%ebx
 85d1662:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d1665:	89 04 24             	mov    %eax,(%esp)
 85d1668:	e8 13 c8 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d166d:	eb 1b                	jmp    85d168a <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib+0x266>
 85d166f:	89 d3                	mov    %edx,%ebx
 85d1671:	89 c6                	mov    %eax,%esi
 85d1673:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d1676:	89 04 24             	mov    %eax,(%esp)
 85d1679:	e8 02 c8 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d167e:	89 f0                	mov    %esi,%eax
 85d1680:	89 da                	mov    %ebx,%edx
 85d1682:	89 04 24             	mov    %eax,(%esp)
 85d1685:	e8 c6 20 51 00       	call   8ae3750 <_Unwind_Resume>
 85d168a:	89 d8                	mov    %ebx,%eax
 85d168c:	83 c4 60             	add    $0x60,%esp
 85d168f:	5b                   	pop    %ebx
 85d1690:	5e                   	pop    %esi
 85d1691:	5d                   	pop    %ebp
 85d1692:	c3                   	ret
 85d1693:	90                   	nop

```

```c
// expert_job::CAlchemist::OnTeleportCharacter @ 0x85d1424

/* expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool) */

undefined4
expert_job::CAlchemist::OnTeleportCharacter
          (CUser *param_1,int param_2,int param_3,int param_4,int param_5,bool param_6)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  uint uVar6;
  undefined3 in_stack_00000019;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  if (param_6) {
    pGVar4 = (GameWorld *)G_GameWorld();
    param_3 = GameWorld::get_gate_area(pGVar4,param_2);
    if (param_3 < 0) {
      return 0;
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::get_area_center_point(pGVar4,param_2,param_3,&param_4,&param_5);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_1c,
                         "static bool expert_job::CAlchemist::OnTeleportCharacter(CUser*, int, int, int, int, bool)"
                         ,0x8b,5);
      cMyTrace::operator()(local_1c,"get_area_center_point() call failed");
      return 0;
    }
  }
  cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if ((cVar3 == param_2) && (iVar5 = CUser::get_area(param_1,false), iVar5 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar2 = param_5;
  iVar5 = param_4;
  if (bVar1) {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::move_area(pGVar4,param_1,param_2,param_3,iVar5,iVar2,0,false,0,0,0);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  else {
    CUser::set_position(param_1,(ushort)param_4,(ushort)param_5,'\0');
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085d15c3 to 085d165c has its CatchHandler @ 085d166f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x8a);
  uVar6 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar6 & 0xffff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,param_4);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,param_5);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  if ((param_2 != 0) || (param_3 != 0)) {
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(pGVar4,param_2,param_3,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return 1;
}

```

---

## OnUseStackableItem

```asm
// === 085d1712 expert_job::CAlchemist::OnUseStackableItem  [0x085d1712-0x85d18ad] ===
 85d1712:	55                   	push   %ebp
 85d1713:	89 e5                	mov    %esp,%ebp
 85d1715:	53                   	push   %ebx
 85d1716:	83 ec 24             	sub    $0x24,%esp
 85d1719:	8b 45 10             	mov    0x10(%ebp),%eax
 85d171c:	89 04 24             	mov    %eax,(%esp)
 85d171f:	e8 d6 fb b1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85d1724:	84 c0                	test   %al,%al
 85d1726:	0f 84 30 01 00 00    	je     85d185c <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x14a>
 85d172c:	8b 45 10             	mov    0x10(%ebp),%eax
 85d172f:	8b 00                	mov    (%eax),%eax
 85d1731:	83 c0 0c             	add    $0xc,%eax
 85d1734:	8b 10                	mov    (%eax),%edx
 85d1736:	8b 45 10             	mov    0x10(%ebp),%eax
 85d1739:	89 04 24             	mov    %eax,(%esp)
 85d173c:	ff d2                	call   *%edx
 85d173e:	83 f8 03             	cmp    $0x3,%eax
 85d1741:	75 15                	jne    85d1758 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x46>
 85d1743:	8b 45 10             	mov    0x10(%ebp),%eax
 85d1746:	0f b6 80 99 01 00 00 	movzbl 0x199(%eax),%eax
 85d174d:	84 c0                	test   %al,%al
 85d174f:	74 07                	je     85d1758 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x46>
 85d1751:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1756:	eb 05                	jmp    85d175d <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x4b>
 85d1758:	b8 00 00 00 00       	mov    $0x0,%eax
 85d175d:	84 c0                	test   %al,%al
 85d175f:	0f 84 a2 00 00 00    	je     85d1807 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0xf5>
 85d1765:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1768:	89 04 24             	mov    %eax,(%esp)
 85d176b:	e8 24 e1 c5 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 85d1770:	89 c3                	mov    %eax,%ebx
 85d1772:	e8 24 aa af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d1777:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d177b:	89 04 24             	mov    %eax,(%esp)
 85d177e:	e8 6f 9e c5 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 85d1783:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d1786:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d178a:	74 7b                	je     85d1807 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0xf5>
 85d178c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d178f:	89 04 24             	mov    %eax,(%esp)
 85d1792:	e8 8f 38 da ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 85d1797:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d179b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d179e:	89 04 24             	mov    %eax,(%esp)
 85d17a1:	e8 d6 a4 0b 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 85d17a6:	89 c3                	mov    %eax,%ebx
 85d17a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d17af:	00 
 85d17b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d17b3:	89 04 24             	mov    %eax,(%esp)
 85d17b6:	e8 c9 bd b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d17bb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d17bf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d17c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d17c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d17c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d17cd:	89 04 24             	mov    %eax,(%esp)
 85d17d0:	e8 eb 9b d5 ff       	call   832b3c0 <_ZN10expert_job16CCharacExpertJob11learnRecipeEmP17STExpertJobScripti>
 85d17d5:	84 c0                	test   %al,%al
 85d17d7:	74 24                	je     85d17fd <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0xeb>
 85d17d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d17e0:	00 
 85d17e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d17e4:	89 04 24             	mov    %eax,(%esp)
 85d17e7:	e8 98 bd b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d17ec:	8b 55 08             	mov    0x8(%ebp),%edx
 85d17ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d17f3:	89 04 24             	mov    %eax,(%esp)
 85d17f6:	e8 59 9c d5 ff       	call   832b454 <_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser>
 85d17fb:	eb 0a                	jmp    85d1807 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0xf5>
 85d17fd:	b8 0d 00 00 00       	mov    $0xd,%eax
 85d1802:	e9 a1 00 00 00       	jmp    85d18a8 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x196>
 85d1807:	8b 45 10             	mov    0x10(%ebp),%eax
 85d180a:	89 04 24             	mov    %eax,(%esp)
 85d180d:	e8 c0 b1 c5 ff       	call   822c9d2 <_ZNK14CStackableItem12get_sub_typeEv>
 85d1812:	83 f8 02             	cmp    $0x2,%eax
 85d1815:	0f 94 c0             	sete   %al
 85d1818:	84 c0                	test   %al,%al
 85d181a:	74 40                	je     85d185c <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x14a>
 85d181c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d1823:	e8 76 a4 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d1828:	89 c3                	mov    %eax,%ebx
 85d182a:	8b 45 10             	mov    0x10(%ebp),%eax
 85d182d:	8b 88 d0 02 00 00    	mov    0x2d0(%eax),%ecx
 85d1833:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 85d1838:	89 c8                	mov    %ecx,%eax
 85d183a:	f7 ea                	imul   %edx
 85d183c:	c1 fa 06             	sar    $0x6,%edx
 85d183f:	89 c8                	mov    %ecx,%eax
 85d1841:	c1 f8 1f             	sar    $0x1f,%eax
 85d1844:	89 d1                	mov    %edx,%ecx
 85d1846:	29 c1                	sub    %eax,%ecx
 85d1848:	89 c8                	mov    %ecx,%eax
 85d184a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85d184d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1851:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1854:	89 04 24             	mov    %eax,(%esp)
 85d1857:	e8 3e 92 b7 ff       	call   814aa9a <_ZN5CUser19SetUseAPCPotionTimeEl>
 85d185c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d185f:	3d cf e7 28 00       	cmp    $0x28e7cf,%eax
 85d1864:	74 25                	je     85d188b <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x179>
 85d1866:	3d cf e7 28 00       	cmp    $0x28e7cf,%eax
 85d186b:	77 10                	ja     85d187d <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x16b>
 85d186d:	3d 54 ac 27 00       	cmp    $0x27ac54,%eax
 85d1872:	74 17                	je     85d188b <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x179>
 85d1874:	3d da ac 27 00       	cmp    $0x27acda,%eax
 85d1879:	74 1d                	je     85d1898 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x186>
 85d187b:	eb 26                	jmp    85d18a3 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x191>
 85d187d:	3d 87 f2 29 00       	cmp    $0x29f287,%eax
 85d1882:	74 07                	je     85d188b <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x179>
 85d1884:	3d ed f2 29 00       	cmp    $0x29f2ed,%eax
 85d1889:	75 18                	jne    85d18a3 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x191>
 85d188b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d188e:	89 04 24             	mov    %eax,(%esp)
 85d1891:	e8 fe fd ff ff       	call   85d1694 <_ZN10expert_job10CAlchemist14UseRevivalItemEP5CUser>
 85d1896:	eb 0b                	jmp    85d18a3 <_ZN10expert_job10CAlchemist18OnUseStackableItemEP5CUsermPK5CItem+0x191>
 85d1898:	8b 45 08             	mov    0x8(%ebp),%eax
 85d189b:	89 04 24             	mov    %eax,(%esp)
 85d189e:	e8 0b 00 00 00       	call   85d18ae <_ZN10expert_job10CAlchemist10UseDelilahEP5CUser>
 85d18a3:	b8 00 00 00 00       	mov    $0x0,%eax
 85d18a8:	83 c4 24             	add    $0x24,%esp
 85d18ab:	5b                   	pop    %ebx
 85d18ac:	5d                   	pop    %ebp
 85d18ad:	c3                   	ret

```

```c
// expert_job::CAlchemist::OnUseStackableItem @ 0x85d1712

/* expert_job::CAlchemist::OnUseStackableItem(CUser*, unsigned long, CItem const*) */

undefined4 expert_job::CAlchemist::OnUseStackableItem(CUser *param_1,ulong param_2,CItem *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  STExpertJobScript *pSVar4;
  CCharacExpertJob *pCVar5;
  
  cVar2 = CItem::is_stackable(param_3);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    if ((iVar3 == 3) && (param_3[0x199] != (CItem)0x0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      iVar3 = G_CDataManager();
      pSVar4 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
      if (pSVar4 != (STExpertJobScript *)0x0) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        iVar3 = CUser::GetCurExpertJobLevel(param_1,iVar3);
        pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
        cVar2 = CCharacExpertJob::learnRecipe(pCVar5,param_2,pSVar4,iVar3);
        if (cVar2 == '\0') {
          return 0xd;
        }
        pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
        CCharacExpertJob::SendExpertJobInfo(pCVar5,param_1);
      }
    }
    iVar3 = CStackableItem::get_sub_type((CStackableItem *)param_3);
    if (iVar3 == 2) {
      iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::SetUseAPCPotionTime(param_1,iVar3 + *(int *)(param_3 + 0x2d0) / 1000);
    }
  }
  if (param_2 != 0x28e7cf) {
    if (param_2 < 0x28e7d0) {
      if (param_2 != 0x27ac54) {
        if (param_2 != 0x27acda) {
          return 0;
        }
        UseDelilah(param_1);
        return 0;
      }
    }
    else if ((param_2 != 0x29f287) && (param_2 != 0x29f2ed)) {
      return 0;
    }
  }
  UseRevivalItem(param_1);
  return 0;
}

```

---

## UseDelilah

```asm
// === 085d18ae expert_job::CAlchemist::UseDelilah  [0x085d18ae-0x85d18e1] ===
 85d18ae:	55                   	push   %ebp
 85d18af:	89 e5                	mov    %esp,%ebp
 85d18b1:	83 ec 28             	sub    $0x28,%esp
 85d18b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d18b7:	89 04 24             	mov    %eax,(%esp)
 85d18ba:	e8 8d 38 08 00       	call   865514c <_ZN5CUser8GetPartyEv>
 85d18bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d18c2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85d18c6:	74 18                	je     85d18e0 <_ZN10expert_job10CAlchemist10UseDelilahEP5CUser+0x32>
 85d18c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d18cb:	05 24 0b 00 00       	add    $0xb24,%eax
 85d18d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d18d7:	00 
 85d18d8:	89 04 24             	mov    %eax,(%esp)
 85d18db:	e8 f6 00 00 00       	call   85d19d6 <_ZN13CBattle_Field20SetAssignNPCByPotionEb>
 85d18e0:	c9                   	leave
 85d18e1:	c3                   	ret

```

```c
// expert_job::CAlchemist::UseDelilah @ 0x85d18ae

/* expert_job::CAlchemist::UseDelilah(CUser*) */

void expert_job::CAlchemist::UseDelilah(CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUser::GetParty(param_1);
  if (iVar1 != 0) {
    CBattle_Field::SetAssignNPCByPotion((CBattle_Field *)(iVar1 + 0xb24),true);
  }
  return;
}

```

---

## UseRevivalItem

```asm
// === 085d1694 expert_job::CAlchemist::UseRevivalItem  [0x085d1694-0x85d1711] ===
 85d1694:	55                   	push   %ebp
 85d1695:	89 e5                	mov    %esp,%ebp
 85d1697:	56                   	push   %esi
 85d1698:	53                   	push   %ebx
 85d1699:	83 ec 20             	sub    $0x20,%esp
 85d169c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d16a3:	e8 f6 a5 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d16a8:	05 b0 04 00 00       	add    $0x4b0,%eax
 85d16ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d16b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d16b4:	89 04 24             	mov    %eax,(%esp)
 85d16b7:	e8 be 93 b7 ff       	call   814aa7a <_ZN5CUser14SetRevivalTimeEl>
 85d16bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d16bf:	89 04 24             	mov    %eax,(%esp)
 85d16c2:	e8 c5 93 b7 ff       	call   814aa8c <_ZN5CUser14GetRevivalTimeEv>
 85d16c7:	89 c6                	mov    %eax,%esi
 85d16c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d16cc:	89 04 24             	mov    %eax,(%esp)
 85d16cf:	e8 c2 75 af ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85d16d4:	89 c3                	mov    %eax,%ebx
 85d16d6:	e8 a1 4d b2 ff       	call   80f647c <_Z12G_TimerQueuev>
 85d16db:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85d16e2:	00 
 85d16e3:	89 74 24 14          	mov    %esi,0x14(%esp)
 85d16e7:	c7 44 24 10 b0 04 00 	movl   $0x4b0,0x10(%esp)
 85d16ee:	00 
 85d16ef:	c7 44 24 0c 82 00 00 	movl   $0x82,0xc(%esp)
 85d16f6:	00 
 85d16f7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d16fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1702:	00 
 85d1703:	89 04 24             	mov    %eax,(%esp)
 85d1706:	e8 0b f7 05 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 85d170b:	83 c4 20             	add    $0x20,%esp
 85d170e:	5b                   	pop    %ebx
 85d170f:	5e                   	pop    %esi
 85d1710:	5d                   	pop    %ebp
 85d1711:	c3                   	ret

```

```c
// expert_job::CAlchemist::UseRevivalItem @ 0x85d1694

/* expert_job::CAlchemist::UseRevivalItem(CUser*) */

void expert_job::CAlchemist::UseRevivalItem(CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TimerQueue *pTVar4;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUser::SetRevivalTime(param_1,iVar1 + 0x4b0);
  uVar2 = CUser::GetRevivalTime(param_1);
  uVar3 = CUser::GetUID(param_1);
  pTVar4 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar4,0,uVar3,0x82,0x4b0,uVar2,0);
  return;
}

```

---

## ~CAlchemist

```asm
// === 085d11d0 expert_job::CAlchemist::~CAlchemist  [0x085d11d0-0x85d11ff] ===
 85d11d0:	55                   	push   %ebp
 85d11d1:	89 e5                	mov    %esp,%ebp
 85d11d3:	83 ec 18             	sub    $0x18,%esp
 85d11d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d11d9:	c7 00 48 fa cb 08    	movl   $0x8cbfa48,(%eax)
 85d11df:	8b 45 08             	mov    0x8(%ebp),%eax
 85d11e2:	89 04 24             	mov    %eax,(%esp)
 85d11e5:	e8 10 e0 ec ff       	call   849f1fa <_ZN10expert_job10CExpertJobD1Ev>
 85d11ea:	b8 00 00 00 00       	mov    $0x0,%eax
 85d11ef:	84 c0                	test   %al,%al
 85d11f1:	74 0b                	je     85d11fe <_ZN10expert_job10CAlchemistD1Ev+0x2e>
 85d11f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d11f6:	89 04 24             	mov    %eax,(%esp)
 85d11f9:	e8 f2 32 15 00       	call   87244f0 <_ZdlPv>
 85d11fe:	c9                   	leave
 85d11ff:	c3                   	ret

```

```c
// expert_job::CAlchemist::~CAlchemist @ 0x85d11d0

/* WARNING: Removing unreachable block (ram,0x085d11f3) */
/* expert_job::CAlchemist::~CAlchemist() */

void __thiscall expert_job::CAlchemist::~CAlchemist(CAlchemist *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cbfa48;
  CExpertJob::~CExpertJob((CExpertJob *)this);
  return;
}

```

---

## ~CAlchemist_085d1200

```asm
// === 085d1200 expert_job::CAlchemist::~CAlchemist  [0x085d1200-0x85d121d] ===
 85d1200:	55                   	push   %ebp
 85d1201:	89 e5                	mov    %esp,%ebp
 85d1203:	83 ec 18             	sub    $0x18,%esp
 85d1206:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1209:	89 04 24             	mov    %eax,(%esp)
 85d120c:	e8 bf ff ff ff       	call   85d11d0 <_ZN10expert_job10CAlchemistD1Ev>
 85d1211:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1214:	89 04 24             	mov    %eax,(%esp)
 85d1217:	e8 d4 32 15 00       	call   87244f0 <_ZdlPv>
 85d121c:	c9                   	leave
 85d121d:	c3                   	ret

```

```c
// expert_job::CAlchemist::~CAlchemist @ 0x85d1200

/* expert_job::CAlchemist::~CAlchemist() */

void __thiscall expert_job::CAlchemist::~CAlchemist(CAlchemist *this)

{
  ~CAlchemist(this);
  operator_delete(this);
  return;
}

```

