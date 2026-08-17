# Inter_AvatarInsert

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf5a4 Inter_AvatarInsert::dispatch_sig  [0x084cf5a4-0x84cf6eb] ===
 84cf5a4:	55                   	push   %ebp
 84cf5a5:	89 e5                	mov    %esp,%ebp
 84cf5a7:	56                   	push   %esi
 84cf5a8:	53                   	push   %ebx
 84cf5a9:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 84cf5af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf5b2:	89 04 24             	mov    %eax,(%esp)
 84cf5b5:	e8 d2 ad c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf5ba:	83 f8 02             	cmp    $0x2,%eax
 84cf5bd:	0f 9e c0             	setle  %al
 84cf5c0:	84 c0                	test   %al,%al
 84cf5c2:	74 0a                	je     84cf5ce <_ZN18Inter_AvatarInsert12dispatch_sigEP5CUserPci+0x2a>
 84cf5c4:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf5c9:	e9 13 01 00 00       	jmp    84cf6e1 <_ZN18Inter_AvatarInsert12dispatch_sigEP5CUserPci+0x13d>
 84cf5ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf5d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cf5d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cf5d7:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84cf5db:	0f b6 c0             	movzbl %al,%eax
 84cf5de:	8d 58 f6             	lea    -0xa(%eax),%ebx
 84cf5e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf5e4:	89 04 24             	mov    %eax,(%esp)
 84cf5e7:	e8 92 ac c0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84cf5ec:	8d 55 b7             	lea    -0x49(%ebp),%edx
 84cf5ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84cf5f3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84cf5fa:	00 
 84cf5fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf5ff:	89 14 24             	mov    %edx,(%esp)
 84cf602:	e8 11 c3 02 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84cf607:	83 ec 04             	sub    $0x4,%esp
 84cf60a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cf60d:	8b 70 4b             	mov    0x4b(%eax),%esi
 84cf610:	8b 5d be             	mov    -0x42(%ebp),%ebx
 84cf613:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf616:	89 04 24             	mov    %eax,(%esp)
 84cf619:	e8 70 ac c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84cf61e:	89 04 24             	mov    %eax,(%esp)
 84cf621:	e8 46 16 c4 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 84cf626:	89 74 24 08          	mov    %esi,0x8(%esp)
 84cf62a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cf62e:	89 04 24             	mov    %eax,(%esp)
 84cf631:	e8 3c a1 e2 ff       	call   82f9772 <_ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii>
 84cf636:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cf639:	8b 40 4b             	mov    0x4b(%eax),%eax
 84cf63c:	89 45 be             	mov    %eax,-0x42(%ebp)
 84cf63f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cf642:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84cf646:	0f b6 c0             	movzbl %al,%eax
 84cf649:	8d 58 f6             	lea    -0xa(%eax),%ebx
 84cf64c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf64f:	89 04 24             	mov    %eax,(%esp)
 84cf652:	e8 37 ac c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84cf657:	8b 55 b7             	mov    -0x49(%ebp),%edx
 84cf65a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84cf65e:	8b 55 bb             	mov    -0x45(%ebp),%edx
 84cf661:	89 54 24 10          	mov    %edx,0x10(%esp)
 84cf665:	8b 55 bf             	mov    -0x41(%ebp),%edx
 84cf668:	89 54 24 14          	mov    %edx,0x14(%esp)
 84cf66c:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 84cf66f:	89 54 24 18          	mov    %edx,0x18(%esp)
 84cf673:	8b 55 c7             	mov    -0x39(%ebp),%edx
 84cf676:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84cf67a:	8b 55 cb             	mov    -0x35(%ebp),%edx
 84cf67d:	89 54 24 20          	mov    %edx,0x20(%esp)
 84cf681:	8b 55 cf             	mov    -0x31(%ebp),%edx
 84cf684:	89 54 24 24          	mov    %edx,0x24(%esp)
 84cf688:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 84cf68b:	89 54 24 28          	mov    %edx,0x28(%esp)
 84cf68f:	8b 55 d7             	mov    -0x29(%ebp),%edx
 84cf692:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84cf696:	8b 55 db             	mov    -0x25(%ebp),%edx
 84cf699:	89 54 24 30          	mov    %edx,0x30(%esp)
 84cf69d:	8b 55 df             	mov    -0x21(%ebp),%edx
 84cf6a0:	89 54 24 34          	mov    %edx,0x34(%esp)
 84cf6a4:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 84cf6a7:	89 54 24 38          	mov    %edx,0x38(%esp)
 84cf6ab:	8b 55 e7             	mov    -0x19(%ebp),%edx
 84cf6ae:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 84cf6b2:	8b 55 eb             	mov    -0x15(%ebp),%edx
 84cf6b5:	89 54 24 40          	mov    %edx,0x40(%esp)
 84cf6b9:	8b 55 ef             	mov    -0x11(%ebp),%edx
 84cf6bc:	89 54 24 44          	mov    %edx,0x44(%esp)
 84cf6c0:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 84cf6c4:	88 54 24 48          	mov    %dl,0x48(%esp)
 84cf6c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cf6cc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cf6d3:	00 
 84cf6d4:	89 04 24             	mov    %eax,(%esp)
 84cf6d7:	e8 d2 09 03 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 84cf6dc:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf6e1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84cf6e4:	83 c4 00             	add    $0x0,%esp
 84cf6e7:	5b                   	pop    %ebx
 84cf6e8:	5e                   	pop    %esi
 84cf6e9:	5d                   	pop    %ebp
 84cf6ea:	c3                   	ret
 84cf6eb:	90                   	nop

```

```c
// Inter_AvatarInsert::dispatch_sig @ 0x84cf5a4

/* Inter_AvatarInsert::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AvatarInsert::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  CInventory *this;
  CAvatarItemMgr *this_00;
  undefined4 uVar4;
  undefined4 local_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    local_10 = param_3;
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::GetInvenSlot((int)&local_4d,iVar3);
    iVar3 = *(int *)(local_10 + 0x4b);
    iVar2 = CONCAT31((undefined3)uStack_45,uStack_49._3_1_);
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(this);
    WongWork::CAvatarItemMgr::AssignAvatarItemKey(this_00,iVar2,iVar3);
    uStack_49._3_1_ = (undefined1)*(undefined4 *)(local_10 + 0x4b);
    uStack_45._0_3_ = (undefined3)((uint)*(undefined4 *)(local_10 + 0x4b) >> 8);
    bVar1 = *(byte *)(local_10 + 8);
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    CInventory::update_item
              (uVar4,2,bVar1 - 10,local_4d,uStack_49,uStack_45,local_41,local_3d,local_39,local_35,
               local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11);
  }
  return 0;
}

```

