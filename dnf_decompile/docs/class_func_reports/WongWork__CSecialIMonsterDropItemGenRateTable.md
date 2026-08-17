# WongWork__CSecialIMonsterDropItemGenRateTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _itemTypeVerify

```asm
// === 085352a6 WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify  [0x085352a6-0x8535343] ===
 85352a6:	55                   	push   %ebp
 85352a7:	89 e5                	mov    %esp,%ebp
 85352a9:	83 ec 18             	sub    $0x18,%esp
 85352ac:	8b 45 10             	mov    0x10(%ebp),%eax
 85352af:	89 04 24             	mov    %eax,(%esp)
 85352b2:	e8 43 c0 bb ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85352b7:	84 c0                	test   %al,%al
 85352b9:	74 41                	je     85352fc <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x56>
 85352bb:	8b 45 10             	mov    0x10(%ebp),%eax
 85352be:	8b 00                	mov    (%eax),%eax
 85352c0:	83 c0 0c             	add    $0xc,%eax
 85352c3:	8b 10                	mov    (%eax),%edx
 85352c5:	8b 45 10             	mov    0x10(%ebp),%eax
 85352c8:	89 04 24             	mov    %eax,(%esp)
 85352cb:	ff d2                	call   *%edx
 85352cd:	83 f8 03             	cmp    $0x3,%eax
 85352d0:	75 0d                	jne    85352df <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x39>
 85352d2:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85352d6:	75 07                	jne    85352df <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x39>
 85352d8:	b8 01 00 00 00       	mov    $0x1,%eax
 85352dd:	eb 05                	jmp    85352e4 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x3e>
 85352df:	b8 00 00 00 00       	mov    $0x0,%eax
 85352e4:	84 c0                	test   %al,%al
 85352e6:	74 07                	je     85352ef <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x49>
 85352e8:	b8 01 00 00 00       	mov    $0x1,%eax
 85352ed:	eb 52                	jmp    8535341 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 85352ef:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85352f3:	75 47                	jne    853533c <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x96>
 85352f5:	b8 01 00 00 00       	mov    $0x1,%eax
 85352fa:	eb 45                	jmp    8535341 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 85352fc:	8b 45 10             	mov    0x10(%ebp),%eax
 85352ff:	8b 00                	mov    (%eax),%eax
 8535301:	83 c0 14             	add    $0x14,%eax
 8535304:	8b 10                	mov    (%eax),%edx
 8535306:	8b 45 10             	mov    0x10(%ebp),%eax
 8535309:	89 04 24             	mov    %eax,(%esp)
 853530c:	ff d2                	call   *%edx
 853530e:	84 c0                	test   %al,%al
 8535310:	74 0d                	je     853531f <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x79>
 8535312:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8535316:	75 07                	jne    853531f <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x79>
 8535318:	b8 01 00 00 00       	mov    $0x1,%eax
 853531d:	eb 05                	jmp    8535324 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x7e>
 853531f:	b8 00 00 00 00       	mov    $0x0,%eax
 8535324:	84 c0                	test   %al,%al
 8535326:	74 07                	je     853532f <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x89>
 8535328:	b8 01 00 00 00       	mov    $0x1,%eax
 853532d:	eb 12                	jmp    8535341 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853532f:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8535333:	75 07                	jne    853533c <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x96>
 8535335:	b8 01 00 00 00       	mov    $0x1,%eax
 853533a:	eb 05                	jmp    8535341 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853533c:	b8 00 00 00 00       	mov    $0x0,%eax
 8535341:	c9                   	leave
 8535342:	c3                   	ret
 8535343:	90                   	nop

```

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify @ 0x85352a6

/* WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify(int, CItem const*) */

undefined4 __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify
          (CSecialIMonsterDropItemGenRateTable *this,int param_1,CItem *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if ((cVar2 == '\0') || (param_1 != 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 2) {
      return 1;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    if ((iVar3 == 3) && (param_1 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 1) {
      return 1;
    }
  }
  return 0;
}

```

---

## chooseItem

```asm
// === 08534fce WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem  [0x08534fce-0x85352a5] ===
 8534fce:	55                   	push   %ebp
 8534fcf:	89 e5                	mov    %esp,%ebp
 8534fd1:	57                   	push   %edi
 8534fd2:	56                   	push   %esi
 8534fd3:	53                   	push   %ebx
 8534fd4:	83 ec 6c             	sub    $0x6c,%esp
 8534fd7:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8534fdb:	75 3c                	jne    8535019 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x4b>
 8534fdd:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 8534fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8534fe7:	8d 90 b4 1f 21 00    	lea    0x211fb4(%eax),%edx
 8534fed:	8b 45 14             	mov    0x14(%ebp),%eax
 8534ff0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8534ff4:	8d 45 10             	lea    0x10(%ebp),%eax
 8534ff7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534ffb:	89 14 24             	mov    %edx,(%esp)
 8534ffe:	e8 5d c5 0b 00       	call   85f1560 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi>
 8535003:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8535006:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 853500a:	0f 95 c0             	setne  %al
 853500d:	84 c0                	test   %al,%al
 853500f:	74 08                	je     8535019 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x4b>
 8535011:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8535014:	e9 81 02 00 00       	jmp    853529a <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x2cc>
 8535019:	8b 4d 18             	mov    0x18(%ebp),%ecx
 853501c:	8b 75 1c             	mov    0x1c(%ebp),%esi
 853501f:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8535022:	8b 45 10             	mov    0x10(%ebp),%eax
 8535025:	89 c7                	mov    %eax,%edi
 8535027:	8b 55 14             	mov    0x14(%ebp),%edx
 853502a:	89 d0                	mov    %edx,%eax
 853502c:	01 c0                	add    %eax,%eax
 853502e:	01 d0                	add    %edx,%eax
 8535030:	c1 e0 03             	shl    $0x3,%eax
 8535033:	69 d7 d8 12 00 00    	imul   $0x12d8,%edi,%edx
 8535039:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 853503c:	69 d6 50 35 02 00    	imul   $0x23550,%esi,%edx
 8535042:	69 c3 10 71 00 00    	imul   $0x7110,%ebx,%eax
 8535048:	8d 04 02             	lea    (%edx,%eax,1),%eax
 853504b:	8d 14 07             	lea    (%edi,%eax,1),%edx
 853504e:	69 c1 f0 9f 06 00    	imul   $0x69ff0,%ecx,%eax
 8535054:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8535057:	03 45 08             	add    0x8(%ebp),%eax
 853505a:	89 04 24             	mov    %eax,(%esp)
 853505d:	e8 fe 5e 00 00       	call   853af60 <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4sizeEv>
 8535062:	85 c0                	test   %eax,%eax
 8535064:	0f 94 c0             	sete   %al
 8535067:	84 c0                	test   %al,%al
 8535069:	74 0a                	je     8535075 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0xa7>
 853506b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8535070:	e9 25 02 00 00       	jmp    853529a <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x2cc>
 8535075:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8535078:	89 04 24             	mov    %eax,(%esp)
 853507b:	e8 f4 5e 00 00       	call   853af74 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEC1Ev>
 8535080:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8535083:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8535086:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8535089:	8b 45 10             	mov    0x10(%ebp),%eax
 853508c:	89 c7                	mov    %eax,%edi
 853508e:	8b 55 14             	mov    0x14(%ebp),%edx
 8535091:	89 d0                	mov    %edx,%eax
 8535093:	01 c0                	add    %eax,%eax
 8535095:	01 d0                	add    %edx,%eax
 8535097:	c1 e0 03             	shl    $0x3,%eax
 853509a:	69 d7 d8 12 00 00    	imul   $0x12d8,%edi,%edx
 85350a0:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 85350a3:	69 d6 50 35 02 00    	imul   $0x23550,%esi,%edx
 85350a9:	69 c3 10 71 00 00    	imul   $0x7110,%ebx,%eax
 85350af:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85350b2:	8d 14 07             	lea    (%edi,%eax,1),%edx
 85350b5:	69 c1 f0 9f 06 00    	imul   $0x69ff0,%ecx,%eax
 85350bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85350be:	89 c2                	mov    %eax,%edx
 85350c0:	03 55 08             	add    0x8(%ebp),%edx
 85350c3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85350c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85350ca:	89 04 24             	mov    %eax,(%esp)
 85350cd:	e8 c6 b1 f1 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 85350d2:	83 ec 04             	sub    $0x4,%esp
 85350d5:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85350d8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85350db:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85350de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85350e5:	00 
 85350e6:	8d 55 b8             	lea    -0x48(%ebp),%edx
 85350e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85350ed:	89 04 24             	mov    %eax,(%esp)
 85350f0:	e8 8d 5e 00 00       	call   853af82 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEmmEi>
 85350f5:	83 ec 04             	sub    $0x4,%esp
 85350f8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85350fb:	89 04 24             	mov    %eax,(%esp)
 85350fe:	e8 cf b1 f1 ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 8535103:	8b 00                	mov    (%eax),%eax
 8535105:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8535108:	8b 45 dc             	mov    -0x24(%ebp),%eax
 853510b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 853510e:	8b 45 08             	mov    0x8(%ebp),%eax
 8535111:	8b 80 b0 1f 21 00    	mov    0x211fb0(%eax),%eax
 8535117:	8d 55 c0             	lea    -0x40(%ebp),%edx
 853511a:	89 54 24 04          	mov    %edx,0x4(%esp)
 853511e:	89 04 24             	mov    %eax,(%esp)
 8535121:	e8 98 69 b9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8535126:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8535129:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 8535130:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8535133:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8535136:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8535139:	8b 45 10             	mov    0x10(%ebp),%eax
 853513c:	89 c7                	mov    %eax,%edi
 853513e:	8b 55 14             	mov    0x14(%ebp),%edx
 8535141:	89 d0                	mov    %edx,%eax
 8535143:	01 c0                	add    %eax,%eax
 8535145:	01 d0                	add    %edx,%eax
 8535147:	c1 e0 03             	shl    $0x3,%eax
 853514a:	69 d7 d8 12 00 00    	imul   $0x12d8,%edi,%edx
 8535150:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 8535153:	69 d6 50 35 02 00    	imul   $0x23550,%esi,%edx
 8535159:	69 c3 10 71 00 00    	imul   $0x7110,%ebx,%eax
 853515f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8535162:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8535165:	69 c1 f0 9f 06 00    	imul   $0x69ff0,%ecx,%eax
 853516b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 853516e:	89 c2                	mov    %eax,%edx
 8535170:	03 55 08             	add    0x8(%ebp),%edx
 8535173:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8535176:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8535179:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 853517d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8535181:	89 04 24             	mov    %eax,(%esp)
 8535184:	e8 37 5e 00 00       	call   853afc0 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE11lower_boundERS3_>
 8535189:	83 ec 04             	sub    $0x4,%esp
 853518c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 853518f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8535192:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8535195:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8535198:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 853519b:	8b 45 10             	mov    0x10(%ebp),%eax
 853519e:	89 c7                	mov    %eax,%edi
 85351a0:	8b 55 14             	mov    0x14(%ebp),%edx
 85351a3:	89 d0                	mov    %edx,%eax
 85351a5:	01 c0                	add    %eax,%eax
 85351a7:	01 d0                	add    %edx,%eax
 85351a9:	c1 e0 03             	shl    $0x3,%eax
 85351ac:	69 d7 d8 12 00 00    	imul   $0x12d8,%edi,%edx
 85351b2:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 85351b5:	69 d6 50 35 02 00    	imul   $0x23550,%esi,%edx
 85351bb:	69 c3 10 71 00 00    	imul   $0x7110,%ebx,%eax
 85351c1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85351c4:	8d 14 07             	lea    (%edi,%eax,1),%edx
 85351c7:	69 c1 f0 9f 06 00    	imul   $0x69ff0,%ecx,%eax
 85351cd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85351d0:	89 c2                	mov    %eax,%edx
 85351d2:	03 55 08             	add    0x8(%ebp),%edx
 85351d5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85351d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85351dc:	89 04 24             	mov    %eax,(%esp)
 85351df:	e8 b4 b0 f1 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 85351e4:	83 ec 04             	sub    $0x4,%esp
 85351e7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85351ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85351ee:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85351f1:	89 04 24             	mov    %eax,(%esp)
 85351f4:	e8 93 b4 d8 ff       	call   82c068c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEeqERKS3_>
 85351f9:	84 c0                	test   %al,%al
 85351fb:	74 1d                	je     853521a <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x24c>
 85351fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8535200:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8535207:	00 
 8535208:	8d 55 b8             	lea    -0x48(%ebp),%edx
 853520b:	89 54 24 04          	mov    %edx,0x4(%esp)
 853520f:	89 04 24             	mov    %eax,(%esp)
 8535212:	e8 6b 5d 00 00       	call   853af82 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEmmEi>
 8535217:	83 ec 04             	sub    $0x4,%esp
 853521a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 853521d:	89 04 24             	mov    %eax,(%esp)
 8535220:	e8 ad b0 f1 ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 8535225:	8b 40 04             	mov    0x4(%eax),%eax
 8535228:	89 45 e0             	mov    %eax,-0x20(%ebp)
 853522b:	eb 6a                	jmp    8535297 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x2c9>
 853522d:	89 04 24             	mov    %eax,(%esp)
 8535230:	e8 ab 0a 1f 00       	call   8725ce0 <__cxa_begin_catch>
 8535235:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 853523c:	00 
 853523d:	c7 44 24 08 e5 02 00 	movl   $0x2e5,0x8(%esp)
 8535244:	00 
 8535245:	c7 44 24 04 80 a5 c9 	movl   $0x8c9a580,0x4(%esp)
 853524c:	08 
 853524d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8535250:	89 04 24             	mov    %eax,(%esp)
 8535253:	e8 c0 a4 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8535258:	c7 44 24 0c e5 02 00 	movl   $0x2e5,0xc(%esp)
 853525f:	00 
 8535260:	c7 44 24 08 80 a5 c9 	movl   $0x8c9a580,0x8(%esp)
 8535267:	08 
 8535268:	c7 44 24 04 a1 95 c9 	movl   $0x8c995a1,0x4(%esp)
 853526f:	08 
 8535270:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8535273:	89 04 24             	mov    %eax,(%esp)
 8535276:	e8 0d a5 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 853527b:	eb 15                	jmp    8535292 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE+0x2c4>
 853527d:	89 d3                	mov    %edx,%ebx
 853527f:	89 c6                	mov    %eax,%esi
 8535281:	e8 aa 09 1f 00       	call   8725c30 <__cxa_end_catch>
 8535286:	89 f0                	mov    %esi,%eax
 8535288:	89 da                	mov    %ebx,%edx
 853528a:	89 04 24             	mov    %eax,(%esp)
 853528d:	e8 be e4 5a 00       	call   8ae3750 <_Unwind_Resume>
 8535292:	e8 99 09 1f 00       	call   8725c30 <__cxa_end_catch>
 8535297:	8b 45 e0             	mov    -0x20(%ebp),%eax
 853529a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 853529d:	83 c4 00             	add    $0x0,%esp
 85352a0:	5b                   	pop    %ebx
 85352a1:	5e                   	pop    %esi
 85352a2:	5f                   	pop    %edi
 85352a3:	5d                   	pop    %ebp
 85352a4:	c3                   	ret
 85352a5:	90                   	nop

```

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem @ 0x8534fce

/* WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY,
   int, ENUM_DUNGEON_DIFFICULTY, ENUM_ITEM_DROP_DUNGEON_TYPE) */

int __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem
          (CSecialIMonsterDropItemGenRateTable *this,int param_2,int param_3,int param_4,int param_5
          ,int param_6)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_48 [4];
  ulong local_44;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_40 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_3c [20];
  ulong local_28;
  undefined4 local_24;
  int local_20;
  
  if (param_2 == 2) {
    local_20 = 0xffffffff;
    local_20 = random_option::CRandomOptionItemHandle::choose_item
                         ((CRandomOptionItemHandle *)(this + 0x211fb4),(ENUM_RARITY *)&param_3,
                          param_4);
    if (local_20 != -1) {
      return local_20;
    }
  }
  iVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::size((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_6 * 0x23550 + param_2 * 0x7110
                            + param_5 * 0x69ff0));
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *)local_60);
    local_4c = local_60[0];
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_48,(int)&local_4c);
    puVar3 = (ulong *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    local_44 = *puVar3;
    local_28 = local_44;
    local_50 = CMTRand::randInt(*(CMTRand **)(this + 0x211fb0),&local_44);
    local_24 = 0xffffffff;
                    /* try { // try from 08535184 to 08535216 has its CatchHandler @ 0853522d */
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::lower_bound((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)local_60,
                  (uint *)(this + param_4 * 0x18 + param_3 * 0x12d8 +
                                  param_6 * 0x23550 + param_2 * 0x7110 + param_5 * 0x69ff0));
    local_4c = local_60[0];
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_40);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c,
                       (_Rb_tree_iterator *)local_40);
    if (cVar1 != '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_3c,(int)&local_4c)
      ;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_4c);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

```

---

## destroy

```asm
// === 08534c9c WongWork::CSecialIMonsterDropItemGenRateTable::destroy  [0x08534c9c-0x8534ccf] ===
 8534c9c:	55                   	push   %ebp
 8534c9d:	89 e5                	mov    %esp,%ebp
 8534c9f:	83 ec 18             	sub    $0x18,%esp
 8534ca2:	8b 45 08             	mov    0x8(%ebp),%eax
 8534ca5:	8b 80 b0 1f 21 00    	mov    0x211fb0(%eax),%eax
 8534cab:	85 c0                	test   %eax,%eax
 8534cad:	74 1e                	je     8534ccd <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable7destroyEv+0x31>
 8534caf:	8b 45 08             	mov    0x8(%ebp),%eax
 8534cb2:	8b 80 b0 1f 21 00    	mov    0x211fb0(%eax),%eax
 8534cb8:	89 04 24             	mov    %eax,(%esp)
 8534cbb:	e8 30 f8 1e 00       	call   87244f0 <_ZdlPv>
 8534cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8534cc3:	c7 80 b0 1f 21 00 00 	movl   $0x0,0x211fb0(%eax)
 8534cca:	00 00 00 
 8534ccd:	c9                   	leave
 8534cce:	c3                   	ret
 8534ccf:	90                   	nop

```

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::destroy @ 0x8534c9c

/* WongWork::CSecialIMonsterDropItemGenRateTable::destroy() */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::destroy(CSecialIMonsterDropItemGenRateTable *this)

{
  if (*(int *)(this + 0x211fb0) != 0) {
    operator_delete(*(void **)(this + 0x211fb0));
    *(undefined4 *)(this + 0x211fb0) = 0;
  }
  return;
}

```

---

## generateTable

```asm
// === 08534cd0 WongWork::CSecialIMonsterDropItemGenRateTable::generateTable  [0x08534cd0-0x8534fcd] ===
 8534cd0:	55                   	push   %ebp
 8534cd1:	89 e5                	mov    %esp,%ebp
 8534cd3:	57                   	push   %edi
 8534cd4:	56                   	push   %esi
 8534cd5:	53                   	push   %ebx
 8534cd6:	83 ec 6c             	sub    $0x6c,%esp
 8534cd9:	e8 bd 74 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8534cde:	8b 40 0c             	mov    0xc(%eax),%eax
 8534ce1:	89 04 24             	mov    %eax,(%esp)
 8534ce4:	e8 4f 51 00 00       	call   8539e38 <_ZNK9CItemList16getItemGradeListEv>
 8534ce9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8534cec:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8534cf3:	e9 bb 02 00 00       	jmp    8534fb3 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x2e3>
 8534cf8:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8534cff:	e9 9c 02 00 00       	jmp    8534fa0 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x2d0>
 8534d04:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8534d0b:	e9 7d 02 00 00       	jmp    8534f8d <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x2bd>
 8534d10:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8534d17:	e9 5e 02 00 00       	jmp    8534f7a <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x2aa>
 8534d1c:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 8534d23:	e9 3c 02 00 00       	jmp    8534f64 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x294>
 8534d28:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8534d2f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8534d32:	01 c0                	add    %eax,%eax
 8534d34:	03 45 0c             	add    0xc(%ebp),%eax
 8534d37:	0f b6 00             	movzbl (%eax),%eax
 8534d3a:	0f b6 c0             	movzbl %al,%eax
 8534d3d:	f7 d8                	neg    %eax
 8534d3f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8534d42:	e9 f9 01 00 00       	jmp    8534f40 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x270>
 8534d47:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8534d4a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8534d4d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534d50:	3d c8 00 00 00       	cmp    $0xc8,%eax
 8534d55:	0f 8f 04 02 00 00    	jg     8534f5f <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x28f>
 8534d5b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8534d5e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8534d61:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534d64:	89 c2                	mov    %eax,%edx
 8534d66:	89 d0                	mov    %edx,%eax
 8534d68:	c1 e0 02             	shl    $0x2,%eax
 8534d6b:	01 d0                	add    %edx,%eax
 8534d6d:	c1 e0 02             	shl    $0x2,%eax
 8534d70:	89 c2                	mov    %eax,%edx
 8534d72:	03 55 c8             	add    -0x38(%ebp),%edx
 8534d75:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8534d78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534d7c:	89 04 24             	mov    %eax,(%esp)
 8534d7f:	e8 62 61 00 00       	call   853aee6 <_ZNK9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8534d84:	83 ec 04             	sub    $0x4,%esp
 8534d87:	e9 6a 01 00 00       	jmp    8534ef6 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x226>
 8534d8c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8534d8f:	89 04 24             	mov    %eax,(%esp)
 8534d92:	e8 57 f9 e5 ff       	call   83946ee <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8534d97:	8b 40 04             	mov    0x4(%eax),%eax
 8534d9a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8534d9d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534da0:	89 04 24             	mov    %eax,(%esp)
 8534da3:	e8 82 92 df ff       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 8534da8:	85 c0                	test   %eax,%eax
 8534daa:	0f 94 c0             	sete   %al
 8534dad:	84 c0                	test   %al,%al
 8534daf:	0f 85 26 01 00 00    	jne    8534edb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x20b>
 8534db5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534db8:	89 04 24             	mov    %eax,(%esp)
 8534dbb:	e8 16 c5 bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8534dc0:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8534dc3:	0f 95 c0             	setne  %al
 8534dc6:	84 c0                	test   %al,%al
 8534dc8:	0f 85 10 01 00 00    	jne    8534ede <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x20e>
 8534dce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534dd1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8534dd5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8534dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534ddc:	8b 45 08             	mov    0x8(%ebp),%eax
 8534ddf:	89 04 24             	mov    %eax,(%esp)
 8534de2:	e8 bf 04 00 00       	call   85352a6 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem>
 8534de7:	83 f0 01             	xor    $0x1,%eax
 8534dea:	84 c0                	test   %al,%al
 8534dec:	0f 85 ef 00 00 00    	jne    8534ee1 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x211>
 8534df2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534df5:	89 04 24             	mov    %eax,(%esp)
 8534df8:	e8 03 50 00 00       	call   8539e00 <_ZN5CItem24isSpecialMonsterDropItemEv>
 8534dfd:	83 f0 01             	xor    $0x1,%eax
 8534e00:	84 c0                	test   %al,%al
 8534e02:	0f 85 dc 00 00 00    	jne    8534ee4 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x214>
 8534e08:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8534e0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534e0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534e12:	89 04 24             	mov    %eax,(%esp)
 8534e15:	e8 f6 4f 00 00       	call   8539e10 <_ZN5CItem27isDropItemDungeonDifficultyEi>
 8534e1a:	83 f0 01             	xor    $0x1,%eax
 8534e1d:	84 c0                	test   %al,%al
 8534e1f:	0f 85 c2 00 00 00    	jne    8534ee7 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x217>
 8534e25:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8534e28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534e2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534e2f:	89 04 24             	mov    %eax,(%esp)
 8534e32:	e8 ed 4f 00 00       	call   8539e24 <_ZN5CItem21isDropItemDungeonTypeEi>
 8534e37:	83 f0 01             	xor    $0x1,%eax
 8534e3a:	84 c0                	test   %al,%al
 8534e3c:	0f 85 a8 00 00 00    	jne    8534eea <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21a>
 8534e42:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534e45:	89 04 24             	mov    %eax,(%esp)
 8534e48:	e8 dd 91 df ff       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 8534e4d:	89 c2                	mov    %eax,%edx
 8534e4f:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8534e52:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534e55:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8534e58:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534e5b:	89 04 24             	mov    %eax,(%esp)
 8534e5e:	e8 e5 bd bd ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8534e63:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8534e66:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8534e69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8534e6d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8534e70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534e74:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8534e77:	89 04 24             	mov    %eax,(%esp)
 8534e7a:	e8 b3 60 00 00       	call   853af32 <_ZNSt4pairIKjiEC1IRjiEEOT_OT0_>
 8534e7f:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8534e82:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8534e85:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8534e88:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8534e8b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8534e8e:	89 d0                	mov    %edx,%eax
 8534e90:	01 c0                	add    %eax,%eax
 8534e92:	01 d0                	add    %edx,%eax
 8534e94:	c1 e0 03             	shl    $0x3,%eax
 8534e97:	69 d7 d8 12 00 00    	imul   $0x12d8,%edi,%edx
 8534e9d:	8d 3c 10             	lea    (%eax,%edx,1),%edi
 8534ea0:	69 d6 50 35 02 00    	imul   $0x23550,%esi,%edx
 8534ea6:	69 c3 10 71 00 00    	imul   $0x7110,%ebx,%eax
 8534eac:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534eaf:	8d 14 07             	lea    (%edi,%eax,1),%edx
 8534eb2:	69 c1 f0 9f 06 00    	imul   $0x69ff0,%ecx,%eax
 8534eb8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534ebb:	89 c2                	mov    %eax,%edx
 8534ebd:	03 55 08             	add    0x8(%ebp),%edx
 8534ec0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8534ec3:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 8534ec6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8534eca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534ece:	89 04 24             	mov    %eax,(%esp)
 8534ed1:	e8 f4 72 d7 ff       	call   82ac1ca <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 8534ed6:	83 ec 04             	sub    $0x4,%esp
 8534ed9:	eb 10                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534edb:	90                   	nop
 8534edc:	eb 0d                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534ede:	90                   	nop
 8534edf:	eb 0a                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534ee1:	90                   	nop
 8534ee2:	eb 07                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534ee4:	90                   	nop
 8534ee5:	eb 04                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534ee7:	90                   	nop
 8534ee8:	eb 01                	jmp    8534eeb <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x21b>
 8534eea:	90                   	nop
 8534eeb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8534eee:	89 04 24             	mov    %eax,(%esp)
 8534ef1:	e8 60 f7 e5 ff       	call   8394656 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 8534ef6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8534ef9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8534efc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534eff:	89 c2                	mov    %eax,%edx
 8534f01:	89 d0                	mov    %edx,%eax
 8534f03:	c1 e0 02             	shl    $0x2,%eax
 8534f06:	01 d0                	add    %edx,%eax
 8534f08:	c1 e0 02             	shl    $0x2,%eax
 8534f0b:	89 c2                	mov    %eax,%edx
 8534f0d:	03 55 c8             	add    -0x38(%ebp),%edx
 8534f10:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8534f13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534f17:	89 04 24             	mov    %eax,(%esp)
 8534f1a:	e8 ed 5f 00 00       	call   853af0c <_ZNK9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8534f1f:	83 ec 04             	sub    $0x4,%esp
 8534f22:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8534f25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534f29:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8534f2c:	89 04 24             	mov    %eax,(%esp)
 8534f2f:	e8 0e f7 e5 ff       	call   8394642 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8534f34:	84 c0                	test   %al,%al
 8534f36:	0f 85 50 fe ff ff    	jne    8534d8c <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0xbc>
 8534f3c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8534f40:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8534f43:	01 c0                	add    %eax,%eax
 8534f45:	03 45 0c             	add    0xc(%ebp),%eax
 8534f48:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8534f4c:	0f b6 c0             	movzbl %al,%eax
 8534f4f:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8534f52:	0f 9f c0             	setg   %al
 8534f55:	84 c0                	test   %al,%al
 8534f57:	0f 85 ea fd ff ff    	jne    8534d47 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x77>
 8534f5d:	eb 01                	jmp    8534f60 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x290>
 8534f5f:	90                   	nop
 8534f60:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8534f64:	81 7d dc c8 00 00 00 	cmpl   $0xc8,-0x24(%ebp)
 8534f6b:	0f 9e c0             	setle  %al
 8534f6e:	84 c0                	test   %al,%al
 8534f70:	0f 85 b2 fd ff ff    	jne    8534d28 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x58>
 8534f76:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8534f7a:	83 7d d8 05          	cmpl   $0x5,-0x28(%ebp)
 8534f7e:	0f 9e c0             	setle  %al
 8534f81:	84 c0                	test   %al,%al
 8534f83:	0f 85 93 fd ff ff    	jne    8534d1c <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x4c>
 8534f89:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8534f8d:	83 7d d4 04          	cmpl   $0x4,-0x2c(%ebp)
 8534f91:	0f 9e c0             	setle  %al
 8534f94:	84 c0                	test   %al,%al
 8534f96:	0f 85 74 fd ff ff    	jne    8534d10 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x40>
 8534f9c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8534fa0:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 8534fa4:	0f 9e c0             	setle  %al
 8534fa7:	84 c0                	test   %al,%al
 8534fa9:	0f 85 55 fd ff ff    	jne    8534d04 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x34>
 8534faf:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8534fb3:	83 7d cc 04          	cmpl   $0x4,-0x34(%ebp)
 8534fb7:	0f 9e c0             	setle  %al
 8534fba:	84 c0                	test   %al,%al
 8534fbc:	0f 85 36 fd ff ff    	jne    8534cf8 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE+0x28>
 8534fc2:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8534fc5:	83 c4 00             	add    $0x0,%esp
 8534fc8:	5b                   	pop    %ebx
 8534fc9:	5e                   	pop    %esi
 8534fca:	5f                   	pop    %edi
 8534fcb:	5d                   	pop    %ebp
 8534fcc:	c3                   	ret
 8534fcd:	90                   	nop

```

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::generateTable @ 0x8534cd0

/* WongWork::CSecialIMonsterDropItemGenRateTable::generateTable(WongWork::stGenItemRange_t*) */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::generateTable
          (CSecialIMonsterDropItemGenRateTable *this,stGenItemRange_t *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_64 [8];
  uint local_5c;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_58 [8];
  pair local_50 [8];
  pair<unsigned_int_const,int> local_48 [8];
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CItem *local_20;
  
  iVar2 = G_CDataManager();
  local_3c = CItemList::getItemGradeList(*(CItemList **)(iVar2 + 0xc));
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
      for (local_30 = 1; local_30 < 5; local_30 = local_30 + 1) {
        for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
          for (local_28 = 1; local_28 < 0xc9; local_28 = local_28 + 1) {
            local_5c = 0;
            for (local_24 = -(uint)(byte)param_1[local_28 * 2];
                (local_24 < (int)(uint)(byte)param_1[local_28 * 2 + 1] &&
                (local_28 + local_24 < 0xc9)); local_24 = local_24 + 1) {
              __gnu_cxx::
              hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
              begin(local_64);
              while( true ) {
                __gnu_cxx::
                hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
                ::end(local_58);
                cVar1 = __gnu_cxx::
                        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                      *)local_64,(_Hashtable_const_iterator *)local_58);
                if (cVar1 == '\0') break;
                iVar2 = __gnu_cxx::
                        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        ::operator->((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                      *)local_64);
                local_20 = *(CItem **)(iVar2 + 4);
                iVar2 = CItem::get_gen_rate(local_20);
                if ((((iVar2 != 0) && (iVar2 = CItem::get_rarity(local_20), iVar2 == local_2c)) &&
                    (cVar1 = _itemTypeVerify(this,local_30,local_20), cVar1 == '\x01')) &&
                   (((cVar1 = CItem::isSpecialMonsterDropItem(local_20), cVar1 == '\x01' &&
                     (cVar1 = CItem::isDropItemDungeonDifficulty(local_20,local_38), cVar1 == '\x01'
                     )) && (cVar1 = CItem::isDropItemDungeonType(local_20,local_34), cVar1 == '\x01'
                           )))) {
                  iVar2 = CItem::get_gen_rate(local_20);
                  local_5c = iVar2 + local_5c;
                  local_40 = CItem::get_index(local_20);
                  std::pair<unsigned_int_const,int>::pair<unsigned_int&,int>
                            (local_48,&local_5c,&local_40);
                  std::
                  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  ::insert(local_50);
                }
                __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                ::operator++((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                              *)local_64);
              }
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## init

```asm
// === 08534c1a WongWork::CSecialIMonsterDropItemGenRateTable::init  [0x08534c1a-0x8534c9b] ===
 8534c1a:	55                   	push   %ebp
 8534c1b:	89 e5                	mov    %esp,%ebp
 8534c1d:	57                   	push   %edi
 8534c1e:	56                   	push   %esi
 8534c1f:	53                   	push   %ebx
 8534c20:	83 ec 2c             	sub    $0x2c,%esp
 8534c23:	8b 45 08             	mov    0x8(%ebp),%eax
 8534c26:	8b 80 b0 1f 21 00    	mov    0x211fb0(%eax),%eax
 8534c2c:	85 c0                	test   %eax,%eax
 8534c2e:	74 11                	je     8534c41 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable4initEv+0x27>
 8534c30:	8b 45 08             	mov    0x8(%ebp),%eax
 8534c33:	8b 80 b0 1f 21 00    	mov    0x211fb0(%eax),%eax
 8534c39:	89 04 24             	mov    %eax,(%esp)
 8534c3c:	e8 af f8 1e 00       	call   87244f0 <_ZdlPv>
 8534c41:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8534c48:	e8 03 8b b4 ff       	call   807d750 <time@plt>
 8534c4d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8534c50:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 8534c53:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 8534c5a:	e8 f1 f7 1e 00       	call   8724450 <_Znwj>
 8534c5f:	89 c3                	mov    %eax,%ebx
 8534c61:	89 d8                	mov    %ebx,%eax
 8534c63:	89 74 24 04          	mov    %esi,0x4(%esp)
 8534c67:	89 04 24             	mov    %eax,(%esp)
 8534c6a:	e8 bb 6d b9 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 8534c6f:	eb 18                	jmp    8534c89 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable4initEv+0x6f>
 8534c71:	89 d6                	mov    %edx,%esi
 8534c73:	89 c7                	mov    %eax,%edi
 8534c75:	89 1c 24             	mov    %ebx,(%esp)
 8534c78:	e8 73 f8 1e 00       	call   87244f0 <_ZdlPv>
 8534c7d:	89 f8                	mov    %edi,%eax
 8534c7f:	89 f2                	mov    %esi,%edx
 8534c81:	89 04 24             	mov    %eax,(%esp)
 8534c84:	e8 c7 ea 5a 00       	call   8ae3750 <_Unwind_Resume>
 8534c89:	89 da                	mov    %ebx,%edx
 8534c8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8534c8e:	89 90 b0 1f 21 00    	mov    %edx,0x211fb0(%eax)
 8534c94:	83 c4 2c             	add    $0x2c,%esp
 8534c97:	5b                   	pop    %ebx
 8534c98:	5e                   	pop    %esi
 8534c99:	5f                   	pop    %edi
 8534c9a:	5d                   	pop    %ebp
 8534c9b:	c3                   	ret

```

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::init @ 0x8534c1a

/* WongWork::CSecialIMonsterDropItemGenRateTable::init() */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::init(CSecialIMonsterDropItemGenRateTable *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  if (*(int *)(this + 0x211fb0) != 0) {
    operator_delete(*(void **)(this + 0x211fb0));
  }
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08534c6a to 08534c6e has its CatchHandler @ 08534c71 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x211fb0) = this_00;
  return;
}

```

