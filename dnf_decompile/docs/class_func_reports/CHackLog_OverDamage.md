# CHackLog_OverDamage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetBossTowerLimitDamage

```asm
// === 082869ac CHackLog_OverDamage::GetBossTowerLimitDamage  [0x082869ac-0x82869b5] ===
 82869ac:	55                   	push   %ebp
 82869ad:	89 e5                	mov    %esp,%ebp
 82869af:	a1 7c 0c c1 08       	mov    0x8c10c7c,%eax
 82869b4:	5d                   	pop    %ebp
 82869b5:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetBossTowerLimitDamage @ 0x82869ac

/* CHackLog_OverDamage::GetBossTowerLimitDamage() */

undefined4 CHackLog_OverDamage::GetBossTowerLimitDamage(void)

{
  return _S_KILL_MONSTER_OVER_DAMAGE_CONST._20_4_;
}

```

---

## GetBossTowerOverDamageHackType

```asm
// === 082869b6 CHackLog_OverDamage::GetBossTowerOverDamageHackType  [0x082869b6-0x82869bf] ===
 82869b6:	55                   	push   %ebp
 82869b7:	89 e5                	mov    %esp,%ebp
 82869b9:	b8 85 00 00 00       	mov    $0x85,%eax
 82869be:	5d                   	pop    %ebp
 82869bf:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetBossTowerOverDamageHackType @ 0x82869b6

/* CHackLog_OverDamage::GetBossTowerOverDamageHackType() */

undefined4 CHackLog_OverDamage::GetBossTowerOverDamageHackType(void)

{
  return 0x85;
}

```

---

## GetDeathTowerLimitDamage

```asm
// === 08286984 CHackLog_OverDamage::GetDeathTowerLimitDamage  [0x08286984-0x828698d] ===
 8286984:	55                   	push   %ebp
 8286985:	89 e5                	mov    %esp,%ebp
 8286987:	a1 80 0c c1 08       	mov    0x8c10c80,%eax
 828698c:	5d                   	pop    %ebp
 828698d:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetDeathTowerLimitDamage @ 0x8286984

/* CHackLog_OverDamage::GetDeathTowerLimitDamage() */

undefined4 CHackLog_OverDamage::GetDeathTowerLimitDamage(void)

{
  return _S_KILL_MONSTER_OVER_DAMAGE_CONST._24_4_;
}

```

---

## GetDeathTowerOverDamageHackType

```asm
// === 0828698e CHackLog_OverDamage::GetDeathTowerOverDamageHackType  [0x0828698e-0x8286997] ===
 828698e:	55                   	push   %ebp
 828698f:	89 e5                	mov    %esp,%ebp
 8286991:	b8 6b 00 00 00       	mov    $0x6b,%eax
 8286996:	5d                   	pop    %ebp
 8286997:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetDeathTowerOverDamageHackType @ 0x828698e

/* CHackLog_OverDamage::GetDeathTowerOverDamageHackType() */

undefined4 CHackLog_OverDamage::GetDeathTowerOverDamageHackType(void)

{
  return 0x6b;
}

```

---

## GetDungeonLimitDamageAndHackType

```asm
// === 08286790 CHackLog_OverDamage::GetDungeonLimitDamageAndHackType  [0x08286790-0x8286983] ===
 8286790:	55                   	push   %ebp
 8286791:	89 e5                	mov    %esp,%ebp
 8286793:	53                   	push   %ebx
 8286794:	83 ec 54             	sub    $0x54,%esp
 8286797:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 828679b:	74 3a                	je     82867d7 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x47>
 828679d:	8b 45 08             	mov    0x8(%ebp),%eax
 82867a0:	89 04 24             	mov    %eax,(%esp)
 82867a3:	e8 a4 e9 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82867a8:	85 c0                	test   %eax,%eax
 82867aa:	74 2b                	je     82867d7 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x47>
 82867ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82867af:	89 04 24             	mov    %eax,(%esp)
 82867b2:	e8 95 e9 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82867b7:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 82867bd:	85 c0                	test   %eax,%eax
 82867bf:	74 16                	je     82867d7 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x47>
 82867c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82867c4:	89 04 24             	mov    %eax,(%esp)
 82867c7:	e8 ec 3a e5 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82867cc:	85 c0                	test   %eax,%eax
 82867ce:	7e 07                	jle    82867d7 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x47>
 82867d0:	b8 01 00 00 00       	mov    $0x1,%eax
 82867d5:	eb 05                	jmp    82867dc <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x4c>
 82867d7:	b8 00 00 00 00       	mov    $0x0,%eax
 82867dc:	84 c0                	test   %al,%al
 82867de:	0f 84 9a 01 00 00    	je     828697e <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x1ee>
 82867e4:	c7 45 d4 06 00 00 00 	movl   $0x6,-0x2c(%ebp)
 82867eb:	d9 e8                	fld1
 82867ed:	dd 5d d8             	fstpl  -0x28(%ebp)
 82867f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82867f3:	89 04 24             	mov    %eax,(%esp)
 82867f6:	e8 bd 3a e5 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82867fb:	89 c3                	mov    %eax,%ebx
 82867fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8286800:	89 04 24             	mov    %eax,(%esp)
 8286803:	e8 44 e9 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8286808:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 828680e:	89 04 24             	mov    %eax,(%esp)
 8286811:	e8 84 ed eb ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 8286816:	89 da                	mov    %ebx,%edx
 8286818:	29 c2                	sub    %eax,%edx
 828681a:	89 d0                	mov    %edx,%eax
 828681c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828681f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8286823:	79 07                	jns    828682c <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x9c>
 8286825:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 828682c:	d9 e8                	fld1
 828682e:	dd 5d e8             	fstpl  -0x18(%ebp)
 8286831:	8b 45 08             	mov    0x8(%ebp),%eax
 8286834:	89 04 24             	mov    %eax,(%esp)
 8286837:	e8 10 e9 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 828683c:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8286842:	89 04 24             	mov    %eax,(%esp)
 8286845:	e8 a6 74 e7 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 828684a:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 828684f:	0f 84 d2 00 00 00    	je     8286927 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x197>
 8286855:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 828685a:	7f 07                	jg     8286863 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0xd3>
 828685c:	83 f8 64             	cmp    $0x64,%eax
 828685f:	74 1a                	je     828687b <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0xeb>
 8286861:	eb 3f                	jmp    82868a2 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x112>
 8286863:	3d f9 2a 00 00       	cmp    $0x2af9,%eax
 8286868:	0f 84 bc 00 00 00    	je     828692a <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19a>
 828686e:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 8286873:	0f 84 b4 00 00 00    	je     828692d <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19d>
 8286879:	eb 27                	jmp    82868a2 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x112>
 828687b:	8b 45 08             	mov    0x8(%ebp),%eax
 828687e:	89 04 24             	mov    %eax,(%esp)
 8286881:	e8 c6 e8 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8286886:	05 24 0b 00 00       	add    $0xb24,%eax
 828688b:	89 04 24             	mov    %eax,(%esp)
 828688e:	e8 89 2f e7 ff       	call   80f981c <_ZN13CBattle_Field16get_dungeon_diffEv>
 8286893:	dd 04 c5 a0 0c c1 08 	fldl   0x8c10ca0(,%eax,8)
 828689a:	dd 5d d8             	fstpl  -0x28(%ebp)
 828689d:	e9 8c 00 00 00       	jmp    828692e <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19e>
 82868a2:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 82868a5:	ba 67 66 66 66       	mov    $0x66666667,%edx
 82868aa:	89 c8                	mov    %ecx,%eax
 82868ac:	f7 ea                	imul   %edx
 82868ae:	c1 fa 03             	sar    $0x3,%edx
 82868b1:	89 c8                	mov    %ecx,%eax
 82868b3:	c1 f8 1f             	sar    $0x1f,%eax
 82868b6:	89 d1                	mov    %edx,%ecx
 82868b8:	29 c1                	sub    %eax,%ecx
 82868ba:	89 c8                	mov    %ecx,%eax
 82868bc:	89 45 b8             	mov    %eax,-0x48(%ebp)
 82868bf:	db 45 b8             	fildl  -0x48(%ebp)
 82868c2:	dd 5d e8             	fstpl  -0x18(%ebp)
 82868c5:	dd 45 e8             	fldl   -0x18(%ebp)
 82868c8:	d9 e8                	fld1
 82868ca:	da e9                	fucompp
 82868cc:	df e0                	fnstsw %ax
 82868ce:	f6 c4 45             	test   $0x45,%ah
 82868d1:	0f 94 c0             	sete   %al
 82868d4:	84 c0                	test   %al,%al
 82868d6:	74 05                	je     82868dd <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x14d>
 82868d8:	d9 e8                	fld1
 82868da:	dd 5d e8             	fstpl  -0x18(%ebp)
 82868dd:	8b 45 08             	mov    0x8(%ebp),%eax
 82868e0:	89 04 24             	mov    %eax,(%esp)
 82868e3:	e8 d0 39 e5 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82868e8:	83 e8 01             	sub    $0x1,%eax
 82868eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82868ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82868f1:	c1 f8 1f             	sar    $0x1f,%eax
 82868f4:	f7 d0                	not    %eax
 82868f6:	23 45 f4             	and    -0xc(%ebp),%eax
 82868f9:	8b 04 85 00 0d c1 08 	mov    0x8c10d00(,%eax,4),%eax
 8286900:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8286903:	8b 45 08             	mov    0x8(%ebp),%eax
 8286906:	89 04 24             	mov    %eax,(%esp)
 8286909:	e8 3e e8 3c 00       	call   865514c <_ZN5CUser8GetPartyEv>
 828690e:	05 24 0b 00 00       	add    $0xb24,%eax
 8286913:	89 04 24             	mov    %eax,(%esp)
 8286916:	e8 01 2f e7 ff       	call   80f981c <_ZN13CBattle_Field16get_dungeon_diffEv>
 828691b:	dd 04 c5 a0 0c c1 08 	fldl   0x8c10ca0(,%eax,8)
 8286922:	dd 5d d8             	fstpl  -0x28(%ebp)
 8286925:	eb 07                	jmp    828692e <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19e>
 8286927:	90                   	nop
 8286928:	eb 04                	jmp    828692e <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19e>
 828692a:	90                   	nop
 828692b:	eb 01                	jmp    828692e <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE+0x19e>
 828692d:	90                   	nop
 828692e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8286931:	8b 04 85 68 0c c1 08 	mov    0x8c10c68(,%eax,4),%eax
 8286938:	ba 00 00 00 00       	mov    $0x0,%edx
 828693d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8286940:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8286943:	df 6d c0             	fildll -0x40(%ebp)
 8286946:	dc 4d d8             	fmull  -0x28(%ebp)
 8286949:	dc 4d e8             	fmull  -0x18(%ebp)
 828694c:	d9 7d be             	fnstcw -0x42(%ebp)
 828694f:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8286953:	b4 0c                	mov    $0xc,%ah
 8286955:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8286959:	d9 6d bc             	fldcw  -0x44(%ebp)
 828695c:	df 7d c0             	fistpll -0x40(%ebp)
 828695f:	d9 6d be             	fldcw  -0x42(%ebp)
 8286962:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8286965:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8286968:	89 c2                	mov    %eax,%edx
 828696a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828696d:	89 10                	mov    %edx,(%eax)
 828696f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8286972:	8b 14 85 c8 0c c1 08 	mov    0x8c10cc8(,%eax,4),%edx
 8286979:	8b 45 10             	mov    0x10(%ebp),%eax
 828697c:	89 10                	mov    %edx,(%eax)
 828697e:	83 c4 54             	add    $0x54,%esp
 8286981:	5b                   	pop    %ebx
 8286982:	5d                   	pop    %ebp
 8286983:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetDungeonLimitDamageAndHackType @ 0x8286790

/* CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&,
   WongWork::ENUM_HACKTYPE&) */

void CHackLog_OverDamage::GetDungeonLimitDamageAndHackType
               (CUser *param_1,uint *param_2,ENUM_HACKTYPE *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong local_44;
  int local_30;
  double local_2c;
  int local_20;
  double local_1c;
  
  if ((((param_1 == (CUser *)0x0) || (iVar2 = CUser::GetParty(param_1), iVar2 == 0)) ||
      (iVar2 = CUser::GetParty(param_1), *(int *)(iVar2 + 0xcac) == 0)) ||
     (iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar2 < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_30 = 6;
  local_2c = 1.0;
  local_20 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  iVar2 = CUser::GetParty(param_1);
  iVar2 = CDungeon::get_min_level(*(CDungeon **)(iVar2 + 0xcac));
  local_20 = local_20 - iVar2;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_1c = 1.0;
  iVar2 = CUser::GetParty(param_1);
  iVar2 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
  if (iVar2 != 11000) {
    if (iVar2 < 0x2af9) {
      if (iVar2 == 100) {
        iVar2 = CUser::GetParty(param_1);
        iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(iVar2 + 0xb24));
        local_2c = *(double *)(_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO + iVar2 * 8);
        goto LAB_0828692e;
      }
    }
    else if ((iVar2 == 0x2af9) || (iVar2 == 0x2afe)) goto LAB_0828692e;
    local_1c = (double)(local_20 / 0x14);
    if (local_1c < 1.0) {
      local_1c = 1.0;
    }
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_30 = *(int *)(LEVEL_SECTION_TABLE + (~((int)(iVar2 - 1U) >> 0x1f) & iVar2 - 1U) * 4);
    iVar2 = CUser::GetParty(param_1);
    iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(iVar2 + 0xb24));
    local_2c = *(double *)(_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO + iVar2 * 8);
  }
LAB_0828692e:
  local_44 = (ulonglong)*(uint *)(_S_KILL_MONSTER_OVER_DAMAGE_CONST + local_30 * 4);
  local_44._0_4_ = (uint)(longlong)ROUND((double)local_44 * local_2c * local_1c);
  *param_2 = (uint)local_44;
  *(undefined4 *)param_3 = *(undefined4 *)(_S_KILL_MONSTER_OVER_DAMAGE_HACK_TYPE + local_30 * 4);
  return;
}

```

---

## GetDungeonLimitMaxDamage

```asm
// === 08286998 CHackLog_OverDamage::GetDungeonLimitMaxDamage  [0x08286998-0x82869a1] ===
 8286998:	55                   	push   %ebp
 8286999:	89 e5                	mov    %esp,%ebp
 828699b:	a1 80 0c c1 08       	mov    0x8c10c80,%eax
 82869a0:	5d                   	pop    %ebp
 82869a1:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetDungeonLimitMaxDamage @ 0x8286998

/* CHackLog_OverDamage::GetDungeonLimitMaxDamage() */

undefined4 CHackLog_OverDamage::GetDungeonLimitMaxDamage(void)

{
  return _S_KILL_MONSTER_OVER_DAMAGE_CONST._24_4_;
}

```

---

## GetHackTypeOverLimitMaxDamage

```asm
// === 082869a2 CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage  [0x082869a2-0x82869ab] ===
 82869a2:	55                   	push   %ebp
 82869a3:	89 e5                	mov    %esp,%ebp
 82869a5:	b8 6b 00 00 00       	mov    $0x6b,%eax
 82869aa:	5d                   	pop    %ebp
 82869ab:	c3                   	ret

```

```c
// CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage @ 0x82869a2

/* CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage() */

undefined4 CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage(void)

{
  return 0x6b;
}

```

