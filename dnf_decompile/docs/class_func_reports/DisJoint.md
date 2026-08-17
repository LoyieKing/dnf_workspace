# DisJoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetAddtionalSkill

```asm
// === 08473184 DisJoint::GetAddtionalSkill  [0x08473184-0x8473223] ===
 8473184:	55                   	push   %ebp
 8473185:	89 e5                	mov    %esp,%ebp
 8473187:	83 ec 38             	sub    $0x38,%esp
 847318a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 847318d:	89 04 24             	mov    %eax,(%esp)
 8473190:	e8 69 04 00 00       	call   84735fe <_ZN19DisjointSkillScriptC1Ev>
 8473195:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 847319c:	eb 57                	jmp    84731f5 <_ZN8DisJoint17GetAddtionalSkillEiiRiS0_+0x71>
 847319e:	8b 45 08             	mov    0x8(%ebp),%eax
 84731a1:	8d 90 c0 00 00 00    	lea    0xc0(%eax),%edx
 84731a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84731aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84731ae:	89 14 24             	mov    %edx,(%esp)
 84731b1:	e8 84 04 00 00       	call   847363a <_ZNSt6vectorI19DisjointSkillScriptSaIS0_EEixEj>
 84731b6:	8b 10                	mov    (%eax),%edx
 84731b8:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 84731bb:	8b 50 04             	mov    0x4(%eax),%edx
 84731be:	89 55 e8             	mov    %edx,-0x18(%ebp)
 84731c1:	8b 50 08             	mov    0x8(%eax),%edx
 84731c4:	89 55 ec             	mov    %edx,-0x14(%ebp)
 84731c7:	8b 40 0c             	mov    0xc(%eax),%eax
 84731ca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84731cd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84731d0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84731d3:	75 1c                	jne    84731f1 <_ZN8DisJoint17GetAddtionalSkillEiiRiS0_+0x6d>
 84731d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84731d8:	3b 45 10             	cmp    0x10(%ebp),%eax
 84731db:	75 14                	jne    84731f1 <_ZN8DisJoint17GetAddtionalSkillEiiRiS0_+0x6d>
 84731dd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84731e0:	8b 45 14             	mov    0x14(%ebp),%eax
 84731e3:	89 10                	mov    %edx,(%eax)
 84731e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84731e8:	89 c2                	mov    %eax,%edx
 84731ea:	8b 45 18             	mov    0x18(%ebp),%eax
 84731ed:	89 10                	mov    %edx,(%eax)
 84731ef:	eb 30                	jmp    8473221 <_ZN8DisJoint17GetAddtionalSkillEiiRiS0_+0x9d>
 84731f1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84731f5:	8b 45 08             	mov    0x8(%ebp),%eax
 84731f8:	05 c0 00 00 00       	add    $0xc0,%eax
 84731fd:	89 04 24             	mov    %eax,(%esp)
 8473200:	e8 19 04 00 00       	call   847361e <_ZNKSt6vectorI19DisjointSkillScriptSaIS0_EE4sizeEv>
 8473205:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8473208:	0f 97 c0             	seta   %al
 847320b:	84 c0                	test   %al,%al
 847320d:	75 8f                	jne    847319e <_ZN8DisJoint17GetAddtionalSkillEiiRiS0_+0x1a>
 847320f:	8b 45 14             	mov    0x14(%ebp),%eax
 8473212:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8473218:	8b 45 18             	mov    0x18(%ebp),%eax
 847321b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8473221:	c9                   	leave
 8473222:	c3                   	ret
 8473223:	90                   	nop

```

```c
// DisJoint::GetAddtionalSkill @ 0x8473184

/* DisJoint::GetAddtionalSkill(int, int, int&, int&) */

void __thiscall
DisJoint::GetAddtionalSkill(DisJoint *this,int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  DisjointSkillScript::DisjointSkillScript((DisjointSkillScript *)&local_20);
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<DisjointSkillScript,std::allocator<DisjointSkillScript>>::size
                      ((vector<DisjointSkillScript,std::allocator<DisjointSkillScript>> *)
                       (this + 0xc0));
    if (uVar2 <= local_10) {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
    piVar1 = (int *)std::vector<DisjointSkillScript,std::allocator<DisjointSkillScript>>::operator[]
                              ((vector<DisjointSkillScript,std::allocator<DisjointSkillScript>> *)
                               (this + 0xc0),local_10);
    local_20 = *piVar1;
    local_1c = piVar1[1];
    local_18 = piVar1[2];
    local_14 = piVar1[3];
    if ((local_20 == param_1) && (local_1c == param_2)) break;
    local_10 = local_10 + 1;
  }
  *param_3 = local_18;
  *param_4 = local_14;
  return;
}

```

---

## GetPredictResult

```asm
// === 08473116 DisJoint::GetPredictResult  [0x08473116-0x8473147] ===
 8473116:	55                   	push   %ebp
 8473117:	89 e5                	mov    %esp,%ebp
 8473119:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 847311d:	78 06                	js     8473125 <_ZN8DisJoint16GetPredictResultEi+0xf>
 847311f:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8473123:	7e 0a                	jle    847312f <_ZN8DisJoint16GetPredictResultEi+0x19>
 8473125:	8b 45 08             	mov    0x8(%ebp),%eax
 8473128:	05 28 06 00 00       	add    $0x628,%eax
 847312d:	eb 17                	jmp    8473146 <_ZN8DisJoint16GetPredictResultEi+0x30>
 847312f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8473132:	89 d0                	mov    %edx,%eax
 8473134:	01 c0                	add    %eax,%eax
 8473136:	01 d0                	add    %edx,%eax
 8473138:	c1 e0 02             	shl    $0x2,%eax
 847313b:	05 20 06 00 00       	add    $0x620,%eax
 8473140:	03 45 08             	add    0x8(%ebp),%eax
 8473143:	83 c0 08             	add    $0x8,%eax
 8473146:	5d                   	pop    %ebp
 8473147:	c3                   	ret

```

```c
// DisJoint::GetPredictResult @ 0x8473116

/* DisJoint::GetPredictResult(int) */

DisJoint * __thiscall DisJoint::GetPredictResult(DisJoint *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    this = this + param_1 * 0xc;
  }
  return this + 0x628;
}

```

---

## GetResult

```asm
// === 084733f6 DisJoint::GetResult  [0x084733f6-0x8473574] ===
 84733f6:	55                   	push   %ebp
 84733f7:	89 e5                	mov    %esp,%ebp
 84733f9:	83 ec 58             	sub    $0x58,%esp
 84733fc:	e8 9a 8d c5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8473401:	8b 55 0c             	mov    0xc(%ebp),%edx
 8473404:	89 54 24 04          	mov    %edx,0x4(%esp)
 8473408:	89 04 24             	mov    %eax,(%esp)
 847340b:	e8 22 c6 ee ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8473410:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8473413:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8473417:	75 36                	jne    847344f <_ZN8DisJoint9GetResultEiR14DisJointResult+0x59>
 8473419:	c7 44 24 10 bc f2 c6 	movl   $0x8c6f2bc,0x10(%esp)
 8473420:	08 
 8473421:	c7 44 24 0c 6e 00 00 	movl   $0x6e,0xc(%esp)
 8473428:	00 
 8473429:	c7 44 24 08 20 ff c6 	movl   $0x8c6ff20,0x8(%esp)
 8473430:	08 
 8473431:	c7 44 24 04 dd f2 c6 	movl   $0x8c6f2dd,0x4(%esp)
 8473438:	08 
 8473439:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8473440:	e8 c5 07 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8473445:	b8 11 00 00 00       	mov    $0x11,%eax
 847344a:	e9 24 01 00 00       	jmp    8473573 <_ZN8DisJoint9GetResultEiR14DisJointResult+0x17d>
 847344f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8473452:	89 04 24             	mov    %eax,(%esp)
 8473455:	e8 7c de c7 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 847345a:	89 c2                	mov    %eax,%edx
 847345c:	8b 45 08             	mov    0x8(%ebp),%eax
 847345f:	81 c2 4c 01 00 00    	add    $0x14c,%edx
 8473465:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8473469:	89 45 ec             	mov    %eax,-0x14(%ebp)
 847346c:	8b 45 08             	mov    0x8(%ebp),%eax
 847346f:	83 c0 30             	add    $0x30,%eax
 8473472:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8473479:	00 
 847347a:	89 04 24             	mov    %eax,(%esp)
 847347d:	e8 5a ad c1 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8473482:	8b 10                	mov    (%eax),%edx
 8473484:	8b 45 10             	mov    0x10(%ebp),%eax
 8473487:	89 50 14             	mov    %edx,0x14(%eax)
 847348a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847348d:	89 04 24             	mov    %eax,(%esp)
 8473490:	e8 7d 01 00 00       	call   8473612 <_ZNK5CItem12GetSellPriceEv>
 8473495:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8473498:	db 45 f0             	fildl  -0x10(%ebp)
 847349b:	d9 05 50 ff c6 08    	flds   0x8c6ff50
 84734a1:	de c9                	fmulp  %st,%st(1)
 84734a3:	d9 7d e6             	fnstcw -0x1a(%ebp)
 84734a6:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 84734aa:	b4 0c                	mov    $0xc,%ah
 84734ac:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84734b0:	d9 6d e4             	fldcw  -0x1c(%ebp)
 84734b3:	db 5d f0             	fistpl -0x10(%ebp)
 84734b6:	d9 6d e6             	fldcw  -0x1a(%ebp)
 84734b9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84734bc:	8b 00                	mov    (%eax),%eax
 84734be:	83 c0 4c             	add    $0x4c,%eax
 84734c1:	8b 10                	mov    (%eax),%edx
 84734c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84734c6:	89 04 24             	mov    %eax,(%esp)
 84734c9:	ff d2                	call   *%edx
 84734cb:	0f b6 c0             	movzbl %al,%eax
 84734ce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84734d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84734d9:	00 
 84734da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84734e1:	00 
 84734e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84734e5:	89 04 24             	mov    %eax,(%esp)
 84734e8:	e8 81 93 51 00       	call   898c86e <_Z16getItemSellPriceiiib>
 84734ed:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 84734f3:	8b 55 08             	mov    0x8(%ebp),%edx
 84734f6:	8b 92 34 05 00 00    	mov    0x534(%edx),%edx
 84734fc:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 84734ff:	89 c2                	mov    %eax,%edx
 8473501:	c1 fa 1f             	sar    $0x1f,%edx
 8473504:	f7 7d d4             	idivl  -0x2c(%ebp)
 8473507:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847350a:	db 45 f4             	fildl  -0xc(%ebp)
 847350d:	d8 4d ec             	fmuls  -0x14(%ebp)
 8473510:	d9 05 54 ff c6 08    	flds   0x8c6ff54
 8473516:	de f9                	fdivrp %st,%st(1)
 8473518:	d9 7d e6             	fnstcw -0x1a(%ebp)
 847351b:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 847351f:	b4 0c                	mov    $0xc,%ah
 8473521:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8473525:	d9 6d e4             	fldcw  -0x1c(%ebp)
 8473528:	db 5d e0             	fistpl -0x20(%ebp)
 847352b:	d9 6d e6             	fldcw  -0x1a(%ebp)
 847352e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8473531:	8b 45 10             	mov    0x10(%ebp),%eax
 8473534:	89 10                	mov    %edx,(%eax)
 8473536:	8b 45 10             	mov    0x10(%ebp),%eax
 8473539:	8b 00                	mov    (%eax),%eax
 847353b:	85 c0                	test   %eax,%eax
 847353d:	7f 09                	jg     8473548 <_ZN8DisJoint9GetResultEiR14DisJointResult+0x152>
 847353f:	8b 45 10             	mov    0x10(%ebp),%eax
 8473542:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8473548:	8b 45 10             	mov    0x10(%ebp),%eax
 847354b:	8d 50 04             	lea    0x4(%eax),%edx
 847354e:	8b 45 10             	mov    0x10(%ebp),%eax
 8473551:	83 c0 18             	add    $0x18,%eax
 8473554:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8473558:	89 44 24 08          	mov    %eax,0x8(%esp)
 847355c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847355f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8473563:	8b 45 08             	mov    0x8(%ebp),%eax
 8473566:	89 04 24             	mov    %eax,(%esp)
 8473569:	e8 46 fd ff ff       	call   84732b4 <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_>
 847356e:	b8 00 00 00 00       	mov    $0x0,%eax
 8473573:	c9                   	leave
 8473574:	c3                   	ret

```

```c
// DisJoint::GetResult @ 0x84733f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisJoint::GetResult(int, DisJointResult&) */

undefined4 __thiscall DisJoint::GetResult(DisJoint *this,int param_1,DisJointResult *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    LogManager::logFormat
              (1,"DisJoint.cpp","int DisJoint::GetResult(int, DisJointResult&)",0x6e,
               "[DisJoint::GetResult] Null Item\n");
    uVar4 = 0x11;
  }
  else {
    iVar5 = CItem::get_rarity(this_01);
    fVar1 = *(float *)(this + (iVar5 + 0x14c) * 4 + 8);
    puVar6 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 0x30),0);
    *(undefined4 *)(param_2 + 0x14) = *puVar6;
    iVar5 = CItem::GetSellPrice(this_01);
    fVar2 = _DAT_08c6ff50 * (float)iVar5;
    bVar3 = (bool)(**(code **)(*(int *)this_01 + 0x4c))(this_01);
    iVar5 = getItemSellPrice((int)ROUND(fVar2),0,0,bVar3);
    *(int *)param_2 =
         (int)ROUND(((float)((iVar5 * 1000) / *(int *)(this + 0x534)) * fVar1) / _DAT_08c6ff54);
    if (*(int *)param_2 < 1) {
      *(undefined4 *)param_2 = 1;
    }
    _GetAdditionalItem(this,this_01,(int *)(param_2 + 0x18),(int *)(param_2 + 4));
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## LoadDisJoint

```asm
// === 0847300c DisJoint::LoadDisJoint  [0x0847300c-0x8473115] ===
 847300c:	55                   	push   %ebp
 847300d:	89 e5                	mov    %esp,%ebp
 847300f:	83 ec 28             	sub    $0x28,%esp
 8473012:	8b 45 08             	mov    0x8(%ebp),%eax
 8473015:	c7 44 24 04 80 f2 c6 	movl   $0x8c6f280,0x4(%esp)
 847301c:	08 
 847301d:	89 04 24             	mov    %eax,(%esp)
 8473020:	e8 63 1d 47 00       	call   88e4d88 <_Z20importDisjointScriptP14DisjointScriptPKc>
 8473025:	83 f0 01             	xor    $0x1,%eax
 8473028:	84 c0                	test   %al,%al
 847302a:	74 16                	je     8473042 <_ZN8DisJoint12LoadDisJointEv+0x36>
 847302c:	c7 04 24 94 f2 c6 08 	movl   $0x8c6f294,(%esp)
 8473033:	e8 38 b5 c0 ff       	call   807e570 <puts@plt>
 8473038:	b8 00 00 00 00       	mov    $0x0,%eax
 847303d:	e9 d2 00 00 00       	jmp    8473114 <_ZN8DisJoint12LoadDisJointEv+0x108>
 8473042:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8473049:	e9 b2 00 00 00       	jmp    8473100 <_ZN8DisJoint12LoadDisJointEv+0xf4>
 847304e:	8b 45 08             	mov    0x8(%ebp),%eax
 8473051:	83 c0 30             	add    $0x30,%eax
 8473054:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847305b:	00 
 847305c:	89 04 24             	mov    %eax,(%esp)
 847305f:	e8 0e 3c c2 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 8473064:	8b 00                	mov    (%eax),%eax
 8473066:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8473069:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847306c:	89 d0                	mov    %edx,%eax
 847306e:	01 c0                	add    %eax,%eax
 8473070:	01 d0                	add    %edx,%eax
 8473072:	c1 e0 02             	shl    $0x2,%eax
 8473075:	05 20 06 00 00       	add    $0x620,%eax
 847307a:	03 45 08             	add    0x8(%ebp),%eax
 847307d:	8d 50 08             	lea    0x8(%eax),%edx
 8473080:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8473083:	89 44 24 04          	mov    %eax,0x4(%esp)
 8473087:	89 14 24             	mov    %edx,(%esp)
 847308a:	e8 97 e0 c9 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 847308f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8473096:	eb 47                	jmp    84730df <_ZN8DisJoint12LoadDisJointEv+0xd3>
 8473098:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847309b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 847309e:	83 c2 5c             	add    $0x5c,%edx
 84730a1:	c1 e2 04             	shl    $0x4,%edx
 84730a4:	03 55 08             	add    0x8(%ebp),%edx
 84730a7:	83 c2 0c             	add    $0xc,%edx
 84730aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84730ae:	89 14 24             	mov    %edx,(%esp)
 84730b1:	e8 26 b1 c1 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 84730b6:	89 c1                	mov    %eax,%ecx
 84730b8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84730bb:	89 d0                	mov    %edx,%eax
 84730bd:	01 c0                	add    %eax,%eax
 84730bf:	01 d0                	add    %edx,%eax
 84730c1:	c1 e0 02             	shl    $0x2,%eax
 84730c4:	05 20 06 00 00       	add    $0x620,%eax
 84730c9:	03 45 08             	add    0x8(%ebp),%eax
 84730cc:	83 c0 08             	add    $0x8,%eax
 84730cf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84730d3:	89 04 24             	mov    %eax,(%esp)
 84730d6:	e8 4b e0 c9 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 84730db:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84730df:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84730e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84730e5:	83 c2 5c             	add    $0x5c,%edx
 84730e8:	c1 e2 04             	shl    $0x4,%edx
 84730eb:	01 d0                	add    %edx,%eax
 84730ed:	83 c0 08             	add    $0x8,%eax
 84730f0:	8b 00                	mov    (%eax),%eax
 84730f2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84730f5:	0f 9f c0             	setg   %al
 84730f8:	84 c0                	test   %al,%al
 84730fa:	75 9c                	jne    8473098 <_ZN8DisJoint12LoadDisJointEv+0x8c>
 84730fc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8473100:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8473104:	0f 9e c0             	setle  %al
 8473107:	84 c0                	test   %al,%al
 8473109:	0f 85 3f ff ff ff    	jne    847304e <_ZN8DisJoint12LoadDisJointEv+0x42>
 847310f:	b8 01 00 00 00       	mov    $0x1,%eax
 8473114:	c9                   	leave
 8473115:	c3                   	ret

```

```c
// DisJoint::LoadDisJoint @ 0x847300c

/* DisJoint::LoadDisJoint() */

undefined4 __thiscall DisJoint::LoadDisJoint(DisJoint *this)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_18;
  int local_14;
  uint local_10;
  
  cVar1 = importDisjointScript((DisjointScript *)this,"Etc/Disjoint.etc");
  if (cVar1 == '\x01') {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                                ((vector<int,std::allocator<int>> *)(this + 0x30),0);
      local_18 = *piVar3;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + local_14 * 0xc + 0x628),&local_18);
      for (local_10 = 0; (int)local_10 < *(int *)(this + (local_14 + 0x5c) * 0x10 + 8);
          local_10 = local_10 + 1) {
        piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)
                                   (this + (local_14 + 0x5c) * 0x10 + 0xc),local_10);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(this + local_14 * 0xc + 0x628),piVar3);
      }
    }
    uVar2 = 1;
  }
  else {
    puts("DisJoint Script Error: Etc/Disjoint.etc");
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _GetAdditionalItem

```asm
// === 084732b4 DisJoint::_GetAdditionalItem  [0x084732b4-0x84733f5] ===
 84732b4:	55                   	push   %ebp
 84732b5:	89 e5                	mov    %esp,%ebp
 84732b7:	83 ec 38             	sub    $0x38,%esp
 84732ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84732bd:	89 04 24             	mov    %eax,(%esp)
 84732c0:	e8 11 e0 c7 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84732c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84732c9:	8b 45 08             	mov    0x8(%ebp),%eax
 84732cc:	89 04 24             	mov    %eax,(%esp)
 84732cf:	e8 50 ff ff ff       	call   8473224 <_ZN8DisJoint22_GetAdditionalItemInfoEi>
 84732d4:	8b 55 10             	mov    0x10(%ebp),%edx
 84732d7:	89 02                	mov    %eax,(%edx)
 84732d9:	8b 45 10             	mov    0x10(%ebp),%eax
 84732dc:	8b 00                	mov    (%eax),%eax
 84732de:	85 c0                	test   %eax,%eax
 84732e0:	0f 95 c0             	setne  %al
 84732e3:	84 c0                	test   %al,%al
 84732e5:	0f 84 09 01 00 00    	je     84733f4 <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_+0x140>
 84732eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84732ee:	89 04 24             	mov    %eax,(%esp)
 84732f1:	e8 e0 df c7 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84732f6:	89 c2                	mov    %eax,%edx
 84732f8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84732fb:	89 d0                	mov    %edx,%eax
 84732fd:	01 c0                	add    %eax,%eax
 84732ff:	01 d0                	add    %edx,%eax
 8473301:	c1 e0 02             	shl    $0x2,%eax
 8473304:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8473307:	05 6c 05 00 00       	add    $0x56c,%eax
 847330c:	8b 00                	mov    (%eax),%eax
 847330e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8473311:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8473314:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8473317:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847331a:	6b c0 64             	imul   $0x64,%eax,%eax
 847331d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8473320:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 8473327:	e8 5b e8 23 00       	call   86b1b87 <_Z12get_rand_inti>
 847332c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 847332f:	0f 9c c0             	setl   %al
 8473332:	84 c0                	test   %al,%al
 8473334:	74 57                	je     847338d <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_+0xd9>
 8473336:	8b 45 0c             	mov    0xc(%ebp),%eax
 8473339:	89 04 24             	mov    %eax,(%esp)
 847333c:	e8 13 d9 c9 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8473341:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8473344:	db 45 e4             	fildl  -0x1c(%ebp)
 8473347:	d9 5d d8             	fstps  -0x28(%ebp)
 847334a:	8b 45 0c             	mov    0xc(%ebp),%eax
 847334d:	89 04 24             	mov    %eax,(%esp)
 8473350:	e8 81 df c7 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8473355:	89 c2                	mov    %eax,%edx
 8473357:	8b 45 08             	mov    0x8(%ebp),%eax
 847335a:	81 c2 50 01 00 00    	add    $0x150,%edx
 8473360:	d9 44 90 10          	flds   0x10(%eax,%edx,4)
 8473364:	d8 7d d8             	fdivrs -0x28(%ebp)
 8473367:	d9 5d f0             	fstps  -0x10(%ebp)
 847336a:	d9 45 f0             	flds   -0x10(%ebp)
 847336d:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8473370:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8473374:	b4 0c                	mov    $0xc,%ah
 8473376:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 847337a:	d9 6d e0             	fldcw  -0x20(%ebp)
 847337d:	db 5d e4             	fistpl -0x1c(%ebp)
 8473380:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8473383:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8473386:	8b 45 14             	mov    0x14(%ebp),%eax
 8473389:	89 10                	mov    %edx,(%eax)
 847338b:	eb 55                	jmp    84733e2 <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_+0x12e>
 847338d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8473390:	89 04 24             	mov    %eax,(%esp)
 8473393:	e8 bc d8 c9 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8473398:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847339b:	db 45 e4             	fildl  -0x1c(%ebp)
 847339e:	d9 5d dc             	fstps  -0x24(%ebp)
 84733a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84733a4:	89 04 24             	mov    %eax,(%esp)
 84733a7:	e8 2a df c7 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84733ac:	89 c2                	mov    %eax,%edx
 84733ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84733b1:	81 c2 68 01 00 00    	add    $0x168,%edx
 84733b7:	d9 44 90 10          	flds   0x10(%eax,%edx,4)
 84733bb:	d8 7d dc             	fdivrs -0x24(%ebp)
 84733be:	d9 5d f4             	fstps  -0xc(%ebp)
 84733c1:	d9 45 f4             	flds   -0xc(%ebp)
 84733c4:	d9 7d e2             	fnstcw -0x1e(%ebp)
 84733c7:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 84733cb:	b4 0c                	mov    $0xc,%ah
 84733cd:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 84733d1:	d9 6d e0             	fldcw  -0x20(%ebp)
 84733d4:	db 5d e4             	fistpl -0x1c(%ebp)
 84733d7:	d9 6d e2             	fldcw  -0x1e(%ebp)
 84733da:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84733dd:	8b 45 14             	mov    0x14(%ebp),%eax
 84733e0:	89 10                	mov    %edx,(%eax)
 84733e2:	8b 45 14             	mov    0x14(%ebp),%eax
 84733e5:	8b 00                	mov    (%eax),%eax
 84733e7:	85 c0                	test   %eax,%eax
 84733e9:	7f 09                	jg     84733f4 <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_+0x140>
 84733eb:	8b 45 14             	mov    0x14(%ebp),%eax
 84733ee:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 84733f4:	c9                   	leave
 84733f5:	c3                   	ret

```

```c
// DisJoint::_GetAdditionalItem @ 0x84732b4

/* DisJoint::_GetAdditionalItem(CItem const*, int&, int&) */

void __thiscall
DisJoint::_GetAdditionalItem(DisJoint *this,CItem *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CItem::get_rarity(param_1);
  iVar1 = _GetAdditionalItemInfo(this,iVar1);
  *param_2 = iVar1;
  if (*param_2 != 0) {
    iVar1 = CItem::get_rarity(param_1);
    iVar1 = *(int *)(this + iVar1 * 0xc + 0x56c);
    iVar2 = get_rand_int(10000);
    if (iVar2 < iVar1 * 100) {
      iVar1 = CItem::get_grade(param_1);
      iVar2 = CItem::get_rarity(param_1);
      *param_3 = (int)ROUND((float)iVar1 / *(float *)(this + (iVar2 + 0x150) * 4 + 0x10));
    }
    else {
      iVar1 = CItem::get_grade(param_1);
      iVar2 = CItem::get_rarity(param_1);
      *param_3 = (int)ROUND((float)iVar1 / *(float *)(this + (iVar2 + 0x168) * 4 + 0x10));
    }
    if (*param_3 < 1) {
      *param_3 = 1;
    }
  }
  return;
}

```

---

## _GetAdditionalItemInfo

```asm
// === 08473224 DisJoint::_GetAdditionalItemInfo  [0x08473224-0x84732b3] ===
 8473224:	55                   	push   %ebp
 8473225:	89 e5                	mov    %esp,%ebp
 8473227:	83 ec 28             	sub    $0x28,%esp
 847322a:	8b 55 0c             	mov    0xc(%ebp),%edx
 847322d:	8b 45 08             	mov    0x8(%ebp),%eax
 8473230:	83 c2 5c             	add    $0x5c,%edx
 8473233:	c1 e2 04             	shl    $0x4,%edx
 8473236:	01 d0                	add    %edx,%eax
 8473238:	83 c0 08             	add    $0x8,%eax
 847323b:	8b 00                	mov    (%eax),%eax
 847323d:	85 c0                	test   %eax,%eax
 847323f:	75 07                	jne    8473248 <_ZN8DisJoint22_GetAdditionalItemInfoEi+0x24>
 8473241:	b8 00 00 00 00       	mov    $0x0,%eax
 8473246:	eb 6a                	jmp    84732b2 <_ZN8DisJoint22_GetAdditionalItemInfoEi+0x8e>
 8473248:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 847324f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8473252:	8b 45 08             	mov    0x8(%ebp),%eax
 8473255:	83 c2 5c             	add    $0x5c,%edx
 8473258:	c1 e2 04             	shl    $0x4,%edx
 847325b:	01 d0                	add    %edx,%eax
 847325d:	83 c0 08             	add    $0x8,%eax
 8473260:	8b 00                	mov    (%eax),%eax
 8473262:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 8473268:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847326b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847326e:	89 04 24             	mov    %eax,(%esp)
 8473271:	e8 11 e9 23 00       	call   86b1b87 <_Z12get_rand_inti>
 8473276:	89 c1                	mov    %eax,%ecx
 8473278:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 847327d:	89 c8                	mov    %ecx,%eax
 847327f:	f7 ea                	imul   %edx
 8473281:	c1 fa 06             	sar    $0x6,%edx
 8473284:	89 c8                	mov    %ecx,%eax
 8473286:	c1 f8 1f             	sar    $0x1f,%eax
 8473289:	89 d1                	mov    %edx,%ecx
 847328b:	29 c1                	sub    %eax,%ecx
 847328d:	89 c8                	mov    %ecx,%eax
 847328f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8473292:	83 c2 5c             	add    $0x5c,%edx
 8473295:	c1 e2 04             	shl    $0x4,%edx
 8473298:	03 55 08             	add    0x8(%ebp),%edx
 847329b:	83 c2 0c             	add    $0xc,%edx
 847329e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84732a2:	89 14 24             	mov    %edx,(%esp)
 84732a5:	e8 32 af c1 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 84732aa:	8b 00                	mov    (%eax),%eax
 84732ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84732af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84732b2:	c9                   	leave
 84732b3:	c3                   	ret

```

```c
// DisJoint::_GetAdditionalItemInfo @ 0x8473224

/* DisJoint::_GetAdditionalItemInfo(int) */

undefined4 __thiscall DisJoint::_GetAdditionalItemInfo(DisJoint *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) * 1000);
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + (param_1 + 0x5c) * 0x10 + 0xc),
                        iVar2 / 1000);
    uVar1 = *puVar3;
  }
  return uVar1;
}

```

---

## getPredictResultItemTypeCount

```asm
// === 08473148 DisJoint::getPredictResultItemTypeCount  [0x08473148-0x8473183] ===
 8473148:	55                   	push   %ebp
 8473149:	89 e5                	mov    %esp,%ebp
 847314b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 847314f:	78 06                	js     8473157 <_ZNK8DisJoint29getPredictResultItemTypeCountEi+0xf>
 8473151:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8473155:	7e 07                	jle    847315e <_ZNK8DisJoint29getPredictResultItemTypeCountEi+0x16>
 8473157:	b8 01 00 00 00       	mov    $0x1,%eax
 847315c:	eb 23                	jmp    8473181 <_ZNK8DisJoint29getPredictResultItemTypeCountEi+0x39>
 847315e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8473161:	8b 45 08             	mov    0x8(%ebp),%eax
 8473164:	83 c2 5c             	add    $0x5c,%edx
 8473167:	c1 e2 04             	shl    $0x4,%edx
 847316a:	01 d0                	add    %edx,%eax
 847316c:	83 c0 08             	add    $0x8,%eax
 847316f:	8b 00                	mov    (%eax),%eax
 8473171:	85 c0                	test   %eax,%eax
 8473173:	74 07                	je     847317c <_ZNK8DisJoint29getPredictResultItemTypeCountEi+0x34>
 8473175:	b8 02 00 00 00       	mov    $0x2,%eax
 847317a:	eb 05                	jmp    8473181 <_ZNK8DisJoint29getPredictResultItemTypeCountEi+0x39>
 847317c:	b8 01 00 00 00       	mov    $0x1,%eax
 8473181:	5d                   	pop    %ebp
 8473182:	c3                   	ret
 8473183:	90                   	nop

```

```c
// DisJoint::getPredictResultItemTypeCount @ 0x8473148

/* DisJoint::getPredictResultItemTypeCount(int) const */

undefined4 __thiscall DisJoint::getPredictResultItemTypeCount(DisJoint *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (5 < param_1)) {
    uVar1 = 1;
  }
  else if (*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

```

