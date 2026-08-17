# WongWork__CObjectDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## generateRandomItem

```asm
// === 0853818a WongWork::CObjectDrop::generateRandomItem  [0x0853818a-0x8538233] ===
 853818a:	55                   	push   %ebp
 853818b:	89 e5                	mov    %esp,%ebp
 853818d:	57                   	push   %edi
 853818e:	56                   	push   %esi
 853818f:	53                   	push   %ebx
 8538190:	83 ec 5c             	sub    $0x5c,%esp
 8538193:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8538197:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 853819e:	eb 74                	jmp    8538214 <_ZN8WongWork11CObjectDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x8a>
 85381a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85381a3:	8b 00                	mov    (%eax),%eax
 85381a5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85381a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85381ab:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 85381af:	0f b6 f8             	movzbl %al,%edi
 85381b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85381b5:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 85381b9:	0f b6 f0             	movzbl %al,%esi
 85381bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85381bf:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 85381c3:	0f b6 d8             	movzbl %al,%ebx
 85381c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85381c9:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 85381cd:	0f b6 c8             	movzbl %al,%ecx
 85381d0:	8b 55 08             	mov    0x8(%ebp),%edx
 85381d3:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 85381d6:	89 44 24 24          	mov    %eax,0x24(%esp)
 85381da:	8b 45 10             	mov    0x10(%ebp),%eax
 85381dd:	89 44 24 20          	mov    %eax,0x20(%esp)
 85381e1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85381e4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85381e8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85381ef:	00 
 85381f0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85381f4:	89 74 24 10          	mov    %esi,0x10(%esp)
 85381f8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85381fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8538203:	00 
 8538204:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8538208:	89 14 24             	mov    %edx,(%esp)
 853820b:	e8 c2 dc ff ff       	call   8535ed2 <_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb>
 8538210:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8538214:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538217:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 853821b:	0f be c0             	movsbl %al,%eax
 853821e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8538221:	0f 9f c0             	setg   %al
 8538224:	84 c0                	test   %al,%al
 8538226:	0f 85 74 ff ff ff    	jne    85381a0 <_ZN8WongWork11CObjectDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x16>
 853822c:	83 c4 5c             	add    $0x5c,%esp
 853822f:	5b                   	pop    %ebx
 8538230:	5e                   	pop    %esi
 8538231:	5f                   	pop    %edi
 8538232:	5d                   	pop    %ebp
 8538233:	c3                   	ret

```

```c
// WongWork::CObjectDrop::generateRandomItem @ 0x853818a

/* WongWork::CObjectDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CObjectDrop::generateRandomItem
          (CObjectDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  bool local_21;
  int local_20;
  
  local_21 = false;
  for (local_20 = 0; local_20 < (char)param_1[0x37]; local_20 = local_20 + 1) {
    CMonsterDrop::_generateRandomItem
              ((CMonsterDrop *)this,(uchar)param_1[0x34],'\0',(uchar)param_1[0x34],
               (uchar)param_1[0x35],(uchar)param_1[0x36],0,*(int *)param_1,param_2,&local_21);
  }
  return;
}

```

---

## generateSpecificItem

```asm
// === 08538234 WongWork::CObjectDrop::generateSpecificItem  [0x08538234-0x8538351] ===
 8538234:	55                   	push   %ebp
 8538235:	89 e5                	mov    %esp,%ebp
 8538237:	83 ec 78             	sub    $0x78,%esp
 853823a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8538241:	e9 f2 00 00 00       	jmp    8538338 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x104>
 8538246:	8b 45 08             	mov    0x8(%ebp),%eax
 8538249:	83 c0 08             	add    $0x8,%eax
 853824c:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8538253:	00 
 8538254:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 853825b:	00 
 853825c:	89 04 24             	mov    %eax,(%esp)
 853825f:	e8 40 b2 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8538264:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8538267:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 853826e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538271:	8b 50 34             	mov    0x34(%eax),%edx
 8538274:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8538277:	89 54 24 04          	mov    %edx,0x4(%esp)
 853827b:	89 04 24             	mov    %eax,(%esp)
 853827e:	e8 89 10 eb ff       	call   83e930c <_ZNKSt4listISt4pairIiiESaIS1_EE5beginEv>
 8538283:	83 ec 04             	sub    $0x4,%esp
 8538286:	eb 7a                	jmp    8538302 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xce>
 8538288:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 853828b:	89 04 24             	mov    %eax,(%esp)
 853828e:	e8 f5 37 00 00       	call   853ba88 <_ZNKSt20_List_const_iteratorISt4pairIiiEEptEv>
 8538293:	8b 40 04             	mov    0x4(%eax),%eax
 8538296:	01 45 f4             	add    %eax,-0xc(%ebp)
 8538299:	8b 45 f0             	mov    -0x10(%ebp),%eax
 853829c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 853829f:	7d 56                	jge    85382f7 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xc3>
 85382a1:	8d 45 a7             	lea    -0x59(%ebp),%eax
 85382a4:	89 04 24             	mov    %eax,(%esp)
 85382a7:	e8 a8 35 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85382ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85382af:	89 04 24             	mov    %eax,(%esp)
 85382b2:	e8 d1 37 00 00       	call   853ba88 <_ZNKSt20_List_const_iteratorISt4pairIiiEEptEv>
 85382b7:	8b 00                	mov    (%eax),%eax
 85382b9:	89 45 a9             	mov    %eax,-0x57(%ebp)
 85382bc:	e8 da 3e b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85382c1:	8b 40 0c             	mov    0xc(%eax),%eax
 85382c4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85382cb:	00 
 85382cc:	8d 55 a7             	lea    -0x59(%ebp),%edx
 85382cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85382d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85382da:	00 
 85382db:	89 04 24             	mov    %eax,(%esp)
 85382de:	e8 d5 9c fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 85382e3:	8b 45 10             	mov    0x10(%ebp),%eax
 85382e6:	8d 55 a7             	lea    -0x59(%ebp),%edx
 85382e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85382ed:	89 04 24             	mov    %eax,(%esp)
 85382f0:	e8 6d ef cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 85382f5:	eb 3d                	jmp    8538334 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x100>
 85382f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85382fa:	89 04 24             	mov    %eax,(%esp)
 85382fd:	e8 5a 59 eb ff       	call   83edc5c <_ZNSt20_List_const_iteratorISt4pairIiiEEppEv>
 8538302:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538305:	8b 50 34             	mov    0x34(%eax),%edx
 8538308:	8d 45 e8             	lea    -0x18(%ebp),%eax
 853830b:	89 54 24 04          	mov    %edx,0x4(%esp)
 853830f:	89 04 24             	mov    %eax,(%esp)
 8538312:	e8 1b 10 eb ff       	call   83e9332 <_ZNKSt4listISt4pairIiiESaIS1_EE3endEv>
 8538317:	83 ec 04             	sub    $0x4,%esp
 853831a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 853831d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538321:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8538324:	89 04 24             	mov    %eax,(%esp)
 8538327:	e8 1c 59 eb ff       	call   83edc48 <_ZNKSt20_List_const_iteratorISt4pairIiiEEneERKS2_>
 853832c:	84 c0                	test   %al,%al
 853832e:	0f 85 54 ff ff ff    	jne    8538288 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x54>
 8538334:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8538338:	8b 45 0c             	mov    0xc(%ebp),%eax
 853833b:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 853833f:	0f be c0             	movsbl %al,%eax
 8538342:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8538345:	0f 9f c0             	setg   %al
 8538348:	84 c0                	test   %al,%al
 853834a:	0f 85 f6 fe ff ff    	jne    8538246 <_ZN8WongWork11CObjectDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x12>
 8538350:	c9                   	leave
 8538351:	c3                   	ret

```

```c
// WongWork::CObjectDrop::generateSpecificItem @ 0x8538234

/* WongWork::CObjectDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CObjectDrop::generateSpecificItem
          (CObjectDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  Inven_Item local_5d [2];
  undefined4 local_5b;
  _List_const_iterator<std::pair<int,int>> local_20 [4];
  _List_const_iterator local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  do {
    if ((char)param_1[0x39] <= local_18) {
      return;
    }
    local_14 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
    local_10 = 0;
    std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::list<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      cVar1 = std::_List_const_iterator<std::pair<int,int>>::operator!=(local_20,local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_List_const_iterator<std::pair<int,int>>::operator->(local_20);
      local_10 = local_10 + *(int *)(iVar2 + 4);
      if (local_14 < local_10) {
        Inven_Item::Inven_Item(local_5d);
        puVar3 = (undefined4 *)std::_List_const_iterator<std::pair<int,int>>::operator->(local_20);
        local_5b = *puVar3;
        iVar2 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_5d,1);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_5d);
        break;
      }
      std::_List_const_iterator<std::pair<int,int>>::operator++(local_20);
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## loadScript

```asm
// === 08538352 WongWork::CObjectDrop::loadScript  [0x08538352-0x85383b7] ===
 8538352:	55                   	push   %ebp
 8538353:	89 e5                	mov    %esp,%ebp
 8538355:	83 ec 28             	sub    $0x28,%esp
 8538358:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 853835f:	eb 37                	jmp    8538398 <_ZN8WongWork11CObjectDrop10loadScriptEPKc+0x46>
 8538361:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8538368:	eb 1f                	jmp    8538389 <_ZN8WongWork11CObjectDrop10loadScriptEPKc+0x37>
 853836a:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 853836d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8538370:	8b 45 08             	mov    0x8(%ebp),%eax
 8538373:	c1 e1 02             	shl    $0x2,%ecx
 8538376:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8538379:	8d 4a 28             	lea    0x28(%edx),%ecx
 853837c:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 8538381:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 8538385:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8538389:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 853838d:	0f 9e c0             	setle  %al
 8538390:	84 c0                	test   %al,%al
 8538392:	75 d6                	jne    853836a <_ZN8WongWork11CObjectDrop10loadScriptEPKc+0x18>
 8538394:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8538398:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 853839c:	0f 9e c0             	setle  %al
 853839f:	84 c0                	test   %al,%al
 85383a1:	75 be                	jne    8538361 <_ZN8WongWork11CObjectDrop10loadScriptEPKc+0xf>
 85383a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85383a6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85383a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85383ad:	89 04 24             	mov    %eax,(%esp)
 85383b0:	e8 83 f5 ff ff       	call   8537938 <_ZN8WongWork12CMonsterDrop10loadScriptEPKc>
 85383b5:	c9                   	leave
 85383b6:	c3                   	ret
 85383b7:	90                   	nop

```

```c
// WongWork::CObjectDrop::loadScript @ 0x8538352

/* WongWork::CObjectDrop::loadScript(char const*) */

void __thiscall WongWork::CObjectDrop::loadScript(CObjectDrop *this,char *param_1)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 4 + local_10 + 0x28) * 4 + 8) = 0x3f800000;
    }
  }
  CMonsterDrop::loadScript((CMonsterDrop *)this,param_1);
  return;
}

```

