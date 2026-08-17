# WongWork__CWorldDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## generateRandomItem

```asm
// === 085383b8 WongWork::CWorldDrop::generateRandomItem  [0x085383b8-0x853855b] ===
 85383b8:	55                   	push   %ebp
 85383b9:	89 e5                	mov    %esp,%ebp
 85383bb:	83 ec 78             	sub    $0x78,%esp
 85383be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85383c1:	83 c0 34             	add    $0x34,%eax
 85383c4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85383c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85383ca:	83 c0 08             	add    $0x8,%eax
 85383cd:	c7 44 24 08 a0 86 01 	movl   $0x186a0,0x8(%esp)
 85383d4:	00 
 85383d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85383dc:	00 
 85383dd:	89 04 24             	mov    %eax,(%esp)
 85383e0:	e8 bf b0 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85383e5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85383e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85383eb:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85383ef:	3c c7                	cmp    $0xc7,%al
 85383f1:	0f 87 63 01 00 00    	ja     853855a <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1a2>
 85383f7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85383fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538401:	0f b6 00             	movzbl (%eax),%eax
 8538404:	3c 01                	cmp    $0x1,%al
 8538406:	75 24                	jne    853842c <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x74>
 8538408:	8b 45 e0             	mov    -0x20(%ebp),%eax
 853840b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 853840f:	0f b6 d0             	movzbl %al,%edx
 8538412:	89 d0                	mov    %edx,%eax
 8538414:	c1 e0 02             	shl    $0x2,%eax
 8538417:	01 d0                	add    %edx,%eax
 8538419:	c1 e0 02             	shl    $0x2,%eax
 853841c:	05 c0 0f 00 00       	add    $0xfc0,%eax
 8538421:	03 45 08             	add    0x8(%ebp),%eax
 8538424:	83 c0 0c             	add    $0xc,%eax
 8538427:	89 45 e8             	mov    %eax,-0x18(%ebp)
 853842a:	eb 20                	jmp    853844c <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x94>
 853842c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 853842f:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8538433:	0f b6 d0             	movzbl %al,%edx
 8538436:	89 d0                	mov    %edx,%eax
 8538438:	c1 e0 02             	shl    $0x2,%eax
 853843b:	01 d0                	add    %edx,%eax
 853843d:	c1 e0 02             	shl    $0x2,%eax
 8538440:	83 c0 10             	add    $0x10,%eax
 8538443:	03 45 08             	add    0x8(%ebp),%eax
 8538446:	83 c0 08             	add    $0x8,%eax
 8538449:	89 45 e8             	mov    %eax,-0x18(%ebp)
 853844c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 853844f:	8b 10                	mov    (%eax),%edx
 8538451:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538454:	8b 00                	mov    (%eax),%eax
 8538456:	89 d1                	mov    %edx,%ecx
 8538458:	0f af c8             	imul   %eax,%ecx
 853845b:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8538460:	89 c8                	mov    %ecx,%eax
 8538462:	f7 ea                	imul   %edx
 8538464:	c1 fa 05             	sar    $0x5,%edx
 8538467:	89 c8                	mov    %ecx,%eax
 8538469:	c1 f8 1f             	sar    $0x1f,%eax
 853846c:	89 d1                	mov    %edx,%ecx
 853846e:	29 c1                	sub    %eax,%ecx
 8538470:	89 c8                	mov    %ecx,%eax
 8538472:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8538475:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8538478:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 853847b:	0f 8f d9 00 00 00    	jg     853855a <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1a2>
 8538481:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8538484:	8b 40 10             	mov    0x10(%eax),%eax
 8538487:	8b 55 08             	mov    0x8(%ebp),%edx
 853848a:	83 c2 08             	add    $0x8,%edx
 853848d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8538491:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8538498:	00 
 8538499:	89 14 24             	mov    %edx,(%esp)
 853849c:	e8 03 b0 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85384a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85384a4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85384ab:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85384b2:	e9 87 00 00 00       	jmp    853853e <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x186>
 85384b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85384ba:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85384bd:	83 c2 04             	add    $0x4,%edx
 85384c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85384c4:	89 14 24             	mov    %edx,(%esp)
 85384c7:	e8 e6 35 00 00       	call   853bab2 <_ZNSt6vectorI19WorldDropItemChunckSaIS0_EEixEj>
 85384cc:	8b 40 04             	mov    0x4(%eax),%eax
 85384cf:	01 45 f0             	add    %eax,-0x10(%ebp)
 85384d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85384d5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85384d8:	7d 60                	jge    853853a <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x182>
 85384da:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 85384dd:	89 04 24             	mov    %eax,(%esp)
 85384e0:	e8 6f 33 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85384e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85384e8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85384eb:	83 c2 04             	add    $0x4,%edx
 85384ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 85384f2:	89 14 24             	mov    %edx,(%esp)
 85384f5:	e8 b8 35 00 00       	call   853bab2 <_ZNSt6vectorI19WorldDropItemChunckSaIS0_EEixEj>
 85384fa:	8b 00                	mov    (%eax),%eax
 85384fc:	89 45 a5             	mov    %eax,-0x5b(%ebp)
 85384ff:	e8 97 3c b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538504:	8b 40 0c             	mov    0xc(%eax),%eax
 8538507:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 853850e:	00 
 853850f:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8538512:	89 54 24 08          	mov    %edx,0x8(%esp)
 8538516:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 853851d:	00 
 853851e:	89 04 24             	mov    %eax,(%esp)
 8538521:	e8 92 9a fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8538526:	8b 45 10             	mov    0x10(%ebp),%eax
 8538529:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 853852c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538530:	89 04 24             	mov    %eax,(%esp)
 8538533:	e8 2a ed cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8538538:	eb 20                	jmp    853855a <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1a2>
 853853a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 853853e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8538541:	83 c0 04             	add    $0x4,%eax
 8538544:	89 04 24             	mov    %eax,(%esp)
 8538547:	e8 4a 35 00 00       	call   853ba96 <_ZNKSt6vectorI19WorldDropItemChunckSaIS0_EE4sizeEv>
 853854c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 853854f:	0f 9f c0             	setg   %al
 8538552:	84 c0                	test   %al,%al
 8538554:	0f 85 5d ff ff ff    	jne    85384b7 <_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xff>
 853855a:	c9                   	leave
 853855b:	c3                   	ret

```

```c
// WongWork::CWorldDrop::generateRandomItem @ 0x85383b8

/* WongWork::CWorldDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CWorldDrop::generateRandomItem
          (CWorldDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  Inven_Item local_61 [2];
  undefined4 local_5f;
  stGenerateRefData_t *local_24;
  int local_20;
  CWorldDrop *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_24 = param_1 + 0x34;
  local_20 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,100000);
  if ((byte)local_24[1] < 200) {
    if (*local_24 == (stGenerateRefData_t)0x1) {
      iVar2 = (uint)(byte)local_24[1] * 0x14 + 0xfcc;
    }
    else {
      iVar2 = (uint)(byte)local_24[1] * 0x14 + 0x18;
    }
    local_1c = this + iVar2;
    local_18 = (*(int *)local_1c * *(int *)param_1) / 100;
    if (local_20 <= local_18) {
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),1,*(int *)(local_1c + 0x10));
      local_14 = 0;
      local_10 = 0;
      while (iVar2 = std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::size
                               ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                                (local_1c + 4)), (int)local_10 < iVar2) {
        iVar2 = std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::operator[]
                          ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                           (local_1c + 4),local_10);
        local_14 = local_14 + *(int *)(iVar2 + 4);
        if (local_20 < local_14) {
          Inven_Item::Inven_Item(local_61);
          puVar1 = (undefined4 *)
                   std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::operator[]
                             ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                              (local_1c + 4),local_10);
          local_5f = *puVar1;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_61,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_61);
          return;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}

```

---

## loadScript

```asm
// === 0853855c WongWork::CWorldDrop::loadScript  [0x0853855c-0x85385b1] ===
 853855c:	55                   	push   %ebp
 853855d:	89 e5                	mov    %esp,%ebp
 853855f:	83 ec 18             	sub    $0x18,%esp
 8538562:	8b 45 08             	mov    0x8(%ebp),%eax
 8538565:	8d 50 18             	lea    0x18(%eax),%edx
 8538568:	8b 45 0c             	mov    0xc(%ebp),%eax
 853856b:	89 44 24 04          	mov    %eax,0x4(%esp)
 853856f:	89 14 24             	mov    %edx,(%esp)
 8538572:	e8 47 9d 3c 00       	call   89022be <_Z15ImportWorldDropP13WorldDropInfoPKc>
 8538577:	83 f0 01             	xor    $0x1,%eax
 853857a:	84 c0                	test   %al,%al
 853857c:	74 07                	je     8538585 <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_+0x29>
 853857e:	b8 b9 07 00 00       	mov    $0x7b9,%eax
 8538583:	eb 2b                	jmp    85385b0 <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_+0x54>
 8538585:	8b 45 08             	mov    0x8(%ebp),%eax
 8538588:	8d 90 cc 0f 00 00    	lea    0xfcc(%eax),%edx
 853858e:	8b 45 10             	mov    0x10(%ebp),%eax
 8538591:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538595:	89 14 24             	mov    %edx,(%esp)
 8538598:	e8 21 9d 3c 00       	call   89022be <_Z15ImportWorldDropP13WorldDropInfoPKc>
 853859d:	83 f0 01             	xor    $0x1,%eax
 85385a0:	84 c0                	test   %al,%al
 85385a2:	74 07                	je     85385ab <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_+0x4f>
 85385a4:	b8 bb 07 00 00       	mov    $0x7bb,%eax
 85385a9:	eb 05                	jmp    85385b0 <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_+0x54>
 85385ab:	b8 00 00 00 00       	mov    $0x0,%eax
 85385b0:	c9                   	leave
 85385b1:	c3                   	ret

```

```c
// WongWork::CWorldDrop::loadScript @ 0x853855c

/* WongWork::CWorldDrop::loadScript(char const*, char const*) */

undefined4 __thiscall WongWork::CWorldDrop::loadScript(CWorldDrop *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = ImportWorldDrop((WorldDropInfo *)(this + 0x18),param_1);
  if (cVar1 == '\x01') {
    cVar1 = ImportWorldDrop((WorldDropInfo *)(this + 0xfcc),param_2);
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x7bb;
    }
  }
  else {
    uVar2 = 0x7b9;
  }
  return uVar2;
}

```

