# DisPatcher_DebugCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 29

---

## _debugCommandAddAvatar

```asm
// === 0858f7b6 DisPatcher_DebugCommand::_debugCommandAddAvatar  [0x0858f7b6-0x858fab9] ===
 858f7b6:	55                   	push   %ebp
 858f7b7:	89 e5                	mov    %esp,%ebp
 858f7b9:	57                   	push   %edi
 858f7ba:	56                   	push   %esi
 858f7bb:	53                   	push   %ebx
 858f7bc:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 858f7c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f7c5:	89 04 24             	mov    %eax,(%esp)
 858f7c8:	e8 cf 60 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858f7cd:	83 f0 01             	xor    $0x1,%eax
 858f7d0:	84 c0                	test   %al,%al
 858f7d2:	74 0a                	je     858f7de <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x28>
 858f7d4:	b8 00 00 00 00       	mov    $0x0,%eax
 858f7d9:	e9 d0 02 00 00       	jmp    858faae <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2f8>
 858f7de:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 858f7e5:	00 
 858f7e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f7ed:	00 
 858f7ee:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 858f7f1:	89 04 24             	mov    %eax,(%esp)
 858f7f4:	e8 c7 e4 ae ff       	call   807dcc0 <memset@plt>
 858f7f9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 858f800:	e8 4b df ae ff       	call   807d750 <time@plt>
 858f805:	89 45 b0             	mov    %eax,-0x50(%ebp)
 858f808:	8d 45 84             	lea    -0x7c(%ebp),%eax
 858f80b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f80f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 858f812:	89 04 24             	mov    %eax,(%esp)
 858f815:	e8 46 eb ae ff       	call   807e360 <localtime_r@plt>
 858f81a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 858f81d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f820:	89 04 24             	mov    %eax,(%esp)
 858f823:	e8 26 c4 b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 858f828:	89 c6                	mov    %eax,%esi
 858f82a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858f82d:	8b 78 0c             	mov    0xc(%eax),%edi
 858f830:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858f833:	8b 40 10             	mov    0x10(%eax),%eax
 858f836:	83 c0 01             	add    $0x1,%eax
 858f839:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 858f83f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858f842:	8b 40 14             	mov    0x14(%eax),%eax
 858f845:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 858f84b:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 858f850:	89 c8                	mov    %ecx,%eax
 858f852:	f7 ea                	imul   %edx
 858f854:	c1 fa 07             	sar    $0x7,%edx
 858f857:	89 c8                	mov    %ecx,%eax
 858f859:	c1 f8 1f             	sar    $0x1f,%eax
 858f85c:	89 d3                	mov    %edx,%ebx
 858f85e:	29 c3                	sub    %eax,%ebx
 858f860:	69 c3 d0 07 00 00    	imul   $0x7d0,%ebx,%eax
 858f866:	89 cb                	mov    %ecx,%ebx
 858f868:	29 c3                	sub    %eax,%ebx
 858f86a:	e8 12 c9 b3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 858f86f:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 858f875:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 858f879:	89 7c 24 18          	mov    %edi,0x18(%esp)
 858f87d:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 858f883:	89 54 24 14          	mov    %edx,0x14(%esp)
 858f887:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 858f88b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858f88f:	c7 44 24 08 66 e7 ca 	movl   $0x8cae766,0x8(%esp)
 858f896:	08 
 858f897:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 858f89e:	00 
 858f89f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 858f8a2:	89 04 24             	mov    %eax,(%esp)
 858f8a5:	e8 72 cf ff ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 858f8aa:	8b 45 10             	mov    0x10(%ebp),%eax
 858f8ad:	8b 58 0e             	mov    0xe(%eax),%ebx
 858f8b0:	e8 e6 c8 b3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 858f8b5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f8b9:	89 04 24             	mov    %eax,(%esp)
 858f8bc:	e8 71 01 dd ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 858f8c1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 858f8c4:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 858f8c8:	74 1d                	je     858f8e7 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x131>
 858f8ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 858f8cd:	8b 00                	mov    (%eax),%eax
 858f8cf:	83 c0 10             	add    $0x10,%eax
 858f8d2:	8b 10                	mov    (%eax),%edx
 858f8d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 858f8d7:	89 04 24             	mov    %eax,(%esp)
 858f8da:	ff d2                	call   *%edx
 858f8dc:	84 c0                	test   %al,%al
 858f8de:	74 07                	je     858f8e7 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x131>
 858f8e0:	b8 01 00 00 00       	mov    $0x1,%eax
 858f8e5:	eb 05                	jmp    858f8ec <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x136>
 858f8e7:	b8 00 00 00 00       	mov    $0x0,%eax
 858f8ec:	84 c0                	test   %al,%al
 858f8ee:	0f 84 b5 01 00 00    	je     858faa9 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2f3>
 858f8f4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 858f8fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 858f8fe:	89 04 24             	mov    %eax,(%esp)
 858f901:	e8 5a 13 b8 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 858f906:	89 c3                	mov    %eax,%ebx
 858f908:	8b 45 10             	mov    0x10(%ebp),%eax
 858f90b:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 858f90f:	0f b6 f0             	movzbl %al,%esi
 858f912:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f919:	00 
 858f91a:	c7 44 24 08 31 02 00 	movl   $0x231,0x8(%esp)
 858f921:	00 
 858f922:	c7 44 24 04 20 81 cb 	movl   $0x8cb8120,0x4(%esp)
 858f929:	08 
 858f92a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 858f92d:	89 04 24             	mov    %eax,(%esp)
 858f930:	e8 e3 fd fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858f935:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 858f939:	89 74 24 08          	mov    %esi,0x8(%esp)
 858f93d:	c7 44 24 04 80 e7 ca 	movl   $0x8cae780,0x4(%esp)
 858f944:	08 
 858f945:	8d 45 cc             	lea    -0x34(%ebp),%eax
 858f948:	89 04 24             	mov    %eax,(%esp)
 858f94b:	e8 38 fe fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858f950:	8b 45 10             	mov    0x10(%ebp),%eax
 858f953:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 858f957:	84 c0                	test   %al,%al
 858f959:	0f 85 85 00 00 00    	jne    858f9e4 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x22e>
 858f95f:	8b 45 10             	mov    0x10(%ebp),%eax
 858f962:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 858f966:	0f b7 c0             	movzwl %ax,%eax
 858f969:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 858f96f:	8b 45 10             	mov    0x10(%ebp),%eax
 858f972:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 858f976:	0f be f8             	movsbl %al,%edi
 858f979:	8b 45 e0             	mov    -0x20(%ebp),%eax
 858f97c:	89 04 24             	mov    %eax,(%esp)
 858f97f:	e8 dc 12 b8 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 858f984:	89 c3                	mov    %eax,%ebx
 858f986:	8b 45 10             	mov    0x10(%ebp),%eax
 858f989:	8b 70 0e             	mov    0xe(%eax),%esi
 858f98c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f98f:	89 04 24             	mov    %eax,(%esp)
 858f992:	e8 f7 a8 b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 858f997:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 858f99d:	89 54 24 24          	mov    %edx,0x24(%esp)
 858f9a1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 858f9a8:	00 
 858f9a9:	c7 44 24 1c 09 00 00 	movl   $0x9,0x1c(%esp)
 858f9b0:	00 
 858f9b1:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 858f9b4:	89 54 24 18          	mov    %edx,0x18(%esp)
 858f9b8:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 858f9bf:	ff 
 858f9c0:	89 7c 24 10          	mov    %edi,0x10(%esp)
 858f9c4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f9cb:	00 
 858f9cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858f9d0:	89 74 24 04          	mov    %esi,0x4(%esp)
 858f9d4:	89 04 24             	mov    %eax,(%esp)
 858f9d7:	e8 c2 a1 f7 ff       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 858f9dc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858f9df:	e9 8f 00 00 00       	jmp    858fa73 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2bd>
 858f9e4:	8b 45 10             	mov    0x10(%ebp),%eax
 858f9e7:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 858f9eb:	3c 63                	cmp    $0x63,%al
 858f9ed:	75 07                	jne    858f9f6 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x240>
 858f9ef:	8b 45 10             	mov    0x10(%ebp),%eax
 858f9f2:	c6 40 13 00          	movb   $0x0,0x13(%eax)
 858f9f6:	8b 45 10             	mov    0x10(%ebp),%eax
 858f9f9:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 858f9fd:	0f b7 c0             	movzwl %ax,%eax
 858fa00:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 858fa06:	8b 45 10             	mov    0x10(%ebp),%eax
 858fa09:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 858fa0d:	0f be f8             	movsbl %al,%edi
 858fa10:	8b 45 10             	mov    0x10(%ebp),%eax
 858fa13:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 858fa17:	0f b6 f0             	movzbl %al,%esi
 858fa1a:	8b 45 10             	mov    0x10(%ebp),%eax
 858fa1d:	8b 58 0e             	mov    0xe(%eax),%ebx
 858fa20:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fa23:	89 04 24             	mov    %eax,(%esp)
 858fa26:	e8 63 a8 b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 858fa2b:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 858fa31:	89 54 24 24          	mov    %edx,0x24(%esp)
 858fa35:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 858fa3c:	00 
 858fa3d:	c7 44 24 1c 09 00 00 	movl   $0x9,0x1c(%esp)
 858fa44:	00 
 858fa45:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 858fa48:	89 54 24 18          	mov    %edx,0x18(%esp)
 858fa4c:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 858fa53:	ff 
 858fa54:	89 7c 24 10          	mov    %edi,0x10(%esp)
 858fa58:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858fa5f:	00 
 858fa60:	89 74 24 08          	mov    %esi,0x8(%esp)
 858fa64:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858fa68:	89 04 24             	mov    %eax,(%esp)
 858fa6b:	e8 2e a1 f7 ff       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 858fa70:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858fa73:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 858fa77:	74 29                	je     858faa2 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2ec>
 858fa79:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858fa7c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858fa80:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858fa87:	00 
 858fa88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858fa8f:	00 
 858fa90:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fa93:	89 04 24             	mov    %eax,(%esp)
 858fa96:	e8 bf cb 0e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 858fa9b:	b8 01 00 00 00       	mov    $0x1,%eax
 858faa0:	eb 0c                	jmp    858faae <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2f8>
 858faa2:	b8 00 00 00 00       	mov    $0x0,%eax
 858faa7:	eb 05                	jmp    858faae <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND+0x2f8>
 858faa9:	b8 00 00 00 00       	mov    $0x0,%eax
 858faae:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 858fab4:	5b                   	pop    %ebx
 858fab5:	5e                   	pop    %esi
 858fab6:	5f                   	pop    %edi
 858fab7:	5d                   	pop    %ebp
 858fab8:	c3                   	ret
 858fab9:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandAddAvatar @ 0x858f7b6

/* DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandAddAvatar
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  MSG_DEBUG_COMMAND MVar1;
  MSG_DEBUG_COMMAND MVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  CDataManager *this_00;
  undefined4 uVar11;
  CInventory *pCVar12;
  tm local_80;
  time_t local_54;
  char local_50 [24];
  cMyTrace local_38 [16];
  tm *local_28;
  CItem *local_24;
  int local_20;
  
  cVar8 = CUser::isGMUser(param_1);
  if (cVar8 == '\x01') {
    memset(local_50,0,0x18);
    local_54 = time((time_t *)0x0);
    local_28 = localtime_r(&local_54,&local_80);
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar4 = local_28->tm_mday;
    iVar5 = local_28->tm_mon;
    iVar6 = local_28->tm_year;
    iVar10 = G_CEnvironment();
    OS_API::snprintf(local_50,0x14,"D%02d%02d%02d%02d%010d",*(undefined4 *)(iVar10 + 0x1b0),
                     (iVar6 + 0x76c) % 2000,iVar5 + 1,iVar4,uVar9);
    iVar4 = *(int *)(param_2 + 0xe);
    this_00 = (CDataManager *)G_CDataManager();
    local_24 = (CItem *)CDataManager::find_item(this_00,iVar4);
    if ((local_24 == (CItem *)0x0) ||
       (cVar8 = (**(code **)(*(int *)local_24 + 0x10))(local_24), cVar8 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      local_20 = 0;
      uVar9 = CItem::getUsablePeriod(local_24);
      MVar1 = param_2[0x13];
      cMyTrace::cMyTrace(local_38,
                         "bool DisPatcher_DebugCommand::_debugCommandAddAvatar(CUser*, MSG_DEBUG_COMMAND&)"
                         ,0x231,0);
      cMyTrace::operator()
                (local_38,
                 "[DEBUG_COMMAND_ADD_AVATAR] Param.Sub.AddAvatar.period : %d, item->getUsablePeriod() : %d"
                 ,(uint)(byte)MVar1,uVar9);
      if (param_2[0x13] == (MSG_DEBUG_COMMAND)0x0) {
        uVar3 = *(undefined2 *)(param_2 + 0x14);
        MVar1 = param_2[0x12];
        uVar11 = CItem::getUsablePeriod(local_24);
        uVar9 = *(undefined4 *)(param_2 + 0xe);
        pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_20 = CInventory::AddAvatarItem
                             (pCVar12,uVar9,uVar11,0,(int)(char)MVar1,0xffffffff,local_50,9,0,uVar3)
        ;
      }
      else {
        if (param_2[0x13] == (MSG_DEBUG_COMMAND)0x63) {
          param_2[0x13] = (MSG_DEBUG_COMMAND)0x0;
        }
        uVar3 = *(undefined2 *)(param_2 + 0x14);
        MVar1 = param_2[0x12];
        MVar2 = param_2[0x13];
        uVar9 = *(undefined4 *)(param_2 + 0xe);
        pCVar12 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        local_20 = CInventory::AddAvatarItem
                             (pCVar12,uVar9,MVar2,0,(int)(char)MVar1,0xffffffff,local_50,9,0,uVar3);
      }
      if (local_20 == -1) {
        uVar9 = 0;
      }
      else {
        CUser::SendUpdateItemList(param_1,1,1,local_20);
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
    return uVar9;
  }
  return 0;
}

```

---

## _debugCommandAddItem

```asm
// === 0858ec9c DisPatcher_DebugCommand::_debugCommandAddItem  [0x0858ec9c-0x858ee53] ===
 858ec9c:	55                   	push   %ebp
 858ec9d:	89 e5                	mov    %esp,%ebp
 858ec9f:	56                   	push   %esi
 858eca0:	53                   	push   %ebx
 858eca1:	83 ec 40             	sub    $0x40,%esp
 858eca4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eca7:	89 04 24             	mov    %eax,(%esp)
 858ecaa:	e8 ed 6b bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858ecaf:	83 f0 01             	xor    $0x1,%eax
 858ecb2:	84 c0                	test   %al,%al
 858ecb4:	74 0a                	je     858ecc0 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x24>
 858ecb6:	b8 00 00 00 00       	mov    $0x0,%eax
 858ecbb:	e9 8c 01 00 00       	jmp    858ee4c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x1b0>
 858ecc0:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 858ecc4:	75 31                	jne    858ecf7 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x5b>
 858ecc6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 858eccd:	e8 cc cf b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 858ecd2:	8d 98 80 51 01 00    	lea    0x15180(%eax),%ebx
 858ecd8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 858ecdf:	e8 ba cf b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 858ece4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858ece8:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ecec:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ecef:	89 04 24             	mov    %eax,(%esp)
 858ecf2:	e8 07 16 12 00       	call   86b02fe <_ZN8WongWork14CHandlePremium19handleSetUserPCRoomEP5CUserll>
 858ecf7:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 858ecfb:	7f 07                	jg     858ed04 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x68>
 858ecfd:	c7 45 14 64 00 00 00 	movl   $0x64,0x14(%ebp)
 858ed04:	8b 5d 10             	mov    0x10(%ebp),%ebx
 858ed07:	e8 8f d4 b3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 858ed0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858ed10:	89 04 24             	mov    %eax,(%esp)
 858ed13:	e8 1a 0d dd ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 858ed18:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858ed1b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 858ed1f:	74 52                	je     858ed73 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0xd7>
 858ed21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ed24:	89 04 24             	mov    %eax,(%esp)
 858ed27:	e8 ce 25 b6 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 858ed2c:	84 c0                	test   %al,%al
 858ed2e:	74 23                	je     858ed53 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0xb7>
 858ed30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ed33:	89 04 24             	mov    %eax,(%esp)
 858ed36:	e8 c1 dc c9 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 858ed3b:	3b 45 14             	cmp    0x14(%ebp),%eax
 858ed3e:	0f 9c c0             	setl   %al
 858ed41:	84 c0                	test   %al,%al
 858ed43:	74 0e                	je     858ed53 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0xb7>
 858ed45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ed48:	89 04 24             	mov    %eax,(%esp)
 858ed4b:	e8 ac dc c9 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 858ed50:	89 45 14             	mov    %eax,0x14(%ebp)
 858ed53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ed56:	8b 00                	mov    (%eax),%eax
 858ed58:	83 c0 10             	add    $0x10,%eax
 858ed5b:	8b 10                	mov    (%eax),%edx
 858ed5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ed60:	89 04 24             	mov    %eax,(%esp)
 858ed63:	ff d2                	call   *%edx
 858ed65:	84 c0                	test   %al,%al
 858ed67:	74 0a                	je     858ed73 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0xd7>
 858ed69:	b8 00 00 00 00       	mov    $0x0,%eax
 858ed6e:	e9 d9 00 00 00       	jmp    858ee4c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x1b0>
 858ed73:	8b 45 10             	mov    0x10(%ebp),%eax
 858ed76:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 858ed7d:	00 
 858ed7e:	8d 55 dc             	lea    -0x24(%ebp),%edx
 858ed81:	89 54 24 10          	mov    %edx,0x10(%esp)
 858ed85:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 858ed8c:	00 
 858ed8d:	8b 55 14             	mov    0x14(%ebp),%edx
 858ed90:	89 54 24 08          	mov    %edx,0x8(%esp)
 858ed94:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ed98:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ed9b:	89 04 24             	mov    %eax,(%esp)
 858ed9e:	e8 31 c9 0e 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 858eda3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858eda6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858edaa:	0f 88 97 00 00 00    	js     858ee47 <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x1ab>
 858edb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858edb3:	89 04 24             	mov    %eax,(%esp)
 858edb6:	e8 6d 22 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858edbb:	89 c6                	mov    %eax,%esi
 858edbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 858edc0:	89 04 24             	mov    %eax,(%esp)
 858edc3:	e8 a6 b5 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858edc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858edcf:	00 
 858edd0:	89 04 24             	mov    %eax,(%esp)
 858edd3:	e8 73 a2 b7 ff       	call   810904b <_Z14NumberToStringji>
 858edd8:	89 c3                	mov    %eax,%ebx
 858edda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858ede1:	00 
 858ede2:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 858ede9:	00 
 858edea:	c7 44 24 04 80 82 cb 	movl   $0x8cb8280,0x4(%esp)
 858edf1:	08 
 858edf2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858edf5:	89 04 24             	mov    %eax,(%esp)
 858edf8:	e8 1b 09 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858edfd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ee00:	89 44 24 10          	mov    %eax,0x10(%esp)
 858ee04:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858ee08:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858ee0c:	c7 44 24 04 f5 e6 ca 	movl   $0x8cae6f5,0x4(%esp)
 858ee13:	08 
 858ee14:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858ee17:	89 04 24             	mov    %eax,(%esp)
 858ee1a:	e8 69 09 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858ee1f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 858ee22:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858ee25:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858ee29:	89 44 24 08          	mov    %eax,0x8(%esp)
 858ee2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858ee34:	00 
 858ee35:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ee38:	89 04 24             	mov    %eax,(%esp)
 858ee3b:	e8 1a d8 0e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 858ee40:	b8 01 00 00 00       	mov    $0x1,%eax
 858ee45:	eb 05                	jmp    858ee4c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi+0x1b0>
 858ee47:	b8 00 00 00 00       	mov    $0x0,%eax
 858ee4c:	83 c4 40             	add    $0x40,%esp
 858ee4f:	5b                   	pop    %ebx
 858ee50:	5e                   	pop    %esi
 858ee51:	5d                   	pop    %ebp
 858ee52:	c3                   	ret
 858ee53:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandAddItem @ 0x858ec9c

/* DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, unsigned long, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandAddItem
          (DisPatcher_DebugCommand *this,CUser *param_1,ulong param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  CDataManager *this_00;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_28;
  cMyTrace local_24 [16];
  CStackableItem *local_14;
  int local_10;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    if (param_2 == 0xffffffff) {
      iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      WongWork::CHandlePremium::handleSetUserPCRoom(param_1,lVar4,iVar3 + 0x15180);
    }
    if (param_3 < 1) {
      param_3 = 100;
    }
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (CStackableItem *)CDataManager::find_item(this_00,param_2);
    if (local_14 != (CStackableItem *)0x0) {
      cVar1 = CItem::is_stackable((CItem *)local_14);
      if ((cVar1 != '\0') && (iVar3 = CStackableItem::getStackableLimit(local_14), iVar3 < param_3))
      {
        param_3 = CStackableItem::getStackableLimit(local_14);
      }
      cVar1 = (**(code **)(*(int *)local_14 + 0x10))(local_14);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    local_10 = CUser::AddItem(param_1,param_2,param_3,6,&local_28,0);
    if (local_10 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar5 = CUser::get_acc_id(param_1);
      uVar6 = NumberToString(uVar5,0);
      cMyTrace::cMyTrace(local_24,
                         "bool DisPatcher_DebugCommand::_debugCommandAddItem(CUser*, itemIndexOnlyServer_t, int)"
                         ,0xf4,0);
      cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Add Item(%d).",uVar6,uVar2,local_10);
      CUser::SendUpdateItemList(param_1,1,local_28,local_10);
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

## _debugCommandCargoCapacity

```asm
// === 0858fdc8 DisPatcher_DebugCommand::_debugCommandCargoCapacity  [0x0858fdc8-0x858fe61] ===
 858fdc8:	55                   	push   %ebp
 858fdc9:	89 e5                	mov    %esp,%ebp
 858fdcb:	56                   	push   %esi
 858fdcc:	53                   	push   %ebx
 858fdcd:	83 ec 30             	sub    $0x30,%esp
 858fdd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fdd3:	89 04 24             	mov    %eax,(%esp)
 858fdd6:	e8 c1 5a bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858fddb:	83 f0 01             	xor    $0x1,%eax
 858fdde:	84 c0                	test   %al,%al
 858fde0:	74 07                	je     858fde9 <_ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND+0x21>
 858fde2:	b8 00 00 00 00       	mov    $0x0,%eax
 858fde7:	eb 72                	jmp    858fe5b <_ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND+0x93>
 858fde9:	8d 45 da             	lea    -0x26(%ebp),%eax
 858fdec:	89 04 24             	mov    %eax,(%esp)
 858fdef:	e8 f6 c1 c9 ff       	call   822bfea <_ZN32Packet_Guild_Guild_Cargo_UpgradeC1Ev>
 858fdf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fdf7:	89 04 24             	mov    %eax,(%esp)
 858fdfa:	e8 6d f6 c9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 858fdff:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858fe02:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fe05:	89 04 24             	mov    %eax,(%esp)
 858fe08:	e8 41 be b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 858fe0d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 858fe10:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fe13:	89 04 24             	mov    %eax,(%esp)
 858fe16:	e8 d1 03 ca ff       	call   82301ec <_ZN5CUser21GetGuildCargoCapacityEv>
 858fe1b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 858fe1e:	8b 45 10             	mov    0x10(%ebp),%eax
 858fe21:	8b 40 0e             	mov    0xe(%eax),%eax
 858fe24:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858fe27:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 858fe2b:	0f b7 f0             	movzwl %ax,%esi
 858fe2e:	8d 5d da             	lea    -0x26(%ebp),%ebx
 858fe31:	a1 2c be 40 09       	mov    0x940be2c,%eax
 858fe36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858fe3d:	00 
 858fe3e:	89 04 24             	mov    %eax,(%esp)
 858fe41:	e8 72 d5 b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 858fe46:	89 74 24 08          	mov    %esi,0x8(%esp)
 858fe4a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858fe4e:	89 04 24             	mov    %eax,(%esp)
 858fe51:	e8 78 de ed ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 858fe56:	b8 01 00 00 00       	mov    $0x1,%eax
 858fe5b:	83 c4 30             	add    $0x30,%esp
 858fe5e:	5b                   	pop    %ebx
 858fe5f:	5e                   	pop    %esi
 858fe60:	5d                   	pop    %ebp
 858fe61:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandCargoCapacity @ 0x858fdc8

/* DisPatcher_DebugCommand::_debugCommandCargoCapacity(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandCargoCapacity
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Guild_Cargo_Upgrade local_2a [2];
  ushort local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    Packet_Guild_Guild_Cargo_Upgrade::Packet_Guild_Guild_Cargo_Upgrade(local_2a);
    local_20 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    local_1c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_18 = CUser::GetGuildCargoCapacity(param_1);
    local_14 = *(undefined4 *)(param_2 + 0xe);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendTcpPacket(this_00,(char *)local_2a,(uint)local_28);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandClearAvtInven

```asm
// === 08590254 DisPatcher_DebugCommand::_debugCommandClearAvtInven  [0x08590254-0x859040d] ===
 8590254:	55                   	push   %ebp
 8590255:	89 e5                	mov    %esp,%ebp
 8590257:	53                   	push   %ebx
 8590258:	83 ec 34             	sub    $0x34,%esp
 859025b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8590262:	e9 20 01 00 00       	jmp    8590387 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x133>
 8590267:	8b 45 0c             	mov    0xc(%ebp),%eax
 859026a:	89 04 24             	mov    %eax,(%esp)
 859026d:	e8 0c a0 b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8590272:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 8590278:	8b 45 f4             	mov    -0xc(%ebp),%eax
 859027b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 859027e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8590281:	8b 40 02             	mov    0x2(%eax),%eax
 8590284:	85 c0                	test   %eax,%eax
 8590286:	0f 95 c0             	setne  %al
 8590289:	84 c0                	test   %al,%al
 859028b:	0f 84 f2 00 00 00    	je     8590383 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x12f>
 8590291:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590294:	89 04 24             	mov    %eax,(%esp)
 8590297:	e8 e2 9f b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 859029c:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 85902a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85902a5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 85902a8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85902ab:	8b 40 07             	mov    0x7(%eax),%eax
 85902ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85902b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85902b4:	89 04 24             	mov    %eax,(%esp)
 85902b7:	e8 d2 9f b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85902bc:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85902c3:	00 
 85902c4:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 85902cb:	00 
 85902cc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85902d3:	00 
 85902d4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85902d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85902db:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85902e2:	00 
 85902e3:	89 04 24             	mov    %eax,(%esp)
 85902e6:	e8 21 3d f7 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85902eb:	83 f0 01             	xor    $0x1,%eax
 85902ee:	84 c0                	test   %al,%al
 85902f0:	74 55                	je     8590347 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0xf3>
 85902f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85902f5:	89 04 24             	mov    %eax,(%esp)
 85902f8:	e8 71 a0 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85902fd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8590304:	00 
 8590305:	89 04 24             	mov    %eax,(%esp)
 8590308:	e8 3e 8d b7 ff       	call   810904b <_Z14NumberToStringji>
 859030d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8590311:	c7 44 24 10 74 e8 ca 	movl   $0x8cae874,0x10(%esp)
 8590318:	08 
 8590319:	c7 44 24 0c 0c 04 00 	movl   $0x40c,0xc(%esp)
 8590320:	00 
 8590321:	c7 44 24 08 60 80 cb 	movl   $0x8cb8060,0x8(%esp)
 8590328:	08 
 8590329:	c7 44 24 04 54 e8 ca 	movl   $0x8cae854,0x4(%esp)
 8590330:	08 
 8590331:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8590338:	e8 cd 38 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 859033d:	b8 00 00 00 00       	mov    $0x0,%eax
 8590342:	e9 c0 00 00 00       	jmp    8590407 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x1b3>
 8590347:	8b 45 f4             	mov    -0xc(%ebp),%eax
 859034a:	8d 58 0a             	lea    0xa(%eax),%ebx
 859034d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590350:	89 04 24             	mov    %eax,(%esp)
 8590353:	e8 36 9f b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8590358:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 859035f:	00 
 8590360:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8590364:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 859036b:	00 
 859036c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 859036f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8590373:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 859037a:	00 
 859037b:	89 04 24             	mov    %eax,(%esp)
 859037e:	e8 ab 88 f7 ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 8590383:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8590387:	83 7d f4 68          	cmpl   $0x68,-0xc(%ebp)
 859038b:	0f 9e c0             	setle  %al
 859038e:	84 c0                	test   %al,%al
 8590390:	0f 85 d1 fe ff ff    	jne    8590267 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x13>
 8590396:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 859039d:	00 
 859039e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85903a1:	89 04 24             	mov    %eax,(%esp)
 85903a4:	e8 c3 d7 0c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85903a9:	83 f0 01             	xor    $0x1,%eax
 85903ac:	84 c0                	test   %al,%al
 85903ae:	74 52                	je     8590402 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x1ae>
 85903b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85903b3:	89 04 24             	mov    %eax,(%esp)
 85903b6:	e8 b3 9f b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85903bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85903c2:	00 
 85903c3:	89 04 24             	mov    %eax,(%esp)
 85903c6:	e8 80 8c b7 ff       	call   810904b <_Z14NumberToStringji>
 85903cb:	89 44 24 14          	mov    %eax,0x14(%esp)
 85903cf:	c7 44 24 10 e4 e8 ca 	movl   $0x8cae8e4,0x10(%esp)
 85903d6:	08 
 85903d7:	c7 44 24 0c 17 04 00 	movl   $0x417,0xc(%esp)
 85903de:	00 
 85903df:	c7 44 24 08 60 80 cb 	movl   $0x8cb8060,0x8(%esp)
 85903e6:	08 
 85903e7:	c7 44 24 04 54 e8 ca 	movl   $0x8cae854,0x4(%esp)
 85903ee:	08 
 85903ef:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85903f6:	e8 0f 38 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85903fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8590400:	eb 05                	jmp    8590407 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND+0x1b3>
 8590402:	b8 01 00 00 00       	mov    $0x1,%eax
 8590407:	83 c4 34             	add    $0x34,%esp
 859040a:	5b                   	pop    %ebx
 859040b:	5d                   	pop    %ebp
 859040c:	c3                   	ret
 859040d:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandClearAvtInven @ 0x8590254

/* DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  
  local_10 = 0;
  do {
    if (0x68 < local_10) {
      cVar1 = CUser::send_itemspace((CUser *)param_2,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"DisPatcher_DebugCommand_First.h",
                   "bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)"
                   ,0x417,
                   "DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
                   ,uVar5);
      }
      return cVar1 == '\x01';
    }
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    if (*(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 2) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      cVar1 = CInventory::delete_item(pCVar3,2,local_10,1,3,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"DisPatcher_DebugCommand_First.h",
                   "bool DisPatcher_DebugCommand::_debugCommandClearAvtInven(CUser*, MSG_DEBUG_COMMAND&)"
                   ,0x40c,
                   "DisPatcher_DebugCommand::_debugCommandClearAvtInven, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED"
                   ,uVar5);
        return false;
      }
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::SendAvatarEvent(pCVar3,0x36,iVar2,1,local_10 + 10,0);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## _debugCommandClearInven

```asm
// === 0859019e DisPatcher_DebugCommand::_debugCommandClearInven  [0x0859019e-0x8590253] ===
 859019e:	55                   	push   %ebp
 859019f:	89 e5                	mov    %esp,%ebp
 85901a1:	83 ec 38             	sub    $0x38,%esp
 85901a4:	c7 45 f4 09 00 00 00 	movl   $0x9,-0xc(%ebp)
 85901ab:	eb 26                	jmp    85901d3 <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND+0x35>
 85901ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 85901b0:	89 04 24             	mov    %eax,(%esp)
 85901b3:	e8 d6 a0 b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85901b8:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 85901be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85901c1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 85901c4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85901c7:	89 04 24             	mov    %eax,(%esp)
 85901ca:	e8 09 b6 b3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 85901cf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85901d3:	81 7d f4 37 01 00 00 	cmpl   $0x137,-0xc(%ebp)
 85901da:	0f 9e c0             	setle  %al
 85901dd:	84 c0                	test   %al,%al
 85901df:	75 cc                	jne    85901ad <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND+0xf>
 85901e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85901e8:	00 
 85901e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85901ec:	89 04 24             	mov    %eax,(%esp)
 85901ef:	e8 78 d9 0c 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85901f4:	83 f0 01             	xor    $0x1,%eax
 85901f7:	84 c0                	test   %al,%al
 85901f9:	74 52                	je     859024d <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND+0xaf>
 85901fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85901fe:	89 04 24             	mov    %eax,(%esp)
 8590201:	e8 68 a1 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8590206:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859020d:	00 
 859020e:	89 04 24             	mov    %eax,(%esp)
 8590211:	e8 35 8e b7 ff       	call   810904b <_Z14NumberToStringji>
 8590216:	89 44 24 14          	mov    %eax,0x14(%esp)
 859021a:	c7 44 24 10 dc e7 ca 	movl   $0x8cae7dc,0x10(%esp)
 8590221:	08 
 8590222:	c7 44 24 0c af 03 00 	movl   $0x3af,0xc(%esp)
 8590229:	00 
 859022a:	c7 44 24 08 c0 80 cb 	movl   $0x8cb80c0,0x8(%esp)
 8590231:	08 
 8590232:	c7 44 24 04 54 e8 ca 	movl   $0x8cae854,0x4(%esp)
 8590239:	08 
 859023a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8590241:	e8 c4 39 54 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8590246:	b8 00 00 00 00       	mov    $0x0,%eax
 859024b:	eb 05                	jmp    8590252 <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND+0xb4>
 859024d:	b8 01 00 00 00       	mov    $0x1,%eax
 8590252:	c9                   	leave
 8590253:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandClearInven @ 0x859019e

/* DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandClearInven(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10;
  
  for (local_10 = 9; local_10 < 0x138; local_10 = local_10 + 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    Inven_Item::reset((Inven_Item *)(*(int *)(iVar2 + 0x650) + local_10 * 0x3d));
  }
  cVar1 = CUser::send_itemspace((CUser *)param_2,0);
  if (cVar1 != '\x01') {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    LogManager::logFormat
              (1,"DisPatcher_DebugCommand_First.h",
               "bool DisPatcher_DebugCommand::_debugCommandClearInven(CUser*, MSG_DEBUG_COMMAND&)",
               0x3af,
               "DisPatcher_DebugCommand::_debugCommandClearInven, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar4);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandClearSkill

```asm
// === 0858e9c4 DisPatcher_DebugCommand::_debugCommandClearSkill  [0x0858e9c4-0x858eab7] ===
 858e9c4:	55                   	push   %ebp
 858e9c5:	89 e5                	mov    %esp,%ebp
 858e9c7:	56                   	push   %esi
 858e9c8:	53                   	push   %ebx
 858e9c9:	83 ec 20             	sub    $0x20,%esp
 858e9cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e9cf:	89 04 24             	mov    %eax,(%esp)
 858e9d2:	e8 c5 6e bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858e9d7:	83 f0 01             	xor    $0x1,%eax
 858e9da:	84 c0                	test   %al,%al
 858e9dc:	74 0a                	je     858e9e8 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 858e9de:	b8 00 00 00 00       	mov    $0x0,%eax
 858e9e3:	e9 c8 00 00 00       	jmp    858eab0 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0xec>
 858e9e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e9eb:	89 04 24             	mov    %eax,(%esp)
 858e9ee:	e8 35 26 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858e9f3:	89 c6                	mov    %eax,%esi
 858e9f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e9f8:	89 04 24             	mov    %eax,(%esp)
 858e9fb:	e8 6e b9 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858ea00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ea07:	00 
 858ea08:	89 04 24             	mov    %eax,(%esp)
 858ea0b:	e8 3b a6 b7 ff       	call   810904b <_Z14NumberToStringji>
 858ea10:	89 c3                	mov    %eax,%ebx
 858ea12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858ea19:	00 
 858ea1a:	c7 44 24 08 8a 00 00 	movl   $0x8a,0x8(%esp)
 858ea21:	00 
 858ea22:	c7 44 24 04 a0 83 cb 	movl   $0x8cb83a0,0x4(%esp)
 858ea29:	08 
 858ea2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858ea2d:	89 04 24             	mov    %eax,(%esp)
 858ea30:	e8 e3 0c fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858ea35:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858ea39:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858ea3d:	c7 44 24 04 ac e6 ca 	movl   $0x8cae6ac,0x4(%esp)
 858ea44:	08 
 858ea45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858ea48:	89 04 24             	mov    %eax,(%esp)
 858ea4b:	e8 38 0d fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858ea50:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ea53:	89 04 24             	mov    %eax,(%esp)
 858ea56:	e8 69 ca 0e 00       	call   867b4c4 <_ZN5CUser11ClearSkillsEv>
 858ea5b:	84 c0                	test   %al,%al
 858ea5d:	74 45                	je     858eaa4 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0xe0>
 858ea5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ea62:	89 04 24             	mov    %eax,(%esp)
 858ea65:	e8 00 da 0d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 858ea6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ea6d:	89 04 24             	mov    %eax,(%esp)
 858ea70:	e8 17 b9 b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 858ea75:	83 f8 05             	cmp    $0x5,%eax
 858ea78:	0f 94 c0             	sete   %al
 858ea7b:	84 c0                	test   %al,%al
 858ea7d:	74 2c                	je     858eaab <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0xe7>
 858ea7f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858ea86:	00 
 858ea87:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858ea8e:	00 
 858ea8f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858ea96:	00 
 858ea97:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ea9a:	89 04 24             	mov    %eax,(%esp)
 858ea9d:	e8 ba cf 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858eaa2:	eb 07                	jmp    858eaab <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0xe7>
 858eaa4:	b8 00 00 00 00       	mov    $0x0,%eax
 858eaa9:	eb 05                	jmp    858eab0 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND+0xec>
 858eaab:	b8 01 00 00 00       	mov    $0x1,%eax
 858eab0:	83 c4 20             	add    $0x20,%esp
 858eab3:	5b                   	pop    %ebx
 858eab4:	5e                   	pop    %esi
 858eab5:	5d                   	pop    %ebp
 858eab6:	c3                   	ret
 858eab7:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandClearSkill @ 0x858e9c4

/* DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
DisPatcher_DebugCommand::_debugCommandClearSkill(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandClearSkill(CUser*, MSG_DEBUG_COMMAND&)"
                       ,0x8a,0);
    cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode Clear Skill.",uVar4,uVar2);
    cVar1 = CUser::ClearSkills((CUser *)param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      CUser::send_skill_info((CUser *)param_2);
      iVar5 = CUser::get_state((CUser *)param_2);
      if (iVar5 == 5) {
        CUser::SendNotiPacket((CUser *)param_2,2,2,1);
      }
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

## _debugCommandGuildLevelUp

```asm
// === 0858f64c DisPatcher_DebugCommand::_debugCommandGuildLevelUp  [0x0858f64c-0x858f7b5] ===
 858f64c:	55                   	push   %ebp
 858f64d:	89 e5                	mov    %esp,%ebp
 858f64f:	57                   	push   %edi
 858f650:	56                   	push   %esi
 858f651:	53                   	push   %ebx
 858f652:	83 ec 5c             	sub    $0x5c,%esp
 858f655:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f658:	89 04 24             	mov    %eax,(%esp)
 858f65b:	e8 3c 62 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858f660:	83 f0 01             	xor    $0x1,%eax
 858f663:	84 c0                	test   %al,%al
 858f665:	74 0a                	je     858f671 <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser+0x25>
 858f667:	b8 00 00 00 00       	mov    $0x0,%eax
 858f66c:	e9 3d 01 00 00       	jmp    858f7ae <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser+0x162>
 858f671:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f674:	89 04 24             	mov    %eax,(%esp)
 858f677:	e8 f0 fd c9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 858f67c:	85 c0                	test   %eax,%eax
 858f67e:	0f 94 c0             	sete   %al
 858f681:	84 c0                	test   %al,%al
 858f683:	74 51                	je     858f6d6 <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser+0x8a>
 858f685:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f688:	89 04 24             	mov    %eax,(%esp)
 858f68b:	e8 be c5 b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 858f690:	89 c3                	mov    %eax,%ebx
 858f692:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f699:	00 
 858f69a:	c7 44 24 08 0a 02 00 	movl   $0x20a,0x8(%esp)
 858f6a1:	00 
 858f6a2:	c7 44 24 04 80 81 cb 	movl   $0x8cb8180,0x4(%esp)
 858f6a9:	08 
 858f6aa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 858f6ad:	89 04 24             	mov    %eax,(%esp)
 858f6b0:	e8 63 00 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858f6b5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858f6b9:	c7 44 24 04 48 e7 ca 	movl   $0x8cae748,0x4(%esp)
 858f6c0:	08 
 858f6c1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 858f6c4:	89 04 24             	mov    %eax,(%esp)
 858f6c7:	e8 bc 00 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858f6cc:	b8 00 00 00 00       	mov    $0x0,%eax
 858f6d1:	e9 d8 00 00 00       	jmp    858f7ae <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser+0x162>
 858f6d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f6d9:	89 04 24             	mov    %eax,(%esp)
 858f6dc:	e8 8b fd c9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 858f6e1:	89 c7                	mov    %eax,%edi
 858f6e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f6e6:	89 04 24             	mov    %eax,(%esp)
 858f6e9:	e8 60 c5 b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 858f6ee:	89 c6                	mov    %eax,%esi
 858f6f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f6f3:	89 04 24             	mov    %eax,(%esp)
 858f6f6:	e8 9b 95 b3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 858f6fb:	89 c3                	mov    %eax,%ebx
 858f6fd:	a1 2c be 40 09       	mov    0x940be2c,%eax
 858f702:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f709:	00 
 858f70a:	89 04 24             	mov    %eax,(%esp)
 858f70d:	e8 a6 dc b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 858f712:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 858f719:	00 
 858f71a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 858f71e:	89 74 24 08          	mov    %esi,0x8(%esp)
 858f722:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f726:	89 04 24             	mov    %eax,(%esp)
 858f729:	e8 5c e6 ed ff       	call   846dd8a <_ZN17CGuildServerProxy16SendGuildLevelupEijjj>
 858f72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f731:	89 04 24             	mov    %eax,(%esp)
 858f734:	e8 2b 0a ca ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 858f739:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 858f73c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858f73f:	0f b6 80 95 00 00 00 	movzbl 0x95(%eax),%eax
 858f746:	0f b6 c8             	movzbl %al,%ecx
 858f749:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858f74c:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 858f750:	83 c0 01             	add    $0x1,%eax
 858f753:	0f b6 d0             	movzbl %al,%edx
 858f756:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 858f759:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 858f75d:	89 54 24 08          	mov    %edx,0x8(%esp)
 858f761:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f765:	8d 45 ba             	lea    -0x46(%ebp),%eax
 858f768:	89 04 24             	mov    %eax,(%esp)
 858f76b:	e8 2a da f5 ff       	call   84ed19a <_ZN12STGuildProxyC1EPKchh>
 858f770:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 858f774:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f777:	89 04 24             	mov    %eax,(%esp)
 858f77a:	e8 ed fc c9 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 858f77f:	89 c3                	mov    %eax,%ebx
 858f781:	a1 2c be 40 09       	mov    0x940be2c,%eax
 858f786:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f78d:	00 
 858f78e:	89 04 24             	mov    %eax,(%esp)
 858f791:	e8 22 dc b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 858f796:	8d 55 ba             	lea    -0x46(%ebp),%edx
 858f799:	89 54 24 08          	mov    %edx,0x8(%esp)
 858f79d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f7a1:	89 04 24             	mov    %eax,(%esp)
 858f7a4:	e8 b5 f1 ed ff       	call   846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>
 858f7a9:	b8 01 00 00 00       	mov    $0x1,%eax
 858f7ae:	83 c4 5c             	add    $0x5c,%esp
 858f7b1:	5b                   	pop    %ebx
 858f7b2:	5e                   	pop    %esi
 858f7b3:	5f                   	pop    %edi
 858f7b4:	5d                   	pop    %ebp
 858f7b5:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandGuildLevelUp @ 0x858f64c

/* DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandGuildLevelUp(DisPatcher_DebugCommand *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CGuildServerProxy *pCVar6;
  STGuildProxy local_4a [25];
  undefined1 local_31;
  cMyTrace local_30 [16];
  char *local_20;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_30,"bool DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*)",
                         0x20a,0);
      cMyTrace::operator()(local_30,"GM is not Guild Member!( %d )",uVar2);
      uVar2 = 0;
    }
    else {
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      iVar3 = CUser::GetUID(param_1);
      pCVar6 = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildLevelup(pCVar6,iVar3,uVar5,uVar4,0);
      local_20 = (char *)CUser::GetGuildDBInfo(param_1);
      STGuildProxy::STGuildProxy(local_4a,local_20,local_20[0x1b] + '\x01',local_20[0x95]);
      local_31 = 0;
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      pCVar6 = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::ModifyGuildInfoProxy(pCVar6,uVar4,local_4a);
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

## _debugCommandInitUserPowerwarPoint

```asm
// === 08590092 DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint  [0x08590092-0x859019d] ===
 8590092:	55                   	push   %ebp
 8590093:	89 e5                	mov    %esp,%ebp
 8590095:	56                   	push   %esi
 8590096:	53                   	push   %ebx
 8590097:	83 ec 20             	sub    $0x20,%esp
 859009a:	8b 45 0c             	mov    0xc(%ebp),%eax
 859009d:	89 04 24             	mov    %eax,(%esp)
 85900a0:	e8 f7 57 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 85900a5:	83 f0 01             	xor    $0x1,%eax
 85900a8:	84 c0                	test   %al,%al
 85900aa:	74 0a                	je     85900b6 <_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 85900ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 85900b1:	e9 de 00 00 00       	jmp    8590194 <_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND+0x102>
 85900b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85900b9:	89 04 24             	mov    %eax,(%esp)
 85900bc:	e8 07 f9 c9 ff       	call   822f9c8 <_ZN15CUserCharacInfo20GetUserPowerWarPointEv>
 85900c1:	0f bf d0             	movswl %ax,%edx
 85900c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85900c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85900cb:	89 04 24             	mov    %eax,(%esp)
 85900ce:	e8 93 7e 0f 00       	call   8687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>
 85900d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85900d6:	89 04 24             	mov    %eax,(%esp)
 85900d9:	e8 6e dc ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85900de:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85900e5:	00 
 85900e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85900ed:	00 
 85900ee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85900f1:	89 04 24             	mov    %eax,(%esp)
 85900f4:	e8 03 b8 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85900f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8590100:	00 
 8590101:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590104:	89 04 24             	mov    %eax,(%esp)
 8590107:	e8 14 b8 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 859010c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8590113:	00 
 8590114:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590117:	89 04 24             	mov    %eax,(%esp)
 859011a:	e8 85 9d b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 859011f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590122:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8590129:	00 
 859012a:	89 44 24 04          	mov    %eax,0x4(%esp)
 859012e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590131:	89 04 24             	mov    %eax,(%esp)
 8590134:	e8 15 a3 0c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 8590139:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8590140:	00 
 8590141:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590144:	89 04 24             	mov    %eax,(%esp)
 8590147:	e8 0c b8 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 859014c:	e8 56 a2 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8590151:	8b 55 0c             	mov    0xc(%ebp),%edx
 8590154:	89 54 24 08          	mov    %edx,0x8(%esp)
 8590158:	8d 55 ec             	lea    -0x14(%ebp),%edx
 859015b:	89 54 24 04          	mov    %edx,0x4(%esp)
 859015f:	89 04 24             	mov    %eax,(%esp)
 8590162:	e8 f5 47 ba ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 8590167:	bb 01 00 00 00       	mov    $0x1,%ebx
 859016c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 859016f:	89 04 24             	mov    %eax,(%esp)
 8590172:	e8 09 dd ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8590177:	eb 1b                	jmp    8590194 <_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND+0x102>
 8590179:	89 d3                	mov    %edx,%ebx
 859017b:	89 c6                	mov    %eax,%esi
 859017d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590180:	89 04 24             	mov    %eax,(%esp)
 8590183:	e8 f8 dc ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8590188:	89 f0                	mov    %esi,%eax
 859018a:	89 da                	mov    %ebx,%edx
 859018c:	89 04 24             	mov    %eax,(%esp)
 859018f:	e8 bc 35 55 00       	call   8ae3750 <_Unwind_Resume>
 8590194:	89 d8                	mov    %ebx,%eax
 8590196:	83 c4 20             	add    $0x20,%esp
 8590199:	5b                   	pop    %ebx
 859019a:	5e                   	pop    %esi
 859019b:	5d                   	pop    %ebp
 859019c:	c3                   	ret
 859019d:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint @ 0x8590092

/* DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint
               (CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  short sVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    sVar2 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_2);
    CUserCharacInfo::DecreasePowerWarPoint((CUserCharacInfo *)param_2,sVar2);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085900f4 to 08590166 has its CatchHandler @ 08590179 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_18);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandInvisible

```asm
// === 0859058a DisPatcher_DebugCommand::_debugCommandInvisible  [0x0859058a-0x85906ab] ===
 859058a:	55                   	push   %ebp
 859058b:	89 e5                	mov    %esp,%ebp
 859058d:	56                   	push   %esi
 859058e:	53                   	push   %ebx
 859058f:	83 ec 30             	sub    $0x30,%esp
 8590592:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590595:	89 04 24             	mov    %eax,(%esp)
 8590598:	e8 0f b8 0f 00       	call   868bdac <_ZN15CUserCharacInfo12SetInvisibleEv>
 859059d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85905a0:	89 04 24             	mov    %eax,(%esp)
 85905a3:	e8 a4 d7 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85905a8:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 85905af:	00 
 85905b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85905b7:	00 
 85905b8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85905bb:	89 04 24             	mov    %eax,(%esp)
 85905be:	e8 39 b3 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85905c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85905c6:	89 04 24             	mov    %eax,(%esp)
 85905c9:	e8 ae 9d b4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85905ce:	0f b7 c0             	movzwl %ax,%eax
 85905d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85905d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85905d8:	89 04 24             	mov    %eax,(%esp)
 85905db:	e8 c4 98 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85905e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85905e7:	00 
 85905e8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85905eb:	89 04 24             	mov    %eax,(%esp)
 85905ee:	e8 65 b3 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85905f3:	e8 af 9d b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85905f8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85905fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85905ff:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8590602:	89 54 24 04          	mov    %edx,0x4(%esp)
 8590606:	89 04 24             	mov    %eax,(%esp)
 8590609:	e8 94 8d 13 00       	call   86c93a2 <_ZN9GameWorld22send_all_excepted_userER11PacketGuardP5CUser>
 859060e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8590615:	00 
 8590616:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 859061d:	00 
 859061e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8590625:	00 
 8590626:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590629:	89 04 24             	mov    %eax,(%esp)
 859062c:	e8 2b b4 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8590631:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590634:	89 04 24             	mov    %eax,(%esp)
 8590637:	e8 ec 09 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 859063c:	89 c3                	mov    %eax,%ebx
 859063e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8590645:	00 
 8590646:	c7 44 24 08 5c 00 00 	movl   $0x5c,0x8(%esp)
 859064d:	00 
 859064e:	c7 44 24 04 00 80 cb 	movl   $0x8cb8000,0x4(%esp)
 8590655:	08 
 8590656:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8590659:	89 04 24             	mov    %eax,(%esp)
 859065c:	e8 b7 f0 fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8590661:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8590665:	c7 44 24 04 5a e9 ca 	movl   $0x8cae95a,0x4(%esp)
 859066c:	08 
 859066d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8590670:	89 04 24             	mov    %eax,(%esp)
 8590673:	e8 10 f1 fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8590678:	bb 01 00 00 00       	mov    $0x1,%ebx
 859067d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8590680:	89 04 24             	mov    %eax,(%esp)
 8590683:	e8 f8 d7 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8590688:	89 d8                	mov    %ebx,%eax
 859068a:	83 c4 30             	add    $0x30,%esp
 859068d:	5b                   	pop    %ebx
 859068e:	5e                   	pop    %esi
 859068f:	5d                   	pop    %ebp
 8590690:	c3                   	ret
 8590691:	89 d3                	mov    %edx,%ebx
 8590693:	89 c6                	mov    %eax,%esi
 8590695:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8590698:	89 04 24             	mov    %eax,(%esp)
 859069b:	e8 e0 d7 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85906a0:	89 f0                	mov    %esi,%eax
 85906a2:	89 da                	mov    %ebx,%edx
 85906a4:	89 04 24             	mov    %eax,(%esp)
 85906a7:	e8 a4 30 55 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DisPatcher_DebugCommand::_debugCommandInvisible @ 0x859058a

/* DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&) */

undefined4
DisPatcher_DebugCommand::_debugCommandInvisible(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  uint uVar1;
  GameWorld *this;
  undefined4 uVar2;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  CUserCharacInfo::SetInvisible((CUserCharacInfo *)param_2);
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085905be to 08590677 has its CatchHandler @ 08590691 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,6);
  uVar1 = CUser::get_unique_id((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all_excepted_user(this,local_28,(CUser *)param_2);
  CUser::SendNotiPacket((CUser *)param_2,1,2,0);
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandInvisible(CUser*, MSG_DEBUG_COMMAND&)"
                     ,0x5c,0);
  cMyTrace::operator()(local_1c,"GM(%s) is invisible \n",uVar2);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}

```

---

## _debugCommandLevelUpDown

```asm
// === 0858f3ba DisPatcher_DebugCommand::_debugCommandLevelUpDown  [0x0858f3ba-0x858f64b] ===
 858f3ba:	55                   	push   %ebp
 858f3bb:	89 e5                	mov    %esp,%ebp
 858f3bd:	56                   	push   %esi
 858f3be:	53                   	push   %ebx
 858f3bf:	83 ec 50             	sub    $0x50,%esp
 858f3c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f3c5:	89 04 24             	mov    %eax,(%esp)
 858f3c8:	e8 cf 64 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858f3cd:	83 f0 01             	xor    $0x1,%eax
 858f3d0:	84 c0                	test   %al,%al
 858f3d2:	74 0a                	je     858f3de <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x24>
 858f3d4:	b8 00 00 00 00       	mov    $0x0,%eax
 858f3d9:	e9 66 02 00 00       	jmp    858f644 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x28a>
 858f3de:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f3e1:	89 04 24             	mov    %eax,(%esp)
 858f3e4:	e8 3f 1c b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858f3e9:	89 c6                	mov    %eax,%esi
 858f3eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f3ee:	89 04 24             	mov    %eax,(%esp)
 858f3f1:	e8 78 af b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858f3f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f3fd:	00 
 858f3fe:	89 04 24             	mov    %eax,(%esp)
 858f401:	e8 45 9c b7 ff       	call   810904b <_Z14NumberToStringji>
 858f406:	89 c3                	mov    %eax,%ebx
 858f408:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f40f:	00 
 858f410:	c7 44 24 08 ce 01 00 	movl   $0x1ce,0x8(%esp)
 858f417:	00 
 858f418:	c7 44 24 04 c0 81 cb 	movl   $0x8cb81c0,0x4(%esp)
 858f41f:	08 
 858f420:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858f423:	89 04 24             	mov    %eax,(%esp)
 858f426:	e8 ed 02 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858f42b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858f42f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858f433:	c7 44 24 04 2e e7 ca 	movl   $0x8cae72e,0x4(%esp)
 858f43a:	08 
 858f43b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858f43e:	89 04 24             	mov    %eax,(%esp)
 858f441:	e8 42 03 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858f446:	8b 45 10             	mov    0x10(%ebp),%eax
 858f449:	0f af 45 10          	imul   0x10(%ebp),%eax
 858f44d:	83 f8 01             	cmp    $0x1,%eax
 858f450:	7e 0a                	jle    858f45c <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0xa2>
 858f452:	b8 00 00 00 00       	mov    $0x0,%eax
 858f457:	e9 e8 01 00 00       	jmp    858f644 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x28a>
 858f45c:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 858f460:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f463:	89 04 24             	mov    %eax,(%esp)
 858f466:	e8 4d ae b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f46b:	03 45 10             	add    0x10(%ebp),%eax
 858f46e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 858f471:	c7 45 f0 c8 00 00 00 	movl   $0xc8,-0x10(%ebp)
 858f478:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858f47b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f47f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858f482:	89 04 24             	mov    %eax,(%esp)
 858f485:	e8 84 04 b5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 858f48a:	8b 00                	mov    (%eax),%eax
 858f48c:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f490:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f493:	89 04 24             	mov    %eax,(%esp)
 858f496:	e8 c1 b4 0e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 858f49b:	83 f0 01             	xor    $0x1,%eax
 858f49e:	84 c0                	test   %al,%al
 858f4a0:	74 04                	je     858f4a6 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0xec>
 858f4a2:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 858f4a6:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 858f4aa:	0f 84 90 01 00 00    	je     858f640 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x286>
 858f4b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f4b3:	89 04 24             	mov    %eax,(%esp)
 858f4b6:	e8 d1 ae b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 858f4bb:	83 f8 03             	cmp    $0x3,%eax
 858f4be:	74 0e                	je     858f4ce <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x114>
 858f4c0:	83 f8 05             	cmp    $0x5,%eax
 858f4c3:	0f 84 d2 00 00 00    	je     858f59b <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x1e1>
 858f4c9:	e9 72 01 00 00       	jmp    858f640 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x286>
 858f4ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f4d5:	00 
 858f4d6:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 858f4dd:	00 
 858f4de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f4e5:	00 
 858f4e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f4e9:	89 04 24             	mov    %eax,(%esp)
 858f4ec:	e8 6b c5 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f4f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f4f8:	00 
 858f4f9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f500:	00 
 858f501:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f508:	00 
 858f509:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f50c:	89 04 24             	mov    %eax,(%esp)
 858f50f:	e8 48 c5 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f514:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858f51b:	00 
 858f51c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f523:	00 
 858f524:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f52b:	00 
 858f52c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f52f:	89 04 24             	mov    %eax,(%esp)
 858f532:	e8 25 c5 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f537:	8d 45 d0             	lea    -0x30(%ebp),%eax
 858f53a:	89 04 24             	mov    %eax,(%esp)
 858f53d:	e8 0a e8 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858f542:	8d 5d d0             	lea    -0x30(%ebp),%ebx
 858f545:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f548:	89 04 24             	mov    %eax,(%esp)
 858f54b:	e8 56 b3 c0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 858f550:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f554:	89 04 24             	mov    %eax,(%esp)
 858f557:	e8 4c c6 11 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 858f55c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 858f55f:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f563:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f566:	89 04 24             	mov    %eax,(%esp)
 858f569:	e8 4c 90 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858f56e:	eb 1b                	jmp    858f58b <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x1d1>
 858f570:	89 d3                	mov    %edx,%ebx
 858f572:	89 c6                	mov    %eax,%esi
 858f574:	8d 45 d0             	lea    -0x30(%ebp),%eax
 858f577:	89 04 24             	mov    %eax,(%esp)
 858f57a:	e8 01 e9 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f57f:	89 f0                	mov    %esi,%eax
 858f581:	89 da                	mov    %ebx,%edx
 858f583:	89 04 24             	mov    %eax,(%esp)
 858f586:	e8 c5 41 55 00       	call   8ae3750 <_Unwind_Resume>
 858f58b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 858f58e:	89 04 24             	mov    %eax,(%esp)
 858f591:	e8 ea e8 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f596:	e9 a5 00 00 00       	jmp    858f640 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x286>
 858f59b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f5a2:	00 
 858f5a3:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 858f5aa:	00 
 858f5ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f5b2:	00 
 858f5b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f5b6:	89 04 24             	mov    %eax,(%esp)
 858f5b9:	e8 9e c4 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f5be:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858f5c5:	00 
 858f5c6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f5cd:	00 
 858f5ce:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858f5d5:	00 
 858f5d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f5d9:	89 04 24             	mov    %eax,(%esp)
 858f5dc:	e8 7b c4 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f5e1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 858f5e4:	89 04 24             	mov    %eax,(%esp)
 858f5e7:	e8 60 e7 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858f5ec:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 858f5ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f5f2:	89 04 24             	mov    %eax,(%esp)
 858f5f5:	e8 ac b2 c0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 858f5fa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f5fe:	89 04 24             	mov    %eax,(%esp)
 858f601:	e8 a2 c5 11 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 858f606:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 858f609:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f60d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f610:	89 04 24             	mov    %eax,(%esp)
 858f613:	e8 a2 8f 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858f618:	eb 1b                	jmp    858f635 <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri+0x27b>
 858f61a:	89 d3                	mov    %edx,%ebx
 858f61c:	89 c6                	mov    %eax,%esi
 858f61e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 858f621:	89 04 24             	mov    %eax,(%esp)
 858f624:	e8 57 e8 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f629:	89 f0                	mov    %esi,%eax
 858f62b:	89 da                	mov    %ebx,%edx
 858f62d:	89 04 24             	mov    %eax,(%esp)
 858f630:	e8 1b 41 55 00       	call   8ae3750 <_Unwind_Resume>
 858f635:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 858f638:	89 04 24             	mov    %eax,(%esp)
 858f63b:	e8 40 e8 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f640:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 858f644:	83 c4 50             	add    $0x50,%esp
 858f647:	5b                   	pop    %ebx
 858f648:	5e                   	pop    %esi
 858f649:	5d                   	pop    %ebp
 858f64a:	c3                   	ret
 858f64b:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandLevelUpDown @ 0x858f3ba

/* DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int) */

char __thiscall
DisPatcher_DebugCommand::_debugCommandLevelUpDown
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  UserQuest *pUVar7;
  PacketGuard local_40 [12];
  PacketGuard local_34 [12];
  cMyTrace local_28 [16];
  int local_18 [2];
  char local_d;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_28,
                       "bool DisPatcher_DebugCommand::_debugCommandLevelUpDown(CUser*, int)",0x1ce,0
                      );
    cMyTrace::operator()(local_28,"%s:\'%s\' GM Mode Level Up.",uVar4,uVar2);
    if (param_2 * param_2 < 2) {
      local_d = '\x01';
      local_18[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_18[0] = local_18[0] + param_2;
      local_18[1] = 200;
      piVar5 = std::min<int>(local_18 + 1,local_18);
      cVar1 = CUser::SetCharacLevel(param_1,*piVar5);
      if (cVar1 != '\x01') {
        local_d = '\0';
      }
      if (local_d != '\0') {
        iVar6 = CUser::get_state(param_1);
        if (iVar6 == 3) {
          CUser::SendNotiPacket(param_1,1,0x25,0);
          CUser::SendNotiPacket(param_1,0,2,0);
          CUser::SendNotiPacket(param_1,1,2,1);
          PacketGuard::PacketGuard(local_34);
          pUVar7 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f557 to 0858f56d has its CatchHandler @ 0858f570 */
          UserQuest::get_quest_info(pUVar7,(char *)local_34);
          CUser::Send(param_1,local_34);
          PacketGuard::~PacketGuard(local_34);
        }
        else if (iVar6 == 5) {
          CUser::SendNotiPacket(param_1,1,0x25,0);
          CUser::SendNotiPacket(param_1,2,2,1);
          PacketGuard::PacketGuard(local_40);
          pUVar7 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f601 to 0858f617 has its CatchHandler @ 0858f61a */
          UserQuest::get_quest_info(pUVar7,(char *)local_40);
          CUser::Send(param_1,local_40);
          PacketGuard::~PacketGuard(local_40);
        }
      }
    }
    else {
      local_d = '\0';
    }
  }
  else {
    local_d = '\0';
  }
  return local_d;
}

```

---

## _debugCommandMasterNewSkill

```asm
// === 0858ebcc DisPatcher_DebugCommand::_debugCommandMasterNewSkill  [0x0858ebcc-0x858ec9b] ===
 858ebcc:	55                   	push   %ebp
 858ebcd:	89 e5                	mov    %esp,%ebp
 858ebcf:	56                   	push   %esi
 858ebd0:	53                   	push   %ebx
 858ebd1:	83 ec 40             	sub    $0x40,%esp
 858ebd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ebd7:	89 04 24             	mov    %eax,(%esp)
 858ebda:	e8 bd 6c bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858ebdf:	83 f0 01             	xor    $0x1,%eax
 858ebe2:	84 c0                	test   %al,%al
 858ebe4:	74 0a                	je     858ebf0 <_ZN23DisPatcher_DebugCommand27_debugCommandMasterNewSkillEP5CUserii+0x24>
 858ebe6:	b8 00 00 00 00       	mov    $0x0,%eax
 858ebeb:	e9 a5 00 00 00       	jmp    858ec95 <_ZN23DisPatcher_DebugCommand27_debugCommandMasterNewSkillEP5CUserii+0xc9>
 858ebf0:	c6 45 e5 00          	movb   $0x0,-0x1b(%ebp)
 858ebf4:	8b 45 10             	mov    0x10(%ebp),%eax
 858ebf7:	88 45 e6             	mov    %al,-0x1a(%ebp)
 858ebfa:	8b 45 14             	mov    0x14(%ebp),%eax
 858ebfd:	88 45 e7             	mov    %al,-0x19(%ebp)
 858ec00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858ec07:	00 
 858ec08:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 858ec0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ec0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ec12:	89 04 24             	mov    %eax,(%esp)
 858ec15:	e8 88 c3 0d 00       	call   866afa2 <_ZN5CUser16master_new_skillER14stBuySkillInfob>
 858ec1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ec1d:	89 04 24             	mov    %eax,(%esp)
 858ec20:	e8 03 24 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858ec25:	89 c6                	mov    %eax,%esi
 858ec27:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ec2a:	89 04 24             	mov    %eax,(%esp)
 858ec2d:	e8 3c b7 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858ec32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ec39:	00 
 858ec3a:	89 04 24             	mov    %eax,(%esp)
 858ec3d:	e8 09 a4 b7 ff       	call   810904b <_Z14NumberToStringji>
 858ec42:	89 c3                	mov    %eax,%ebx
 858ec44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858ec4b:	00 
 858ec4c:	c7 44 24 08 bd 00 00 	movl   $0xbd,0x8(%esp)
 858ec53:	00 
 858ec54:	c7 44 24 04 e0 82 cb 	movl   $0x8cb82e0,0x4(%esp)
 858ec5b:	08 
 858ec5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858ec5f:	89 04 24             	mov    %eax,(%esp)
 858ec62:	e8 b1 0a fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858ec67:	8b 45 14             	mov    0x14(%ebp),%eax
 858ec6a:	89 44 24 14          	mov    %eax,0x14(%esp)
 858ec6e:	8b 45 10             	mov    0x10(%ebp),%eax
 858ec71:	89 44 24 10          	mov    %eax,0x10(%esp)
 858ec75:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858ec79:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858ec7d:	c7 44 24 04 cc e6 ca 	movl   $0x8cae6cc,0x4(%esp)
 858ec84:	08 
 858ec85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858ec88:	89 04 24             	mov    %eax,(%esp)
 858ec8b:	e8 f8 0a fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858ec90:	b8 01 00 00 00       	mov    $0x1,%eax
 858ec95:	83 c4 40             	add    $0x40,%esp
 858ec98:	5b                   	pop    %ebx
 858ec99:	5e                   	pop    %esi
 858ec9a:	5d                   	pop    %ebp
 858ec9b:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandMasterNewSkill @ 0x858ebcc

/* DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandMasterNewSkill
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    local_1f = 0;
    local_1e = (undefined1)param_2;
    local_1d = (undefined1)param_3;
    CUser::master_new_skill((stBuySkillInfo *)param_1,SUB41(&local_1f,0));
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandMasterNewSkill(CUser*, int, int)"
                       ,0xbd,0);
    cMyTrace::operator()
              (local_1c,"%s:\'%s\' GM Mode Set Skill(%d) Level(%d).",uVar4,uVar2,param_2,param_3);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandOff

```asm
// === 0858e918 DisPatcher_DebugCommand::_debugCommandOff  [0x0858e918-0x858e9c3] ===
 858e918:	55                   	push   %ebp
 858e919:	89 e5                	mov    %esp,%ebp
 858e91b:	56                   	push   %esi
 858e91c:	53                   	push   %ebx
 858e91d:	83 ec 20             	sub    $0x20,%esp
 858e920:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e923:	89 04 24             	mov    %eax,(%esp)
 858e926:	e8 71 6f bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858e92b:	83 f0 01             	xor    $0x1,%eax
 858e92e:	84 c0                	test   %al,%al
 858e930:	74 0a                	je     858e93c <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 858e932:	b8 00 00 00 00       	mov    $0x0,%eax
 858e937:	e9 80 00 00 00       	jmp    858e9bc <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND+0xa4>
 858e93c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e93f:	89 04 24             	mov    %eax,(%esp)
 858e942:	e8 e1 26 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858e947:	89 c6                	mov    %eax,%esi
 858e949:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e94c:	89 04 24             	mov    %eax,(%esp)
 858e94f:	e8 1a ba b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858e954:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858e95b:	00 
 858e95c:	89 04 24             	mov    %eax,(%esp)
 858e95f:	e8 e7 a6 b7 ff       	call   810904b <_Z14NumberToStringji>
 858e964:	89 c3                	mov    %eax,%ebx
 858e966:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858e96d:	00 
 858e96e:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 858e975:	00 
 858e976:	c7 44 24 04 00 84 cb 	movl   $0x8cb8400,0x4(%esp)
 858e97d:	08 
 858e97e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858e981:	89 04 24             	mov    %eax,(%esp)
 858e984:	e8 8f 0d fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858e989:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858e98d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858e991:	c7 44 24 04 97 e6 ca 	movl   $0x8cae697,0x4(%esp)
 858e998:	08 
 858e999:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858e99c:	89 04 24             	mov    %eax,(%esp)
 858e99f:	e8 e4 0d fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858e9a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858e9ab:	00 
 858e9ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e9af:	89 04 24             	mov    %eax,(%esp)
 858e9b2:	e8 25 ad 0e 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 858e9b7:	b8 01 00 00 00       	mov    $0x1,%eax
 858e9bc:	83 c4 20             	add    $0x20,%esp
 858e9bf:	5b                   	pop    %ebx
 858e9c0:	5e                   	pop    %esi
 858e9c1:	5d                   	pop    %ebp
 858e9c2:	c3                   	ret
 858e9c3:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandOff @ 0x858e918

/* DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandOff(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_1c,
                       "bool DisPatcher_DebugCommand::_debugCommandOff(CUser*, MSG_DEBUG_COMMAND&)",
                       0x41,0);
    cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode OFF.",uVar4,uVar2);
    CUser::SetGameMasterMode((CUser *)param_2,false);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandOn

```asm
// === 0858e724 DisPatcher_DebugCommand::_debugCommandOn  [0x0858e724-0x858e917] ===
 858e724:	55                   	push   %ebp
 858e725:	89 e5                	mov    %esp,%ebp
 858e727:	56                   	push   %esi
 858e728:	53                   	push   %ebx
 858e729:	83 ec 30             	sub    $0x30,%esp
 858e72c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e72f:	89 04 24             	mov    %eax,(%esp)
 858e732:	e8 f1 28 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858e737:	89 c6                	mov    %eax,%esi
 858e739:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e73c:	89 04 24             	mov    %eax,(%esp)
 858e73f:	e8 2a bc b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858e744:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858e74b:	00 
 858e74c:	89 04 24             	mov    %eax,(%esp)
 858e74f:	e8 f7 a8 b7 ff       	call   810904b <_Z14NumberToStringji>
 858e754:	89 c3                	mov    %eax,%ebx
 858e756:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858e75d:	00 
 858e75e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 858e765:	00 
 858e766:	c7 44 24 04 60 84 cb 	movl   $0x8cb8460,0x4(%esp)
 858e76d:	08 
 858e76e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858e771:	89 04 24             	mov    %eax,(%esp)
 858e774:	e8 9f 0f fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858e779:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858e77d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858e781:	c7 44 24 04 83 e6 ca 	movl   $0x8cae683,0x4(%esp)
 858e788:	08 
 858e789:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858e78c:	89 04 24             	mov    %eax,(%esp)
 858e78f:	e8 f4 0f fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858e794:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858e79b:	00 
 858e79c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e79f:	89 04 24             	mov    %eax,(%esp)
 858e7a2:	e8 35 af 0e 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 858e7a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e7aa:	89 04 24             	mov    %eax,(%esp)
 858e7ad:	e8 80 1c b9 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 858e7b2:	85 c0                	test   %eax,%eax
 858e7b4:	0f 95 c0             	setne  %al
 858e7b7:	84 c0                	test   %al,%al
 858e7b9:	0f 84 4b 01 00 00    	je     858e90a <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e6>
 858e7bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e7c2:	89 04 24             	mov    %eax,(%esp)
 858e7c5:	e8 82 f5 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858e7ca:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 858e7d1:	00 
 858e7d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858e7d9:	00 
 858e7da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e7dd:	89 04 24             	mov    %eax,(%esp)
 858e7e0:	e8 17 d1 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 858e7e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858e7ec:	00 
 858e7ed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e7f0:	89 04 24             	mov    %eax,(%esp)
 858e7f3:	e8 28 d1 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 858e7f8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 858e7ff:	00 
 858e800:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e803:	89 04 24             	mov    %eax,(%esp)
 858e806:	e8 99 b6 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 858e80b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e80e:	89 04 24             	mov    %eax,(%esp)
 858e811:	e8 68 ba b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 858e816:	8d 55 dc             	lea    -0x24(%ebp),%edx
 858e819:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858e81d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 858e824:	00 
 858e825:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858e82c:	00 
 858e82d:	89 04 24             	mov    %eax,(%esp)
 858e830:	e8 87 de f6 ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 858e835:	83 f0 01             	xor    $0x1,%eax
 858e838:	84 c0                	test   %al,%al
 858e83a:	74 0a                	je     858e846 <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x122>
 858e83c:	bb 00 00 00 00       	mov    $0x0,%ebx
 858e841:	e9 b7 00 00 00       	jmp    858e8fd <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d9>
 858e846:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e849:	89 04 24             	mov    %eax,(%esp)
 858e84c:	e8 2d ba b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 858e851:	8d 55 dc             	lea    -0x24(%ebp),%edx
 858e854:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858e858:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858e85f:	00 
 858e860:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858e867:	00 
 858e868:	89 04 24             	mov    %eax,(%esp)
 858e86b:	e8 4c de f6 ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 858e870:	83 f0 01             	xor    $0x1,%eax
 858e873:	84 c0                	test   %al,%al
 858e875:	74 07                	je     858e87e <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x15a>
 858e877:	bb 00 00 00 00       	mov    $0x0,%ebx
 858e87c:	eb 7f                	jmp    858e8fd <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d9>
 858e87e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e881:	89 04 24             	mov    %eax,(%esp)
 858e884:	e8 f5 b9 b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 858e889:	8d 55 dc             	lea    -0x24(%ebp),%edx
 858e88c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858e890:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858e897:	00 
 858e898:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858e89f:	00 
 858e8a0:	89 04 24             	mov    %eax,(%esp)
 858e8a3:	e8 14 de f6 ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 858e8a8:	83 f0 01             	xor    $0x1,%eax
 858e8ab:	84 c0                	test   %al,%al
 858e8ad:	74 07                	je     858e8b6 <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x192>
 858e8af:	bb 00 00 00 00       	mov    $0x0,%ebx
 858e8b4:	eb 47                	jmp    858e8fd <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d9>
 858e8b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858e8bd:	00 
 858e8be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e8c1:	89 04 24             	mov    %eax,(%esp)
 858e8c4:	e8 8f d0 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 858e8c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e8cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 858e8d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858e8d3:	89 04 24             	mov    %eax,(%esp)
 858e8d6:	e8 df 9c 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858e8db:	bb 01 00 00 00       	mov    $0x1,%ebx
 858e8e0:	eb 1b                	jmp    858e8fd <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d9>
 858e8e2:	89 d3                	mov    %edx,%ebx
 858e8e4:	89 c6                	mov    %eax,%esi
 858e8e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e8e9:	89 04 24             	mov    %eax,(%esp)
 858e8ec:	e8 8f f5 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858e8f1:	89 f0                	mov    %esi,%eax
 858e8f3:	89 da                	mov    %ebx,%edx
 858e8f5:	89 04 24             	mov    %eax,(%esp)
 858e8f8:	e8 53 4e 55 00       	call   8ae3750 <_Unwind_Resume>
 858e8fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858e900:	89 04 24             	mov    %eax,(%esp)
 858e903:	e8 78 f5 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858e908:	eb 05                	jmp    858e90f <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1eb>
 858e90a:	bb 00 00 00 00       	mov    $0x0,%ebx
 858e90f:	89 d8                	mov    %ebx,%eax
 858e911:	83 c4 30             	add    $0x30,%esp
 858e914:	5b                   	pop    %ebx
 858e915:	5e                   	pop    %esi
 858e916:	5d                   	pop    %ebp
 858e917:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandOn @ 0x858e724

/* DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 DisPatcher_DebugCommand::_debugCommandOn(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *pCVar6;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  uVar3 = CUser::get_acc_id((CUser *)param_2);
  uVar4 = NumberToString(uVar3,0);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)",
                     0x10,0);
  cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode ON.",uVar4,uVar2);
  CUser::SetGameMasterMode((CUser *)param_2,true);
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0858e7e0 to 0858e8da has its CatchHandler @ 0858e8e2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,3);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = CInventory::MakeItemPacket(pCVar6,1,1,local_28);
    if (cVar1 == '\x01') {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      cVar1 = CInventory::MakeItemPacket(pCVar6,1,0,local_28);
      if (cVar1 == '\x01') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
        cVar1 = CInventory::MakeItemPacket(pCVar6,1,2,local_28);
        if (cVar1 == '\x01') {
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
          CUser::Send((CUser *)param_2,local_28);
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return uVar2;
}

```

---

## _debugCommandPVPRankSet

```asm
// === 0858faba DisPatcher_DebugCommand::_debugCommandPVPRankSet  [0x0858faba-0x858fb4d] ===
 858faba:	55                   	push   %ebp
 858fabb:	89 e5                	mov    %esp,%ebp
 858fabd:	83 ec 28             	sub    $0x28,%esp
 858fac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fac3:	89 04 24             	mov    %eax,(%esp)
 858fac6:	e8 d1 5d bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858facb:	83 f0 01             	xor    $0x1,%eax
 858face:	84 c0                	test   %al,%al
 858fad0:	74 07                	je     858fad9 <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND+0x1f>
 858fad2:	b8 00 00 00 00       	mov    $0x0,%eax
 858fad7:	eb 72                	jmp    858fb4b <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND+0x91>
 858fad9:	8b 45 10             	mov    0x10(%ebp),%eax
 858fadc:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 858fae0:	3c 25                	cmp    $0x25,%al
 858fae2:	76 07                	jbe    858faeb <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND+0x31>
 858fae4:	b8 00 00 00 00       	mov    $0x0,%eax
 858fae9:	eb 60                	jmp    858fb4b <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND+0x91>
 858faeb:	8b 45 10             	mov    0x10(%ebp),%eax
 858faee:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 858faf2:	0f b6 d0             	movzbl %al,%edx
 858faf5:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 858fafa:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fafe:	89 04 24             	mov    %eax,(%esp)
 858fb01:	e8 5a 4d 04 00       	call   85d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>
 858fb06:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858fb09:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fb0c:	89 04 24             	mov    %eax,(%esp)
 858fb0f:	e8 56 f6 c9 ff       	call   822f16a <_ZN15CUserCharacInfo13getPVPResultWEv>
 858fb14:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858fb17:	89 50 08             	mov    %edx,0x8(%eax)
 858fb1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fb1d:	89 04 24             	mov    %eax,(%esp)
 858fb20:	e8 45 f6 c9 ff       	call   822f16a <_ZN15CUserCharacInfo13getPVPResultWEv>
 858fb25:	8b 55 10             	mov    0x10(%ebp),%edx
 858fb28:	0f b6 52 0e          	movzbl 0xe(%edx),%edx
 858fb2c:	0f b6 d2             	movzbl %dl,%edx
 858fb2f:	89 50 14             	mov    %edx,0x14(%eax)
 858fb32:	e8 70 a8 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 858fb37:	8b 55 0c             	mov    0xc(%ebp),%edx
 858fb3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fb3e:	89 04 24             	mov    %eax,(%esp)
 858fb41:	e8 b6 88 13 00       	call   86c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>
 858fb46:	b8 01 00 00 00       	mov    $0x1,%eax
 858fb4b:	c9                   	leave
 858fb4c:	c3                   	ret
 858fb4d:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandPVPRankSet @ 0x858faba

/* DisPatcher_DebugCommand::_debugCommandPVPRankSet(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPVPRankSet
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    if ((byte)param_2[0xe] < 0x26) {
      uVar2 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,(uint)(byte)param_2[0xe])
      ;
      iVar3 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)param_1);
      *(undefined4 *)(iVar3 + 8) = uVar2;
      iVar3 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)param_1);
      *(uint *)(iVar3 + 0x14) = (uint)(byte)param_2[0xe];
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_AllBasicInfo(this_00,param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _debugCommandPowerUpOn

```asm
// === 0858ffee DisPatcher_DebugCommand::_debugCommandPowerUpOn  [0x0858ffee-0x8590091] ===
 858ffee:	55                   	push   %ebp
 858ffef:	89 e5                	mov    %esp,%ebp
 858fff1:	56                   	push   %esi
 858fff2:	53                   	push   %ebx
 858fff3:	83 ec 20             	sub    $0x20,%esp
 858fff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fff9:	89 04 24             	mov    %eax,(%esp)
 858fffc:	e8 9b 58 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8590001:	83 f0 01             	xor    $0x1,%eax
 8590004:	84 c0                	test   %al,%al
 8590006:	74 07                	je     859000f <_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND+0x21>
 8590008:	bb 00 00 00 00       	mov    $0x0,%ebx
 859000d:	eb 79                	jmp    8590088 <_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND+0x9a>
 859000f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590012:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8590019:	00 
 859001a:	89 04 24             	mov    %eax,(%esp)
 859001d:	e8 56 50 00 00       	call   8595078 <_ZN5CUser10SetPowerUpEb>
 8590022:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590025:	89 04 24             	mov    %eax,(%esp)
 8590028:	e8 f1 1a d6 ff       	call   82f1b1e <_ZNSt6vectorIP5CUserSaIS1_EEC1Ev>
 859002d:	8d 45 0c             	lea    0xc(%ebp),%eax
 8590030:	89 44 24 04          	mov    %eax,0x4(%esp)
 8590034:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590037:	89 04 24             	mov    %eax,(%esp)
 859003a:	e8 49 10 fc ff       	call   8551088 <_ZNSt6vectorIP5CUserSaIS1_EE9push_backERKS1_>
 859003f:	e8 63 a3 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8590044:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8590047:	89 54 24 08          	mov    %edx,0x8(%esp)
 859004b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8590052:	00 
 8590053:	89 04 24             	mov    %eax,(%esp)
 8590056:	e8 0f f4 13 00       	call   86cf46a <_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE>
 859005b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8590060:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590063:	89 04 24             	mov    %eax,(%esp)
 8590066:	e8 c7 1a d6 ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 859006b:	eb 1b                	jmp    8590088 <_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND+0x9a>
 859006d:	89 d3                	mov    %edx,%ebx
 859006f:	89 c6                	mov    %eax,%esi
 8590071:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8590074:	89 04 24             	mov    %eax,(%esp)
 8590077:	e8 b6 1a d6 ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 859007c:	89 f0                	mov    %esi,%eax
 859007e:	89 da                	mov    %ebx,%edx
 8590080:	89 04 24             	mov    %eax,(%esp)
 8590083:	e8 c8 36 55 00       	call   8ae3750 <_Unwind_Resume>
 8590088:	89 d8                	mov    %ebx,%eax
 859008a:	83 c4 20             	add    $0x20,%esp
 859008d:	5b                   	pop    %ebx
 859008e:	5e                   	pop    %esi
 859008f:	5d                   	pop    %ebp
 8590090:	c3                   	ret
 8590091:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandPowerUpOn @ 0x858ffee

/* DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *pGVar2;
  vector<CUser*,std::allocator<CUser*>> local_18 [12];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    CUser::SetPowerUp((CUser *)param_2,true);
    std::vector<CUser*,std::allocator<CUser*>>::vector(local_18);
                    /* try { // try from 0859003a to 0859005a has its CatchHandler @ 0859006d */
    std::vector<CUser*,std::allocator<CUser*>>::push_back(local_18,(CUser **)&param_2);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::SendPowerUpList(pGVar2,1,local_18);
    std::vector<CUser*,std::allocator<CUser*>>::~vector(local_18);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandPowerWarEnd

```asm
// === 0859044e DisPatcher_DebugCommand::_debugCommandPowerWarEnd  [0x0859044e-0x859048d] ===
 859044e:	55                   	push   %ebp
 859044f:	89 e5                	mov    %esp,%ebp
 8590451:	53                   	push   %ebx
 8590452:	83 ec 14             	sub    $0x14,%esp
 8590455:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590458:	89 04 24             	mov    %eax,(%esp)
 859045b:	e8 0e 9f b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8590460:	89 c3                	mov    %eax,%ebx
 8590462:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8590467:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859046e:	00 
 859046f:	89 04 24             	mov    %eax,(%esp)
 8590472:	e8 41 cf b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8590477:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 859047b:	89 04 24             	mov    %eax,(%esp)
 859047e:	e8 4b da ed ff       	call   846dece <_ZN17CGuildServerProxy15SendPowerWarEndEj>
 8590483:	b8 01 00 00 00       	mov    $0x1,%eax
 8590488:	83 c4 14             	add    $0x14,%esp
 859048b:	5b                   	pop    %ebx
 859048c:	5d                   	pop    %ebp
 859048d:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandPowerWarEnd @ 0x859044e

/* DisPatcher_DebugCommand::_debugCommandPowerWarEnd(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPowerWarEnd(DisPatcher_DebugCommand *this,CUser *param_1)

{
  uint uVar1;
  CGuildServerProxy *this_00;
  
  uVar1 = CUser::get_acc_id(param_1);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendPowerWarEnd(this_00,uVar1);
  return 1;
}

```

---

## _debugCommandPowerWarStart

```asm
// === 0859040e DisPatcher_DebugCommand::_debugCommandPowerWarStart  [0x0859040e-0x859044d] ===
 859040e:	55                   	push   %ebp
 859040f:	89 e5                	mov    %esp,%ebp
 8590411:	53                   	push   %ebx
 8590412:	83 ec 14             	sub    $0x14,%esp
 8590415:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590418:	89 04 24             	mov    %eax,(%esp)
 859041b:	e8 4e 9f b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8590420:	89 c3                	mov    %eax,%ebx
 8590422:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8590427:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859042e:	00 
 859042f:	89 04 24             	mov    %eax,(%esp)
 8590432:	e8 81 cf b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8590437:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 859043b:	89 04 24             	mov    %eax,(%esp)
 859043e:	e8 3d da ed ff       	call   846de80 <_ZN17CGuildServerProxy17SendPowerWarStartEj>
 8590443:	b8 01 00 00 00       	mov    $0x1,%eax
 8590448:	83 c4 14             	add    $0x14,%esp
 859044b:	5b                   	pop    %ebx
 859044c:	5d                   	pop    %ebp
 859044d:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandPowerWarStart @ 0x859040e

/* DisPatcher_DebugCommand::_debugCommandPowerWarStart(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPowerWarStart(DisPatcher_DebugCommand *this,CUser *param_1)

{
  uint uVar1;
  CGuildServerProxy *this_00;
  
  uVar1 = CUser::get_acc_id(param_1);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendPowerWarStart(this_00,uVar1);
  return 1;
}

```

---

## _debugCommandPowerwarPointUp

```asm
// === 0858fe62 DisPatcher_DebugCommand::_debugCommandPowerwarPointUp  [0x0858fe62-0x858fee7] ===
 858fe62:	55                   	push   %ebp
 858fe63:	89 e5                	mov    %esp,%ebp
 858fe65:	83 ec 48             	sub    $0x48,%esp
 858fe68:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fe6b:	89 04 24             	mov    %eax,(%esp)
 858fe6e:	e8 29 5a bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858fe73:	83 f0 01             	xor    $0x1,%eax
 858fe76:	84 c0                	test   %al,%al
 858fe78:	74 07                	je     858fe81 <_ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND+0x1f>
 858fe7a:	b8 00 00 00 00       	mov    $0x0,%eax
 858fe7f:	eb 65                	jmp    858fee6 <_ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND+0x84>
 858fe81:	8d 45 cb             	lea    -0x35(%ebp),%eax
 858fe84:	89 04 24             	mov    %eax,(%esp)
 858fe87:	e8 80 08 d6 ff       	call   82f070c <_ZN35Packet_Guild_Change_Power_War_PointC1Ev>
 858fe8c:	8b 45 10             	mov    0x10(%ebp),%eax
 858fe8f:	8b 40 0e             	mov    0xe(%eax),%eax
 858fe92:	88 45 f6             	mov    %al,-0xa(%ebp)
 858fe95:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 858fe99:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fe9c:	89 04 24             	mov    %eax,(%esp)
 858fe9f:	e8 22 fe c9 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 858fea4:	88 45 d5             	mov    %al,-0x2b(%ebp)
 858fea7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 858feae:	ff 
 858feaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 858feb2:	89 04 24             	mov    %eax,(%esp)
 858feb5:	e8 e6 e0 0b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 858feba:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 858febd:	a1 2c be 40 09       	mov    0x940be2c,%eax
 858fec2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858fec9:	00 
 858feca:	89 04 24             	mov    %eax,(%esp)
 858fecd:	e8 e6 d4 b8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 858fed2:	8d 55 cb             	lea    -0x35(%ebp),%edx
 858fed5:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fed9:	89 04 24             	mov    %eax,(%esp)
 858fedc:	e8 7f e5 ed ff       	call   846e460 <_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point>
 858fee1:	b8 01 00 00 00       	mov    $0x1,%eax
 858fee6:	c9                   	leave
 858fee7:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandPowerwarPointUp @ 0x858fe62

/* DisPatcher_DebugCommand::_debugCommandPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandPowerwarPointUp
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Change_Power_War_Point local_39 [10];
  undefined1 local_2f;
  undefined4 local_2e;
  undefined1 local_e;
  undefined1 local_d;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    Packet_Guild_Change_Power_War_Point::Packet_Guild_Change_Power_War_Point(local_39);
    local_e = (undefined1)*(undefined4 *)(param_2 + 0xe);
    local_d = 0;
    local_2f = CUser::getPowerSide(param_1);
    local_2e = CUser::get_charac_no(param_1,-1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendPowerWarPoint(this_00,local_39);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandRequestMid

```asm
// === 08590506 DisPatcher_DebugCommand::_debugCommandRequestMid  [0x08590506-0x8590589] ===
 8590506:	55                   	push   %ebp
 8590507:	89 e5                	mov    %esp,%ebp
 8590509:	57                   	push   %edi
 859050a:	56                   	push   %esi
 859050b:	53                   	push   %ebx
 859050c:	83 ec 3c             	sub    $0x3c,%esp
 859050f:	8b 45 10             	mov    0x10(%ebp),%eax
 8590512:	8b 40 0e             	mov    0xe(%eax),%eax
 8590515:	83 f8 1d             	cmp    $0x1d,%eax
 8590518:	7f 63                	jg     859057d <_ZN23DisPatcher_DebugCommand23_debugCommandRequestMidEP5CUserR17MSG_DEBUG_COMMAND+0x77>
 859051a:	8b 45 10             	mov    0x10(%ebp),%eax
 859051d:	8b 40 0e             	mov    0xe(%eax),%eax
 8590520:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8590523:	8b 45 10             	mov    0x10(%ebp),%eax
 8590526:	83 c0 12             	add    $0x12,%eax
 8590529:	89 c7                	mov    %eax,%edi
 859052b:	8b 45 0c             	mov    0xc(%ebp),%eax
 859052e:	89 04 24             	mov    %eax,(%esp)
 8590531:	e8 60 87 b3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8590536:	89 c6                	mov    %eax,%esi
 8590538:	8b 45 0c             	mov    0xc(%ebp),%eax
 859053b:	89 04 24             	mov    %eax,(%esp)
 859053e:	e8 2b 9e b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8590543:	89 c3                	mov    %eax,%ebx
 8590545:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590548:	89 04 24             	mov    %eax,(%esp)
 859054b:	e8 40 b7 b3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8590550:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8590556:	89 44 24 04          	mov    %eax,0x4(%esp)
 859055a:	89 14 24             	mov    %edx,(%esp)
 859055d:	e8 28 1b b8 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8590562:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8590565:	89 54 24 10          	mov    %edx,0x10(%esp)
 8590569:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 859056d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8590571:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8590575:	89 04 24             	mov    %eax,(%esp)
 8590578:	e8 29 0c ee ff       	call   84711a6 <_ZN19CMonitorServerProxy18SendRequestUserMidEjjPci>
 859057d:	b8 01 00 00 00       	mov    $0x1,%eax
 8590582:	83 c4 3c             	add    $0x3c,%esp
 8590585:	5b                   	pop    %ebx
 8590586:	5e                   	pop    %esi
 8590587:	5f                   	pop    %edi
 8590588:	5d                   	pop    %ebp
 8590589:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandRequestMid @ 0x8590506

/* DisPatcher_DebugCommand::_debugCommandRequestMid(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandRequestMid
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  
  if (*(int *)(param_2 + 0xe) < 0x1e) {
    iVar1 = *(int *)(param_2 + 0xe);
    uVar2 = CUser::GetUID(param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar4);
    CMonitorServerProxy::SendRequestUserMid(this_00,uVar3,uVar2,(char *)(param_2 + 0x12),iVar1);
  }
  return 1;
}

```

---

## _debugCommandSetBlackCount

```asm
// === 0858fcc4 DisPatcher_DebugCommand::_debugCommandSetBlackCount  [0x0858fcc4-0x858fdc7] ===
 858fcc4:	55                   	push   %ebp
 858fcc5:	89 e5                	mov    %esp,%ebp
 858fcc7:	56                   	push   %esi
 858fcc8:	53                   	push   %ebx
 858fcc9:	83 ec 20             	sub    $0x20,%esp
 858fccc:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fccf:	89 04 24             	mov    %eax,(%esp)
 858fcd2:	e8 c5 5b bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858fcd7:	83 f0 01             	xor    $0x1,%eax
 858fcda:	84 c0                	test   %al,%al
 858fcdc:	74 0a                	je     858fce8 <_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 858fcde:	bb 00 00 00 00       	mov    $0x0,%ebx
 858fce3:	e9 d6 00 00 00       	jmp    858fdbe <_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND+0xfa>
 858fce8:	8b 45 10             	mov    0x10(%ebp),%eax
 858fceb:	8b 50 0e             	mov    0xe(%eax),%edx
 858fcee:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fcf1:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fcf5:	89 04 24             	mov    %eax,(%esp)
 858fcf8:	e8 b7 f9 c9 ff       	call   822f6b4 <_ZN15CUserCharacInfo23setCurrCharacBlackCountEj>
 858fcfd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd00:	89 04 24             	mov    %eax,(%esp)
 858fd03:	e8 44 e0 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858fd08:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858fd0f:	00 
 858fd10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858fd17:	00 
 858fd18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd1b:	89 04 24             	mov    %eax,(%esp)
 858fd1e:	e8 d9 bb b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 858fd23:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858fd2a:	00 
 858fd2b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd2e:	89 04 24             	mov    %eax,(%esp)
 858fd31:	e8 ea bb b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 858fd36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858fd3d:	00 
 858fd3e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd41:	89 04 24             	mov    %eax,(%esp)
 858fd44:	e8 5b a1 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 858fd49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd4c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858fd53:	00 
 858fd54:	89 44 24 04          	mov    %eax,0x4(%esp)
 858fd58:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fd5b:	89 04 24             	mov    %eax,(%esp)
 858fd5e:	e8 eb a6 0c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 858fd63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858fd6a:	00 
 858fd6b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd6e:	89 04 24             	mov    %eax,(%esp)
 858fd71:	e8 e2 bb b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 858fd76:	e8 2c a6 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 858fd7b:	8b 55 0c             	mov    0xc(%ebp),%edx
 858fd7e:	89 54 24 08          	mov    %edx,0x8(%esp)
 858fd82:	8d 55 ec             	lea    -0x14(%ebp),%edx
 858fd85:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fd89:	89 04 24             	mov    %eax,(%esp)
 858fd8c:	e8 cb 4b ba ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 858fd91:	bb 01 00 00 00       	mov    $0x1,%ebx
 858fd96:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fd99:	89 04 24             	mov    %eax,(%esp)
 858fd9c:	e8 df e0 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858fda1:	eb 1b                	jmp    858fdbe <_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND+0xfa>
 858fda3:	89 d3                	mov    %edx,%ebx
 858fda5:	89 c6                	mov    %eax,%esi
 858fda7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858fdaa:	89 04 24             	mov    %eax,(%esp)
 858fdad:	e8 ce e0 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858fdb2:	89 f0                	mov    %esi,%eax
 858fdb4:	89 da                	mov    %ebx,%edx
 858fdb6:	89 04 24             	mov    %eax,(%esp)
 858fdb9:	e8 92 39 55 00       	call   8ae3750 <_Unwind_Resume>
 858fdbe:	89 d8                	mov    %ebx,%eax
 858fdc0:	83 c4 20             	add    $0x20,%esp
 858fdc3:	5b                   	pop    %ebx
 858fdc4:	5e                   	pop    %esi
 858fdc5:	5d                   	pop    %ebp
 858fdc6:	c3                   	ret
 858fdc7:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandSetBlackCount @ 0x858fcc4

/* DisPatcher_DebugCommand::_debugCommandSetBlackCount(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandSetBlackCount
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,*(uint *)(param_2 + 0xe));
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0858fd1e to 0858fd90 has its CatchHandler @ 0858fda3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandSetEnchant

```asm
// === 0858fb4e DisPatcher_DebugCommand::_debugCommandSetEnchant  [0x0858fb4e-0x858fcc3] ===
 858fb4e:	55                   	push   %ebp
 858fb4f:	89 e5                	mov    %esp,%ebp
 858fb51:	56                   	push   %esi
 858fb52:	53                   	push   %ebx
 858fb53:	83 ec 30             	sub    $0x30,%esp
 858fb56:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fb59:	89 04 24             	mov    %eax,(%esp)
 858fb5c:	e8 3b 5d bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858fb61:	83 f0 01             	xor    $0x1,%eax
 858fb64:	84 c0                	test   %al,%al
 858fb66:	74 0a                	je     858fb72 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 858fb68:	bb 00 00 00 00       	mov    $0x0,%ebx
 858fb6d:	e9 48 01 00 00       	jmp    858fcba <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x16c>
 858fb72:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fb75:	89 04 24             	mov    %eax,(%esp)
 858fb78:	e8 b5 08 b9 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 858fb7d:	85 c0                	test   %eax,%eax
 858fb7f:	0f 95 c0             	setne  %al
 858fb82:	84 c0                	test   %al,%al
 858fb84:	0f 84 2b 01 00 00    	je     858fcb5 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x167>
 858fb8a:	8b 45 10             	mov    0x10(%ebp),%eax
 858fb8d:	8b 40 0e             	mov    0xe(%eax),%eax
 858fb90:	89 04 24             	mov    %eax,(%esp)
 858fb93:	e8 ad 7c b6 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 858fb98:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858fb9b:	8b 45 10             	mov    0x10(%ebp),%eax
 858fb9e:	8b 58 12             	mov    0x12(%eax),%ebx
 858fba1:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fba4:	89 04 24             	mov    %eax,(%esp)
 858fba7:	e8 e2 a6 b4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 858fbac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858fbb0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 858fbb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 858fbb7:	89 04 24             	mov    %eax,(%esp)
 858fbba:	e8 ef c6 f6 ff       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 858fbbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858fbc2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858fbc6:	0f 84 e9 00 00 00    	je     858fcb5 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x167>
 858fbcc:	8b 45 10             	mov    0x10(%ebp),%eax
 858fbcf:	8b 40 16             	mov    0x16(%eax),%eax
 858fbd2:	89 c2                	mov    %eax,%edx
 858fbd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858fbd7:	89 50 0d             	mov    %edx,0xd(%eax)
 858fbda:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fbdd:	89 04 24             	mov    %eax,(%esp)
 858fbe0:	e8 67 e1 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858fbe5:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 858fbec:	00 
 858fbed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858fbf4:	00 
 858fbf5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fbf8:	89 04 24             	mov    %eax,(%esp)
 858fbfb:	e8 fc bc b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 858fc00:	8b 45 10             	mov    0x10(%ebp),%eax
 858fc03:	8b 40 0e             	mov    0xe(%eax),%eax
 858fc06:	89 44 24 04          	mov    %eax,0x4(%esp)
 858fc0a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fc0d:	89 04 24             	mov    %eax,(%esp)
 858fc10:	e8 0b bd b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 858fc15:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858fc1c:	00 
 858fc1d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fc20:	89 04 24             	mov    %eax,(%esp)
 858fc23:	e8 7c a2 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 858fc28:	8b 45 10             	mov    0x10(%ebp),%eax
 858fc2b:	8b 70 12             	mov    0x12(%eax),%esi
 858fc2e:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 858fc31:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fc34:	89 04 24             	mov    %eax,(%esp)
 858fc37:	e8 42 a6 b4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 858fc3c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 858fc3f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 858fc43:	89 74 24 08          	mov    %esi,0x8(%esp)
 858fc47:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858fc4b:	89 04 24             	mov    %eax,(%esp)
 858fc4e:	e8 69 ca f6 ff       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 858fc53:	83 f0 01             	xor    $0x1,%eax
 858fc56:	84 c0                	test   %al,%al
 858fc58:	74 07                	je     858fc61 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x113>
 858fc5a:	bb 00 00 00 00       	mov    $0x0,%ebx
 858fc5f:	eb 47                	jmp    858fca8 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x15a>
 858fc61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858fc68:	00 
 858fc69:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fc6c:	89 04 24             	mov    %eax,(%esp)
 858fc6f:	e8 e4 bc b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 858fc74:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fc77:	89 44 24 04          	mov    %eax,0x4(%esp)
 858fc7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fc7e:	89 04 24             	mov    %eax,(%esp)
 858fc81:	e8 34 89 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858fc86:	bb 01 00 00 00       	mov    $0x1,%ebx
 858fc8b:	eb 1b                	jmp    858fca8 <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x15a>
 858fc8d:	89 d3                	mov    %edx,%ebx
 858fc8f:	89 c6                	mov    %eax,%esi
 858fc91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fc94:	89 04 24             	mov    %eax,(%esp)
 858fc97:	e8 e4 e1 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858fc9c:	89 f0                	mov    %esi,%eax
 858fc9e:	89 da                	mov    %ebx,%edx
 858fca0:	89 04 24             	mov    %eax,(%esp)
 858fca3:	e8 a8 3a 55 00       	call   8ae3750 <_Unwind_Resume>
 858fca8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 858fcab:	89 04 24             	mov    %eax,(%esp)
 858fcae:	e8 cd e1 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858fcb3:	eb 05                	jmp    858fcba <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND+0x16c>
 858fcb5:	bb 00 00 00 00       	mov    $0x0,%ebx
 858fcba:	89 d8                	mov    %ebx,%eax
 858fcbc:	83 c4 30             	add    $0x30,%esp
 858fcbf:	5b                   	pop    %ebx
 858fcc0:	5e                   	pop    %esi
 858fcc1:	5d                   	pop    %ebp
 858fcc2:	c3                   	ret
 858fcc3:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandSetEnchant @ 0x858fb4e

/* DisPatcher_DebugCommand::_debugCommandSetEnchant(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandSetEnchant
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if ((cVar2 == '\x01') &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    local_14 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xe));
    iVar3 = *(int *)(param_2 + 0x12);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_10 = CInventory::GetInvenRef(pCVar4,local_14,iVar3);
    if (local_10 != 0) {
      *(undefined4 *)(local_10 + 0xd) = *(undefined4 *)(param_2 + 0x16);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0858fbfb to 0858fc85 has its CatchHandler @ 0858fc8d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(param_2 + 0xe));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      iVar3 = local_14;
      uVar1 = *(undefined4 *)(param_2 + 0x12);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::MakeItemPacket(pCVar4,iVar3,uVar1,local_20);
      if (cVar2 == '\x01') {
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
      return cVar2 == '\x01';
    }
  }
  return false;
}

```

---

## _debugCommandSetGrowType

```asm
// === 0858ee54 DisPatcher_DebugCommand::_debugCommandSetGrowType  [0x0858ee54-0x858efdd] ===
 858ee54:	55                   	push   %ebp
 858ee55:	89 e5                	mov    %esp,%ebp
 858ee57:	56                   	push   %esi
 858ee58:	53                   	push   %ebx
 858ee59:	83 ec 30             	sub    $0x30,%esp
 858ee5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ee5f:	89 04 24             	mov    %eax,(%esp)
 858ee62:	e8 35 6a bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858ee67:	83 f0 01             	xor    $0x1,%eax
 858ee6a:	84 c0                	test   %al,%al
 858ee6c:	74 0a                	je     858ee78 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x24>
 858ee6e:	b8 00 00 00 00       	mov    $0x0,%eax
 858ee73:	e9 5e 01 00 00       	jmp    858efd6 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x182>
 858ee78:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ee7b:	89 04 24             	mov    %eax,(%esp)
 858ee7e:	e8 a5 21 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858ee83:	89 c6                	mov    %eax,%esi
 858ee85:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ee88:	89 04 24             	mov    %eax,(%esp)
 858ee8b:	e8 de b4 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858ee90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ee97:	00 
 858ee98:	89 04 24             	mov    %eax,(%esp)
 858ee9b:	e8 ab a1 b7 ff       	call   810904b <_Z14NumberToStringji>
 858eea0:	89 c3                	mov    %eax,%ebx
 858eea2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858eea9:	00 
 858eeaa:	c7 44 24 08 33 01 00 	movl   $0x133,0x8(%esp)
 858eeb1:	00 
 858eeb2:	c7 44 24 04 20 82 cb 	movl   $0x8cb8220,0x4(%esp)
 858eeb9:	08 
 858eeba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858eebd:	89 04 24             	mov    %eax,(%esp)
 858eec0:	e8 53 08 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858eec5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858eec9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858eecd:	c7 44 24 04 13 e7 ca 	movl   $0x8cae713,0x4(%esp)
 858eed4:	08 
 858eed5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858eed8:	89 04 24             	mov    %eax,(%esp)
 858eedb:	e8 a8 08 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858eee0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 858eee7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858eeee:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 858eef2:	75 08                	jne    858eefc <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0xa8>
 858eef4:	8b 45 14             	mov    0x14(%ebp),%eax
 858eef7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858eefa:	eb 47                	jmp    858ef43 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0xef>
 858eefc:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 858ef00:	75 37                	jne    858ef39 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0xe5>
 858ef02:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ef05:	89 04 24             	mov    %eax,(%esp)
 858ef08:	e8 87 1d b8 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 858ef0d:	84 c0                	test   %al,%al
 858ef0f:	0f 94 c0             	sete   %al
 858ef12:	84 c0                	test   %al,%al
 858ef14:	74 0a                	je     858ef20 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0xcc>
 858ef16:	b8 00 00 00 00       	mov    $0x0,%eax
 858ef1b:	e9 b6 00 00 00       	jmp    858efd6 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x182>
 858ef20:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ef23:	89 04 24             	mov    %eax,(%esp)
 858ef26:	e8 69 1d b8 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 858ef2b:	0f be c0             	movsbl %al,%eax
 858ef2e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858ef31:	8b 45 14             	mov    0x14(%ebp),%eax
 858ef34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858ef37:	eb 0a                	jmp    858ef43 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0xef>
 858ef39:	b8 00 00 00 00       	mov    $0x0,%eax
 858ef3e:	e9 93 00 00 00       	jmp    858efd6 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x182>
 858ef43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858ef46:	89 44 24 08          	mov    %eax,0x8(%esp)
 858ef4a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858ef4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ef51:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ef54:	89 04 24             	mov    %eax,(%esp)
 858ef57:	e8 ec c0 0e 00       	call   867b048 <_ZN5CUser17ChangeGrowType_GMEii>
 858ef5c:	84 c0                	test   %al,%al
 858ef5e:	74 71                	je     858efd1 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x17d>
 858ef60:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ef63:	89 04 24             	mov    %eax,(%esp)
 858ef66:	e8 21 b4 b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 858ef6b:	83 f8 03             	cmp    $0x3,%eax
 858ef6e:	74 07                	je     858ef77 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x123>
 858ef70:	83 f8 05             	cmp    $0x5,%eax
 858ef73:	74 27                	je     858ef9c <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x148>
 858ef75:	eb 48                	jmp    858efbf <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x16b>
 858ef77:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858ef7e:	00 
 858ef7f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858ef86:	00 
 858ef87:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ef8e:	00 
 858ef8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ef92:	89 04 24             	mov    %eax,(%esp)
 858ef95:	e8 c2 ca 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858ef9a:	eb 23                	jmp    858efbf <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x16b>
 858ef9c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858efa3:	00 
 858efa4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858efab:	00 
 858efac:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858efb3:	00 
 858efb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 858efb7:	89 04 24             	mov    %eax,(%esp)
 858efba:	e8 9d ca 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858efbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 858efc2:	89 04 24             	mov    %eax,(%esp)
 858efc5:	e8 a0 d4 0d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 858efca:	b8 01 00 00 00       	mov    $0x1,%eax
 858efcf:	eb 05                	jmp    858efd6 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii+0x182>
 858efd1:	b8 00 00 00 00       	mov    $0x0,%eax
 858efd6:	83 c4 30             	add    $0x30,%esp
 858efd9:	5b                   	pop    %ebx
 858efda:	5e                   	pop    %esi
 858efdb:	5d                   	pop    %ebp
 858efdc:	c3                   	ret
 858efdd:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandSetGrowType @ 0x858ee54

/* DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandSetGrowType
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\x01') {
    return 0;
  }
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar3 = CUser::get_acc_id(param_1);
  uVar4 = NumberToString(uVar3,0);
  cMyTrace::cMyTrace(local_24,
                     "bool DisPatcher_DebugCommand::_debugCommandSetGrowType(CUser*, int, int)",
                     0x133,0);
  cMyTrace::operator()(local_24,"%s:\'%s\' GM Mode Grow Type.",uVar4,uVar2);
  local_14 = 0;
  local_10 = 0;
  if (param_2 == 1) {
    local_14 = param_3;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_14 = (int)cVar1;
    local_10 = param_3;
  }
  cVar1 = CUser::ChangeGrowType_GM(param_1,local_14,local_10);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      CUser::SendNotiPacket(param_1,0,2,0);
    }
    else if (iVar5 == 5) {
      CUser::SendNotiPacket(param_1,2,2,1);
    }
    CUser::send_skill_info(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## _debugCommandSetLevel

```asm
// === 0858efde DisPatcher_DebugCommand::_debugCommandSetLevel  [0x0858efde-0x858f3b9] ===
 858efde:	55                   	push   %ebp
 858efdf:	89 e5                	mov    %esp,%ebp
 858efe1:	56                   	push   %esi
 858efe2:	53                   	push   %ebx
 858efe3:	83 ec 60             	sub    $0x60,%esp
 858efe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858efe9:	89 04 24             	mov    %eax,(%esp)
 858efec:	e8 ab 68 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858eff1:	83 f0 01             	xor    $0x1,%eax
 858eff4:	84 c0                	test   %al,%al
 858eff6:	74 0a                	je     858f002 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x24>
 858eff8:	b8 00 00 00 00       	mov    $0x0,%eax
 858effd:	e9 b0 03 00 00       	jmp    858f3b2 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3d4>
 858f002:	83 7d 10 46          	cmpl   $0x46,0x10(%ebp)
 858f006:	7e 0a                	jle    858f012 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x34>
 858f008:	b8 00 00 00 00       	mov    $0x0,%eax
 858f00d:	e9 a0 03 00 00       	jmp    858f3b2 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3d4>
 858f012:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 858f016:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f019:	89 04 24             	mov    %eax,(%esp)
 858f01c:	e8 97 b2 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f021:	8b 55 10             	mov    0x10(%ebp),%edx
 858f024:	89 d1                	mov    %edx,%ecx
 858f026:	29 c1                	sub    %eax,%ecx
 858f028:	89 c8                	mov    %ecx,%eax
 858f02a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 858f02d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 858f031:	75 09                	jne    858f03c <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x5e>
 858f033:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 858f037:	e9 b2 00 00 00       	jmp    858f0ee <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x110>
 858f03c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 858f040:	7e 57                	jle    858f099 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0xbb>
 858f042:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 858f049:	eb 3f                	jmp    858f08a <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0xac>
 858f04b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f04e:	89 04 24             	mov    %eax,(%esp)
 858f051:	e8 62 b2 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f056:	83 c0 01             	add    $0x1,%eax
 858f059:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 858f05c:	c7 45 d8 c8 00 00 00 	movl   $0xc8,-0x28(%ebp)
 858f063:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 858f066:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f06a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858f06d:	89 04 24             	mov    %eax,(%esp)
 858f070:	e8 99 08 b5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 858f075:	8b 00                	mov    (%eax),%eax
 858f077:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f07b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f07e:	89 04 24             	mov    %eax,(%esp)
 858f081:	e8 d6 b8 0e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 858f086:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 858f08a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858f08d:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 858f090:	0f 9c c0             	setl   %al
 858f093:	84 c0                	test   %al,%al
 858f095:	75 b4                	jne    858f04b <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x6d>
 858f097:	eb 55                	jmp    858f0ee <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x110>
 858f099:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 858f0a0:	eb 3f                	jmp    858f0e1 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x103>
 858f0a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f0a5:	89 04 24             	mov    %eax,(%esp)
 858f0a8:	e8 0b b2 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f0ad:	83 e8 01             	sub    $0x1,%eax
 858f0b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 858f0b3:	c7 45 e0 c8 00 00 00 	movl   $0xc8,-0x20(%ebp)
 858f0ba:	8d 45 dc             	lea    -0x24(%ebp),%eax
 858f0bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f0c1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 858f0c4:	89 04 24             	mov    %eax,(%esp)
 858f0c7:	e8 42 08 b5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 858f0cc:	8b 00                	mov    (%eax),%eax
 858f0ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f0d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f0d5:	89 04 24             	mov    %eax,(%esp)
 858f0d8:	e8 7f b8 0e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 858f0dd:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 858f0e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858f0e4:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 858f0e7:	0f 9f c0             	setg   %al
 858f0ea:	84 c0                	test   %al,%al
 858f0ec:	75 b4                	jne    858f0a2 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0xc4>
 858f0ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f0f1:	89 04 24             	mov    %eax,(%esp)
 858f0f4:	e8 21 40 0d 00       	call   866311a <_ZN5CUser10_onLevelUpEv>
 858f0f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f0fc:	89 04 24             	mov    %eax,(%esp)
 858f0ff:	e8 b4 b1 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f104:	89 c3                	mov    %eax,%ebx
 858f106:	e8 90 d0 b3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 858f10b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f10f:	89 04 24             	mov    %eax,(%esp)
 858f112:	e8 2b 13 dd ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 858f117:	89 45 ec             	mov    %eax,-0x14(%ebp)
 858f11a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f11d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 858f120:	89 54 24 04          	mov    %edx,0x4(%esp)
 858f124:	89 04 24             	mov    %eax,(%esp)
 858f127:	e8 50 b7 c0 ff       	call   819a87c <_ZN15CUserCharacInfo15setCurCharacExpEi>
 858f12c:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 858f130:	0f 84 78 02 00 00    	je     858f3ae <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3d0>
 858f136:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f139:	89 04 24             	mov    %eax,(%esp)
 858f13c:	e8 c3 0d 10 00       	call   868ff04 <_ZN5CUser21CalcurateUserMaxLevelEv>
 858f141:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f144:	89 04 24             	mov    %eax,(%esp)
 858f147:	e8 00 ec ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858f14c:	c7 44 24 08 ba 01 00 	movl   $0x1ba,0x8(%esp)
 858f153:	00 
 858f154:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f15b:	00 
 858f15c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f15f:	89 04 24             	mov    %eax,(%esp)
 858f162:	e8 95 c7 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 858f167:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f16e:	00 
 858f16f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f172:	89 04 24             	mov    %eax,(%esp)
 858f175:	e8 a6 c7 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 858f17a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f17d:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f181:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f184:	89 04 24             	mov    %eax,(%esp)
 858f187:	e8 78 f5 0f 00       	call   868e704 <_ZN5CUser22SetMercenaryInfoPacketER11PacketGuard>
 858f18c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f193:	00 
 858f194:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f197:	89 04 24             	mov    %eax,(%esp)
 858f19a:	e8 b9 c7 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 858f19f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f1a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f1a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f1a9:	89 04 24             	mov    %eax,(%esp)
 858f1ac:	e8 09 94 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858f1b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f1b4:	89 04 24             	mov    %eax,(%esp)
 858f1b7:	e8 e4 75 0b 00       	call   86467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>
 858f1bc:	85 c0                	test   %eax,%eax
 858f1be:	74 23                	je     858f1e3 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x205>
 858f1c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f1c3:	89 04 24             	mov    %eax,(%esp)
 858f1c6:	e8 ed b0 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 858f1cb:	89 c3                	mov    %eax,%ebx
 858f1cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f1d0:	89 04 24             	mov    %eax,(%esp)
 858f1d3:	e8 c8 75 0b 00       	call   86467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>
 858f1d8:	39 c3                	cmp    %eax,%ebx
 858f1da:	75 07                	jne    858f1e3 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x205>
 858f1dc:	b8 01 00 00 00       	mov    $0x1,%eax
 858f1e1:	eb 05                	jmp    858f1e8 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x20a>
 858f1e3:	b8 00 00 00 00       	mov    $0x0,%eax
 858f1e8:	84 c0                	test   %al,%al
 858f1ea:	74 13                	je     858f1ff <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x221>
 858f1ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f1ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f1f6:	00 
 858f1f7:	89 04 24             	mov    %eax,(%esp)
 858f1fa:	e8 c3 75 0b 00       	call   86467c2 <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi>
 858f1ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f202:	89 04 24             	mov    %eax,(%esp)
 858f205:	e8 82 b1 b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 858f20a:	83 f8 03             	cmp    $0x3,%eax
 858f20d:	74 0e                	je     858f21d <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x23f>
 858f20f:	83 f8 05             	cmp    $0x5,%eax
 858f212:	0f 84 cf 00 00 00    	je     858f2e7 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x309>
 858f218:	e9 69 01 00 00       	jmp    858f386 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3a8>
 858f21d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f224:	00 
 858f225:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 858f22c:	00 
 858f22d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f234:	00 
 858f235:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f238:	89 04 24             	mov    %eax,(%esp)
 858f23b:	e8 1c c8 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f240:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f247:	00 
 858f248:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f24f:	00 
 858f250:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858f257:	00 
 858f258:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f25b:	89 04 24             	mov    %eax,(%esp)
 858f25e:	e8 f9 c7 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f263:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858f26a:	00 
 858f26b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f272:	00 
 858f273:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f27a:	00 
 858f27b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f27e:	89 04 24             	mov    %eax,(%esp)
 858f281:	e8 d6 c7 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f286:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858f289:	89 04 24             	mov    %eax,(%esp)
 858f28c:	e8 bb ea ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858f291:	8d 5d bc             	lea    -0x44(%ebp),%ebx
 858f294:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f297:	89 04 24             	mov    %eax,(%esp)
 858f29a:	e8 07 b6 c0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 858f29f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f2a3:	89 04 24             	mov    %eax,(%esp)
 858f2a6:	e8 fd c8 11 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 858f2ab:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858f2ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f2b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f2b5:	89 04 24             	mov    %eax,(%esp)
 858f2b8:	e8 fd 92 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858f2bd:	eb 18                	jmp    858f2d7 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x2f9>
 858f2bf:	89 d3                	mov    %edx,%ebx
 858f2c1:	89 c6                	mov    %eax,%esi
 858f2c3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858f2c6:	89 04 24             	mov    %eax,(%esp)
 858f2c9:	e8 b2 eb ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f2ce:	89 f0                	mov    %esi,%eax
 858f2d0:	89 da                	mov    %ebx,%edx
 858f2d2:	e9 bc 00 00 00       	jmp    858f393 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3b5>
 858f2d7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858f2da:	89 04 24             	mov    %eax,(%esp)
 858f2dd:	e8 9e eb ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f2e2:	e9 9f 00 00 00       	jmp    858f386 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3a8>
 858f2e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858f2ee:	00 
 858f2ef:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 858f2f6:	00 
 858f2f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858f2fe:	00 
 858f2ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f302:	89 04 24             	mov    %eax,(%esp)
 858f305:	e8 52 c7 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f30a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858f311:	00 
 858f312:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858f319:	00 
 858f31a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858f321:	00 
 858f322:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f325:	89 04 24             	mov    %eax,(%esp)
 858f328:	e8 2f c7 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858f32d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 858f330:	89 04 24             	mov    %eax,(%esp)
 858f333:	e8 14 ea ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858f338:	8d 5d b0             	lea    -0x50(%ebp),%ebx
 858f33b:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f33e:	89 04 24             	mov    %eax,(%esp)
 858f341:	e8 60 b5 c0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 858f346:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 858f34a:	89 04 24             	mov    %eax,(%esp)
 858f34d:	e8 56 c8 11 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 858f352:	8d 45 b0             	lea    -0x50(%ebp),%eax
 858f355:	89 44 24 04          	mov    %eax,0x4(%esp)
 858f359:	8b 45 0c             	mov    0xc(%ebp),%eax
 858f35c:	89 04 24             	mov    %eax,(%esp)
 858f35f:	e8 56 92 0b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 858f364:	eb 15                	jmp    858f37b <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x39d>
 858f366:	89 d3                	mov    %edx,%ebx
 858f368:	89 c6                	mov    %eax,%esi
 858f36a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 858f36d:	89 04 24             	mov    %eax,(%esp)
 858f370:	e8 0b eb ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f375:	89 f0                	mov    %esi,%eax
 858f377:	89 da                	mov    %ebx,%edx
 858f379:	eb 18                	jmp    858f393 <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3b5>
 858f37b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 858f37e:	89 04 24             	mov    %eax,(%esp)
 858f381:	e8 fa ea ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f386:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f389:	89 04 24             	mov    %eax,(%esp)
 858f38c:	e8 ef ea ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f391:	eb 1b                	jmp    858f3ae <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri+0x3d0>
 858f393:	89 d3                	mov    %edx,%ebx
 858f395:	89 c6                	mov    %eax,%esi
 858f397:	8d 45 c8             	lea    -0x38(%ebp),%eax
 858f39a:	89 04 24             	mov    %eax,(%esp)
 858f39d:	e8 de ea ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858f3a2:	89 f0                	mov    %esi,%eax
 858f3a4:	89 da                	mov    %ebx,%edx
 858f3a6:	89 04 24             	mov    %eax,(%esp)
 858f3a9:	e8 a2 43 55 00       	call   8ae3750 <_Unwind_Resume>
 858f3ae:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 858f3b2:	83 c4 60             	add    $0x60,%esp
 858f3b5:	5b                   	pop    %ebx
 858f3b6:	5e                   	pop    %esi
 858f3b7:	5d                   	pop    %ebp
 858f3b8:	c3                   	ret
 858f3b9:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandSetLevel @ 0x858efde

/* DisPatcher_DebugCommand::_debugCommandSetLevel(CUser*, int) */

char __thiscall
DisPatcher_DebugCommand::_debugCommandSetLevel
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  UserQuest *pUVar6;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  int local_30 [3];
  int local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if (cVar2 != '\x01') {
    return '\0';
  }
  if (0x46 < param_2) {
    return '\0';
  }
  local_1d = '\x01';
  local_1c = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_1c = param_2 - local_1c;
  if (local_1c == 0) {
    local_1d = '\0';
  }
  else if (local_1c < 1) {
    for (local_10 = 0; local_1c < local_10; local_10 = local_10 + -1) {
      local_30[2] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_30[2] = local_30[2] + -1;
      local_24 = 200;
      piVar3 = std::min<int>(&local_24,local_30 + 2);
      CUser::SetCharacLevel(param_1,*piVar3);
    }
  }
  else {
    for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
      local_30[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      local_30[0] = local_30[0] + 1;
      local_30[1] = 200;
      piVar3 = std::min<int>(local_30 + 1,local_30);
      CUser::SetCharacLevel(param_1,*piVar3);
    }
  }
  CUser::_onLevelUp(param_1);
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::get_level_exp(this_00,iVar4);
  CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_18);
  if (local_1d == '\0') {
    return '\0';
  }
  CUser::CalcurateUserMaxLevel(param_1);
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0858f162 to 0858f290 has its CatchHandler @ 0858f393 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1ba);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  CUser::SetMercenaryInfoPacket(param_1,local_3c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send(param_1,local_3c);
  iVar4 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_0858f1e8;
    }
  }
  bVar1 = false;
LAB_0858f1e8:
  if (bVar1) {
    CUserCharacInfo::SetCurCharacMaxEquipLevel((CUserCharacInfo *)param_1,0);
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    CUser::SendNotiPacket(param_1,1,0x25,0);
    CUser::SendNotiPacket(param_1,0,2,0);
    CUser::SendNotiPacket(param_1,1,2,1);
    PacketGuard::PacketGuard(local_48);
    pUVar6 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f2a6 to 0858f2bc has its CatchHandler @ 0858f2bf */
    UserQuest::get_quest_info(pUVar6,(char *)local_48);
    CUser::Send(param_1,local_48);
                    /* try { // try from 0858f2dd to 0858f337 has its CatchHandler @ 0858f393 */
    PacketGuard::~PacketGuard(local_48);
  }
  else if (iVar4 == 5) {
    CUser::SendNotiPacket(param_1,1,0x25,0);
    CUser::SendNotiPacket(param_1,2,2,1);
    PacketGuard::PacketGuard(local_54);
    pUVar6 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0858f34d to 0858f363 has its CatchHandler @ 0858f366 */
    UserQuest::get_quest_info(pUVar6,(char *)local_54);
    CUser::Send(param_1,local_54);
                    /* try { // try from 0858f381 to 0858f385 has its CatchHandler @ 0858f393 */
    PacketGuard::~PacketGuard(local_54);
  }
  PacketGuard::~PacketGuard(local_3c);
  return local_1d;
}

```

---

## _debugCommandSetSkill

```asm
// === 0858eab8 DisPatcher_DebugCommand::_debugCommandSetSkill  [0x0858eab8-0x858ebcb] ===
 858eab8:	55                   	push   %ebp
 858eab9:	89 e5                	mov    %esp,%ebp
 858eabb:	56                   	push   %esi
 858eabc:	53                   	push   %ebx
 858eabd:	83 ec 30             	sub    $0x30,%esp
 858eac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eac3:	89 04 24             	mov    %eax,(%esp)
 858eac6:	e8 d1 6d bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858eacb:	83 f0 01             	xor    $0x1,%eax
 858eace:	84 c0                	test   %al,%al
 858ead0:	74 0a                	je     858eadc <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x24>
 858ead2:	b8 00 00 00 00       	mov    $0x0,%eax
 858ead7:	e9 e8 00 00 00       	jmp    858ebc4 <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x10c>
 858eadc:	8b 45 14             	mov    0x14(%ebp),%eax
 858eadf:	89 44 24 08          	mov    %eax,0x8(%esp)
 858eae3:	8b 45 10             	mov    0x10(%ebp),%eax
 858eae6:	89 44 24 04          	mov    %eax,0x4(%esp)
 858eaea:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eaed:	89 04 24             	mov    %eax,(%esp)
 858eaf0:	e8 27 ca 0e 00       	call   867b51c <_ZN5CUser13SetSkillLevelEii>
 858eaf5:	84 c0                	test   %al,%al
 858eaf7:	0f 84 bb 00 00 00    	je     858ebb8 <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x100>
 858eafd:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eb00:	89 04 24             	mov    %eax,(%esp)
 858eb03:	e8 20 25 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 858eb08:	89 c6                	mov    %eax,%esi
 858eb0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eb0d:	89 04 24             	mov    %eax,(%esp)
 858eb10:	e8 59 b8 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 858eb15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858eb1c:	00 
 858eb1d:	89 04 24             	mov    %eax,(%esp)
 858eb20:	e8 26 a5 b7 ff       	call   810904b <_Z14NumberToStringji>
 858eb25:	89 c3                	mov    %eax,%ebx
 858eb27:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858eb2e:	00 
 858eb2f:	c7 44 24 08 a2 00 00 	movl   $0xa2,0x8(%esp)
 858eb36:	00 
 858eb37:	c7 44 24 04 40 83 cb 	movl   $0x8cb8340,0x4(%esp)
 858eb3e:	08 
 858eb3f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858eb42:	89 04 24             	mov    %eax,(%esp)
 858eb45:	e8 ce 0b fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 858eb4a:	8b 45 14             	mov    0x14(%ebp),%eax
 858eb4d:	89 44 24 14          	mov    %eax,0x14(%esp)
 858eb51:	8b 45 10             	mov    0x10(%ebp),%eax
 858eb54:	89 44 24 10          	mov    %eax,0x10(%esp)
 858eb58:	89 74 24 0c          	mov    %esi,0xc(%esp)
 858eb5c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 858eb60:	c7 44 24 04 cc e6 ca 	movl   $0x8cae6cc,0x4(%esp)
 858eb67:	08 
 858eb68:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858eb6b:	89 04 24             	mov    %eax,(%esp)
 858eb6e:	e8 15 0c fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858eb73:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eb76:	89 04 24             	mov    %eax,(%esp)
 858eb79:	e8 ec d8 0d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 858eb7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 858eb81:	89 04 24             	mov    %eax,(%esp)
 858eb84:	e8 03 b8 b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 858eb89:	83 f8 05             	cmp    $0x5,%eax
 858eb8c:	0f 94 c0             	sete   %al
 858eb8f:	84 c0                	test   %al,%al
 858eb91:	74 2c                	je     858ebbf <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x107>
 858eb93:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 858eb9a:	00 
 858eb9b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858eba2:	00 
 858eba3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 858ebaa:	00 
 858ebab:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ebae:	89 04 24             	mov    %eax,(%esp)
 858ebb1:	e8 a6 ce 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 858ebb6:	eb 07                	jmp    858ebbf <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x107>
 858ebb8:	b8 00 00 00 00       	mov    $0x0,%eax
 858ebbd:	eb 05                	jmp    858ebc4 <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii+0x10c>
 858ebbf:	b8 01 00 00 00       	mov    $0x1,%eax
 858ebc4:	83 c4 30             	add    $0x30,%esp
 858ebc7:	5b                   	pop    %ebx
 858ebc8:	5e                   	pop    %esi
 858ebc9:	5d                   	pop    %ebp
 858ebca:	c3                   	ret
 858ebcb:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandSetSkill @ 0x858eab8

/* DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandSetSkill
          (DisPatcher_DebugCommand *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    cVar1 = CUser::SetSkillLevel(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar3 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar3,0);
      cMyTrace::cMyTrace(local_1c,
                         "bool DisPatcher_DebugCommand::_debugCommandSetSkill(CUser*, int, int)",
                         0xa2,0);
      cMyTrace::operator()
                (local_1c,"%s:\'%s\' GM Mode Set Skill(%d) Level(%d).",uVar4,uVar2,param_2,param_3);
      CUser::send_skill_info(param_1);
      iVar5 = CUser::get_state(param_1);
      if (iVar5 == 5) {
        CUser::SendNotiPacket(param_1,2,2,1);
      }
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

## _debugCommandSetUserDefine

```asm
// === 085908ba DisPatcher_DebugCommand::_debugCommandSetUserDefine  [0x085908ba-0x85908d6] ===
 85908ba:	55                   	push   %ebp
 85908bb:	89 e5                	mov    %esp,%ebp
 85908bd:	81 ec 40 01 00 00    	sub    $0x140,%esp
 85908c3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85908c7:	74 07                	je     85908d0 <_ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf+0x16>
 85908c9:	b8 00 00 00 00       	mov    $0x0,%eax
 85908ce:	eb 05                	jmp    85908d5 <_ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf+0x1b>
 85908d0:	b8 01 00 00 00       	mov    $0x1,%eax
 85908d5:	c9                   	leave
 85908d6:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandSetUserDefine @ 0x85908ba

/* DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser*, PacketBuf&) */

bool DisPatcher_DebugCommand::_debugCommandSetUserDefine(CUser *param_1,PacketBuf *param_2)

{
  return param_2 == (PacketBuf *)0x0;
}

```

---

## _debugCommandUserPowerwarPointUp

```asm
// === 0858fee8 DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp  [0x0858fee8-0x858ffed] ===
 858fee8:	55                   	push   %ebp
 858fee9:	89 e5                	mov    %esp,%ebp
 858feeb:	56                   	push   %esi
 858feec:	53                   	push   %ebx
 858feed:	83 ec 20             	sub    $0x20,%esp
 858fef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 858fef3:	89 04 24             	mov    %eax,(%esp)
 858fef6:	e8 a1 59 bb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 858fefb:	83 f0 01             	xor    $0x1,%eax
 858fefe:	84 c0                	test   %al,%al
 858ff00:	74 0a                	je     858ff0c <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND+0x24>
 858ff02:	bb 00 00 00 00       	mov    $0x0,%ebx
 858ff07:	e9 d9 00 00 00       	jmp    858ffe5 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND+0xfd>
 858ff0c:	8b 45 10             	mov    0x10(%ebp),%eax
 858ff0f:	8b 40 0e             	mov    0xe(%eax),%eax
 858ff12:	0f bf d0             	movswl %ax,%edx
 858ff15:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ff18:	89 54 24 04          	mov    %edx,0x4(%esp)
 858ff1c:	89 04 24             	mov    %eax,(%esp)
 858ff1f:	e8 d8 7f 0f 00       	call   8687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>
 858ff24:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff27:	89 04 24             	mov    %eax,(%esp)
 858ff2a:	e8 1d de ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 858ff2f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 858ff36:	00 
 858ff37:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ff3e:	00 
 858ff3f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff42:	89 04 24             	mov    %eax,(%esp)
 858ff45:	e8 b2 b9 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 858ff4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858ff51:	00 
 858ff52:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff55:	89 04 24             	mov    %eax,(%esp)
 858ff58:	e8 c3 b9 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 858ff5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858ff64:	00 
 858ff65:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff68:	89 04 24             	mov    %eax,(%esp)
 858ff6b:	e8 34 9f b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 858ff70:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858ff7a:	00 
 858ff7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858ff7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 858ff82:	89 04 24             	mov    %eax,(%esp)
 858ff85:	e8 c4 a4 0c 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 858ff8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 858ff91:	00 
 858ff92:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ff95:	89 04 24             	mov    %eax,(%esp)
 858ff98:	e8 bb b9 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 858ff9d:	e8 05 a4 b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 858ffa2:	8b 55 0c             	mov    0xc(%ebp),%edx
 858ffa5:	89 54 24 08          	mov    %edx,0x8(%esp)
 858ffa9:	8d 55 ec             	lea    -0x14(%ebp),%edx
 858ffac:	89 54 24 04          	mov    %edx,0x4(%esp)
 858ffb0:	89 04 24             	mov    %eax,(%esp)
 858ffb3:	e8 a4 49 ba ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 858ffb8:	bb 01 00 00 00       	mov    $0x1,%ebx
 858ffbd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ffc0:	89 04 24             	mov    %eax,(%esp)
 858ffc3:	e8 b8 de ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858ffc8:	eb 1b                	jmp    858ffe5 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND+0xfd>
 858ffca:	89 d3                	mov    %edx,%ebx
 858ffcc:	89 c6                	mov    %eax,%esi
 858ffce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 858ffd1:	89 04 24             	mov    %eax,(%esp)
 858ffd4:	e8 a7 de ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 858ffd9:	89 f0                	mov    %esi,%eax
 858ffdb:	89 da                	mov    %ebx,%edx
 858ffdd:	89 04 24             	mov    %eax,(%esp)
 858ffe0:	e8 6b 37 55 00       	call   8ae3750 <_Unwind_Resume>
 858ffe5:	89 d8                	mov    %ebx,%eax
 858ffe7:	83 c4 20             	add    $0x20,%esp
 858ffea:	5b                   	pop    %ebx
 858ffeb:	5e                   	pop    %esi
 858ffec:	5d                   	pop    %ebp
 858ffed:	c3                   	ret

```

```c
// DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp @ 0x858fee8

/* DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    CUserCharacInfo::IncreasePowerWarPoint
              ((CUserCharacInfo *)param_1,(short)*(undefined4 *)(param_2 + 0xe));
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0858ff45 to 0858ffb7 has its CatchHandler @ 0858ffca */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return cVar1 == '\x01';
}

```

---

## _debugCommandUserRepel

```asm
// === 0859048e DisPatcher_DebugCommand::_debugCommandUserRepel  [0x0859048e-0x8590505] ===
 859048e:	55                   	push   %ebp
 859048f:	89 e5                	mov    %esp,%ebp
 8590491:	57                   	push   %edi
 8590492:	56                   	push   %esi
 8590493:	53                   	push   %ebx
 8590494:	83 ec 3c             	sub    $0x3c,%esp
 8590497:	8b 45 10             	mov    0x10(%ebp),%eax
 859049a:	8b 78 0e             	mov    0xe(%eax),%edi
 859049d:	8b 45 10             	mov    0x10(%ebp),%eax
 85904a0:	83 c0 12             	add    $0x12,%eax
 85904a3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85904a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85904a9:	89 04 24             	mov    %eax,(%esp)
 85904ac:	e8 e5 87 b3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85904b1:	89 c6                	mov    %eax,%esi
 85904b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85904b6:	89 04 24             	mov    %eax,(%esp)
 85904b9:	e8 b0 9e b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85904be:	89 c3                	mov    %eax,%ebx
 85904c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85904c3:	89 04 24             	mov    %eax,(%esp)
 85904c6:	e8 c5 b7 b3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85904cb:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 85904d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85904d5:	89 14 24             	mov    %edx,(%esp)
 85904d8:	e8 ad 1b b8 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 85904dd:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85904e1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85904e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85904e8:	89 74 24 08          	mov    %esi,0x8(%esp)
 85904ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85904f0:	89 04 24             	mov    %eax,(%esp)
 85904f3:	e8 22 0b ee ff       	call   847101a <_ZN19CMonitorServerProxy13SendUserRepelEjjPci>
 85904f8:	b8 01 00 00 00       	mov    $0x1,%eax
 85904fd:	83 c4 3c             	add    $0x3c,%esp
 8590500:	5b                   	pop    %ebx
 8590501:	5e                   	pop    %esi
 8590502:	5f                   	pop    %edi
 8590503:	5d                   	pop    %ebp
 8590504:	c3                   	ret
 8590505:	90                   	nop

```

```c
// DisPatcher_DebugCommand::_debugCommandUserRepel @ 0x859048e

/* DisPatcher_DebugCommand::_debugCommandUserRepel(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandUserRepel
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  
  iVar1 = *(int *)(param_2 + 0xe);
  uVar2 = CUser::GetUID(param_1);
  uVar3 = CUser::get_acc_id(param_1);
  uVar4 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar4);
  CMonitorServerProxy::SendUserRepel(this_00,uVar3,uVar2,(char *)(param_2 + 0x12),iVar1);
  return 1;
}

```

---

## _debugCommandVisible

```asm
// === 085906ac DisPatcher_DebugCommand::_debugCommandVisible  [0x085906ac-0x85908b9] ===
 85906ac:	55                   	push   %ebp
 85906ad:	89 e5                	mov    %esp,%ebp
 85906af:	56                   	push   %esi
 85906b0:	53                   	push   %ebx
 85906b1:	83 ec 30             	sub    $0x30,%esp
 85906b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85906b7:	89 04 24             	mov    %eax,(%esp)
 85906ba:	e8 09 b7 0f 00       	call   868bdc8 <_ZN15CUserCharacInfo10SetVisibleEv>
 85906bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85906c2:	89 04 24             	mov    %eax,(%esp)
 85906c5:	e8 c2 9c b4 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85906ca:	83 f8 03             	cmp    $0x3,%eax
 85906cd:	0f 94 c0             	sete   %al
 85906d0:	84 c0                	test   %al,%al
 85906d2:	74 23                	je     85906f7 <_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND+0x4b>
 85906d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85906db:	00 
 85906dc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85906e3:	00 
 85906e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85906eb:	00 
 85906ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85906ef:	89 04 24             	mov    %eax,(%esp)
 85906f2:	e8 65 b3 0e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 85906f7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85906fa:	89 04 24             	mov    %eax,(%esp)
 85906fd:	e8 4a d6 ff ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8590702:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8590709:	00 
 859070a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8590711:	00 
 8590712:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8590715:	89 04 24             	mov    %eax,(%esp)
 8590718:	e8 df b1 b3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 859071d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590720:	89 04 24             	mov    %eax,(%esp)
 8590723:	e8 54 9c b4 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8590728:	0f b7 c0             	movzwl %ax,%eax
 859072b:	89 44 24 04          	mov    %eax,0x4(%esp)
 859072f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8590732:	89 04 24             	mov    %eax,(%esp)
 8590735:	e8 6a 97 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 859073a:	8b 45 0c             	mov    0xc(%ebp),%eax
 859073d:	89 04 24             	mov    %eax,(%esp)
 8590740:	e8 1f 4e 0b 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8590745:	0f be c0             	movsbl %al,%eax
 8590748:	89 44 24 04          	mov    %eax,0x4(%esp)
 859074c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 859074f:	89 04 24             	mov    %eax,(%esp)
 8590752:	e8 c9 b1 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8590757:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859075e:	00 
 859075f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590762:	89 04 24             	mov    %eax,(%esp)
 8590765:	e8 54 0c 0f 00       	call   86813be <_ZN5CUser8get_areaEb>
 859076a:	89 44 24 04          	mov    %eax,0x4(%esp)
 859076e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8590771:	89 04 24             	mov    %eax,(%esp)
 8590774:	e8 a7 b1 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8590779:	8b 45 0c             	mov    0xc(%ebp),%eax
 859077c:	89 04 24             	mov    %eax,(%esp)
 859077f:	e8 a8 41 ba ff       	call   813492c <_ZN5CUser8get_posXEv>
 8590784:	0f b7 c0             	movzwl %ax,%eax
 8590787:	89 44 24 04          	mov    %eax,0x4(%esp)
 859078b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 859078e:	89 04 24             	mov    %eax,(%esp)
 8590791:	e8 0e 97 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8590796:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590799:	89 04 24             	mov    %eax,(%esp)
 859079c:	e8 9b 41 ba ff       	call   813493c <_ZN5CUser8get_posYEv>
 85907a1:	0f b7 c0             	movzwl %ax,%eax
 85907a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85907a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85907ab:	89 04 24             	mov    %eax,(%esp)
 85907ae:	e8 f1 96 b4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85907b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85907b6:	89 04 24             	mov    %eax,(%esp)
 85907b9:	e8 8e 41 ba ff       	call   813494c <_ZN5CUser13get_directionEv>
 85907be:	0f be c0             	movsbl %al,%eax
 85907c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85907c5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85907c8:	89 04 24             	mov    %eax,(%esp)
 85907cb:	e8 50 b1 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85907d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85907d3:	89 04 24             	mov    %eax,(%esp)
 85907d6:	e8 09 b6 0f 00       	call   868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>
 85907db:	0f be c0             	movsbl %al,%eax
 85907de:	89 44 24 04          	mov    %eax,0x4(%esp)
 85907e2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85907e5:	89 04 24             	mov    %eax,(%esp)
 85907e8:	e8 33 b1 b3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85907ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85907f4:	00 
 85907f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85907f8:	89 04 24             	mov    %eax,(%esp)
 85907fb:	e8 58 b1 b3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8590800:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8590807:	00 
 8590808:	8b 45 0c             	mov    0xc(%ebp),%eax
 859080b:	89 04 24             	mov    %eax,(%esp)
 859080e:	e8 ab 0b 0f 00       	call   86813be <_ZN5CUser8get_areaEb>
 8590813:	89 c3                	mov    %eax,%ebx
 8590815:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590818:	89 04 24             	mov    %eax,(%esp)
 859081b:	e8 44 4d 0b 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8590820:	0f be f0             	movsbl %al,%esi
 8590823:	e8 7f 9b b4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8590828:	8d 55 dc             	lea    -0x24(%ebp),%edx
 859082b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 859082f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8590833:	89 74 24 04          	mov    %esi,0x4(%esp)
 8590837:	89 04 24             	mov    %eax,(%esp)
 859083a:	e8 29 79 13 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 859083f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8590842:	89 04 24             	mov    %eax,(%esp)
 8590845:	e8 de 07 b7 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 859084a:	89 c3                	mov    %eax,%ebx
 859084c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8590853:	00 
 8590854:	c7 44 24 08 83 00 00 	movl   $0x83,0x8(%esp)
 859085b:	00 
 859085c:	c7 44 24 04 a0 7f cb 	movl   $0x8cb7fa0,0x4(%esp)
 8590863:	08 
 8590864:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8590867:	89 04 24             	mov    %eax,(%esp)
 859086a:	e8 a9 ee fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 859086f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8590873:	c7 44 24 04 70 e9 ca 	movl   $0x8cae970,0x4(%esp)
 859087a:	08 
 859087b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 859087e:	89 04 24             	mov    %eax,(%esp)
 8590881:	e8 02 ef fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8590886:	bb 01 00 00 00       	mov    $0x1,%ebx
 859088b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 859088e:	89 04 24             	mov    %eax,(%esp)
 8590891:	e8 ea d5 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8590896:	89 d8                	mov    %ebx,%eax
 8590898:	83 c4 30             	add    $0x30,%esp
 859089b:	5b                   	pop    %ebx
 859089c:	5e                   	pop    %esi
 859089d:	5d                   	pop    %ebp
 859089e:	c3                   	ret
 859089f:	89 d3                	mov    %edx,%ebx
 85908a1:	89 c6                	mov    %eax,%esi
 85908a3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85908a6:	89 04 24             	mov    %eax,(%esp)
 85908a9:	e8 d2 d5 ff ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85908ae:	89 f0                	mov    %esi,%eax
 85908b0:	89 da                	mov    %ebx,%edx
 85908b2:	89 04 24             	mov    %eax,(%esp)
 85908b5:	e8 96 2e 55 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DisPatcher_DebugCommand::_debugCommandVisible @ 0x85906ac

/* DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 DisPatcher_DebugCommand::_debugCommandVisible(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this;
  undefined4 uVar4;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  CUserCharacInfo::SetVisible((CUserCharacInfo *)param_2);
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    CUser::SendNotiPacket((CUser *)param_2,0,2,0);
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08590718 to 08590885 has its CatchHandler @ 0859089f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x17);
  uVar3 = CUser::get_unique_id((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  iVar2 = CUser::get_area((CUser *)param_2,false);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar2);
  uVar3 = CUser::get_posX((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  uVar3 = CUser::get_posY((CUser *)param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar3 & 0xffff);
  cVar1 = CUser::get_direction((CUser *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  iVar2 = CUser::get_area((CUser *)param_2,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar2,local_28);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandVisible(CUser*, MSG_DEBUG_COMMAND&)"
                     ,0x83,0);
  cMyTrace::operator()(local_1c,"GM(%s) is visible \n",uVar4);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 081fc4de DisPatcher_DebugCommand::dispatch_sig  [0x081fc4de-0x81fd0a7] ===
 81fc4de:	55                   	push   %ebp
 81fc4df:	89 e5                	mov    %esp,%ebp
 81fc4e1:	57                   	push   %edi
 81fc4e2:	56                   	push   %esi
 81fc4e3:	53                   	push   %ebx
 81fc4e4:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81fc4ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fc4f1:	00 
 81fc4f2:	8b 45 10             	mov    0x10(%ebp),%eax
 81fc4f5:	89 04 24             	mov    %eax,(%esp)
 81fc4f8:	e8 05 f2 02 00       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 81fc4fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81fc500:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc503:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fc507:	84 c0                	test   %al,%al
 81fc509:	74 21                	je     81fc52c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x4e>
 81fc50b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc50e:	89 04 24             	mov    %eax,(%esp)
 81fc511:	e8 58 de ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc516:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc51c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc520:	89 14 24             	mov    %edx,(%esp)
 81fc523:	e8 4e cd 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fc528:	84 c0                	test   %al,%al
 81fc52a:	74 07                	je     81fc533 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x55>
 81fc52c:	b8 01 00 00 00       	mov    $0x1,%eax
 81fc531:	eb 05                	jmp    81fc538 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x5a>
 81fc533:	b8 00 00 00 00       	mov    $0x0,%eax
 81fc538:	84 c0                	test   %al,%al
 81fc53a:	74 6e                	je     81fc5aa <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xcc>
 81fc53c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc53f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fc543:	0f b6 f0             	movzbl %al,%esi
 81fc546:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc549:	89 04 24             	mov    %eax,(%esp)
 81fc54c:	e8 1d de ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc551:	89 c3                	mov    %eax,%ebx
 81fc553:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc55a:	00 
 81fc55b:	c7 44 24 08 65 8b 00 	movl   $0x8b65,0x8(%esp)
 81fc562:	00 
 81fc563:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc56a:	08 
 81fc56b:	8d 45 80             	lea    -0x80(%ebp),%eax
 81fc56e:	89 04 24             	mov    %eax,(%esp)
 81fc571:	e8 a2 31 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc576:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fc57a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc57e:	c7 44 24 04 c0 25 bc 	movl   $0x8bc25c0,0x4(%esp)
 81fc585:	08 
 81fc586:	8d 45 80             	lea    -0x80(%ebp),%eax
 81fc589:	89 04 24             	mov    %eax,(%esp)
 81fc58c:	e8 f7 31 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc591:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc594:	89 04 24             	mov    %eax,(%esp)
 81fc597:	e8 96 3e f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81fc59c:	85 c0                	test   %eax,%eax
 81fc59e:	0f 94 c0             	sete   %al
 81fc5a1:	84 c0                	test   %al,%al
 81fc5a3:	75 75                	jne    81fc61a <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x13c>
 81fc5a5:	e9 99 00 00 00       	jmp    81fc643 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x165>
 81fc5aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc5ad:	89 04 24             	mov    %eax,(%esp)
 81fc5b0:	e8 b9 dd ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc5b5:	89 c3                	mov    %eax,%ebx
 81fc5b7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81fc5be:	00 
 81fc5bf:	c7 44 24 08 6a 8b 00 	movl   $0x8b6a,0x8(%esp)
 81fc5c6:	00 
 81fc5c7:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc5ce:	08 
 81fc5cf:	8d 45 90             	lea    -0x70(%ebp),%eax
 81fc5d2:	89 04 24             	mov    %eax,(%esp)
 81fc5d5:	e8 3e 31 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc5da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc5de:	c7 44 24 04 dd 25 bc 	movl   $0x8bc25dd,0x4(%esp)
 81fc5e5:	08 
 81fc5e6:	8d 45 90             	lea    -0x70(%ebp),%eax
 81fc5e9:	89 04 24             	mov    %eax,(%esp)
 81fc5ec:	e8 97 31 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc5f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc5f8:	00 
 81fc5f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fc600:	00 
 81fc601:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc608:	08 
 81fc609:	c7 04 24 6b 8b 00 00 	movl   $0x8b6b,(%esp)
 81fc610:	e8 c2 42 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fc615:	e9 82 0a 00 00       	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fc61a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc621:	00 
 81fc622:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fc629:	00 
 81fc62a:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc631:	08 
 81fc632:	c7 04 24 70 8b 00 00 	movl   $0x8b70,(%esp)
 81fc639:	e8 99 42 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fc63e:	e9 59 0a 00 00       	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fc643:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc646:	89 04 24             	mov    %eax,(%esp)
 81fc649:	e8 20 dd ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc64e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fc655:	00 
 81fc656:	89 04 24             	mov    %eax,(%esp)
 81fc659:	e8 ed c9 f0 ff       	call   810904b <_Z14NumberToStringji>
 81fc65e:	89 c3                	mov    %eax,%ebx
 81fc660:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc667:	00 
 81fc668:	c7 44 24 08 72 8b 00 	movl   $0x8b72,0x8(%esp)
 81fc66f:	00 
 81fc670:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc677:	08 
 81fc678:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81fc67b:	89 04 24             	mov    %eax,(%esp)
 81fc67e:	e8 95 30 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc683:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc687:	c7 44 24 04 b7 23 bc 	movl   $0x8bc23b7,0x4(%esp)
 81fc68e:	08 
 81fc68f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81fc692:	89 04 24             	mov    %eax,(%esp)
 81fc695:	e8 ee 30 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc69a:	c6 45 e6 01          	movb   $0x1,-0x1a(%ebp)
 81fc69e:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 81fc6a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc6a5:	89 04 24             	mov    %eax,(%esp)
 81fc6a8:	e8 c1 dc ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc6ad:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc6b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc6b7:	89 14 24             	mov    %edx,(%esp)
 81fc6ba:	e8 cd cd 09 00       	call   829948c <_ZN11CGM_Manager4IsGmEj>
 81fc6bf:	83 f0 01             	xor    $0x1,%eax
 81fc6c2:	84 c0                	test   %al,%al
 81fc6c4:	74 70                	je     81fc736 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x258>
 81fc6c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc6c9:	89 04 24             	mov    %eax,(%esp)
 81fc6cc:	e8 9d dc ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc6d1:	89 c3                	mov    %eax,%ebx
 81fc6d3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81fc6da:	00 
 81fc6db:	c7 44 24 08 90 8b 00 	movl   $0x8b90,0x8(%esp)
 81fc6e2:	00 
 81fc6e3:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc6ea:	08 
 81fc6eb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81fc6ee:	89 04 24             	mov    %eax,(%esp)
 81fc6f1:	e8 22 30 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc6f6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc6fa:	c7 44 24 04 dd 25 bc 	movl   $0x8bc25dd,0x4(%esp)
 81fc701:	08 
 81fc702:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81fc705:	89 04 24             	mov    %eax,(%esp)
 81fc708:	e8 7b 30 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc70d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc714:	00 
 81fc715:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fc71c:	00 
 81fc71d:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc724:	08 
 81fc725:	c7 04 24 91 8b 00 00 	movl   $0x8b91,(%esp)
 81fc72c:	e8 a6 41 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fc731:	e9 66 09 00 00       	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fc736:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 81fc73a:	83 f0 01             	xor    $0x1,%eax
 81fc73d:	84 c0                	test   %al,%al
 81fc73f:	74 0a                	je     81fc74b <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x26d>
 81fc741:	b8 00 00 00 00       	mov    $0x0,%eax
 81fc746:	e9 51 09 00 00       	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fc74b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc74e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fc752:	0f b6 d8             	movzbl %al,%ebx
 81fc755:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc75c:	00 
 81fc75d:	c7 44 24 08 b6 8b 00 	movl   $0x8bb6,0x8(%esp)
 81fc764:	00 
 81fc765:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc76c:	08 
 81fc76d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81fc770:	89 04 24             	mov    %eax,(%esp)
 81fc773:	e8 a0 2f 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc778:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc77c:	c7 44 24 04 f5 25 bc 	movl   $0x8bc25f5,0x4(%esp)
 81fc783:	08 
 81fc784:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81fc787:	89 04 24             	mov    %eax,(%esp)
 81fc78a:	e8 f9 2f 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc78f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc792:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fc796:	0f b6 c0             	movzbl %al,%eax
 81fc799:	83 f8 30             	cmp    $0x30,%eax
 81fc79c:	0f 87 72 08 00 00    	ja     81fd014 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb36>
 81fc7a2:	8b 04 85 28 26 bc 08 	mov    0x8bc2628(,%eax,4),%eax
 81fc7a9:	ff e0                	jmp    *%eax
 81fc7ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc7ae:	89 04 24             	mov    %eax,(%esp)
 81fc7b1:	e8 b8 db ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc7b6:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc7bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc7c0:	89 14 24             	mov    %edx,(%esp)
 81fc7c3:	e8 10 cc 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fc7c8:	85 c0                	test   %eax,%eax
 81fc7ca:	0f 9e c0             	setle  %al
 81fc7cd:	84 c0                	test   %al,%al
 81fc7cf:	74 29                	je     81fc7fa <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x31c>
 81fc7d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc7d8:	00 
 81fc7d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fc7e0:	00 
 81fc7e1:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc7e8:	08 
 81fc7e9:	c7 04 24 cb 8b 00 00 	movl   $0x8bcb,(%esp)
 81fc7f0:	e8 e2 40 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fc7f5:	e9 a2 08 00 00       	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fc7fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc7fd:	89 04 24             	mov    %eax,(%esp)
 81fc800:	e8 69 db ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc805:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc80b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc80f:	89 14 24             	mov    %edx,(%esp)
 81fc812:	e8 65 c9 09 00       	call   829917c <_ZN11CGM_Manager10TurnGmModeEj>
 81fc817:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc81a:	89 04 24             	mov    %eax,(%esp)
 81fc81d:	e8 4c db ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc822:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc828:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc82c:	89 14 24             	mov    %edx,(%esp)
 81fc82f:	e8 42 ca 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fc834:	83 f0 01             	xor    $0x1,%eax
 81fc837:	84 c0                	test   %al,%al
 81fc839:	0f 84 84 00 00 00    	je     81fc8c3 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x3e5>
 81fc83f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc842:	89 04 24             	mov    %eax,(%esp)
 81fc845:	e8 de 47 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fc84a:	89 c6                	mov    %eax,%esi
 81fc84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc84f:	89 04 24             	mov    %eax,(%esp)
 81fc852:	e8 17 db ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc857:	89 c3                	mov    %eax,%ebx
 81fc859:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc860:	00 
 81fc861:	c7 44 24 08 d0 8b 00 	movl   $0x8bd0,0x8(%esp)
 81fc868:	00 
 81fc869:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fc870:	08 
 81fc871:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81fc874:	89 04 24             	mov    %eax,(%esp)
 81fc877:	e8 9c 2e 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc87c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fc880:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc884:	c7 44 24 04 13 26 bc 	movl   $0x8bc2613,0x4(%esp)
 81fc88b:	08 
 81fc88c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81fc88f:	89 04 24             	mov    %eax,(%esp)
 81fc892:	e8 f1 2e 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc897:	c6 45 e6 01          	movb   $0x1,-0x1a(%ebp)
 81fc89b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc89e:	c6 40 0d 2a          	movb   $0x2a,0xd(%eax)
 81fc8a2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc8a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fc8a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc8ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc8b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81fc8b3:	89 04 24             	mov    %eax,(%esp)
 81fc8b6:	e8 5d 20 39 00       	call   858e918 <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND>
 81fc8bb:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fc8be:	e9 84 07 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc8c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fc8ca:	00 
 81fc8cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc8ce:	89 04 24             	mov    %eax,(%esp)
 81fc8d1:	e8 06 ce 47 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 81fc8d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc8d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fc8dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc8e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc8e4:	8b 45 08             	mov    0x8(%ebp),%eax
 81fc8e7:	89 04 24             	mov    %eax,(%esp)
 81fc8ea:	e8 35 1e 39 00       	call   858e724 <_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND>
 81fc8ef:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fc8f2:	e9 50 07 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc8f7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc8fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fc8fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc901:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc905:	8b 45 08             	mov    0x8(%ebp),%eax
 81fc908:	89 04 24             	mov    %eax,(%esp)
 81fc90b:	e8 08 20 39 00       	call   858e918 <_ZN23DisPatcher_DebugCommand16_debugCommandOffEP5CUserR17MSG_DEBUG_COMMAND>
 81fc910:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fc913:	e9 2f 07 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc918:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc91b:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fc91e:	e8 6b f8 ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 81fc923:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fc927:	89 04 24             	mov    %eax,(%esp)
 81fc92a:	e8 d9 62 0a 00       	call   82a2c08 <_ZN12CGameManager22WarRoomCountManageTestEi>
 81fc92f:	e9 13 07 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc934:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc937:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc93b:	8b 45 08             	mov    0x8(%ebp),%eax
 81fc93e:	89 04 24             	mov    %eax,(%esp)
 81fc941:	e8 06 2d 39 00       	call   858f64c <_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser>
 81fc946:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fc949:	e9 f9 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc94e:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 81fc955:	ff 
 81fc956:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc959:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc95d:	8b 45 08             	mov    0x8(%ebp),%eax
 81fc960:	89 04 24             	mov    %eax,(%esp)
 81fc963:	e8 52 2a 39 00       	call   858f3ba <_ZN23DisPatcher_DebugCommand24_debugCommandLevelUpDownEP5CUseri>
 81fc968:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fc96b:	e9 d7 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc970:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc973:	89 04 24             	mov    %eax,(%esp)
 81fc976:	e8 03 d9 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81fc97b:	89 04 24             	mov    %eax,(%esp)
 81fc97e:	e8 85 aa fb ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 81fc983:	89 04 24             	mov    %eax,(%esp)
 81fc986:	e8 31 15 14 00       	call   833debc <_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv>
 81fc98b:	83 f0 01             	xor    $0x1,%eax
 81fc98e:	84 c0                	test   %al,%al
 81fc990:	0f 84 a4 06 00 00    	je     81fd03a <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb5c>
 81fc996:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc999:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fc99c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc99f:	89 04 24             	mov    %eax,(%esp)
 81fc9a2:	e8 e7 d8 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81fc9a7:	89 04 24             	mov    %eax,(%esp)
 81fc9aa:	e8 b9 0b ee ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81fc9af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fc9b3:	89 04 24             	mov    %eax,(%esp)
 81fc9b6:	e8 4b d1 13 00       	call   8339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>
 81fc9bb:	e9 87 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc9c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc9c3:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fc9c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc9c9:	89 04 24             	mov    %eax,(%esp)
 81fc9cc:	e8 bd d8 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81fc9d1:	89 04 24             	mov    %eax,(%esp)
 81fc9d4:	e8 8f 0b ee ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81fc9d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fc9dd:	89 04 24             	mov    %eax,(%esp)
 81fc9e0:	e8 fb d4 13 00       	call   8339ee0 <_ZN13user_creature12CCreatureMgr10SetStomachEi>
 81fc9e5:	e9 5d 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fc9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc9ed:	89 04 24             	mov    %eax,(%esp)
 81fc9f0:	e8 99 d8 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81fc9f5:	89 04 24             	mov    %eax,(%esp)
 81fc9f8:	e8 6b 0b ee ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81fc9fd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81fca04:	00 
 81fca05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fca0c:	00 
 81fca0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fca14:	00 
 81fca15:	89 04 24             	mov    %eax,(%esp)
 81fca18:	e8 97 f4 13 00       	call   833beb4 <_ZN13user_creature12CCreatureMgr7EvoluteEiib>
 81fca1d:	e9 25 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fca22:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81fca29:	e8 02 05 03 00       	call   822cf30 <_ZN13CBattle_Field20SetEnableHellDungeonEb>
 81fca2e:	e9 14 06 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fca33:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fca36:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81fca3a:	0f b6 c0             	movzbl %al,%eax
 81fca3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fca41:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fca44:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fca48:	8b 45 08             	mov    0x8(%ebp),%eax
 81fca4b:	89 04 24             	mov    %eax,(%esp)
 81fca4e:	e8 8b 25 39 00       	call   858efde <_ZN23DisPatcher_DebugCommand21_debugCommandSetLevelEP5CUseri>
 81fca53:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fca56:	e9 ec 05 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fca5b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fca5e:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81fca62:	0f b6 d0             	movzbl %al,%edx
 81fca65:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fca68:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81fca6c:	0f b6 c0             	movzbl %al,%eax
 81fca6f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81fca73:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fca77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fca7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fca7e:	8b 45 08             	mov    0x8(%ebp),%eax
 81fca81:	89 04 24             	mov    %eax,(%esp)
 81fca84:	e8 cb 23 39 00       	call   858ee54 <_ZN23DisPatcher_DebugCommand24_debugCommandSetGrowTypeEP5CUserii>
 81fca89:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fca8c:	e9 b6 05 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fca91:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fca94:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fca98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fca9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fca9f:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcaa2:	89 04 24             	mov    %eax,(%esp)
 81fcaa5:	e8 1a 1f 39 00       	call   858e9c4 <_ZN23DisPatcher_DebugCommand23_debugCommandClearSkillEP5CUserR17MSG_DEBUG_COMMAND>
 81fcaaa:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcaad:	e9 95 05 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcab2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcab5:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81fcab9:	0f b6 d0             	movzbl %al,%edx
 81fcabc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcabf:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81fcac3:	0f b6 c0             	movzbl %al,%eax
 81fcac6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81fcaca:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcace:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcad1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcad5:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcad8:	89 04 24             	mov    %eax,(%esp)
 81fcadb:	e8 d8 1f 39 00       	call   858eab8 <_ZN23DisPatcher_DebugCommand21_debugCommandSetSkillEP5CUserii>
 81fcae0:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcae3:	e9 5f 05 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcae8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcaeb:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcaee:	85 c0                	test   %eax,%eax
 81fcaf0:	7e 25                	jle    81fcb17 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0x639>
 81fcaf2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcaf5:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcaf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcafc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcaff:	89 04 24             	mov    %eax,(%esp)
 81fcb02:	e8 59 91 45 00       	call   8655c60 <_ZN5CUser9FatigueUpEi>
 81fcb07:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcb0a:	89 04 24             	mov    %eax,(%esp)
 81fcb0d:	e8 2e 9a 45 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 81fcb12:	e9 30 05 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcb17:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcb1a:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcb1d:	85 c0                	test   %eax,%eax
 81fcb1f:	0f 85 18 05 00 00    	jne    81fd03d <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb5f>
 81fcb25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fcb2c:	00 
 81fcb2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcb30:	89 04 24             	mov    %eax,(%esp)
 81fcb33:	e8 a2 af 45 00       	call   8657ada <_ZN5CUser14RecoverFatigueEi>
 81fcb38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcb3b:	89 04 24             	mov    %eax,(%esp)
 81fcb3e:	e8 fd 99 45 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 81fcb43:	e9 ff 04 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcb48:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcb4b:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcb4e:	85 c0                	test   %eax,%eax
 81fcb50:	0f 84 ea 04 00 00    	je     81fd040 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb62>
 81fcb56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcb59:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fcb5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcb5f:	89 04 24             	mov    %eax,(%esp)
 81fcb62:	e8 27 d7 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81fcb67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fcb6b:	89 04 24             	mov    %eax,(%esp)
 81fcb6e:	e8 df 0a 03 00       	call   822d652 <_ZN10CInventory9set_moneyEj>
 81fcb73:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcb76:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcb79:	89 c3                	mov    %eax,%ebx
 81fcb7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcb7e:	89 04 24             	mov    %eax,(%esp)
 81fcb81:	e8 f8 d6 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81fcb86:	89 04 24             	mov    %eax,(%esp)
 81fcb89:	e8 48 7c f3 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81fcb8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81fcb91:	81 c2 00 97 07 00    	add    $0x79700,%edx
 81fcb97:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 81fcb9e:	00 
 81fcb9f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fcba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcba7:	89 14 24             	mov    %edx,(%esp)
 81fcbaa:	e8 71 6e 48 00       	call   8683a20 <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason>
 81fcbaf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fcbb6:	00 
 81fcbb7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fcbbe:	00 
 81fcbbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fcbc6:	00 
 81fcbc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcbca:	89 04 24             	mov    %eax,(%esp)
 81fcbcd:	e8 88 fa 47 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81fcbd2:	c6 45 e6 01          	movb   $0x1,-0x1a(%ebp)
 81fcbd6:	e9 6c 04 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcbdb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcbde:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcbe1:	85 c0                	test   %eax,%eax
 81fcbe3:	0f 8e 5a 04 00 00    	jle    81fd043 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb65>
 81fcbe9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcbec:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcbef:	89 c3                	mov    %eax,%ebx
 81fcbf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcbf4:	89 04 24             	mov    %eax,(%esp)
 81fcbf7:	e8 92 d6 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81fcbfc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fcc00:	89 04 24             	mov    %eax,(%esp)
 81fcc03:	e8 cc dd 2f 00       	call   84fa9d4 <_ZN10CInventory9UseUpCoinEj>
 81fcc08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcc0b:	89 04 24             	mov    %eax,(%esp)
 81fcc0e:	e8 f5 9b 45 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 81fcc13:	e9 2f 04 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcc18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcc1b:	8b 50 12             	mov    0x12(%eax),%edx
 81fcc1e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcc21:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcc24:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81fcc28:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcc2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcc2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcc33:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcc36:	89 04 24             	mov    %eax,(%esp)
 81fcc39:	e8 5e 20 39 00       	call   858ec9c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi>
 81fcc3e:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcc41:	e9 01 04 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcc46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcc49:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcc4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcc50:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcc54:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcc57:	89 04 24             	mov    %eax,(%esp)
 81fcc5a:	e8 57 2b 39 00       	call   858f7b6 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND>
 81fcc5f:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcc62:	e9 e0 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcc67:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcc6a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcc6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcc71:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcc75:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcc78:	89 04 24             	mov    %eax,(%esp)
 81fcc7b:	e8 3a 2e 39 00       	call   858faba <_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND>
 81fcc80:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcc83:	e9 bf 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcc88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fcc8f:	00 
 81fcc90:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcc93:	89 04 24             	mov    %eax,(%esp)
 81fcc96:	e8 09 32 03 00       	call   822fea4 <_ZN5CUser16SetGMUpgradeModeE20ENUM_GM_ITEM_UPGRADE>
 81fcc9b:	e9 a7 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcca0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fcca7:	00 
 81fcca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fccab:	89 04 24             	mov    %eax,(%esp)
 81fccae:	e8 f1 31 03 00       	call   822fea4 <_ZN5CUser16SetGMUpgradeModeE20ENUM_GM_ITEM_UPGRADE>
 81fccb3:	e9 8f 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fccb8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fccbf:	00 
 81fccc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fccc3:	89 04 24             	mov    %eax,(%esp)
 81fccc6:	e8 d9 31 03 00       	call   822fea4 <_ZN5CUser16SetGMUpgradeModeE20ENUM_GM_ITEM_UPGRADE>
 81fcccb:	e9 77 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fccd0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fccd3:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fccd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fccd9:	89 04 24             	mov    %eax,(%esp)
 81fccdc:	e8 8d d6 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fcce1:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81fcce7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fcceb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fccef:	89 14 24             	mov    %edx,(%esp)
 81fccf2:	e8 f7 c6 f0 ff       	call   81093ee <_ZN8WongWork11CGMAccounts8appendGMEjj>
 81fccf7:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fccfa:	e9 48 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fccff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcd02:	8b 58 0e             	mov    0xe(%eax),%ebx
 81fcd05:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd08:	89 04 24             	mov    %eax,(%esp)
 81fcd0b:	e8 5e d6 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fcd10:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81fcd16:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fcd1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcd1e:	89 14 24             	mov    %edx,(%esp)
 81fcd21:	e8 d6 c6 f0 ff       	call   81093fc <_ZN8WongWork11CGMAccounts8removeGMEjj>
 81fcd26:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcd29:	e9 19 03 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcd2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcd31:	8b 50 0e             	mov    0xe(%eax),%edx
 81fcd34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd37:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fcd3b:	89 04 24             	mov    %eax,(%esp)
 81fcd3e:	e8 c7 99 44 00       	call   864670a <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi>
 81fcd43:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd46:	89 04 24             	mov    %eax,(%esp)
 81fcd49:	e8 22 db f9 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 81fcd4e:	e9 f4 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcd53:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcd56:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcd59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd60:	89 04 24             	mov    %eax,(%esp)
 81fcd63:	e8 56 33 03 00       	call   82300be <_ZN5CUser6SetAgeEj>
 81fcd68:	e9 da 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcd6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcd70:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcd74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd77:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcd7b:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcd7e:	89 04 24             	mov    %eax,(%esp)
 81fcd81:	e8 c8 2d 39 00       	call   858fb4e <_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND>
 81fcd86:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcd89:	e9 b9 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcd8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcd91:	89 04 24             	mov    %eax,(%esp)
 81fcd94:	e8 99 36 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81fcd99:	85 c0                	test   %eax,%eax
 81fcd9b:	0f 95 c0             	setne  %al
 81fcd9e:	84 c0                	test   %al,%al
 81fcda0:	0f 84 a0 02 00 00    	je     81fd046 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb68>
 81fcda6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcda9:	8b 40 0e             	mov    0xe(%eax),%eax
 81fcdac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcdb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcdb3:	89 04 24             	mov    %eax,(%esp)
 81fcdb6:	e8 85 e0 29 00       	call   849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>
 81fcdbb:	e9 87 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcdc0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcdc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcdc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcdca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcdce:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcdd1:	89 04 24             	mov    %eax,(%esp)
 81fcdd4:	e8 eb 2e 39 00       	call   858fcc4 <_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND>
 81fcdd9:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcddc:	e9 66 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcde1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcde4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcde8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcdeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcdef:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcdf2:	89 04 24             	mov    %eax,(%esp)
 81fcdf5:	e8 ce 2f 39 00       	call   858fdc8 <_ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND>
 81fcdfa:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcdfd:	e9 45 02 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fce02:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fce05:	8b 40 0e             	mov    0xe(%eax),%eax
 81fce08:	89 c7                	mov    %eax,%edi
 81fce0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fce0d:	89 04 24             	mov    %eax,(%esp)
 81fce10:	e8 39 ee ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fce15:	89 c6                	mov    %eax,%esi
 81fce17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fce1a:	89 04 24             	mov    %eax,(%esp)
 81fce1d:	e8 4a 26 03 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81fce22:	89 c3                	mov    %eax,%ebx
 81fce24:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fce27:	89 04 24             	mov    %eax,(%esp)
 81fce2a:	e8 61 ee ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81fce2f:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81fce35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fce39:	89 14 24             	mov    %edx,(%esp)
 81fce3c:	e8 77 05 f2 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81fce41:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81fce45:	89 74 24 08          	mov    %esi,0x8(%esp)
 81fce49:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fce4d:	89 04 24             	mov    %eax,(%esp)
 81fce50:	e8 e1 1e 27 00       	call   846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>
 81fce55:	e9 ed 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fce5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fce5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fce61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fce64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fce68:	8b 45 08             	mov    0x8(%ebp),%eax
 81fce6b:	89 04 24             	mov    %eax,(%esp)
 81fce6e:	e8 ef 2f 39 00       	call   858fe62 <_ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>
 81fce73:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fce76:	e9 cc 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fce7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fce7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fce82:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fce85:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fce89:	8b 45 08             	mov    0x8(%ebp),%eax
 81fce8c:	89 04 24             	mov    %eax,(%esp)
 81fce8f:	e8 5a 31 39 00       	call   858ffee <_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND>
 81fce94:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fce97:	e9 ab 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fce9c:	e8 06 d5 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fcea1:	89 04 24             	mov    %eax,(%esp)
 81fcea4:	e8 ad 24 4d 00       	call   86cf356 <_ZN9GameWorld13CancelPowerUpEv>
 81fcea9:	e9 99 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fceae:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fceb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fceb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fceb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcebc:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcebf:	89 04 24             	mov    %eax,(%esp)
 81fcec2:	e8 21 30 39 00       	call   858fee8 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>
 81fcec7:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fceca:	e9 78 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcecf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fced2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fced6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fced9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcedd:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcee0:	89 04 24             	mov    %eax,(%esp)
 81fcee3:	e8 aa 31 39 00       	call   8590092 <_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND>
 81fcee8:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fceeb:	e9 57 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcef0:	e8 b2 d4 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fcef5:	89 04 24             	mov    %eax,(%esp)
 81fcef8:	e8 83 45 4d 00       	call   86d1480 <_ZN9GameWorld19UpdateMiniCraneSeedEv>
 81fcefd:	e9 45 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcf05:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcf09:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcf0c:	89 04 24             	mov    %eax,(%esp)
 81fcf0f:	e8 fa 34 39 00       	call   859040e <_ZN23DisPatcher_DebugCommand26_debugCommandPowerWarStartEP5CUser>
 81fcf14:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcf17:	e9 2b 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcf1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcf23:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcf26:	89 04 24             	mov    %eax,(%esp)
 81fcf29:	e8 20 35 39 00       	call   859044e <_ZN23DisPatcher_DebugCommand24_debugCommandPowerWarEndEP5CUser>
 81fcf2e:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcf31:	e9 11 01 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcf39:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcf3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcf40:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcf44:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcf47:	89 04 24             	mov    %eax,(%esp)
 81fcf4a:	e8 3f 35 39 00       	call   859048e <_ZN23DisPatcher_DebugCommand22_debugCommandUserRepelEP5CUserR17MSG_DEBUG_COMMAND>
 81fcf4f:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcf52:	e9 f0 00 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcf5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcf5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcf61:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcf65:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcf68:	89 04 24             	mov    %eax,(%esp)
 81fcf6b:	e8 96 35 39 00       	call   8590506 <_ZN23DisPatcher_DebugCommand23_debugCommandRequestMidEP5CUserR17MSG_DEBUG_COMMAND>
 81fcf70:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcf73:	e9 cf 00 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcf7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcf7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcf82:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcf86:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcf89:	89 04 24             	mov    %eax,(%esp)
 81fcf8c:	e8 f9 35 39 00       	call   859058a <_ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND>
 81fcf91:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcf94:	e9 ae 00 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcf99:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcf9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcfa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcfa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcfa7:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcfaa:	89 04 24             	mov    %eax,(%esp)
 81fcfad:	e8 fa 36 39 00       	call   85906ac <_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND>
 81fcfb2:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcfb5:	e9 8d 00 00 00       	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcfba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcfbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcfc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcfc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcfc8:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcfcb:	89 04 24             	mov    %eax,(%esp)
 81fcfce:	e8 81 32 39 00       	call   8590254 <_ZN23DisPatcher_DebugCommand26_debugCommandClearAvtInvenEP5CUserR17MSG_DEBUG_COMMAND>
 81fcfd3:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcfd6:	eb 6f                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcfd8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fcfdb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcfdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fcfe2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fcfe6:	8b 45 08             	mov    0x8(%ebp),%eax
 81fcfe9:	89 04 24             	mov    %eax,(%esp)
 81fcfec:	e8 ad 31 39 00       	call   859019e <_ZN23DisPatcher_DebugCommand23_debugCommandClearInvenEP5CUserR17MSG_DEBUG_COMMAND>
 81fcff1:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fcff4:	eb 51                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fcff6:	8b 45 10             	mov    0x10(%ebp),%eax
 81fcff9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fcffd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd000:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd004:	8b 45 08             	mov    0x8(%ebp),%eax
 81fd007:	89 04 24             	mov    %eax,(%esp)
 81fd00a:	e8 ab 38 39 00       	call   85908ba <_ZN23DisPatcher_DebugCommand26_debugCommandSetUserDefineEP5CUserR9PacketBuf>
 81fd00f:	88 45 e6             	mov    %al,-0x1a(%ebp)
 81fd012:	eb 33                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fd014:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fd01b:	00 
 81fd01c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fd023:	00 
 81fd024:	c7 44 24 04 00 fc bc 	movl   $0x8bcfc00,0x4(%esp)
 81fd02b:	08 
 81fd02c:	c7 04 24 a2 8d 00 00 	movl   $0x8da2,(%esp)
 81fd033:	e8 9f 38 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fd038:	eb 62                	jmp    81fd09c <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbbe>
 81fd03a:	90                   	nop
 81fd03b:	eb 0a                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fd03d:	90                   	nop
 81fd03e:	eb 07                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fd040:	90                   	nop
 81fd041:	eb 04                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fd043:	90                   	nop
 81fd044:	eb 01                	jmp    81fd047 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81fd046:	90                   	nop
 81fd047:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 81fd04b:	74 4a                	je     81fd097 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbb9>
 81fd04d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fd050:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fd054:	0f b6 c0             	movzbl %al,%eax
 81fd057:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fd05b:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 81fd062:	00 
 81fd063:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fd06a:	00 
 81fd06b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd06e:	89 04 24             	mov    %eax,(%esp)
 81fd071:	e8 5e f1 47 00       	call   867c1d4 <_ZN5CUser13SendCmdPacketENS_11eSendTargetE14ENUM_CMDPACKETi>
 81fd076:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fd079:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81fd07d:	84 c0                	test   %al,%al
 81fd07f:	75 16                	jne    81fd097 <_ZN23DisPatcher_DebugCommand12dispatch_sigEP5CUserR9PacketBuf+0xbb9>
 81fd081:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd084:	89 04 24             	mov    %eax,(%esp)
 81fd087:	e8 96 c9 48 00       	call   8689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>
 81fd08c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd08f:	89 04 24             	mov    %eax,(%esp)
 81fd092:	e8 f9 ca 48 00       	call   8689b90 <_ZN5CUser20SendChattingEmoticonEv>
 81fd097:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd09c:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 81fd0a2:	5b                   	pop    %ebx
 81fd0a3:	5e                   	pop    %esi
 81fd0a4:	5f                   	pop    %edi
 81fd0a5:	5d                   	pop    %ebp
 81fd0a6:	c3                   	ret
 81fd0a7:	90                   	nop

```

```c
// DisPatcher_DebugCommand::dispatch_sig @ 0x81fc4de

/* DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DebugCommand::dispatch_sig
          (DisPatcher_DebugCommand *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_DEBUG_COMMAND MVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  CGameManager *this_00;
  CCreatureMgr *pCVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  uint uVar10;
  CGuildServerProxy *this_01;
  GameWorld *this_02;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MSG_DEBUG_COMMAND *local_24;
  char local_1e;
  char local_1d;
  
  local_24 = (MSG_DEBUG_COMMAND *)PacketBuf::get_packet(param_2,0);
  if (local_24[0xd] != (MSG_DEBUG_COMMAND)0x0) {
    CUser::get_acc_id(param_1);
    cVar3 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
    if (cVar3 == '\0') {
      bVar2 = false;
      goto LAB_081fc538;
    }
  }
  bVar2 = true;
LAB_081fc538:
  if (bVar2) {
    MVar1 = local_24[0xd];
    uVar4 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_84,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                       0x8b65,0);
    cMyTrace::operator()(local_84,"GM(%d) trying to command(%d)",uVar4,(uint)(byte)MVar1);
    iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar5 == 0) {
      uVar4 = LineFunc(0x8b70,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
    else {
      uVar6 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar6,0);
      cMyTrace::cMyTrace(local_64,
                         "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                         0x8b72,0);
      cMyTrace::operator()(local_64,"GM Command : %s",uVar4);
      local_1e = '\x01';
      local_1d = '\0';
      CUser::get_acc_id(param_1);
      cVar3 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
      if (cVar3 == '\x01') {
        if (local_1d == '\x01') {
          MVar1 = local_24[0xd];
          cMyTrace::cMyTrace(local_44,
                             "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x8bb6,0);
          cMyTrace::operator()(local_44,"GM Pass Complete! Command(%d)",(uint)(byte)MVar1);
          switch(local_24[0xd]) {
          case (MSG_DEBUG_COMMAND)0x0:
            CUser::get_acc_id(param_1);
            iVar5 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (iVar5 < 1) {
              uVar4 = LineFunc(0x8bcb,
                               "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar4;
            }
            CUser::get_acc_id(param_1);
            CGM_Manager::TurnGmMode(GlobalData::s_GM_Manager);
            CUser::get_acc_id(param_1);
            cVar3 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
            if (cVar3 == '\x01') {
              CUser::SetGameMasterMode(param_1,true);
              local_1e = _debugCommandOn((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            }
            else {
              uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              cMyTrace::cMyTrace(local_34,
                                 "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8bd0,0);
              cMyTrace::operator()(local_34,"%d:\'%s\' GM Mode OFF.",uVar9,uVar4);
              local_1e = 1;
              local_24[0xd] = (MSG_DEBUG_COMMAND)0x2a;
              local_1e = _debugCommandOff((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x1:
          case (MSG_DEBUG_COMMAND)0x2:
            local_1e = _debugCommandLevelUpDown(this,param_1,-1);
            break;
          case (MSG_DEBUG_COMMAND)0x3:
            local_1e = _debugCommandSetGrowType
                                 (this,param_1,(uint)(byte)local_24[0xe],(uint)(byte)local_24[0xf]);
            break;
          case (MSG_DEBUG_COMMAND)0x4:
            local_1e = _debugCommandClearSkill((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x5:
            local_1e = _debugCommandSetSkill
                                 (this,param_1,(uint)(byte)local_24[0xe],(uint)(byte)local_24[0xf]);
            break;
          case (MSG_DEBUG_COMMAND)0x6:
            local_1e = _debugCommandAddItem
                                 (this,param_1,*(ulong *)(local_24 + 0xe),*(int *)(local_24 + 0x12))
            ;
            break;
          case (MSG_DEBUG_COMMAND)0x7:
            local_1e = _debugCommandSetLevel(this,param_1,(uint)(byte)local_24[0xe]);
            break;
          case (MSG_DEBUG_COMMAND)0x8:
            local_1e = _debugCommandPVPRankSet(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x9:
            CUser::SetGMUpgradeMode(param_1,1);
            break;
          case (MSG_DEBUG_COMMAND)0xa:
            CUser::SetGMUpgradeMode(param_1,2);
            break;
          case (MSG_DEBUG_COMMAND)0xb:
            CUser::SetGMUpgradeMode(param_1,0);
            break;
          case (MSG_DEBUG_COMMAND)0xc:
            local_1e = _debugCommandUserRepel(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0xd:
            iVar5 = *(int *)(local_24 + 0xe);
            this_00 = (CGameManager *)G_CGameManager();
            CGameManager::WarRoomCountManageTest(this_00,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0xe:
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar8);
            cVar3 = user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(pCVar7);
            if (cVar3 != '\x01') {
              iVar5 = *(int *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
              user_creature::CCreatureMgr::GainExp(pCVar7,iVar5);
            }
            break;
          case (MSG_DEBUG_COMMAND)0xf:
            iVar5 = *(int *)(local_24 + 0xe);
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
            user_creature::CCreatureMgr::SetStomach(pCVar7,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0x10:
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            pCVar7 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar8);
            user_creature::CCreatureMgr::Evolute(pCVar7,0,0,true);
            break;
          case (MSG_DEBUG_COMMAND)0x11:
            local_1e = _debugCommandAddAvatar(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x12:
            CBattle_Field::SetEnableHellDungeon(true);
            break;
          case (MSG_DEBUG_COMMAND)0x13:
            uVar6 = CUser::get_acc_id(param_1);
            local_1e = WongWork::CGMAccounts::appendGM(GlobalData::s_pGMAccounts_,uVar6);
            break;
          case (MSG_DEBUG_COMMAND)0x14:
            uVar6 = CUser::get_acc_id(param_1);
            local_1e = WongWork::CGMAccounts::removeGM(GlobalData::s_pGMAccounts_,uVar6);
            break;
          case (MSG_DEBUG_COMMAND)0x15:
            local_1e = _debugCommandInvisible((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x16:
            local_1e = _debugCommandVisible((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x17:
            local_1e = _debugCommandRequestMid(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x18:
            CUserCharacInfo::SetCurCharacLuckPoint
                      ((CUserCharacInfo *)param_1,*(int *)(local_24 + 0xe));
            CUserCharacInfo::enableSaveCharacStat((CUserCharacInfo *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x19:
            CUser::SetAge(param_1,*(uint *)(local_24 + 0xe));
            break;
          case (MSG_DEBUG_COMMAND)0x1a:
            local_1e = _debugCommandSetEnchant(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x1b:
            iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
            if (iVar5 != 0) {
              expert_job::CExpertJob::IncreaseExpertJobExp(param_1,*(int *)(local_24 + 0xe));
            }
            break;
          case (MSG_DEBUG_COMMAND)0x1c:
            local_1e = _debugCommandSetUserDefine((CUser *)this,(PacketBuf *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1d:
            local_1e = _debugCommandGuildLevelUp(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1e:
            local_1e = _debugCommandPowerWarStart(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x1f:
            local_1e = _debugCommandPowerWarEnd(this,param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x20:
            local_1e = _debugCommandPowerUpOn((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x21:
            this_02 = (GameWorld *)G_GameWorld();
            GameWorld::CancelPowerUp(this_02);
            break;
          case (MSG_DEBUG_COMMAND)0x22:
            local_1e = _debugCommandUserPowerwarPointUp(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x23:
            local_1e = _debugCommandInitUserPowerwarPoint
                                 ((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x24:
            local_1e = _debugCommandPowerwarPointUp(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x25:
            local_1e = _debugCommandSetBlackCount(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x26:
            local_1e = _debugCommandCargoCapacity(this,param_1,local_24);
            break;
          case (MSG_DEBUG_COMMAND)0x27:
            iVar5 = *(int *)(local_24 + 0xe);
            uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
            uVar4 = CUser::GetServerGroup(param_1);
            this_01 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(this_01,uVar10,uVar6,iVar5);
            break;
          case (MSG_DEBUG_COMMAND)0x28:
            if (*(int *)(local_24 + 0xe) < 1) {
              if (*(int *)(local_24 + 0xe) == 0) {
                CUser::RecoverFatigue(param_1,0);
                CUser::SendFatigue(param_1);
              }
            }
            else {
              CUser::FatigueUp(param_1,*(int *)(local_24 + 0xe));
              CUser::SendFatigue(param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x29:
            if (0 < *(int *)(local_24 + 0xe)) {
              uVar6 = *(uint *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::UseUpCoin(pCVar8,uVar6);
              CUser::SendCoin(param_1);
            }
            break;
          case (MSG_DEBUG_COMMAND)0x2a:
            local_1e = _debugCommandOff((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x2b:
            local_1e = _debugCommandClearAvtInven((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          case (MSG_DEBUG_COMMAND)0x2c:
            local_1e = _debugCommandClearInven((CUser *)this,(MSG_DEBUG_COMMAND *)param_1);
            break;
          default:
            uVar4 = LineFunc(0x8da2,
                             "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          case (MSG_DEBUG_COMMAND)0x2f:
            if (*(int *)(local_24 + 0xe) != 0) {
              uVar6 = *(uint *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              CInventory::set_money(pCVar8,uVar6);
              uVar4 = *(undefined4 *)(local_24 + 0xe);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar9 = CInventory::get_money(pCVar8);
              cUserHistoryLog::MoneyAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar9,uVar4,6);
              CUser::SendUpdateItemList(param_1,1,0,0);
              local_1e = '\x01';
            }
            break;
          case (MSG_DEBUG_COMMAND)0x30:
            G_GameWorld();
            GameWorld::UpdateMiniCraneSeed();
          }
          if ((local_1e != '\0') &&
             (CUser::SendCmdPacket(param_1,1,0x41,local_24[0xd]),
             local_24[0xd] == (MSG_DEBUG_COMMAND)0x0)) {
            CUser::ReCalcChattingEmoticon(param_1);
            CUser::SendChattingEmoticon(param_1);
          }
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = CUser::get_acc_id(param_1);
        cMyTrace::cMyTrace(local_54,
                           "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                           0x8b90,5);
        cMyTrace::operator()(local_54,"Illegal GM Command : %d",uVar4);
        uVar4 = LineFunc(0x8b91,
                         "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_74,
                       "virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                       0x8b6a,5);
    cMyTrace::operator()(local_74,"Illegal GM Command : %d",uVar4);
    uVar4 = LineFunc(0x8b6b,"virtual int DisPatcher_DebugCommand::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar4;
}

```

