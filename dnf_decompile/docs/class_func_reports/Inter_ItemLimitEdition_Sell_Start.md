# Inter_ItemLimitEdition_Sell_Start

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084db878 Inter_ItemLimitEdition_Sell_Start::dispatch_sig  [0x084db878-0x84dbbb1] ===
 84db878:	55                   	push   %ebp
 84db879:	89 e5                	mov    %esp,%ebp
 84db87b:	57                   	push   %edi
 84db87c:	56                   	push   %esi
 84db87d:	53                   	push   %ebx
 84db87e:	83 ec 7c             	sub    $0x7c,%esp
 84db881:	8b 45 10             	mov    0x10(%ebp),%eax
 84db884:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84db887:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84db88a:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84db88e:	84 c0                	test   %al,%al
 84db890:	0f 84 d9 00 00 00    	je     84db96f <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0xf7>
 84db896:	e8 00 09 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db89b:	89 04 24             	mov    %eax,(%esp)
 84db89e:	e8 03 e7 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84db8a3:	89 04 24             	mov    %eax,(%esp)
 84db8a6:	e8 d1 e0 00 00       	call   84e997c <_ZNK20CItemLimitEditionMgr5emptyEv>
 84db8ab:	83 f0 01             	xor    $0x1,%eax
 84db8ae:	84 c0                	test   %al,%al
 84db8b0:	0f 84 a4 00 00 00    	je     84db95a <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0xe2>
 84db8b6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db8b9:	89 04 24             	mov    %eax,(%esp)
 84db8bc:	e8 8b 24 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84db8c1:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84db8c8:	00 
 84db8c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db8d0:	00 
 84db8d1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db8d4:	89 04 24             	mov    %eax,(%esp)
 84db8d7:	e8 20 00 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84db8dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db8e3:	00 
 84db8e4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db8e7:	89 04 24             	mov    %eax,(%esp)
 84db8ea:	e8 31 00 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84db8ef:	e8 a7 08 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db8f4:	89 04 24             	mov    %eax,(%esp)
 84db8f7:	e8 aa e6 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84db8fc:	8d 55 c0             	lea    -0x40(%ebp),%edx
 84db8ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 84db903:	89 04 24             	mov    %eax,(%esp)
 84db906:	e8 77 7a 03 00       	call   8513382 <_ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard>
 84db90b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84db912:	00 
 84db913:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db916:	89 04 24             	mov    %eax,(%esp)
 84db919:	e8 3a 00 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84db91e:	e8 84 ea bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84db923:	8d 55 c0             	lea    -0x40(%ebp),%edx
 84db926:	89 54 24 04          	mov    %edx,0x4(%esp)
 84db92a:	89 04 24             	mov    %eax,(%esp)
 84db92d:	e8 e2 d2 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84db932:	eb 1b                	jmp    84db94f <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0xd7>
 84db934:	89 d3                	mov    %edx,%ebx
 84db936:	89 c6                	mov    %eax,%esi
 84db938:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db93b:	89 04 24             	mov    %eax,(%esp)
 84db93e:	e8 3d 25 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db943:	89 f0                	mov    %esi,%eax
 84db945:	89 da                	mov    %ebx,%edx
 84db947:	89 04 24             	mov    %eax,(%esp)
 84db94a:	e8 01 7e 60 00       	call   8ae3750 <_Unwind_Resume>
 84db94f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84db952:	89 04 24             	mov    %eax,(%esp)
 84db955:	e8 26 25 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84db95a:	e8 3c 08 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db95f:	89 04 24             	mov    %eax,(%esp)
 84db962:	e8 3f e6 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84db967:	89 04 24             	mov    %eax,(%esp)
 84db96a:	e8 df 93 e9 ff       	call   8374d4e <_ZN20CItemLimitEditionMgr5clearEv>
 84db96f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84db976:	e9 64 01 00 00       	jmp    84dbadf <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x267>
 84db97b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84db97e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84db981:	89 d0                	mov    %edx,%eax
 84db983:	c1 e0 03             	shl    $0x3,%eax
 84db986:	01 d0                	add    %edx,%eax
 84db988:	c1 e0 03             	shl    $0x3,%eax
 84db98b:	8b 44 08 13          	mov    0x13(%eax,%ecx,1),%eax
 84db98f:	89 c3                	mov    %eax,%ebx
 84db991:	e8 05 08 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db996:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84db99a:	89 04 24             	mov    %eax,(%esp)
 84db99d:	e8 90 40 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84db9a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84db9a5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84db9a9:	75 1e                	jne    84db9c9 <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x151>
 84db9ab:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84db9ae:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84db9b1:	89 d0                	mov    %edx,%eax
 84db9b3:	c1 e0 03             	shl    $0x3,%eax
 84db9b6:	01 d0                	add    %edx,%eax
 84db9b8:	c1 e0 03             	shl    $0x3,%eax
 84db9bb:	8b 44 08 13          	mov    0x13(%eax,%ecx,1),%eax
 84db9bf:	83 f8 01             	cmp    $0x1,%eax
 84db9c2:	74 1f                	je     84db9e3 <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x16b>
 84db9c4:	e9 12 01 00 00       	jmp    84dbadb <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x263>
 84db9c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84db9cc:	8b 00                	mov    (%eax),%eax
 84db9ce:	83 c0 10             	add    $0x10,%eax
 84db9d1:	8b 10                	mov    (%eax),%edx
 84db9d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84db9d6:	89 04 24             	mov    %eax,(%esp)
 84db9d9:	ff d2                	call   *%edx
 84db9db:	84 c0                	test   %al,%al
 84db9dd:	0f 85 f7 00 00 00    	jne    84dbada <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x262>
 84db9e3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84db9e6:	89 d0                	mov    %edx,%eax
 84db9e8:	c1 e0 03             	shl    $0x3,%eax
 84db9eb:	01 d0                	add    %edx,%eax
 84db9ed:	c1 e0 03             	shl    $0x3,%eax
 84db9f0:	03 45 dc             	add    -0x24(%ebp),%eax
 84db9f3:	8d 58 0f             	lea    0xf(%eax),%ebx
 84db9f6:	e8 a0 07 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84db9fb:	89 04 24             	mov    %eax,(%esp)
 84db9fe:	e8 a3 e5 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dba03:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dba07:	89 04 24             	mov    %eax,(%esp)
 84dba0a:	e8 4f dd 00 00       	call   84e975e <_ZN20CItemLimitEditionMgr10registItemERK28stItemLimitEditionItemInfo_t>
 84dba0f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dba12:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84dba15:	89 d0                	mov    %edx,%eax
 84dba17:	c1 e0 03             	shl    $0x3,%eax
 84dba1a:	01 d0                	add    %edx,%eax
 84dba1c:	c1 e0 03             	shl    $0x3,%eax
 84dba1f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dba22:	83 c0 20             	add    $0x20,%eax
 84dba25:	8b 40 17             	mov    0x17(%eax),%eax
 84dba28:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84dba2b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dba2e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84dba31:	89 d0                	mov    %edx,%eax
 84dba33:	c1 e0 03             	shl    $0x3,%eax
 84dba36:	01 d0                	add    %edx,%eax
 84dba38:	c1 e0 03             	shl    $0x3,%eax
 84dba3b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dba3e:	83 c0 10             	add    $0x10,%eax
 84dba41:	8b 40 1b             	mov    0x1b(%eax),%eax
 84dba44:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84dba47:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dba4a:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84dba4d:	89 d0                	mov    %edx,%eax
 84dba4f:	c1 e0 03             	shl    $0x3,%eax
 84dba52:	01 d0                	add    %edx,%eax
 84dba54:	c1 e0 03             	shl    $0x3,%eax
 84dba57:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84dba5a:	83 c0 10             	add    $0x10,%eax
 84dba5d:	8b 78 17             	mov    0x17(%eax),%edi
 84dba60:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dba63:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84dba66:	89 d0                	mov    %edx,%eax
 84dba68:	c1 e0 03             	shl    $0x3,%eax
 84dba6b:	01 d0                	add    %edx,%eax
 84dba6d:	c1 e0 03             	shl    $0x3,%eax
 84dba70:	8b 74 08 13          	mov    0x13(%eax,%ecx,1),%esi
 84dba74:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dba77:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84dba7a:	89 d0                	mov    %edx,%eax
 84dba7c:	c1 e0 03             	shl    $0x3,%eax
 84dba7f:	01 d0                	add    %edx,%eax
 84dba81:	c1 e0 03             	shl    $0x3,%eax
 84dba84:	8b 5c 08 0f          	mov    0xf(%eax,%ecx,1),%ebx
 84dba88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84dba8f:	00 
 84dba90:	c7 44 24 08 38 46 00 	movl   $0x4638,0x8(%esp)
 84dba97:	00 
 84dba98:	c7 44 24 04 e0 bd c8 	movl   $0x8c8bde0,0x4(%esp)
 84dba9f:	08 
 84dbaa0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84dbaa3:	89 04 24             	mov    %eax,(%esp)
 84dbaa6:	e8 6d 3c 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84dbaab:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84dbaae:	89 44 24 18          	mov    %eax,0x18(%esp)
 84dbab2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84dbab5:	89 44 24 14          	mov    %eax,0x14(%esp)
 84dbab9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84dbabd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84dbac1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dbac5:	c7 44 24 04 88 98 c8 	movl   $0x8c89888,0x4(%esp)
 84dbacc:	08 
 84dbacd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84dbad0:	89 04 24             	mov    %eax,(%esp)
 84dbad3:	e8 b0 3c 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84dbad8:	eb 01                	jmp    84dbadb <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x263>
 84dbada:	90                   	nop
 84dbadb:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84dbadf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dbae2:	8b 40 0b             	mov    0xb(%eax),%eax
 84dbae5:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84dbae8:	0f 97 c0             	seta   %al
 84dbaeb:	84 c0                	test   %al,%al
 84dbaed:	0f 85 88 fe ff ff    	jne    84db97b <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x103>
 84dbaf3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dbaf6:	8b 40 0b             	mov    0xb(%eax),%eax
 84dbaf9:	85 c0                	test   %eax,%eax
 84dbafb:	0f 84 a4 00 00 00    	je     84dbba5 <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x32d>
 84dbb01:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb04:	89 04 24             	mov    %eax,(%esp)
 84dbb07:	e8 40 22 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dbb0c:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84dbb13:	00 
 84dbb14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbb1b:	00 
 84dbb1c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb1f:	89 04 24             	mov    %eax,(%esp)
 84dbb22:	e8 d5 fd be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dbb27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbb2e:	00 
 84dbb2f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb32:	89 04 24             	mov    %eax,(%esp)
 84dbb35:	e8 e6 fd be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dbb3a:	e8 5c 06 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dbb3f:	89 04 24             	mov    %eax,(%esp)
 84dbb42:	e8 5f e4 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dbb47:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84dbb4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dbb4e:	89 04 24             	mov    %eax,(%esp)
 84dbb51:	e8 74 77 03 00       	call   85132ca <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard>
 84dbb56:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dbb5d:	00 
 84dbb5e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb61:	89 04 24             	mov    %eax,(%esp)
 84dbb64:	e8 ef fd be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dbb69:	e8 39 e8 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dbb6e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84dbb71:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dbb75:	89 04 24             	mov    %eax,(%esp)
 84dbb78:	e8 97 d0 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dbb7d:	eb 1b                	jmp    84dbb9a <_ZN33Inter_ItemLimitEdition_Sell_Start12dispatch_sigEP5CUserPci+0x322>
 84dbb7f:	89 d3                	mov    %edx,%ebx
 84dbb81:	89 c6                	mov    %eax,%esi
 84dbb83:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb86:	89 04 24             	mov    %eax,(%esp)
 84dbb89:	e8 f2 22 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbb8e:	89 f0                	mov    %esi,%eax
 84dbb90:	89 da                	mov    %ebx,%edx
 84dbb92:	89 04 24             	mov    %eax,(%esp)
 84dbb95:	e8 b6 7b 60 00       	call   8ae3750 <_Unwind_Resume>
 84dbb9a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dbb9d:	89 04 24             	mov    %eax,(%esp)
 84dbba0:	e8 db 22 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbba5:	b8 00 00 00 00       	mov    $0x0,%eax
 84dbbaa:	83 c4 7c             	add    $0x7c,%esp
 84dbbad:	5b                   	pop    %ebx
 84dbbae:	5e                   	pop    %esi
 84dbbaf:	5f                   	pop    %edi
 84dbbb0:	5d                   	pop    %ebp
 84dbbb1:	c3                   	ret

```

```c
// Inter_ItemLimitEdition_Sell_Start::dispatch_sig @ 0x84db878

/* Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  CDataManager *pCVar7;
  CItemLimitEditionMgr *pCVar8;
  GameWorld *pGVar9;
  int iVar10;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  int local_28;
  uint local_24;
  int *local_20;
  
  local_28 = param_3;
  if (*(char *)(param_3 + 10) != '\0') {
    pCVar7 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
    cVar6 = CItemLimitEditionMgr::empty(pCVar8);
    if (cVar6 != '\x01') {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084db8d7 to 084db931 has its CatchHandler @ 084db934 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0xe1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
      pCVar7 = (CDataManager *)G_CDataManager();
      pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
      CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(pCVar8,local_44);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar9,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    pCVar7 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
    CItemLimitEditionMgr::clear(pCVar8);
  }
  local_24 = 0;
  do {
    if (*(uint *)(local_28 + 0xb) <= local_24) {
      if (*(int *)(local_28 + 0xb) != 0) {
        PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084dbb22 to 084dbb7c has its CatchHandler @ 084dbb7f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
        pCVar7 = (CDataManager *)G_CDataManager();
        pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
        CItemLimitEditionMgr::makeItemLimitEditionInfo(pCVar8,local_50);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
        pGVar9 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar9,local_50);
        PacketGuard::~PacketGuard(local_50);
      }
      return 0;
    }
    iVar10 = *(int *)(local_24 * 0x48 + 0x13 + local_28);
    pCVar7 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar7,iVar10);
    if (local_20 == (int *)0x0) {
      if (*(int *)(local_24 * 0x48 + 0x13 + local_28) == 1) {
LAB_084db9e3:
        iVar10 = local_24 * 0x48 + local_28;
        pCVar7 = (CDataManager *)G_CDataManager();
        pCVar8 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar7);
        CItemLimitEditionMgr::registItem(pCVar8,(stItemLimitEditionItemInfo_t *)(iVar10 + 0xf));
        uVar1 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x37);
        uVar2 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x2b);
        uVar3 = *(undefined4 *)(local_28 + local_24 * 0x48 + 0x27);
        uVar4 = *(undefined4 *)(local_24 * 0x48 + 0x13 + local_28);
        uVar5 = *(undefined4 *)(local_24 * 0x48 + 0xf + local_28);
        cMyTrace::cMyTrace(local_38,
                           "virtual int Inter_ItemLimitEdition_Sell_Start::dispatch_sig(CUser*, char*, int)"
                           ,0x4638,0);
        cMyTrace::operator()
                  (local_38,"ipg: %d, itemIdx: %d, totalCnt: %d/%d, sellEndTime: %d",uVar5,uVar4,
                   uVar3,uVar2,uVar1);
      }
    }
    else {
      cVar6 = (**(code **)(*local_20 + 0x10))(local_20);
      if (cVar6 == '\0') goto LAB_084db9e3;
    }
    local_24 = local_24 + 1;
  } while( true );
}

```

