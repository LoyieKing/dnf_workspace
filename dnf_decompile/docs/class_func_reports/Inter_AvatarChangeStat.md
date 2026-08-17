# Inter_AvatarChangeStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cf6ec Inter_AvatarChangeStat::dispatch_sig  [0x084cf6ec-0x84cf7f9] ===
 84cf6ec:	55                   	push   %ebp
 84cf6ed:	89 e5                	mov    %esp,%ebp
 84cf6ef:	57                   	push   %edi
 84cf6f0:	56                   	push   %esi
 84cf6f1:	53                   	push   %ebx
 84cf6f2:	83 ec 4c             	sub    $0x4c,%esp
 84cf6f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf6f8:	89 04 24             	mov    %eax,(%esp)
 84cf6fb:	e8 8c ac c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf700:	83 f8 02             	cmp    $0x2,%eax
 84cf703:	0f 9e c0             	setle  %al
 84cf706:	84 c0                	test   %al,%al
 84cf708:	74 0a                	je     84cf714 <_ZN22Inter_AvatarChangeStat12dispatch_sigEP5CUserPci+0x28>
 84cf70a:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf70f:	e9 dd 00 00 00       	jmp    84cf7f1 <_ZN22Inter_AvatarChangeStat12dispatch_sigEP5CUserPci+0x105>
 84cf714:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf717:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cf71a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf71d:	8b 00                	mov    (%eax),%eax
 84cf71f:	89 c3                	mov    %eax,%ebx
 84cf721:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf724:	89 04 24             	mov    %eax,(%esp)
 84cf727:	e8 62 ab c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84cf72c:	89 04 24             	mov    %eax,(%esp)
 84cf72f:	e8 42 de c0 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 84cf734:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cf738:	89 04 24             	mov    %eax,(%esp)
 84cf73b:	e8 da a0 e2 ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 84cf740:	83 f8 ff             	cmp    $0xffffffff,%eax
 84cf743:	0f 94 c0             	sete   %al
 84cf746:	84 c0                	test   %al,%al
 84cf748:	74 76                	je     84cf7c0 <_ZN22Inter_AvatarChangeStat12dispatch_sigEP5CUserPci+0xd4>
 84cf74a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf74d:	83 c0 4d             	add    $0x4d,%eax
 84cf750:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84cf753:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf756:	83 c0 2f             	add    $0x2f,%eax
 84cf759:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84cf75c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf75f:	83 c0 12             	add    $0x12,%eax
 84cf762:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84cf765:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf768:	8b 40 0a             	mov    0xa(%eax),%eax
 84cf76b:	89 c7                	mov    %eax,%edi
 84cf76d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf770:	8b 40 0e             	mov    0xe(%eax),%eax
 84cf773:	89 c6                	mov    %eax,%esi
 84cf775:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf778:	8b 00                	mov    (%eax),%eax
 84cf77a:	89 c3                	mov    %eax,%ebx
 84cf77c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf77f:	89 04 24             	mov    %eax,(%esp)
 84cf782:	e8 07 ab c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84cf787:	89 04 24             	mov    %eax,(%esp)
 84cf78a:	e8 dd 14 c4 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 84cf78f:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84cf796:	00 
 84cf797:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84cf79a:	89 54 24 18          	mov    %edx,0x18(%esp)
 84cf79e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84cf7a1:	89 54 24 14          	mov    %edx,0x14(%esp)
 84cf7a5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84cf7a8:	89 54 24 10          	mov    %edx,0x10(%esp)
 84cf7ac:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84cf7b0:	89 74 24 08          	mov    %esi,0x8(%esp)
 84cf7b4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cf7b8:	89 04 24             	mov    %eax,(%esp)
 84cf7bb:	e8 5c 98 e2 ff       	call   82f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>
 84cf7c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cf7c3:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84cf7c7:	0f b6 c0             	movzbl %al,%eax
 84cf7ca:	83 e8 0a             	sub    $0xa,%eax
 84cf7cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84cf7d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cf7d8:	00 
 84cf7d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cf7e0:	00 
 84cf7e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf7e4:	89 04 24             	mov    %eax,(%esp)
 84cf7e7:	e8 6e ce 1a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84cf7ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf7f1:	83 c4 4c             	add    $0x4c,%esp
 84cf7f4:	5b                   	pop    %ebx
 84cf7f5:	5e                   	pop    %esi
 84cf7f6:	5f                   	pop    %edi
 84cf7f7:	5d                   	pop    %ebp
 84cf7f8:	c3                   	ret
 84cf7f9:	90                   	nop

```

```c
// Inter_AvatarChangeStat::dispatch_sig @ 0x84cf6ec

/* Inter_AvatarChangeStat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AvatarChangeStat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  CAvatarItemMgr *pCVar5;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = *(int *)param_3;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
    iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar5,iVar3);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_3 + 10);
      iVar1 = *(int *)(param_3 + 0xe);
      iVar2 = *(int *)param_3;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar4);
      WongWork::CAvatarItemMgr::RegistItem
                (pCVar5,iVar2,iVar1,iVar3,(char *)(param_3 + 0x12),
                 (stAvatarEmblemInfo_t *)(param_3 + 0x2f),
                 (stAvatarExpansionInfo_t *)(param_3 + 0x4d),false);
    }
    CUser::SendUpdateItemList((CUser *)param_2,1,1,*(byte *)(param_3 + 8) - 10);
  }
  return 0;
}

```

