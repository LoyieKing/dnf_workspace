# Dispatcher_CreatureSendMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08204710 Dispatcher_CreatureSendMessage::dispatch_sig  [0x08204710-0x8204b0b] ===
 8204710:	55                   	push   %ebp
 8204711:	89 e5                	mov    %esp,%ebp
 8204713:	57                   	push   %edi
 8204714:	56                   	push   %esi
 8204715:	53                   	push   %ebx
 8204716:	81 ec cc 02 00 00    	sub    $0x2cc,%esp
 820471c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820471f:	89 04 24             	mov    %eax,(%esp)
 8204722:	e8 65 5c ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8204727:	83 f8 02             	cmp    $0x2,%eax
 820472a:	0f 9e c0             	setle  %al
 820472d:	84 c0                	test   %al,%al
 820472f:	74 0a                	je     820473b <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8204731:	b8 00 00 00 00       	mov    $0x0,%eax
 8204736:	e9 c5 03 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 820473b:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204741:	83 c0 0d             	add    $0xd,%eax
 8204744:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204748:	8b 45 10             	mov    0x10(%ebp),%eax
 820474b:	89 04 24             	mov    %eax,(%esp)
 820474e:	e8 cf 87 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8204753:	83 f0 01             	xor    $0x1,%eax
 8204756:	84 c0                	test   %al,%al
 8204758:	74 29                	je     8204783 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x73>
 820475a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204761:	00 
 8204762:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204769:	00 
 820476a:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 8204771:	08 
 8204772:	c7 04 24 3d 9c 00 00 	movl   $0x9c3d,(%esp)
 8204779:	e8 59 c1 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820477e:	e9 7d 03 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 8204783:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204789:	83 c0 0e             	add    $0xe,%eax
 820478c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204790:	8b 45 10             	mov    0x10(%ebp),%eax
 8204793:	89 04 24             	mov    %eax,(%esp)
 8204796:	e8 15 89 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 820479b:	83 f0 01             	xor    $0x1,%eax
 820479e:	84 c0                	test   %al,%al
 82047a0:	74 29                	je     82047cb <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 82047a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82047a9:	00 
 82047aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82047b1:	00 
 82047b2:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 82047b9:	08 
 82047ba:	c7 04 24 3e 9c 00 00 	movl   $0x9c3e,(%esp)
 82047c1:	e8 11 c1 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82047c6:	e9 35 03 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 82047cb:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 82047d1:	83 c0 10             	add    $0x10,%eax
 82047d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82047d8:	8b 45 10             	mov    0x10(%ebp),%eax
 82047db:	89 04 24             	mov    %eax,(%esp)
 82047de:	e8 5d 8a 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82047e3:	83 f0 01             	xor    $0x1,%eax
 82047e6:	84 c0                	test   %al,%al
 82047e8:	74 29                	je     8204813 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x103>
 82047ea:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82047f1:	00 
 82047f2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82047f9:	00 
 82047fa:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 8204801:	08 
 8204802:	c7 04 24 3f 9c 00 00 	movl   $0x9c3f,(%esp)
 8204809:	e8 c9 c0 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820480e:	e9 ed 02 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 8204813:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204819:	83 c0 36             	add    $0x36,%eax
 820481c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204820:	8b 45 10             	mov    0x10(%ebp),%eax
 8204823:	89 04 24             	mov    %eax,(%esp)
 8204826:	e8 c5 88 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820482b:	83 f0 01             	xor    $0x1,%eax
 820482e:	84 c0                	test   %al,%al
 8204830:	74 29                	je     820485b <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x14b>
 8204832:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204839:	00 
 820483a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204841:	00 
 8204842:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 8204849:	08 
 820484a:	c7 04 24 40 9c 00 00 	movl   $0x9c40,(%esp)
 8204851:	e8 81 c0 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204856:	e9 a5 02 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 820485b:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 8204861:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8204865:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 820486c:	00 
 820486d:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204873:	83 c0 3a             	add    $0x3a,%eax
 8204876:	89 44 24 04          	mov    %eax,0x4(%esp)
 820487a:	8b 45 10             	mov    0x10(%ebp),%eax
 820487d:	89 04 24             	mov    %eax,(%esp)
 8204880:	e8 37 8a 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8204885:	83 f0 01             	xor    $0x1,%eax
 8204888:	84 c0                	test   %al,%al
 820488a:	74 29                	je     82048b5 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x1a5>
 820488c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204893:	00 
 8204894:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820489b:	00 
 820489c:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 82048a3:	08 
 82048a4:	c7 04 24 41 9c 00 00 	movl   $0x9c41,(%esp)
 82048ab:	e8 27 c0 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82048b0:	e9 4b 02 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 82048b5:	e8 e1 78 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 82048ba:	8d 95 a9 fe ff ff    	lea    -0x157(%ebp),%edx
 82048c0:	83 c2 3a             	add    $0x3a,%edx
 82048c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82048c7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82048ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 82048ce:	89 04 24             	mov    %eax,(%esp)
 82048d1:	e8 cc b2 15 00       	call   835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>
 82048d6:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 82048dd:	3c 07                	cmp    $0x7,%al
 82048df:	74 0f                	je     82048f0 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x1e0>
 82048e1:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 82048e8:	3c 01                	cmp    $0x1,%al
 82048ea:	0f 85 96 01 00 00    	jne    8204a86 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x376>
 82048f0:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 82048f6:	83 c0 14             	add    $0x14,%eax
 82048f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82048fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8204900:	89 04 24             	mov    %eax,(%esp)
 8204903:	e8 e8 87 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8204908:	83 f0 01             	xor    $0x1,%eax
 820490b:	84 c0                	test   %al,%al
 820490d:	74 29                	je     8204938 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x228>
 820490f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204916:	00 
 8204917:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820491e:	00 
 820491f:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 8204926:	08 
 8204927:	c7 04 24 53 9c 00 00 	movl   $0x9c53,(%esp)
 820492e:	e8 a4 bf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204933:	e9 c8 01 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 8204938:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 820493e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8204942:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8204949:	00 
 820494a:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204950:	83 c0 18             	add    $0x18,%eax
 8204953:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204957:	8b 45 10             	mov    0x10(%ebp),%eax
 820495a:	89 04 24             	mov    %eax,(%esp)
 820495d:	e8 5a 89 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8204962:	83 f0 01             	xor    $0x1,%eax
 8204965:	84 c0                	test   %al,%al
 8204967:	74 29                	je     8204992 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x282>
 8204969:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204970:	00 
 8204971:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204978:	00 
 8204979:	c7 44 24 04 a0 ef bc 	movl   $0x8bcefa0,0x4(%esp)
 8204980:	08 
 8204981:	c7 04 24 54 9c 00 00 	movl   $0x9c54,(%esp)
 8204988:	e8 4a bf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820498d:	e9 6e 01 00 00       	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 8204992:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 8204999:	3c 07                	cmp    $0x7,%al
 820499b:	0f 85 e5 00 00 00    	jne    8204a86 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x376>
 82049a1:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 82049a7:	89 04 24             	mov    %eax,(%esp)
 82049aa:	e8 37 6f 02 00       	call   822b8e6 <_ZN33Packet_Monitor_Other_Channel_ChatC1Ev>
 82049af:	8b 45 0c             	mov    0xc(%ebp),%eax
 82049b2:	89 04 24             	mov    %eax,(%esp)
 82049b5:	e8 94 72 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82049ba:	89 85 81 fd ff ff    	mov    %eax,-0x27f(%ebp)
 82049c0:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 82049c6:	88 85 89 fd ff ff    	mov    %al,-0x277(%ebp)
 82049cc:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 82049d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82049d6:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 82049dc:	83 c0 18             	add    $0x18,%eax
 82049df:	89 44 24 04          	mov    %eax,0x4(%esp)
 82049e3:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 82049e9:	83 c0 1c             	add    $0x1c,%eax
 82049ec:	89 04 24             	mov    %eax,(%esp)
 82049ef:	e8 ac 8e e7 ff       	call   807d8a0 <memcpy@plt>
 82049f4:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 82049fa:	88 85 a8 fd ff ff    	mov    %al,-0x258(%ebp)
 8204a00:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 8204a06:	89 44 24 08          	mov    %eax,0x8(%esp)
 8204a0a:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204a10:	83 c0 3a             	add    $0x3a,%eax
 8204a13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204a17:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 8204a1d:	83 c0 3b             	add    $0x3b,%eax
 8204a20:	89 04 24             	mov    %eax,(%esp)
 8204a23:	e8 78 8e e7 ff       	call   807d8a0 <memcpy@plt>
 8204a28:	0f b6 85 a8 fd ff ff 	movzbl -0x258(%ebp),%eax
 8204a2f:	0f b6 c0             	movzbl %al,%eax
 8204a32:	83 c0 3b             	add    $0x3b,%eax
 8204a35:	66 89 85 70 fd ff ff 	mov    %ax,-0x290(%ebp)
 8204a3c:	0f b7 85 70 fd ff ff 	movzwl -0x290(%ebp),%eax
 8204a43:	0f b7 c0             	movzwl %ax,%eax
 8204a46:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8204a49:	8d 9d 6e fd ff ff    	lea    -0x292(%ebp),%ebx
 8204a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204a52:	89 04 24             	mov    %eax,(%esp)
 8204a55:	e8 36 72 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8204a5a:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8204a60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204a64:	89 14 24             	mov    %edx,(%esp)
 8204a67:	e8 1e d6 f0 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8204a6c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8204a6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204a73:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8204a77:	89 04 24             	mov    %eax,(%esp)
 8204a7a:	e8 75 c3 26 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8204a7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8204a84:	eb 7a                	jmp    8204b00 <_ZN30Dispatcher_CreatureSendMessage12dispatch_sigEP5CUserR9PacketBuf+0x3f0>
 8204a86:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 8204a8c:	89 85 64 fd ff ff    	mov    %eax,-0x29c(%ebp)
 8204a92:	8b bd b9 fe ff ff    	mov    -0x147(%ebp),%edi
 8204a98:	0f b7 85 b7 fe ff ff 	movzwl -0x149(%ebp),%eax
 8204a9f:	0f b7 f0             	movzwl %ax,%esi
 8204aa2:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 8204aa9:	0f be d8             	movsbl %al,%ebx
 8204aac:	e8 f6 58 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8204ab1:	c7 44 24 24 72 00 00 	movl   $0x72,0x24(%esp)
 8204ab8:	00 
 8204ab9:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8204ac0:	00 
 8204ac1:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8204ac8:	00 
 8204ac9:	8b 95 64 fd ff ff    	mov    -0x29c(%ebp),%edx
 8204acf:	89 54 24 18          	mov    %edx,0x18(%esp)
 8204ad3:	8d 95 a9 fe ff ff    	lea    -0x157(%ebp),%edx
 8204ad9:	83 c2 3a             	add    $0x3a,%edx
 8204adc:	89 54 24 14          	mov    %edx,0x14(%esp)
 8204ae0:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8204ae4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8204ae8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8204aec:	8b 55 0c             	mov    0xc(%ebp),%edx
 8204aef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8204af3:	89 04 24             	mov    %eax,(%esp)
 8204af6:	e8 63 4c 4c 00       	call   86c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>
 8204afb:	b8 00 00 00 00       	mov    $0x0,%eax
 8204b00:	81 c4 cc 02 00 00    	add    $0x2cc,%esp
 8204b06:	5b                   	pop    %ebx
 8204b07:	5e                   	pop    %esi
 8204b08:	5f                   	pop    %edi
 8204b09:	5d                   	pop    %ebp
 8204b0a:	c3                   	ret
 8204b0b:	90                   	nop

```

```c
// Dispatcher_CreatureSendMessage::dispatch_sig @ 0x8204710

/* Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatureSendMessage::dispatch_sig
          (Dispatcher_CreatureSendMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CMonitorServerProxy *this_01;
  GameWorld *pGVar4;
  Packet_Monitor_Other_Channel_Chat local_296 [2];
  ushort local_294;
  undefined4 local_283;
  undefined1 local_27b;
  undefined1 auStack_27a [30];
  byte local_25c;
  undefined1 auStack_25b [269];
  char local_14e;
  ushort local_14d;
  uint local_14b;
  size_t local_147;
  char acStack_143 [30];
  size_t local_125;
  char acStack_121 [257];
  uint local_20;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = PacketBuf::get_byte(param_2,&local_14e);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_14d);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_14b);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,(int *)&local_125);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_str(param_2,acStack_121,0x100,local_125);
            if (cVar1 == '\x01') {
              this_00 = (CDataManager *)G_CDataManager();
              CDataManager::rewriteUsableEmoticon(this_00,param_1,acStack_121);
              if ((local_14e == '\a') || (local_14e == '\x01')) {
                cVar1 = PacketBuf::get_int(param_2,(int *)&local_147);
                if (cVar1 != '\x01') {
                  uVar3 = LineFunc(0x9c53,
                                   "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar3;
                }
                cVar1 = PacketBuf::get_str(param_2,acStack_143,0x1e,local_147);
                if (cVar1 != '\x01') {
                  uVar3 = LineFunc(0x9c54,
                                   "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar3;
                }
                if (local_14e == '\a') {
                  Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat(local_296);
                  local_283 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  local_27b = (undefined1)local_147;
                  memcpy(auStack_27a,acStack_143,local_147);
                  local_25c = (byte)local_125;
                  memcpy(auStack_25b,acStack_121,local_125);
                  local_294 = local_25c + 0x3b;
                  local_20 = (uint)local_294;
                  uVar3 = CUser::GetServerGroup(param_1);
                  this_01 = (CMonitorServerProxy *)
                            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                      (GlobalData::s_monitor_proxy_mgr,uVar3);
                  CMonitorServerProxy::SendPacket(this_01,(char *)local_296,local_20);
                  return 0;
                }
              }
              pGVar4 = (GameWorld *)G_GameWorld();
              GameWorld::send_chat_msg
                        (pGVar4,param_1,(int)local_14e,local_14d,local_14b,acStack_121,local_125,0,0
                         ,0x72);
              uVar3 = 0;
            }
            else {
              uVar3 = LineFunc(0x9c41,
                               "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(40000,
                             "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(39999,
                           "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x9c3e,
                         "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0x9c3d,
                       "virtual int Dispatcher_CreatureSendMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```

