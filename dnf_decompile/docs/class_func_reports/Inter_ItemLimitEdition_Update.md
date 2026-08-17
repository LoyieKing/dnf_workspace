# Inter_ItemLimitEdition_Update

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dbd16 Inter_ItemLimitEdition_Update::dispatch_sig  [0x084dbd16-0x84dbeef] ===
 84dbd16:	55                   	push   %ebp
 84dbd17:	89 e5                	mov    %esp,%ebp
 84dbd19:	56                   	push   %esi
 84dbd1a:	53                   	push   %ebx
 84dbd1b:	83 ec 30             	sub    $0x30,%esp
 84dbd1e:	8b 45 10             	mov    0x10(%ebp),%eax
 84dbd21:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84dbd24:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbd27:	89 04 24             	mov    %eax,(%esp)
 84dbd2a:	e8 1d 20 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dbd2f:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84dbd36:	00 
 84dbd37:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbd3e:	00 
 84dbd3f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbd42:	89 04 24             	mov    %eax,(%esp)
 84dbd45:	e8 b2 fb be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dbd4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbd51:	00 
 84dbd52:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbd55:	89 04 24             	mov    %eax,(%esp)
 84dbd58:	e8 c3 fb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dbd5d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbd60:	89 04 24             	mov    %eax,(%esp)
 84dbd63:	e8 e4 4d c3 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84dbd68:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84dbd6b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84dbd72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbd79:	00 
 84dbd7a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbd7d:	89 04 24             	mov    %eax,(%esp)
 84dbd80:	e8 9b fb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dbd85:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84dbd8c:	e9 c7 00 00 00       	jmp    84dbe58 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x142>
 84dbd91:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84dbd94:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 84dbd97:	89 d0                	mov    %edx,%eax
 84dbd99:	c1 e0 03             	shl    $0x3,%eax
 84dbd9c:	01 d0                	add    %edx,%eax
 84dbd9e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dbda1:	83 c0 10             	add    $0x10,%eax
 84dbda4:	8b 58 02             	mov    0x2(%eax),%ebx
 84dbda7:	e8 ef 03 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dbdac:	89 04 24             	mov    %eax,(%esp)
 84dbdaf:	e8 f2 e1 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dbdb4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dbdb8:	89 04 24             	mov    %eax,(%esp)
 84dbdbb:	e8 e8 e2 c9 ff       	call   817a0a8 <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 84dbdc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dbdc3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84dbdc7:	74 0f                	je     84dbdd8 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0xc2>
 84dbdc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dbdcc:	89 04 24             	mov    %eax,(%esp)
 84dbdcf:	e8 f4 0c d5 ff       	call   822cac8 <_ZNK17CItemLimitEdition14isSellCompleteEv>
 84dbdd4:	84 c0                	test   %al,%al
 84dbdd6:	74 07                	je     84dbddf <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0xc9>
 84dbdd8:	b8 01 00 00 00       	mov    $0x1,%eax
 84dbddd:	eb 05                	jmp    84dbde4 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0xce>
 84dbddf:	b8 00 00 00 00       	mov    $0x0,%eax
 84dbde4:	84 c0                	test   %al,%al
 84dbde6:	75 68                	jne    84dbe50 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x13a>
 84dbde8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84dbdeb:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 84dbdee:	89 d0                	mov    %edx,%eax
 84dbdf0:	c1 e0 03             	shl    $0x3,%eax
 84dbdf3:	01 d0                	add    %edx,%eax
 84dbdf5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dbdf8:	83 c0 10             	add    $0x10,%eax
 84dbdfb:	8b 70 06             	mov    0x6(%eax),%esi
 84dbdfe:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84dbe01:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 84dbe04:	89 d0                	mov    %edx,%eax
 84dbe06:	c1 e0 03             	shl    $0x3,%eax
 84dbe09:	01 d0                	add    %edx,%eax
 84dbe0b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dbe0e:	83 c0 10             	add    $0x10,%eax
 84dbe11:	8b 58 02             	mov    0x2(%eax),%ebx
 84dbe14:	e8 82 03 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dbe19:	89 04 24             	mov    %eax,(%esp)
 84dbe1c:	e8 85 e1 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dbe21:	89 74 24 08          	mov    %esi,0x8(%esp)
 84dbe25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dbe29:	89 04 24             	mov    %eax,(%esp)
 84dbe2c:	e8 d3 da 00 00       	call   84e9904 <_ZN20CItemLimitEditionMgr10updateItemEjj>
 84dbe31:	83 f0 01             	xor    $0x1,%eax
 84dbe34:	84 c0                	test   %al,%al
 84dbe36:	75 1b                	jne    84dbe53 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x13d>
 84dbe38:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbe3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dbe3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dbe42:	89 04 24             	mov    %eax,(%esp)
 84dbe45:	e8 9e 72 03 00       	call   85130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>
 84dbe4a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84dbe4e:	eb 04                	jmp    84dbe54 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x13e>
 84dbe50:	90                   	nop
 84dbe51:	eb 01                	jmp    84dbe54 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x13e>
 84dbe53:	90                   	nop
 84dbe54:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84dbe58:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84dbe5b:	8b 40 0e             	mov    0xe(%eax),%eax
 84dbe5e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84dbe61:	0f 97 c0             	seta   %al
 84dbe64:	84 c0                	test   %al,%al
 84dbe66:	0f 85 25 ff ff ff    	jne    84dbd91 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x7b>
 84dbe6c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84dbe70:	75 07                	jne    84dbe79 <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x163>
 84dbe72:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dbe77:	eb 62                	jmp    84dbedb <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x1c5>
 84dbe79:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dbe7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dbe80:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84dbe83:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dbe87:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbe8a:	89 04 24             	mov    %eax,(%esp)
 84dbe8d:	e8 96 4c c3 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 84dbe92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dbe99:	00 
 84dbe9a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbe9d:	89 04 24             	mov    %eax,(%esp)
 84dbea0:	e8 b3 fa be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dbea5:	e8 fd e4 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dbeaa:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84dbead:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dbeb1:	89 04 24             	mov    %eax,(%esp)
 84dbeb4:	e8 5b cd 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dbeb9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dbebe:	eb 1b                	jmp    84dbedb <_ZN29Inter_ItemLimitEdition_Update12dispatch_sigEP5CUserPci+0x1c5>
 84dbec0:	89 d3                	mov    %edx,%ebx
 84dbec2:	89 c6                	mov    %eax,%esi
 84dbec4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbec7:	89 04 24             	mov    %eax,(%esp)
 84dbeca:	e8 b1 1f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbecf:	89 f0                	mov    %esi,%eax
 84dbed1:	89 da                	mov    %ebx,%edx
 84dbed3:	89 04 24             	mov    %eax,(%esp)
 84dbed6:	e8 75 78 60 00       	call   8ae3750 <_Unwind_Resume>
 84dbedb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dbede:	89 04 24             	mov    %eax,(%esp)
 84dbee1:	e8 9a 1f 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbee6:	89 d8                	mov    %ebx,%eax
 84dbee8:	83 c4 30             	add    $0x30,%esp
 84dbeeb:	5b                   	pop    %ebx
 84dbeec:	5e                   	pop    %esi
 84dbeed:	5d                   	pop    %ebp
 84dbeee:	c3                   	ret
 84dbeef:	90                   	nop

```

```c
// Inter_ItemLimitEdition_Update::dispatch_sig @ 0x84dbd16

/* Inter_ItemLimitEdition_Update::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Update::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *pCVar4;
  uint uVar5;
  CItemLimitEditionMgr *this;
  GameWorld *this_00;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  uint local_14;
  CItemLimitEdition *local_10;
  
  local_1c = param_3;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dbd45 to 084dbeb8 has its CatchHandler @ 084dbec0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xe1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  local_18 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  for (local_14 = 0; local_14 < *(uint *)(local_1c + 0xe); local_14 = local_14 + 1) {
    pCVar4 = (CDataManager *)G_CDataManager();
    uVar5 = CDataManager::getItemLimitEditionMgr(pCVar4);
    local_10 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar5);
    if ((local_10 == (CItemLimitEdition *)0x0) ||
       (cVar3 = CItemLimitEdition::isSellComplete(local_10), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      uVar5 = *(uint *)(local_1c + local_14 * 9 + 0x16);
      uVar1 = *(uint *)(local_1c + local_14 * 9 + 0x12);
      pCVar4 = (CDataManager *)G_CDataManager();
      this = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar4);
      cVar3 = CItemLimitEditionMgr::updateItem(this,uVar1,uVar5);
      if (cVar3 == '\x01') {
        CItemLimitEdition::makeInfoPacket(local_10,local_28);
        local_18 = local_18 + 1;
      }
    }
  }
  if (local_18 != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return 0;
}

```

