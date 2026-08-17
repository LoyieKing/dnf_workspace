# SeriaRoomAniDecoEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CheckEventInfo

```asm
// === 0827ba48 SeriaRoomAniDecoEvent::CheckEventInfo  [0x0827ba48-0x827ba51] ===
 827ba48:	55                   	push   %ebp
 827ba49:	89 e5                	mov    %esp,%ebp
 827ba4b:	b8 00 00 00 00       	mov    $0x0,%eax
 827ba50:	5d                   	pop    %ebp
 827ba51:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::CheckEventInfo @ 0x827ba48

/* SeriaRoomAniDecoEvent::CheckEventInfo(CUser&) */

undefined4 SeriaRoomAniDecoEvent::CheckEventInfo(CUser *param_1)

{
  return 0;
}

```

---

## EndEvent

```asm
// === 0827b59e SeriaRoomAniDecoEvent::EndEvent  [0x0827b59e-0x827b5ef] ===
 827b59e:	55                   	push   %ebp
 827b59f:	89 e5                	mov    %esp,%ebp
 827b5a1:	83 ec 28             	sub    $0x28,%esp
 827b5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 827b5a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827b5ae:	00 
 827b5af:	89 04 24             	mov    %eax,(%esp)
 827b5b2:	e8 2b cf e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827b5b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827b5be:	00 
 827b5bf:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 827b5c6:	00 
 827b5c7:	c7 44 24 04 c0 70 c0 	movl   $0x8c070c0,0x4(%esp)
 827b5ce:	08 
 827b5cf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b5d2:	89 04 24             	mov    %eax,(%esp)
 827b5d5:	e8 3e 41 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827b5da:	c7 44 24 04 5c 64 c0 	movl   $0x8c0645c,0x4(%esp)
 827b5e1:	08 
 827b5e2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b5e5:	89 04 24             	mov    %eax,(%esp)
 827b5e8:	e8 9b 41 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827b5ed:	c9                   	leave
 827b5ee:	c3                   	ret
 827b5ef:	90                   	nop

```

```c
// SeriaRoomAniDecoEvent::EndEvent @ 0x827b59e

/* SeriaRoomAniDecoEvent::EndEvent() */

void __thiscall SeriaRoomAniDecoEvent::EndEvent(SeriaRoomAniDecoEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event end!");
  return;
}

```

---

## SendAniDecoItem

```asm
// === 0827b75a SeriaRoomAniDecoEvent::SendAniDecoItem  [0x0827b75a-0x827b999] ===
 827b75a:	55                   	push   %ebp
 827b75b:	89 e5                	mov    %esp,%ebp
 827b75d:	57                   	push   %edi
 827b75e:	56                   	push   %esi
 827b75f:	53                   	push   %ebx
 827b760:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 827b766:	8b 55 0c             	mov    0xc(%ebp),%edx
 827b769:	8d 45 dc             	lea    -0x24(%ebp),%eax
 827b76c:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b770:	89 04 24             	mov    %eax,(%esp)
 827b773:	e8 1e 44 fb ff       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 827b778:	83 ec 04             	sub    $0x4,%esp
 827b77b:	0f b7 5d dc          	movzwl -0x24(%ebp),%ebx
 827b77f:	e8 17 0a e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827b784:	89 04 24             	mov    %eax,(%esp)
 827b787:	e8 82 a5 0e 00       	call   8365d0e <_ZN12CDataManager14maxAniDecoItemEv>
 827b78c:	66 39 c3             	cmp    %ax,%bx
 827b78f:	0f 9c c0             	setl   %al
 827b792:	84 c0                	test   %al,%al
 827b794:	0f 84 f5 01 00 00    	je     827b98f <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x235>
 827b79a:	8b 55 0c             	mov    0xc(%ebp),%edx
 827b79d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 827b7a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b7a4:	89 04 24             	mov    %eax,(%esp)
 827b7a7:	e8 ea 43 fb ff       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 827b7ac:	83 ec 04             	sub    $0x4,%esp
 827b7af:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 827b7b3:	0f bf d8             	movswl %ax,%ebx
 827b7b6:	e8 e0 09 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827b7bb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b7bf:	89 04 24             	mov    %eax,(%esp)
 827b7c2:	e8 1d a6 0e 00       	call   8365de4 <_ZN12CDataManager23getSeriaRoomAniDecoItemEi>
 827b7c7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827b7ca:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 827b7ce:	0f 84 b7 01 00 00    	je     827b98b <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x231>
 827b7d4:	8d 45 9b             	lea    -0x65(%ebp),%eax
 827b7d7:	89 04 24             	mov    %eax,(%esp)
 827b7da:	e8 75 00 e5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 827b7df:	e8 b7 09 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827b7e4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 827b7e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b7eb:	89 04 24             	mov    %eax,(%esp)
 827b7ee:	e8 3f 42 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827b7f3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827b7f6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 827b7fa:	0f 84 8f 01 00 00    	je     827b98f <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x235>
 827b800:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827b803:	89 04 24             	mov    %eax,(%esp)
 827b806:	e8 3d 54 e9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 827b80b:	89 45 9d             	mov    %eax,-0x63(%ebp)
 827b80e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827b811:	8b 00                	mov    (%eax),%eax
 827b813:	83 c0 08             	add    $0x8,%eax
 827b816:	8b 10                	mov    (%eax),%edx
 827b818:	8d 45 9b             	lea    -0x65(%ebp),%eax
 827b81b:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b81f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827b822:	89 04 24             	mov    %eax,(%esp)
 827b825:	ff d2                	call   *%edx
 827b827:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827b82e:	00 
 827b82f:	8d 45 9b             	lea    -0x65(%ebp),%eax
 827b832:	89 04 24             	mov    %eax,(%esp)
 827b835:	e8 4a 00 e5 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 827b83a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827b841:	00 
 827b842:	c7 44 24 08 7d 64 c0 	movl   $0x8c0647d,0x8(%esp)
 827b849:	08 
 827b84a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 827b851:	00 
 827b852:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 827b859:	e8 a0 9f 82 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 827b85e:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 827b865:	00 
 827b866:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b86a:	8d 85 9b fe ff ff    	lea    -0x165(%ebp),%eax
 827b870:	89 04 24             	mov    %eax,(%esp)
 827b873:	e8 58 20 e0 ff       	call   807d8d0 <strncpy@plt>
 827b878:	8b 45 9d             	mov    -0x63(%ebp),%eax
 827b87b:	85 c0                	test   %eax,%eax
 827b87d:	0f 84 0b 01 00 00    	je     827b98e <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x234>
 827b883:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b886:	89 04 24             	mov    %eax,(%esp)
 827b889:	e8 ee f0 3c 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 827b88e:	89 c6                	mov    %eax,%esi
 827b890:	8d 85 9b fe ff ff    	lea    -0x165(%ebp),%eax
 827b896:	89 04 24             	mov    %eax,(%esp)
 827b899:	e8 12 2b e0 ff       	call   807e3b0 <strlen@plt>
 827b89e:	89 c7                	mov    %eax,%edi
 827b8a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b8a3:	89 04 24             	mov    %eax,(%esp)
 827b8a6:	e8 a3 03 e5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827b8ab:	89 c3                	mov    %eax,%ebx
 827b8ad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827b8b4:	00 
 827b8b5:	c7 44 24 08 91 64 c0 	movl   $0x8c06491,0x8(%esp)
 827b8bc:	08 
 827b8bd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 827b8c4:	00 
 827b8c5:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 827b8cc:	e8 2d 9f 82 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 827b8d1:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 827b8d8:	00 
 827b8d9:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 827b8e0:	00 
 827b8e1:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 827b8e5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 827b8ec:	00 
 827b8ed:	89 7c 24 14          	mov    %edi,0x14(%esp)
 827b8f1:	8d 95 9b fe ff ff    	lea    -0x165(%ebp),%edx
 827b8f7:	89 54 24 10          	mov    %edx,0x10(%esp)
 827b8fb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 827b8ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827b906:	00 
 827b907:	8d 55 9b             	lea    -0x65(%ebp),%edx
 827b90a:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b90e:	89 04 24             	mov    %eax,(%esp)
 827b911:	e8 d2 9c 2d 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 827b916:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 827b91a:	83 c0 01             	add    $0x1,%eax
 827b91d:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
 827b921:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b924:	8b 55 d8             	mov    -0x28(%ebp),%edx
 827b927:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b92b:	89 04 24             	mov    %eax,(%esp)
 827b92e:	e8 45 42 fb ff       	call   822fb78 <_ZN15CUserCharacInfo23setSeriaRoomAniDecoInfoE17seriaRoom_AniDeco>
 827b933:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 827b937:	98                   	cwtl
 827b938:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 827b93e:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 827b942:	0f bf f8             	movswl %ax,%edi
 827b945:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b948:	89 04 24             	mov    %eax,(%esp)
 827b94b:	e8 fe 02 e5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827b950:	89 c6                	mov    %eax,%esi
 827b952:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b955:	89 04 24             	mov    %eax,(%esp)
 827b958:	e8 1f f0 3c 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 827b95d:	0f bf d8             	movswl %ax,%ebx
 827b960:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b963:	89 04 24             	mov    %eax,(%esp)
 827b966:	e8 03 ea e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827b96b:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 827b971:	89 54 24 10          	mov    %edx,0x10(%esp)
 827b975:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 827b979:	89 74 24 08          	mov    %esi,0x8(%esp)
 827b97d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b981:	89 04 24             	mov    %eax,(%esp)
 827b984:	e8 eb f5 1c 00       	call   844af74 <_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss>
 827b989:	eb 04                	jmp    827b98f <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x235>
 827b98b:	90                   	nop
 827b98c:	eb 01                	jmp    827b98f <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser+0x235>
 827b98e:	90                   	nop
 827b98f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 827b992:	83 c4 00             	add    $0x0,%esp
 827b995:	5b                   	pop    %ebx
 827b996:	5e                   	pop    %esi
 827b997:	5f                   	pop    %edi
 827b998:	5d                   	pop    %ebp
 827b999:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::SendAniDecoItem @ 0x827b75a

/* SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&) */

void __thiscall SeriaRoomAniDecoEvent::SendAniDecoItem(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  CDataManager *pCVar4;
  int iVar5;
  char *__src;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char local_169 [256];
  Inven_Item local_69 [2];
  int local_67;
  undefined4 local_2c;
  short local_28;
  int local_24;
  CItem *local_20;
  
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  pCVar4 = (CDataManager *)G_CDataManager();
  sVar2 = CDataManager::maxAniDecoItem(pCVar4);
  if (local_28 < sVar2) {
    CUserCharacInfo::getSeriaRoomAniDecoInfo();
    iVar5 = G_CDataManager();
    local_24 = CDataManager::getSeriaRoomAniDecoItem(iVar5);
    if (local_24 != 0) {
      Inven_Item::Inven_Item(local_69);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(pCVar4,local_24);
      if (local_20 != (CItem *)0x0) {
        local_67 = CItem::get_index(local_20);
        (**(code **)(*(int *)local_20 + 8))(local_20,local_69);
        Inven_Item::set_add_info(local_69,1);
        __src = (char *)RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                   "game_server_msg_290",(bool *)0x0);
        strncpy(local_169,__src,0xff);
        if (local_67 != 0) {
          uVar6 = CUser::GetServerGroupToPvP(param_1);
          sVar7 = strlen(local_169);
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar9 = RDARScriptStringManager::findString
                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                             "game_server_msg_289",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (uVar9,local_69,0,uVar8,local_169,sVar7,0,uVar6,0,0);
          local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
          CUserCharacInfo::setSeriaRoomAniDecoInfo((CUserCharacInfo *)param_1,local_2c);
          sVar1 = local_2c._2_2_;
          sVar2 = (short)local_2c;
          iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          sVar3 = CUser::GetServerGroupToPvP(param_1);
          uVar10 = CUser::get_acc_id(param_1);
          DB_UpdateSeriaRoomAnimationDeco::makeRequest(uVar10,sVar3,iVar5,sVar2,sVar1);
        }
      }
    }
  }
  return;
}

```

---

## SendEventInfo

```asm
// === 0827b99a SeriaRoomAniDecoEvent::SendEventInfo  [0x0827b99a-0x827ba47] ===
 827b99a:	55                   	push   %ebp
 827b99b:	89 e5                	mov    %esp,%ebp
 827b99d:	56                   	push   %esi
 827b99e:	53                   	push   %ebx
 827b99f:	83 ec 20             	sub    $0x20,%esp
 827b9a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b9a5:	89 04 24             	mov    %eax,(%esp)
 827b9a8:	e8 9f 23 31 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 827b9ad:	c7 44 24 08 c1 01 00 	movl   $0x1c1,0x8(%esp)
 827b9b4:	00 
 827b9b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827b9bc:	00 
 827b9bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b9c0:	89 04 24             	mov    %eax,(%esp)
 827b9c3:	e8 34 ff e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 827b9c8:	8b 55 0c             	mov    0xc(%ebp),%edx
 827b9cb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 827b9ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b9d2:	89 04 24             	mov    %eax,(%esp)
 827b9d5:	e8 bc 41 fb ff       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 827b9da:	83 ec 04             	sub    $0x4,%esp
 827b9dd:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 827b9e1:	98                   	cwtl
 827b9e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b9e6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b9e9:	89 04 24             	mov    %eax,(%esp)
 827b9ec:	e8 b3 e4 e5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 827b9f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827b9f8:	00 
 827b9f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b9fc:	89 04 24             	mov    %eax,(%esp)
 827b9ff:	e8 54 ff e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 827ba04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827ba07:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ba0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ba0e:	89 04 24             	mov    %eax,(%esp)
 827ba11:	e8 a4 cb 3c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 827ba16:	eb 1b                	jmp    827ba33 <_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser+0x99>
 827ba18:	89 d3                	mov    %edx,%ebx
 827ba1a:	89 c6                	mov    %eax,%esi
 827ba1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827ba1f:	89 04 24             	mov    %eax,(%esp)
 827ba22:	e8 59 24 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827ba27:	89 f0                	mov    %esi,%eax
 827ba29:	89 da                	mov    %ebx,%edx
 827ba2b:	89 04 24             	mov    %eax,(%esp)
 827ba2e:	e8 1d 7d 86 00       	call   8ae3750 <_Unwind_Resume>
 827ba33:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827ba36:	89 04 24             	mov    %eax,(%esp)
 827ba39:	e8 42 24 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827ba3e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 827ba41:	83 c4 00             	add    $0x0,%esp
 827ba44:	5b                   	pop    %ebx
 827ba45:	5e                   	pop    %esi
 827ba46:	5d                   	pop    %ebp
 827ba47:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::SendEventInfo @ 0x827b99a

/* SeriaRoomAniDecoEvent::SendEventInfo(CUser&) */

void __thiscall SeriaRoomAniDecoEvent::SendEventInfo(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  PacketGuard local_1c [14];
  short local_e;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0827b9c3 to 0827ba15 has its CatchHandler @ 0827ba18 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1c1);
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)local_e);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## SeriaRoomAniDecoEvent

```asm
// === 0827b490 SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent  [0x0827b490-0x827b4ab] ===
 827b490:	55                   	push   %ebp
 827b491:	89 e5                	mov    %esp,%ebp
 827b493:	83 ec 18             	sub    $0x18,%esp
 827b496:	8b 45 08             	mov    0x8(%ebp),%eax
 827b499:	89 04 24             	mov    %eax,(%esp)
 827b49c:	e8 8b f9 e8 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 827b4a1:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4a4:	c7 00 88 71 c0 08    	movl   $0x8c07188,(%eax)
 827b4aa:	c9                   	leave
 827b4ab:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent @ 0x827b490

/* SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__SeriaRoomAniDecoEvent_08c07188;
  return;
}

```

---

## StartAction

```asm
// === 0827b6a6 SeriaRoomAniDecoEvent::StartAction  [0x0827b6a6-0x827b759] ===
 827b6a6:	55                   	push   %ebp
 827b6a7:	89 e5                	mov    %esp,%ebp
 827b6a9:	83 ec 28             	sub    $0x28,%esp
 827b6ac:	e8 f6 ec e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827b6b1:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 827b6b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b6ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b6be:	89 04 24             	mov    %eax,(%esp)
 827b6c1:	e8 e0 c1 e7 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 827b6c6:	83 ec 04             	sub    $0x4,%esp
 827b6c9:	eb 55                	jmp    827b720 <_ZN21SeriaRoomAniDecoEvent11StartActionEv+0x7a>
 827b6cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b6ce:	89 04 24             	mov    %eax,(%esp)
 827b6d1:	e8 6e c2 e7 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 827b6d6:	8b 40 04             	mov    0x4(%eax),%eax
 827b6d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827b6dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827b6df:	89 04 24             	mov    %eax,(%esp)
 827b6e2:	e8 a5 ec e5 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 827b6e7:	83 f8 02             	cmp    $0x2,%eax
 827b6ea:	0f 9f c0             	setg   %al
 827b6ed:	84 c0                	test   %al,%al
 827b6ef:	74 12                	je     827b703 <_ZN21SeriaRoomAniDecoEvent11StartActionEv+0x5d>
 827b6f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827b6f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b6f8:	8b 45 08             	mov    0x8(%ebp),%eax
 827b6fb:	89 04 24             	mov    %eax,(%esp)
 827b6fe:	e8 97 02 00 00       	call   827b99a <_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser>
 827b703:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827b706:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827b70d:	00 
 827b70e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 827b711:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b715:	89 04 24             	mov    %eax,(%esp)
 827b718:	e8 e9 c1 e7 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 827b71d:	83 ec 04             	sub    $0x4,%esp
 827b720:	e8 82 ec e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827b725:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 827b72b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827b72e:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b732:	89 04 24             	mov    %eax,(%esp)
 827b735:	e8 92 c1 e7 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 827b73a:	83 ec 04             	sub    $0x4,%esp
 827b73d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827b740:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b744:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b747:	89 04 24             	mov    %eax,(%esp)
 827b74a:	e8 a3 c1 e7 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 827b74f:	84 c0                	test   %al,%al
 827b751:	0f 85 74 ff ff ff    	jne    827b6cb <_ZN21SeriaRoomAniDecoEvent11StartActionEv+0x25>
 827b757:	c9                   	leave
 827b758:	c3                   	ret
 827b759:	90                   	nop

```

```c
// SeriaRoomAniDecoEvent::StartAction @ 0x827b6a6

/* SeriaRoomAniDecoEvent::StartAction() */

void __thiscall SeriaRoomAniDecoEvent::StartAction(SeriaRoomAniDecoEvent *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      SendEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}

```

---

## StartEvent

```asm
// === 0827b4fa SeriaRoomAniDecoEvent::StartEvent  [0x0827b4fa-0x827b54b] ===
 827b4fa:	55                   	push   %ebp
 827b4fb:	89 e5                	mov    %esp,%ebp
 827b4fd:	83 ec 28             	sub    $0x28,%esp
 827b500:	8b 45 08             	mov    0x8(%ebp),%eax
 827b503:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827b50a:	00 
 827b50b:	89 04 24             	mov    %eax,(%esp)
 827b50e:	e8 cf cf e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827b513:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827b51a:	00 
 827b51b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 827b522:	00 
 827b523:	c7 44 24 04 40 71 c0 	movl   $0x8c07140,0x4(%esp)
 827b52a:	08 
 827b52b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b52e:	89 04 24             	mov    %eax,(%esp)
 827b531:	e8 e2 41 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827b536:	c7 44 24 04 00 64 c0 	movl   $0x8c06400,0x4(%esp)
 827b53d:	08 
 827b53e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b541:	89 04 24             	mov    %eax,(%esp)
 827b544:	e8 3f 42 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827b549:	c9                   	leave
 827b54a:	c3                   	ret
 827b54b:	90                   	nop

```

```c
// SeriaRoomAniDecoEvent::StartEvent @ 0x827b4fa

/* SeriaRoomAniDecoEvent::StartEvent() */

void __thiscall SeriaRoomAniDecoEvent::StartEvent(SeriaRoomAniDecoEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event start!");
  return;
}

```

---

## StartEvent_0827b54c

```asm
// === 0827b54c SeriaRoomAniDecoEvent::StartEvent  [0x0827b54c-0x827b59d] ===
 827b54c:	55                   	push   %ebp
 827b54d:	89 e5                	mov    %esp,%ebp
 827b54f:	83 ec 28             	sub    $0x28,%esp
 827b552:	8b 45 08             	mov    0x8(%ebp),%eax
 827b555:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827b55c:	00 
 827b55d:	89 04 24             	mov    %eax,(%esp)
 827b560:	e8 7d cf e4 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 827b565:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827b56c:	00 
 827b56d:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 827b574:	00 
 827b575:	c7 44 24 04 00 71 c0 	movl   $0x8c07100,0x4(%esp)
 827b57c:	08 
 827b57d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b580:	89 04 24             	mov    %eax,(%esp)
 827b583:	e8 90 41 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827b588:	c7 44 24 04 24 64 c0 	movl   $0x8c06424,0x4(%esp)
 827b58f:	08 
 827b590:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b593:	89 04 24             	mov    %eax,(%esp)
 827b596:	e8 ed 41 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827b59b:	c9                   	leave
 827b59c:	c3                   	ret
 827b59d:	90                   	nop

```

```c
// SeriaRoomAniDecoEvent::StartEvent @ 0x827b54c

/* SeriaRoomAniDecoEvent::StartEvent(Word_Param) */

void SeriaRoomAniDecoEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void SeriaRoomAniDecoEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"SeriaRoomAniDecoEvent Event start! [monitor request]");
  return;
}

```

---

## dailyresetData

```asm
// === 0827b5f0 SeriaRoomAniDecoEvent::dailyresetData  [0x0827b5f0-0x827b6a5] ===
 827b5f0:	55                   	push   %ebp
 827b5f1:	89 e5                	mov    %esp,%ebp
 827b5f3:	83 ec 28             	sub    $0x28,%esp
 827b5f6:	e8 ac ed e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827b5fb:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 827b601:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b604:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b608:	89 04 24             	mov    %eax,(%esp)
 827b60b:	e8 96 c2 e7 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 827b610:	83 ec 04             	sub    $0x4,%esp
 827b613:	eb 58                	jmp    827b66d <_ZN21SeriaRoomAniDecoEvent14dailyresetDataEv+0x7d>
 827b615:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b618:	89 04 24             	mov    %eax,(%esp)
 827b61b:	e8 24 c3 e7 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 827b620:	8b 40 04             	mov    0x4(%eax),%eax
 827b623:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827b626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827b629:	89 04 24             	mov    %eax,(%esp)
 827b62c:	e8 5b ed e5 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 827b631:	83 f8 02             	cmp    $0x2,%eax
 827b634:	0f 9e c0             	setle  %al
 827b637:	84 c0                	test   %al,%al
 827b639:	75 14                	jne    827b64f <_ZN21SeriaRoomAniDecoEvent14dailyresetDataEv+0x5f>
 827b63b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827b63e:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b642:	8b 45 08             	mov    0x8(%ebp),%eax
 827b645:	89 04 24             	mov    %eax,(%esp)
 827b648:	e8 0d 01 00 00       	call   827b75a <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser>
 827b64d:	eb 01                	jmp    827b650 <_ZN21SeriaRoomAniDecoEvent14dailyresetDataEv+0x60>
 827b64f:	90                   	nop
 827b650:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827b653:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827b65a:	00 
 827b65b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 827b65e:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b662:	89 04 24             	mov    %eax,(%esp)
 827b665:	e8 9c c2 e7 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 827b66a:	83 ec 04             	sub    $0x4,%esp
 827b66d:	e8 35 ed e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827b672:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 827b678:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827b67b:	89 54 24 04          	mov    %edx,0x4(%esp)
 827b67f:	89 04 24             	mov    %eax,(%esp)
 827b682:	e8 45 c2 e7 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 827b687:	83 ec 04             	sub    $0x4,%esp
 827b68a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827b68d:	89 44 24 04          	mov    %eax,0x4(%esp)
 827b691:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827b694:	89 04 24             	mov    %eax,(%esp)
 827b697:	e8 56 c2 e7 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 827b69c:	84 c0                	test   %al,%al
 827b69e:	0f 85 71 ff ff ff    	jne    827b615 <_ZN21SeriaRoomAniDecoEvent14dailyresetDataEv+0x25>
 827b6a4:	c9                   	leave
 827b6a5:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::dailyresetData @ 0x827b5f0

/* SeriaRoomAniDecoEvent::dailyresetData() */

void __thiscall SeriaRoomAniDecoEvent::dailyresetData(SeriaRoomAniDecoEvent *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      SendAniDecoItem(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}

```

---

## processEvent

```asm
// === 0827ba52 SeriaRoomAniDecoEvent::processEvent  [0x0827ba52-0x827bbef] ===
 827ba52:	55                   	push   %ebp
 827ba53:	89 e5                	mov    %esp,%ebp
 827ba55:	57                   	push   %edi
 827ba56:	56                   	push   %esi
 827ba57:	53                   	push   %ebx
 827ba58:	81 ec 8c 01 00 00    	sub    $0x18c,%esp
 827ba5e:	8b 55 0c             	mov    0xc(%ebp),%edx
 827ba61:	8d 45 dc             	lea    -0x24(%ebp),%eax
 827ba64:	89 54 24 04          	mov    %edx,0x4(%esp)
 827ba68:	89 04 24             	mov    %eax,(%esp)
 827ba6b:	e8 26 41 fb ff       	call   822fb96 <_ZN15CUserCharacInfo23getSeriaRoomAniDecoInfoEv>
 827ba70:	83 ec 04             	sub    $0x4,%esp
 827ba73:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 827ba77:	0f bf d8             	movswl %ax,%ebx
 827ba7a:	e8 1c 07 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827ba7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827ba83:	89 04 24             	mov    %eax,(%esp)
 827ba86:	e8 9b a2 0e 00       	call   8365d26 <_ZN12CDataManager29getSeriaRoomAniDecoRewardItemEi>
 827ba8b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827ba8e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 827ba92:	75 0a                	jne    827ba9e <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser+0x4c>
 827ba94:	b8 00 00 00 00       	mov    $0x0,%eax
 827ba99:	e9 47 01 00 00       	jmp    827bbe5 <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser+0x193>
 827ba9e:	8d 45 9f             	lea    -0x61(%ebp),%eax
 827baa1:	89 04 24             	mov    %eax,(%esp)
 827baa4:	e8 ab fd e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 827baa9:	e8 ed 06 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827baae:	8b 55 e0             	mov    -0x20(%ebp),%edx
 827bab1:	89 54 24 04          	mov    %edx,0x4(%esp)
 827bab5:	89 04 24             	mov    %eax,(%esp)
 827bab8:	e8 75 3f 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827babd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827bac0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 827bac4:	0f 84 16 01 00 00    	je     827bbe0 <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser+0x18e>
 827baca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827bacd:	89 04 24             	mov    %eax,(%esp)
 827bad0:	e8 73 51 e9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 827bad5:	89 45 a1             	mov    %eax,-0x5f(%ebp)
 827bad8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827badb:	8b 00                	mov    (%eax),%eax
 827badd:	83 c0 08             	add    $0x8,%eax
 827bae0:	8b 10                	mov    (%eax),%edx
 827bae2:	8d 45 9f             	lea    -0x61(%ebp),%eax
 827bae5:	89 44 24 04          	mov    %eax,0x4(%esp)
 827bae9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827baec:	89 04 24             	mov    %eax,(%esp)
 827baef:	ff d2                	call   *%edx
 827baf1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827baf8:	00 
 827baf9:	8d 45 9f             	lea    -0x61(%ebp),%eax
 827bafc:	89 04 24             	mov    %eax,(%esp)
 827baff:	e8 80 fd e4 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 827bb04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827bb0b:	00 
 827bb0c:	c7 44 24 08 a5 64 c0 	movl   $0x8c064a5,0x8(%esp)
 827bb13:	08 
 827bb14:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 827bb1b:	00 
 827bb1c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 827bb23:	e8 d6 9c 82 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 827bb28:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 827bb2f:	00 
 827bb30:	89 44 24 04          	mov    %eax,0x4(%esp)
 827bb34:	8d 85 9f fe ff ff    	lea    -0x161(%ebp),%eax
 827bb3a:	89 04 24             	mov    %eax,(%esp)
 827bb3d:	e8 8e 1d e0 ff       	call   807d8d0 <strncpy@plt>
 827bb42:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 827bb45:	85 c0                	test   %eax,%eax
 827bb47:	0f 84 93 00 00 00    	je     827bbe0 <_ZN21SeriaRoomAniDecoEvent12processEventER5CUser+0x18e>
 827bb4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 827bb50:	89 04 24             	mov    %eax,(%esp)
 827bb53:	e8 24 ee 3c 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 827bb58:	89 c6                	mov    %eax,%esi
 827bb5a:	8d 85 9f fe ff ff    	lea    -0x161(%ebp),%eax
 827bb60:	89 04 24             	mov    %eax,(%esp)
 827bb63:	e8 48 28 e0 ff       	call   807e3b0 <strlen@plt>
 827bb68:	89 c7                	mov    %eax,%edi
 827bb6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 827bb6d:	89 04 24             	mov    %eax,(%esp)
 827bb70:	e8 d9 00 e5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827bb75:	89 c3                	mov    %eax,%ebx
 827bb77:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827bb7e:	00 
 827bb7f:	c7 44 24 08 91 64 c0 	movl   $0x8c06491,0x8(%esp)
 827bb86:	08 
 827bb87:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 827bb8e:	00 
 827bb8f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 827bb96:	e8 63 9c 82 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 827bb9b:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 827bba2:	00 
 827bba3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 827bbaa:	00 
 827bbab:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 827bbaf:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 827bbb6:	00 
 827bbb7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 827bbbb:	8d 95 9f fe ff ff    	lea    -0x161(%ebp),%edx
 827bbc1:	89 54 24 10          	mov    %edx,0x10(%esp)
 827bbc5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 827bbc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827bbd0:	00 
 827bbd1:	8d 55 9f             	lea    -0x61(%ebp),%edx
 827bbd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 827bbd8:	89 04 24             	mov    %eax,(%esp)
 827bbdb:	e8 08 9a 2d 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 827bbe0:	b8 00 00 00 00       	mov    $0x0,%eax
 827bbe5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 827bbe8:	83 c4 00             	add    $0x0,%esp
 827bbeb:	5b                   	pop    %ebx
 827bbec:	5e                   	pop    %esi
 827bbed:	5f                   	pop    %edi
 827bbee:	5d                   	pop    %ebp
 827bbef:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::processEvent @ 0x827ba52

/* SeriaRoomAniDecoEvent::processEvent(CUser&) */

undefined4 __thiscall
SeriaRoomAniDecoEvent::processEvent(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  CDataManager *pCVar1;
  char *__src;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_165 [256];
  Inven_Item local_65 [2];
  int local_63;
  short local_26;
  int local_24;
  CItem *local_20;
  
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  pCVar1 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::getSeriaRoomAniDecoRewardItem(pCVar1,(int)local_26);
  if (local_24 != 0) {
    Inven_Item::Inven_Item(local_65);
    pCVar1 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(pCVar1,local_24);
    if (local_20 != (CItem *)0x0) {
      local_63 = CItem::get_index(local_20);
      (**(code **)(*(int *)local_20 + 8))(local_20,local_65);
      Inven_Item::set_add_info(local_65,1);
      __src = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_291",(bool *)0x0);
      strncpy(local_165,__src,0xff);
      if (local_63 != 0) {
        uVar2 = CUser::GetServerGroupToPvP(param_1);
        sVar3 = strlen(local_165);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar5 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_289"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar5,local_65,0,uVar4,local_165,sVar3,0,uVar2,0,0);
      }
    }
  }
  return 0;
}

```

---

## ~SeriaRoomAniDecoEvent

```asm
// === 0827b4ac SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent  [0x0827b4ac-0x827b4db] ===
 827b4ac:	55                   	push   %ebp
 827b4ad:	89 e5                	mov    %esp,%ebp
 827b4af:	83 ec 18             	sub    $0x18,%esp
 827b4b2:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4b5:	c7 00 88 71 c0 08    	movl   $0x8c07188,(%eax)
 827b4bb:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4be:	89 04 24             	mov    %eax,(%esp)
 827b4c1:	e8 8c f9 e8 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 827b4c6:	b8 00 00 00 00       	mov    $0x0,%eax
 827b4cb:	84 c0                	test   %al,%al
 827b4cd:	74 0b                	je     827b4da <_ZN21SeriaRoomAniDecoEventD1Ev+0x2e>
 827b4cf:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4d2:	89 04 24             	mov    %eax,(%esp)
 827b4d5:	e8 16 90 4a 00       	call   87244f0 <_ZdlPv>
 827b4da:	c9                   	leave
 827b4db:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent @ 0x827b4ac

/* WARNING: Removing unreachable block (ram,0x0827b4cf) */
/* SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  *(undefined ***)this = &PTR__SeriaRoomAniDecoEvent_08c07188;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~SeriaRoomAniDecoEvent_0827b4dc

```asm
// === 0827b4dc SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent  [0x0827b4dc-0x827b4f9] ===
 827b4dc:	55                   	push   %ebp
 827b4dd:	89 e5                	mov    %esp,%ebp
 827b4df:	83 ec 18             	sub    $0x18,%esp
 827b4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4e5:	89 04 24             	mov    %eax,(%esp)
 827b4e8:	e8 bf ff ff ff       	call   827b4ac <_ZN21SeriaRoomAniDecoEventD1Ev>
 827b4ed:	8b 45 08             	mov    0x8(%ebp),%eax
 827b4f0:	89 04 24             	mov    %eax,(%esp)
 827b4f3:	e8 f8 8f 4a 00       	call   87244f0 <_ZdlPv>
 827b4f8:	c9                   	leave
 827b4f9:	c3                   	ret

```

```c
// SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent @ 0x827b4dc

/* SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent() */

void __thiscall SeriaRoomAniDecoEvent::~SeriaRoomAniDecoEvent(SeriaRoomAniDecoEvent *this)

{
  ~SeriaRoomAniDecoEvent(this);
  operator_delete(this);
  return;
}

```

